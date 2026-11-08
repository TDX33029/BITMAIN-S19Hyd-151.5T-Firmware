// FUN_00bb9eb0 @ 00bb9eb0 size=3688 calls_out=35 calls_in=2
// strings: BUG: poisoned | assertion failed: target_frequency.len() >= self.chip_count

/* WARNING: Removing unreachable block (ram,0x00bba92c) */

undefined8 FUN_00bb9eb0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 extraout_r1;
  code *pcVar11;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  char *pcVar21;
  int *unaff_r7;
  int *piVar22;
  int *piVar23;
  undefined4 *puVar24;
  bool bVar25;
  bool bVar26;
  uint in_fpscr;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  uint local_10c;
  undefined4 local_104;
  undefined4 *local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  longlong local_ec;
  uint local_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int *local_90;
  undefined4 *local_8c;
  uint local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  piVar23 = param_1 + 0x12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    iVar3 = param_1[0xd];
    uVar2 = *(undefined1 *)((int)param_1 + 0x41);
    piVar22 = (int *)(iVar3 + 0x168);
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
    param_1[4] = iVar3;
    param_1[5] = param_1[0xe];
    do {
      if (*piVar22 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar22);
        goto LAB_00bb9f38;
      }
      bVar25 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar25);
    *piVar22 = 1;
    DataMemoryBarrier(0xb);
