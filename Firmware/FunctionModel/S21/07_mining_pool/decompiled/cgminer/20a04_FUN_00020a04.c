// FUN_00020a04 @ 00020a04  size=56  callers=6
// program: cgminer


undefined4 FUN_00020a04(int *param_1,int *param_2)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  
  dVar2 = (double)VectorSignedToFloat(param_1[1] - param_2[1],(byte)(in_fpscr >> 0x16) & 3);
  dVar1 = (double)VectorSignedToFloat(*param_1 - *param_2,(byte)(in_fpscr >> 0x16) & 3);
  return SUB84(dVar2 / 1000000.0 + dVar1,0);
}

