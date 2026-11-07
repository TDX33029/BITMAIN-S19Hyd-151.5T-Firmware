// FUN_00eba9a4 @ 00eba9a4 size=140 calls_out=5 calls_in=1
// strings: 

void FUN_00eba9a4(uint *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1;
  iVar2 = 0;
  if ((uint)(uVar7 < 4) <= -param_1[1]) {
    iVar2 = uVar7 - 3;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_00ebaa80(param_1 + 2,-(param_1[1] + (uint)(uVar7 >= 4)));
      return;
    }
    return;
  }
  FUN_00dd5578(param_1[0x2b],param_1[0x2c]);
  FUN_0132b958(param_1[0x2a],param_1[0x2b],4,4);
  FUN_0134aee0(param_1[0x2d],param_1[0x2e],4,4);
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_01839f10(param_1);
  if ((char)param_1[0x22] == '\0') {
    return;
  }
  if ((char)param_1[0x22] != '\x01') {
    piVar4 = (int *)param_1[0x23];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421174(param_1[0x23]);
      }
    }
    FUN_0137fc14();
    FUN_01383f10();
    piVar4 = (int *)param_1[0x24];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01381a18(param_1[0x24]);
      return;
    }
    return;
  }
  uVar7 = param_1[0x24];
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(uVar7 + 8);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  if (iVar2 != 0) {
    puVar5 = (uint *)(uVar7 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 == 0) {
      iVar2 = *(int *)(uVar7 + 0xc);
      *(undefined4 *)(uVar7 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 4))(*(undefined4 *)(uVar7 + 0x10));
      }
    }
  }
  piVar4 = (int *)param_1[0x24];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_1[0x24]);
  }
  FUN_01a69470(param_1 + 0x23);
  piVar4 = (int *)param_1[0x25];
  FUN_01437370();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar4[2] != 3 || piVar4[3] != 0) {
    if (piVar4[9] != 0) {
      thunk_FUN_01be4678(piVar4[8]);
    }
    iVar2 = piVar4[0xb];
    FUN_01410ec8(iVar2,piVar4[0xc]);
    FUN_0134aee0(piVar4[10],iVar2,4,0x34);
    FUN_008e0ddc(piVar4 + 0xd);
  }
  if (piVar4[0x14] != 0) {
    (**(code **)(piVar4[0x14] + 0xc))(piVar4[0x15]);
  }
  if (piVar4[0x17] != 0) {
    (**(code **)(piVar4[0x17] + 0xc))(piVar4[0x18]);
  }
  if (piVar4 != (int *)&DAT_ffffffff) {
    piVar3 = piVar4 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar4);
      return;
    }
  }
  return;
}

