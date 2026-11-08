// FUN_0002a7a4 @ 0002a7a4  size=132  callers=1
// program: bmminer


int FUN_0002a7a4(uint param_1,uint param_2)

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
  if (*(byte *)(DAT_00a4ee18 + param_1 * 8) == param_2) {
    return iVar1;
  }
  *(char *)(DAT_00a4ee18 + param_1 * 8) = (char)param_2;
  if (param_2 == 0) {
    DAT_00a4ee14 = DAT_00a4ee14 + -1;
  }
  else {
    DAT_00a4ee14 = DAT_00a4ee14 + '\x01';
  }
  return iVar1;
}

