// FUN_00b3068c @ 00b3068c size=2344 calls_out=15 calls_in=0
// strings: errors

void FUN_00b3068c(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint extraout_r2;
  uint unaff_r4;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined4 *local_278;
  undefined4 *local_270;
  undefined4 *local_268;
  undefined4 *local_264;
  uint *local_250;
  undefined4 local_24c;
  uint local_248;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint local_234;
  uint local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint local_218;
  uint local_214;
  uint local_210;
  undefined4 local_20c;
  undefined4 *local_208;
  uint local_204;
  uint local_200;
  int local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 local_e4;
  uint local_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 *local_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar10 = *param_2;
    iVar12 = param_2[1];
    uVar18 = 0x80000007;
    uVar14 = 0;
    param_2[2] = iVar12;
    iVar3 = *(int *)(iVar12 + 0x10);
    uVar22 = CONCAT44(*(int *)(iVar3 + 0x40),iVar3);
    local_248 = param_3;
    puVar8 = param_2;
    if ((*(int *)(iVar3 + 0x40) == 6) &&
       (uVar22 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,"errors",6), local_248 = extraout_r2,
       (int)uVar22 == 0)) {
      param_2[4] = uVar10;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar12;
LAB_00b30884:
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[6] = uVar10;
      param_2[7] = iVar12;
      goto LAB_00b30898;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c124d0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c124d0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      uVar10 = param_2[4];
      iVar12 = param_2[5];
      goto LAB_00b30884;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c124d0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c124d0);
    case 3:
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c124d0);
      }
      uVar10 = param_2[6];
    }
LAB_00b30898:
    piVar19 = param_2 + 4;
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar10;
    piVar15 = param_2 + 5;
    iVar3 = piVar7[4];
    iVar20 = piVar7[5];
    iVar17 = piVar7[6];
    iVar16 = piVar7[7];
    iVar12 = piVar7[8];
    uVar18 = piVar7[1];
    iVar11 = piVar7[2];
    iVar13 = piVar7[3];
    *piVar15 = *piVar7;
    param_2[6] = uVar18;
    param_2[7] = iVar11;
    param_2[8] = iVar13;
    param_2[9] = iVar3 + 0x20;
    param_2[10] = iVar20;
    param_2[0xb] = iVar17;
    param_2[0xc] = iVar16;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    local_248 = piVar7[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = piVar19;
    param_2[0x2b] = piVar15;
    param_2[0x2c] = local_248;
LAB_00b3092c:
    iVar12 = *piVar19;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar12;
    param_2[0x27] = piVar15;
    param_2[0x28] = local_248;
LAB_00b30950:
    uVar14 = *(uint *)(iVar12 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar12;
    param_2[0x11] = local_248;
    param_2[0xe] = 1;
    param_2[0xf] = uVar14;
    param_2[0x10] = piVar15;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_250 = (uint *)(piVar15 + 6);
    if (*(int *)(*(int *)*local_250 + 0x10) == 0) {
LAB_00b30c10:
      if (0x1999999 < uVar14) {
        uVar10 = 0;
LAB_00b30c24:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,uVar18);
      }
      uVar18 = uVar14 * 0x50;
      if (uVar18 == 0) {
        iVar3 = 4;
        uVar14 = 0;
      }
      else {
        uVar10 = 4;
        iVar3 = FUN_01298504(uVar18,4);
        if (iVar3 == 0) goto LAB_00b30c24;
      }
      param_2[0x14] = uVar14;
LAB_00b30c78:
      piVar19 = param_2 + 0x14;
      param_2[0x15] = iVar3;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar12 + 8) != 0) {
        iVar16 = 0;
        iVar3 = *(int *)(iVar12 + 8) * 0xc;
        iVar13 = param_2[0x16];
        iVar11 = iVar13 * 0x50;
        iVar12 = *(int *)(iVar12 + 4);
        do {
          iVar17 = piVar15[4];
          iVar20 = piVar15[5];
          iVar5 = piVar15[6];
          piVar7 = (int *)0x0;
          if (*piVar15 != 0) {
            piVar7 = piVar15 + 1;
          }
          iVar6 = piVar15[7];
          iVar1 = piVar15[8];
          iVar9 = iVar13 + iVar16;
          if (iVar9 == *piVar19) {
            FUN_00a20f30(piVar19);
          }
          iVar3 = iVar3 + -0xc;
          puVar8 = (undefined4 *)(param_2[0x15] + iVar11);
          *puVar8 = 1;
          puVar8[1] = 0;
          puVar8[2] = iVar16;
          puVar8[3] = piVar7;
          iVar16 = iVar16 + 1;
          iVar11 = iVar11 + 0x50;
          *(undefined1 *)(puVar8 + 0x13) = 0;
          *(char *)(puVar8 + 8) = (char)iVar1;
          puVar8[4] = iVar17;
          puVar8[5] = iVar20;
          puVar8[9] = iVar12;
          puVar8[6] = iVar5;
          puVar8[10] = local_248;
          puVar8[7] = iVar6;
          param_2[0x16] = iVar9 + 1;
          iVar12 = iVar12 + 0xc;
        } while (iVar3 != 0);
      }
      local_80 = *piVar19;
      uStack_7c = param_2[0x15];
      uStack_78 = param_2[0x16];
      FUN_00a147d4(&local_218);
      local_b8 = local_218;
      uStack_b4 = local_214;
      uStack_b0 = local_210;
      uStack_ac = local_20c;
      local_a8 = local_208;
      uStack_a4 = local_204;
      uStack_a0 = local_200;
      iStack_9c = local_1fc;
      uStack_98 = local_1f8;
      local_94 = local_1f4;
      iStack_90 = local_1f0;
      iStack_8c = local_1ec;
      uStack_88 = uStack_1e8;
      uStack_84 = uStack_1e4;
      param_2[0x18] = local_218;
      param_2[0x19] = local_214;
      param_2[0x1a] = local_210;
      param_2[0x1b] = local_20c;
      param_2[0x1c] = local_208;
      param_2[0x1d] = local_204;
      param_2[0x1e] = local_200;
      param_2[0x1f] = local_1fc;
      param_2[0x20] = local_1f8;
      param_2[0x21] = local_1f4;
      param_2[0x22] = local_1f0;
      param_2[0x23] = local_1ec;
      param_2[0x24] = uStack_1e8;
      param_2[0x25] = uStack_1e4;
      goto switchD_00b307ec_caseD_4;
    }
