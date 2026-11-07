// FUN_0098e348 @ 0098e348 size=556 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code: invalid Once state | internal error: entered unreachable code: invalid Once state | internal error: entered unreachable code: invalid Once state | internal error: entered unreachable code: invalid Once state

void FUN_0098e348(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar9 = *(int *)(param_1 + 0x14);
    iVar7 = 0;
    do {
      puVar2 = (undefined4 *)(iVar9 + iVar7 * 8);
      piVar3 = (int *)*puVar2;
      iVar7 = iVar7 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar2,puVar2[1]);
      }
    } while (iVar7 != iVar8);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  piVar3 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x24);
  while (iVar8 != iVar7) {
    piVar3 = (int *)(iVar9 + iVar8 * 8);
    iVar4 = *piVar3;
    iVar8 = iVar8 + 1;
    if (iVar4 != -1) {
      piVar5 = (int *)(iVar4 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        iVar4 = piVar3[1];
        uVar6 = *(uint *)(iVar4 + 8);
        if (uVar6 < 5) {
          uVar6 = 4;
        }
        if ((*(int *)(iVar4 + 4) + uVar6 + 7 & -uVar6) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
  }
  piVar3 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  if ((1 < *(int *)(param_1 + 0xd0) - 2U) && (*(int *)(param_1 + 0xd0) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  if ((1 < *(int *)(param_1 + 0x68) - 2U) && (*(int *)(param_1 + 0x68) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  if ((1 < *(int *)(param_1 + 0x90) - 2U) && (*(int *)(param_1 + 0x90) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  if (*(int *)(param_1 + 0xa8) - 2U < 2) {
    return;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874);
  }
  return;
}

