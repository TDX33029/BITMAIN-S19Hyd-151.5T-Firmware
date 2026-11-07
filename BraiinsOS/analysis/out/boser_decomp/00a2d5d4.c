// FUN_00a2d5d4 @ 00a2d5d4 size=3820 calls_out=16 calls_in=0
// strings: netmask | gateway | dnsServers

void FUN_00a2d5d4(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint unaff_r10;
  int iVar19;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint unaff_lr;
  int iVar20;
  bool bVar21;
  int *local_2d4;
  int *local_2d0;
  int *local_2cc;
  uint *local_2b4;
  uint local_2ac;
  uint local_2a8;
  uint auStack_2a0 [30];
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  int iStack_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  undefined1 local_e4;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
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
  switch((char)param_2[3]) {
  case '\0':
    iVar10 = *param_2;
    local_2b4 = (uint *)param_2[1];
    uVar16 = 0x80000007;
    param_2[2] = (int)local_2b4;
    iVar8 = *(int *)((int)local_2b4 + 0x10);
    if (*(int *)(iVar8 + 0x40) == 10) {
      unaff_lr = 0xa2dae4;
      iVar8 = thunk_FUN_01bed842(*(int *)(iVar8 + 0x3c) + 8,"dnsServers",10);
      local_2a8 = extraout_r12_00;
      if (iVar8 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)local_2b4;
        goto LAB_00a2dd00;
      }
    }
    else {
      local_2a8 = in_r12;
      if (*(int *)(iVar8 + 0x40) == 7) {
        iVar3 = thunk_FUN_01bed842(*(int *)(iVar8 + 0x3c) + 8,&DAT_004cfb47,7);
        if (iVar3 == 0) {
          param_2[4] = iVar10;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)local_2b4;
          goto LAB_00a2db88;
        }
        iVar3 = thunk_FUN_01bed842(*(int *)(iVar8 + 0x3c) + 8,"netmask",7);
        if (iVar3 == 0) {
          param_2[4] = iVar10;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)local_2b4;
          goto LAB_00a2d764;
        }
        unaff_lr = 0xa2d6a8;
        iVar8 = thunk_FUN_01bed842(*(int *)(iVar8 + 0x3c) + 8,"gateway",7);
        local_2a8 = extraout_r12;
        if (iVar8 == 0) {
          param_2[4] = iVar10;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)local_2b4;
          goto LAB_00a2d860;
        }
      }
    }
    goto LAB_00a2dca0;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0e0ac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e0ac);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      local_2b4 = (uint *)param_2[5];
LAB_00a2db88:
      param_2[6] = iVar10;
      param_2[7] = (int)local_2b4;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0ac);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0ac);
      }
      iVar10 = param_2[6];
    }
    piVar11 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10;
    piVar17 = param_2 + 5;
    param_3 = piVar4[4];
    iVar19 = piVar4[5];
    iVar18 = piVar4[6];
    iVar15 = piVar4[7];
    iVar10 = piVar4[8];
    iVar8 = piVar4[1];
    iVar3 = piVar4[2];
    iVar14 = piVar4[3];
    *piVar17 = *piVar4;
    param_2[6] = iVar8;
    param_2[7] = iVar3;
    param_2[8] = iVar14;
    param_2[9] = param_3 + 0x20;
    param_2[10] = iVar19;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar15;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar8 = piVar4[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar11;
    param_2[0xf] = (int)piVar17;
    param_2[0x10] = iVar8;
LAB_00a2dc1c:
    iVar10 = *piVar11;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar10;
    param_2[0x12] = (int)piVar17;
    param_2[0x13] = iVar8;
    goto LAB_00a2dc34;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar11 = (int *)param_2[0xe];
      piVar17 = (int *)param_2[0xf];
      iVar8 = param_2[0x10];
      goto LAB_00a2dc1c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar10 = param_2[0x11];
    }
