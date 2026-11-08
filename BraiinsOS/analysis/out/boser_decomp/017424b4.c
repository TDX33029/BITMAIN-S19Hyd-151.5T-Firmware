// FUN_017424b4 @ 017424b4 size=36 calls_out=1 calls_in=2
// strings: 

void FUN_017424b4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  if ((*param_1 & 7) == 3) {
    FUN_01a69838(param_1[2]);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_0142e6dc();
  FUN_0178e884(param_1[0x10]);
  if ((char)param_1[0x12] == '\0') {
    return;
  }
  if ((char)param_1[0x12] != '\x01') {
    piVar4 = (int *)param_1[0x13];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421174(param_1[0x13]);
      }
    }
    FUN_0137fc14();
    FUN_01383f10();
    piVar4 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01381a18(param_1[0x14]);
      return;
    }
    return;
  }
  uVar2 = param_1[0x14];
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(uVar2 + 8);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  if (iVar6 != 0) {
    puVar5 = (uint *)(uVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar6 = *(int *)(uVar2 + 0xc);
      *(undefined4 *)(uVar2 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(uVar2 + 0x10));
      }
    }
  }
  piVar4 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_1[0x14]);
  }
  FUN_01a69470(param_1 + 0x13);
  piVar4 = (int *)param_1[0x15];
  FUN_01437370();
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar4[2] != 3 || piVar4[3] != 0) {
    if (piVar4[9] != 0) {
      thunk_FUN_01be4678(piVar4[8]);
    }
    iVar6 = piVar4[0xb];
    FUN_01410ec8(iVar6,piVar4[0xc]);
    FUN_0134aee0(piVar4[10],iVar6,4,0x34);
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
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar4);
      return;
    }
  }
  return;
}

