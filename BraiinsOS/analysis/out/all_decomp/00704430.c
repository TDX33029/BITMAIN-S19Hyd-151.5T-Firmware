// FUN_00704430 @ 00704430 size=776 calls_out=8 calls_in=2
// strings: 

undefined4 FUN_00704430(int *param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[6]) {
  case '\0':
    iVar4 = *param_1 + 4;
    param_1[1] = iVar4;
    *(undefined1 *)(param_1 + 3) = 0;
LAB_007044b0:
    param_1[4] = iVar4 + 0x34;
    param_1[5] = -1;
switchD_00704494_caseD_3:
    iVar4 = FUN_006f5654(param_1 + 4,param_2);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 6) = 3;
      *(undefined1 *)(param_1 + 3) = 3;
      return 1;
    }
    param_1[2] = iVar4;
    if (param_1[4] != 0) {
      FUN_006f5fbc(param_1[4],param_1[5],1);
      iVar4 = param_1[2];
    }
    piVar10 = (int *)(iVar4 + 0x20);
    param_1[4] = (int)piVar10;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01859cc4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01859cc4);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[3]) {
    case '\0':
      iVar4 = param_1[1];
      goto LAB_007044b0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01859cf4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01859cf4);
    case '\x03':
      goto switchD_00704494_caseD_3;
    case '\x04':
      piVar10 = (int *)param_1[4];
    }
  }
  bVar2 = FUN_006b2698(piVar10);
  if (bVar2 != 2) {
    if ((bVar2 & 1) == 0) {
      piVar9 = (int *)*piVar10;
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar9;
          bVar1 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar1);
        *piVar9 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007824b0(*piVar10);
        }
      }
      *piVar10 = 0;
    }
    goto LAB_007046e8;
  }
  iVar4 = *piVar10;
  if (iVar4 == 0) {
    puVar8 = &DAT_018a4ce8;
    goto LAB_0070471c;
  }
  piVar9 = (int *)(iVar4 + 0x2c);
  do {
    iVar5 = *piVar9;
    if (iVar5 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar5 != 2) goto LAB_00704570;
      iVar5 = param_2[1];
      puVar7 = (undefined4 *)(*param_2 + 8);
      goto LAB_007046ac;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_00704570:
  if (iVar5 == 0) {
    if (*(undefined4 **)(iVar4 + 0x24) == (undefined4 *)0x0) {
      iVar5 = param_2[1];
LAB_00704618:
      uVar11 = (**(code **)*param_2)(iVar5);
      if (*(int *)(iVar4 + 0x24) != 0) {
        (**(code **)(*(int *)(iVar4 + 0x24) + 0xc))(*(undefined4 *)(iVar4 + 0x28));
      }
      *(undefined8 *)(iVar4 + 0x24) = uVar11;
      iVar5 = *piVar9;
    }
    else {
      iVar5 = param_2[1];
      if (*(int *)(iVar4 + 0x28) != iVar5 ||
          *(undefined4 **)(iVar4 + 0x24) != (undefined4 *)*param_2) goto LAB_00704618;
      iVar5 = *piVar9;
    }
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar9);
        if (bVar1) {
          *piVar9 = 0;
          DataMemoryBarrier(0xb);
          goto LAB_007046b8;
        }
      } while (*piVar9 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar6 = *(int *)(iVar4 + 0x24);
    iVar5 = *(int *)(iVar4 + 0x28);
    *(undefined4 *)(iVar4 + 0x24) = 0;
    if (iVar6 == 0) {
      puVar8 = &DAT_01882284;
LAB_0070471c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar8);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = 0;
    puVar7 = (undefined4 *)(iVar6 + 4);
    DataMemoryBarrier(0xb);
LAB_007046ac:
    (*(code *)*puVar7)(iVar5);
  }
LAB_007046b8:
  cVar3 = FUN_006b2698(piVar10);
  if (cVar3 == '\x02') {
    *(undefined1 *)(param_1 + 6) = 3;
    *(undefined1 *)(param_1 + 3) = 4;
    return 1;
  }
LAB_007046e8:
  FUN_006f625c(param_1[2]);
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  return 0;
}

