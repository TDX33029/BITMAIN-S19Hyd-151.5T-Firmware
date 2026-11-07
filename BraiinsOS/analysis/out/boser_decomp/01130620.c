// FUN_01130620 @ 01130620 size=140 calls_out=4 calls_in=3
// strings: 

void FUN_01130620(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = 2;
  }
  switch(iVar1) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    break;
  case 1:
    FUN_01129bd4(param_1[1]);
    return;
  case 2:
    FUN_019bb7e0(param_1[3],param_1[4]);
    if (param_1[9] != 0x80000000) {
      FUN_019bb7e0(param_1[9],param_1[10]);
    }
    FUN_006a41c0(param_1 + 6);
    return;
  case 3:
    uVar2 = param_1[1];
    if ((int)uVar2 < -0x7ffffffb) {
      return;
    }
    uVar3 = param_1[2];
    break;
  case 4:
    FUN_00b9391c((char)param_1[1],param_1[2]);
    return;
  default:
    return;
  }
  FUN_019bb7e0(uVar2,uVar3);
  return;
}

