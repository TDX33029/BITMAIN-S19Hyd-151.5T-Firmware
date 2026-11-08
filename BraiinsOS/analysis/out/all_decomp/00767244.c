// FUN_00767244 @ 00767244 size=1188 calls_out=13 calls_in=1
// strings: 

void FUN_00767244(undefined4 *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  
  if (*(char *)(param_1 + 0x32) == '\0') {
    piVar8 = (int *)param_1[0x30];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[0x30]);
    }
    piVar8 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
    }
    iVar4 = param_1[0x31];
    if (iVar4 == 0) {
      return;
    }
    piVar8 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar7 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar6 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar8 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    goto LAB_007676dc;
  }
  if (*(char *)(param_1 + 0x32) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 10)) {
  case 0:
    piVar8 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[4]);
    }
    piVar8 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[2]);
    }
  default:
    goto switchD_00767274_caseD_1;
  case 3:
    if (param_1[0xb] != 0) {
      FUN_006f5fbc(param_1[0xb],param_1[0xc],1);
    }
    goto LAB_0076759c;
  case 4:
    FUN_00a07b4c(param_1 + 0x12);
    piVar8 = param_1 + 0x10;
    iVar4 = *piVar8;
    if (iVar4 != 0) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar7 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      if (*piVar8 != 0) {
        do {
          while (bVar2 = FUN_00cefe20(piVar8), bVar2 == 2) {
            if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0187bde8);
            }
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar8 + 0x10) == 0) goto LAB_0076754c;
            FUN_016da3a8();
          }
        } while ((bVar2 & 1) != 0);
LAB_0076754c:
        piVar3 = (int *)*piVar8;
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078cf4c(*piVar8);
          }
        }
      }
    }
    FUN_00656f00(param_1 + 0x2c);
    FUN_007bbc38(param_1 + 0xb);
    break;
  case 5:
    if (param_1[0xb] != 0) {
      FUN_006f5fbc(param_1[0xb],param_1[0xc],1);
    }
    break;
  case 6:
    uVar10 = param_1[0x12];
    puVar11 = (undefined4 *)param_1[0x13];
    pcVar5 = (code *)*puVar11;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar10);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    FUN_007bbb38(param_1 + 0xb);
    FUN_006f625c(param_1[9]);
  }
  FUN_006f625c(param_1[8]);
LAB_0076759c:
  piVar8 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar8;
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[6]);
  }
  piVar8 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar8;
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *piVar8 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[5]);
  }
switchD_00767274_caseD_1:
  iVar4 = param_1[0x31];
  if (iVar4 != 0) {
    piVar8 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar7 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar6 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar8 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
LAB_007676dc:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078cf4c(param_1[0x31]);
      return;
    }
  }
  return;
}

