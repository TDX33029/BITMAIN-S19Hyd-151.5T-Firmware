// FUN_0002e320 @ 0002e320  size=104  callers=3
// program: bmminer


undefined4 FUN_0002e320(void)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = FUN_0002c3f4();
  if ((iVar1 == 0) || (iVar1 = FUN_0002c474(), iVar1 == 0)) {
    dVar4 = (double)VectorSignedToFloat(DAT_00a59168,(byte)(in_fpscr >> 0x16) & 3);
    dVar5 = (double)VectorSignedToFloat(DAT_00a5f22c,(byte)(in_fpscr >> 0x16) & 3);
    return SUB84(DAT_000c9470 / (dVar4 - dVar5),0);
  }
  uVar2 = FUN_0002c654();
  uVar3 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  return (int)uVar3;
}

