// FUN_0002ac0c @ 0002ac0c  size=100  callers=1
// program: bmminer


int FUN_0002ac0c(int param_1)

{
  int iVar1;
  
  if (DAT_00a4eda8 <= param_1 || param_1 < 0) {
    return -0x7ffffbff;
  }
  if ((DAT_00a4ee08 == 0) && (iVar1 = FUN_0002998c(), iVar1 < 0)) {
    return iVar1;
  }
  return *(int *)(DAT_00a4ee10 + param_1 * 0x210 + 4);
}