LAB_00bb9f38:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(iVar3 + 0x16c) != '\0') {
        uVar12 = 0;
        goto LAB_00bba1fc;
      }
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar3 + 0x16d);
LAB_00bb9f64:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar20 = FUN_015bf3f8(), iVar20 == 0)) {
        *(undefined1 *)(iVar3 + 0x16c) = 1;
      }
    }
    else {
      uVar12 = FUN_015bf3f8();
      uVar12 = uVar12 ^ 1;
      if (*(char *)(iVar3 + 0x16c) != '\0') {
LAB_00bba1fc:
        local_8c = (undefined4 *)CONCAT31(local_8c._1_3_,(char)uVar12);
        local_90 = piVar22;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: poisoned",0xd,&local_90,&DAT_01870fdc,&DAT_01875ef8);
      }
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar3 + 0x16d);
      if (uVar12 == 0) goto LAB_00bb9f64;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar22;
      bVar25 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar25);
    *piVar22 = 0;
    if (iVar3 == 2) {
      FUN_016d6968(0xf0,piVar22,0x81,1);
    }
    uVar9 = 0;
    if (*(char *)(param_1 + 0xf) != '\x02') {
      uVar9 = uVar2;
    }
    *(undefined1 *)((int)param_1 + 0x3d) = uVar9;
    if (*(uint *)(param_1[5] + 8) < *(uint *)(param_1[4] + 0x198)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: target_frequency.len() >= self.chip_count",0x3b,&DAT_01875f08)
      ;
    }
    param_1[0x12] = param_1[4] + 0x1a0;
    param_1[0x13] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875f18);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875f18);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1a)) {
    case 0:
      iVar3 = param_1[0x16];
      uVar12 = param_1[0x17];
      goto LAB_00bba598;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875ec8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875ec8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x43)) {
      case 0:
        piVar13 = (int *)param_1[0x1c];
        puVar15 = (undefined4 *)param_1[0x1d];
        uVar12 = param_1[0x1e];
        iVar3 = param_1[0x42];
        goto LAB_00bba690;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01875eb8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01875eb8);
      }
      break;
    case 4:
      iVar3 = param_1[0x1d];
      goto LAB_00bba894;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x41)) {
    case 0:
      piVar13 = (int *)param_1[0x24];
      puVar15 = (undefined4 *)param_1[0x25];
      uVar12 = param_1[0x26];
      iVar3 = param_1[0x40];
      goto LAB_00bba6b8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018758e8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018758e8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0xbd)) {
      case 0:
        iVar3 = param_1[0x2d];
        piVar22 = (int *)param_1[0x2e];
        goto LAB_00bba6e0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018758f8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018758f8);
      case 3:
        goto switchD_00bba194_caseD_3;
      case 4:
        uVar31 = *(undefined8 *)(param_1 + 0x30);
        goto LAB_00bba768;
      }
    }
  case 5:
    goto switchD_00bb9ed8_caseD_5;
  case 6:
    goto switchD_00bb9ed8_caseD_6;
  case 7:
    goto switchD_00bb9ed8_caseD_7;
  case 8:
    goto LAB_00bba428;
  }
  iVar3 = FUN_00c8101c(piVar23,param_2);
  if (iVar3 == 0) {
    uVar2 = 3;
    unaff_r7 = (int *)0x0;
LAB_00bba06c:
    *(undefined1 *)(param_1 + 0x10) = uVar2;
LAB_00bba3d4:
    uVar4 = 1;
LAB_00bba528:
    return CONCAT44(unaff_r7,uVar4);
  }
  if (*piVar23 != 0) {
    FUN_00c8204c(*piVar23,param_1[0x13],1);
  }
  uVar18 = *(uint *)(iVar3 + 0x28);
  uVar10 = 0;
  bVar26 = 0x3ffffffe < uVar18;
  bVar25 = uVar18 == 0x3fffffff;
  uVar12 = uVar18 * 4;
  if (uVar18 < 0x40000000) {
    bVar26 = 0x7ffffffb < uVar12;
    bVar25 = uVar12 == 0x7ffffffc;
  }
  if (!(bVar26 && !bVar25)) {
    uVar4 = *(undefined4 *)(iVar3 + 0x24);
    if (uVar12 == 0) {
      iVar20 = 4;
    }
    else {
      iVar20 = thunk_FUN_016d4a50(uVar12);
      uVar10 = uVar18;
      if (iVar20 == 0) {
        uVar10 = 4;
        goto LAB_00bba024;
      }
    }
    param_1[6] = uVar10;
    param_1[7] = iVar20;
    FUN_016dd1aa(iVar20,uVar4,uVar12);
    param_1[8] = uVar18;
    FUN_00c822ec(iVar3);
    FUN_008e1da8(param_1,param_1[4],*(undefined1 *)(param_1 + 0xf),param_1[7],param_1[8],
                 *(undefined4 *)(param_1[5] + 4),*(undefined4 *)(param_1[5] + 8));
    iVar3 = param_1[4];
    iVar20 = 300;
    if (*(int *)(iVar3 + 0x18) != 0) {
      iVar20 = 0x1c;
    }
    param_1[9] = *(undefined4 *)(iVar3 + iVar20);
    do {
      local_7c = *(undefined4 *)(iVar3 + 0x198);
      local_80 = 0;
      local_84 = param_1 + 9;
      local_88 = param_1[5];
      local_8c = param_1 + 6;
      local_90 = (int *)((int)param_1 + 0x3d);
      FUN_00ce71e0(&local_e0,&local_90);
      param_1[0xb] = uStack_dc;
      param_1[0xc] = uStack_d8;
      puVar19 = (uint *)param_1[0xb];
      iVar20 = param_1[0xc];
      param_1[10] = local_e0;
      *(undefined1 *)((int)param_1 + 0x3e) = 1;
      if (iVar20 == param_1[8]) {
        if (iVar20 != 0) {
          puVar5 = puVar19;
          iVar3 = iVar20;
          puVar14 = (uint *)param_1[7];
          while( true ) {
            if (*puVar5 != *puVar14) break;
            iVar3 = iVar3 + -1;
            puVar5 = puVar5 + 1;
            puVar14 = puVar14 + 1;
            if (iVar3 == 0) goto LAB_00bba4ec;
          }
          goto LAB_00bba53c;
        }
LAB_00bba4ec:
        if (param_1[10] != 0) {
          thunk_FUN_016d3fb4(puVar19);
        }
        iVar3 = param_1[6];
        *(undefined1 *)((int)param_1 + 0x3e) = 0;
        unaff_r7 = (int *)0x0;
joined_r0x00bba510:
        if (iVar3 != 0) {
          thunk_FUN_016d3fb4(param_1[7]);
        }
        *(undefined1 *)(param_1 + 0x10) = 1;
        uVar4 = 0;
        goto LAB_00bba528;
      }
LAB_00bba53c:
      if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0034ae54,0x16,&DAT_0186ac68);
      }
      iVar3 = param_1[4];
      if (iVar20 != 1) {
        uVar12 = *puVar19;
        uVar10 = iVar20 - 1U & 0x3fffffff;
        puVar5 = puVar19;
        do {
          puVar5 = puVar5 + 1;
          if (uVar12 <= *puVar5) {
            uVar12 = *puVar5;
            puVar19 = puVar5;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar12 = *puVar19;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      param_1[0x16] = iVar3;
      param_1[0x17] = uVar12;
LAB_00bba598:
      param_1[0x18] = iVar3;
      param_1[0x19] = uVar12;
      if (*(int *)(iVar3 + 0x5c) == 0) {
        puVar8 = &DAT_0187b968;
LAB_00bbadac:
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(puVar8);
      }
      iVar20 = *(int *)(iVar3 + 0x54);
      if (iVar20 == 0) {
        puVar8 = &DAT_0187b958;
        goto LAB_00bbadac;
      }
      uVar4 = FUN_018462e8(*(undefined4 *)(iVar3 + 0x58));
      dVar27 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = FUN_018462e8(0xffffffff,iVar20);
      dVar28 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      dVar29 = (double)VectorUnsignedToFloat
                                 (*(undefined4 *)(iVar3 + 0xb8),(byte)(in_fpscr >> 0x16) & 3);
      dVar30 = (double)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
      FUN_006fdfd0(SUB84(((dVar27 * 0.8 * dVar28) / dVar29) / dVar30,0),&local_90);
      FUN_00bbb280(0x9999999a,&local_90,extraout_r1,local_90,local_8c,local_88);
      piVar13 = local_90;
      puVar15 = local_8c;
      uVar12 = local_88;
      if ((local_90 != (int *)0x0 || local_8c != (undefined4 *)0x0) || 750000000 < local_88) {
        uVar12 = 750000000;
        puVar15 = (undefined4 *)0x0;
        piVar13 = (int *)0x0;
      }
      param_1[0x14] = uVar12;
      *piVar23 = (int)piVar13;
      param_1[0x13] = puVar15;
      *(undefined1 *)(param_1 + 0x43) = 0;
      param_1[0x1c] = piVar13;
      param_1[0x1d] = puVar15;
      iVar3 = param_1[0x18];
      param_1[0x1e] = uVar12;
      param_1[0x42] = iVar3;
LAB_00bba690:
      param_1[0x22] = uVar12;
      param_1[0x20] = piVar13;
      param_1[0x21] = puVar15;
      iVar3 = *(int *)(iVar3 + 0x178);
      *(undefined1 *)(param_1 + 0x41) = 0;
      iVar3 = iVar3 + 8;
      param_1[0x24] = piVar13;
      param_1[0x25] = puVar15;
      param_1[0x40] = iVar3;
      param_1[0x26] = uVar12;
LAB_00bba6b8:
      piVar22 = param_1 + 0x28;
      *piVar22 = (int)piVar13;
      *(undefined1 *)((int)param_1 + 0xbd) = 0;
      param_1[0x29] = puVar15;
      param_1[0x2d] = iVar3;
      param_1[0x2e] = piVar22;
      param_1[0x2a] = uVar12;
LAB_00bba6e0:
      *(undefined1 *)(param_1 + 0x3f) = 0;
      param_1[0x30] = piVar22;
      param_1[0x31] = iVar3 + 0xc;
      *(undefined1 *)(param_1 + 0x2f) = 1;
switchD_00bba194_caseD_3:
      iVar3 = FUN_007d67b8(param_1 + 0x31,param_2);
      if (iVar3 == 0) {
        uVar2 = 3;
LAB_00bbad44:
        unaff_r7 = param_1 + 0x2c;
        *(undefined1 *)((int)param_1 + 0xbd) = uVar2;
        uVar2 = 3;
        *(undefined1 *)(param_1 + 0x41) = 3;
        *(undefined1 *)(param_1 + 0x43) = 3;
LAB_00bbad5c:
        *(undefined1 *)(param_1 + 0x1a) = uVar2;
        *(undefined1 *)(param_1 + 0x10) = 4;
        goto LAB_00bba3d4;
      }
      param_1[0x2c] = iVar3;
      if (*(char *)(param_1 + 0x3f) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x3e);
        bVar25 = cVar1 == '\x03';
        if (bVar25) {
          cVar1 = *(char *)(param_1 + 0x35);
        }
        if (bVar25 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x36);
          if (param_1[0x37] != 0) {
            (**(code **)(param_1[0x37] + 0xc))(param_1[0x38]);
          }
        }
      }
      puVar15 = (undefined4 *)param_1[0x30];
      *(undefined1 *)(param_1 + 0x2f) = 0;
      uVar31 = (**(code **)(*(int *)(param_1[0x2c] + 0x20) + 0x24))
                         (*(undefined4 *)(param_1[0x2c] + 0x1c),puVar15[2],*puVar15,puVar15[1],
                          puVar15[2]);
      *(undefined8 *)(param_1 + 0x30) = uVar31;
LAB_00bba768:
      unaff_r7 = param_1 + 0x2c;
      iVar3 = (**(code **)((int)((ulonglong)uVar31 >> 0x20) + 0xc))((int)uVar31,param_2);
      if (iVar3 != 0) {
        uVar2 = 4;
        goto LAB_00bbad44;
      }
      puVar15 = (undefined4 *)param_1[0x31];
      uVar4 = param_1[0x30];
      pcVar11 = (code *)*puVar15;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar4);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      pcVar21 = (char *)*unaff_r7;
      if (*pcVar21 == '\0') {
        bVar25 = (bool)hasExclusiveAccess(pcVar21);
        if (!bVar25) goto LAB_00bba7d4;
        *pcVar21 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00bba7d4:
        FUN_01280da8(pcVar21);
      }
      FUN_0128236c(pcVar21);
      FUN_0163af68(pcVar21,1,pcVar21);
      *(undefined2 *)(param_1 + 0x2f) = 0x100;
      FUN_0081c020(unaff_r7);
      *(undefined1 *)(param_1 + 0x41) = 1;
      DataMemoryBarrier(0xb);
      if (DAT_018d8068 == 0) {
        dVar27 = (double)VectorUnsignedToFloat(param_1[0x22],(byte)(in_fpscr >> 0x16) & 3);
        dVar28 = (double)FUN_01845f30(param_1[0x20],param_1[0x21]);
        do {
          unaff_r7 = *(int **)(DAT_018d7fe4 + 0xc);
          bVar25 = (bool)hasExclusiveAccess((double *)(DAT_018d7fe4 + 8));
        } while (!bVar25);
        *(double *)(DAT_018d7fe4 + 8) = dVar27 / 1000000000.0 + dVar28;
      }
      *(undefined1 *)(param_1 + 0x43) = 1;
      uVar31 = (**(code **)(*(int *)(param_1[0x18] + 0x15c) + 0x30))
                         (*(undefined4 *)(param_1[0x18] + 0x158),param_1[0x19]);
      iVar3 = (int)((ulonglong)uVar31 >> 0x20);
      *(undefined8 *)(param_1 + 0x1c) = uVar31;
