// FUN_00a08b00 @ 00a08b00 size=2988 calls_out=17 calls_in=1
// strings: TryMaybeDone polled after value taken | assertion failed: prev

/* WARNING: Removing unreachable block (ram,0x00a093f4) */
/* WARNING: Removing unreachable block (ram,0x00a09518) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a08b00(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int *piVar20;
  undefined4 uVar21;
  int *piVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  int *piVar26;
  undefined1 *puVar27;
  int iVar28;
  int *piVar29;
  uint uVar30;
  undefined8 uVar31;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 *local_1f0;
  undefined4 local_1ec;
  undefined1 local_188 [24];
  undefined1 *local_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  undefined1 *local_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *local_134;
  undefined1 *local_130;
  undefined1 *local_12c;
  undefined1 *local_128;
  undefined1 *local_124;
  undefined1 *local_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  undefined1 *puStack_114;
  undefined1 *local_110;
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined1 *local_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined1 *local_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 *puStack_94;
  undefined1 *local_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *puStack_50;
  undefined1 *local_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  
  piVar22 = param_2 + 10;
  if (*piVar22 != -0x80000000) {
    puVar2 = (undefined4 *)((uint)&local_150 | 4);
    puVar4 = (undefined4 *)((uint)&local_70 | 4);
    piVar20 = (int *)*param_3;
    puVar13 = (undefined4 *)((uint)&local_b8 | 4);
    puVar5 = (undefined4 *)((uint)&local_138 | 4);
    puVar6 = (uint *)(param_2 + 2);
    puVar7 = (undefined4 *)((uint)local_188 | 4);
    piVar29 = param_2 + 4;
LAB_00a08e9c:
    if (param_2[9] == 0) {
LAB_00a08f2c:
      do {
        DataMemoryBarrier(0xb);
        if (param_2[5] != 0) {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(param_2[5] + 0x78) == *(int *)(*piVar29 + 8) + 8);
        }
        iVar11 = *piVar29;
        FUN_01348e78(iVar11 + 0xc,piVar20);
        while( true ) {
          uVar31 = FUN_009d0294(iVar11 + 8);
          puVar14 = (uint *)((ulonglong)uVar31 >> 0x20);
          if ((int)uVar31 != 0) {
            if ((int)uVar31 == 1) {
              puVar19 = (undefined1 *)0x3;
              if (param_2[5] == 0) {
                *(undefined1 *)(param_2 + 6) = 1;
                puVar19 = (undefined1 *)0x2;
              }
            }
            else {
              (**(code **)(*piVar20 + 8))(piVar20[1]);
              puVar19 = (undefined1 *)0x3;
            }
            puVar27 = local_1f0;
            goto LAB_00a09308;
          }
          if ((*puVar14 & 1) != 0) break;
          puVar14 = puVar14 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar8 = *puVar14;
            bVar1 = (bool)hasExclusiveAccess(puVar14);
          } while (!bVar1);
          *puVar14 = uVar8 - 1;
          if (uVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a96da4();
          }
          iVar11 = *piVar29;
        }
        piVar9 = (int *)FUN_009cf2a4(piVar29,puVar14);
        piVar26 = piVar9 + 0x25;
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar26;
          bVar1 = (bool)hasExclusiveAccess(piVar26);
        } while (!bVar1);
        *(char *)piVar26 = '\0';
        DataMemoryBarrier(0xb);
        if ((char)iVar11 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
        }
        *(undefined1 *)((int)piVar9 + 0x95) = 0;
        uVar8 = puVar14[2];
        uVar30 = puVar14[3];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)puVar14[0x1c]) {
        case '\0':
          *(undefined1 *)(puVar14 + 0x1b) = 0;
          puVar10 = puVar14 + 4;
          puVar15 = puVar14 + 0xd;
          uVar16 = puVar14[0xe];
          puVar14[0xf] = (uint)puVar15;
          puVar14[0x10] = (uint)puVar10;
          puVar14[0x11] = uVar16;
LAB_00a0907c:
          piVar17 = (int *)*puVar15;
          *(undefined1 *)(puVar14 + 0x1a) = 0;
          puVar14[0x12] = (uint)piVar17;
          puVar14[0x13] = (uint)puVar10;
          puVar14[0x14] = uVar16;
LAB_00a09098:
          puVar14[0x15] = (uint)puVar10;
          puVar27 = (undefined1 *)0x80000000;
          if (*piVar17 != -0x80000000) {
            *(undefined1 *)(puVar14 + 0x19) = 0;
            puVar14[0x16] = (uint)piVar17;
            puVar14[0x17] = (uint)puVar10;
            puVar14[0x18] = puVar14[0x14];
            goto LAB_00a09118;
          }
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a3c);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a3c);
        case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar14[0x1b]) {
          case '\0':
            puVar15 = (uint *)puVar14[0xf];
            puVar10 = (uint *)puVar14[0x10];
            uVar16 = puVar14[0x11];
            goto LAB_00a0907c;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22218);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22218);
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar14[0x1a]) {
          case '\0':
            piVar17 = (int *)puVar14[0x12];
            puVar10 = (uint *)puVar14[0x13];
            goto LAB_00a09098;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21c3c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21c3c);
          case '\x03':
            if ((char)puVar14[0x19] != '\0') {
              if ((char)puVar14[0x19] == '\x01') {
                    /* WARNING: Subroutine does not return */
                FUN_013079f0(&DAT_01c21c0c);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c21c0c);
            }
            piVar17 = (int *)puVar14[0x16];
          }
