// FUN_00020688 @ 00020688  size=108  callers=0
// program: bmminer


int FUN_00020688(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (DAT_0071c3ec <= (int)param_1) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return -0x7ffffbff;
  }
  if (DAT_0071c440 == 0) {
    iVar1 = FUN_0001ea90(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  *(undefined4 *)(DAT_0071c448 + param_1 * 0x210 + 4) = param_2;
  return iVar1;
}