LAB_00a2dc34:
    FUN_006666fc(&local_218,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
    puVar5 = auStack_2a0;
    unaff_lr = local_218;
    goto LAB_00a2dc5c;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      local_2b4 = (uint *)param_2[5];
LAB_00a2d764:
      param_2[6] = iVar10;
      param_2[7] = (int)local_2b4;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0ac);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0ac);
      }
      iVar10 = param_2[6];
    }
    piVar11 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0xc;
    piVar17 = param_2 + 5;
    param_3 = piVar4[4];
    iVar19 = piVar4[5];
    iVar18 = piVar4[6];
    iVar15 = piVar4[7];
    iVar10 = piVar4[8];
    iVar8 = piVar4[1];
    iVar3 = piVar4[2];
    iVar14 = piVar4[3];
    *piVar17 = *piVar4;
    param_2[6] = iVar8;
    param_2[7] = iVar3;
    param_2[8] = iVar14;
    param_2[9] = param_3 + 0x20;
    param_2[10] = iVar19;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar15;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar8 = piVar4[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar11;
    param_2[0xf] = (int)piVar17;
    param_2[0x10] = iVar8;
LAB_00a2d958:
    iVar10 = *piVar11;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar10;
    param_2[0x12] = (int)piVar17;
    param_2[0x13] = iVar8;
    goto LAB_00a2d9c0;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar11 = (int *)param_2[0xe];
      piVar17 = (int *)param_2[0xf];
      iVar8 = param_2[0x10];
      goto LAB_00a2d958;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar10 = param_2[0x11];
    }
LAB_00a2d9c0:
    FUN_006666fc(&local_218,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
    puVar5 = auStack_2a0 + 8;
    unaff_lr = local_218;
    goto LAB_00a2dc5c;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      local_2b4 = (uint *)param_2[5];
LAB_00a2d860:
      param_2[6] = iVar10;
      param_2[7] = (int)local_2b4;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0ac);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0ac);
      }
      iVar10 = param_2[6];
    }
    piVar11 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0x18;
    param_3 = piVar4[4];
    piVar17 = param_2 + 5;
    iVar19 = piVar4[5];
    iVar18 = piVar4[6];
    iVar15 = piVar4[7];
    iVar10 = piVar4[8];
    iVar8 = piVar4[1];
    iVar3 = piVar4[2];
    iVar14 = piVar4[3];
    *piVar17 = *piVar4;
    param_2[6] = iVar8;
    param_2[7] = iVar3;
    param_2[8] = iVar14;
    param_2[9] = param_3 + 0x20;
    param_2[10] = iVar19;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar15;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar8 = piVar4[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar11;
    param_2[0xf] = (int)piVar17;
    param_2[0x10] = iVar8;
LAB_00a2da88:
    iVar10 = *piVar11;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar10;
    param_2[0x12] = (int)piVar17;
    param_2[0x13] = iVar8;
    break;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar11 = (int *)param_2[0xe];
      piVar17 = (int *)param_2[0xf];
      iVar8 = param_2[0x10];
      goto LAB_00a2da88;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar10 = param_2[0x11];
    }
    break;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      local_2b4 = (uint *)param_2[5];
LAB_00a2dd00:
      param_2[6] = iVar10;
      param_2[7] = (int)local_2b4;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0ac);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0ac);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0ac);
      }
      iVar10 = param_2[6];
    }
    piVar11 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar17 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0x24;
    iVar8 = piVar4[4];
    iVar20 = piVar4[5];
    iVar19 = piVar4[6];
    iVar18 = piVar4[7];
    iVar10 = piVar4[8];
    iVar3 = piVar4[1];
    iVar14 = piVar4[2];
    iVar15 = piVar4[3];
    *piVar17 = *piVar4;
    param_2[6] = iVar3;
    param_2[7] = iVar14;
    param_2[8] = iVar15;
    param_2[9] = iVar8 + 0x20;
    param_2[10] = iVar20;
    param_2[0xb] = iVar19;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    local_2a8 = piVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2b] = (int)piVar17;
    param_2[0x2a] = (int)piVar11;
    param_2[0x2c] = local_2a8;
LAB_00a2ddac:
    iVar10 = *piVar11;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar10;
    param_2[0x27] = (int)piVar17;
    param_2[0x28] = local_2a8;
