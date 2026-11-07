// FUN_00c89590 @ 00c89590 size=616 calls_out=13 calls_in=2
// strings: 

void FUN_00c89590(undefined4 *param_1)

{
  bool bVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    piVar5 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[2]);
    }
    piVar5 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
      return;
    }
    return;
  default:
    goto switchD_00c895ac_caseD_1;
  case 3:
    if (param_1[9] != 0) {
      FUN_00c8204c(param_1[9],param_1[10],1);
    }
    goto LAB_00c897a0;
  case 4:
    FUN_00a07b4c(param_1 + 0x10);
    piVar5 = param_1 + 0xe;
    iVar7 = *piVar5;
    if (iVar7 != 0) {
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar7 + 0x10) < 0) {
        puVar3 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = *puVar3 & 0x7fffffff;
        DataMemoryBarrier(0xb);
        iVar7 = *piVar5;
      }
      else {
        iVar7 = *piVar5;
      }
      if (iVar7 != 0) {
        do {
          while (bVar2 = FUN_00cefe20(piVar5), bVar2 == 2) {
            if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0187bde8);
            }
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar5 + 0x10) == 0) goto LAB_00c89750;
            FUN_016da3a8();
          }
        } while ((bVar2 & 1) != 0);
LAB_00c89750:
        piVar4 = (int *)*piVar5;
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078cf4c(*piVar5);
          }
        }
      }
    }
    FUN_00656f00(param_1 + 0x2a);
    FUN_00badc78(param_1 + 9);
    break;
  case 5:
    if (param_1[9] != 0) {
      FUN_00c8204c(param_1[9],param_1[10],1);
    }
    break;
  case 6:
    uVar8 = param_1[0x10];
    puVar9 = (undefined4 *)param_1[0x11];
    pcVar6 = (code *)*puVar9;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar8);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    FUN_00badb28(param_1 + 9);
    FUN_00c822ec(param_1[7]);
  }
  FUN_00c822ec(param_1[6]);
LAB_00c897a0:
  piVar5 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[4]);
  }
  piVar5 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[3]);
    return;
  }
switchD_00c895ac_caseD_1:
  return;
}

