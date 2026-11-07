// FUN_01a6937c @ 01a6937c size=204 calls_out=8 calls_in=1
// strings: 

void FUN_01a6937c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    piVar6 = (int *)param_1[2];
    if (*piVar6 != 0) {
      FUN_00f80320(*piVar6,piVar6[1]);
    }
    thunk_FUN_01be4678(piVar6);
    return;
  }
  if (param_1[7] != 0) {
    thunk_FUN_01be4678(param_1[6]);
  }
  iVar7 = param_1[9];
  FUN_01410ec8(iVar7,param_1[10]);
  FUN_0134aee0(param_1[8],iVar7,4,0x34);
  FUN_008e0ddc(param_1 + 0xb);
  FUN_0178e884(param_1[0x10]);
  if ((char)param_1[0x12] == '\0') {
    return;
  }
  if ((char)param_1[0x12] != '\x01') {
    piVar6 = (int *)param_1[0x13];
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421174(param_1[0x13]);
      }
    }
    FUN_0137fc14();
    FUN_01383f10();
    piVar6 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01381a18(param_1[0x14]);
      return;
    }
    return;
  }
  iVar7 = param_1[0x14];
  DataMemoryBarrier(0xb);
  piVar6 = (int *)(iVar7 + 8);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 0;
  DataMemoryBarrier(0xb);
  if (iVar4 != 0) {
    puVar3 = (uint *)(iVar7 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar4 = *(int *)(iVar7 + 0xc);
      *(undefined4 *)(iVar7 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0xfffffffd;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar7 + 0x10));
      }
    }
  }
  piVar6 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_1[0x14]);
  }
  FUN_01a69470(param_1 + 0x13);
  piVar6 = (int *)param_1[0x15];
  FUN_01437370();
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar7 + -1;
  if (iVar7 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar6[2] != 3 || piVar6[3] != 0) {
    if (piVar6[9] != 0) {
      thunk_FUN_01be4678(piVar6[8]);
    }
    iVar7 = piVar6[0xb];
    FUN_01410ec8(iVar7,piVar6[0xc]);
    FUN_0134aee0(piVar6[10],iVar7,4,0x34);
    FUN_008e0ddc(piVar6 + 0xd);
  }
  if (piVar6[0x14] != 0) {
    (**(code **)(piVar6[0x14] + 0xc))(piVar6[0x15]);
  }
  if (piVar6[0x17] != 0) {
    (**(code **)(piVar6[0x17] + 0xc))(piVar6[0x18]);
  }
  if (piVar6 != (int *)&DAT_ffffffff) {
    piVar2 = piVar6 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar6);
      return;
    }
  }
  return;
}

