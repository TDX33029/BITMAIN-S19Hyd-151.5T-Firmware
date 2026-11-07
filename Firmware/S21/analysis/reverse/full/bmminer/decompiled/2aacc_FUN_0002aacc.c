// FUN_0002aacc @ 0002aacc  size=100  callers=5
// program: bmminer


uint FUN_0002aacc(int param_1)

{
  uint uVar1;
  
  if (DAT_00a4eda8 <= param_1 || param_1 < 0) {
    return 0x80000401;
  }
  if ((DAT_00a4ee08 == 0) && (uVar1 = FUN_0002998c(), (int)uVar1 < 0)) {
    return uVar1;
  }
  return (uint)*(byte *)(DAT_00a4ee10 + param_1 * 0x210 + 1);
}