LAB_00bba894:
      uVar32 = (**(code **)(iVar3 + 0xc))(param_1[0x1c],param_2);
      puVar15 = (undefined4 *)(uVar32 >> 0x20);
      if ((uVar32 & 1) != 0) {
        uVar2 = 4;
        goto LAB_00bbad5c;
      }
      uVar4 = param_1[0x1c];
      puVar24 = (undefined4 *)param_1[0x1d];
      pcVar11 = (code *)*puVar24;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar4);
      }
      if (puVar24[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      if (puVar15 != (undefined4 *)0x0) {
        (**(code **)*puVar15)(puVar15);
      }
      iVar3 = param_1[0xc];
      puVar19 = (uint *)param_1[0xb];
      *(undefined1 *)(param_1 + 0x1a) = 1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0034ae54,0x16,&DAT_0186ac78);
      }
      if (iVar3 == 1) {
LAB_00bba9e8:
        uVar12 = *puVar19;
        *(undefined1 *)(param_1 + 0x1c) = 0;
        param_1[0x14] = param_1[4];
        param_1[0x15] = uVar12;
        param_1[0x12] = 0;
switchD_00bb9ed8_caseD_5:
        uVar32 = FUN_00bbb5a8(piVar23,param_2);
        piVar22 = (int *)(uVar32 >> 0x20);
        if ((uVar32 & 1) != 0) {
          uVar2 = 5;
          goto LAB_00bba06c;
        }
        if (*(char *)(param_1 + 0x1c) == '\x03') {
          puVar15 = (undefined4 *)param_1[0x1b];
          uVar4 = param_1[0x1a];
          pcVar11 = (code *)*puVar15;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(uVar4);
          }
          if (puVar15[1] != 0) {
            thunk_FUN_016d3fb4(uVar4);
          }
        }
        if (piVar22 != (int *)0x0) {
LAB_00bbb0b0:
          if (param_1[10] != 0) {
            thunk_FUN_016d3fb4(param_1[0xb]);
          }
          iVar3 = param_1[6];
          *(undefined1 *)((int)param_1 + 0x3e) = 0;
          unaff_r7 = piVar22;
          goto joined_r0x00bba510;
        }
      }
      else {
        puVar14 = puVar19 + 1;
        uVar18 = iVar3 - 1U & 0x3fffffff;
        uVar10 = *puVar19;
        puVar5 = puVar19;
        uVar12 = uVar18;
        puVar6 = puVar14;
        do {
          uVar7 = *puVar6;
          if (uVar7 < uVar10) {
            puVar5 = puVar6;
          }
          if (uVar7 <= uVar10) {
            uVar10 = uVar7;
          }
          uVar12 = uVar12 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar12 != 0);
        uVar12 = *puVar19;
        puVar6 = puVar19;
        puVar16 = puVar14;
        do {
          if (uVar12 <= *puVar16) {
            uVar12 = *puVar16;
            puVar6 = puVar16;
          }
          uVar18 = uVar18 - 1;
          puVar16 = puVar16 + 1;
        } while (uVar18 != 0);
        if (*puVar5 == *puVar6) {
          uVar12 = *puVar19;
          uVar10 = iVar3 - 1U & 0x3fffffff;
          do {
            uVar18 = *puVar14;
            if (uVar18 < uVar12) {
              puVar19 = puVar14;
            }
            if (uVar18 <= uVar12) {
              uVar12 = uVar18;
            }
            uVar10 = uVar10 - 1;
            unaff_r7 = (int *)0x0;
            puVar14 = puVar14 + 1;
          } while (uVar10 != 0);
          goto LAB_00bba9e8;
        }
        iVar3 = *(int *)(param_1[4] + 0xbc);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_01879bd0);
        }
        uVar4 = FUN_018462e8(*(undefined4 *)(param_1[4] + 0xb8),iVar3);
        FUN_008e2144(&local_104,param_1 + 6,param_1 + 10,iVar3,uVar4);
        param_1[0x1d] = local_100;
        param_1[0x1e] = local_100;
        param_1[0x1f] = local_104;
        param_1[0x20] = local_100 + local_fc * 2;
        piVar22 = (int *)0x0;
        puVar15 = local_100;
        if (local_100 != local_100 + local_fc * 2) {
          do {
            uVar4 = *puVar15;
            uVar17 = puVar15[1];
            param_1[0x1e] = puVar15 + 2;
            *(undefined1 *)(param_1 + 0x1c) = 0;
            param_1[0x12] = 1;
            param_1[0x13] = uVar4;
            param_1[0x14] = param_1[4];
            param_1[0x15] = uVar17;
            unaff_r7 = piVar22;
switchD_00bb9ed8_caseD_6:
            uVar32 = FUN_00bbb5a8(piVar23,param_2);
            piVar22 = (int *)(uVar32 >> 0x20);
            if ((uVar32 & 1) != 0) {
              uVar2 = 6;
              goto LAB_00bba06c;
            }
            if (*(char *)(param_1 + 0x1c) == '\x03') {
              puVar15 = (undefined4 *)param_1[0x1b];
              uVar4 = param_1[0x1a];
              pcVar11 = (code *)*puVar15;
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(uVar4);
              }
              if (puVar15[1] != 0) {
                thunk_FUN_016d3fb4(uVar4);
              }
            }
            if (piVar22 != (int *)0x0) {
              if (param_1[0x1f] != 0) {
                thunk_FUN_016d3fb4(param_1[0x1d]);
              }
              goto LAB_00bbb0b0;
            }
            puVar15 = (undefined4 *)param_1[0x1e];
          } while (puVar15 != (undefined4 *)param_1[0x20]);
        }
        if (param_1[0x1f] != 0) {
          thunk_FUN_016d3fb4(param_1[0x1d]);
        }
      }
      uVar4 = 0;
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      local_90 = (int *)param_1[10];
      local_8c = (undefined4 *)param_1[0xb];
      local_88 = param_1[0xc];
      if (param_1[6] != 0) {
        thunk_FUN_016d3fb4(param_1[7]);
      }
      param_1[6] = local_90;
      param_1[7] = local_8c;
      param_1[8] = local_88;
      uVar12 = param_1[8];
      if (0x3fffffff < uVar12) {
LAB_00bbacf8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,local_10c);
      }
      uVar10 = uVar12 * 4;
      if (0x7ffffffc < uVar10) goto LAB_00bbacf8;
      uVar4 = param_1[7];
      uVar7 = 4;
      uVar18 = 0;
      if (uVar10 != 0) {
        uVar7 = thunk_FUN_016d4a50(uVar10,local_10c);
        if (uVar7 == 0) {
          uVar4 = 4;
          local_10c = uVar10;
          goto LAB_00bbacf8;
        }
        uVar18 = uVar12;
      }
      param_1[0x12] = uVar18;
      param_1[0x13] = uVar7;
      FUN_016dd1aa(uVar7,uVar4,uVar10);
      *(undefined1 *)((int)param_1 + 0x3f) = 1;
      param_1[0x14] = uVar12;
      param_1[0x15] = param_1[4] + 0x1a0;
      param_1[0x16] = 0xffffffff;
      local_10c = uVar7;
