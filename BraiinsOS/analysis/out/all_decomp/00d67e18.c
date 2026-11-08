// FUN_00d67e18 @ 00d67e18 size=804 calls_out=14 calls_in=1
// strings: 

void FUN_00d67e18(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 != 0) {
    piVar2 = *(int **)(param_1 + 0x10);
    do {
      iVar5 = iVar5 + -1;
      iVar3 = 0;
      if (*piVar2 != 0) {
        iVar3 = piVar2[1];
      }
      if (*piVar2 != 0 && iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(piVar2[2]);
      }
      piVar2 = piVar2 + 3;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x20) == 2 && *(int *)(param_1 + 0x24) == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x204);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaa68(*(undefined4 *)(param_1 + 0x204));
  }
  FUN_00aa313c(*(undefined4 *)(param_1 + 0x208));
  piVar2 = *(int **)(param_1 + 0x208);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(param_1 + 0x208));
  }
  piVar2 = *(int **)(param_1 + 0x20c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x20c));
  }
  if (*(int *)(param_1 + 0x1f8) != -0x80000000 && *(int *)(param_1 + 0x1f8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1fc));
  }
  iVar5 = *(int *)(param_1 + 0x210);
  piVar2 = (int *)(iVar5 + 0x44);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00e473d0(iVar5 + 8);
  }
  piVar2 = *(int **)(param_1 + 0x210);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacf14(*(undefined4 *)(param_1 + 0x210));
  }
  FUN_005c384c(param_1 + 0x170);
  FUN_005c73cc(param_1 + 0x30);
  if (*(int *)(param_1 + 0x1b8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1bc));
  }
  if (*(int *)(param_1 + 0x1c4) == -0x80000000 || *(int *)(param_1 + 0x1c4) == 0) {
    if (*(int *)(param_1 + 0x1d0) != -0x80000000 && *(int *)(param_1 + 0x1d0) != 0) {
LAB_00d67bd4:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1d4));
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c8));
    if (*(int *)(param_1 + 0x1d0) != -0x80000000 && *(int *)(param_1 + 0x1d0) != 0)
    goto LAB_00d67bd4;
  }
  piVar2 = *(int **)(param_1 + 0x238);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x238));
  }
  piVar2 = *(int **)(param_1 + 0x23c);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacbe0(*(undefined4 *)(param_1 + 0x23c));
  }
  piVar2 = *(int **)(param_1 + 0x240);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaafc(*(undefined4 *)(param_1 + 0x240));
  }
  piVar2 = *(int **)(param_1 + 0x248);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_00d67b74;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_00d67b74:
  puVar4 = (undefined4 *)(param_1 + 0x244);
  FUN_01663cc4(*puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
    return;
  }
  return;
}