LAB_00a09118:
          FUN_006666fc(&local_138,piVar17[1],piVar17[2]);
          puVar27 = (undefined1 *)0x80000002;
          local_34 = local_138;
          puStack_30 = local_134;
          puStack_2c = local_130;
          puStack_28 = local_12c;
          local_58 = local_124;
          local_54 = local_120;
          puStack_50 = local_11c;
          local_4c = local_118;
          puStack_48 = puStack_114;
          puStack_44 = local_110;
          puStack_40 = puStack_10c;
          *(undefined1 *)(puVar14 + 0x19) = 1;
        }
        *(undefined1 *)(puVar14 + 0x1b) = 1;
        *(undefined1 *)(puVar14 + 0x1a) = 1;
        *puVar4 = local_34;
        puVar4[1] = puStack_30;
        puVar4[2] = puStack_2c;
        puVar4[3] = puStack_28;
        *(undefined1 *)(puVar14 + 0x1c) = 1;
        local_38 = local_70;
        local_34 = puStack_6c;
        puStack_30 = puStack_68;
        puStack_2c = puStack_64;
        puStack_28 = puStack_60;
        local_138 = local_58;
        local_134 = local_54;
        local_130 = puStack_50;
        local_12c = local_4c;
        local_128 = puStack_48;
        local_124 = puStack_44;
        local_120 = puStack_40;
        local_d0 = local_70;
        puStack_cc = puStack_6c;
        puStack_c8 = puStack_68;
        puStack_c4 = puStack_64;
        puStack_c0 = puStack_60;
        local_f0 = local_58;
        puStack_ec = local_54;
        puStack_e8 = puStack_50;
        local_e4 = local_4c;
        puStack_e0 = puStack_48;
        puStack_dc = puStack_44;
        puStack_d8 = puStack_40;
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar26;
          bVar1 = (bool)hasExclusiveAccess(piVar26);
        } while (!bVar1);
        *(char *)piVar26 = '\x01';
        DataMemoryBarrier(0xb);
        piVar9[2] = 0;
        piVar9[3] = 0;
        if ((char)iVar11 == '\0') {
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar9;
            bVar1 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar1);
          *piVar9 = iVar11 + -1;
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a96da4(piVar9);
          }
        }
        local_b8 = (undefined1 *)0x0;
        *puVar13 = local_d0;
        puVar13[1] = puStack_cc;
        puVar13[2] = puStack_c8;
        puVar13[3] = puStack_c4;
        puVar13[4] = puStack_c0;
        local_9c = local_f0;
        local_98 = puStack_ec;
        puStack_94 = puStack_e8;
        local_90 = local_e4;
        puStack_8c = puStack_e0;
        puStack_88 = puStack_dc;
        puStack_84 = puStack_d8;
        local_78 = uVar8;
        uStack_74 = uVar30;
        if (uVar8 == *puVar6 && uVar30 == param_2[3]) goto LAB_00a09398;
        local_a0 = puVar27;
        FUN_00b1c9a8(param_2 + 7,&local_b8);
      } while( true );
    }
    uVar8 = *(uint *)(param_2[8] + 0x40);
    iVar11 = *(int *)(param_2[8] + 0x44);
    if (uVar8 != *puVar6 || iVar11 != param_2[3]) goto LAB_00a08f2c;
    *puVar6 = uVar8 + 1;
    param_2[3] = iVar11 + (uint)(0xfffffffe < uVar8);
    FUN_00b1c730(&local_138,param_2 + 7);
    local_150 = *puVar5;
    puStack_14c = (undefined1 *)puVar5[1];
    puStack_148 = (undefined1 *)puVar5[2];
    puStack_144 = (undefined1 *)puVar5[3];
    puStack_140 = (undefined1 *)puVar5[4];
    local_170 = local_11c;
    puStack_16c = local_118;
    puStack_168 = puStack_114;
    local_164 = local_110;
    puStack_160 = puStack_10c;
    puStack_15c = puStack_108;
    puStack_158 = puStack_104;
    local_23c = local_100;
    local_240 = uStack_fc;
    puVar19 = local_138;
    puVar27 = local_120;
    goto LAB_00a09308;
  }
  iVar11 = *param_2;
  puVar19 = (undefined1 *)param_2[1];
  if (puVar19 == (undefined1 *)0x0) {
    puVar27 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_134 = (undefined1 *)0x8;
    local_138 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)((uint)&local_f0 | 4);
    iVar28 = 0;
    iVar24 = iVar11;
    do {
      iVar3 = *(int *)(iVar11 + iVar28);
      if (iVar3 == 0) {
        iVar3 = iVar11 + iVar28;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(iVar3 + 100)) {
        case 0:
          *(undefined1 *)(iVar3 + 0x60) = 0;
          piVar22 = (int *)(iVar3 + 0x28);
          iVar12 = iVar3 + 4;
          uVar25 = *(undefined4 *)(iVar3 + 0x2c);
          *(int **)(iVar3 + 0x30) = piVar22;
          *(int *)(iVar3 + 0x34) = iVar12;
          *(undefined4 *)(iVar3 + 0x38) = uVar25;
          puVar27 = (undefined1 *)(iVar3 + 0x60);
LAB_00a08c1c:
          piVar22 = (int *)*piVar22;
          *(undefined1 *)(iVar3 + 0x5c) = 0;
          *(int **)(iVar3 + 0x3c) = piVar22;
          *(int *)(iVar3 + 0x40) = iVar12;
          *(undefined4 *)(iVar3 + 0x44) = uVar25;
          puVar18 = (undefined1 *)(iVar3 + 0x5c);
LAB_00a08c30:
          *(int *)(iVar3 + 0x48) = iVar12;
          if (*piVar22 != -0x80000000) {
            *(undefined1 *)(iVar3 + 0x58) = 0;
            *(int **)(iVar3 + 0x4c) = piVar22;
            *(int *)(iVar3 + 0x50) = iVar12;
            *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0x44);
            goto LAB_00a08cb0;
          }
          local_1ec = 0x80000000;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a3c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a3c);
        case 3:
          puVar27 = (undefined1 *)(iVar3 + 0x60);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*puVar27) {
          case 0:
            piVar22 = *(int **)(iVar3 + 0x30);
            iVar12 = *(int *)(iVar3 + 0x34);
            uVar25 = *(undefined4 *)(iVar3 + 0x38);
            puVar27 = (undefined1 *)(iVar24 + 0x60);
            goto LAB_00a08c1c;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22218);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22218);
          }
          puVar18 = (undefined1 *)(iVar3 + 0x5c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*puVar18) {
          case 0:
            piVar22 = *(int **)(iVar3 + 0x3c);
            iVar12 = *(int *)(iVar3 + 0x40);
            puVar18 = (undefined1 *)(iVar24 + 0x5c);
            goto LAB_00a08c30;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21c3c);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21c3c);
          case 3:
            if (*(char *)(iVar3 + 0x58) != '\0') {
              if (*(char *)(iVar3 + 0x58) == '\x01') {
                    /* WARNING: Subroutine does not return */
                FUN_013079f0(&DAT_01c21c0c);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c21c0c);
            }
            piVar22 = *(int **)(iVar3 + 0x4c);
          }
