// FUN_015aa164 @ 015aa164 size=632 calls_out=15 calls_in=4
// strings: 

void FUN_015aa164(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  
  iVar2 = 1;
  if ((uint)(*param_1 < 2) <= -param_1[1]) {
    iVar2 = *param_1 - 2;
  }
  switch(iVar2) {
  case 0:
    FUN_0134bd64(param_1[2],param_1[3]);
    FUN_015aa554(param_1 + 5);
    return;
  case 1:
    FUN_0134bd64(param_1[4],param_1[5]);
    FUN_015a821c(param_1 + 7);
    return;
  case 2:
    uVar3 = param_1[2];
    FUN_015aa5f4();
    thunk_FUN_01be4678(uVar3);
    return;
  case 3:
    FUN_0134bd64(param_1[2],param_1[3]);
    piVar7 = (int *)param_1[5];
    piVar5 = piVar7 + 0x11;
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015ead1c(piVar7 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar3 = param_1[5];
    if (*(int *)(uVar3 + 0x34) != -0x80000000) {
      FUN_015eea64();
    }
    FUN_019bb7e0(*(undefined4 *)(uVar3 + 0x10),*(undefined4 *)(uVar3 + 0x14));
    FUN_015eea64(uVar3 + 0x20);
    if (uVar3 == 0xffffffff) {
      return;
    }
    piVar5 = (int *)(uVar3 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(uVar3);
      return;
    }
    return;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar3 = param_1[2];
    uVar6 = param_1[3];
    break;
  case 9:
    piVar7 = (int *)param_1[2];
    piVar5 = piVar7 + 0x11;
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015ea258(piVar7 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f96ec(param_1[2]);
      return;
    }
    return;
  default:
    FUN_015aa278(param_1 + 2,&switchD_015aa190::switchdataD_015aa194);
    return;
  case 0xb:
    FUN_015aa3e4(param_1 + 2);
    return;
  case 0xc:
    puVar4 = param_1 + 2;
    uVar3 = 2;
    if ((int)*puVar4 < 0) {
      uVar3 = *puVar4 ^ 0x80000000;
    }
    if (uVar3 == 4 || uVar3 == 3) {
      puVar4 = param_1 + 3;
    }
    else if (uVar3 != 2) {
      return;
    }
    uVar3 = puVar4[1];
    FUN_015e8be0(uVar3,puVar4[2]);
    FUN_0134aee0(*puVar4,uVar3,4,0x14);
    return;
  case 0xd:
    piVar7 = (int *)param_1[2];
    piVar5 = piVar7 + 0x11;
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015ea8f8(piVar7 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f9894(param_1[2]);
      return;
    }
    return;
  case 0xe:
    uVar3 = param_1[6];
    uVar6 = param_1[7];
    break;
  case 0xf:
    FUN_014532e4(param_1 + 2);
    return;
  }
  FUN_0134bd64(uVar3,uVar6);
  return;
}

