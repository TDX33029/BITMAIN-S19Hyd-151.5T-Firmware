// FUN_0002a890 @ 0002a890  size=96  callers=2
// program: bmminer


int FUN_0002a890(int param_1)

{
  int iVar1;
  
  if (DAT_00a4ee00 <= param_1 || param_1 < 0) {
    return -0x7ffffbff;
  }
  if ((DAT_00a4ee08 == 0) && (iVar1 = FUN_0002998c(), iVar1 < 0)) {
    return iVar1;
  }
  return *(int *)(DAT_00a4ee18 + param_1 * 8 + 4);
}

