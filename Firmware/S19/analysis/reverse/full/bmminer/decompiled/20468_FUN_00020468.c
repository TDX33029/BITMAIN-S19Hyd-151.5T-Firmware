// FUN_00020468 @ 00020468  size=104  callers=1
// program: bmminer


undefined4 FUN_00020468(int param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  if (DAT_0071c3ec <= param_1 || param_1 < 0) {
    return 0x80200000;
  }
  if ((DAT_0071c440 == 0) && (iVar1 = FUN_0001ea90(), iVar1 < 0)) {
    uVar2 = VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    return (int)uVar2;
  }
  return (int)*(undefined8 *)(DAT_0071c448 + param_1 * 0x210 + 8);
}

