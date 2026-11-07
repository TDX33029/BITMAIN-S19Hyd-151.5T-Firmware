// FUN_008b5b48 @ 008b5b48 size=1668 calls_out=14 calls_in=1
// strings: 

void FUN_008b5b48(uint *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  int unaff_r6;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_2d8;
  int *local_2d4;
  int *local_2cc;
  uint local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int local_2a4;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  uint uStack_294;
  undefined4 uStack_290;
  int local_218;
  int local_140;
  int local_13c;
  uint local_138;
  uint local_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 local_118;
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
  int iStack_d4;
  int iStack_d0;
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
  switch((char)param_2[0x1b]) {
  case '\0':
    iVar20 = param_2[0x18];
    local_2cc = (int *)param_2[0x19];
    local_2d8 = param_2[0x1a];
    puVar18 = *(undefined **)(iVar20 + 8);
    param_2[3] = local_2d8;
    *param_2 = 1;
    param_2[1] = (int)puVar18;
    param_2[2] = (int)local_2cc;
    param_2[4] = iVar20;
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    local_2d4 = local_2cc + 6;
    if (*(int *)(*(int *)*local_2d4 + 0x10) == 0) {
LAB_008b5eb4:
      if (&UNK_009d89d8 < puVar18) {
        uVar14 = 0;
LAB_008b5ec8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,unaff_r6);
      }
      unaff_r6 = (int)puVar18 * 0xd0;
      if (unaff_r6 == 0) {
        iVar3 = 8;
        puVar18 = (undefined *)0x0;
      }
      else {
        uVar14 = 8;
        iVar3 = FUN_01298504(unaff_r6,8);
        if (iVar3 == 0) goto LAB_008b5ec8;
      }
      param_2[6] = (int)puVar18;
LAB_008b5f30:
      piVar6 = param_2 + 6;
      param_2[7] = iVar3;
      param_2[8] = 0;
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      if (*(int *)(iVar20 + 8) != 0) {
        iVar3 = *(int *)(iVar20 + 8) << 2;
        iVar19 = 0;
        iVar15 = param_2[8];
        iVar13 = iVar15 * 0xd0 + 0xcc;
        iVar20 = *(int *)(iVar20 + 4);
        do {
          iVar7 = local_2cc[5];
          iVar8 = local_2cc[7];
          iVar11 = local_2cc[4];
          piVar16 = (int *)0x0;
          if (*local_2cc != 0) {
            piVar16 = local_2cc + 1;
          }
          iVar1 = local_2cc[8];
          iVar9 = *local_2d4;
          iVar21 = iVar15 + iVar19;
          if (iVar21 == *piVar6) {
            FUN_00a20db0(piVar6);
          }
          iVar3 = iVar3 + -4;
          puVar10 = (undefined1 *)(param_2[7] + iVar13);
          *puVar10 = 0;
          iVar13 = iVar13 + 0xd0;
          puVar10[-4] = (char)iVar1;
          *(int *)(puVar10 + -0xc) = iVar9;
          *(int *)(puVar10 + -8) = iVar8;
          *(int *)(puVar10 + -0x28) = local_2d8;
          *(undefined4 *)(puVar10 + -0x24) = 1;
          *(undefined4 *)(puVar10 + -0x20) = 0;
          *(int *)(puVar10 + -0x1c) = iVar19;
          iVar19 = iVar19 + 1;
          *(int *)(puVar10 + -0x2c) = iVar20;
          *(int *)(puVar10 + -0x14) = iVar11;
          *(int **)(puVar10 + -0x18) = piVar16;
          *(int *)(puVar10 + -0x10) = iVar7;
          param_2[8] = iVar21 + 1;
          iVar20 = iVar20 + 4;
        } while (iVar3 != 0);
      }
      local_a0 = *piVar6;
      iStack_9c = param_2[7];
      iStack_98 = param_2[8];
      FUN_00a14ec8(&local_2c8);
      local_d8 = local_2c8;
      iStack_d4 = iStack_2c4;
      iStack_d0 = iStack_2c0;
      iStack_cc = iStack_2bc;
      local_c8 = local_2b8;
      uStack_c4 = local_2b4;
      uStack_c0 = local_2b0;
      iStack_bc = iStack_2ac;
      iStack_b8 = iStack_2a8;
      local_b4 = local_2a4;
      iStack_b0 = local_2a0;
      iStack_ac = iStack_29c;
      iStack_a8 = iStack_298;
      uStack_a4 = uStack_294;
      param_2[10] = local_2c8;
      param_2[0xb] = iStack_2c4;
      param_2[0xc] = iStack_2c0;
      param_2[0xd] = iStack_2bc;
      param_2[0xe] = local_2b8;
      param_2[0xf] = local_2b4;
      param_2[0x10] = local_2b0;
      param_2[0x11] = iStack_2ac;
      param_2[0x12] = iStack_2a8;
      param_2[0x13] = local_2a4;
      param_2[0x14] = local_2a0;
      param_2[0x15] = iStack_29c;
      param_2[0x16] = iStack_298;
      param_2[0x17] = uStack_294;
      goto LAB_008b609c;
    }
LAB_008b5bd4:
    if (&UNK_004a7904 < puVar18) {
      uVar14 = 0;
LAB_008b5be8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,unaff_r6);
    }
    unaff_r6 = (int)puVar18 * 0x1b8;
    if (unaff_r6 == 0) {
      iVar3 = 8;
      puVar18 = (undefined *)0x0;
    }
    else {
      uVar14 = 8;
      iVar3 = FUN_01298504(unaff_r6,8);
      if (iVar3 == 0) goto LAB_008b5be8;
    }
    param_2[6] = (int)puVar18;