LAB_00a2ddcc:
    uVar16 = *(uint *)(iVar10 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xe] = 1;
    param_2[0xf] = uVar16;
    param_2[0x10] = (int)piVar17;
    param_2[0x11] = local_2a8;
    param_2[0x12] = iVar10;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_2b4 = (uint *)(piVar17 + 6);
    if (*(int *)(*(int *)*local_2b4 + 0x10) != 0) {
LAB_00a2de10:
      piVar11 = param_2 + 0x13;
      if (0x690690 < uVar16) {
        uVar9 = 0;
LAB_00a2de24:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,piVar11);
      }
      piVar11 = (int *)(uVar16 * 0x138);
      if (piVar11 == (int *)0x0) {
        iVar8 = 4;
        uVar16 = 0;
      }
      else {
        uVar9 = 4;
        iVar8 = FUN_01298504(piVar11,4);
        if (iVar8 == 0) goto LAB_00a2de24;
      }
      param_2[0x14] = uVar16;
LAB_00a2de80:
      param_2[0x15] = iVar8;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar10 + 8) != 0) {
        uVar12 = *(uint *)(iVar10 + 4);
        uVar16 = 0;
        iVar10 = *(int *)(iVar10 + 8) * 0xc;
        puVar5 = (uint *)((uint)&local_218 | 4);
        do {
          if (*piVar17 == 1) {
            local_b8 = piVar17[1];
            uStack_b4 = piVar17[2];
            uStack_b0 = piVar17[3];
          }
          local_218 = (uint)(*piVar17 == 1);
          local_208 = piVar17[4];
          local_204 = piVar17[5];
          local_200 = *local_2b4;
          local_1fc = piVar17[7];
          iVar8 = piVar17[8];
          *puVar5 = local_b8;
          puVar5[1] = uStack_b4;
          puVar5[2] = uStack_b0;
          local_e4 = 0;
          iVar3 = param_2[0x16];
          local_1f8 = CONCAT31(local_1f8._1_3_,(char)iVar8);
          local_1f4 = local_2a8;
          local_1f0 = uVar12;
          local_1ec = uVar16;
          if (iVar3 == param_2[0x14]) {
            FUN_00f9d6bc(param_2 + 0x14);
          }
          uVar12 = uVar12 + 0xc;
          FUN_01bed4e2(iVar3 * 0x138 + param_2[0x15],&local_218,0x138);
          uVar16 = uVar16 + 1;
          iVar10 = iVar10 + -0xc;
          param_2[0x16] = iVar3 + 1;
        } while (iVar10 != 0);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_00a14064(&local_218);
      local_b8 = local_218;
      uStack_b4 = local_214;
      uStack_b0 = local_210;
      uStack_ac = local_20c;
      local_a8 = local_208;
      uStack_a4 = local_204;
      uStack_a0 = local_200;
      uStack_9c = local_1fc;
      uStack_98 = local_1f8;
      local_94 = local_1f4;
      uStack_90 = local_1f0;
      uStack_8c = local_1ec;
      iStack_88 = iStack_1e8;
      iStack_84 = iStack_1e4;
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
      param_2[0x24] = iStack_1e8;
      param_2[0x25] = iStack_1e4;
      goto switchD_00a2db00_caseD_3;
    }
LAB_00a2e09c:
    piVar11 = param_2 + 0x13;
    if (0x1999999 < uVar16) {
      uVar9 = 0;
LAB_00a2e0b0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,piVar11);
    }
    piVar11 = (int *)(uVar16 * 0x50);
    if (piVar11 == (int *)0x0) {
      iVar8 = 4;
      uVar16 = 0;
    }
    else {
      uVar9 = 4;
      iVar8 = FUN_01298504(piVar11,4);
      if (iVar8 == 0) goto LAB_00a2e0b0;
    }
    param_2[0x14] = uVar16;
