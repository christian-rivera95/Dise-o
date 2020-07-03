module Exp(
    input clk,
    input rst,
    input [31:0] x,
    input [31:0] n,
    output [31:0] res
);
    reg [31:0] y;
    reg [31:0] nx;
    reg [31:0] nn;

    reg[31:0]result;
    
    reg [3:0] cs /* verilator public */; 
    reg [3:0] ns;

    assign res = result;

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
            4'd0:begin
                nx = x;
                nn = n;
            end
            4'd1:begin
                y = 32'd1;
            end
            4'd2:begin
               result = 32'd1;
            end
            4'd4:begin
               nx = nx*nx;
               nn = nn/nx;
            end
            4'd5:begin
              y = nx*y;
              nx = nx*nx;
              nn = (nn-1) / 2;
            end
            4'd8:begin
                result = nx * y;
            end
            default:begin
                result = nx * y;
            end 
        endcase
    end

endmodule