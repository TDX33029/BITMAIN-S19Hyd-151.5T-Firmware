// FUN_000243f0 @ 000243f0  size=140  callers=6
// program: bmminer


undefined4 FUN_000243f0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  char acStack_2010 [8192];
  
  if (param_2 == 0) {
    dVar2 = 0.0;
  }
  else {
    uVar1 = FUN_00075a60();
    dVar2 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    dVar2 = dVar2 / 100.0;
  }
  if (4 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"read_feedback_voltage chain = %d, voltage = %f\n",param_1,dVar2);
    FUN_0004948c(4,acStack_2010,0);
  }
  return SUB84(dVar2,0);
}

