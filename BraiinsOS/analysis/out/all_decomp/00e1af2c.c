// FUN_00e1af2c @ 00e1af2c size=1128 calls_out=13 calls_in=1
// strings: 

undefined4 FUN_00e1af2c(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int *local_2c;
  int local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    piVar2 = (int *)*param_1;
    param_1[5] = piVar2;
    *(undefined1 *)(param_1 + 8) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187990c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187990c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 8)) {
    case 0:
      piVar2 = (int *)param_1[5];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b064);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b064);
    case 3:
      goto switchD_00e1af88_caseD_3;
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 10)) {
    case 0:
      iVar3 = param_1[7];
      goto LAB_00e1b288;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187af80);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187af80);
    case 3:
      goto switchD_00e1b044_caseD_3;
    }
  }
  param_1[6] = *piVar2 + 8;
  param_1[7] = 0xffffffff;
switchD_00e1af88_caseD_3:
  iVar3 = FUN_00e43b0c(param_1 + 6,param_2);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 8) = 3;
    *(undefined1 *)(param_1 + 4) = 3;
    return 2;
  }
  iVar4 = param_1[6];
  if (iVar4 != 0) {
    FUN_00e43e74(iVar4,param_1[7],1);
  }
  FUN_00f29e9c(&local_30,*(int *)(iVar3 + 0x2c),
               *(int *)(iVar3 + 0x2c) + *(int *)(iVar3 + 0x30) * 0x30);
  FUN_00e44114(iVar3);
  *(undefined1 *)(param_1 + 8) = 1;
  if (local_30 == -0x80000000) {
    *(undefined1 *)(param_1 + 4) = 3;
    return 2;
  }
  param_1[3] = local_28;
  param_1[1] = local_30;
  param_1[2] = local_2c;
  param_1[5] = local_2c;
  param_1[6] = local_2c + local_28;
  piVar2 = local_2c;
  if (local_2c != local_2c + local_28) {
    do {
      param_1[5] = piVar2 + 1;
      iVar3 = *piVar2;
      *(undefined1 *)(param_1 + 10) = 0;
      iVar3 = iVar3 + 8;
      param_1[7] = iVar3;
LAB_00e1b288:
      param_1[8] = iVar3 + 0x14;
      param_1[9] = 0xffffffff;
switchD_00e1b044_caseD_3:
      iVar3 = FUN_00e442f8(param_1 + 8,param_2);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 10) = 3;
LAB_00e1b4c8:
        *(undefined1 *)(param_1 + 4) = 4;
        return 2;
      }
      iVar4 = param_1[8];
      if (iVar4 != 0) {
        FUN_00e44660(iVar4,param_1[9],1);
      }
      FUN_00f29d98(&local_30,*(int *)(iVar3 + 0x24),
                   *(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x28) * 0x60);
      FUN_00e44900(iVar3);
      iVar4 = local_28;
      piVar2 = local_2c;
      iVar3 = local_30;
      *(undefined1 *)(param_1 + 10) = 1;
      if (local_30 == -0x80000000) goto LAB_00e1b4c8;
      iVar9 = local_28 << 2;
      piVar7 = local_2c;
      while (iVar9 != 0) {
        iVar10 = *(int *)(*piVar7 + 0x14);
        piVar6 = (int *)(**(code **)(iVar10 + 0x28))
                                  (*(int *)(*piVar7 + 0x10) +
                                   (*(int *)(iVar10 + 8) - 1U & 0xfffffff8) + 8);
        iVar9 = iVar9 + -4;
        piVar7 = piVar7 + 1;
        if (*(char *)(*piVar6 + 8) == '\x03') {
          if (iVar4 != 0) {
            iVar9 = 0;
            do {
              piVar7 = (int *)piVar2[iVar9];
              iVar10 = iVar9 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar8 = *piVar7;
                bVar1 = (bool)hasExclusiveAccess(piVar7);
              } while (!bVar1);
              *piVar7 = iVar8 + -1;
              if (iVar8 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0078e66c(piVar2[iVar9]);
              }
              iVar9 = iVar10;
            } while (iVar10 != iVar4);
          }
          if (iVar3 != 0) {
            thunk_FUN_016d3fb4(piVar2);
          }
          iVar3 = param_1[2];
          iVar4 = param_1[3];
          if (iVar4 != 0) {
            iVar9 = 0;
            do {
              piVar2 = *(int **)(iVar3 + iVar9 * 4);
              iVar10 = iVar9 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar8 = *piVar2;
                bVar1 = (bool)hasExclusiveAccess(piVar2);
              } while (!bVar1);
              *piVar2 = iVar8 + -1;
              if (iVar8 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0078ecac(*(undefined4 *)(iVar3 + iVar9 * 4));
              }
              iVar9 = iVar10;
            } while (iVar10 != iVar4);
          }
          iVar3 = param_1[1];
          uVar5 = 1;
          goto LAB_00e1b258;
        }
      }
      if (iVar4 != 0) {
        iVar9 = 0;
        do {
          piVar7 = (int *)piVar2[iVar9];
          iVar10 = iVar9 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar7;
            bVar1 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar1);
          *piVar7 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078e66c(piVar2[iVar9]);
          }
          iVar9 = iVar10;
        } while (iVar10 != iVar4);
      }
      if (iVar3 != 0) {
        thunk_FUN_016d3fb4(piVar2);
      }
      piVar2 = (int *)param_1[5];
    } while (piVar2 != (int *)param_1[6]);
  }
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  if (iVar4 != 0) {
    iVar9 = 0;
    do {
      piVar2 = *(int **)(iVar3 + iVar9 * 4);
      iVar10 = iVar9 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078ecac(*(undefined4 *)(iVar3 + iVar9 * 4));
      }
      iVar9 = iVar10;
    } while (iVar10 != iVar4);
  }
  iVar3 = param_1[1];
  uVar5 = 0;
LAB_00e1b258:
  if (iVar3 != 0) {
    thunk_FUN_016d3fb4(param_1[2]);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return uVar5;
}

