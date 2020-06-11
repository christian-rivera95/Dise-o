module MultS4Bits(
    input [3:0] x,
    input [3:0] y,
    output [7:0] prod
);
    wire [3:0] signx, signy, offsetx, offsety;
    wire [7:0] signxSigny, signxOffsety, signyOffsetx, offsetxOffsety;

    assign signx = {x[3],3'b0};
    assign signy = {y[3],3'b0};
    assign offsetx = {1'b0,x[2],x[1],x[0]};
    assign offsety = {1'b0,y[2],y[1],y[0]};

    MultU4Bits signs(signx, signy,signxSigny);
    MultU4Bits signs(signx, offsety,signxOffsety);
    MultU4Bits signs(signy, offsetx,signyOffsetx);
    MultU4Bits signs(offsetx, offsety,offsetxOffsety);

    assign prod = signxSigny + signxOffsety + signyOffsetx + offsetxOffsety;

endmodule
