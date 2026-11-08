// FUN_018e2498 @ 018e2498 size=288 calls_out=5 calls_in=1
// strings: 

void FUN_018e2498(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_1;
  iVar2 = 0x13;
  if (0x80000000 < uVar1) {
    iVar2 = uVar1 + 0x7fffffff;
  }
  switch(iVar2) {
  case 0:
  case 8:
  case 0xd:
  case 0xe:
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = 1;
    uVar5 = 2;
    goto LAB_018e2538;
  case 1:
  case 2:
  case 0x12:
  case 0x14:
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = 2;
    uVar5 = 4;
LAB_018e2538:
    FUN_0134aee0(uVar1,uVar3,uVar4,uVar5);
    return;
  case 3:
    uVar1 = param_1[1];
    uVar3 = uVar1;
    if (uVar1 < 0x80000001) {
      uVar3 = 0;
    }
    if (uVar1 == 0x80000000) {
      return;
    }
    if ((uVar3 & 0x7fffffff) != 0) {
      return;
    }
    break;
  case 4:
    uVar1 = param_1[1];
    if ((int)uVar1 < -0x7ffffffe) {
      return;
    }
    break;
  case 5:
  case 0x15:
    param_1 = param_1 + 1;
    goto LAB_018e255c;
  case 6:
  case 0xb:
  case 0x11:
    return;
  case 7:
    FUN_018e2610(param_1 + 1);
    return;
  case 9:
    FUN_018e2658(param_1 + 1);
    param_1 = param_1 + 4;
LAB_018e255c:
    FUN_018e26a0(param_1);
    return;
  case 10:
  case 0xf:
  case 0x10:
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    goto LAB_018e2608;
  case 0xc:
    if (param_1[1] == 0x80000000) {
      uVar1 = param_1[3];
      iVar2 = 0xc;
      if (uVar1 == 0x80000000) {
        return;
      }
    }
    else {
      FUN_018e26a0();
      uVar1 = param_1[4];
      iVar2 = 0x10;
    }
    uVar3 = *(uint *)((int)param_1 + iVar2 + 4);
    goto LAB_018e2608;
  case 0x13:
    if (uVar1 == 0x80000000) {
      return;
    }
    FUN_0134bd64(uVar1,param_1[1]);
    uVar1 = param_1[3];
    uVar3 = param_1[4];
    goto LAB_018e2608;
  default:
    uVar1 = param_1[1];
    if (uVar1 == 0x80000000) {
      return;
    }
  }
  uVar3 = param_1[2];
LAB_018e2608:
  FUN_0134bd64(uVar1,uVar3);
  return;
}

