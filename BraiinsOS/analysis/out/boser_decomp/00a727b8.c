// FUN_00a727b8 @ 00a727b8 size=3136 calls_out=21 calls_in=0
// strings: Bosminer.get_summary | internal error: entered unreachable code | BUG: missing client statistics

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a727b8(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar9;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar10;
  undefined4 extraout_r3_01;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 extraout_r12;
  undefined4 uVar23;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  bool bVar24;
  uint in_fpscr;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 uVar25;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined4 local_cf4;
  undefined4 local_cf0;
  uint *local_cec;
  undefined4 local_ce8;
  undefined4 local_ce4;
  uint *local_ce0;
  undefined1 *local_cdc;
  uint *local_cd8;
  undefined4 *local_cd0;
  uint **local_cc8;
  uint *local_cc4;
  uint *local_cc0;
  uint *local_cbc;
  undefined1 auStack_cb0 [232];
  uint *local_bc8;
  uint *puStack_bc4;
  uint *puStack_bc0;
  uint *puStack_bbc;
  uint *puStack_bb8;
  uint *puStack_bb4;
  uint *local_bb0;
  uint *puStack_bac;
  undefined4 uStack_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined1 auStack_b98 [232];
  undefined1 auStack_ab0 [232];
  undefined1 auStack_9c8 [232];
  uint *local_8e0;
  uint *local_8dc;
  uint *local_8d8;
  uint *local_8d4;
  uint *local_8d0;
  uint *local_8cc;
  uint *local_8c8;
  uint *local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined1 auStack_8b8 [232];
  undefined1 auStack_7d0 [464];
  uint *local_600;
  uint *local_5fc;
  uint *local_5f8;
  uint *local_5f4;
  uint *local_5f0;
  uint *local_5ec;
  uint *local_5e8;
  uint *local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined1 auStack_4f0 [464];
  uint *local_320;
  uint *local_31c;
  uint *local_318;
  undefined1 auStack_150 [232];
  
  puVar13 = param_2 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    *(undefined1 *)(param_2 + 0x37) = 0;
    param_2[5] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f5ec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f5ec);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16f)) {
    case 0:
      uVar18 = *(undefined1 *)((int)param_2 + 0x5bd);
      puVar22 = (uint *)param_2[0x16e];
      goto LAB_00a72918;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0eeb0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0eeb0);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x5b5)) {
      case 0:
        uVar18 = *(undefined1 *)((int)param_2 + 0x5b6);
        puVar22 = (uint *)param_2[0x16c];
        goto LAB_00a7292c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c19d5c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c19d5c);
      case 3:
      }
    }
    goto LAB_00a729c0;
  case 5:
    goto switchD_00a727fc_caseD_5;
  }
  uVar3 = 0xa72840;
  FUN_00a6fd0c(&local_600,param_2 + 5,param_3);
  puVar11 = local_5ec;
  puVar17 = local_5f0;
  puVar6 = local_5f4;
  puVar15 = local_5f8;
  puVar2 = local_5fc;
  puVar22 = local_600;
  if (local_600 == (uint *)&DAT_00000003) {
    *param_1 = 2;
    uVar18 = 3;
    goto LAB_00a7359c;
  }
  local_cbc = local_5fc;
  cVar1 = *(char *)(param_2 + 0x37);
  bVar24 = cVar1 == '\x03';
  uVar25 = CONCAT44(local_5f0,local_5f4);
  if (bVar24) {
    cVar1 = *(char *)(param_2 + 0x36);
  }
  uVar4 = extraout_r2;
  uVar7 = extraout_r3;
  uVar23 = extraout_r12;
  if (bVar24 && cVar1 == '\x03') {
    uVar3 = 0xa72c20;
    FUN_00b99500(param_2 + 7);
    uVar4 = extraout_r2_00;
    uVar7 = extraout_r3_00;
    uVar23 = extraout_r12_00;
  }
  if (puVar22 == (uint *)0x2) {
    uVar18 = 2;
    *puVar13 = (uint)puVar2;
    param_2[2] = puVar15;
    *(undefined2 *)(param_2 + 0x16f) = 0x200;
    param_2[0x16e] = puVar13;
    param_2[3] = puVar6;
    puVar22 = puVar13;
LAB_00a72918:
    *(undefined1 *)((int)param_2 + 0x5b5) = 0;
    *(undefined1 *)((int)param_2 + 0x5b6) = uVar18;
    param_2[0x16c] = puVar22;
LAB_00a7292c:
    *(undefined1 *)(param_2 + 0x16d) = 1;
    FUN_019cfcf0(&local_600);
    *(undefined1 *)(param_2 + 0x16d) = 0;
    local_bc8 = local_600;
    puStack_bc4 = local_5fc;
    puStack_bc0 = local_5f8;
    puStack_bbc = local_5f4;
    puStack_bb8 = local_5f0;
    puStack_bb4 = local_5ec;
    local_bb0 = local_5e8;
    puStack_bac = local_5e4;
    uStack_ba8 = local_5e0;
    uStack_ba4 = local_5dc;
    uStack_ba0 = uStack_5d8;
    uStack_b9c = uStack_5d4;
    param_2[0x1c] = "Bosminer.get_summary";
    *(undefined1 *)(param_2 + 0xf) = uVar18;
    param_2[0x1d] = 0x14;
    param_2[0xe] = 0x80000003;
    param_2[0x1e] = local_600;
    param_2[0x1f] = local_5fc;
    param_2[0x20] = local_5f8;
    param_2[0x21] = local_5f4;
    param_2[0x22] = local_5f0;
    param_2[0x23] = local_5ec;
    param_2[0x24] = local_5e8;
    param_2[0x25] = local_5e4;
    param_2[0x26] = local_5e0;
    param_2[0x27] = local_5dc;
    param_2[0x28] = uStack_5d8;
    param_2[0x29] = uStack_5d4;
    *(undefined1 *)(param_2 + 0x16a) = 0;
    *(undefined1 *)((int)param_2 + 0xaf) = 0;
    param_2[0x2a] = puVar22;
LAB_00a729c0:
    local_cd0 = param_2 + 0x16f;
    local_cdc = (undefined1 *)((int)param_2 + 0x5b5);
    puVar19 = param_2 + 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16a)) {
    case 0:
      FUN_01bed4e2(param_2 + 0xb8,puVar19,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    }
    FUN_00a55b84(&local_600,param_2 + 0xb8,param_3);
    puVar17 = local_5ec;
    puVar6 = local_5f0;
    puVar11 = local_5f4;
    puVar15 = local_5f8;
    puVar2 = local_5fc;
    puVar22 = local_600;
    if (local_600 == (uint *)&DAT_0000001e && local_5fc == (uint *)0x0) {
      *(undefined1 *)(param_2 + 0x16a) = 3;
LAB_00a72a24:
      *local_cdc = 3;
      *(undefined1 *)local_cd0 = 3;
      *param_1 = 2;
      uVar18 = 4;
      goto LAB_00a7359c;
    }
    local_cbc = local_5f4;
    local_cec = local_5e4;
    local_cc4 = local_5f8;
    local_ce0 = local_5ec;
    local_ce4 = local_5e0;
    local_ce8 = local_5dc;
    FUN_01bed4e2(auStack_150,&uStack_5d8,0xe8);
    FUN_01bed4e2(&local_320,auStack_4f0,0x1d0);
    FUN_00df9ef8(param_2 + 0xb8);
    if (puVar22 == (uint *)&DAT_0000001d && puVar2 == (uint *)0x0) {
      puVar11 = (uint *)0x0;
      *(undefined1 *)(param_2 + 0x16a) = 1;
      puVar15 = (uint *)&DAT_00000003;
      local_cd8 = puVar6;
    }
    else {
      local_8c8 = local_5e8;
      local_8c4 = local_5e4;
      local_8bc = local_5dc;
      local_8c0 = local_5e0;
      FUN_01bed4e2(auStack_8b8,auStack_150,0xe8);
      FUN_01bed4e2(auStack_7d0,&local_320,0x1d0);
      local_8d4 = puVar11;
      local_8d8 = puVar15;
      local_8cc = puVar17;
      local_8d0 = puVar6;
      local_8dc = puVar2;
      local_8e0 = puVar22;
      if (puVar22 != (uint *)&DAT_00000007 || puVar2 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      local_cbc = puVar17;
      local_cd8 = local_8c8;
      FUN_01bed4e2(auStack_b98,auStack_150,0xe8);
      *(undefined1 *)(param_2 + 0x16a) = 1;
      if (puVar15 == (uint *)&SUB_00000004 && puVar11 == (uint *)0x0) goto LAB_00a72a24;
      FUN_01bed4e2(auStack_ab0,auStack_b98,0xe8);
      if (puVar15 == (uint *)&DAT_00000003 && puVar11 == (uint *)0x0) {
        puVar11 = (uint *)0x0;
        puVar15 = (uint *)&DAT_00000003;
      }
      else {
        FUN_01bed4e2(auStack_9c8,auStack_ab0,0xe8);
      }
      local_ce0 = local_cec;
      local_cc4 = puVar6;
    }
    *(undefined2 *)(param_2 + 0x16d) = 0x100;
    FUN_00a7389c(puVar19);
    if (puVar15 == (uint *)&DAT_00000003 && puVar11 == (uint *)0x0) {
      local_8dc = local_cbc;
      local_8d4 = local_ce0;
      local_8e0 = local_cc4;
      local_8d8 = local_cd8;
      FUN_00a98078(&local_600,1);
      FUN_00a55a24(&local_8e0);
      local_cbc = local_5fc;
      uVar25 = CONCAT44(local_5f0,local_5f4);
      *(undefined1 *)local_cd0 = 1;
      puVar6 = param_3;
      puVar17 = local_5ec;
      puVar22 = local_600;
      puVar15 = local_5f8;
      local_cc8 = &local_8d8;
      local_cc0 = param_3;
    }
    else {
      FUN_01bed4e2(auStack_cb0,auStack_9c8,0xe8);
      *(undefined1 *)(param_2 + 0x16f) = 1;
      FUN_01bed4e2(&local_600,auStack_cb0,0xe8);
      *puVar19 = puVar15;
      param_2[7] = puVar11;
      param_2[8] = local_cc4;
      param_2[9] = local_cbc;
      param_2[10] = local_cd8;
      param_2[0xb] = local_ce0;
      param_2[0xc] = local_5e0;
      param_2[0xd] = local_5dc;
      FUN_01bed4e2(param_2 + 0xe,&local_600,0xe8);
      param_2[0x1b0] = puVar13;
      *(undefined2 *)(param_2 + 0x1b1) = 0x100;
      local_cc8 = &local_8d8;
      local_cc0 = param_3;
switchD_00a727fc_caseD_5:
      FUN_00a70fd4(&local_600,param_2 + 0x48,param_3);
      puVar22 = local_600;
      if (local_600 == (uint *)&DAT_00000003) {
        *param_1 = 2;
        uVar18 = 5;
        goto LAB_00a7359c;
      }
      uVar25 = CONCAT44(local_5f0,local_5f4);
      local_cbc = local_5fc;
      if (*(char *)(param_2 + 0x1b1) == '\x03') {
        FUN_00a7389c(param_2 + 0x48);
      }
      if (puVar22 == (uint *)0x2) {
        local_320 = local_5fc;
        local_318 = local_5f4;
        local_31c = local_5f8;
        if (param_2[6] == 2 && param_2[7] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_003f1b0a,0x1f,&DAT_01c179c8);
        }
        uVar3 = param_2[0xc];
        uVar7 = param_2[0xd];
        uVar16 = 0;
        uVar4 = param_2[0xe];
        if ((uint *)param_2[0x46] != (uint *)&DAT_3b9aca00) {
          local_8e0 = (uint *)param_2[0x44];
          local_8dc = (uint *)param_2[0x45];
          local_8d8 = (uint *)param_2[0x46];
          FUN_014aeff4(&local_600,&local_8e0);
        }
        FUN_01bf09c8(param_2[0x2e],param_2[0x2f],param_2[0x30],param_2[0x31]);
        FUN_01bf09c8(0,param_2[0x24],param_2[0x25],param_2[0x26]);
        uVar5 = param_2[0x2c];
        iVar8 = param_2[0x2d];
        uVar20 = param_2[0x36];
        uVar12 = param_2[0x37];
        FUN_01bf0e80(uVar20 + uVar5,uVar12 + iVar8 + (uint)CARRY4(uVar20,uVar5));
        FUN_01bf0e80(uVar20,uVar12);
        FUN_01bf0e80(uVar3,uVar7);
        uVar21 = 0;
        VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        uVar20 = 0;
        uVar9 = 0;
        iVar10 = 0;
        local_cc8 = (uint **)0x0;
        iVar14 = 0;
        puVar13 = local_5f8;
        while( true ) {
          while (uVar16 == 0 || uVar16 == uVar12) {
            if (puVar13 == local_5f8 + (int)local_5f4 * 10) {
              FUN_01bf0e80();
              FUN_01bf0e80(uVar21,local_cc8);
              FUN_01bf0e80(uVar20,iVar14);
              FUN_01bf0e80(uVar9,iVar10);
              FUN_01bf0e80(uVar5,iVar8);
              uVar3 = FUN_01221f24(param_2 + 0x2c,
                                   iVar14 + (int)local_cc8 + (uint)CARRY4(uVar20,uVar21) + iVar10 +
                                   (uint)CARRY4(uVar20 + uVar21,uVar9),5,0);
              FUN_00a5d500(&local_600,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00a73288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&LAB_00a7328c + *(int *)(&LAB_00a7328c + (int)local_600 * 4)))();
              return;
            }
            puVar22 = puVar13 + 8;
            uVar12 = puVar13[9] * 0x1d8 + *puVar22;
            puVar13 = puVar13 + 10;
            uVar16 = *puVar22;
          }
          if (*(int *)(uVar16 + 0x20) == 2 && *(int *)(uVar16 + 0x24) == 0) break;
          FUN_01bf09c8(*(undefined4 *)(uVar16 + 0x148),*(undefined4 *)(uVar16 + 0x14c),
                       *(undefined4 *)(uVar16 + 0x150),*(undefined4 *)(uVar16 + 0x154));
          FUN_01bf09c8(*(undefined4 *)(uVar16 + 0x170),*(undefined4 *)(uVar16 + 0x174),
                       *(undefined4 *)(uVar16 + 0x178),*(undefined4 *)(uVar16 + 0x17c));
          bVar24 = CARRY4(*(uint *)(uVar16 + 0x168),uVar21);
          uVar21 = *(uint *)(uVar16 + 0x168) + uVar21;
          local_cc8 = (uint **)(*(int *)(uVar16 + 0x16c) + (int)local_cc8 + (uint)bVar24);
          bVar24 = CARRY4(*(uint *)(uVar16 + 0x140),uVar20);
          uVar20 = *(uint *)(uVar16 + 0x140) + uVar20;
          iVar14 = *(int *)(uVar16 + 0x144) + iVar14 + (uint)bVar24;
          bVar24 = CARRY4(*(uint *)(uVar16 + 0x118),uVar9);
          uVar9 = *(uint *)(uVar16 + 0x118) + uVar9;
          iVar10 = *(int *)(uVar16 + 0x11c) + iVar10 + (uint)bVar24;
          FUN_01bf09c8(*(undefined4 *)(uVar16 + 0x120),*(undefined4 *)(uVar16 + 0x124),
                       *(undefined4 *)(uVar16 + 0x128),*(undefined4 *)(uVar16 + 300));
          uVar16 = uVar16 + 0x1d8;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("BUG: missing client statistics",0x1e,&DAT_01c1d098);
      }
      if (param_2[6] != 2 || param_2[7] != 0) {
        FUN_00b9a764();
      }
      puVar11 = local_5f0;
      puVar6 = local_5f4;
      puVar17 = local_5ec;
      puVar15 = local_5f8;
    }
    uVar3 = 0xa7311c;
    FUN_0084ec48(param_2 + 1);
    uVar4 = extraout_r2_01;
    uVar7 = extraout_r3_01;
    puVar13 = puVar11;
    puVar11 = puVar15;
    uVar23 = extraout_r12_01;
    puVar2 = puVar17;
  }
  else {
    puVar2 = puVar11;
    local_cc8 = &local_8d8;
    local_cc0 = param_3;
  }
  param_1[3] = puVar15;
  param_1[0x13] = local_cc0;
  param_1[0x1b] = local_cec;
  param_1[0x10] = uVar7;
  param_1[0x19] = local_cc8;
  param_1[0x26] = puVar11;
  param_1[0x27] = local_cdc;
  *param_1 = 1;
  param_1[1] = puVar22;
  param_1[0x30] = local_ce8;
  param_1[2] = local_cbc;
  param_1[0xf] = uVar4;
  param_1[0x34] = local_cf0;
  param_1[0x35] = local_cf4;
  uVar18 = 1;
  param_1[0x12] = puVar13;
  param_1[0xe] = puVar17;
  param_1[0x1a] = puVar6;
  param_1[0x18] = uVar3;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)(param_1 + 4) = uVar25;
  *(ulonglong *)(param_1 + 6) = ZEXT48(puVar2);
  *(undefined8 *)(param_1 + 8) = unaff_d9;
  *(undefined8 *)(param_1 + 10) = unaff_d10;
  *(undefined8 *)(param_1 + 0xc) = unaff_d12;
  *(undefined8 *)(param_1 + 0x14) = unaff_d13;
  *(undefined8 *)(param_1 + 0x1c) = in_d18;
  *(undefined8 *)(param_1 + 0x1e) = in_d17;
  *(undefined8 *)(param_1 + 0x20) = in_d20;
  *(undefined8 *)(param_1 + 0x22) = in_d19;
  *(undefined8 *)(param_1 + 0x24) = unaff_d14;
  param_1[0x11] = uVar23;
  *(undefined8 *)(param_1 + 0x28) = in_d16;
  *(undefined8 *)(param_1 + 0x2a) = in_d23;
  *(undefined8 *)(param_1 + 0x2c) = in_d22;
  *(undefined8 *)(param_1 + 0x2e) = in_d21;
  param_1[0x31] = local_ce4;
  *(undefined8 *)(param_1 + 0x32) = unaff_d11;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
LAB_00a7359c:
  *(undefined1 *)(param_2 + 4) = uVar18;
  return;
}

