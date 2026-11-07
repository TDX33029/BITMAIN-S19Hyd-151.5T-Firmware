// FUN_0002013c @ 0002013c  size=140
// callers: [FUN_00036be4, FUN_00037218, FUN_0003670c]

int FUN_0002013c(uint param_1,uint param_2)

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
  if (*(byte *)(DAT_0071c448 + param_1 * 0x210) == param_2) {
    return iVar1;
  }
  *(char *)(DAT_0071c448 + param_1 * 0x210) = (char)param_2;
  if (param_2 == 0) {
    DAT_0071c444 = DAT_0071c444 + -1;
  }
  else {
    DAT_0071c444 = DAT_0071c444 + '\x01';
  }
  return iVar1;
}


