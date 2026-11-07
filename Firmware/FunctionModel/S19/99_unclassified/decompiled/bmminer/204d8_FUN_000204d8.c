// FUN_000204d8 @ 000204d8  size=112  callers=1
// program: bmminer


int FUN_000204d8(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
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
  iVar3 = DAT_0071c448 + param_1 * 0x210;
  *(char *)(iVar3 + 1) = *(char *)(iVar3 + 1) + '\x01';
  return iVar1;
}

