// FUN_0121d330 @ 0121d330 size=200 calls_out=2 calls_in=2
// strings: 

void FUN_0121d330(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 0xb;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0121d3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  case 1:
    uVar1 = param_1[1];
    uVar2 = 1;
    if ((int)uVar1 < 0) {
      uVar2 = uVar1 ^ 0x80000000;
    }
    if (uVar2 == 0) {
      FUN_0069263c((char)param_1[2],param_1[3]);
      return;
    }
    if (uVar2 == 1) {
      uVar2 = param_1[2];
    }
    else {
      uVar1 = param_1[2];
      uVar2 = param_1[3];
    }
    FUN_019bb7e0(uVar1,uVar2);
    return;
  case 2:
    FUN_0069263c((char)param_1[1],param_1[2]);
    return;
  case 3:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    return;
  case 4:
    uVar1 = param_1[1];
    if ((int)uVar1 < 0) {
      return;
    }
    uVar2 = param_1[2];
    break;
  default:
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    break;
  case 0xb:
    FUN_019bb7e0(uVar1,param_1[1]);
    uVar1 = param_1[3];
    uVar2 = param_1[4];
  }
  FUN_019bb7e0(uVar1,uVar2);
  return;
}

