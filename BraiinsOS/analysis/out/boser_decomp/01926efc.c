// FUN_01926efc @ 01926efc size=440 calls_out=3 calls_in=2
// strings: 

void FUN_01926efc(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
    uVar3 = param_1[1];
    uVar1 = param_1[2];
    uVar4 = 1;
    uVar5 = 2;
    goto LAB_01926f9c;
  case 1:
  case 2:
  case 0x12:
  case 0x14:
    uVar3 = param_1[1];
    uVar1 = param_1[2];
    uVar4 = 2;
    uVar5 = 4;
    goto LAB_01926f9c;
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
    goto LAB_01926ff4;
  case 6:
  case 0xb:
  case 0x11:
    return;
  case 7:
    uVar1 = param_1[2];
    uVar7 = param_1[3];
    for (uVar3 = 0; uVar7 != uVar3; uVar3 = uVar3 + 1) {
      puVar6 = (undefined4 *)(uVar1 + uVar3 * 0x10);
      FUN_0134bd64(*puVar6,puVar6[1]);
    }
    uVar3 = param_1[1];
    uVar4 = 4;
    uVar5 = 0x10;
LAB_01926f9c:
    FUN_0134aee0(uVar3,uVar1,uVar4,uVar5);
    return;
  case 9:
    uVar3 = param_1[2];
    uVar7 = param_1[3];
    for (uVar1 = 0; uVar7 != uVar1; uVar1 = uVar1 + 1) {
      puVar6 = (undefined4 *)(uVar3 + uVar1 * 0x10);
      FUN_0134bd64(*puVar6,puVar6[1]);
    }
    FUN_0134aee0(param_1[1],uVar3,4,0x10);
    param_1 = param_1 + 4;
LAB_01926ff4:
    FUN_018e26a0(param_1);
    return;
  case 10:
  case 0xf:
  case 0x10:
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    goto LAB_01927104;
  case 0xc:
    uVar1 = param_1[1];
    if (uVar1 == 0x80000000) {
      uVar1 = param_1[3];
      iVar2 = 0xc;
      if (uVar1 == 0x80000000) {
        return;
      }
    }
    else {
      uVar7 = param_1[2];
      puVar6 = (undefined4 *)(uVar7 + 4);
      for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
        FUN_0134bd64(puVar6[-1],*puVar6);
        puVar6 = puVar6 + 3;
      }
      FUN_0134aee0(uVar1,uVar7,4,0xc);
      uVar1 = param_1[4];
      iVar2 = 0x10;
    }
    uVar3 = *(uint *)((int)param_1 + iVar2 + 4);
    goto LAB_01927104;
  case 0x13:
    if (uVar1 == 0x80000000) {
      return;
    }
    FUN_0134bd64(uVar1,param_1[1]);
    uVar1 = param_1[3];
    uVar3 = param_1[4];
    goto LAB_01927104;
  default:
    uVar1 = param_1[1];
    if (uVar1 == 0x80000000) {
      return;
    }
  }
  uVar3 = param_1[2];
LAB_01927104:
  FUN_0134bd64(uVar1,uVar3);
  return;
}

