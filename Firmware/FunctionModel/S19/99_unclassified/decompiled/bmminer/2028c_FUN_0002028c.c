// FUN_0002028c @ 0002028c  size=132  callers=1
// program: bmminer


int FUN_0002028c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (DAT_0071c434 <= (int)param_1) {
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
  if (*(byte *)(DAT_0071c450 + param_1 * 8) == param_2) {
    return iVar1;
  }
  *(char *)(DAT_0071c450 + param_1 * 8) = (char)param_2;
  if (param_2 == 0) {
    DAT_0071c44c = DAT_0071c44c + -1;
  }
  else {
    DAT_0071c44c = DAT_0071c44c + '\x01';
  }
  return iVar1;
}

