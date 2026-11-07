// FUN_00d66bd8 @ 00d66bd8 size=3516 calls_out=20 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d66bd8(undefined4 *param_1,int *param_2,int *param_3)

{
  int ****ppppiVar1;
  int ****ppppiVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int ****ppppiVar12;
  uint uVar13;
  uint uVar14;
  int ****ppppiVar15;
  int ****unaff_r4;
  int ****ppppiVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int ***pppiVar20;
  int ****ppppiVar21;
  int ****unaff_r7;
  int ****ppppiVar22;
  int ****ppppiVar23;
  int ****unaff_r8;
  int ****unaff_r9;
  int ****ppppiVar24;
  int iVar25;
  int ****unaff_r11;
  int iVar26;
  int ****local_248;
  int ****local_238;
  int ****local_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int local_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int local_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int ****local_1e0;
  int ****local_1dc;
  int ****local_1d8;
  int ****local_1d4;
  int ****local_1d0;
  int ****local_1cc;
  int ****local_1c8;
  int ****local_1c4;
  int ****ppppiStack_1c0;
  int ****local_1bc;
  int ****local_1b0;
  int ****local_1ac;
  int local_1a4;
  uint local_1a0;
  int local_19c;
  int local_198;
  uint local_194;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int ****local_168;
  int ****ppppiStack_164;
  int ****ppppiStack_160;
  int ****ppppiStack_15c;
  int ****ppppiStack_158;
  int ****local_154;
  int ****ppppiStack_150;
  int ****ppppiStack_14c;
  int ****ppppiStack_148;
  int ****ppppiStack_144;
  int local_140;
  int iStack_13c;
  uint uStack_138;
  int iStack_134;
  int iStack_130;
  uint uStack_12c;
  int ****local_128;
  int ****local_124;
  int ****local_120;
  int ****local_11c;
  int ****local_118;
  int ****local_114;
  int ****ppppiStack_110;
  int ****ppppiStack_10c;
  int ****ppppiStack_108;
  int ****local_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int ****local_d4;
  int ****local_d0;
  int local_cc;
  int ****local_c8;
  int local_c4;
  int local_c0;
  undefined1 *local_bc;
  int **local_b8;
  int ****local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  int ****local_7c;
  int ****local_78;
  int ****local_74;
  int ****local_70;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ****ppppiStack_64;
  int ****ppppiStack_60;
  int ****local_5c;
  int ****ppppiStack_58;
  int ****ppppiStack_54;
  int ****ppppiStack_50;
  int ****ppppiStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  ppppiVar21 = (int ****)*param_2;
  ppppiVar24 = (int ****)param_2[1];
  uVar10 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (ppppiVar21 == (int ****)&DAT_00000003 && ppppiVar24 == (int ****)0x0) {
    ppppiVar23 = (int ****)(param_2 + 0x1a);
    unaff_r8 = (int ****)(param_2 + 0x38);
    local_234 = (int ****)*ppppiVar23;
    ppppiVar24 = (int ****)param_2[0x1b];
    if (local_234 != (int ****)&DAT_00000005 || ppppiVar24 != (int ****)0x0) {
      piVar3 = param_2 + 0x20;
      ppppiVar21 = unaff_r4;
      do {
        if (0x1f < (uint)param_2[0x34]) {
          iVar4 = *(int *)*param_3;
          iVar17 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar4 + 8))(iVar17);
          ppppiVar16 = unaff_r11;
LAB_00d6746c:
          unaff_r11 = ppppiVar16;
          if (param_2[0x39] == 0) goto LAB_00d6781c;
          goto LAB_00d66c38;
        }
        *ppppiVar23 = (int ***)0x4;
        param_2[0x1b] = 0;
        param_2[0x34] = param_2[0x34] + 1;
        local_90 = local_234;
        local_8c = ppppiVar24;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        ppppiVar22 = local_7c;
        ppppiVar15 = local_80;
        unaff_r11 = local_84;
        unaff_r4 = local_88;
        if (local_234 == (int ****)&SUB_00000004 && ppppiVar24 == (int ****)0x0) {
          FUN_00d66ab0(ppppiVar23);
          *ppppiVar23 = (int ***)0x5;
          param_2[0x1b] = 0;
          unaff_r4 = ppppiVar23;
          unaff_r11 = local_234;
          break;
        }
        local_238 = local_88;
        local_168 = (int ****)*piVar3;
        ppppiStack_164 = (int ****)param_2[0x21];
        ppppiStack_160 = (int ****)param_2[0x22];
        ppppiStack_15c = (int ****)param_2[0x23];
        ppppiStack_158 = (int ****)param_2[0x24];
        local_154 = (int ****)param_2[0x25];
        ppppiStack_150 = (int ****)param_2[0x26];
        ppppiStack_14c = (int ****)param_2[0x27];
        ppppiStack_148 = (int ****)param_2[0x28];
        ppppiStack_144 = (int ****)param_2[0x29];
        local_140 = param_2[0x2a];
        iStack_13c = param_2[0x2b];
        uStack_138 = param_2[0x2c];
        iStack_134 = param_2[0x2d];
        iStack_130 = param_2[0x2e];
        uStack_12c = param_2[0x2f];
        local_178 = param_2[0x30];
        iStack_174 = param_2[0x31];
        iStack_170 = param_2[0x32];
        iStack_16c = param_2[0x33];
        if (((uint)local_234 & 7) != 3) {
          ppppiVar16 = local_234;
          if (local_234 == (int ****)&DAT_00000005) goto LAB_00d6746c;
          iVar4 = param_2[0x39];
          local_124 = local_248;
          local_128 = ppppiVar21;
          if (iVar4 == 0) {
            local_230 = *piVar3;
            iStack_22c = param_2[0x21];
            iStack_228 = param_2[0x22];
            iStack_224 = param_2[0x23];
            iStack_220 = param_2[0x24];
            local_21c = param_2[0x25];
            iStack_218 = param_2[0x26];
            iStack_214 = param_2[0x27];
            iStack_210 = param_2[0x28];
            iStack_20c = param_2[0x29];
            local_208 = param_2[0x2a];
            iStack_204 = param_2[0x2b];
            iStack_200 = param_2[0x2c];
            iStack_1fc = param_2[0x2d];
            iStack_1f8 = param_2[0x2e];
            iStack_1f4 = param_2[0x2f];
            local_1f0 = param_2[0x30];
            iStack_1ec = param_2[0x31];
            iStack_1e8 = param_2[0x32];
            iStack_1e4 = param_2[0x33];
            ppppiVar16 = local_84;
            ppppiVar21 = local_234;
            unaff_r11 = local_234;
            goto LAB_00d675b0;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar4 = param_2[0x39];
          }
          *param_2 = (int)local_234;
          param_2[1] = (int)ppppiVar24;
          param_2[5] = (int)ppppiVar22;
          param_2[2] = (int)unaff_r4;
          param_2[3] = (int)unaff_r11;
          param_2[4] = (int)ppppiVar15;
          param_2[6] = (int)local_168;
          param_2[7] = (int)ppppiStack_164;
          param_2[8] = (int)ppppiStack_160;
          param_2[9] = (int)ppppiStack_15c;
          param_2[10] = (int)ppppiStack_158;
          param_2[0xb] = (int)local_154;
          param_2[0xc] = (int)ppppiStack_150;
          param_2[0xd] = (int)ppppiStack_14c;
          param_2[0xe] = (int)ppppiStack_148;
          param_2[0xf] = (int)ppppiStack_144;
          param_2[0x10] = local_140;
          param_2[0x11] = iStack_13c;
          param_2[0x12] = uStack_138;
          param_2[0x13] = iStack_134;
          param_2[0x14] = iStack_130;
          param_2[0x15] = uStack_12c;
          param_2[0x16] = local_178;
          param_2[0x17] = iStack_174;
          param_2[0x18] = iStack_170;
          param_2[0x19] = iStack_16c;
          FUN_01283fd8(&local_d4,unaff_r8,iVar4);
          unaff_r11 = local_234;
          if (((uint)local_c8 & 1) == 0) goto LAB_00d66c58;
          local_bc = (undefined1 *)((int)local_d0 + ((uint)local_c8 >> 5));
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_1e0,&local_c4);
          local_b8 = (int **)((uint)local_c8 >> 5);
          if (local_1d8 < (int ****)((uint)local_c8 >> 5)) {
            local_88 = (int ****)&local_b4;
            local_b4 = local_1d8;
            local_84 = (int ****)&LAB_01a6a304;
            local_8c = (int ****)&LAB_01a6a304;
            local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d672e0;
        }
        local_118 = (int ****)*piVar3;
        local_114 = (int ****)param_2[0x21];
        ppppiStack_110 = (int ****)param_2[0x22];
        ppppiStack_10c = (int ****)param_2[0x23];
        ppppiStack_108 = (int ****)param_2[0x24];
        local_104 = (int ****)param_2[0x25];
        local_100 = param_2[0x26];
        iStack_fc = param_2[0x27];
        iStack_f8 = param_2[0x28];
        iStack_f4 = param_2[0x29];
        local_f0 = param_2[0x2a];
        iStack_ec = param_2[0x2b];
        iStack_e8 = param_2[0x2c];
        iStack_e4 = param_2[0x2d];
        iStack_e0 = param_2[0x2e];
        iStack_dc = param_2[0x2f];
        uVar13 = param_2[0x39];
        iVar17 = param_2[0x37];
        iVar4 = param_2[0x36];
        uVar14 = uVar13;
        if (param_2[0x3a] - uVar13 < 5) {
          FUN_01283c9c(unaff_r8,5);
          uVar14 = param_2[0x39];
          local_1dc = (int ****)(param_2[0x3a] - uVar14);
          if (local_1dc < 5) {
            local_124 = unaff_r11;
            local_11c = ppppiVar22;
            local_120 = ppppiVar15;
            local_128 = unaff_r4;
            local_1e0 = (int ****)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1e0);
          }
        }
        iVar19 = local_140;
        ppppiVar2 = ppppiStack_14c;
        ppppiVar1 = ppppiStack_150;
        ppppiVar16 = local_154;
        ppppiVar24 = ppppiStack_15c;
        ppppiVar21 = ppppiStack_160;
        unaff_r9 = local_168;
        param_2[0x39] = uVar14 + 5;
        local_1d4 = ppppiVar22;
        local_1d8 = ppppiVar15;
        local_1dc = unaff_r11;
        local_1e0 = unaff_r4;
        local_1d0 = local_168;
        local_1cc = ppppiStack_164;
        local_1c8 = ppppiStack_160;
        local_1c4 = ppppiStack_15c;
        ppppiStack_1c0 = ppppiStack_158;
        local_1bc = local_154;
        local_1b0 = ppppiStack_148;
        local_1ac = ppppiStack_144;
        local_1a4 = iStack_13c;
        local_1a0 = uStack_138;
        local_19c = iStack_134;
        local_198 = iStack_130;
        local_194 = uStack_12c;
        puVar11 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)0x0;
        if (local_168 != (int ****)0x0) {
          puVar5 = (undefined1 *)
                   ((int)local_168 + ((LZCOUNT((uint)local_168 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1);
        }
        if (ppppiStack_14c != (int ****)&DAT_80000000) {
          puVar11 = (undefined1 *)
                    ((int)ppppiStack_144 +
                    ((LZCOUNT((uint)ppppiStack_144 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1);
        }
        iVar26 = 0;
        iVar6 = 0;
        if (local_140 != -0x80000000) {
          iVar6 = uStack_138 + ((LZCOUNT(uStack_138 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        if (((uint)unaff_r4 & 1) != 0) {
          uVar7 = LZCOUNT((uint)unaff_r11 | 1) | 0x20;
          if ((int)unaff_r11 < 0) {
            uVar7 = LZCOUNT((int)unaff_r11 >> 0x1f);
          }
          iVar26 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar25 = 0;
        iVar18 = 0;
        if (ppppiStack_15c != (int ****)0x0) {
          ppppiVar15 = ppppiStack_160 + 2;
          ppppiVar12 = ppppiStack_15c;
          do {
            ppppiVar12 = (int ****)((int)ppppiVar12 + -1);
            iVar18 = (int)*ppppiVar15 +
                     ((LZCOUNT((uint)*ppppiVar15 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + iVar18;
            ppppiVar15 = ppppiVar15 + 3;
          } while (ppppiVar12 != (int ****)0x0);
        }
        local_234 = local_154 + (int)ppppiStack_150 * 6;
        iVar8 = FUN_00fe3f54(local_154,local_234,0);
        if (local_19c != -0x80000000) {
          iVar25 = local_194 + ((LZCOUNT(local_194 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        ppppiVar15 = (int ****)(0x7ffffffa - uVar14);
        local_248 = (int ****)
                    ((int)ppppiVar1 +
                    (int)((int)ppppiVar24 +
                         (int)(puVar11 + (int)puVar5 + iVar25 + iVar8 + iVar18 + iVar26 + iVar6)));
        unaff_r7 = local_248;
        if (ppppiVar15 < local_248) {
LAB_00d67970:
          local_d4 = unaff_r7;
          local_d0 = ppppiVar15;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_d4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (unaff_r9 != (int ****)0x0) {
          FUN_01016f10(1,ppppiVar22,unaff_r9,unaff_r8);
        }
        if (ppppiVar2 != (int ****)&DAT_80000000) {
          FUN_01016f10(2,local_1b0,local_1ac,unaff_r8);
        }
        if (iVar19 != -0x80000000) {
          FUN_01016f10(3,local_1a4,local_1a0,unaff_r8);
        }
        if (((uint)unaff_r4 & 1) != 0) {
          FUN_00efca88(4,unaff_r11,unaff_r8);
        }
        if (ppppiVar24 != (int ****)0x0) {
          iVar19 = (int)ppppiVar24 * 0xc;
          ppppiVar21 = ppppiVar21 + 1;
          do {
            FUN_01016f10(5,*ppppiVar21,ppppiVar21[1],unaff_r8);
            ppppiVar21 = ppppiVar21 + 3;
            iVar19 = iVar19 + -0xc;
          } while (iVar19 != 0);
        }
        if (ppppiVar1 != (int ****)0x0) {
          do {
            local_d4 = (int ****)CONCAT31(local_d4._1_3_,0x32);
            FUN_01284394(unaff_r8,&local_d4,1);
            unaff_r7 = (int ****)ppppiVar16[2];
            iVar19 = 0;
            iVar6 = 0;
            if (unaff_r7 != (int ****)0x0) {
              iVar6 = (int)unaff_r7 + ((LZCOUNT((uint)unaff_r7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppiVar20 = ppppiVar16[5];
            if (pppiVar20 != (int ***)0x0) {
              iVar19 = (int)pppiVar20 + ((LZCOUNT((uint)pppiVar20 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1
              ;
            }
            unaff_r9 = ppppiVar16 + 6;
            uVar14 = iVar19 + iVar6;
            iVar19 = 10;
            do {
              if (uVar14 < 0x80) {
                local_d4 = (int ****)CONCAT31(local_d4._1_3_,(char)uVar14);
                FUN_01284394(unaff_r8,&local_d4,1);
                break;
              }
              local_d4 = (int ****)(CONCAT31(local_d4._1_3_,(char)uVar14) | 0x80);
              FUN_01284394(unaff_r8,&local_d4,1);
              uVar14 = uVar14 >> 7;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
            if (unaff_r7 != (int ****)0x0) {
              FUN_01016f10(1,ppppiVar16[1],ppppiVar16[2],unaff_r8);
            }
            if (pppiVar20 != (int ***)0x0) {
              FUN_01016f10(2,ppppiVar16[4],ppppiVar16[5],unaff_r8);
            }
            ppppiVar16 = unaff_r9;
          } while (unaff_r9 != local_234);
        }
        if (local_19c != -0x80000000) {
          FUN_01016f10(7,local_198,local_194,unaff_r8);
        }
        if (ppppiVar15 < local_248) goto LAB_00d67970;
        FUN_00d67b3c(&local_1e0);
        uVar14 = param_2[0x39];
        if (uVar14 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar13,uVar14,uVar14,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,iVar4,iVar17,(int)*unaff_r8 + uVar13,uVar14 - uVar13);
        ppppiVar22 = local_7c;
        ppppiVar15 = local_80;
        ppppiVar16 = local_84;
        ppppiVar24 = local_8c;
        ppppiVar21 = local_90;
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
          local_238 = local_88;
          FUN_01bed4e2(&local_230,&local_78,0x50);
          goto LAB_00d675b0;
        }
        if (uVar10 <= (uint)param_2[0x39]) {
          FUN_01283fd8(&local_d4,unaff_r8);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d66c58;
          local_bc = (undefined1 *)((int)local_d0 + ((uint)local_c8 >> 5));
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_1e0,&local_c4);
          local_b8 = (int **)((uint)local_c8 >> 5);
          if (local_1d8 < (int ****)((uint)local_c8 >> 5)) {
            local_88 = (int ****)&local_b4;
            local_b4 = local_1d8;
            local_84 = (int ****)&LAB_01a6a304;
            local_8c = (int ****)&LAB_01a6a304;
            local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d672e0;
        }
        local_248 = unaff_r11;
        local_234 = (int ****)*ppppiVar23;
        ppppiVar24 = (int ****)param_2[0x1b];
        ppppiVar21 = unaff_r4;
      } while (local_234 != (int ****)&DAT_00000005 || ppppiVar24 != (int ****)0x0);
    }
    if (param_2[0x39] == 0) {
      ppppiVar24 = (int ****)0x0;
      ppppiVar16 = unaff_r4;
      ppppiVar21 = (int ****)&SUB_00000004;
      ppppiVar22 = unaff_r7;
      ppppiVar15 = unaff_r9;
    }
    else {
LAB_00d66c38:
      FUN_01283fd8(&local_d4,unaff_r8);
      if (((uint)local_c8 & 1) == 0) {
LAB_00d66c58:
        local_238 = (int ****)&DAT_01d2e520;
        ppppiVar16 = local_d4;
      }
      else {
        local_bc = (undefined1 *)((int)local_d0 + ((uint)local_c8 >> 5));
        local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
        local_c4 = local_cc + ((uint)local_c8 >> 5);
        FUN_01283524(&local_1e0,&local_c4);
        local_b8 = (int **)((uint)local_c8 >> 5);
        if (local_1d8 < (int ****)((uint)local_c8 >> 5)) {
          local_88 = (int ****)&local_b4;
          local_b4 = local_1d8;
          local_84 = (int ****)&LAB_01a6a304;
          local_8c = (int ****)&LAB_01a6a304;
          local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d672e0:
        local_d0 = (int ****)((int)local_1d8 - (int)local_b8);
        local_238 = local_1e0;
        ppppiVar16 = (int ****)((int)local_1dc + (int)local_b8);
        local_c8 = local_1d4;
      }
      ppppiVar24 = (int ****)0x0;
      ppppiVar21 = (int ****)&DAT_00000003;
      ppppiVar22 = local_c8;
      ppppiVar15 = local_d0;
    }
LAB_00d675b0:
    if (ppppiVar21 == (int ****)&SUB_00000004 && ppppiVar24 == (int ****)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x42);
      if (local_90 == (int ****)&SUB_00000004 && local_8c == (int ****)0x0) {
        local_80 = ppppiVar15;
        ppppiVar23 = (int ****)0xd675ec;
      }
      else {
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
          local_b0 = local_48;
          iStack_ac = iStack_44;
          iStack_a8 = iStack_40;
          iStack_a4 = iStack_3c;
          local_a0 = local_38;
          iStack_9c = iStack_34;
          iStack_98 = iStack_30;
          iStack_94 = iStack_2c;
        }
        local_248 = local_7c;
        local_234 = local_74;
        local_1e0 = local_70;
        local_1dc = ppppiStack_6c;
        local_1d8 = ppppiStack_68;
        local_1d4 = ppppiStack_64;
        local_1d0 = ppppiStack_60;
        local_1cc = local_5c;
        local_1c8 = ppppiStack_58;
        local_1c4 = ppppiStack_54;
        ppppiStack_1c0 = ppppiStack_50;
        local_1bc = ppppiStack_4c;
        unaff_r8 = local_88;
        unaff_r11 = local_84;
        ppppiVar23 = local_78;
      }
      local_128 = local_1e0;
      local_124 = local_1dc;
      local_120 = local_1d8;
      local_11c = local_1d4;
      local_118 = local_1d0;
      local_114 = local_1cc;
      ppppiStack_110 = local_1c8;
      ppppiStack_10c = local_1c4;
      ppppiStack_108 = ppppiStack_1c0;
      local_104 = local_1bc;
      local_100 = local_b0;
      iStack_fc = iStack_ac;
      iStack_f8 = iStack_a8;
      iStack_f4 = iStack_a4;
      local_f0 = local_a0;
      iStack_ec = iStack_9c;
      iStack_e8 = iStack_98;
      iStack_e4 = iStack_94;
      ppppiVar21 = local_90;
      local_238 = local_80;
      ppppiVar24 = local_8c;
LAB_00d677f8:
      if (ppppiVar21 != (int ****)&DAT_00000003 || ppppiVar24 != (int ****)0x0) {
        if (ppppiVar21 != (int ****)&SUB_00000004 || ppppiVar24 != (int ****)0x0) {
          if (ppppiVar21 != (int ****)&DAT_00000005 || ppppiVar24 != (int ****)0x0) {
            FUN_01bed4e2(&local_70,&local_128,0x48);
            local_74 = local_234;
            local_7c = local_248;
            local_90 = ppppiVar21;
            local_8c = ppppiVar24;
            local_88 = unaff_r8;
            local_84 = unaff_r11;
            local_80 = local_238;
            local_78 = ppppiVar23;
            uVar9 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar9,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d6781c;
        }
        uVar9 = 4;
        goto LAB_00d67830;
      }
    }
    else {
      if (ppppiVar21 != (int ****)&DAT_00000003 || ppppiVar24 != (int ****)0x0) {
        local_1d8 = local_238;
        local_1e0 = ppppiVar21;
        local_1dc = ppppiVar24;
        local_1d4 = ppppiVar16;
        local_1d0 = ppppiVar15;
        local_1cc = ppppiVar22;
        FUN_01bed4e2(&local_1c8,&local_230,0x50);
        ppppiVar23 = local_1c8;
        unaff_r11 = local_1d4;
        unaff_r8 = local_1d8;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_1e0);
          ppppiVar24 = local_8c;
          ppppiVar21 = local_90;
          local_234 = local_74;
          local_248 = local_7c;
          local_168 = local_70;
          ppppiStack_164 = ppppiStack_6c;
          ppppiStack_160 = ppppiStack_68;
          ppppiStack_15c = ppppiStack_64;
          ppppiStack_158 = ppppiStack_60;
          local_154 = local_5c;
          ppppiStack_150 = ppppiStack_58;
          ppppiStack_14c = ppppiStack_54;
          ppppiStack_148 = ppppiStack_50;
          ppppiStack_144 = ppppiStack_4c;
          if (local_90 == (int ****)&DAT_00000003 && local_8c == (int ****)0x0) {
            local_128 = local_70;
            local_124 = ppppiStack_6c;
            local_120 = ppppiStack_68;
            local_11c = ppppiStack_64;
            local_118 = ppppiStack_60;
            local_114 = local_5c;
            ppppiStack_110 = ppppiStack_58;
            ppppiStack_10c = ppppiStack_54;
            ppppiStack_108 = ppppiStack_50;
            local_104 = ppppiStack_4c;
            FUN_005f6588(&local_1e0);
            ppppiVar24 = (int ****)0x0;
            ppppiVar21 = (int ****)&DAT_00000003;
          }
          else {
            local_100 = local_48;
            iStack_fc = iStack_44;
            iStack_f8 = iStack_40;
            iStack_f4 = iStack_3c;
            local_f0 = local_38;
            iStack_ec = iStack_34;
            iStack_e8 = iStack_30;
            iStack_e4 = iStack_2c;
            local_128 = local_70;
            local_124 = ppppiStack_6c;
            local_120 = ppppiStack_68;
            local_11c = ppppiStack_64;
            local_118 = ppppiStack_60;
            local_114 = local_5c;
            ppppiStack_110 = ppppiStack_58;
            ppppiStack_10c = ppppiStack_54;
            ppppiStack_108 = ppppiStack_50;
            local_104 = ppppiStack_4c;
            FUN_005f6588(&local_1e0);
          }
          ppppiVar23 = local_78;
          unaff_r8 = local_88;
          local_238 = local_80;
          unaff_r11 = local_84;
        }
        else {
          local_234 = local_1c4;
          FUN_01bed4e2(&local_128,&iStack_228,0x48);
          local_238 = ppppiVar15;
          local_248 = ppppiVar22;
        }
        goto LAB_00d677f8;
      }
      unaff_r11 = (int ****)0x0;
      unaff_r8 = (int ****)&DAT_00000003;
      ppppiVar23 = ppppiVar15;
      local_248 = ppppiVar16;
      local_234 = ppppiVar22;
    }
    param_1[8] = local_128;
    param_1[9] = local_124;
    param_1[10] = local_120;
    param_1[0xb] = local_11c;
    param_1[0xc] = local_118;
    param_1[0xd] = local_114;
    param_1[0xe] = ppppiStack_110;
    param_1[0xf] = ppppiStack_10c;
    param_1[0x10] = ppppiStack_108;
    param_1[0x11] = local_104;
    param_1[1] = 0;
    param_1[2] = unaff_r8;
    param_1[3] = unaff_r11;
    *param_1 = 3;
    param_1[4] = local_238;
    param_1[5] = local_248;
    param_1[6] = ppppiVar23;
    param_1[7] = local_234;
  }
  else {
    local_238 = (int ****)param_2[2];
    ppppiVar16 = (int ****)param_2[3];
    ppppiVar15 = (int ****)param_2[4];
    ppppiVar22 = (int ****)param_2[5];
    FUN_01bed4e2(&local_230,param_2 + 6,0x50);
    if (ppppiVar21 != (int ****)&DAT_00000005 || ppppiVar24 != (int ****)0x0) goto LAB_00d675b0;
LAB_00d6781c:
    uVar9 = 5;
LAB_00d67830:
    *param_1 = uVar9;
    param_1[1] = 0;
  }
  return;
}