LAB_00b30994:
    if (0x690690 < uVar14) {
      uVar10 = 0;
LAB_00b309a8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,uVar18);
    }
    uVar18 = uVar14 * 0x138;
    if (uVar18 == 0) {
      iVar3 = 4;
      uVar14 = 0;
    }
    else {
      uVar10 = 4;
      iVar3 = FUN_01298504(uVar18,4);
      if (iVar3 == 0) goto LAB_00b309a8;
    }
    param_2[0x14] = uVar14;
LAB_00b309fc:
    param_2[0x15] = iVar3;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar12 + 8) != 0) {
      iVar3 = *(int *)(iVar12 + 4);
      iVar11 = 0;
      iVar12 = *(int *)(iVar12 + 8) * 0xc;
      puVar4 = (uint *)((uint)&local_218 | 4);
      do {
        if (*piVar15 == 1) {
          local_b8 = piVar15[1];
          uStack_b4 = piVar15[2];
          uStack_b0 = piVar15[3];
        }
        local_218 = (uint)(*piVar15 == 1);
        local_208 = (undefined4 *)piVar15[4];
        local_204 = piVar15[5];
        local_200 = *local_250;
        local_1fc = piVar15[7];
        iVar13 = piVar15[8];
        *puVar4 = local_b8;
        puVar4[1] = uStack_b4;
        puVar4[2] = uStack_b0;
        local_e4 = 0;
        iVar16 = param_2[0x16];
        local_1f8 = CONCAT31(local_1f8._1_3_,(char)iVar13);
        local_1f4 = local_248;
        local_1f0 = iVar3;
        local_1ec = iVar11;
        if (iVar16 == param_2[0x14]) {
          FUN_00f9d6bc(param_2 + 0x14);
        }
        iVar3 = iVar3 + 0xc;
        FUN_01bed4e2(iVar16 * 0x138 + param_2[0x15],&local_218,0x138);
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + -0xc;
        param_2[0x16] = iVar16 + 1;
      } while (iVar12 != 0);
    }
    local_80 = param_2[0x14];
    uStack_7c = param_2[0x15];
    uStack_78 = param_2[0x16];
    FUN_00a14064(&local_218);
    local_b8 = local_218;
    uStack_b4 = local_214;
    uStack_b0 = local_210;
    uStack_ac = local_20c;
    local_a8 = local_208;
    uStack_a4 = local_204;
    uStack_a0 = local_200;
    iStack_9c = local_1fc;
    uStack_98 = local_1f8;
    local_94 = local_1f4;
    iStack_90 = local_1f0;
    iStack_8c = local_1ec;
    uStack_88 = uStack_1e8;
    uStack_84 = uStack_1e4;
    param_2[0x18] = local_218;
    param_2[0x19] = local_214;
    param_2[0x1a] = local_210;
    param_2[0x1b] = local_20c;
    param_2[0x1c] = local_208;
    param_2[0x1d] = local_204;
    param_2[0x1e] = local_200;
    param_2[0x1f] = local_1fc;
    param_2[0x20] = local_1f8;
    param_2[0x21] = local_1f4;
    param_2[0x22] = local_1f0;
    param_2[0x23] = local_1ec;
    param_2[0x24] = uStack_1e8;
    param_2[0x25] = uStack_1e4;
