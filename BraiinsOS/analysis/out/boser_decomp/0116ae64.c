// FUN_0116ae64 @ 0116ae64 size=2872 calls_out=19 calls_in=0
// strings: __typename | Entity not found. | '__typename' must be an existing string. | __typename | Entity not found. | '__typename' must be an existing string.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0116ae64(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined1 *unaff_r5;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  uint local_278;
  uint local_274;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  uint local_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint local_1b0;
  undefined1 *puStack_1ac;
  undefined1 *puStack_1a8;
  uint local_1a4;
  undefined1 *puStack_1a0;
  undefined1 *puStack_19c;
  uint uStack_198;
  undefined1 local_190 [24];
  uint local_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  uint local_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  uint uStack_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  undefined1 *local_12c;
  undefined1 *local_128;
  uint local_124;
  undefined1 *puStack_120;
  undefined1 *local_11c;
  uint local_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint local_e4;
  uint local_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  uint local_d4;
  undefined1 *local_d0;
  undefined1 *puStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  undefined1 *local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  uint local_98;
  undefined1 *puStack_94;
  undefined1 *local_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  undefined1 *local_5c;
  uint local_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  uint local_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar14 = (uint *)(param_2 + 10);
  if (*puVar14 != 0x80000000) {
    piVar4 = (int *)((uint)&local_158 | 4);
    piVar19 = param_2 + 4;
    puVar15 = (uint *)((uint)&local_140 | 4);
    puVar5 = (uint *)((uint)&local_b8 | 4);
    puVar6 = (uint *)(param_2 + 2);
    piVar16 = (int *)((uint)local_190 | 4);
    do {
      if (param_2[9] == 0) {
LAB_0116b220:
        while( true ) {
          DataMemoryBarrier(0xb);
          if (param_2[5] != 0) {
            do {
              DataMemoryBarrier(0xb);
            } while (*(int *)(param_2[5] + 0x30) == *(int *)(*piVar19 + 8) + 8);
          }
          iVar17 = *piVar19;
          FUN_01348e78(iVar17 + 0xc,param_3);
          while( true ) {
            uVar24 = FUN_00e7c73c(iVar17 + 8);
            puVar11 = (uint *)((ulonglong)uVar24 >> 0x20);
            if ((int)uVar24 != 0) {
              if ((int)uVar24 == 1) {
                uVar9 = 3;
                if (param_2[5] == 0) {
                  *(undefined1 *)(param_2 + 6) = 1;
                  uVar9 = 2;
                }
              }
              else {
                (**(code **)(*param_3 + 8))(param_3[1]);
                uVar9 = 3;
              }
              goto LAB_0116b584;
            }
            if ((*puVar11 & 1) != 0) break;
            puVar11 = puVar11 + -2;
            DataMemoryBarrier(0xb);
            do {
              uVar9 = *puVar11;
              bVar1 = (bool)hasExclusiveAccess(puVar11);
            } while (!bVar1);
            *puVar11 = uVar9 - 1;
            if (uVar9 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01180524();
            }
            iVar17 = *piVar19;
          }
          piVar7 = (int *)FUN_00e7b424(piVar19,puVar11);
          piVar22 = piVar7 + 0x13;
          DataMemoryBarrier(0xb);
          do {
            iVar17 = *piVar22;
            bVar1 = (bool)hasExclusiveAccess(piVar22);
          } while (!bVar1);
          *(char *)piVar22 = '\0';
          DataMemoryBarrier(0xb);
          if ((char)iVar17 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
          }
          *(undefined1 *)((int)piVar7 + 0x4d) = 0;
          uVar21 = puVar11[10];
          uVar9 = puVar11[0xb];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar11[9]) {
          case '\0':
            uVar13 = puVar11[3];
            uVar8 = puVar11[4];
            *(undefined1 *)(puVar11 + 8) = 0;
            puVar11[5] = puVar11[2];
            puVar11[6] = uVar13;
            puVar11[7] = uVar8;
            break;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(0x1c20e74);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(0x1c20e74);
          case '\x03':
            if ((char)puVar11[8] != '\0') {
              if ((char)puVar11[8] == '\x01') {
                    /* WARNING: Subroutine does not return */
                FUN_013079f0(&DAT_01c222c8);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c222c8);
            }
            uVar13 = puVar11[6];
            uVar8 = puVar11[7];
          }
          if ((*(int *)(uVar8 + 0x10) < 0) ||
             ((iVar17 = FUN_007017a8(uVar8,"__typename",10), iVar17 != 0 &&
              (*(int *)(iVar17 + 0x10) == -0x7ffffffe)))) {
            *(undefined1 *)(puVar11 + 8) = 1;
            local_70 = 1;
            local_6c = **(uint **)(puVar11[3] + 0x10);
            local_68 = (*(uint **)(puVar11[3] + 0x10))[1];
            FUN_006bd6b4(puVar15,"Entity not found.",0x11,&local_70);
          }
          else {
            local_30 = 1;
            local_2c = **(undefined4 **)(uVar13 + 0x10);
            local_28 = (*(undefined4 **)(uVar13 + 0x10))[1];
            FUN_006bd6b4(&local_70,"\"__typename\" must be an existing string.",0x28,&local_30);
            *puVar15 = local_70;
            puVar15[1] = local_6c;
            puVar15[2] = local_68;
            puVar15[3] = uStack_64;
            puVar15[4] = uStack_60;
            local_124 = local_58;
            puStack_120 = puStack_54;
            local_11c = puStack_50;
            local_118 = local_4c;
            puStack_114 = puStack_48;
            puStack_110 = puStack_44;
            local_10c = uStack_40;
            *(undefined1 *)(puVar11 + 8) = 1;
            local_128 = local_5c;
            local_108 = local_3c;
            uStack_104 = uStack_38;
          }
          local_f8 = *puVar15;
          uStack_f4 = puVar15[1];
          uStack_f0 = puVar15[2];
          uStack_ec = puVar15[3];
          uStack_e8 = puVar15[4];
          local_e4 = puVar15[5];
          local_e0 = puVar15[6];
          puStack_dc = (undefined1 *)puVar15[7];
          puStack_d8 = (undefined1 *)puVar15[8];
          local_d4 = puVar15[9];
          local_d0 = (undefined1 *)puVar15[10];
          puStack_cc = (undefined1 *)puVar15[0xb];
          uStack_c8 = puVar15[0xc];
          uStack_c4 = puVar15[0xd];
          uStack_c0 = puVar15[0xe];
          *(undefined1 *)(puVar11 + 9) = 1;
          DataMemoryBarrier(0xb);
          do {
            iVar17 = *piVar22;
            bVar1 = (bool)hasExclusiveAccess(piVar22);
          } while (!bVar1);
          *(char *)piVar22 = '\x01';
          DataMemoryBarrier(0xb);
          piVar7[2] = 0;
          piVar7[3] = 0;
          if ((char)iVar17 == '\0') {
            DataMemoryBarrier(0xb);
            do {
              iVar17 = *piVar7;
              bVar1 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar1);
            *piVar7 = iVar17 + -1;
            if (iVar17 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01180524(piVar7);
            }
          }
          local_b8 = 1;
          *puVar5 = local_f8;
          puVar5[1] = uStack_f4;
          puVar5[2] = uStack_f0;
          puVar5[3] = uStack_ec;
          puVar5[4] = uStack_e8;
          puVar5[5] = local_e4;
          puVar5[6] = local_e0;
          puVar5[7] = (uint)puStack_dc;
          puVar5[8] = (uint)puStack_d8;
          puVar5[9] = local_d4;
          puVar5[10] = (uint)local_d0;
          puVar5[0xb] = (uint)puStack_cc;
          puVar5[0xc] = uStack_c8;
          puVar5[0xd] = uStack_c4;
          puVar5[0xe] = uStack_c0;
          local_78 = uVar21;
          local_74 = uVar9;
          if (uVar21 == *puVar6 && uVar9 == param_2[3]) break;
          FUN_00b1c9a8(param_2 + 7,&local_b8);
        }
        *puVar6 = uVar21 + 1;
        param_2[3] = uVar9 + (0xfffffffe < uVar21);
        local_158 = local_f8;
        uStack_154 = uStack_f4;
        uStack_150 = uStack_f0;
        uStack_14c = uStack_ec;
        uStack_148 = uStack_e8;
        local_178 = local_e0;
        puStack_174 = puStack_dc;
        puStack_170 = puStack_d8;
        local_16c = local_d4;
        puStack_168 = local_d0;
        puStack_164 = puStack_cc;
        uStack_160 = uStack_c8;
        local_274 = local_80;
        local_278 = uStack_7c;
        uVar9 = 1;
        unaff_r5 = local_a0;
      }
      else {
        uVar9 = *(uint *)(param_2[8] + 0x40);
        iVar17 = *(int *)(param_2[8] + 0x44);
        if (uVar9 != *puVar6 || iVar17 != param_2[3]) goto LAB_0116b220;
        *puVar6 = uVar9 + 1;
        param_2[3] = iVar17 + (uint)(0xfffffffe < uVar9);
        FUN_00b1c730(&local_140,param_2 + 7);
        local_158 = *puVar15;
        uStack_154 = puVar15[1];
        uStack_150 = puVar15[2];
        uStack_14c = puVar15[3];
        uStack_148 = puVar15[4];
        local_178 = local_124;
        puStack_174 = puStack_120;
        puStack_170 = local_11c;
        local_16c = local_118;
        puStack_168 = puStack_114;
        puStack_164 = puStack_110;
        uStack_160 = local_10c;
        local_274 = local_108;
        local_278 = uStack_104;
        uVar9 = local_140;
        unaff_r5 = local_128;
      }
LAB_0116b584:
      if (uVar9 == 2) {
LAB_0116b670:
        uVar9 = param_2[0xb];
        uVar21 = param_2[0xc];
        param_1[1] = *puVar14;
        param_1[2] = uVar9;
        param_1[3] = uVar21;
        param_2[10] = 0;
        param_2[0xc] = 0;
        param_2[0xb] = 8;
        *param_1 = 2;
        return;
      }
      if (uVar9 == 3) goto LAB_0116b7e8;
      if ((uVar9 & 1) != 0) {
        *param_1 = local_158;
        param_1[1] = uStack_154;
        param_1[2] = uStack_150;
        param_1[3] = uStack_14c;
        param_1[4] = uStack_148;
        param_1[6] = local_178;
        param_1[7] = (uint)puStack_174;
        param_1[8] = (uint)puStack_170;
        param_1[9] = local_16c;
        param_1[10] = (uint)puStack_168;
        param_1[0xb] = (uint)puStack_164;
        param_1[0xc] = uStack_160;
        param_1[5] = (uint)unaff_r5;
        param_1[0xd] = local_274;
        param_1[0xe] = local_278;
        return;
      }
      iVar17 = piVar4[1];
      iVar20 = piVar4[2];
      iVar18 = piVar4[3];
      *piVar16 = *piVar4;
      piVar16[1] = iVar17;
      piVar16[2] = iVar20;
      piVar16[3] = iVar18;
      local_1b0 = local_178;
      puStack_1ac = puStack_174;
      puStack_1a8 = puStack_170;
      local_1a4 = local_16c;
      puStack_1a0 = puStack_168;
      puStack_19c = puStack_164;
      uStack_198 = uStack_160;
      if (unaff_r5 == (undefined1 *)0x80000007) goto LAB_0116b670;
      if (unaff_r5 == &DAT_80000008) goto LAB_0116b7e8;
      local_b8 = *piVar16;
      iStack_b4 = piVar16[1];
      iStack_b0 = piVar16[2];
      local_ac = piVar16[3];
      local_a0 = puStack_174;
      local_9c = puStack_170;
      local_98 = local_16c;
      puStack_94 = puStack_168;
      local_90 = puStack_164;
      uStack_8c = uStack_160;
      local_a8 = unaff_r5;
      FUN_00b22508(puVar14,&local_b8);
    } while( true );
  }
  uVar9 = param_2[1];
  iVar17 = *param_2;
  local_228 = 3;
  if (uVar9 == 0) {
    uVar21 = 0;
    *param_2 = 8;
    param_2[1] = 0;
    local_13c = 8;
    local_140 = 0;
LAB_0116b6b8:
    param_1[1] = local_140;
    param_1[2] = local_13c;
    param_1[3] = uVar21;
    *param_1 = 2;
    local_138 = uVar21;
    FUN_0116bbec(iVar17,uVar9);
  }
  else {
    puVar14 = (uint *)((uint)&local_b8 | 4);
    puVar2 = (undefined4 *)((uint)&local_140 | 4);
    iVar20 = 0;
    do {
      if (*(int *)(iVar17 + iVar20) == 0) {
        iVar18 = iVar17 + iVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(iVar18 + 0x20)) {
        case 0:
          iVar12 = *(int *)(iVar18 + 8);
          iVar10 = *(int *)(iVar18 + 0xc);
          *(undefined1 *)(iVar18 + 0x1c) = 0;
          *(undefined4 *)(iVar18 + 0x10) = *(undefined4 *)(iVar18 + 4);
          *(int *)(iVar18 + 0x14) = iVar12;
          *(int *)(iVar18 + 0x18) = iVar10;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(0x1c20e74);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(0x1c20e74);
        case 3:
          if (*(char *)(iVar18 + 0x1c) != '\0') {
            if (*(char *)(iVar18 + 0x1c) == '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c222c8);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c222c8);
          }
          iVar12 = *(int *)(iVar18 + 0x14);
          iVar10 = *(int *)(iVar18 + 0x18);
        }
        if ((*(int *)(iVar10 + 0x10) < 0) ||
           ((iVar10 = FUN_007017a8(iVar10,"__typename",10), iVar10 != 0 &&
            (*(int *)(iVar10 + 0x10) == -0x7ffffffe)))) {
          *(undefined1 *)(iVar18 + 0x1c) = 1;
          local_140 = 1;
          puVar3 = *(undefined4 **)(*(int *)(iVar18 + 8) + 0x10);
          local_13c = *puVar3;
          local_138 = puVar3[1];
          FUN_006bd6b4(puVar14,"Entity not found.",0x11,&local_140);
        }
        else {
          local_70 = 1;
          local_6c = **(uint **)(iVar12 + 0x10);
          local_68 = (*(uint **)(iVar12 + 0x10))[1];
          FUN_006bd6b4(&local_140,"\"__typename\" must be an existing string.",0x28,&local_70);
          *puVar14 = local_140;
          puVar14[1] = local_13c;
          puVar14[2] = local_138;
          puVar14[3] = uStack_134;
          puVar14[4] = uStack_130;
          local_9c = local_128;
          local_98 = local_124;
          puStack_94 = puStack_120;
          local_90 = local_11c;
          uStack_8c = local_118;
          puStack_88 = puStack_114;
          puStack_84 = puStack_110;
          *(undefined1 *)(iVar18 + 0x1c) = 1;
          local_a0 = local_12c;
          local_80 = local_10c;
          uStack_7c = local_108;
        }
        local_140 = *puVar14;
        local_13c = puVar14[1];
        local_138 = puVar14[2];
        uStack_134 = puVar14[3];
        uStack_130 = puVar14[4];
        local_12c = (undefined1 *)puVar14[5];
        local_128 = (undefined1 *)puVar14[6];
        local_124 = puVar14[7];
        puStack_120 = (undefined1 *)puVar14[8];
        local_11c = (undefined1 *)puVar14[9];
        local_118 = puVar14[10];
        puStack_114 = (undefined1 *)puVar14[0xb];
        puStack_110 = (undefined1 *)puVar14[0xc];
        local_10c = puVar14[0xd];
        local_108 = puVar14[0xe];
        *(undefined1 *)(iVar18 + 0x20) = 1;
        if (*(int *)(iVar17 + iVar20) == 1) {
          FUN_00db19c4(iVar18 + 8);
        }
        uVar21 = local_140;
        *(undefined4 *)(iVar17 + iVar20) = 2;
        local_1e8 = *puVar2;
        uStack_1e4 = puVar2[1];
        uStack_1e0 = puVar2[2];
        uStack_1dc = puVar2[3];
        local_1d8 = puVar2[4];
        uStack_1d4 = puVar2[5];
        uStack_1d0 = puVar2[6];
        uStack_1cc = puVar2[7];
        uStack_1c8 = puVar2[8];
        local_1c4 = puVar2[9];
        uStack_1c0 = puVar2[10];
        uStack_1bc = puVar2[0xb];
        uStack_1b8 = puVar2[0xc];
        uStack_1b4 = puVar2[0xd];
        if (local_140 != 2) {
          if (local_140 != 3) {
            if (local_228 < 2) {
              FUN_006c9ae0(&local_228);
            }
            local_228 = uVar21;
            puVar2 = (undefined4 *)((uint)&local_228 | 4);
            *puVar2 = local_1e8;
            puVar2[1] = uStack_1e4;
            puVar2[2] = uStack_1e0;
            puVar2[3] = uStack_1dc;
            puVar2[4] = local_1d8;
            puVar2[5] = uStack_1d4;
            puVar2[6] = uStack_1d0;
            puVar2[7] = uStack_1cc;
            puVar2[8] = uStack_1c8;
            puVar2[9] = local_1c4;
            puVar2[10] = uStack_1c0;
            puVar2[0xb] = uStack_1bc;
            puVar2[0xc] = uStack_1b8;
            puVar2[0xd] = uStack_1b4;
            break;
          }
          if (local_228 < 2) {
            FUN_006c9ae0(&local_228);
          }
          local_228 = 2;
        }
      }
      else if (*(int *)(iVar17 + iVar20) != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar20 = iVar20 + 0x38;
    } while (uVar9 * 0x38 != iVar20);
    if (1 < local_228) {
      if (local_228 == 2) {
LAB_0116b7e8:
        *param_1 = 3;
        return;
      }
      if (local_228 == 3) {
        uVar8 = 8;
        uVar23 = 0;
        *param_2 = 8;
        param_2[1] = 0;
        iVar20 = uVar9 * 0x30;
        if (0x2aaaaaa < uVar9) {
LAB_0116b7d8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar23,iVar20);
        }
        uVar13 = 0;
        if (iVar20 != 0) {
          uVar23 = 8;
          uVar8 = FUN_01298504(iVar20,8);
          uVar13 = uVar9;
          if (uVar8 == 0) goto LAB_0116b7d8;
        }
        local_138 = 0;
        uVar21 = 0;
        local_140 = uVar13;
        local_13c = uVar8;
        if (uVar9 != 0) {
          piVar16 = (int *)(iVar17 + 0x18);
          uVar21 = 0;
          piVar4 = (int *)(uVar8 + 0x14);
          do {
            if (piVar16[-6] != 1) {
LAB_0116b9dc:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            iVar20 = *piVar16;
            piVar16[-6] = 2;
            if (iVar20 == -0x7ffffff9) goto LAB_0116b9dc;
            local_b8 = piVar16[1];
            iStack_b4 = piVar16[2];
            iStack_b0 = piVar16[3];
            local_ac = piVar16[4];
            local_a8 = (undefined1 *)piVar16[5];
            local_a4 = piVar16[6];
            local_a0 = (undefined1 *)piVar16[7];
            FUN_01bed864(piVar4 + -5,piVar16 + -4,0x10);
            piVar4[-1] = iVar20;
            piVar16 = piVar16 + 0xe;
            uVar21 = uVar21 + 1;
            *piVar4 = local_b8;
            piVar4[1] = iStack_b4;
            piVar4[2] = iStack_b0;
            piVar4[3] = local_ac;
            piVar4[4] = (int)local_a8;
            piVar4[5] = local_a4;
            piVar4[6] = (int)local_a0;
            piVar4 = piVar4 + 0xc;
          } while (uVar9 != uVar21);
          uVar21 = uVar9;
        }
        goto LAB_0116b6b8;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_0116bbec(iVar17,uVar9);
    *param_1 = local_228;
    param_1[1] = uStack_224;
    param_1[2] = uStack_220;
    param_1[3] = uStack_21c;
    param_1[4] = uStack_218;
    param_1[5] = local_214;
    param_1[6] = uStack_210;
    param_1[7] = uStack_20c;
    param_1[8] = uStack_208;
    param_1[9] = uStack_204;
    param_1[10] = local_200;
    param_1[0xb] = uStack_1fc;
    param_1[0xc] = uStack_1f8;
    param_1[0xd] = uStack_1f4;
    param_1[0xe] = uStack_1f0;
  }
  return;
}

