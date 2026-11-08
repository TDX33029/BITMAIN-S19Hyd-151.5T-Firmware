// FUN_00dd1878 @ 00dd1878 size=1928 calls_out=14 calls_in=1
// strings: 

void FUN_00dd1878(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *unaff_r6;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  int *local_2dc;
  int *local_2b8;
  int local_2b0;
  int local_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int local_298;
  int local_294;
  int local_290;
  int iStack_28c;
  int iStack_288;
  int local_284;
  int local_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  int local_218;
  int local_140;
  int local_13c;
  uint local_138;
  int local_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 local_118;
  undefined1 local_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x1f]) {
  case '\0':
    iVar13 = *(int *)param_2[0x1c];
    *(undefined1 *)(param_2 + 0x1b) = 0;
    piVar16 = (int *)param_2[0x1d];
    iVar10 = param_2[0x1e];
    param_2[0x18] = iVar13;
    param_2[0x19] = (int)piVar16;
    param_2[0x1a] = iVar10;
LAB_00dd1908:
    puVar17 = *(undefined **)(iVar13 + 8);
    *(undefined1 *)(param_2 + 5) = 0;
    *param_2 = 1;
    param_2[1] = (int)puVar17;
    param_2[2] = (int)piVar16;
    param_2[3] = iVar10;
    param_2[4] = iVar13;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    local_2b8 = piVar16 + 6;
    if (*(int *)(*(int *)*local_2b8 + 0x10) != 0) {
LAB_00dd194c:
      if (&UNK_00505050 < puVar17) {
        uVar14 = 0;
LAB_00dd1960:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,unaff_r6);
      }
      unaff_r6 = (int *)((int)puVar17 * 0x198);
      if (unaff_r6 == (int *)0x0) {
        iVar3 = 8;
        puVar17 = (undefined *)0x0;
      }
      else {
        uVar14 = 8;
        iVar3 = FUN_01298504(unaff_r6,8);
        if (iVar3 == 0) goto LAB_00dd1960;
      }
      param_2[6] = (int)puVar17;
LAB_00dd1a44:
      param_2[7] = iVar3;
      param_2[8] = 0;
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      if (*(int *)(iVar13 + 8) != 0) {
        iVar3 = *(int *)(iVar13 + 4);
        iVar13 = *(int *)(iVar13 + 8) << 4;
        iVar18 = 0;
        do {
          if (*piVar16 == 1) {
            local_d8 = piVar16[1];
            iStack_d4 = piVar16[2];
            iStack_d0 = piVar16[3];
          }
          local_138 = (uint)(*piVar16 == 1);
          local_128 = piVar16[4];
          local_124 = piVar16[5];
          local_120 = *local_2b8;
          local_11c = piVar16[7];
          local_118 = (undefined1)piVar16[8];
          local_134 = local_d8;
          iStack_130 = iStack_d4;
          iStack_12c = iStack_d0;
          local_114 = 0;
          iVar11 = param_2[8];
          local_218 = iVar18;
          local_140 = iVar10;
          local_13c = iVar3;
          if (iVar11 == param_2[6]) {
            FUN_00f9d59c(param_2 + 6);
          }
          iVar3 = iVar3 + 0x10;
          FUN_01bed4e2(iVar11 * 0x198 + param_2[7],&local_2a8,0x198);
          iVar18 = iVar18 + 1;
          iVar13 = iVar13 + -0x10;
          param_2[8] = iVar11 + 1;
        } while (iVar13 != 0);
      }
      local_a0 = param_2[6];
      iStack_9c = param_2[7];
      iStack_98 = param_2[8];
      FUN_0117318c(&local_2a8);
      local_d8 = local_2a8;
      iStack_d4 = iStack_2a4;
      iStack_d0 = iStack_2a0;
      iStack_cc = iStack_29c;
      local_c8 = local_298;
      iStack_c4 = local_294;
      iStack_c0 = local_290;
      iStack_bc = iStack_28c;
      iStack_b8 = iStack_288;
      local_b4 = local_284;
      iStack_b0 = local_280;
      iStack_ac = iStack_27c;
      iStack_a8 = iStack_278;
      iStack_a4 = iStack_274;
      param_2[10] = local_2a8;
      param_2[0xb] = iStack_2a4;
      param_2[0xc] = iStack_2a0;
      param_2[0xd] = iStack_29c;
      param_2[0xe] = local_298;
      param_2[0xf] = local_294;
      param_2[0x10] = local_290;
      param_2[0x11] = iStack_28c;
      param_2[0x12] = iStack_288;
      param_2[0x13] = local_284;
      param_2[0x14] = local_280;
      param_2[0x15] = iStack_27c;
      param_2[0x16] = iStack_278;
      param_2[0x17] = iStack_274;
      goto LAB_00dd1bc8;
    }
