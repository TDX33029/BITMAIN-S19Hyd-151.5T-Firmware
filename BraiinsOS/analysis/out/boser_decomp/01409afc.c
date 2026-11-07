// FUN_01409afc @ 01409afc size=132 calls_out=2 calls_in=2
// strings: 

void FUN_01409afc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  *param_1 = 4;
  param_1[1] = 4;
  if (iVar2 != iVar1) {
    FUN_014098a0(iVar1,((uint)(iVar2 - iVar1) >> 2) * -0x55555555);
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    if (param_1[3] != iVar2) {
      FUN_01bed864(*(int *)(iVar3 + 4) + iVar2 * 0xc,*(int *)(iVar3 + 4) + param_1[3] * 0xc,
                   iVar1 * 0xc);
    }
    *(int *)(iVar3 + 8) = iVar1 + iVar2;
  }
  return;
}