LAB_00a2e118:
    piVar11 = param_2 + 0x14;
    param_2[0x15] = iVar8;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar10 + 8) != 0) {
      iVar15 = 0;
      iVar8 = *(int *)(iVar10 + 8) * 0xc;
      iVar14 = param_2[0x16];
      iVar3 = iVar14 * 0x50;
      iVar10 = *(int *)(iVar10 + 4);
      do {
        iVar18 = piVar17[4];
        iVar19 = piVar17[5];
        iVar20 = piVar17[6];
        piVar4 = (int *)0x0;
        if (*piVar17 != 0) {
          piVar4 = piVar17 + 1;
        }
        iVar6 = piVar17[7];
        iVar1 = piVar17[8];
        iVar13 = iVar14 + iVar15;
        if (iVar13 == *piVar11) {
          FUN_00a20f30(piVar11);
        }
        iVar8 = iVar8 + -0xc;
        puVar7 = (undefined4 *)(param_2[0x15] + iVar3);
        *puVar7 = 1;
        iVar3 = iVar3 + 0x50;
        puVar7[3] = piVar4;
        *(char *)(puVar7 + 8) = (char)iVar1;
        puVar7[4] = iVar18;
        puVar7[2] = iVar15;
        iVar15 = iVar15 + 1;
        puVar7[5] = iVar19;
        puVar7[9] = iVar10;
        puVar7[6] = iVar20;
        *(undefined1 *)(puVar7 + 0x13) = 0;
        puVar7[10] = local_2a8;
        puVar7[1] = 0;
        puVar7[7] = iVar6;
        param_2[0x16] = iVar13 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar8 != 0);
    }
    local_80 = *piVar11;
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_00a147d4(&local_218);
    local_b8 = local_218;
    uStack_b4 = local_214;
    uStack_b0 = local_210;
    uStack_ac = local_20c;
    local_a8 = local_208;
    uStack_a4 = local_204;
    uStack_a0 = local_200;
    uStack_9c = local_1fc;
    uStack_98 = local_1f8;
    local_94 = local_1f4;
    uStack_90 = local_1f0;
    uStack_8c = local_1ec;
    iStack_88 = iStack_1e8;
    iStack_84 = iStack_1e4;
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
    param_2[0x24] = iStack_1e8;
    param_2[0x25] = iStack_1e4;
switchD_00a2db00_caseD_4:
    FUN_00a09a14(&local_218,param_2 + 0x18,param_3);
    uVar16 = local_204;
    unaff_r10 = local_208;
    param_3 = local_218;
    if (local_218 != 3) {
      puVar5 = &local_70;
      local_2ac = local_214;
      local_2b4 = (uint *)local_210;
      local_2a8 = local_20c;
      local_70 = local_200;
      uStack_6c = local_1fc;
      uStack_68 = local_1f8;
      uStack_64 = local_1f4;
      local_60 = local_1f0;
      uStack_5c = local_1ec;
      iStack_58 = iStack_1e8;
      iStack_54 = iStack_1e4;
      uStack_50 = uStack_1e0;
      FUN_011a1308(param_2 + 0x18);
      goto LAB_00a2e320;
    }
    uVar2 = 4;
LAB_00a2e2b0:
    local_2cc = param_2 + 0x29;
    *(undefined1 *)(param_2 + 0x13) = uVar2;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)local_2cc = 3;
    *param_1 = 2;
    uVar2 = 10;
    goto LAB_00a2dcd8;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar11 = (int *)param_2[0x2a];
      piVar17 = (int *)param_2[0x2b];
      local_2a8 = param_2[0x2c];
      goto LAB_00a2ddac;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      iVar10 = param_2[0x26];
      piVar17 = (int *)param_2[0x27];
      local_2a8 = param_2[0x28];
      goto LAB_00a2ddcc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      uVar16 = param_2[0xf];
      piVar17 = (int *)param_2[0x10];
      local_2b4 = (uint *)(piVar17 + 6);
      local_2a8 = param_2[0x11];
      iVar10 = param_2[0x12];
      if (*(int *)(*(int *)*local_2b4 + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_00a2e09c;
        param_2[0x14] = 0;
        iVar8 = 4;
        goto LAB_00a2e118;
      }
      if (param_2[0xe] != 0) goto LAB_00a2de10;
      param_2[0x14] = 0;
      iVar8 = 4;
      goto LAB_00a2de80;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x04':
      goto switchD_00a2db00_caseD_4;
    }
