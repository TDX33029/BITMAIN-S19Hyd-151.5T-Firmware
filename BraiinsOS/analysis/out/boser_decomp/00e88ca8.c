// FUN_00e88ca8 @ 00e88ca8 size=3200 calls_out=23 calls_in=0
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e88ca8(undefined4 *param_1,undefined4 *param_2,int ****param_3,int ****param_4)

{
  code *pcVar1;
  bool bVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int ****extraout_r2;
  int ***pppiVar14;
  int ****extraout_r3;
  int ****unaff_r4;
  int iVar15;
  uint uVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int ****ppppiVar22;
  undefined4 uVar23;
  int ****in_r12;
  int ****extraout_r12;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined4 *local_1d8;
  undefined4 *local_1d4;
  undefined4 *local_1d0;
  undefined1 *local_1cc;
  undefined4 *local_1c8;
  int ****local_1c4;
  int ****local_1a8;
  int ****local_1a4;
  int ****local_1a0;
  int ****local_19c;
  int ****local_198;
  int ****local_194;
  int ****local_170;
  int ****ppppiStack_16c;
  int ****ppppiStack_168;
  int ****local_164;
  int ****ppppiStack_160;
  int ****ppppiStack_15c;
  int ****ppppiStack_158;
  int ****local_e8;
  int ****local_e4;
  int ****local_e0;
  int ****local_d8;
  int ****local_d4;
  int ****local_d0;
  int ****local_cc;
  int ****local_c8;
  int ****local_c4;
  int ****local_c0;
  int ****local_bc;
  int ****local_b8;
  int ****local_b4;
  int ****local_b0;
  int ****ppppiStack_ac;
  int ****ppppiStack_a8;
  int ****local_a4;
  int ****local_a0;
  int ****ppppiStack_9c;
  int ****local_98;
  int ****ppppiStack_94;
  int ****ppppiStack_90;
  int ****local_8c;
  int ****ppppiStack_88;
  int ****ppppiStack_84;
  int ****ppppiStack_80;
  int ****local_78 [3];
  int ****local_6c;
  int ****local_68;
  int ****local_64;
  int ****ppppiStack_60;
  int ****ppppiStack_5c;
  int ****local_58;
  int ****ppppiStack_54;
  int ****ppppiStack_50;
  int ****ppppiStack_4c;
  int ****local_40;
  int ****ppppiStack_3c;
  int ****ppppiStack_38;
  int ****local_34;
  int ****ppppiStack_30;
  int ****ppppiStack_2c;
  int ****ppppiStack_28;
  
  local_1a8 = (int ****)&local_d0;
  puVar10 = (undefined4 *)((uint)local_78 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x31)) {
  case 0:
    iVar15 = param_2[0x2f];
    uVar19 = 0;
    param_2[0x30] = iVar15;
    ppppiVar22 = (int ****)0x80000007;
    piVar17 = (int *)param_2[0x2e];
    iVar11 = *(int *)(iVar15 + 0x10);
    uVar25 = CONCAT44(*(undefined1 **)(iVar11 + 0x40),iVar11);
    local_19c = param_3;
    local_1c4 = param_4;
    local_1a0 = unaff_r4;
    local_1a4 = in_r12;
    if ((*(undefined1 **)(iVar11 + 0x40) == &DAT_00000006) &&
       (uVar25 = thunk_FUN_01bed842(*(int *)(iVar11 + 0x3c) + 8,&DAT_0051d9f5,6),
       local_19c = extraout_r2, local_1c4 = extraout_r3, local_1a4 = extraout_r12, (int)uVar25 == 0)
       ) {
      *param_2 = piVar17;
      *(undefined1 *)(param_2 + 3) = 0;
      param_2[1] = iVar15;
LAB_00e88e0c:
      param_2[4] = piVar17;
      param_2[5] = iVar15;
      param_2[2] = iVar15;
      *(undefined1 *)(param_2 + 0x19) = 0;
LAB_00e88e28:
      *(undefined1 *)(param_2 + 0x18) = 0;
      param_2[6] = piVar17;
      param_2[7] = iVar15;
LAB_00e88e3c:
      param_2[8] = piVar17;
      *(undefined1 *)(param_2 + 0x17) = 0;
LAB_00e88e54:
      piVar17 = (int *)(*piVar17 + 0x14);
      param_2[9] = piVar17;
      *(undefined1 *)(param_2 + 0x16) = 0;
LAB_00e88e74:
      iVar15 = *piVar17;
      *(undefined1 *)(param_2 + 0x15) = 0;
      iVar15 = iVar15 + 8;
      param_2[10] = iVar15;
LAB_00e88e9c:
      param_2[0xb] = iVar15;
      *(undefined1 *)(param_2 + 0x14) = 0;
LAB_00e88eb0:
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 1;
      param_2[0x12] = 1;
      param_2[0xc] = iVar15 + 4;
      param_2[0xd] = 0;
switchD_00e8959c_caseD_3:
      local_194 = (int ****)(param_2 + 0x16);
      local_198 = (int ****)(param_2 + 0x17);
      local_19c = (int ****)(param_2 + 0x19);
      local_1a0 = (int ****)(param_2 + 0x18);
      local_1a8 = (int ****)(param_2 + 8);
      ppppiVar22 = (int ****)(param_2 + 4);
      bVar8 = FUN_019f9bc4(param_2 + 0xc,param_3);
      if (bVar8 != 2) {
        FUN_0193c3cc(param_2 + 0xc);
        if ((bVar8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
        }
        iVar15 = param_2[0xb];
        *(undefined1 *)(param_2 + 0x14) = 1;
        *(undefined1 *)(param_2 + 0x15) = 1;
        *(undefined1 *)local_194 = 1;
        piVar17 = *(int **)(iVar15 + 0x18);
        do {
          iVar11 = *piVar17;
          bVar2 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar2);
        *piVar17 = iVar11 + 1;
        if (iVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xe89790);
          (*pcVar1)();
        }
        FUN_019f8c54(iVar15 + 4,1);
        *(undefined1 *)local_198 = 1;
        FUN_00bba254(local_1a8);
        puVar12 = (undefined4 *)param_2[2];
        *(undefined1 *)(param_2 + 0x19) = 1;
        puVar13 = param_2 + 5;
        *(undefined1 *)(param_2 + 0x18) = 1;
        param_2[4] = piVar17;
        iVar15 = puVar12[4];
        uVar24 = puVar12[5];
        uVar20 = puVar12[6];
        uVar23 = puVar12[7];
        uVar9 = *(undefined1 *)(puVar12 + 8);
        uVar19 = puVar12[1];
        uVar18 = puVar12[2];
        uVar21 = puVar12[3];
        *puVar13 = *puVar12;
        param_2[6] = uVar19;
        param_2[7] = uVar18;
        param_2[8] = uVar21;
        param_2[9] = iVar15 + 0x20;
        param_2[0xc] = uVar23;
        param_2[10] = uVar24;
        param_2[0xb] = uVar20;
        *(undefined1 *)(param_2 + 0xd) = uVar9;
        uVar19 = puVar12[4];
        *(undefined1 *)(param_2 + 0x2d) = 0;
        param_2[0x2a] = ppppiVar22;
        param_2[0x2b] = puVar13;
        param_2[0x2c] = uVar19;
        local_1c4 = ppppiVar22;
LAB_00e89018:
        pppiVar14 = *ppppiVar22;
        *(undefined1 *)(param_2 + 0x29) = 0;
        pppiVar14 = pppiVar14 + 2;
        param_2[0x26] = pppiVar14;
        param_2[0x27] = puVar13;
        param_2[0x28] = uVar19;
LAB_00e89040:
        *(undefined1 *)(param_2 + 0x24) = 0;
        param_2[0x22] = puVar13;
        param_2[0x23] = pppiVar14;
LAB_00e89058:
        *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
        bVar8 = 1;
        param_2[0x11] = puVar13;
        param_2[0x12] = pppiVar14;
LAB_00e89074:
        puVar12 = param_2 + 0xe;
        *puVar12 = 0;
        param_2[0x10] = 0;
        param_2[0xf] = 4;
        *(undefined1 *)(param_2 + 0x13) = 1;
        FUN_007bdb80(&local_d8,puVar12,puVar13,pppiVar14);
        if (local_d8 != (int ****)0x2) {
          local_1c4 = local_d8;
          local_1a8 = local_d4;
          local_19c = local_c8;
          local_194 = local_d0;
          local_198 = local_cc;
          local_40 = local_c0;
          ppppiStack_3c = local_bc;
          ppppiStack_38 = local_b8;
          local_34 = local_b4;
          ppppiStack_30 = local_b0;
          ppppiStack_2c = ppppiStack_ac;
          ppppiStack_28 = ppppiStack_a8;
          local_1a0 = local_a0;
          local_1a4 = local_a4;
          ppppiVar22 = local_c4;
          goto LAB_00e89198;
        }
        if ((bVar8 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x13) = 0;
          FUN_009ec520(&local_d8);
          param_2[0x14] = local_d8;
          param_2[0x15] = local_d4;
          param_2[0x16] = local_d0;
          param_2[0x17] = local_cc;
          param_2[0x18] = local_c8;
          param_2[0x19] = local_c4;
          param_2[0x1a] = local_c0;
          param_2[0x1b] = local_bc;
          param_2[0x1c] = local_b8;
          param_2[0x1d] = local_b4;
          param_2[0x1e] = local_b0;
          param_2[0x1f] = ppppiStack_ac;
          param_2[0x20] = ppppiStack_a8;
          param_2[0x21] = local_a4;
          goto LAB_00e89120;
        }
        uVar16 = param_2[0x10];
        if (0x2492492 < uVar16) {
          uVar19 = 0;
LAB_00e892d0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar19,puVar12);
        }
        puVar12 = (undefined4 *)(uVar16 * 0x38);
        if (puVar12 == (undefined4 *)0x0) {
          iVar15 = 8;
          uVar16 = 0;
        }
        else {
          uVar19 = 8;
          iVar15 = FUN_01298504(puVar12,8);
          if (iVar15 == 0) goto LAB_00e892d0;
        }
        puVar12 = (undefined4 *)param_2[0xf];
        param_2[0x15] = iVar15;
        puVar13 = puVar12 + param_2[0x10] * 2;
        param_2[0x14] = uVar16;
        param_2[0x16] = 0;
        *(undefined1 *)(param_2 + 0x13) = 0;
        param_2[0x1c] = puVar12;
        param_2[0x1d] = puVar12;
        param_2[0x1e] = param_2[0xe];
        param_2[0x1f] = puVar13;
        while (puVar12 != puVar13) {
          uVar19 = *puVar12;
          iVar15 = puVar12[1];
          param_2[0x1d] = puVar12 + 2;
          param_2[0x1a] = uVar19;
          param_2[0x17] = param_2 + 0x14;
          param_2[0x18] = uVar19;
          param_2[0x19] = iVar15;
          param_2[0x1b] = iVar15;
LAB_00e89a60:
          (**(code **)(iVar15 + 0xc))(&local_d8,uVar19,param_3);
          local_1a0 = ppppiStack_9c;
          local_1a4 = local_a0;
          ppppiVar22 = local_c0;
          ppppiVar7 = local_c4;
          ppppiVar6 = local_c8;
          ppppiVar5 = local_cc;
          ppppiVar4 = local_d0;
          ppppiVar3 = local_d8;
          if (local_d8 == (int ****)0x2) {
            uVar9 = 4;
            goto LAB_00e89c58;
          }
          local_1c4 = local_d4;
          local_1a8 = local_d0;
          local_19c = local_c4;
          local_194 = local_cc;
          local_198 = local_c8;
          local_98 = local_bc;
          ppppiStack_94 = local_b8;
          ppppiStack_90 = local_b4;
          local_8c = local_b0;
          ppppiStack_88 = ppppiStack_ac;
          ppppiStack_84 = ppppiStack_a8;
          ppppiStack_80 = local_a4;
          FUN_01139b38(param_2[0x1a],param_2[0x1b]);
          if (((uint)ppppiVar3 & 1) != 0) {
            local_40 = local_98;
            ppppiStack_3c = ppppiStack_94;
            ppppiStack_38 = ppppiStack_90;
            local_34 = local_8c;
            ppppiStack_30 = ppppiStack_88;
            ppppiStack_2c = ppppiStack_84;
            ppppiStack_28 = ppppiStack_80;
            FUN_009495dc(param_2 + 0x1c);
            FUN_007bc140(param_2 + 0x14);
            goto LAB_00e89198;
          }
          local_68 = ppppiVar22;
          *puVar10 = ppppiVar5;
          puVar10[1] = ppppiVar6;
          local_78[0] = ppppiVar4;
          local_6c = ppppiVar7;
          local_64 = local_98;
          ppppiStack_60 = ppppiStack_94;
          ppppiStack_5c = ppppiStack_90;
          local_58 = local_8c;
          ppppiStack_54 = ppppiStack_88;
          ppppiStack_50 = ppppiStack_84;
          ppppiStack_4c = ppppiStack_80;
          puVar10[0xb] = local_1a4;
          piVar17 = (int *)param_2[0x17];
          puVar10[0xc] = local_1a0;
          iVar15 = piVar17[2];
          if (iVar15 == *piVar17) {
            FUN_006e4ec8(piVar17);
          }
          puVar13 = (undefined4 *)(piVar17[1] + iVar15 * 0x38);
          *puVar13 = ppppiVar4;
          puVar13[1] = ppppiVar5;
          puVar13[2] = ppppiVar6;
          puVar13[3] = ppppiVar7;
          puVar13[4] = ppppiVar22;
          puVar13[5] = local_98;
          puVar13[6] = ppppiStack_94;
          puVar13[7] = ppppiStack_90;
          puVar13[8] = local_8c;
          puVar13[9] = ppppiStack_88;
          puVar13[10] = ppppiStack_84;
          puVar13[0xb] = ppppiStack_80;
          puVar13[0xc] = local_1a4;
          puVar13[0xd] = local_1a0;
          piVar17[2] = iVar15 + 1;
          puVar13 = (undefined4 *)param_2[0x1f];
          puVar12 = (undefined4 *)param_2[0x1d];
        }
        param_2[0x18] = 0;
        FUN_009495dc(param_2 + 0x1c);
        local_e8 = (int ****)param_2[0x14];
        local_e4 = (int ****)param_2[0x15];
        local_e0 = (int ****)param_2[0x16];
        goto LAB_00e89bfc;
      }
      uVar9 = 3;
      *(undefined1 *)(param_2 + 0x14) = 3;
      *(undefined1 *)(param_2 + 0x15) = 3;
      *(undefined1 *)local_194 = 3;
      *(undefined1 *)local_198 = 3;
      *(undefined1 *)local_1a0 = 3;
      *(undefined1 *)local_19c = 3;
      goto LAB_00e89c80;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c182cc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c182cc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 3)) {
    case 0:
      piVar17 = (int *)*param_2;
      iVar15 = param_2[1];
      goto LAB_00e88e0c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c182cc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c182cc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x19)) {
      case 0:
        piVar17 = (int *)param_2[4];
        iVar15 = param_2[5];
        goto LAB_00e88e28;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c182cc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c182cc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x18)) {
      case 0:
        piVar17 = (int *)param_2[6];
        goto LAB_00e88e3c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c182cc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c182cc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x17)) {
      case 0:
        piVar17 = (int *)param_2[8];
        goto LAB_00e88e54;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c182cc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c182cc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x16)) {
      case 0:
        piVar17 = (int *)param_2[9];
        goto LAB_00e88e74;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f190);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f190);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x15)) {
      case 0:
        iVar15 = param_2[10];
        goto LAB_00e88e9c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x14)) {
      case 0:
        iVar15 = param_2[0xb];
        goto LAB_00e88eb0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00e8959c_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      ppppiVar22 = (int ****)param_2[0x2a];
      puVar13 = (undefined4 *)param_2[0x2b];
      uVar19 = param_2[0x2c];
      goto LAB_00e89018;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c185c4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c185c4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
      pppiVar14 = (int ***)param_2[0x26];
      puVar13 = (undefined4 *)param_2[0x27];
      goto LAB_00e89040;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c18654);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c18654);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x24)) {
    case 0:
      puVar13 = (undefined4 *)param_2[0x22];
      pppiVar14 = (int ***)param_2[0x23];
      goto LAB_00e89058;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x4d)) {
    case 0:
      puVar13 = (undefined4 *)param_2[0x11];
      pppiVar14 = (int ***)param_2[0x12];
      bVar8 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_00e89074;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 3:
      break;
    case 4:
      uVar19 = param_2[0x1a];
      iVar15 = param_2[0x1b];
      goto LAB_00e89a60;
    }
