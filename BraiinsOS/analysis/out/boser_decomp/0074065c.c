// FUN_0074065c @ 0074065c size=1556 calls_out=20 calls_in=1
// strings: background task failed | internal error: entered unreachable code

void FUN_0074065c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  undefined4 **ppuVar15;
  uint **ppuVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined4 *local_d8;
  undefined4 **local_b8;
  uint local_b4;
  undefined4 **local_b0;
  uint local_ac;
  undefined4 **local_a8;
  undefined1 uStack_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  uint **local_a0;
  code *local_9c;
  uint *local_98;
  int iStack_94;
  undefined4 **ppuStack_90;
  uint uStack_8c;
  uint *local_88;
  int local_84;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint *local_50;
  int local_4c;
  
  puVar6 = (undefined4 *)((uint)&local_a0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar7 = *param_2;
    param_2[4] = uVar7;
    param_2[1] = uVar7;
    *(undefined1 *)(param_2 + 0x12) = 0;
LAB_0074075c:
    *(undefined1 *)(param_2 + 0x11) = 0;
    param_2[5] = uVar7;
LAB_00740770:
    *(undefined1 *)(param_2 + 8) = 0;
    param_2[6] = uVar7;
LAB_00740780:
    param_2[7] = uVar7;
LAB_00740784:
    *(undefined1 *)(param_2 + 0x10) = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 1;
    param_2[0xf] = 1;
    param_2[9] = uVar7;
    param_2[10] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c07d48);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c07d48);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x12)) {
    case 0:
      uVar7 = param_2[4];
      goto LAB_0074075c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23280);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23280);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x11)) {
    case 0:
      uVar7 = param_2[5];
      goto LAB_00740770;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23290);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23290);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 8)) {
    case 0:
      uVar7 = param_2[6];
      goto LAB_00740780;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c232a0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c232a0);
    case 3:
      uVar7 = param_2[7];
      goto LAB_00740784;
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 6)) {
    case 0:
      goto switchD_007406dc_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c07d58);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c07d58);
    case 3:
      iVar12 = param_2[5];
    }
    goto LAB_00740820;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 6)) {
    case 0:
      goto switchD_00740710_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      ppuVar15 = (undefined4 **)param_2[5];
    }
    goto LAB_00740a4c;
  }
  puVar11 = param_2 + 0x12;
  bVar4 = FUN_019f9bc4(param_2 + 9,param_3);
  if (bVar4 == 2) {
    uVar5 = 3;
    *(undefined1 *)(param_2 + 0x11) = 3;
    *(undefined1 *)(param_2 + 8) = 4;
LAB_00740a74:
    *(undefined1 *)puVar11 = 3;
  }
  else {
    FUN_0193c3cc(param_2 + 9);
    if ((bVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
    }
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[2] = param_2[5];
    *(undefined1 *)(param_2 + 8) = 1;
    *(undefined1 *)(param_2 + 0x12) = 1;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_2[4] = param_2[5] + 0x18;
switchD_007406dc_caseD_0:
    iVar12 = param_2[4];
    param_2[5] = iVar12;
LAB_00740820:
    puVar11 = param_2 + 6;
    FUN_019e6a68(&local_b8,iVar12,*param_3);
    if (((uint)local_b8 & 0xff) != 4) {
      if (((uint)local_b8 & 0xff) == 5) {
        uVar5 = 4;
        goto LAB_00740a74;
      }
      local_9c = (code *)local_b4;
      local_a0 = local_b8;
      uVar5 = FUN_005ef5e8(&local_a0);
      *(undefined1 *)(iVar12 + 0x18) = uVar5;
      FUN_0069263c(local_b8,local_b4);
    }
    *(undefined1 *)(param_2 + 6) = 1;
    piVar8 = *(int **)(param_2[1] + 0x3c);
    do {
      iVar12 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar12 + 1;
    if (iVar12 < 0) goto LAB_00740978;
    param_2[4] = piVar8;
    *(undefined1 *)(param_2 + 6) = 0;
switchD_00740710_caseD_0:
    uVar7 = param_2[4];
    uVar18 = FUN_019ef7f4(&DAT_01c230d0);
    iVar12 = (int)(uVar18 >> 0x20);
    iVar9 = 0x218;
    if ((uVar18 & 1) != 0) {
      iVar9 = 0x148;
    }
    uVar17 = *(undefined4 *)(iVar12 + iVar9);
    do {
      do {
        iVar9 = DAT_01d50474;
        uVar3 = DAT_01d50470;
        uVar10 = DAT_01d50470 + 1;
        iVar13 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar1 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar1);
      bVar1 = DAT_01d50470 == 0;
      bVar2 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar10;
      DAT_01d50474 = iVar13;
    } while (bVar1 && bVar2);
    local_84 = 0x200;
    if ((uVar18 & 1) != 0) {
      local_84 = 0x138;
    }
    local_84 = iVar12 + local_84;
    local_88 = *(uint **)(local_84 + 8);
    if (local_88 != (uint *)0x0) {
      do {
        uVar10 = *local_88;
        bVar1 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar1);
      *local_88 = uVar10 + 1;
      if ((int)uVar10 < 0) {
LAB_00740978:
                    /* WARNING: Does not return */
        pcVar14 = (code *)software_udf(0xfdee,0x740978);
        (*pcVar14)();
      }
      local_84 = *(int *)(local_84 + 0xc);
      do {
        uVar10 = *local_88;
        bVar1 = (bool)hasExclusiveAccess(local_88);
      } while (!bVar1);
      *local_88 = uVar10 + 1;
      if (0x7fffffff < uVar10) goto LAB_00740978;
    }
    local_98 = (uint *)&DAT_01c08120;
    local_a0 = (undefined4 **)0xcc;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = uVar3;
    puVar6[5] = iVar9;
    local_78 = 0;
    local_9c = (code *)0x0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_a8 = (undefined4 **)0x0;
    local_70 = uVar7;
    local_50 = local_88;
    local_4c = local_84;
    iVar9 = FUN_01be5878(&local_a8,0x20,0x60);
    ppuVar15 = local_a8;
    if ((iVar9 != 0) || (local_a8 == (undefined4 **)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_a8,&local_a0,0x60);
    FUN_019f02d4(&local_a0,uVar17,ppuVar15,1,uVar18);
    if (((uint)local_a0 & 0xfe) != 4) {
      uStack_a4 = SUB41(local_9c,0);
      local_a1 = (undefined1)((uint)local_9c >> 0x18);
      local_a8 = local_a0;
      local_a3 = (undefined2)((uint)local_9c >> 8);
      local_9c = FUN_019a7d7c;
      local_a0 = (uint **)&local_a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_a0,&DAT_01c230d0);
    }
    FUN_014397e4((int)uVar18,iVar12);
    param_2[5] = ppuVar15;
LAB_00740a4c:
    local_d8 = param_2 + 4;
    puVar11 = param_2 + 6;
    FUN_014b4c40(&local_a0,ppuVar15,*param_3);
    if (((uint)local_a0 & 1) != 0) {
      uVar5 = 5;
      goto LAB_00740a74;
    }
    local_b8 = (undefined4 **)local_98;
    local_b4 = iStack_94;
    local_b0 = ppuStack_90;
    local_ac = uStack_8c;
    piVar8 = (int *)param_2[5];
    if (*piVar8 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar8);
      if (!bVar1) goto LAB_00740ad0;
      *piVar8 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00740ad0:
      (**(code **)(piVar8[2] + 0x10))();
    }
    if (local_b8 == (undefined4 **)0x0 && local_b4 == 0) {
      pcVar14 = (code *)local_ac;
      ppuVar16 = local_b0;
    }
    else {
      FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
      pcVar14 = local_9c;
      ppuVar16 = local_a0;
      FUN_00740fb8(&local_b8);
    }
    *param_1 = (uint)ppuVar16;
    *(undefined1 *)puVar11 = 1;
    param_1[1] = (uint)pcVar14;
    uVar5 = 5;
    if (((uint)ppuVar16 & 0xff) != 5) {
      FUN_00741144(local_d8);
      uVar5 = 1;
      FUN_019f8c54(param_2[2],1);
      goto LAB_00740a88;
    }
  }
  *(undefined1 *)param_1 = 5;
LAB_00740a88:
  *(undefined1 *)(param_2 + 3) = uVar5;
  return;
}

