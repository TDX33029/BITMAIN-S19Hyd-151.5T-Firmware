// FUN_00e84298 @ 00e84298 size=600 calls_out=7 calls_in=3
// strings: 

void FUN_00e84298(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int *piStack_54;
  undefined4 uStack_50;
  undefined1 local_14;
  
  piStack_54 = *(int **)(param_1 + 8);
  uStack_50 = *(undefined4 *)(param_1 + 0xc);
  do {
    iVar6 = *piStack_54;
    bVar2 = (bool)hasExclusiveAccess(piStack_54);
  } while (!bVar2);
  *piStack_54 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe844ec);
    (*pcVar1)();
  }
  local_14 = 0;
  piVar3 = (int *)FUN_00767950(&piStack_54);
  if (*piVar3 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar3);
    if (bVar2) {
      *piVar3 = 0x84;
      goto LAB_00e8430c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar3[2] + 0x10))();
LAB_00e8430c:
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  piVar3 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  piVar3 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  piVar3 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x48));
  }
  FUN_00e84688(param_1 + 0x18);
  piVar3 = *(int **)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007843c4(*(undefined4 *)(param_1 + 0x4c));
  }
  iVar6 = *(int *)(param_1 + 0x44);
  if (iVar6 != 0) {
    piVar3 = (int *)(iVar6 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar6 + 0x10)) {
        puVar5 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar6 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar4 = *(int *)(iVar6 + 0x18);
        *(undefined4 *)(iVar6 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x1c));
        }
      }
    }
    piVar3 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078459c(*(undefined4 *)(param_1 + 0x44));
      return;
    }
  }
  return;
}