switchD_00bb9ed8_caseD_7:
      unaff_r7 = param_1 + 0x15;
      iVar3 = FUN_00c8101c(unaff_r7,param_2);
      if (iVar3 == 0) {
        uVar2 = 7;
        goto LAB_00bba06c;
      }
      if (*unaff_r7 != 0) {
        FUN_00c8204c(*unaff_r7,param_1[0x16],1);
      }
      if (*(int *)(iVar3 + 0x20) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x24));
      }
      unaff_r7 = param_1 + 0x12;
      uVar4 = param_1[0x13];
      uVar17 = param_1[0x14];
      *(int *)(iVar3 + 0x20) = *unaff_r7;
      *(undefined4 *)(iVar3 + 0x24) = uVar4;
      *(undefined4 *)(iVar3 + 0x28) = uVar17;
      *(undefined1 *)((int)param_1 + 0x3f) = 0;
      FUN_00c822ec(iVar3);
      DataMemoryBarrier(0xb);
      uVar4 = extraout_r1_00;
      if (DAT_018d8068 == 0) {
        iVar3 = param_1[8];
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
        }
        uVar12 = 0;
        uVar10 = 0;
        puVar19 = (uint *)param_1[7];
        do {
          bVar25 = CARRY4(uVar12,*puVar19);
          uVar12 = uVar12 + *puVar19;
          uVar10 = uVar10 + bVar25;
          iVar3 = iVar3 + -1;
          puVar19 = puVar19 + 1;
        } while (iVar3 != 0);
        local_f4 = 0;
        uVar18 = *(uint *)(param_1[4] + 0x6c);
        local_f8 = 0;
        local_f0 = (undefined4)((ulonglong)uVar12 * (ulonglong)uVar18);
        uVar12 = (uint)((ulonglong)uVar12 * (ulonglong)uVar18 >> 0x20);
        local_ec = (ulonglong)uVar10 * (ulonglong)uVar18 + (ulonglong)uVar12;
        local_e4 = (uint)CARRY4((uint)((ulonglong)uVar10 * (ulonglong)uVar18 >> 0x20),
                                (uint)CARRY4((uint)((ulonglong)uVar10 * (ulonglong)uVar18),uVar12));
        FUN_009b3d28(*(undefined4 *)(param_1[4] + 0x19c),&local_f8);
        uVar4 = extraout_r1_01;
      }
      dVar27 = (double)VectorUnsignedToFloat(param_1[9],(byte)(in_fpscr >> 0x16) & 3);
      FUN_00bbb280(SUB84(dVar27 / 1000000.0,0),&local_40,uVar4,*param_1,param_1[1],param_1[2]);
      FUN_01656eb8(&local_90,&DAT_01875f28,local_40,local_3c,local_38,&DAT_01875f28);
      FUN_016dd1aa(&local_e0,&local_90,0x50);
      FUN_016dd1aa(unaff_r7,&local_e0,0x50);
LAB_00bba428:
      iVar3 = FUN_01657fc4(piVar23,*param_2);
      if (iVar3 != 0) goto LAB_00bbad6c;
      FUN_00a07b4c(piVar23);
      iVar3 = param_1[4];
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
    } while( true );
  }
LAB_00bba024:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar10,uVar12);
LAB_00bbad6c:
  uVar2 = 8;
  goto LAB_00bba06c;
}