LAB_00e89120:
    FUN_009ecbe0(&local_d8,param_2 + 0x14,param_3);
    ppppiStack_2c = ppppiStack_ac;
    ppppiStack_30 = local_b0;
    local_34 = local_b4;
    ppppiStack_38 = local_b8;
    ppppiStack_3c = local_bc;
    local_40 = local_c0;
    ppppiVar22 = local_c4;
    ppppiVar4 = local_d4;
    ppppiVar3 = local_d8;
    if (local_d8 == (int ****)&DAT_00000003) {
      uVar9 = 3;
LAB_00e89c58:
      local_1cc = (undefined1 *)((int)param_2 + 0x4d);
      local_1d4 = param_2 + 0x29;
      local_1d8 = param_2 + 0x24;
      local_1d0 = param_2 + 0x2d;
      *local_1cc = uVar9;
      *(undefined1 *)local_1d8 = 3;
      *(undefined1 *)local_1d4 = 3;
      *(undefined1 *)local_1d0 = 3;
      uVar9 = 4;
LAB_00e89c80:
      local_1c8 = param_2 + 3;
      *(undefined1 *)local_1c8 = uVar9;
      *param_1 = 2;
      uVar9 = 3;
      goto LAB_00e89a24;
    }
    local_1a8 = local_d4;
    local_1c4 = local_d8;
    local_19c = local_c8;
    local_194 = local_d0;
    local_198 = local_cc;
    FUN_00ba64b4(param_2 + 0x14);
    if (ppppiVar3 == (int ****)0x2) {
      local_e8 = ppppiVar4;
      local_e4 = local_194;
      local_e0 = local_198;
LAB_00e89bfc:
      FUN_006cac18(&local_d8,&local_e8);
      local_194 = local_d4;
      local_198 = local_d0;
      local_19c = local_cc;
      local_40 = local_c4;
      ppppiStack_3c = local_c0;
      ppppiStack_38 = local_bc;
      local_34 = local_b8;
      ppppiStack_30 = local_b4;
      ppppiStack_2c = local_b0;
      ppppiStack_28 = ppppiStack_ac;
      uVar19 = 0;
      *(undefined1 *)(param_2 + 0x13) = 0;
      ppppiVar22 = local_c8;
      local_1a8 = local_d8;
      local_1a4 = param_3;
    }
    else {
      ppppiStack_28 = ppppiStack_a8;
      local_1a0 = local_a0;
      local_1a4 = local_a4;
LAB_00e89198:
      if (*(char *)(param_2 + 0x13) != '\0') {
        FUN_00b7d620(param_2 + 0xe);
      }
      uVar19 = 1;
      *(undefined1 *)(param_2 + 0x13) = 0;
    }
    ppppiStack_158 = ppppiStack_28;
    ppppiStack_15c = ppppiStack_2c;
    ppppiStack_160 = ppppiStack_30;
    local_164 = local_34;
    ppppiStack_168 = ppppiStack_38;
    ppppiStack_16c = ppppiStack_3c;
    local_170 = local_40;
    uVar25 = CONCAT44(local_198,local_194);
    local_1cc = (undefined1 *)((int)param_2 + 0x4d);
    *local_1cc = 1;
    FUN_00ba638c(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    *(undefined1 *)(param_2 + 0x29) = 1;
    *(undefined1 *)(param_2 + 0x24) = 1;
    piVar17 = (int *)param_2[4];
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(param_2[4]);
    }
    *(undefined1 *)(param_2 + 3) = 1;
    FUN_00bdeda4(param_2);
  }
  param_1[5] = local_19c;
  *param_1 = uVar19;
  *(undefined8 *)(param_1 + 3) = uVar25;
  param_1[1] = local_1c4;
  param_1[2] = local_1a8;
  param_1[6] = ppppiVar22;
  param_1[7] = local_170;
  param_1[8] = ppppiStack_16c;
  param_1[9] = ppppiStack_168;
  param_1[10] = local_164;
  param_1[0xb] = ppppiStack_160;
  param_1[0xc] = ppppiStack_15c;
  param_1[0xd] = ppppiStack_158;
  uVar9 = 1;
  param_1[0xe] = local_1a4;
  param_1[0xf] = local_1a0;
LAB_00e89a24:
  *(undefined1 *)(param_2 + 0x31) = uVar9;
  return;
}

