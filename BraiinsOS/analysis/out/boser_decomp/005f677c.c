// FUN_005f677c @ 005f677c size=256 calls_out=4 calls_in=0
// strings: 

void FUN_005f677c(int *param_1)

{
  int iVar1;
  
  iVar1 = 6;
  if (1 < (uint)param_1[0x15]) {
    iVar1 = param_1[0x15] - 2;
  }
  switch(iVar1) {
  case 0:
    FUN_019bb7e0(*param_1,param_1[1]);
    iVar1 = param_1[3];
    if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
      FUN_019bb7e0(iVar1,param_1[4]);
    }
    param_1 = param_1 + 6;
    break;
  case 1:
  case 2:
    iVar1 = param_1[8];
    if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
      FUN_019bb7e0(iVar1,param_1[9]);
    }
    break;
  case 3:
    iVar1 = *param_1;
    if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
      FUN_019bb7e0(iVar1,param_1[1]);
    }
    param_1 = param_1 + 3;
    break;
  case 4:
    iVar1 = param_1[6];
    if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
      FUN_019bb7e0(iVar1,param_1[7]);
    }
    param_1 = param_1 + 9;
    break;
  case 5:
    if (-1 < param_1[6]) {
      FUN_019bb7e0(param_1[6],param_1[7]);
    }
    FUN_00a25e80(param_1 + 9);
    FUN_01272b34(param_1 + 3);
    return;
  default:
    if (-1 < param_1[0x12]) {
      FUN_019bb7e0(param_1[0x12],param_1[0x13]);
    }
    FUN_00a25e80(param_1 + 0xc);
    FUN_01272b84(param_1);
    return;
  }
  FUN_00a25e80(param_1);
  return;
}

