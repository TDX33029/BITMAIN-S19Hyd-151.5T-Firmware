// FUN_014491b0 @ 014491b0 size=124 calls_out=2 calls_in=3
// strings: 

void FUN_014491b0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar7 = param_1[3];
  if (iVar7 != 0) {
    puVar8 = (undefined4 *)param_1[4];
    pcVar6 = (code *)*puVar8;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
  }
  piVar4 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[5]);
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149d7c4(*param_1);
    }
    iVar7 = param_1[1];
    DataMemoryBarrier(0xb);
    piVar4 = (int *)(iVar7 + 0x84);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 == 1) {
      piVar4 = (int *)(iVar7 + 0x24);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + 1;
      DataMemoryBarrier(0xb);
      iVar2 = FUN_01405d28(iVar7 + 0x20);
      puVar3 = (uint *)(iVar2 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 | 0x20000;
      puVar3 = (uint *)(iVar7 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar2 = *(int *)(iVar7 + 0x40);
        *(undefined4 *)(iVar7 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = 0;
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar7 + 0x44));
        }
      }
    }
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
  }
  else {
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149d7c4(*param_1);
    }
    iVar7 = param_1[1];
    DataMemoryBarrier(0xb);
    piVar4 = (int *)(iVar7 + 0x84);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    DataMemoryBarrier(0xb);
    if (iVar2 == 1) {
      piVar4 = (int *)(iVar7 + 0x24);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + 1;
      DataMemoryBarrier(0xb);
      iVar2 = FUN_01405d28(iVar7 + 0x20);
      puVar3 = (uint *)(iVar2 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 | 0x20000;
      puVar3 = (uint *)(iVar7 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar2 = *(int *)(iVar7 + 0x40);
        *(undefined4 *)(iVar7 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = 0;
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar7 + 0x44));
        }
      }
    }
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
  }
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143ea24(param_1[1]);
    return;
  }
  return;
}

