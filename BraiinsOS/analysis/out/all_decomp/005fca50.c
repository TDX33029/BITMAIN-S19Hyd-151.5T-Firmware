// FUN_005fca50 @ 005fca50 size=160 calls_out=0 calls_in=2
// strings: 

ulonglong FUN_005fca50(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = param_1[3];
  if (param_2 < uVar1) {
    iVar4 = param_1[1];
    param_1[3] = uVar1 + ~param_2;
    iVar2 = *param_1 + param_2;
    bVar6 = param_2 < (uint)(iVar4 - *param_1);
    if (bVar6) {
      iVar4 = iVar2 + 1;
    }
    *param_1 = iVar4;
    if (bVar6) {
      iVar4 = param_1[2];
      param_1[2] = iVar4 + param_2 + 1;
      return CONCAT44(iVar2,iVar4 + param_2);
    }
  }
  else if (uVar1 != 0) {
    iVar2 = param_1[1];
    uVar5 = uVar1 - 1;
    uVar3 = iVar2 - *param_1;
    bVar6 = uVar5 < uVar3;
    if (bVar6) {
      uVar3 = param_1[2];
      iVar2 = *param_1 + uVar5 + 1;
    }
    *param_1 = iVar2;
    if (bVar6) {
      param_1[2] = uVar3 + uVar1;
    }
    param_1[3] = 0;
    return (ulonglong)uVar3;
  }
  return (ulonglong)param_2;
}

