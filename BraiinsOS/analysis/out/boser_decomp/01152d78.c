// FUN_01152d78 @ 01152d78 size=2692 calls_out=17 calls_in=1
// strings: TryMaybeDone polled after value taken | assertion failed: prev

/* WARNING: Removing unreachable block (ram,0x01153564) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01152d78(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  int *piVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  int *piVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  undefined8 uVar33;
  uint local_268;
  uint local_264;
  undefined1 *local_218;
  undefined1 local_1b0 [24];
  undefined1 *local_198;
  undefined1 *puStack_194;
  undefined1 *puStack_190;
  undefined1 *local_18c;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint uStack_154;
  uint local_150;
  uint local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined1 *local_140;
  undefined1 *puStack_13c;
  undefined1 *local_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  uint local_128;
  uint uStack_124;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint local_104;
  undefined1 *local_100;
  undefined1 *puStack_fc;
  undefined1 *local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  uint uStack_e0;
  int local_d8;
  int local_d4;
  int iStack_d0;
  int local_cc;
  undefined1 *local_c8;
  int local_c4;
  undefined1 *local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  int iStack_a8;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined1 *local_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  undefined1 *puStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *local_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  
  puVar9 = (uint *)(param_2 + 10);
  if (*puVar9 != 0x80000000) {
    piVar12 = (int *)((uint)&local_178 | 4);
    piVar25 = (int *)((uint)&local_90 | 4);
    piVar29 = param_2 + 4;
    puVar14 = (uint *)((uint)&local_d8 | 4);
    puVar4 = (uint *)((uint)&local_160 | 4);
    puVar5 = (uint *)(param_2 + 2);
    piVar6 = (int *)((uint)local_1b0 | 4);
LAB_011530ac:
    if (param_2[9] == 0) {
LAB_0115313c:
      do {
        DataMemoryBarrier(0xb);
        if (param_2[5] != 0) {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(param_2[5] + 0x60) == *(int *)(*piVar29 + 8) + 8);
        }
        iVar2 = *piVar29;
        FUN_01348e78(iVar2 + 0xc,param_3);
        while( true ) {
          uVar33 = FUN_009d040c(iVar2 + 8);
          puVar15 = (uint *)((ulonglong)uVar33 >> 0x20);
          if ((int)uVar33 != 0) {
            if ((int)uVar33 == 1) {
              uVar21 = 3;
              if (param_2[5] == 0) {
                uVar21 = 2;
                *(undefined1 *)(param_2 + 6) = 1;
              }
            }
            else {
              (**(code **)(*param_3 + 8))(param_3[1]);
              uVar21 = 3;
            }
            goto LAB_01153468;
          }
          if ((*puVar15 & 1) != 0) break;
          puVar15 = puVar15 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar21 = *puVar15;
            bVar1 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar1);
          *puVar15 = uVar21 - 1;
          if (uVar21 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0117fa78();
          }
          iVar2 = *piVar29;
        }
        piVar7 = (int *)FUN_00e7b814(piVar29,puVar15);
        piVar31 = piVar7 + 0x1f;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar31;
          bVar1 = (bool)hasExclusiveAccess(piVar31);
        } while (!bVar1);
        *(char *)piVar31 = '\0';
        DataMemoryBarrier(0xb);
        if ((char)iVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
        }
        *(undefined1 *)((int)piVar7 + 0x7d) = 0;
        uVar21 = puVar15[0x16];
        uVar30 = puVar15[0x17];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)puVar15[0x15]) {
        case '\0':
          *(undefined1 *)(puVar15 + 0x14) = 0;
          puVar8 = puVar15 + 2;
          puVar19 = puVar15 + 0xb;
          uVar16 = puVar15[0xc];
          puVar15[0xd] = (uint)puVar19;
          puVar15[0xe] = (uint)puVar8;
          puVar15[0xf] = uVar16;
LAB_01153290:
          puVar23 = (undefined1 *)*puVar19;
          *(undefined1 *)(puVar15 + 0x13) = 0;
          puVar15[0x10] = (uint)puVar23;
          puVar15[0x11] = (uint)puVar8;
          puVar15[0x12] = uVar16;
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
          switch((char)puVar15[0x14]) {
          case '\0':
            puVar19 = (uint *)puVar15[0xd];
            puVar8 = (uint *)puVar15[0xe];
            uVar16 = puVar15[0xf];
            goto LAB_01153290;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22218);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22218);
          case '\x03':
            if ((char)puVar15[0x13] != '\0') {
              if ((char)puVar15[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
                FUN_013079f0(&DAT_01c20c30);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c20c30);
            }
            puVar23 = (undefined1 *)puVar15[0x10];
          }
        }
        FUN_006e5484(&local_58,*puVar23);
        *(undefined1 *)(puVar15 + 0x14) = 1;
        *(undefined1 *)(puVar15 + 0x13) = 1;
        *piVar25 = local_58;
        piVar25[1] = iStack_54;
        piVar25[2] = iStack_50;
        piVar25[3] = (int)puStack_4c;
        piVar25[4] = iStack_48;
        piVar25[5] = (int)puStack_44;
        piVar25[6] = (int)local_40;
        piVar25[7] = (int)puStack_3c;
        piVar25[8] = (int)puStack_38;
        piVar25[9] = (int)puStack_34;
        piVar25[10] = (int)puStack_30;
        piVar25[0xb] = iStack_2c;
        *(undefined1 *)(puVar15 + 0x15) = 1;
        local_160 = local_90;
        local_15c = uStack_8c;
        local_158 = uStack_88;
        uStack_154 = uStack_84;
        local_150 = local_80;
        local_14c = uStack_7c;
        local_148 = puStack_78;
        local_144 = puStack_74;
        local_140 = local_70;
        puStack_13c = puStack_6c;
        local_138 = puStack_68;
        puStack_134 = puStack_64;
        puStack_130 = puStack_60;
        local_118 = local_90;
        uStack_114 = uStack_8c;
        uStack_110 = uStack_88;
        uStack_10c = uStack_84;
        local_108 = local_80;
        local_104 = uStack_7c;
        local_100 = puStack_78;
        puStack_fc = puStack_74;
        local_f8 = local_70;
        local_f4 = puStack_6c;
        local_f0 = puStack_68;
        puStack_ec = puStack_64;
        puStack_e8 = puStack_60;
        puStack_e4 = puStack_12c;
        uStack_e0 = local_128;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar31;
          bVar1 = (bool)hasExclusiveAccess(piVar31);
        } while (!bVar1);
        *(char *)piVar31 = '\x01';
        DataMemoryBarrier(0xb);
        piVar7[2] = 0;
        piVar7[3] = 0;
        if ((char)iVar2 == '\0') {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar7;
            bVar1 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar1);
          *piVar7 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0117fa78(piVar7);
          }
        }
        local_d8 = 0;
        *puVar14 = local_118;
        puVar14[1] = uStack_114;
        puVar14[2] = uStack_110;
        puVar14[3] = uStack_10c;
        puVar14[4] = local_108;
        puVar14[5] = local_104;
        puVar14[6] = (uint)local_100;
        puVar14[7] = (uint)puStack_fc;
        puVar14[8] = (uint)local_f8;
        puVar14[9] = (uint)local_f4;
        puVar14[10] = (uint)local_f0;
        puVar14[0xb] = (uint)puStack_ec;
        puVar14[0xc] = (uint)puStack_e8;
        puVar14[0xd] = (uint)puStack_e4;
        puVar14[0xe] = uStack_e0;
        local_98 = uVar21;
        local_94 = uVar30;
        if (uVar21 == *puVar5 && uVar30 == param_2[3]) goto LAB_011534f8;
        FUN_00b1c9a8(param_2 + 7,&local_d8);
      } while( true );
    }
    uVar21 = *(uint *)(param_2[8] + 0x40);
    iVar2 = *(int *)(param_2[8] + 0x44);
    if (uVar21 != *puVar5 || iVar2 != param_2[3]) goto LAB_0115313c;
    *puVar5 = uVar21 + 1;
    param_2[3] = iVar2 + (uint)(0xfffffffe < uVar21);
    FUN_00b1c730(&local_160,param_2 + 7);
    local_178 = *puVar4;
    uStack_174 = puVar4[1];
    uStack_170 = puVar4[2];
    uStack_16c = puVar4[3];
    uStack_168 = puVar4[4];
    local_198 = local_144;
    puStack_194 = local_140;
    puStack_190 = puStack_13c;
    local_18c = local_138;
    puStack_188 = puStack_134;
    puStack_184 = puStack_130;
    puStack_180 = puStack_12c;
    local_264 = local_128;
    local_268 = uStack_124;
    uVar21 = local_160;
    local_218 = local_148;
    goto LAB_01153468;
  }
  iVar2 = *param_2;
  uVar21 = param_2[1];
  if (uVar21 == 0) {
    uVar30 = 0;
    *param_2 = 8;
    param_2[1] = 0;
    local_15c = 8;
    local_160 = 0;
  }
  else {
    puVar10 = (undefined4 *)((uint)&local_90 | 4);
    puVar11 = (undefined4 *)((uint)&local_118 | 4);
    piVar12 = (int *)((uint)&local_160 | 4);
    iVar32 = 0;
    iVar28 = iVar2;
    do {
      iVar13 = *(int *)(iVar2 + iVar32);
      if (iVar13 == 0) {
        iVar13 = iVar2 + iVar32;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(iVar13 + 0x50)) {
        case 0:
          *(undefined1 *)(iVar13 + 0x4c) = 0;
          iVar3 = iVar13 + 4;
          puVar17 = (undefined4 *)(iVar13 + 0x28);
          uVar27 = *(undefined4 *)(iVar13 + 0x2c);
          *(undefined4 **)(iVar13 + 0x30) = puVar17;
          *(int *)(iVar13 + 0x34) = iVar3;
          *(undefined4 *)(iVar13 + 0x38) = uVar27;
          puVar23 = (undefined1 *)(iVar13 + 0x4c);
LAB_01152ea0:
          puVar18 = (undefined1 *)*puVar17;
          *(undefined1 *)(iVar13 + 0x48) = 0;
          *(undefined1 **)(iVar13 + 0x3c) = puVar18;
          *(int *)(iVar13 + 0x40) = iVar3;
          *(undefined4 *)(iVar13 + 0x44) = uVar27;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a3c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a3c);
        case 3:
          puVar23 = (undefined1 *)(iVar13 + 0x4c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*puVar23) {
          case 0:
            puVar17 = *(undefined4 **)(iVar13 + 0x30);
            iVar3 = *(int *)(iVar13 + 0x34);
            uVar27 = *(undefined4 *)(iVar13 + 0x38);
            puVar23 = (undefined1 *)(iVar28 + 0x4c);
            goto LAB_01152ea0;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22218);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22218);
          case 3:
            if (*(char *)(iVar13 + 0x48) != '\0') {
              if (*(char *)(iVar13 + 0x48) == '\x01') {
                    /* WARNING: Subroutine does not return */
                FUN_013079f0(&DAT_01c20c30);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c20c30);
            }
            puVar18 = *(undefined1 **)(iVar13 + 0x3c);
          }
        }
        FUN_006e5484(&local_58,*puVar18);
        local_d4 = local_58;
        iStack_d0 = iStack_54;
        local_cc = iStack_50;
        local_c8 = puStack_4c;
        local_c4 = iStack_48;
        local_c0 = puStack_44;
        local_bc = local_40;
        local_b8 = puStack_3c;
        puStack_b4 = puStack_38;
        puStack_b0 = puStack_34;
        puStack_ac = puStack_30;
        iStack_a8 = iStack_2c;
        *(undefined1 *)(iVar13 + 0x48) = 1;
        *puVar23 = 1;
        *piVar12 = local_58;
        piVar12[1] = iStack_54;
        piVar12[2] = iStack_50;
        piVar12[3] = (int)puStack_4c;
        piVar12[4] = iStack_48;
        piVar12[5] = (int)puStack_44;
        piVar12[6] = (int)local_40;
        piVar12[7] = (int)puStack_3c;
        piVar12[8] = (int)puStack_38;
        piVar12[9] = (int)puStack_34;
        piVar12[10] = (int)puStack_30;
        piVar12[0xb] = iStack_2c;
        local_90 = local_160;
        uStack_8c = local_15c;
        uStack_88 = local_158;
        uStack_84 = uStack_154;
        local_80 = local_150;
        uStack_7c = local_14c;
        puStack_78 = local_148;
        puStack_74 = local_144;
        local_70 = local_140;
        puStack_6c = puStack_13c;
        puStack_68 = local_138;
        puStack_64 = puStack_134;
        puStack_60 = puStack_130;
        *(undefined1 *)(iVar13 + 0x50) = 1;
        uVar27 = puVar10[1];
        uVar20 = puVar10[2];
        uVar22 = puVar10[3];
        uVar24 = puVar10[4];
        uVar26 = puVar10[5];
        *puVar11 = *puVar10;
        puVar11[1] = uVar27;
        puVar11[2] = uVar20;
        puVar11[3] = uVar22;
        puVar11[4] = uVar24;
        puVar11[5] = uVar26;
        uVar27 = puVar10[7];
        uVar20 = puVar10[8];
        uVar22 = puVar10[9];
        uVar24 = puVar10[10];
        uVar26 = puVar10[0xb];
        puVar11[6] = puVar10[6];
        puVar11[7] = uVar27;
        puVar11[8] = uVar20;
        puVar11[9] = uVar22;
        puVar11[10] = uVar24;
        puVar11[0xb] = uVar26;
        if (*(int *)(iVar2 + iVar32) == 1) {
          FUN_00db19c4(iVar13 + 8);
        }
        puVar17 = (undefined4 *)(iVar2 + iVar32);
        *puVar17 = 1;
        puVar17[1] = local_118;
        puVar17[2] = uStack_114;
        puVar17[3] = uStack_110;
        puVar17[4] = uStack_10c;
        puVar17[5] = local_108;
        puVar17[6] = local_104;
        puVar17[7] = local_100;
        puVar17[8] = puStack_fc;
        puVar17[9] = local_f8;
        puVar17[10] = local_f4;
        puVar17[0xb] = local_f0;
        puVar17[0xc] = puStack_ec;
        puVar17[0xd] = puStack_e8;
      }
      else if (iVar13 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar32 = iVar32 + 0x58;
      iVar28 = iVar28 + 0x58;
    } while (uVar21 * 0x58 != iVar32);
    uVar27 = 0;
    local_15c = 8;
    iVar28 = uVar21 * 0x30;
    *param_2 = 8;
    param_2[1] = 0;
    if (0x2aaaaaa < uVar21) {
LAB_01153004:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar27,iVar28);
    }
    local_160 = 0;
    if (iVar28 != 0) {
      uVar27 = 8;
      local_15c = FUN_01298504(iVar28,8);
      local_160 = uVar21;
      if (local_15c == 0) goto LAB_01153004;
    }
    local_158 = 0;
    uVar30 = 0;
    if (uVar21 != 0) {
      uVar30 = 0;
      piVar25 = (int *)(iVar2 + 0x18);
      piVar12 = (int *)(local_15c + 0x14);
      do {
        if (piVar25[-6] != 1) {
LAB_0115386c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c1d078);
        }
        iVar28 = *piVar25;
        piVar25[-6] = 2;
        if (iVar28 == -0x7ffffff9) goto LAB_0115386c;
        local_d8 = piVar25[1];
        local_d4 = piVar25[2];
        iStack_d0 = piVar25[3];
        local_cc = piVar25[4];
        local_c8 = (undefined1 *)piVar25[5];
        local_c4 = piVar25[6];
        local_c0 = (undefined1 *)piVar25[7];
        FUN_01bed864(piVar12 + -5,piVar25 + -4,0x10);
        piVar12[-1] = iVar28;
        piVar25 = piVar25 + 0x16;
        *piVar12 = local_d8;
        piVar12[1] = local_d4;
        piVar12[2] = iStack_d0;
        uVar30 = uVar30 + 1;
        piVar12[3] = local_cc;
        piVar12[4] = (int)local_c8;
        piVar12[5] = local_c4;
        piVar12[6] = (int)local_c0;
        piVar12 = piVar12 + 0xc;
      } while (uVar21 != uVar30);
      uVar30 = uVar21;
    }
  }
  param_1[1] = local_160;
  param_1[2] = local_15c;
  param_1[3] = uVar30;
  *param_1 = 2;
  local_158 = uVar30;
  FUN_01147a14(iVar2,uVar21);
  return;
