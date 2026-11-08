// FUN_017cca04 @ 017cca04 size=236 calls_out=6 calls_in=2
// strings: 

void FUN_017cca04(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  piVar4 = param_1 + 2;
  if (*piVar4 != 4 || param_1[3] != 0) {
    FUN_017cca78(*param_1);
    if (*piVar4 == 3 && param_1[3] == 0) {
      return;
    }
    if ((9 < *(byte *)(param_1 + 0x1d)) && (param_1[0x1f] != 0)) {
      thunk_FUN_01be4678(param_1[0x1e]);
    }
    if (1 < *(byte *)(param_1 + 0x12)) {
      piVar3 = (int *)param_1[0x13];
      (**(code **)(*piVar3 + 0x10))
                (piVar3 + 3,piVar3[1],piVar3[2],*(code **)(*piVar3 + 0x10),unaff_r4,unaff_r5,
                 unaff_r6,unaff_lr);
      thunk_FUN_01be4678(piVar3);
    }
    (**(code **)(param_1[0x14] + 0x10))(param_1 + 0x17,param_1[0x15],param_1[0x16]);
    (**(code **)(param_1[0x18] + 0x10))(param_1 + 0x1b,param_1[0x19],param_1[0x1a]);
    FUN_0142e6dc(piVar4);
    FUN_0178e884(param_1[0x22]);
    FUN_0177a2a4(param_1 + 0x24);
    return;
  }
  FUN_00f9604c(param_1 + 4);
  if (param_1[0x16] == 0) {
    if (param_1[0x17] != 0) {
      (**(code **)(param_1[0x17] + 0x10))(param_1 + 0x1a,param_1[0x18],param_1[0x19]);
    }
  }
  else if (param_1[0x16] == 1) {
    iVar2 = param_1[0x18];
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
    piVar4 = (int *)param_1[0x18];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(param_1[0x18]);
    }
    FUN_01785454(param_1 + 0x17);
    FUN_017854e8(param_1 + 0x19);
  }
  else {
    piVar4 = (int *)param_1[0x17];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436864(param_1[0x17]);
      }
    }
    FUN_01785568(param_1 + 0x18);
  }
  piVar4 = (int *)param_1[0x1e];
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

