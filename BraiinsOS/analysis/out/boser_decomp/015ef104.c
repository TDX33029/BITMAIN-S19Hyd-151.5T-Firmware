// FUN_015ef104 @ 015ef104 size=864 calls_out=17 calls_in=1
// strings: 

void FUN_015ef104(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar2 = 1;
  if ((uint)(*param_1 < 2) <= -param_1[1]) {
    iVar2 = *param_1 - 2;
  }
  switch(iVar2) {
  case 0:
    FUN_0134bd64(param_1[2],param_1[3]);
    piVar3 = (int *)param_1[5];
    piVar8 = piVar3 + 0x11;
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015eb600(piVar3 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (piVar3[0xd] != -0x80000000) {
      FUN_015f9d18();
    }
    FUN_015f9dc8(piVar3 + 4);
    FUN_015f9d18(piVar3 + 8);
    if (piVar3 == (int *)&DAT_ffffffff) {
      return;
    }
    piVar8 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar3);
      return;
    }
    return;
  case 1:
    FUN_0134bd64(param_1[4],param_1[5]);
    piVar3 = (int *)param_1[7];
    piVar8 = piVar3 + 0x11;
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015eb1bc(piVar3 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (piVar3[0xd] != -0x80000000) {
      FUN_015f9ae0();
    }
    FUN_015f9b90(piVar3 + 4);
    FUN_015f9ae0(piVar3 + 8);
    if (piVar3 == (int *)&DAT_ffffffff) {
      return;
    }
    piVar8 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar3);
      return;
    }
    return;
  case 2:
    piVar8 = (int *)param_1[2];
    FUN_0134bd64(piVar8[0x15],piVar8[0x16]);
    if (piVar8[0x12] != -0x80000000) {
      FUN_0134bd64(piVar8[0x12],piVar8[0x13]);
    }
    FUN_0134bd64(piVar8[0x18],piVar8[0x19]);
    FUN_0134bd64(piVar8[0x1b],piVar8[0x1c]);
    iVar2 = piVar8[1];
    if ((iVar2 != 0) && (uVar4 = iVar2 * 0x11 + 0x14U & 0xfffffffc, iVar2 + uVar4 != -5)) {
      thunk_FUN_01be4678(*piVar8 - uVar4);
    }
    FUN_015a8f24(piVar8 + 0x1e);
    iVar2 = piVar8[9];
    if ((iVar2 != 0) && (iVar7 = iVar2 * 8 + 8, iVar2 + iVar7 != -5)) {
      thunk_FUN_01be4678(piVar8[8] - iVar7);
    }
    FUN_015d1b84(piVar8 + 0x21);
    thunk_FUN_01be4678(piVar8);
    return;
  case 3:
    FUN_0134bd64(param_1[2],param_1[3]);
    FUN_015e91c8(param_1[5]);
    return;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar4 = param_1[2];
    uVar6 = param_1[3];
    break;
  case 9:
    piVar3 = (int *)param_1[2];
    piVar8 = piVar3 + 0x11;
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015ea258(piVar3 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f96ec(param_1[2]);
      return;
    }
    return;
  default:
    piVar3 = (int *)param_1[2];
    piVar8 = piVar3 + 0x11;
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015eba38(piVar3 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (piVar3[0xd] != -0x80000000) {
      FUN_015eea64();
    }
    FUN_019bb7e0(piVar3[4],piVar3[5]);
    FUN_015eea64(piVar3 + 8);
    if (piVar3 == (int *)&DAT_ffffffff) {
      return;
    }
    piVar8 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar3);
      return;
    }
    return;
  case 0xb:
    piVar3 = (int *)param_1[2];
    piVar8 = piVar3 + 0x11;
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015ea694(piVar3 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f97c0(param_1[2]);
      return;
    }
    return;
  case 0xc:
    uVar4 = 2;
    puVar5 = param_1 + 2;
    if ((int)*puVar5 < 0) {
      uVar4 = *puVar5 ^ 0x80000000;
    }
    if (uVar4 == 4 || uVar4 == 3) {
      puVar5 = param_1 + 3;
    }
    else if (uVar4 != 2) {
      return;
    }
    FUN_015d1b84(puVar5);
    return;
  case 0xd:
    piVar3 = (int *)param_1[2];
    piVar8 = piVar3 + 0x11;
    do {
      iVar2 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_015ea8f8(piVar3 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f9894(param_1[2]);
      return;
    }
    return;
  case 0xe:
    uVar4 = param_1[6];
    uVar6 = param_1[7];
    break;
  case 0xf:
    FUN_014532e4(param_1 + 2);
    return;
  }
  FUN_0134bd64(uVar4,uVar6);
  return;
}

