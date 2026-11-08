// FUN_000206f4 @ 000206f4  size=100  callers=1
// program: bmminer


int FUN_000206f4(int param_1)

{
  int iVar1;
  
  if (DAT_0071c3ec <= param_1 || param_1 < 0) {
    return -0x7ffffbff;
  }
  if ((DAT_0071c440 == 0) && (iVar1 = FUN_0001ea90(), iVar1 < 0)) {
    return iVar1;
  }
  return *(int *)(DAT_0071c448 + param_1 * 0x210 + 4);
}