LAB_00dd1c88:
    if (&UNK_00ba2e8b < puVar17) {
      uVar14 = 0;
LAB_00dd1c9c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,unaff_r6);
    }
    unaff_r6 = (int *)((int)puVar17 * 0xb0);
    if (unaff_r6 == (int *)0x0) {
      iVar3 = 8;
      puVar17 = (undefined *)0x0;
    }
    else {
      uVar14 = 8;
      iVar3 = FUN_01298504(unaff_r6,8);
      if (iVar3 == 0) goto LAB_00dd1c9c;
    }
    param_2[6] = (int)puVar17;
LAB_00dd1cfc:
    piVar8 = param_2 + 6;
    param_2[7] = iVar3;
    param_2[8] = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    if (*(int *)(iVar13 + 8) != 0) {
      iVar3 = *(int *)(iVar13 + 8) << 4;
      iVar19 = 0;
      iVar18 = param_2[8];
      iVar11 = iVar18 * 0xb0 + 0xac;
      iVar13 = *(int *)(iVar13 + 4);
      do {
        iVar4 = piVar16[4];
        iVar5 = piVar16[5];
        iVar6 = piVar16[6];
        iVar7 = piVar16[7];
        iVar12 = iVar18 + iVar19;
        iVar1 = piVar16[8];
        piVar15 = (int *)0x0;
        if (*piVar16 != 0) {
          piVar15 = piVar16 + 1;
        }
        if (iVar12 == *piVar8) {
          FUN_00a20d80(piVar8);
        }
        iVar3 = iVar3 + -0x10;
        puVar9 = (undefined1 *)(param_2[7] + iVar11);
        *puVar9 = 0;
        iVar11 = iVar11 + 0xb0;
        *(int *)(puVar9 + -0xc) = iVar6;
        puVar9[-4] = (char)iVar1;
        *(int *)(puVar9 + -0x28) = iVar10;
        *(int *)(puVar9 + -0x1c) = iVar19;
        iVar19 = iVar19 + 1;
        *(int *)(puVar9 + -8) = iVar7;
        *(int *)(puVar9 + -0x2c) = iVar13;
        *(int *)(puVar9 + -0x14) = iVar4;
        *(undefined4 *)(puVar9 + -0x24) = 1;
        *(undefined4 *)(puVar9 + -0x20) = 0;
        *(int **)(puVar9 + -0x18) = piVar15;
        *(int *)(puVar9 + -0x10) = iVar5;
        param_2[8] = iVar12 + 1;
        iVar13 = iVar13 + 0x10;
      } while (iVar3 != 0);
    }
    local_a0 = *piVar8;
    iStack_9c = param_2[7];
    iStack_98 = param_2[8];
    FUN_01175bf4(&local_2a8);
    local_d8 = local_2a8;
    iStack_d4 = iStack_2a4;
    iStack_d0 = iStack_2a0;
    iStack_cc = iStack_29c;
    local_c8 = local_298;
    iStack_c4 = local_294;
    iStack_c0 = local_290;
    iStack_bc = iStack_28c;
    iStack_b8 = iStack_288;
    local_b4 = local_284;
    iStack_b0 = local_280;
    iStack_ac = iStack_27c;
    iStack_a8 = iStack_278;
    iStack_a4 = iStack_274;
    param_2[10] = local_2a8;
    param_2[0xb] = iStack_2a4;
    param_2[0xc] = iStack_2a0;
    param_2[0xd] = iStack_29c;
    param_2[0xe] = local_298;
    param_2[0xf] = local_294;
    param_2[0x10] = local_290;
    param_2[0x11] = iStack_28c;
    param_2[0x12] = iStack_288;
    param_2[0x13] = local_284;
    param_2[0x14] = local_280;
    param_2[0x15] = iStack_27c;
    param_2[0x16] = iStack_278;
    param_2[0x17] = iStack_274;