LAB_008b5cc8:
    param_2[7] = iVar3;
    param_2[8] = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    if (*(int *)(iVar20 + 8) != 0) {
      iVar3 = *(int *)(iVar20 + 4);
      iVar20 = *(int *)(iVar20 + 8) << 2;
      iVar15 = 0;
      do {
        if (*local_2cc == 1) {
          local_d8 = local_2cc[1];
          iStack_d4 = local_2cc[2];
          iStack_d0 = local_2cc[3];
        }
        local_138 = (uint)(*local_2cc == 1);
        local_128 = local_2cc[4];
        local_124 = local_2cc[5];
        local_11c = local_2cc[7];
        local_118 = (undefined1)local_2cc[8];
        local_120 = *local_2d4;
        local_134 = local_d8;
        iStack_130 = iStack_d4;
        iStack_12c = iStack_d0;
        local_114 = 0;
        iVar13 = param_2[8];
        local_140 = local_2d8;
        local_218 = iVar15;
        local_13c = iVar3;
        if (iVar13 == param_2[6]) {
          FUN_00a20e10(param_2 + 6);
        }
        iVar3 = iVar3 + 4;
        FUN_01bed4e2(iVar13 * 0x1b8 + param_2[7],&local_2c8,0x1b8);
        iVar15 = iVar15 + 1;
        iVar20 = iVar20 + -4;
        param_2[8] = iVar13 + 1;
      } while (iVar20 != 0);
    }
    local_a0 = param_2[6];
    iStack_9c = param_2[7];
    iStack_98 = param_2[8];
    FUN_00a16c14(&local_2c8);
    local_d8 = local_2c8;
    iStack_d4 = iStack_2c4;
    iStack_d0 = iStack_2c0;
    iStack_cc = iStack_2bc;
    local_c8 = local_2b8;
    uStack_c4 = local_2b4;
    uStack_c0 = local_2b0;
    iStack_bc = iStack_2ac;
    iStack_b8 = iStack_2a8;
    local_b4 = local_2a4;
    iStack_b0 = local_2a0;
    iStack_ac = iStack_29c;
    iStack_a8 = iStack_298;
    uStack_a4 = uStack_294;
    param_2[10] = local_2c8;
    param_2[0xb] = iStack_2c4;
    param_2[0xc] = iStack_2c0;
    param_2[0xd] = iStack_2bc;
    param_2[0xe] = local_2b8;
    param_2[0xf] = local_2b4;
    param_2[0x10] = local_2b0;
    param_2[0x11] = iStack_2ac;
    param_2[0x12] = iStack_2a8;
    param_2[0x13] = local_2a4;
    param_2[0x14] = local_2a0;
    param_2[0x15] = iStack_29c;
    param_2[0x16] = iStack_298;
    param_2[0x17] = uStack_294;
