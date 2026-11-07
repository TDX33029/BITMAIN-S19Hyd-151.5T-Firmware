// FUN_019361bc @ 019361bc size=124 calls_out=3 calls_in=1
// strings: 

void FUN_019361bc(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = iVar3 + 0x80000001U & iVar3 >> 0x1f;
  if (uVar1 == 0) {
    FUN_0187266c((char)param_1[3],param_1[4]);
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
      FUN_0187266c((char)param_1[2],param_1[3]);
      return;
    default:
      return;
    }
  }
  FUN_0134bd64(iVar3,iVar2);
  return;
}

