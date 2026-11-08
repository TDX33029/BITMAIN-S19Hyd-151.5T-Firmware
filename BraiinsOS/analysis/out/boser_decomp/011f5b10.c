// FUN_011f5b10 @ 011f5b10 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_011f5b10(uint *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = 0xb;
  if ((int)uVar2 < 0) {
    uVar3 = uVar2 ^ 0x80000000;
  }
  switch(uVar3) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x011f5bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  case 1:
    uVar2 = param_1[1];
    uVar3 = 1;
    if ((int)uVar2 < 0) {
      uVar3 = uVar2 ^ 0x80000000;
    }
    if (uVar3 == 0) {
      uVar2 = param_1[3];
      uVar1 = (undefined1)param_1[2];
      goto LAB_011f5c14;
    }
    if (uVar3 != 1) {
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      goto LAB_011f5c04;
    }
    break;
  case 2:
    uVar2 = param_1[2];
    uVar1 = (undefined1)param_1[1];
LAB_011f5c14:
    FUN_0069263c(uVar1,uVar2);
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
    uVar2 = param_1[1];
    if ((int)uVar2 < 0) {
      return;
    }
    break;
  default:
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    goto LAB_011f5c04;
  case 0xb:
    FUN_019bb7e0(uVar2,param_1[1]);
    uVar2 = param_1[3];
    uVar3 = param_1[4];
    goto LAB_011f5c04;
  }
  uVar3 = param_1[2];
LAB_011f5c04:
  FUN_019bb7e0(uVar2,uVar3);
  return;
}

