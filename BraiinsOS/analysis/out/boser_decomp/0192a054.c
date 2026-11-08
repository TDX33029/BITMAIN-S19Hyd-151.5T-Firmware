// FUN_0192a054 @ 0192a054 size=312 calls_out=5 calls_in=4
// strings: 

void FUN_0192a054(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = 0x13;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  switch(iVar1) {
  case 0:
  case 8:
  case 0xd:
  case 0xe:
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = 1;
    uVar5 = 2;
    goto LAB_0192a0f4;
  case 1:
  case 2:
  case 0x12:
  case 0x14:
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = 2;
    uVar5 = 4;
LAB_0192a0f4:
    FUN_0134aee0(uVar2,uVar3,uVar4,uVar5);
    return;
  case 3:
    uVar2 = param_1[1];
    uVar3 = uVar2;
    if (uVar2 < 0x80000001) {
      uVar3 = 0;
    }
    if (uVar2 == 0x80000000) {
      return;
    }
    if ((uVar3 & 0x7fffffff) != 0) {
      return;
    }
    break;
  case 4:
    uVar2 = param_1[1];
    if ((int)uVar2 < -0x7ffffffe) {
      return;
    }
    break;
  case 5:
  case 0x15:
    param_1 = param_1 + 1;
    goto LAB_0192a118;
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
LAB_0192a118:
    FUN_018e26a0(param_1);
    return;
  case 10:
  case 0xf:
  case 0x10:
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    goto LAB_0192a188;
  case 0xc:
    if (param_1[1] == 0x80000000) {
      uVar2 = param_1[3];
      iVar1 = 0xc;
      if (uVar2 == 0x80000000) {
        return;
      }
    }
    else {
      FUN_018e26a0();
      uVar2 = param_1[4];
      iVar1 = 0x10;
    }
    uVar3 = *(uint *)((int)param_1 + iVar1 + 4);
    goto LAB_0192a188;
  case 0x13:
    if (*param_1 == 0x80000000) {
      return;
    }
    FUN_0134bd64(*param_1,param_1[1]);
    FUN_0134bd64(param_1[3],param_1[4]);
    return;
  default:
    uVar2 = param_1[1];
    if (uVar2 == 0x80000000) {
      return;
    }
  }
  uVar3 = param_1[2];
LAB_0192a188:
  FUN_0134bd64(uVar2,uVar3);
  return;
}

