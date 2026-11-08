// FUN_01a75cb4 @ 01a75cb4 size=132 calls_out=6 calls_in=1
// strings: 

void FUN_01a75cb4(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*param_1 & 7) == 3) {
    FUN_01a69838(param_1[2]);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  if (param_1[7] != 0) {
    thunk_FUN_01be4678(param_1[6]);
  }
  uVar7 = param_1[9];
  FUN_01410ec8(uVar7,param_1[10]);
  FUN_0134aee0(param_1[8],uVar7,4,0x34);
  FUN_008e0ddc(param_1 + 0xb);
  FUN_0178e884(param_1[0x10]);
  if ((char)param_1[0x12] == '\0') {
    return;
  }
  if ((char)param_1[0x12] != '\x01') {
    piVar3 = (int *)param_1[0x13];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421174(param_1[0x13]);
      }
    }
    FUN_0137fc14();
    FUN_01383f10();
    piVar3 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01381a18(param_1[0x14]);
      return;
    }
    return;
  }
  uVar7 = param_1[0x14];
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(uVar7 + 8);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 0;
  DataMemoryBarrier(0xb);
  if (iVar5 != 0) {
    puVar4 = (uint *)(uVar7 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 == 0) {
      iVar5 = *(int *)(uVar7 + 0xc);
      *(undefined4 *)(uVar7 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(uVar7 + 0x10));
      }
    }
  }
  piVar3 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(param_1[0x14]);
  }
  FUN_01a69470(param_1 + 0x13);
  piVar3 = (int *)param_1[0x15];
  FUN_01437370();
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar3[2] != 3 || piVar3[3] != 0) {
    if (piVar3[9] != 0) {
      thunk_FUN_01be4678(piVar3[8]);
    }
    iVar5 = piVar3[0xb];
    FUN_01410ec8(iVar5,piVar3[0xc]);
    FUN_0134aee0(piVar3[10],iVar5,4,0x34);
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
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar3);
      return;
    }
  }
  return;
}

