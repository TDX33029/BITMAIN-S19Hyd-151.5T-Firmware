// FUN_018e9bb4 @ 018e9bb4 size=388 calls_out=4 calls_in=3
// strings: 

void FUN_018e9bb4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
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
    uVar4 = param_1[1];
    uVar1 = param_1[2];
    uVar5 = 1;
    uVar6 = 2;
    break;
  case 1:
  case 2:
  case 0x12:
  case 0x14:
    uVar4 = param_1[1];
    uVar1 = param_1[2];
    uVar5 = 2;
    uVar6 = 4;
    break;
  case 3:
    uVar1 = param_1[1];
    uVar4 = uVar1;
    if (uVar1 < 0x80000001) {
      uVar4 = 0;
    }
    if (uVar1 == 0x80000000) {
      return;
    }
    if ((uVar4 & 0x7fffffff) != 0) {
      return;
    }
    goto LAB_018e9d48;
  case 4:
    uVar1 = param_1[1];
    if ((int)uVar1 < -0x7ffffffe) {
      return;
    }
    goto LAB_018e9d48;
  case 5:
    uVar1 = param_1[2];
    puVar3 = (undefined4 *)(uVar1 + 4);
    for (uVar4 = param_1[3]; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_0134bd64(puVar3[-1],*puVar3);
      puVar3 = puVar3 + 3;
    }
    uVar4 = param_1[1];
    uVar5 = 4;
    uVar6 = 0xc;
    break;
  case 6:
  case 0xb:
  case 0x11:
    return;
  case 7:
    uVar1 = param_1[2];
    uVar7 = param_1[3];
    for (uVar4 = 0; uVar7 != uVar4; uVar4 = uVar4 + 1) {
      puVar3 = (undefined4 *)(uVar1 + uVar4 * 0x10);
      FUN_0134bd64(*puVar3,puVar3[1]);
    }
    uVar4 = param_1[1];
    uVar5 = 4;
    uVar6 = 0x10;
    break;
  case 9:
    FUN_018e2658(param_1 + 1);
    param_1 = param_1 + 4;
    goto LAB_018e9d34;
  case 10:
  case 0xf:
  case 0x10:
    uVar1 = param_1[1];
    uVar4 = param_1[2];
    goto LAB_018e9d88;
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
    uVar4 = *(uint *)((int)param_1 + iVar2 + 4);
    goto LAB_018e9d88;
  case 0x13:
    if (uVar1 == 0x80000000) {
      return;
    }
    FUN_0134bd64(uVar1,param_1[1]);
    uVar1 = param_1[3];
    uVar4 = param_1[4];
    goto LAB_018e9d88;
  case 0x15:
    param_1 = param_1 + 1;
LAB_018e9d34:
    FUN_018e26a0(param_1);
    return;
  default:
    uVar1 = param_1[1];
    if (uVar1 == 0x80000000) {
      return;
    }
LAB_018e9d48:
    uVar4 = param_1[2];
LAB_018e9d88:
    FUN_0134bd64(uVar1,uVar4);
    return;
  }
  FUN_0134aee0(uVar4,uVar1,uVar5,uVar6);
  return;
}