LAB_00a08cb0:
          FUN_006666fc(&local_b8,piVar22[1],piVar22[2]);
          local_1ec = 0x80000002;
          local_a8 = (undefined1 *)0x80000002;
          local_54 = local_b8;
          puStack_50 = puStack_b4;
          local_4c = puStack_b0;
          puStack_48 = local_ac;
          local_138 = local_a4;
          local_134 = local_a0;
          local_130 = local_9c;
          local_12c = local_98;
          local_128 = puStack_94;
          local_124 = local_90;
          local_120 = puStack_8c;
          *(undefined1 *)(iVar3 + 0x58) = 1;
        }
        *puVar18 = 1;
        *puVar27 = 1;
        *puVar2 = local_54;
        puVar2[1] = puStack_50;
        puVar2[2] = local_4c;
        puVar2[3] = puStack_48;
        iVar12 = *(int *)(iVar11 + iVar28);
        *(undefined1 *)(iVar3 + 100) = 1;
        if (iVar12 == 1) {
          FUN_00ba8128(iVar3 + 8);
        }
        puVar4 = (undefined4 *)(iVar11 + iVar28);
        *puVar4 = 1;
        puVar4[1] = local_f0;
        puVar4[2] = puStack_ec;
        puVar4[3] = puStack_e8;
        puVar4[4] = local_e4;
        puVar4[5] = puStack_e0;
        puVar4[6] = local_1ec;
        puVar4[7] = local_138;
        puVar4[8] = local_134;
        puVar4[9] = local_130;
        puVar4[10] = local_12c;
        puVar4[0xb] = local_128;
        puVar4[0xc] = local_124;
        puVar4[0xd] = local_120;
      }
      else if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar28 = iVar28 + 0x68;
      iVar24 = iVar24 + 0x68;
    } while ((int)puVar19 * 0x68 != iVar28);
    uVar25 = 0;
    iVar28 = 8;
    iVar24 = (int)puVar19 * 0x30;
    *param_2 = 8;
    param_2[1] = 0;
    if ((undefined1 *)0x2aaaaaa < puVar19) {
LAB_00a08de8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar25,iVar24);
    }
    puVar18 = (undefined1 *)0x0;
    if (iVar24 != 0) {
      uVar25 = 8;
      iVar28 = FUN_01298504(iVar24,8);
      puVar18 = puVar19;
      if (iVar28 == 0) goto LAB_00a08de8;
    }
    puVar27 = (undefined1 *)0x0;
    local_138 = puVar18;
    local_134 = (undefined1 *)iVar28;
    if (puVar19 != (undefined1 *)0x0) {
      puVar27 = (undefined1 *)0x0;
      piVar22 = (int *)(iVar11 + 0x18);
      puVar2 = (undefined4 *)(iVar28 + 0x14);
      do {
        if (piVar22[-6] != 1) {
LAB_00a0974c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c1d078);
        }
        iVar24 = *piVar22;
        piVar22[-6] = 2;
        if (iVar24 == -0x7ffffff9) goto LAB_00a0974c;
        local_b8 = (undefined1 *)piVar22[1];
        puStack_b4 = (undefined1 *)piVar22[2];
        puStack_b0 = (undefined1 *)piVar22[3];
        local_ac = (undefined1 *)piVar22[4];
        local_a8 = (undefined1 *)piVar22[5];
        local_a4 = (undefined1 *)piVar22[6];
        local_a0 = (undefined1 *)piVar22[7];
        FUN_01bed864(puVar2 + -5,piVar22 + -4,0x10);
        puVar2[-1] = iVar24;
        piVar22 = piVar22 + 0x1a;
        *puVar2 = local_b8;
        puVar2[1] = puStack_b4;
        puVar2[2] = puStack_b0;
        puVar27 = puVar27 + 1;
        puVar2[3] = local_ac;
        puVar2[4] = local_a8;
        puVar2[5] = local_a4;
        puVar2[6] = local_a0;
        puVar2 = puVar2 + 0xc;
      } while (puVar19 != puVar27);
      puVar27 = puVar19;
    }
  }
  param_1[1] = local_138;
  param_1[2] = local_134;
  param_1[3] = puVar27;
  *param_1 = 2;
  local_130 = puVar27;
  FUN_00a0997c(iVar11,puVar19);
  return;
