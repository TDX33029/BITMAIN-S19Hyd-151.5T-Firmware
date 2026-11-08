// FUN_00d2e5ac @ 00d2e5ac size=800 calls_out=12 calls_in=3
// strings: 

void FUN_00d2e5ac(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  cVar1 = *(char *)((int)param_1 + 0x2e);
  if (cVar1 == '\x03') {
    if (param_1[0xc] == 0) {
      return;
    }
    FUN_00c81a4c(param_1[0xc],param_1[0xd],1);
    return;
  }
  if (cVar1 == '\x04') {
    if (param_1[0x12] != 0) {
      FUN_00c8204c(param_1[0x12],param_1[0x13],1);
    }
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    FUN_00ceee6c(param_1 + 0x19e);
    piVar3 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[0xe]);
    }
    piVar3 = (int *)param_1[0xd];
    *(undefined1 *)(param_1 + 8) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[0xd]);
    }
    piVar3 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[0xc]);
    }
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    FUN_00d2eabc(param_1 + 0x10);
    piVar7 = (int *)param_1[6];
    *(undefined2 *)((int)param_1 + 0x22) = 0;
    piVar3 = piVar7 + 0x21;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    DataMemoryBarrier(0xb);
    if (iVar5 == 1) {
      FUN_00c747ec(piVar7 + 8);
      puVar4 = (uint *)(piVar7 + 0x12);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4;
        bVar2 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar2);
      *puVar4 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar5 = piVar7[0x10];
        piVar7[0x10] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar2);
        *puVar4 = 0;
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 4))(piVar7[0x11]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d064cc(param_1[6]);
    }
    piVar7 = (int *)param_1[5];
    *(undefined2 *)(param_1 + 9) = 0;
    piVar3 = piVar7 + 0x21;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    DataMemoryBarrier(0xb);
    if (iVar5 == 1) {
      FUN_00c74f48(piVar7 + 8);
      puVar4 = (uint *)(piVar7 + 0x12);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4;
        bVar2 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar2);
      *puVar4 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar5 = piVar7[0x10];
        piVar7[0x10] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar2);
        *puVar4 = 0;
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 4))(piVar7[0x11]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d04c88(param_1[5]);
    }
    piVar7 = (int *)*param_1;
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    piVar3 = piVar7 + 0x47;
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      FUN_0163b708(piVar7 + 0x42);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d04b1c(*param_1);
    }
    *(undefined2 *)((int)param_1 + 0x2b) = 0;
    *(undefined4 *)((int)param_1 + 0x27) = 0;
    FUN_00c822ec(param_1[3]);
  }
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  return;
}

