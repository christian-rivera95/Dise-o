module Exp(
    input clk,
    input rst,
    input [31:0] x,
    input [31:0] n,
    output [31:0] res
);
    reg [31:0]y;
    reg[31:0]final;
    reg [3:0]cs; /* verilator publics */
    reg [3:0]ns;

    assign res = final;

    //current state
    always @(*)begin
        cs <= (rst)? 4'd0 : ns;
    end 

    // next state
    always @(*)begin
        case (cs)
            4'd0 :  ns = (n==0)? 4'd2: 4'd1;
            4'd1 :  ns = (n>1)? 4'd3 : 4'd7;
            4'd2 :  ns = 4'd2;
            4'd3 :  ns = ((n&1) ==0)?4'd4:4'd5;
            4'd4 :  ns = 4'd6;
            4'd5 :  ns = 4'd6;
            4'd6 :  ns = (n>1)?4'd3:4'd8;
            4'd7 :  ns = 4'd8;
            default: ns =4'd0;
        endcase
    end

    always @(*)begin
        case (cs)
            4'd1:begin
                y <= 32'd1;
            end
            4'd2:begin
               final <= 32'd1;
            end
            4'd4:begin
               x <= x*x;
               n <= n/x;
            end
            4'd5:begin
              y <= x*y;
              x = x*x;
              n = (n-1) / 2;
            end
            4'd8:begin
                final <= 
            end
            default:begin
                final <= x*y;
            end 
        endcase
    end

endmodule