LAB_00a09398:
  *puVar6 = uVar8 + 1;
  param_2[3] = uVar30 + (0xfffffffe < uVar8);
  local_150 = local_d0;
  puStack_14c = puStack_cc;
  puStack_148 = puStack_c8;
  puStack_144 = puStack_c4;
  puStack_140 = puStack_c0;
  local_170 = local_f0;
  puStack_16c = puStack_ec;
  puStack_168 = puStack_e8;
  local_164 = local_e4;
  puStack_160 = puStack_e0;
  puStack_15c = puStack_dc;
  puStack_158 = puStack_d8;
  local_23c = local_80;
  local_240 = uStack_7c;
  puVar19 = (undefined1 *)0x0;
LAB_00a09308:
  if (puVar19 != (undefined1 *)0x2) {
    if (puVar19 == (undefined1 *)0x3) {
LAB_00a0942c:
      *param_1 = 3;
      return;
    }
    if (((uint)puVar19 & 1) != 0) {
      *param_1 = local_150;
      param_1[1] = puStack_14c;
      param_1[2] = puStack_148;
      param_1[3] = puStack_144;
      param_1[4] = puStack_140;
      param_1[6] = local_170;
      param_1[7] = puStack_16c;
      param_1[8] = puStack_168;
      param_1[9] = local_164;
      param_1[10] = puStack_160;
      param_1[0xb] = puStack_15c;
      param_1[0xc] = puStack_158;
      param_1[5] = puVar27;
      param_1[0xd] = local_23c;
      param_1[0xe] = local_240;
      return;
    }
    uVar25 = puVar2[1];
    uVar21 = puVar2[2];
    uVar23 = puVar2[3];
    *puVar7 = *puVar2;
    puVar7[1] = uVar25;
    puVar7[2] = uVar21;
    puVar7[3] = uVar23;
    if (puVar27 != (undefined1 *)0x80000007) {
      if (puVar27 == &DAT_80000008) goto LAB_00a0942c;
      local_b8 = (undefined1 *)*puVar7;
      puStack_b4 = (undefined1 *)puVar7[1];
      puStack_b0 = (undefined1 *)puVar7[2];
      local_ac = (undefined1 *)puVar7[3];
      local_a0 = puStack_16c;
      local_9c = puStack_168;
      local_98 = local_164;
      puStack_94 = puStack_160;
      local_90 = puStack_15c;
      puStack_8c = puStack_158;
      local_a8 = puVar27;
      FUN_00b22508(piVar22,&local_b8);
      local_1f0 = puVar27;
      goto LAB_00a08e9c;
    }
  }
  iVar11 = param_2[0xb];
  iVar24 = param_2[0xc];
  param_1[1] = *piVar22;
  param_1[2] = iVar11;
  param_1[3] = iVar24;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

