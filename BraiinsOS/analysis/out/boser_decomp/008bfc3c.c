// FUN_008bfc3c @ 008bfc3c size=1892 calls_out=14 calls_in=0
// strings: 

void FUN_008bfc3c(uint *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int *local_278;
  int *local_26c;
  int *local_260;
  uint *local_258;
  int local_254;
  int *local_250;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  int iStack_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int iStack_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined1 local_114;
  uint local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  uint local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x1f]) {
  case '\0':
    iVar15 = *(int *)param_2[0x1c];
    *(undefined1 *)(param_2 + 0x1b) = 0;
    local_250 = (int *)param_2[0x1d];
    local_254 = param_2[0x1e];
    param_2[0x18] = iVar15;
    param_2[0x1a] = local_254;
    param_2[0x19] = (int)local_250;
LAB_008bfcc8:
    uVar17 = *(uint *)(iVar15 + 8);
    *(undefined1 *)(param_2 + 5) = 0;
    *param_2 = 1;
    param_2[1] = uVar17;
    param_2[2] = (int)local_250;
    param_2[3] = local_254;
    param_2[4] = iVar15;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    local_258 = (uint *)(local_250 + 6);
    if (*(int *)(*(int *)*local_258 + 0x10) != 0) {
LAB_008bfd0c:
      if (0x690690 < uVar17) {
        uVar12 = 0;
        piVar11 = local_250;
LAB_008bfd20:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,piVar11);
      }
      piVar11 = (int *)(uVar17 * 0x138);
      if (piVar11 == (int *)0x0) {
        iVar3 = 4;
        uVar17 = 0;
      }
      else {
        uVar12 = 4;
        iVar3 = FUN_01298504(piVar11,4);
        if (iVar3 == 0) goto LAB_008bfd20;
      }
      param_2[6] = uVar17;
LAB_008bfe18:
      local_260 = param_2 + 6;
      param_2[7] = iVar3;
      param_2[8] = 0;
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      if (*(int *)(iVar15 + 8) != 0) {
        iVar3 = *(int *)(iVar15 + 4);
        iVar18 = 0;
        iVar15 = *(int *)(iVar15 + 8) * 0xc;
        puVar4 = (uint *)((uint)&local_248 | 4);
        do {
          if (*local_250 == 1) {
            local_d8 = local_250[1];
            uStack_d4 = local_250[2];
            uStack_d0 = local_250[3];
          }
          local_248 = (uint)(*local_250 == 1);
          local_238 = local_250[4];
          local_234 = local_250[5];
          local_230 = *local_258;
          local_22c = local_250[7];
          iVar10 = local_250[8];
          *puVar4 = local_d8;
          puVar4[1] = uStack_d4;
          puVar4[2] = uStack_d0;
          local_228 = CONCAT31(local_228._1_3_,(char)iVar10);
          local_114 = 0;
          iVar10 = param_2[8];
          local_224 = local_254;
          local_220 = iVar3;
          local_21c = iVar18;
          if (iVar10 == param_2[6]) {
            FUN_00f9d6bc(local_260);
          }
          iVar3 = iVar3 + 0xc;
          FUN_01bed4e2(iVar10 * 0x138 + param_2[7],&local_248,0x138);
          iVar18 = iVar18 + 1;
          iVar15 = iVar15 + -0xc;
          param_2[8] = iVar10 + 1;
        } while (iVar15 != 0);
      }
      local_a0 = *local_260;
      iStack_9c = param_2[7];
      iStack_98 = param_2[8];
      FUN_00a14064(&local_248);
      local_d8 = local_248;
      uStack_d4 = uStack_244;
      uStack_d0 = uStack_240;
      iStack_cc = iStack_23c;
      local_c8 = local_238;
      uStack_c4 = local_234;
      uStack_c0 = local_230;
      iStack_bc = local_22c;
      iStack_b8 = local_228;
      local_b4 = local_224;
      iStack_b0 = local_220;
      iStack_ac = local_21c;
      iStack_a8 = iStack_218;
      uStack_a4 = uStack_214;
      param_2[10] = local_248;
      param_2[0xb] = uStack_244;
      param_2[0xc] = uStack_240;
      param_2[0xd] = iStack_23c;
      param_2[0xe] = local_238;
      param_2[0xf] = local_234;
      param_2[0x10] = local_230;
      param_2[0x11] = local_22c;
      param_2[0x12] = local_228;
      param_2[0x13] = local_224;
      param_2[0x14] = local_220;
      param_2[0x15] = local_21c;
      param_2[0x16] = iStack_218;
      param_2[0x17] = uStack_214;
      goto LAB_008bffa0;
    }
