module \$_DFF_P_ (input D, C, output Q);
    wire QN;
    DFFHQNx1_ASAP7_75t_R _TECHMAP_REPLACE_ (.D(D), .CLK(C), .QN(QN));
    assign Q = ~QN;
endmodule
module \$_DFF_N_ (input D, C, output Q);
    wire QN;
    DFFHQNx1_ASAP7_75t_R _TECHMAP_REPLACE_ (.D(D), .CLK(C), .QN(QN));
    assign Q = ~QN;
endmodule
module \$_DFFE_PP_ (input D, C, E, output Q);
    wire QN, D_in;
    assign D_in = E ? D : Q;
    DFFHQNx1_ASAP7_75t_R _TECHMAP_REPLACE_ (.D(D_in), .CLK(C), .QN(QN));
    assign Q = ~QN;
endmodule
module \$_SDFF_PN0_ (input D, C, R, output Q);
    wire QN, D_in;
    assign D_in = R ? 1'b0 : D;
    DFFHQNx1_ASAP7_75t_R _TECHMAP_REPLACE_ (.D(D_in), .CLK(C), .QN(QN));
    assign Q = ~QN;
endmodule
module \$_DFFE_PN_ (input D, C, E, output Q);
    wire QN, D_in;
    assign D_in = (~E) ? D : Q;
    DFFHQNx1_ASAP7_75t_R _TECHMAP_REPLACE_ (.D(D_in), .CLK(C), .QN(QN));
    assign Q = ~QN;
endmodule