switchD_00b307ec_caseD_3:
    FUN_009ed994(&local_218,param_2 + 0x18,param_3);
    uVar18 = local_204;
    puVar8 = local_208;
    if (local_218 != 3) {
      local_248 = local_218;
      local_250 = (uint *)local_214;
      local_24c = local_20c;
      puVar4 = &local_e0;
      local_e0 = local_200;
      iStack_dc = local_1fc;
      uStack_d8 = local_1f8;
      iStack_d4 = local_1f4;
      local_d0 = local_1f0;
      iStack_cc = local_1ec;
      uStack_c8 = uStack_1e8;
      uStack_c4 = uStack_1e4;
      uStack_c0 = uStack_1e0;
      FUN_00b311e8(param_2 + 0x18);
      unaff_r4 = local_210;
      goto LAB_00b30e8c;
    }
    uVar2 = 3;
LAB_00b30e14:
    local_278 = param_2 + 0x13;
    *(undefined1 *)local_278 = uVar2;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)(param_2 + 0x29) = 3;
    *param_1 = 2;
    uVar2 = 4;
    goto LAB_00b30f68;
  case 4:
    uVar18 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      piVar19 = (int *)param_2[0x2a];
      piVar15 = (int *)param_2[0x2b];
      local_248 = param_2[0x2c];
      goto LAB_00b3092c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
      iVar12 = param_2[0x26];
      piVar15 = (int *)param_2[0x27];
      local_248 = param_2[0x28];
      goto LAB_00b30950;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x13)) {
    case 0:
      piVar15 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_250 = (uint *)(piVar15 + 6);
      uVar14 = param_2[0xf];
      local_248 = param_2[0x11];
      iVar12 = param_2[0x12];
      if (*(int *)(*(int *)*local_250 + 0x10) != 0) {
        if (param_2[0xe] != 0) goto LAB_00b30994;
        param_2[0x14] = 0;
        iVar3 = 4;
        goto LAB_00b309fc;
      }
      if (param_2[0xe] != 0) goto LAB_00b30c10;
      param_2[0x14] = 0;
      iVar3 = 4;
      goto LAB_00b30c78;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case 3:
      goto switchD_00b307ec_caseD_3;
    }
switchD_00b307ec_caseD_4:
    FUN_00a09a14(&local_218,param_2 + 0x18,param_3);
    uVar18 = local_204;
    puVar8 = local_208;
    if (local_218 == 3) {
      uVar2 = 4;
      goto LAB_00b30e14;
    }
    local_248 = local_218;
    local_250 = (uint *)local_214;
    local_24c = local_20c;
    puVar4 = &local_70;
    local_70 = local_200;
    iStack_6c = local_1fc;
    uStack_68 = local_1f8;
    iStack_64 = local_1f4;
    local_60 = local_1f0;
    iStack_5c = local_1ec;
    uStack_58 = uStack_1e8;
    uStack_54 = uStack_1e4;
    uStack_50 = uStack_1e0;
    FUN_00b31328(param_2 + 0x18);
    unaff_r4 = local_210;
LAB_00b30e8c:
    uVar22 = CONCAT44(local_250,local_24c);
    local_270 = param_2 + 0x29;
    local_264 = param_2 + 0x2d;
    local_268 = param_2 + 0xe;
    bVar21 = local_248 != 2;
    if (bVar21) {
      local_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      local_3c = puVar4[3];
      local_38 = puVar4[4];
      uStack_34 = puVar4[5];
      uStack_30 = puVar4[6];
      uStack_2c = puVar4[7];
      uStack_28 = puVar4[8];
    }
    else {
      uVar18 = 0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00b31488(local_268);
    *(undefined1 *)local_264 = 1;
    *(undefined1 *)local_270 = 1;
    if (bVar21) {
      uStack_224 = uStack_2c;
      uStack_220 = uStack_28;
    }
    uStack_228 = uStack_30;
    uStack_22c = uStack_34;
    local_230 = local_38;
    local_234 = local_3c;
    uStack_238 = uStack_40;
    uStack_23c = uStack_44;
    local_240 = local_48;
    uVar14 = (uint)bVar21;
  }
  param_1[2] = (uint)((ulonglong)uVar22 >> 0x20);
  param_1[4] = (uint)uVar22;
  param_1[5] = (uint)puVar8;
  param_1[6] = uVar18;
  *param_1 = uVar14;
  param_1[1] = local_248;
  param_1[3] = unaff_r4;
  param_1[7] = local_240;
  param_1[8] = uStack_23c;
  param_1[9] = uStack_238;
  param_1[10] = local_234;
  param_1[0xb] = local_230;
  param_1[0xc] = uStack_22c;
  param_1[0xd] = uStack_228;
  param_1[0xe] = uStack_224;
  param_1[0xf] = uStack_220;
  uVar2 = 1;
LAB_00b30f68:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

