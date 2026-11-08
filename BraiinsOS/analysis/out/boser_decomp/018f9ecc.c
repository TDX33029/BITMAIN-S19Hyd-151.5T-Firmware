// FUN_018f9ecc @ 018f9ecc size=136 calls_out=2 calls_in=1
// strings: 

void FUN_018f9ecc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    return;
  }
  uVar2 = param_1[6];
  iVar5 = 0;
  if (uVar2 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = param_1[3];
    uVar4 = param_1[5];
    uVar3 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      uVar3 = uVar4;
    }
    if (uVar1 - uVar3 < uVar2) {
      iVar5 = uVar2 - (uVar1 - uVar3);
    }
    else {
      uVar1 = uVar3 + uVar2;
    }
  }
  iVar6 = param_1[4];
  FUN_0193538c(iVar6 + uVar3 * 4,uVar1 - uVar3);
  FUN_0193538c(iVar6,iVar5);
  FUN_0134aee0(param_1[3],iVar6,4,4);
  return;
}

