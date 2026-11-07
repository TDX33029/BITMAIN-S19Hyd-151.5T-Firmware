// FUN_0143f878 @ 0143f878 size=608 calls_out=3 calls_in=1
// strings: 

void FUN_0143f878(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (*(char *)(param_1 + 2) == '\x02') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149d7c4(*param_1);
    }
    piVar6 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    piVar2 = piVar6 + 0x21;
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      piVar2 = piVar6 + 9;
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = *piVar2 + 1;
      DataMemoryBarrier(0xb);
      iVar4 = FUN_01405d28(piVar6 + 8);
      puVar3 = (uint *)(iVar4 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 | 0x20000;
      puVar3 = (uint *)(piVar6 + 0x12);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar4 = piVar6[0x10];
        piVar6[0x10] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = 0;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(piVar6[0x11]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
  }
  else {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149d7c4(*param_1);
    }
    piVar6 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    piVar2 = piVar6 + 0x21;
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      piVar2 = piVar6 + 9;
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = *piVar2 + 1;
      DataMemoryBarrier(0xb);
      iVar4 = FUN_01405d28(piVar6 + 8);
      puVar3 = (uint *)(iVar4 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 | 0x20000;
      puVar3 = (uint *)(piVar6 + 0x12);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar4 = piVar6[0x10];
        piVar6[0x10] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = 0;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(piVar6[0x11]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143ea24(param_1[1]);
    return;
  }
  return;
}

