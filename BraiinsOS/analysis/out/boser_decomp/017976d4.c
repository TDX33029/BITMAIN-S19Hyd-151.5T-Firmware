// FUN_017976d4 @ 017976d4 size=696 calls_out=12 calls_in=1
// strings: 

void FUN_017976d4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 8) == 0 && *(int *)(param_1 + 0xc) == 0) {
    uVar5 = *(uint *)(param_1 + 0x18);
    iVar1 = 1;
    if ((uint)(uVar5 < 6) <= (uint)-*(int *)(param_1 + 0x1c)) {
      iVar1 = uVar5 - 6;
    }
    if (iVar1 != 1) {
      bVar7 = iVar1 == 0;
      if (bVar7) {
        iVar1 = *(int *)(param_1 + 0x10);
      }
      if (bVar7 && iVar1 == 0) {
        FUN_01797ad0(param_1 + 0x14);
        return;
      }
      return;
    }
    if (uVar5 == 5 && *(int *)(param_1 + 0x1c) == 0) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 5 && *(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  piVar6 = (int *)(param_1 + 0x18);
  if (*piVar6 != 4 || *(int *)(param_1 + 0x1c) != 0) {
    FUN_0178e78c(*(undefined4 *)(param_1 + 0x10));
    if (*piVar6 == 3 && *(int *)(param_1 + 0x1c) == 0) {
      return;
    }
    FUN_0178e7fc(piVar6);
    return;
  }
  FUN_0178e8bc();
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))
                (param_1 + 0x78,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    }
  }
  else if (*(int *)(param_1 + 0x68) == 1) {
    iVar1 = *(int *)(param_1 + 0x70);
    DataMemoryBarrier(0xb);
    piVar6 = (int *)(iVar1 + 8);
    do {
      iVar4 = *piVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar7);
    *piVar6 = 0;
    DataMemoryBarrier(0xb);
    if (iVar4 != 0) {
      puVar3 = (uint *)(iVar1 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar3;
        bVar7 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar7);
      *puVar3 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 == 0) {
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar7 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar7);
        *puVar3 = *puVar3 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar1 + 0x10));
        }
      }
    }
    piVar6 = *(int **)(param_1 + 0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar7);
    *piVar6 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(*(undefined4 *)(param_1 + 0x70));
    }
    FUN_01785454(param_1 + 0x6c);
    FUN_017854e8(param_1 + 0x74);
  }
  else {
    piVar6 = *(int **)(param_1 + 0x6c);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar6;
        bVar7 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar7);
      *piVar6 = iVar1 + -1;
      if (iVar1 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436864(*(undefined4 *)(param_1 + 0x6c));
      }
    }
    FUN_0178ead4(param_1 + 0x70);
  }
  piVar6 = *(int **)(param_1 + 0x88);
  if (piVar6 == (int *)0x0) {
    return;
  }
  if (*piVar6 != 2) {
    FUN_01437430(piVar6[1]);
    piVar2 = (int *)piVar6[1];
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a75d8c(piVar6[1]);
    }
  }
  thunk_FUN_01be4678(piVar6);
  return;
}

