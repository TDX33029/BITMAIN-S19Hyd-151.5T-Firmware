// FUN_0002a828 @ 0002a828  size=104  callers=1
// program: bmminer


int FUN_0002a828(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (DAT_00a4ee00 <= (int)param_1) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return -0x7ffffbff;
  }
  if (DAT_00a4ee08 == 0) {
    iVar1 = FUN_0002998c(0);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  *(undefined4 *)(DAT_00a4ee18 + param_1 * 8 + 4) = param_2;
  return iVar1;
}

