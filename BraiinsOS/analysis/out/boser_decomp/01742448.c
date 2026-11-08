// FUN_01742448 @ 01742448 size=72 calls_out=2 calls_in=4
// strings: 

void FUN_01742448(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_1;
  iVar7 = param_1[1];
  if (iVar6 != 4 || iVar7 != 0) {
    FUN_01a69838(param_1[0x26]);
    if (iVar6 == 3 && iVar7 == 0) {
      return;
    }
    FUN_01741b38(param_1);
    return;
  }
  FUN_0142e6dc();
  FUN_0178e884(param_1[0x12]);
  if ((char)param_1[0x14] == '\0') {
    return;
  }
  if ((char)param_1[0x14] == '\x01') {
    iVar6 = param_1[0x16];
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(iVar6 + 8);
    do {
      iVar7 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    DataMemoryBarrier(0xb);
    if (iVar7 != 0) {
      puVar4 = (uint *)(iVar6 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar7 = *(int *)(iVar6 + 0xc);
        *(undefined4 *)(iVar6 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0xfffffffd;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar6 + 0x10));
        }
      }
    }
    piVar3 = (int *)param_1[0x16];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(param_1[0x16]);
    }
    FUN_01a69470(param_1 + 0x15);
    piVar3 = (int *)param_1[0x17];
    FUN_01437370();
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    if (piVar3[2] != 3 || piVar3[3] != 0) {
      if (piVar3[9] != 0) {
        thunk_FUN_01be4678(piVar3[8]);
      }
      iVar6 = piVar3[0xb];
      FUN_01410ec8(iVar6,piVar3[0xc]);
      FUN_0134aee0(piVar3[10],iVar6,4,0x34);
      FUN_008e0ddc(piVar3 + 0xd);
    }
    if (piVar3[0x14] != 0) {
      (**(code **)(piVar3[0x14] + 0xc))(piVar3[0x15]);
    }
    if (piVar3[0x17] != 0) {
      (**(code **)(piVar3[0x17] + 0xc))(piVar3[0x18]);
    }
    if (piVar3 != (int *)&DAT_ffffffff) {
      piVar2 = piVar3 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678(piVar3);
        return;
      }
    }
    return;
  }
  piVar3 = (int *)param_1[0x15];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01421174(param_1[0x15]);
    }
  }
  FUN_0137fc14();
  FUN_01383f10();
  piVar3 = (int *)param_1[0x16];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01381a18(param_1[0x16]);
    return;
  }
  return;
}

