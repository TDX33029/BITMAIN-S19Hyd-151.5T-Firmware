// FUN_005c4b54 @ 005c4b54 size=388 calls_out=9 calls_in=3
// strings: 

void FUN_005c4b54(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_005c3004(param_1 + 0x1c0);
  FUN_005c384c(param_1 + 0x150);
  FUN_005c73cc(param_1 + 0x10);
  if (*(int *)(param_1 + 0x198) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x19c));
  }
  if (*(int *)(param_1 + 0x1a4) == -0x80000000 || *(int *)(param_1 + 0x1a4) == 0) {
    if (*(int *)(param_1 + 0x1b0) != -0x80000000 && *(int *)(param_1 + 0x1b0) != 0) {
LAB_005c4ccc:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1b4));
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1a8));
    if (*(int *)(param_1 + 0x1b0) != -0x80000000 && *(int *)(param_1 + 0x1b0) != 0)
    goto LAB_005c4ccc;
  }
  piVar2 = *(int **)(param_1 + 0x218);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x218));
  }
  piVar2 = *(int **)(param_1 + 0x21c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacbe0(*(undefined4 *)(param_1 + 0x21c));
  }
  piVar2 = *(int **)(param_1 + 0x220);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaafc(*(undefined4 *)(param_1 + 0x220));
  }
  piVar2 = *(int **)(param_1 + 0x228);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_005c4c78;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
LAB_005c4c78:
  puVar4 = (undefined4 *)(param_1 + 0x224);
  FUN_01663cc4(*puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
    return;
  }
  return;
}

