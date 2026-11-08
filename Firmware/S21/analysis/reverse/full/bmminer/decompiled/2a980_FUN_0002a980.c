// FUN_0002a980 @ 0002a980  size=104  callers=1
// program: bmminer


undefined4 FUN_0002a980(int param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  if (DAT_00a4eda8 <= param_1 || param_1 < 0) {
    return 0x80200000;
  }
  if ((DAT_00a4ee08 == 0) && (iVar1 = FUN_0002998c(), iVar1 < 0)) {
    uVar2 = VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    return (int)uVar2;
  }
  return (int)*(undefined8 *)(DAT_00a4ee10 + param_1 * 0x210 + 8);
}

