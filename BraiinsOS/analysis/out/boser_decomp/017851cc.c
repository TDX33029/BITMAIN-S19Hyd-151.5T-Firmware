// FUN_017851cc @ 017851cc size=476 calls_out=9 calls_in=2
// strings: 

void FUN_017851cc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  FUN_0185c9d4();
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))
                (param_1 + 0x58,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    iVar2 = *(int *)(param_1 + 0x50);
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
    piVar4 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(*(undefined4 *)(param_1 + 0x50));
    }
    FUN_01785454(param_1 + 0x4c);
    FUN_017854e8(param_1 + 0x54);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x4c);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436864(*(undefined4 *)(param_1 + 0x4c));
      }
    }
    FUN_01785568(param_1 + 0x50);
  }
  piVar4 = *(int **)(param_1 + 0x68);
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (*piVar4 != 2) {
    FUN_01437430(piVar4[1]);
    piVar3 = (int *)piVar4[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a75d8c(piVar4[1]);
    }
  }
  thunk_FUN_01be4678(piVar4);
  return;
}

