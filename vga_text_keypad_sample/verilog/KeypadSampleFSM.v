module KeypadSampleFSM(
    input clk,
    input rst,
    input [31:0] timer,
    input [7:0] keypad,
    output reg [11:0] vga_addr,
    output reg vga_we,
    output reg [15:0] vga_data
);

    reg [5:0] cs /*verilator public*/; // Current state
    reg [5:0] ns; // Next state

    reg [3:0] wb; //write background
    reg [3:0] nwb; //Next write background state

    reg [3:0] csM1; // Current state
    reg [3:0] nsM1; // Next state
    reg [3:0] csM2; // Current state
    reg [3:0] nsM2; // Next state
    reg [3:0] csM3; // Current state
    reg [3:0] nsM3; // Next state
    reg [3:0] csM4; // Current state
    reg [3:0] nsM4; // Next state

    reg[6:0] row /*verilator public*/; // Current row
    reg[6:0] col /*verilator public*/; // Current col

    reg[6:0] meteor1Row; // Current row
    reg[6:0] meteor1Col; // Current col
    reg[6:0] meteor2Row; // Current row
    reg[6:0] meteor2Col; // Current col
    reg[6:0] meteor3Row; // Current row
    reg[6:0] meteor3Col; // Current col
    reg[6:0] meteor4Row; // Current row
    reg[6:0] meteor4Col; // Current col

    reg deploy1;
    reg deploy2;
    reg deploy3;
    reg deploy4;

    reg[11:0] vga_addr_reg /*verilator public*/; // VGA address
    reg[11:0] vga_addr_meteor1; // VGA address
    reg[11:0] vga_addr_meteor2; // VGA address
    reg[11:0] vga_addr_meteor3; // VGA address
    reg[11:0] vga_addr_meteor4; // VGA address
    reg [31:0] delay; // Used for delay

    assign vga_addr = vga_addr_reg;

    // VGA Write Enable
    always @ (*)
    begin
        case (cs)
            6'd02: vga_we = 1'b1;
            6'd11: vga_we = 1'b1;
            default:
                vga_we = 1'b1;
        endcase
    end

    // VGA data
    // always @ (*)
    // begin
    //     case (cs)
    //         6'd02: vga_data = 16'h9f02;
    //         6'd11: vga_data = 16'h0020;
    //         default:
    //             vga_data = 16'h0;
    //     endcase
    // end

    // Next state
    always @ (posedge clk)
    begin
        if(wb == 10)begin
            case (cs)
                6'd0: ns = 6'd1; // inicializa posicion meteoritos
                6'd1: ns = 6'd2; // asigna posicion meteoritos
                6'd2: begin
                  ns = 6'd3; // dibuja meteoritos
                  vga_addr_meteor1 = vga_addr_reg;
                end 

                6'd3:begin
                  ns = 6'd4; //asigna posicion meteorito 2
                  
                end 
                6'd4:begin
                  ns = 6'd5;
                  vga_addr_meteor2 = vga_addr_reg;
                end 
                6'd5:begin
                  ns = 6'd6; //asigna posicion meteorito 3
                end 
                6'd6:begin
                  ns = 6'd7;
                  vga_addr_meteor3 = vga_addr_reg;
                end 
                6'd7:begin
                  ns = 6'd8; //asigna posicion meteorito 4
                end
                6'd8: ns = 6'd9;
                6'd9: ns = 6'd10;
                6'd10: ns = 6'd11;
                6'd11: ns = 6'd12;
                6'd12: ns = 6'd13;
                6'd13: ns = 6'd14;
                6'd14: ns = 6'd15;
                6'd15: ns = 6'd16;
                6'd16: ns = 6'd17;

                6'd17: ns = 6'd18;
                6'd18: ns = (timer < delay)? 6'd19 : 6'd20;
                6'd19: ns = 6'd18;

                6'd20: ns = 6'd21;
                6'd21: ns = 6'd22;
                6'd22: ns = 6'd23;
                6'd23: ns = 6'd24;
                6'd24: ns = 6'd25;
                6'd25: ns = 6'd26;
                6'd26: ns = 6'd27;
                6'd27: ns = 6'd28;
                6'd28: ns = 6'd29;
                6'd29: ns = 6'd30;
                6'd30: ns = 6'd31;
                6'd31: ns = 6'd32;
                6'd32: ns = 6'd33;
                6'd33:begin
                  ns = 6'd34;
                  vga_data = 16'h0020;
                end 
                6'd34:begin
                  ns = 6'd35;
                  vga_addr_reg <= vga_addr_meteor3;
                end 
                6'd35:begin
                    ns = 6'd36;
                    vga_data = 16'h0020;
                end
                6'd36:begin
                  ns = 6'd37;
                  vga_addr_reg <= vga_addr_meteor2;
                end 
                6'd37:begin
                    ns = 6'd38;
                    vga_data = 16'h0020;
                end
                6'd38:begin
                    ns = 6'd39;
                    vga_addr_reg <= vga_addr_meteor1;
                end 
                6'd39:begin
                    ns = 6'd0;
                    vga_data = 16'h0020;
                end 
                default:
                    ns = 6'd0;
            endcase
        end
    end

    always @ (posedge clk)
    begin
        if (rst)begin
            cs <= 6'd0;
            wb <= 4'd0;
            meteor1Row = 7'd1;
            meteor1Col = 7'd2;

            meteor2Row = 7'd1;
            meteor2Col = 7'd7;

            meteor3Row = 7'd1;
            meteor3Col = 7'd12;

            meteor4Row = 7'd1;
            meteor4Col = 7'd17;
        end
        else
        begin
            cs <= ns;
            wb <= nwb;
        end
    end

    always @(posedge clk)begin

        if(wb != 4'd10 )begin
            case(wb)
            4'd0:begin 
                nwb = 4'd1;
                col <= 7'd0;
                row <= 7'd1;
   
            end
            4'd1: begin
                    if(col == 7'd0 && row < 7'd20)
                        nwb = 4'd2;
                        vga_addr_reg <= (row * 7'd80 )+ (col*7'd1);
                if(col < 7'd30 && row == 7'd20)
                    nwb = 4'd4;
                    vga_addr_reg <= (row * 7'd80 )+ (col*7'd1);
                if(col == 30 && row > 0)
                    nwb = 4'd6;
                    vga_addr_reg <= (row * 7'd80 )+ (col*7'd1);
                if(col > 0 && row == 0)
                        nwb = 4'd8;
                        vga_addr_reg <= (row * 7'd80 )+ (col*7'd1);
                if(col == 0 && row == 0)begin
                    nwb = 4'd10;
                    end

            end
            4'd2: begin 
                nwb = 4'd3;
                vga_data = 16'h0f0f;
            end
            4'd3: begin 
                nwb = 4'd1;
                row <= row +1;
            end
            4'd4: begin 
                nwb = 4'd5;
                vga_data = 16'h0f08;
            end
            4'd5: begin 
                nwb = 4'd1;
                col <= col +1;
            end
            4'd6: begin 
                nwb = 4'd7;
                if(row != 20)
                vga_data= 16'h0f0f;
            end
            4'd7: begin 
                nwb = 4'd1;
                row <= row -1;
            end
            4'd8: begin 
                nwb = 4'd9;
                vga_data= 16'h0f09;
            end
            4'd9: begin 
                nwb = 4'd1;
                col <= col - 1;
            end
            
           
            default:nwb = 4'd1;
        endcase
    end


end

    // Register col
    // always @ (posedge clk)
    // begin
    //     case (cs)
    //         4'd0: col <= 7'd10;
    //         4'd7: col <= 7'd0;
    //         4'd9: col <= col + 1;
    //         default:
    //             col <= col;
    //     endcase
    // end

    // Register row
    // always @ (posedge clk)
    // begin
    //     case (cs)
    //         4'd0: row <= 7'd10;
    //         4'd8: row <= 7'd0;
    //         4'd10: row <= row + 7'd1;
    //         default:
    //             row <= row;
    //     endcase
    // end

    // Register delay
    always @ (posedge clk)
    begin
        if (cs == 6'd17)
            delay <= timer + 32'd1;
    end

    // Register vga_addr
    always @ (posedge clk)
    begin
        if (cs == 6'd0 && wb == 10)
            vga_addr_reg <= (meteor1Row * 7'd80) + (meteor1Col * 7'd1);
    end

    // Register vga_addr meteorito 2
    always @ (posedge clk)
    begin
        if (cs == 6'd3 && wb == 10)
            vga_addr_reg <= (meteor2Row * 7'd80) + (meteor2Col * 7'd1);
    end

    // Register vga_addr meteorito 3
    always @ (posedge clk)
    begin
        if (cs == 6'd5 && wb == 10)
            vga_addr_reg <= (meteor3Row * 7'd80) + (meteor3Col * 7'd1);
    end

    // Register vga_addr meteorito 4
    always @ (posedge clk)
    begin
        if (cs == 6'd7 && wb == 10)
            vga_addr_reg <= (meteor4Row * 7'd80) + (meteor4Col * 7'd1);
    end

    //next state meteor 1
    always @ (posedge clk)
        begin
            if(cs == 38)
            begin
                if (meteor1Row<19)
                    meteor1Row = meteor1Row + 1;
                else
                begin
                    meteor1Row = 1;
                    if (meteor1Col<18)
                        meteor1Col = meteor1Col + 5;
                    else 
                        meteor1Col = 2;
                end
            end
        end

    //next state meteor 2
    always @ (posedge clk)
        begin
            if(cs == 36)
            begin
                if (meteor2Row<19)
                    meteor2Row = meteor2Row + 1;
                else
                begin
                    meteor2Row = 1;
                    if (meteor2Col<18)
                        meteor2Col = meteor2Col + 6;
                    else 
                        meteor2Col = 1;
                end
            end
        end

    //next state meteor 3
    always @ (posedge clk)
        begin
            if(cs == 34)
            begin
                if (meteor3Row<19)
                    meteor3Row = meteor3Row + 1;
                else
                begin
                    meteor3Row = 1;
                    if (meteor3Col<18)
                        meteor3Col = meteor3Col + 4;
                    else 
                        meteor3Col = 6;
                end
            end
        end

    //next state meteor 4
    always @ (posedge clk)
        begin
            if(cs == 32)
            begin
                if (meteor4Row<19)
                    meteor4Row = meteor4Row + 1;
                else
                begin
                    meteor4Row = 1;
                    if (meteor4Col<18)
                        meteor4Col = meteor4Col + 12;
                    else 
                        meteor4Col = 17;
                end
            end
        end

    // Register vga_meteor1
    always @ (posedge clk)
    begin
        if (cs == 6'd1)
            vga_data = 16'h0e09;
    end

    // Register vga_meteor2
    always @ (posedge clk)
    begin
        if (cs == 6'd4)
            vga_data = 16'h0e09;
    end

    // Register vga_meteor3
    always @ (posedge clk)
    begin
        if (cs == 6'd5)
            vga_data = 16'h0e09;
    end

    // Register vga_meteor4
    always @ (posedge clk)
    begin
        if (cs == 6'd6)
            vga_data = 16'h0e09;
    end

    //current state meteor1

    //next state meteor1

    // VGA Write Enable, Write Address, Data
    // always @ (*)
    // begin
    //     case (cs)
    //         3'd00: begin
    //             vga_we = 1'b0;
    //             vga_addr = 12'dx;
    //             vga_data = 16'hx;
    //         end
    //         3'd01: begin
    //             vga_we = 1'b1;
    //             vga_addr = 12'd810;
    //             vga_data = 16'h0e4c;
    //         end
    //         3'd02: begin
    //             vga_we = 1'b1;
    //             vga_addr = 12'd810;
    //             vga_data = 16'h0e52;
    //         end
    //         3'd03: begin
    //             vga_we = 1'b1;
    //             vga_addr = 12'd810;
    //             vga_data = 16'h0e44;
    //         end
    //         3'd04: begin
    //             vga_we = 1'b1;
    //             vga_addr = 12'd810;
    //             vga_data = 16'h0e55;
    //         end
    //         default: begin
    //             vga_we = 1'b0;
    //             vga_addr = 12'dx;
    //             vga_data = 16'hx;
    //         end
    //     endcase
    // end

    // Next state
    // always @ (*)
    // begin
    //     case (cs)
    //         3'd0: begin
    //             if (keypad[0])
    //                 ns = 3'd1;
    //             else if (keypad[1])
    //                 ns = 3'd2;
    //             else if (keypad[2])
    //                 ns = 3'd3;
    //             else if (keypad[3])
    //                 ns = 3'd4;
    //             else
    //                 ns = 3'd0;
    //         end
    //         3'd1: ns = 3'd0;
    //         3'd2: ns = 3'd0;
    //         3'd3: ns = 3'd0;
    //         3'd4: ns = 3'd0;
    //         default:
    //             ns = 3'd0;
    //     endcase
    // end
endmodule
