// FUN_0172038c @ 0172038c size=220 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_0172038c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  iVar1 = (int)param_2 >> 5;
  if (iVar1 < param_1[1]) {
    iVar3 = *param_1;
  }
  else {
    iVar4 = iVar1 + 1;
    iVar2 = FUN_0171464c(param_1,iVar4);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = param_1[1];
    iVar3 = *param_1;
    if (iVar2 < iVar4) {
      FUN_016dd606(iVar3 + iVar2 * 4,0,((1 - iVar2) + iVar1) * 4);
    }
    param_1[1] = iVar4;
  }
  *(uint *)(iVar3 + iVar1 * 4) = *(uint *)(iVar3 + iVar1 * 4) | 1 << (param_2 & 0x1f);
  return 1;
}

