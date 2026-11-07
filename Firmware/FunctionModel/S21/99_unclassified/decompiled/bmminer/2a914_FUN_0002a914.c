// FUN_0002a914 @ 0002a914  size=108  callers=1
// program: bmminer


int FUN_0002a914(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_3 >> 0x1f;
  if (DAT_00a4eda8 <= (int)param_3) {
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
  iVar3 = DAT_00a4ee10 + param_3 * 0x210;
  *(undefined4 *)(iVar3 + 8) = param_1;
  *(undefined4 *)(iVar3 + 0xc) = param_2;
  return iVar1;
}