LAB_008b5e38:
    FUN_00a032ac(&local_2c8,param_2 + 10,param_3);
    if (local_2c8 != 3) {
      puVar4 = (uint *)((uint)&local_2c8 | 4);
      puVar17 = &local_e8;
      local_e8 = *puVar4;
      uStack_e4 = puVar4[1];
      uStack_e0 = puVar4[2];
      puVar4 = &local_110;
      local_2cc = (int *)local_2b8;
      local_110 = local_2b0;
      iStack_10c = iStack_2ac;
      iStack_108 = iStack_2a8;
      iStack_104 = local_2a4;
      local_100 = local_2a0;
      iStack_fc = iStack_29c;
      iStack_f8 = iStack_298;
      uStack_f4 = uStack_294;
      uStack_f0 = uStack_290;
      FUN_008b6304(param_2 + 10);
      goto LAB_008b6120;
    }
    uVar2 = 3;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21bdc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21bdc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[5]) {
    case '\0':
      local_2cc = (int *)param_2[2];
      local_2d8 = param_2[3];
      *(undefined1 *)((int)param_2 + 0x15) = 1;
      local_2d4 = local_2cc + 6;
      iVar20 = param_2[4];
      puVar18 = (undefined *)param_2[1];
      if (*(int *)(*(int *)*local_2d4 + 0x10) != 0) {
        if (*param_2 != 0) goto LAB_008b5bd4;
        param_2[6] = 0;
        iVar3 = 8;
        goto LAB_008b5cc8;
      }
      if (*param_2 != 0) goto LAB_008b5eb4;
      param_2[6] = 0;
      iVar3 = 8;
      goto LAB_008b5f30;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      goto LAB_008b5e38;
    case '\x04':
    }
LAB_008b609c:
    FUN_00a0a79c(&local_2c8,param_2 + 10,param_3);
    if (local_2c8 != 3) {
      puVar5 = (uint *)((uint)&local_2c8 | 4);
      puVar17 = &local_68;
      puVar4 = &local_90;
      local_68 = *puVar5;
      uStack_64 = puVar5[1];
      uStack_60 = puVar5[2];
      local_2cc = (int *)local_2b8;
      local_90 = local_2b0;
      iStack_8c = iStack_2ac;
      iStack_88 = iStack_2a8;
      iStack_84 = local_2a4;
      local_80 = local_2a0;
      iStack_7c = iStack_29c;
      iStack_78 = iStack_298;
      uStack_74 = uStack_294;
      uStack_70 = uStack_290;
      FUN_008b6444(param_2 + 10);
LAB_008b6120:
      if (local_2c8 != 2) {
        local_58 = *puVar4;
        uStack_54 = puVar4[1];
        uStack_50 = puVar4[2];
        uStack_4c = puVar4[3];
        local_48 = puVar4[4];
        uStack_44 = puVar4[5];
        uStack_40 = puVar4[6];
        uStack_3c = puVar4[7];
        uStack_38 = puVar4[8];
        local_30 = *puVar17;
        uStack_2c = puVar17[1];
        uStack_28 = puVar17[2];
      }
      else {
        local_30 = *puVar17;
        uStack_2c = puVar17[1];
        uStack_28 = puVar17[2];
        local_2b4 = 0x80000006;
        local_2cc = (int *)uStack_294;
      }
      *param_1 = (uint)(local_2c8 != 2);
      param_1[1] = local_2c8;
      uVar12 = 1;
      *(undefined1 *)((int)param_2 + 0x15) = 0;
      param_1[2] = local_30;
      param_1[3] = uStack_2c;
      param_1[4] = uStack_28;
      param_1[5] = (uint)local_2cc;
      param_1[6] = local_2b4;
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
      FUN_008b62b8(param_2);
      goto LAB_008b61bc;
    }
    uVar2 = 4;
  }
  uVar12 = 3;
  *(undefined1 *)(param_2 + 5) = uVar2;
  *param_1 = 2;
LAB_008b61bc:
  *(undefined1 *)(param_2 + 0x1b) = uVar12;
  return;
}

