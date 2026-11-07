// FUN_000203fc @ 000203fc  size=108  callers=1
// program: bmminer


int FUN_000203fc(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_3 >> 0x1f;
  if (DAT_0071c3ec <= (int)param_3) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return -0x7ffffbff;
  }
  if (DAT_0071c440 == 0) {
    iVar1 = FUN_0001ea90(param_3);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  iVar3 = DAT_0071c448 + param_3 * 0x210;
  *(undefined4 *)(iVar3 + 8) = param_1;
  *(undefined4 *)(iVar3 + 0xc) = param_2;
  return iVar1;
}