LAB_008c0030:
    if (0x1999999 < uVar17) {
      uVar12 = 0;
      piVar11 = local_250;
LAB_008c0048:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,piVar11);
    }
    piVar11 = (int *)(uVar17 * 0x50);
    if (piVar11 == (int *)0x0) {
      iVar3 = 4;
      uVar17 = 0;
    }
    else {
      uVar12 = 4;
      iVar3 = FUN_01298504(piVar11,4);
      if (iVar3 == 0) goto LAB_008c0048;
    }
    param_2[6] = uVar17;
LAB_008c00a8:
    piVar11 = param_2 + 6;
    param_2[7] = iVar3;
    param_2[8] = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    if (*(int *)(iVar15 + 8) != 0) {
      iVar19 = 0;
      iVar3 = *(int *)(iVar15 + 8) * 0xc;
      iVar10 = param_2[8];
      iVar18 = iVar10 * 0x50;
      iVar15 = *(int *)(iVar15 + 4);
      do {
        iVar5 = local_250[4];
        iVar6 = local_250[5];
        iVar7 = local_250[6];
        iVar8 = local_250[7];
        piVar16 = (int *)0x0;
        if (*local_250 != 0) {
          piVar16 = local_250 + 1;
        }
        iVar1 = local_250[8];
        iVar13 = iVar10 + iVar19;
        if (iVar13 == *piVar11) {
          FUN_00a20f30(piVar11);
        }
        iVar3 = iVar3 + -0xc;
        puVar9 = (undefined4 *)(param_2[7] + iVar18);
        *puVar9 = 1;
        puVar9[1] = 0;
        puVar9[2] = iVar19;
        iVar19 = iVar19 + 1;
        iVar18 = iVar18 + 0x50;
        *(undefined1 *)(puVar9 + 0x13) = 0;
        puVar9[4] = iVar5;
        puVar9[5] = iVar6;
        puVar9[9] = iVar15;
        puVar9[6] = iVar7;
        puVar9[10] = local_254;
        *(char *)(puVar9 + 8) = (char)iVar1;
        puVar9[3] = piVar16;
        puVar9[7] = iVar8;
        param_2[8] = iVar13 + 1;
        iVar15 = iVar15 + 0xc;
      } while (iVar3 != 0);
    }
    local_a0 = *piVar11;
    iStack_9c = param_2[7];
    iStack_98 = param_2[8];
    FUN_00a147d4(&local_248);
    local_d8 = local_248;
    uStack_d4 = uStack_244;
    uStack_d0 = uStack_240;
    iStack_cc = iStack_23c;
    local_c8 = local_238;
    uStack_c4 = local_234;
    uStack_c0 = local_230;
    iStack_bc = local_22c;
    iStack_b8 = local_228;
    local_b4 = local_224;
    iStack_b0 = local_220;
    iStack_ac = local_21c;
    iStack_a8 = iStack_218;
    uStack_a4 = uStack_214;
    param_2[10] = local_248;
    param_2[0xb] = uStack_244;
    param_2[0xc] = uStack_240;
    param_2[0xd] = iStack_23c;
    param_2[0xe] = local_238;
    param_2[0xf] = local_234;
    param_2[0x10] = local_230;
    param_2[0x11] = local_22c;
    param_2[0x12] = local_228;
    param_2[0x13] = local_224;
    param_2[0x14] = local_220;
    param_2[0x15] = local_21c;
    param_2[0x16] = iStack_218;
    param_2[0x17] = uStack_214;
