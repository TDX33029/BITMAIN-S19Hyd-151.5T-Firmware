// FUN_005f6674 @ 005f6674 size=180 calls_out=2 calls_in=4
// strings: 

void FUN_005f6674(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0xb;
  if ((int)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x80000000;
  }
  switch(uVar3) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x005f6740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  case 1:
    uVar1 = param_1[1];
    uVar3 = 1;
    puVar2 = param_1 + 2;
    if ((int)uVar1 < 0) {
      uVar3 = uVar1 ^ 0x80000000;
    }
    if (uVar3 == 0) goto LAB_005f6774;
    if (uVar3 == 1) {
      uVar3 = *puVar2;
    }
    else {
      uVar1 = param_1[2];
      uVar3 = param_1[3];
    }
    break;
  case 2:
    puVar2 = param_1 + 1;
LAB_005f6774:
    FUN_0183a528(puVar2);
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
    uVar3 = param_1[2];
    break;
  default:
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    break;
  case 0xb:
    FUN_019bb7e0(uVar1,param_1[1]);
    uVar1 = param_1[3];
    uVar3 = param_1[4];
  }
  FUN_019bb7e0(uVar1,uVar3);
  return;
}