LAB_00dd1e78:
    FUN_01144e6c(&local_2a8,param_2 + 10,param_3);
    if (local_2a8 != 3) {
      piVar16 = (int *)((uint)&local_2a8 | 4);
      local_68 = *piVar16;
      iStack_64 = piVar16[1];
      iStack_60 = piVar16[2];
      local_2b0 = local_298;
      local_90 = local_290;
      iStack_8c = iStack_28c;
      iStack_88 = iStack_288;
      iStack_84 = local_284;
      local_80 = local_280;
      iStack_7c = iStack_27c;
      iStack_78 = iStack_278;
      iStack_74 = iStack_274;
      iStack_70 = iStack_270;
      FUN_00dd2210(param_2 + 10);
      local_30 = local_68;
      iStack_2c = iStack_64;
      iStack_28 = iStack_60;
      if (local_2a8 != 2) {
        local_58 = local_90;
        iStack_54 = iStack_8c;
        iStack_50 = iStack_88;
        iStack_4c = iStack_84;
        local_48 = local_80;
        iStack_44 = iStack_7c;
        iStack_40 = iStack_78;
        iStack_3c = iStack_74;
        iStack_38 = iStack_70;
        goto LAB_00dd1f44;
      }
      goto LAB_00dd1f14;
    }
    uVar2 = 4;
LAB_00dd1ea0:
    local_2dc = param_2 + 5;
    *(undefined1 *)local_2dc = uVar2;
    *(undefined1 *)(param_2 + 0x1b) = 3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22218);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22218);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1b]) {
    case '\0':
      iVar13 = param_2[0x18];
      piVar16 = (int *)param_2[0x19];
      iVar10 = param_2[0x1a];
      goto LAB_00dd1908;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[5]) {
    case '\0':
      piVar16 = (int *)param_2[2];
      *(undefined1 *)((int)param_2 + 0x15) = 1;
      iVar10 = param_2[3];
      iVar13 = param_2[4];
      unaff_r6 = piVar16 + 6;
      puVar17 = (undefined *)param_2[1];
      if (*(int *)(*(int *)*unaff_r6 + 0x10) == 0) {
        if (*param_2 != 0) goto LAB_00dd1c88;
        param_2[6] = 0;
        iVar3 = 8;
        goto LAB_00dd1cfc;
      }
      local_2b8 = unaff_r6;
      if (*param_2 != 0) goto LAB_00dd194c;
      param_2[6] = 0;
      iVar3 = 8;
      goto LAB_00dd1a44;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00dd1e78;
    }
LAB_00dd1bc8:
    FUN_0114fc70(&local_2a8,param_2 + 10,param_3);
    if (local_2a8 == 3) {
      uVar2 = 3;
      goto LAB_00dd1ea0;
    }
    piVar16 = (int *)((uint)&local_2a8 | 4);
    local_e8 = *piVar16;
    iStack_e4 = piVar16[1];
    iStack_e0 = piVar16[2];
    local_2b0 = local_298;
    local_110 = local_290;
    iStack_10c = iStack_28c;
    iStack_108 = iStack_288;
    iStack_104 = local_284;
    local_100 = local_280;
    iStack_fc = iStack_27c;
    iStack_f8 = iStack_278;
    iStack_f4 = iStack_274;
    iStack_f0 = iStack_270;
    FUN_00dd2194(param_2 + 10);
    local_30 = local_e8;
    iStack_2c = iStack_e4;
    iStack_28 = iStack_e0;
    if (local_2a8 == 2) {
LAB_00dd1f14:
      local_294 = -0x7ffffffa;
      iVar10 = 0;
    }
    else {
      local_58 = local_110;
      iStack_54 = iStack_10c;
      iStack_50 = iStack_108;
      iStack_4c = iStack_104;
      local_48 = local_100;
      iStack_44 = iStack_fc;
      iStack_40 = iStack_f8;
      iStack_3c = iStack_f4;
      iStack_38 = iStack_f0;
LAB_00dd1f44:
      iVar10 = 1;
      iStack_274 = local_2b0;
    }
    uVar2 = 1;
    *param_1 = iVar10;
    param_1[1] = local_2a8;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    param_1[2] = local_30;
    param_1[3] = iStack_2c;
    param_1[4] = iStack_28;
    param_1[5] = iStack_274;
    param_1[6] = local_294;
    param_1[7] = local_58;
    param_1[8] = iStack_54;
    param_1[9] = iStack_50;
    param_1[10] = iStack_4c;
    param_1[0xb] = local_48;
    param_1[0xc] = iStack_44;
    param_1[0xd] = iStack_40;
    param_1[0xe] = iStack_3c;
    param_1[0xf] = iStack_38;
    *(undefined1 *)(param_2 + 5) = 1;
    FUN_00dd2148(param_2);
    iVar10 = *param_1;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    if (iVar10 != 2) goto LAB_00dd1fc8;
  }
  uVar2 = 3;
  *param_1 = 2;
LAB_00dd1fc8:
  *(undefined1 *)(param_2 + 0x1f) = uVar2;
  return;
}