LAB_008c0210:
    FUN_00a09a14(&local_248,param_2 + 10,param_3);
    uVar20 = local_234;
    uVar17 = local_248;
    if (local_248 != 3) {
      puVar4 = (uint *)((uint)&local_248 | 4);
      puVar14 = &local_68;
      local_68 = *puVar4;
      uStack_64 = puVar4[1];
      uStack_60 = puVar4[2];
      puVar4 = &local_90;
      local_250 = (int *)local_238;
      local_90 = local_230;
      iStack_8c = local_22c;
      iStack_88 = local_228;
      iStack_84 = local_224;
      local_80 = local_220;
      iStack_7c = local_21c;
      iStack_78 = iStack_218;
      uStack_74 = uStack_214;
      uStack_70 = uStack_210;
      FUN_00bd7780(param_2 + 10);
      goto LAB_008c0298;
    }
    uVar2 = 4;
LAB_008c0238:
    local_278 = param_2 + 5;
    *(undefined1 *)local_278 = uVar2;
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
      iVar15 = param_2[0x18];
      local_250 = (int *)param_2[0x19];
      local_254 = param_2[0x1a];
      goto LAB_008bfcc8;
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
      local_250 = (int *)param_2[2];
      *(undefined1 *)((int)param_2 + 0x15) = 1;
      uVar17 = param_2[1];
      local_258 = (uint *)(local_250 + 6);
      local_254 = param_2[3];
      iVar15 = param_2[4];
      if (*(int *)(*(int *)*local_258 + 0x10) == 0) {
        if (*param_2 != 0) goto LAB_008c0030;
        param_2[6] = 0;
        iVar3 = 4;
        goto LAB_008c00a8;
      }
      if (*param_2 != 0) goto LAB_008bfd0c;
      param_2[6] = 0;
      iVar3 = 4;
      goto LAB_008bfe18;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_008c0210;
    }
LAB_008bffa0:
    FUN_009ed994(&local_248,param_2 + 10,param_3);
    uVar20 = local_234;
    uVar17 = local_248;
    if (local_248 == 3) {
      uVar2 = 3;
      goto LAB_008c0238;
    }
    puVar4 = (uint *)((uint)&local_248 | 4);
    puVar14 = &local_e8;
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    puVar4 = &local_110;
    local_250 = (int *)local_238;
    local_110 = local_230;
    iStack_10c = local_22c;
    iStack_108 = local_228;
    iStack_104 = local_224;
    local_100 = local_220;
    iStack_fc = local_21c;
    iStack_f8 = iStack_218;
    uStack_f4 = uStack_214;
    uStack_f0 = uStack_210;
    FUN_008c0550(param_2 + 10);
LAB_008c0298:
    local_26c = param_2 + 0x1b;
    if (uVar17 != 2) {
      local_58 = *puVar4;
      uStack_54 = puVar4[1];
      uStack_50 = puVar4[2];
      uStack_4c = puVar4[3];
      local_48 = puVar4[4];
      uStack_44 = puVar4[5];
      uStack_40 = puVar4[6];
      uStack_3c = puVar4[7];
      uStack_38 = puVar4[8];
      local_30 = *puVar14;
      uStack_2c = puVar14[1];
      uStack_28 = puVar14[2];
    }
    else {
      local_30 = *puVar14;
      uStack_2c = puVar14[1];
      uStack_28 = puVar14[2];
      uVar20 = 0x80000006;
      local_250 = (int *)uStack_214;
    }
    uVar2 = 1;
    *param_1 = (uint)(uVar17 != 2);
    param_1[1] = uVar17;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    param_1[2] = local_30;
    param_1[3] = uStack_2c;
    param_1[4] = uStack_28;
    param_1[5] = (uint)local_250;
    param_1[6] = uVar20;
    param_1[7] = local_58;
    param_1[8] = uStack_54;
    param_1[9] = uStack_50;
    param_1[10] = uStack_4c;
    param_1[0xb] = local_48;
    param_1[0xc] = uStack_44;
    param_1[0xd] = uStack_40;
    param_1[0xe] = uStack_3c;
    param_1[0xf] = uStack_38;
    *(undefined1 *)(param_2 + 5) = 1;
    FUN_008c0504(param_2);
    uVar17 = *param_1;
    *(undefined1 *)local_26c = 1;
    if (uVar17 != 2) goto LAB_008c035c;
  }
  uVar2 = 3;
  *param_1 = 2;
LAB_008c035c:
  *(undefined1 *)(param_2 + 0x1f) = uVar2;
  return;
}

