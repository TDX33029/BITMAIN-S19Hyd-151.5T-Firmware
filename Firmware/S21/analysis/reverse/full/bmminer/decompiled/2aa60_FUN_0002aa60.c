// FUN_0002aa60 @ 0002aa60  size=108  callers=3
// program: bmminer


int FUN_0002aa60(uint param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (DAT_00a4eda8 <= (int)param_1) {
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
  *(undefined1 *)(DAT_00a4ee10 + param_1 * 0x210 + 1) = param_2;
  return iVar1;
}