switchD_00a2db00_caseD_3:
    FUN_009ed994(&local_218,param_2 + 0x18,param_3);
    uVar16 = local_204;
    unaff_r10 = local_208;
    param_3 = local_218;
    if (local_218 == 3) {
      uVar2 = 3;
      goto LAB_00a2e2b0;
    }
    local_2ac = local_214;
    puVar5 = &local_e0;
    local_2b4 = (uint *)local_210;
    local_2a8 = local_20c;
    local_e0 = local_200;
    uStack_dc = local_1fc;
    uStack_d8 = local_1f8;
    uStack_d4 = local_1f4;
    local_d0 = local_1f0;
    uStack_cc = local_1ec;
    iStack_c8 = iStack_1e8;
    iStack_c4 = iStack_1e4;
    uStack_c0 = uStack_1e0;
    FUN_0093d2b0(param_2 + 0x18);
LAB_00a2e320:
    local_2d4 = param_2 + 0x2d;
    local_2cc = param_2 + 0x29;
    local_2d0 = param_2 + 0xe;
    bVar21 = param_3 != 2;
    if (bVar21) {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      local_3c = puVar5[3];
      local_38 = puVar5[4];
      uStack_34 = puVar5[5];
      uStack_30 = puVar5[6];
      uStack_2c = puVar5[7];
      uStack_28 = puVar5[8];
    }
    else {
      uVar16 = 0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_0093d3f0(local_2d0);
    *(undefined1 *)local_2d4 = 1;
    *(undefined1 *)local_2cc = 1;
    if (bVar21) {
      uStack_224 = uStack_2c;
      uStack_220 = uStack_28;
    }
    uStack_228 = uStack_30;
    auStack_2a0[0x1d] = uStack_34;
    auStack_2a0[0x1c] = local_38;
    auStack_2a0[0x1b] = local_3c;
    auStack_2a0[0x1a] = uStack_40;
    auStack_2a0[0x19] = uStack_44;
    auStack_2a0[0x18] = local_48;
    uVar12 = (uint)bVar21;
    unaff_lr = local_2ac;
    goto LAB_00a2dca4;
  }
  FUN_006666fc(&local_218,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
  puVar5 = auStack_2a0 + 0x10;
  unaff_lr = local_218;
LAB_00a2dc5c:
  uVar16 = 0x80000002;
  *puVar5 = local_204;
  puVar5[1] = local_200;
  puVar5[2] = local_1fc;
  puVar5[3] = local_1f8;
  puVar5[4] = local_1f4;
  puVar5[5] = local_1f0;
  puVar5[6] = local_1ec;
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  auStack_2a0[0x18] = *puVar5;
  auStack_2a0[0x19] = puVar5[1];
  auStack_2a0[0x1a] = puVar5[2];
  auStack_2a0[0x1b] = puVar5[3];
  auStack_2a0[0x1c] = puVar5[4];
  auStack_2a0[0x1d] = puVar5[5];
  uStack_228 = puVar5[6];
  local_2b4 = (uint *)local_214;
  unaff_r10 = local_20c;
  local_2a8 = local_210;
LAB_00a2dca0:
  uVar12 = 0;
LAB_00a2dca4:
  *param_1 = uVar12;
  param_1[1] = param_3;
  param_1[2] = unaff_lr;
  param_1[3] = (uint)local_2b4;
  param_1[4] = local_2a8;
  param_1[5] = unaff_r10;
  param_1[6] = uVar16;
  param_1[7] = auStack_2a0[0x18];
  param_1[8] = auStack_2a0[0x19];
  param_1[9] = auStack_2a0[0x1a];
  param_1[10] = auStack_2a0[0x1b];
  param_1[0xb] = auStack_2a0[0x1c];
  param_1[0xc] = auStack_2a0[0x1d];
  param_1[0xd] = uStack_228;
  param_1[0xe] = uStack_224;
  param_1[0xf] = uStack_220;
  uVar2 = 1;
LAB_00a2dcd8:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

