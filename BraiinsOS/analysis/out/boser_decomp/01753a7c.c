// FUN_01753a7c @ 01753a7c size=116 calls_out=3 calls_in=1
// strings: 

void FUN_01753a7c(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = iVar3 + 0x80000001U & iVar3 >> 0x1f;
  if (uVar1 == 0) {
    FUN_018248cc(param_1 + 3);
    iVar2 = param_1[1];
  }
  else {
    if (uVar1 == 1) {
      FUN_01443048(param_1[1],param_1[2]);
      return;
    }
    switch(param_1[1]) {
    case 0:
    case 1:
    case 2:
      iVar3 = param_1[2];
      iVar2 = param_1[3];
      break;
    case 3:
      FUN_018248cc(param_1 + 2);
      return;
    default:
      return;
    }
  }
  FUN_019bb7e0(iVar3,iVar2);
  return;
}

