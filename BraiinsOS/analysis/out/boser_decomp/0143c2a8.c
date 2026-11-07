// FUN_0143c2a8 @ 0143c2a8 size=204 calls_out=7 calls_in=1
// strings: 

void FUN_0143c2a8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    piVar2 = (int *)param_1[2];
    iVar8 = *piVar2;
    if (iVar8 != 0) {
      puVar9 = (undefined4 *)piVar2[1];
      pcVar4 = (code *)*puVar9;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar8);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_01be4678(iVar8);
      }
    }
    FUN_017ccbf4(piVar2 + 2);
    thunk_FUN_01be4678(piVar2);
    return;
  }
  if (param_1[7] != 0) {
    thunk_FUN_01be4678(param_1[6]);
  }
  iVar8 = param_1[9];
  FUN_01410ec8(iVar8,param_1[10]);
  FUN_0134aee0(param_1[8],iVar8,4,0x34);
  FUN_008e0ddc(param_1 + 0xb);
  FUN_0178e884(param_1[0x10]);
  if (param_1[0x12] == 0) {
    if (param_1[0x13] != 0) {
      (**(code **)(param_1[0x13] + 0x10))(param_1 + 0x16,param_1[0x14],param_1[0x15]);
    }
  }
  else if (param_1[0x12] == 1) {
    iVar8 = param_1[0x14];
    DataMemoryBarrier(0xb);
    piVar2 = (int *)(iVar8 + 8);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 0;
    DataMemoryBarrier(0xb);
    if (iVar6 != 0) {
      puVar5 = (uint *)(iVar8 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar6 = *(int *)(iVar8 + 0xc);
        *(undefined4 *)(iVar8 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar8 + 0x10));
        }
      }
    }
    piVar2 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(param_1[0x14]);
    }
    FUN_01785454(param_1 + 0x13);
    FUN_017854e8(param_1 + 0x15);
  }
  else {
    piVar2 = (int *)param_1[0x13];
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436864(param_1[0x13]);
      }
    }
    FUN_01785568(param_1 + 0x14);
  }
  piVar2 = (int *)param_1[0x1a];
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (*piVar2 != 2) {
    FUN_01437430(piVar2[1]);
    piVar3 = (int *)piVar2[1];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a75d8c(piVar2[1]);
    }
  }
  thunk_FUN_01be4678(piVar2);
  return;
}

