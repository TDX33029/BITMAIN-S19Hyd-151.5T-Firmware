// FUN_00dde774 @ 00dde774 size=416 calls_out=3 calls_in=2
// strings: 

void FUN_00dde774(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_r6;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*(char *)((int)param_1 + 0x46) == '\0') {
    piVar1 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar5 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar5);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(param_1[0xc]);
    }
    piVar1 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar5 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar5);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(param_1[0xd]);
      return;
    }
  }
  else if (*(char *)((int)param_1 + 0x46) == '\x03') {
    if (*param_1 == 1) {
      if (param_1[2] != 0 || param_1[3] != 0) {
        bVar5 = param_1[4] == 0 && param_1[5] == 0;
        if (param_1[4] != 0 || param_1[5] != 0) {
          unaff_r6 = param_1[6];
          bVar5 = unaff_r6 == 0;
        }
        if (!bVar5) {
          puVar4 = (undefined4 *)param_1[7];
          pcVar2 = (code *)*puVar4;
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(unaff_r6);
          }
          if (puVar4[1] != 0) {
            thunk_FUN_016d3fb4(unaff_r6);
          }
        }
      }
    }
    else if ((*param_1 == 0) && (piVar1 = (int *)param_1[2], piVar1 != (int *)0x0)) {
      if (*piVar1 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar5 = (bool)hasExclusiveAccess(piVar1);
        if (bVar5) {
          *piVar1 = 0x84;
          goto LAB_00dde8a0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar1[2] + 0x10))();
    }
LAB_00dde8a0:
    piVar1 = (int *)param_1[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar5 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar5);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaaeec(param_1[0xb]);
    }
    piVar1 = (int *)param_1[10];
    *(undefined1 *)(param_1 + 0x11) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar1;
      bVar5 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar5);
    *piVar1 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(param_1[10]);
    }
    *(undefined1 *)((int)param_1 + 0x45) = 0;
    return;
  }
  return;
}

