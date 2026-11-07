// FUN_0002b0f0 @ 0002b0f0  size=84  callers=1
// program: bmminer


undefined4 FUN_0002b0f0(int param_1,int param_2,int param_3,int param_4)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  
  dVar2 = (double)VectorSignedToFloat(param_2 - param_4,(byte)(in_fpscr >> 0x16) & 3);
  dVar1 = (double)VectorSignedToFloat(param_1 - param_3,(byte)(in_fpscr >> 0x16) & 3);
  return SUB84((dVar2 / 1000.0) / 1000.0 + dVar1,0);
}

