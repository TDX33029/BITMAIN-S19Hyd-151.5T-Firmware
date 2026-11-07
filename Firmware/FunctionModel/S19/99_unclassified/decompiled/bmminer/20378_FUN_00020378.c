// FUN_00020378 @ 00020378  size=96  callers=2
// program: bmminer


int FUN_00020378(int param_1)

{
  int iVar1;
  
  if (DAT_0071c434 <= param_1 || param_1 < 0) {
    return -0x7ffffbff;
  }
  if ((DAT_0071c440 == 0) && (iVar1 = FUN_0001ea90(), iVar1 < 0)) {
    return iVar1;
  }
  return *(int *)(DAT_0071c450 + param_1 * 8 + 4);
}

