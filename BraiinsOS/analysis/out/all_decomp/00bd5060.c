// FUN_00bd5060 @ 00bd5060 size=3020 calls_out=30 calls_in=2
// strings: BUG: poisoned | assertion failed: target_frequency.len() >= self.chip_count

/* WARNING: Removing unreachable block (ram,0x00bd57d8) */

undefined8 FUN_00bd5060(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  int *unaff_r7;
  int *piVar20;
  undefined4 *puVar21;
  uint *puVar22;
  bool bVar23;
  bool bVar24;
  uint in_fpscr;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  uint local_108;
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
  
  piVar20 = param_1 + 0x12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    iVar3 = param_1[0xd];
    uVar2 = *(undefined1 *)((int)param_1 + 0x41);
    piVar13 = (int *)(iVar3 + 0x168);
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
    param_1[4] = iVar3;
    param_1[5] = param_1[0xe];
    do {
      if (*piVar13 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar13);
        if ((DAT_018dd988 & 0x7fffffff) != 0) goto LAB_00bd52e4;
        goto LAB_00bd5108;
      }
      bVar23 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar23);
    *piVar13 = 1;
    DataMemoryBarrier(0xb);
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
LAB_00bd5108:
      if (*(char *)(iVar3 + 0x16c) != '\0') {
        uVar12 = 0;
        goto LAB_00bd5310;
      }
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar3 + 0x16d);
LAB_00bd511c:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar18 = FUN_015bf3f8(), iVar18 == 0)) {
        *(undefined1 *)(iVar3 + 0x16c) = 1;
      }
    }
    else {
LAB_00bd52e4:
      uVar12 = FUN_015bf3f8();
      uVar12 = uVar12 ^ 1;
      if (*(char *)(iVar3 + 0x16c) != '\0') {
LAB_00bd5310:
        local_8c = (undefined4 *)CONCAT31(local_8c._1_3_,(char)uVar12);
        local_90 = piVar13;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: poisoned",0xd,&local_90,&DAT_0187263c,&DAT_01875ef8);
      }
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(iVar3 + 0x16d);
      if (uVar12 == 0) goto LAB_00bd511c;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar13;
      bVar23 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar23);
    *piVar13 = 0;
    if (iVar3 == 2) {
      FUN_016d6968(0xf0,piVar13,0x81,1);
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
      goto LAB_00bd5608;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875ec8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875ec8);
    case 3:
      goto switchD_00bd51ec_caseD_3;
    case 4:
      uVar29 = *(undefined8 *)(param_1 + 0x1c);
      goto LAB_00bd5744;
    }
  case 5:
    goto switchD_00bd5090_caseD_5;
  case 6:
    goto switchD_00bd5090_caseD_6;
  case 7:
    goto switchD_00bd5090_caseD_7;
  case 8:
    goto LAB_00bd5490;
  }
  iVar3 = FUN_00c8101c(piVar20,param_2);
  if (iVar3 == 0) {
    uVar2 = 3;
    unaff_r7 = (int *)0x0;
LAB_00bd5214:
    *(undefined1 *)(param_1 + 0x10) = uVar2;
LAB_00bd5218:
    uVar4 = 1;
LAB_00bd5590:
    return CONCAT44(unaff_r7,uVar4);
  }
  if (*piVar20 != 0) {
    FUN_00c8204c(*piVar20,param_1[0x13],1);
  }
  uVar17 = *(uint *)(iVar3 + 0x28);
  uVar10 = 0;
  bVar24 = 0x3ffffffe < uVar17;
  bVar23 = uVar17 == 0x3fffffff;
  uVar12 = uVar17 * 4;
  if (uVar17 < 0x40000000) {
    bVar24 = 0x7ffffffb < uVar12;
    bVar23 = uVar12 == 0x7ffffffc;
  }
  if (!(!bVar24 || bVar23)) {
LAB_00bd51cc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar10,uVar12);
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x24);
  if (uVar12 == 0) {
    iVar18 = 4;
  }
  else {
    iVar18 = thunk_FUN_016d4a50(uVar12);
    uVar10 = uVar17;
    if (iVar18 == 0) {
      uVar10 = 4;
      goto LAB_00bd51cc;
    }
  }
  param_1[6] = uVar10;
  param_1[7] = iVar18;
  FUN_016dd1aa(iVar18,uVar4,uVar12);
  param_1[8] = uVar17;
  FUN_00c822ec(iVar3);
  FUN_008e1da8(param_1,param_1[4],*(undefined1 *)(param_1 + 0xf),param_1[7],param_1[8],
               *(undefined4 *)(param_1[5] + 4),*(undefined4 *)(param_1[5] + 8));
  iVar3 = param_1[4];
  iVar18 = 300;
  if (*(int *)(iVar3 + 0x18) != 0) {
    iVar18 = 0x1c;
  }
  param_1[9] = *(undefined4 *)(iVar3 + iVar18);
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
    puVar22 = (uint *)param_1[0xb];
    iVar18 = param_1[0xc];
    param_1[10] = local_e0;
    *(undefined1 *)((int)param_1 + 0x3e) = 1;
    if (iVar18 == param_1[8]) {
      if (iVar18 != 0) {
        puVar5 = puVar22;
        iVar3 = iVar18;
        puVar6 = (uint *)param_1[7];
        while( true ) {
          if (*puVar5 != *puVar6) break;
          iVar3 = iVar3 + -1;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
          if (iVar3 == 0) goto LAB_00bd5554;
        }
        goto LAB_00bd55a4;
      }
LAB_00bd5554:
      if (param_1[10] != 0) {
        thunk_FUN_016d3fb4(puVar22);
      }
      iVar3 = param_1[6];
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
      unaff_r7 = (int *)0x0;
joined_r0x00bd5578:
      if (iVar3 != 0) {
        thunk_FUN_016d3fb4(param_1[7]);
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      uVar4 = 0;
      goto LAB_00bd5590;
    }
LAB_00bd55a4:
    if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0034ae54,0x16,&DAT_0186ac68);
    }
    iVar3 = param_1[4];
    if (iVar18 != 1) {
      uVar12 = *puVar22;
      uVar10 = iVar18 - 1U & 0x3fffffff;
      puVar5 = puVar22;
      do {
        puVar5 = puVar5 + 1;
        if (uVar12 <= *puVar5) {
          uVar12 = *puVar5;
          puVar22 = puVar5;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uVar12 = *puVar22;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    param_1[0x16] = iVar3;
    param_1[0x17] = uVar12;
LAB_00bd5608:
    param_1[0x18] = iVar3;
    param_1[0x19] = uVar12;
    if (*(int *)(iVar3 + 0x5c) == 0) {
      puVar8 = &DAT_0187b968;
LAB_00bd5c24:
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(puVar8);
    }
    iVar18 = *(int *)(iVar3 + 0x54);
    if (iVar18 == 0) {
      puVar8 = &DAT_0187b958;
      goto LAB_00bd5c24;
    }
    uVar4 = FUN_018462e8(*(undefined4 *)(iVar3 + 0x58));
    dVar25 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = FUN_018462e8(0xffffffff,iVar18);
    dVar26 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    dVar27 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(iVar3 + 0xb8),(byte)(in_fpscr >> 0x16) & 3);
    dVar28 = (double)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
    FUN_006fdfd0(SUB84(((dVar25 * 0.8 * dVar26) / dVar27) / dVar28,0),&local_90);
    FUN_00bbb280(0x9999999a,&local_90,extraout_r1,local_90,local_8c,local_88);
    unaff_r7 = (int *)0x0;
    bVar23 = local_90 != (int *)0x0 || local_8c != (undefined4 *)0x0;
    if (local_90 == (int *)0x0 && local_8c == (undefined4 *)0x0) {
      bVar23 = 750000000 < local_88;
    }
    piVar13 = local_90;
    puVar14 = local_8c;
    uVar12 = local_88;
    if (bVar23) {
      uVar12 = 750000000;
      puVar14 = (undefined4 *)0x0;
      piVar13 = (int *)0x0;
    }
    param_1[0x14] = uVar12;
    *piVar20 = (int)piVar13;
    param_1[0x13] = puVar14;
    param_1[0x1c] = piVar13;
    param_1[0x1d] = puVar14;
    *(undefined1 *)(param_1 + 0x43) = 0;
    param_1[0x1e] = uVar12;
    param_1[0x42] = param_1[0x18];
switchD_00bd51ec_caseD_3:
    iVar3 = FUN_00bd5f58(param_1 + 0x1c,param_2);
    if (iVar3 != 0) {
      uVar2 = 3;
LAB_00bd5bd4:
      *(undefined1 *)(param_1 + 0x1a) = uVar2;
      *(undefined1 *)(param_1 + 0x10) = 4;
      goto LAB_00bd5218;
    }
    cVar1 = *(char *)(param_1 + 0x43);
    bVar23 = cVar1 == '\x03';
    if (bVar23) {
      cVar1 = *(char *)(param_1 + 0x41);
    }
    if (bVar23 && cVar1 == '\x03') {
      FUN_0081c020(param_1 + 0x2c);
    }
    uVar29 = (**(code **)(*(int *)(param_1[0x18] + 0x15c) + 0x30))
                       (*(undefined4 *)(param_1[0x18] + 0x158),param_1[0x19]);
    *(undefined8 *)(param_1 + 0x1c) = uVar29;
LAB_00bd5744:
    uVar30 = (**(code **)((int)((ulonglong)uVar29 >> 0x20) + 0xc))((int)uVar29,param_2);
    puVar14 = (undefined4 *)(uVar30 >> 0x20);
    if ((uVar30 & 1) != 0) {
      uVar2 = 4;
      goto LAB_00bd5bd4;
    }
    puVar21 = (undefined4 *)param_1[0x1d];
    unaff_r7 = (int *)param_1[0x1c];
    pcVar11 = (code *)*puVar21;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(unaff_r7);
    }
    if (puVar21[1] != 0) {
      thunk_FUN_016d3fb4(unaff_r7);
    }
    if (puVar14 != (undefined4 *)0x0) {
      (**(code **)*puVar14)(puVar14);
    }
    iVar3 = param_1[0xc];
    puVar22 = (uint *)param_1[0xb];
    *(undefined1 *)(param_1 + 0x1a) = 1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0034ae54,0x16,&DAT_0186ac78);
    }
    if (iVar3 == 1) {
LAB_00bd5890:
      uVar12 = *puVar22;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      param_1[0x14] = param_1[4];
      param_1[0x15] = uVar12;
      param_1[0x12] = 0;
switchD_00bd5090_caseD_5:
      uVar30 = FUN_00bbb5a8(piVar20,param_2);
      piVar13 = (int *)(uVar30 >> 0x20);
      if ((uVar30 & 1) != 0) {
        uVar2 = 5;
        goto LAB_00bd5214;
      }
      if (*(char *)(param_1 + 0x1c) == '\x03') {
        puVar14 = (undefined4 *)param_1[0x1b];
        uVar4 = param_1[0x1a];
        pcVar11 = (code *)*puVar14;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar4);
        }
        if (puVar14[1] != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
      }
      if (piVar13 != (int *)0x0) {
LAB_00bd5ea0:
        if (param_1[10] != 0) {
          thunk_FUN_016d3fb4(param_1[0xb]);
        }
        iVar3 = param_1[6];
        *(undefined1 *)((int)param_1 + 0x3e) = 0;
        unaff_r7 = piVar13;
        goto joined_r0x00bd5578;
      }
    }
    else {
      puVar19 = puVar22 + 1;
      uVar17 = iVar3 - 1U & 0x3fffffff;
      uVar10 = *puVar22;
      puVar5 = puVar22;
      uVar12 = uVar17;
      puVar6 = puVar19;
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
      uVar12 = *puVar22;
      puVar6 = puVar22;
      puVar15 = puVar19;
      do {
        if (uVar12 <= *puVar15) {
          uVar12 = *puVar15;
          puVar6 = puVar15;
        }
        uVar17 = uVar17 - 1;
        puVar15 = puVar15 + 1;
      } while (uVar17 != 0);
      if (*puVar5 == *puVar6) {
        uVar12 = *puVar22;
        uVar10 = iVar3 - 1U & 0x3fffffff;
        do {
          uVar17 = *puVar19;
          if (uVar17 < uVar12) {
            puVar22 = puVar19;
          }
          if (uVar17 <= uVar12) {
            uVar12 = uVar17;
          }
          uVar10 = uVar10 - 1;
          unaff_r7 = (int *)0x0;
          puVar19 = puVar19 + 1;
        } while (uVar10 != 0);
        goto LAB_00bd5890;
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
      piVar13 = (int *)0x0;
      puVar14 = local_100;
      if (local_100 != local_100 + local_fc * 2) {
        do {
          uVar4 = *puVar14;
          uVar16 = puVar14[1];
          param_1[0x1e] = puVar14 + 2;
          *(undefined1 *)(param_1 + 0x1c) = 0;
          param_1[0x12] = 1;
          param_1[0x13] = uVar4;
          param_1[0x14] = param_1[4];
          param_1[0x15] = uVar16;
          unaff_r7 = piVar13;
switchD_00bd5090_caseD_6:
          uVar30 = FUN_00bbb5a8(piVar20,param_2);
          piVar13 = (int *)(uVar30 >> 0x20);
          if ((uVar30 & 1) != 0) {
            uVar2 = 6;
            goto LAB_00bd5214;
          }
          if (*(char *)(param_1 + 0x1c) == '\x03') {
            puVar14 = (undefined4 *)param_1[0x1b];
            uVar4 = param_1[0x1a];
            pcVar11 = (code *)*puVar14;
            if (pcVar11 != (code *)0x0) {
              (*pcVar11)(uVar4);
            }
            if (puVar14[1] != 0) {
              thunk_FUN_016d3fb4(uVar4);
            }
          }
          if (piVar13 != (int *)0x0) {
            if (param_1[0x1f] != 0) {
              thunk_FUN_016d3fb4(param_1[0x1d]);
            }
            goto LAB_00bd5ea0;
          }
          puVar14 = (undefined4 *)param_1[0x1e];
        } while (puVar14 != (undefined4 *)param_1[0x20]);
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
LAB_00bd5ba8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,local_108);
    }
    uVar10 = uVar12 * 4;
    if (0x7ffffffc < uVar10) goto LAB_00bd5ba8;
    uVar4 = param_1[7];
    uVar7 = 4;
    uVar17 = 0;
    if (uVar10 != 0) {
      uVar7 = thunk_FUN_016d4a50(uVar10,local_108);
      if (uVar7 == 0) {
        uVar4 = 4;
        local_108 = uVar10;
        goto LAB_00bd5ba8;
      }
      uVar17 = uVar12;
    }
    param_1[0x12] = uVar17;
    param_1[0x13] = uVar7;
    FUN_016dd1aa(uVar7,uVar4,uVar10);
    *(undefined1 *)((int)param_1 + 0x3f) = 1;
    param_1[0x14] = uVar12;
    param_1[0x15] = param_1[4] + 0x1a0;
    param_1[0x16] = 0xffffffff;
    local_108 = uVar7;
switchD_00bd5090_caseD_7:
    unaff_r7 = param_1 + 0x15;
    iVar3 = FUN_00c8101c(unaff_r7,param_2);
    if (iVar3 == 0) {
      uVar2 = 7;
      goto LAB_00bd5214;
    }
    if (*unaff_r7 != 0) {
      FUN_00c8204c(*unaff_r7,param_1[0x16],1);
    }
    if (*(int *)(iVar3 + 0x20) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x24));
    }
    unaff_r7 = param_1 + 0x12;
    uVar4 = param_1[0x13];
    uVar16 = param_1[0x14];
    *(int *)(iVar3 + 0x20) = *unaff_r7;
    *(undefined4 *)(iVar3 + 0x24) = uVar4;
    *(undefined4 *)(iVar3 + 0x28) = uVar16;
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
      puVar22 = (uint *)param_1[7];
      do {
        bVar23 = CARRY4(uVar12,*puVar22);
        uVar12 = uVar12 + *puVar22;
        uVar10 = uVar10 + bVar23;
        iVar3 = iVar3 + -1;
        puVar22 = puVar22 + 1;
      } while (iVar3 != 0);
      local_f4 = 0;
      uVar17 = *(uint *)(param_1[4] + 0x6c);
      local_f8 = 0;
      local_f0 = (undefined4)((ulonglong)uVar12 * (ulonglong)uVar17);
      uVar12 = (uint)((ulonglong)uVar12 * (ulonglong)uVar17 >> 0x20);
      local_ec = (ulonglong)uVar10 * (ulonglong)uVar17 + (ulonglong)uVar12;
      local_e4 = (uint)CARRY4((uint)((ulonglong)uVar10 * (ulonglong)uVar17 >> 0x20),
                              (uint)CARRY4((uint)((ulonglong)uVar10 * (ulonglong)uVar17),uVar12));
      FUN_009b3d28(*(undefined4 *)(param_1[4] + 0x19c),&local_f8);
      uVar4 = extraout_r1_01;
    }
    dVar25 = (double)VectorUnsignedToFloat(param_1[9],(byte)(in_fpscr >> 0x16) & 3);
    FUN_00bbb280(SUB84(dVar25 / 1000000.0,0),&local_40,uVar4,*param_1,param_1[1],param_1[2]);
    FUN_01656eb8(&local_90,&DAT_01875f28,local_40,local_3c,local_38,&DAT_01875f28);
    FUN_016dd1aa(&local_e0,&local_90,0x50);
    FUN_016dd1aa(unaff_r7,&local_e0,0x50);
LAB_00bd5490:
    iVar3 = FUN_01657fc4(piVar20,*param_2);
    if (iVar3 != 0) break;
    FUN_00a07b4c(piVar20);
    iVar3 = param_1[4];
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
  } while( true );
  uVar2 = 8;
  goto LAB_00bd5214;
}

