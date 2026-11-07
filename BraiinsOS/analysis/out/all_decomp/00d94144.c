// FUN_00d94144 @ 00d94144 size=1508 calls_out=20 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

void FUN_00d94144(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_r6;
  int iVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_1 + 0x31c);
  if (iVar5 != 0) {
    piVar3 = *(int **)(param_1 + 0x318);
    do {
      iVar5 = iVar5 + -1;
      iVar1 = 0;
      if (*piVar3 != 0) {
        iVar1 = piVar3[1];
      }
      if (*piVar3 != 0 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(piVar3[2]);
      }
      piVar3 = piVar3 + 3;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x314) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x318));
  }
  FUN_00d03c1c(param_1 + 0x328);
  iVar5 = *(int *)(param_1 + 0x4a8);
  if (iVar5 != 0) {
    iVar6 = *(int *)(param_1 + 0x4a4);
    iVar1 = 0;
    do {
      puVar2 = (undefined4 *)(iVar6 + iVar1 * 8);
      piVar3 = (int *)*puVar2;
      iVar1 = iVar1 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar7 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar7);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*puVar2,puVar2[1]);
      }
    } while (iVar1 != iVar5);
  }
  if (*(int *)(param_1 + 0x4a0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4a4));
  }
  piVar3 = *(int **)(param_1 + 0x4ac);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d03ce0(*(undefined4 *)(param_1 + 0x4ac));
  }
  iVar5 = *(int *)(param_1 + 0x2f0);
  piVar3 = (int *)(iVar5 + 0xbc);
  do {
    iVar1 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar1 + -1;
  if (iVar1 == 1) {
    FUN_0163b708(iVar5 + 0xa8);
  }
  piVar3 = *(int **)(param_1 + 0x2f0);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x2f0));
  }
  FUN_00d925d0(param_1 + 0x70);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x224) + 4);
  for (iVar5 = *(int *)(param_1 + 0x228); iVar5 != 0; iVar5 = iVar5 + -1) {
    if (puVar2[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar2);
    }
    puVar2 = puVar2 + 4;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x224));
  }
  piVar3 = *(int **)(param_1 + 0x4b0);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x4b0));
  }
  piVar3 = *(int **)(param_1 + 0x4b4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x4b4));
  }
  FUN_00d964a4(param_1 + 0x4c8);
  iVar5 = *(int *)(param_1 + 0x2f8);
  piVar3 = (int *)(iVar5 + 0xa4);
  do {
    iVar1 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar1 + -1;
  if (iVar1 == 1) {
    FUN_0163b708(iVar5 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 0x2f8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x2f8));
  }
  piVar3 = *(int **)(param_1 + 0x4b8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0x4b8));
  }
  piVar3 = *(int **)(param_1 + 0x4f4);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x4f4));
    }
  }
  piVar3 = *(int **)(param_1 + 0x500);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x500));
    }
  }
  if (1 < *(int *)(param_1 + 0x468) - 2U) {
    if (*(int *)(param_1 + 0x468) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874
                  );
    }
    piVar3 = *(int **)(param_1 + 0x46c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x46c));
    }
  }
  FUN_00ee0e9c(*(undefined4 *)(param_1 + 0x4bc));
  piVar3 = *(int **)(param_1 + 0x4bc);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x4bc));
  }
  FUN_00ee0f30(*(undefined4 *)(param_1 + 0x4c0));
  piVar3 = *(int **)(param_1 + 0x4c0);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x4c0));
  }
  iVar5 = *(int *)(param_1 + 0x300);
  piVar3 = (int *)(iVar5 + 0xc4);
  do {
    iVar1 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar1 + -1;
  if (iVar1 == 1) {
    FUN_0163b708(iVar5 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 0x300);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x300));
  }
  iVar5 = *(int *)(param_1 + 0x484);
  if (iVar5 != 0) {
    piVar3 = *(int **)(param_1 + 0x480);
    do {
      iVar5 = iVar5 + -1;
      iVar1 = 0;
      if (*piVar3 != 0) {
        iVar1 = piVar3[1];
      }
      if (*piVar3 != 0 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(piVar3[2]);
      }
      piVar3 = piVar3 + 3;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x47c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x480));
  }
  FUN_00d96914(param_1 + 0x490);
  FUN_00ec925c(*(undefined4 *)(param_1 + 0x4c4));
  piVar3 = *(int **)(param_1 + 0x4c4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04674(*(undefined4 *)(param_1 + 0x4c4));
  }
  iVar5 = *(int *)(param_1 + 0x518);
  iVar1 = *(int *)(param_1 + 0x514);
  if (iVar5 != 0) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + -1;
      bVar7 = *(int *)(iVar1 - iVar6) != 0;
      iVar4 = 0;
      if (bVar7) {
        unaff_r6 = iVar1 - iVar6;
        iVar4 = *(int *)(unaff_r6 + 4);
      }
      if (bVar7 && iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar6 = iVar6 + -0xc;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x510) != 0) {
    thunk_FUN_016d3fb4(iVar1);
  }
  piVar3 = *(int **)(param_1 + 0x524);
  FUN_00ec8dcc(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04674(*(undefined4 *)(param_1 + 0x524));
    return;
  }
  return;
}

