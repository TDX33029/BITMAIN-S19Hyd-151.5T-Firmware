// FUN_01711fec @ 01711fec size=28 calls_out=1 calls_in=1
// strings: 

void FUN_01711fec(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_01702f28(param_1[2]);
    return;
  }
  FUN_0071227c();
  if ((char)param_1[0x12] == '\0') {
    return;
  }
  if ((char)param_1[0x12] == '\x01') {
    iVar2 = param_1[0x14];
    DataMemoryBarrier(0xb);
    piVar4 = (int *)(iVar2 + 8);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = 0;
    DataMemoryBarrier(0xb);
    if (iVar6 != 0) {
      puVar5 = (uint *)(iVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar6 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar2 + 0x10));
        }
      }
    }
    piVar4 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(param_1[0x14]);
    }
    FUN_01a69470(param_1 + 0x13);
    piVar4 = (int *)param_1[0x15];
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
  piVar4 = (int *)param_1[0x13];
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01421174(param_1[0x13]);
    }
  }
  FUN_0137fc14();
  FUN_01383f10();
  piVar4 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01381a18(param_1[0x14]);
    return;
  }
  return;
}