LAB_011534f8:
  *puVar5 = uVar21 + 1;
  param_2[3] = uVar30 + (0xfffffffe < uVar21);
  local_178 = local_118;
  uStack_174 = uStack_114;
  uStack_170 = uStack_110;
  uStack_16c = uStack_10c;
  uStack_168 = local_108;
  local_198 = local_100;
  puStack_194 = puStack_fc;
  puStack_190 = local_f8;
  local_18c = local_f4;
  puStack_188 = local_f0;
  puStack_184 = puStack_ec;
  puStack_180 = puStack_e8;
  local_264 = local_a0;
  local_268 = uStack_9c;
  uVar21 = 0;
  local_218 = local_c0;
LAB_01153468:
  if (uVar21 != 2) {
    if (uVar21 == 3) {
LAB_01153554:
      *param_1 = 3;
      return;
    }
    if ((uVar21 & 1) != 0) {
      *param_1 = local_178;
      param_1[1] = uStack_174;
      param_1[2] = uStack_170;
      param_1[3] = uStack_16c;
      param_1[4] = uStack_168;
      param_1[6] = (uint)local_198;
      param_1[7] = (uint)puStack_194;
      param_1[8] = (uint)puStack_190;
      param_1[9] = (uint)local_18c;
      param_1[10] = (uint)puStack_188;
      param_1[0xb] = (uint)puStack_184;
      param_1[0xc] = (uint)puStack_180;
      param_1[5] = (uint)local_218;
      param_1[0xd] = local_264;
      param_1[0xe] = local_268;
      return;
    }
    iVar2 = piVar12[1];
    iVar28 = piVar12[2];
    iVar32 = piVar12[3];
    *piVar6 = *piVar12;
    piVar6[1] = iVar2;
    piVar6[2] = iVar28;
    piVar6[3] = iVar32;
    if (local_218 != (undefined1 *)0x80000007) {
      if (local_218 == &DAT_80000008) goto LAB_01153554;
      local_d8 = *piVar6;
      local_d4 = piVar6[1];
      iStack_d0 = piVar6[2];
      local_cc = piVar6[3];
      local_c0 = puStack_194;
      local_bc = puStack_190;
      local_b8 = local_18c;
      puStack_b4 = puStack_188;
      puStack_b0 = puStack_184;
      puStack_ac = puStack_180;
      local_c8 = local_218;
      FUN_00b22508(puVar9,&local_d8);
      goto LAB_011530ac;
    }
  }
  uVar21 = param_2[0xb];
  uVar30 = param_2[0xc];
  param_1[1] = *puVar9;
  param_1[2] = uVar21;
  param_1[3] = uVar30;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

