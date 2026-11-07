// FUN_000205b4 @ 000205b4  size=100  callers=5
// program: bmminer


uint FUN_000205b4(int param_1)

{
  uint uVar1;
  
  if (DAT_0071c3ec <= param_1 || param_1 < 0) {
    return 0x80000401;
  }
  if ((DAT_0071c440 == 0) && (uVar1 = FUN_0001ea90(), (int)uVar1 < 0)) {
    return uVar1;
  }
  return (uint)*(byte *)(DAT_0071c448 + param_1 * 0x210 + 1);
}

