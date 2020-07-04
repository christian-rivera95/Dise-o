module Factorial(
  input clk,
  input rst,
  input [31:0] n,
  output factorial;
)

  reg [31:0]a;
  reg [31:0]b;

  reg [1:0]ns;
  reg [1:0]cs;

  assign factorial = a;

//current state
always @(*)begin
    cs <= (rst)? 2'd0 : ns;
end

// next state
always @(*)begin
  case (cs)
      2'd0 :  ns = 2'd1;
      2'd1 :  ns = 2'd2;
      2'd2 :  ns = (b==32'd0)? 2'd3:2'd1;
      default: ns =2'd0;
  endcase
end

//states
always @(*)begin
   case (cs)
       2'd0:begin 
        a <= 1;
        b <= n;
       end 
       2'd1:begin
        a <= a*b;
        b <= b-1;
       end
       2'd2:begin
         a <= a;
         b <= b;
       end
       2'd3:begin
        a <= a;
        b <= b;
       endmodule
       default:begin
         a <= a;
         b <= b;
       end 
   endcase
 end

endmodule