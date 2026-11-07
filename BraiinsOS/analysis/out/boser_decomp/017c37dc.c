// FUN_017c37dc @ 017c37dc size=404 calls_out=7 calls_in=3
// strings: 

void FUN_017c37dc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
    }
  }
  else if (*param_1 == 1) {
    iVar2 = param_1[2];
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(iVar2 + 8);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
    DataMemoryBarrier(0xb);
    if (iVar5 != 0) {
      puVar4 = (uint *)(iVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar5 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0xfffffffd;
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar2 + 0x10));
        }
      }
    }
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(param_1[2]);
    }
    FUN_01785454(param_1 + 1);
    FUN_017854e8(param_1 + 3);
  }
  else {
    piVar3 = (int *)param_1[1];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436864(param_1[1]);
      }
    }
    FUN_0178ead4(param_1 + 2);
  }
  piVar3 = (int *)param_1[8];
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (*piVar3 != 2) {
    FUN_01432304(piVar3 + 1);
  }
  thunk_FUN_01be4678(piVar3);
  return;
}

