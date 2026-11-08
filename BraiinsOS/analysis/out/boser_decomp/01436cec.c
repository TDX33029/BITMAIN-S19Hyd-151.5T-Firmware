// FUN_01436cec @ 01436cec size=72 calls_out=2 calls_in=1
// strings: 

void FUN_01436cec(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if ((*param_1 & 7) == 3) {
    piVar5 = (int *)param_1[2];
    iVar7 = *piVar5;
    if (iVar7 != 0) {
      puVar9 = (undefined4 *)piVar5[1];
      pcVar4 = (code *)*puVar9;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar7);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_01be4678(iVar7);
      }
    }
    if (*(char *)((int)piVar5 + 0x15) != '\x02') {
      FUN_014323b0(piVar5 + 2);
    }
    thunk_FUN_01be4678(piVar5);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_0142e6dc(param_1);
  FUN_0178e884(param_1[0x10]);
  if (param_1[0x12] == 0) {
    if (param_1[0x13] != 0) {
      (**(code **)(param_1[0x13] + 0x10))(param_1 + 0x16,param_1[0x14],param_1[0x15]);
    }
  }
  else if (param_1[0x12] == 1) {
    uVar2 = param_1[0x14];
    DataMemoryBarrier(0xb);
    piVar5 = (int *)(uVar2 + 8);
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = 0;
    DataMemoryBarrier(0xb);
    if (iVar7 != 0) {
      puVar6 = (uint *)(uVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar8 | 2;
      DataMemoryBarrier(0xb);
      if (uVar8 == 0) {
        iVar7 = *(int *)(uVar2 + 0xc);
        *(undefined4 *)(uVar2 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar1);
        *puVar6 = *puVar6 & 0xfffffffd;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(*(undefined4 *)(uVar2 + 0x10));
        }
      }
    }
    piVar5 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(param_1[0x14]);
    }
    FUN_01785454(param_1 + 0x13);
    FUN_017854e8(param_1 + 0x15);
  }
  else {
    piVar5 = (int *)param_1[0x13];
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436864(param_1[0x13]);
      }
    }
    FUN_01785568(param_1 + 0x14);
  }
  piVar5 = (int *)param_1[0x1a];
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (*piVar5 != 2) {
    FUN_01437430(piVar5[1]);
    piVar3 = (int *)piVar5[1];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a75d8c(piVar5[1]);
    }
  }
  thunk_FUN_01be4678(piVar5);
  return;
}

