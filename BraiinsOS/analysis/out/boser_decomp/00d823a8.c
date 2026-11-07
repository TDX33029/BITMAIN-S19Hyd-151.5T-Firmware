// FUN_00d823a8 @ 00d823a8 size=4392 calls_out=20 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d823a8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *extraout_r2;
  uint *puVar18;
  uint *extraout_r2_00;
  uint *extraout_r2_01;
  uint *extraout_r2_02;
  uint *extraout_r2_03;
  uint *extraout_r2_04;
  uint *extraout_r2_05;
  uint *extraout_r2_06;
  uint *extraout_r2_07;
  uint *extraout_r2_08;
  uint *extraout_r2_09;
  uint *extraout_r2_10;
  uint *extraout_r2_11;
  uint *extraout_r2_12;
  uint *extraout_r2_13;
  uint *extraout_r2_14;
  uint *extraout_r2_15;
  uint *extraout_r2_16;
  uint *extraout_r2_17;
  uint *extraout_r2_18;
  uint *extraout_r2_19;
  uint *extraout_r2_20;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint *unaff_r7;
  uint uVar23;
  uint *puVar24;
  uint *unaff_r8;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  uint *unaff_r10;
  undefined1 *puVar28;
  uint *puVar29;
  uint **unaff_r11;
  uint uVar30;
  double dVar31;
  uint *local_260;
  uint *local_23c;
  uint *local_238;
  uint *local_234;
  uint *local_230;
  uint *local_22c;
  uint *local_228;
  uint *local_224;
  uint *local_220;
  uint *local_21c;
  uint *puStack_218;
  uint *puStack_214;
  uint *local_210;
  uint *puStack_20c;
  uint *local_208;
  uint *puStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [8];
  undefined1 auStack_1e0 [72];
  uint *local_198;
  uint *puStack_194;
  uint *puStack_190;
  uint *puStack_18c;
  uint *puStack_188;
  uint *local_184;
  uint *local_180;
  uint *puStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  int iStack_170;
  int iStack_16c;
  uint *local_168;
  uint *puStack_164;
  uint *puStack_160;
  uint *puStack_15c;
  uint *local_158;
  uint *puStack_154;
  uint *puStack_150;
  uint *puStack_14c;
  uint *local_148;
  uint *local_144;
  int local_140;
  uint *local_13c;
  uint *local_138;
  uint *local_134;
  uint *local_130;
  uint *local_12c;
  uint *local_128;
  uint *local_124;
  uint *local_120;
  uint *local_11c;
  uint *local_118;
  uint *local_114;
  uint *local_110;
  uint *local_10c;
  uint *puStack_108;
  uint *puStack_104;
  uint *local_100;
  uint *puStack_fc;
  uint *puStack_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint *puStack_ec;
  uint *local_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint *local_bc;
  uint *local_b8;
  uint *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *local_98;
  uint *local_94;
  uint **local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *puStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *local_64;
  uint *puStack_60;
  uint *puStack_5c;
  uint *puStack_58;
  uint *puStack_54;
  uint *local_50;
  uint *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar20 = (uint *)*param_2;
  puVar25 = (uint *)param_2[1];
  uVar9 = param_2[0x27];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar20 == (uint *)&DAT_00000003 && puVar25 == (uint *)0x0) {
    iVar10 = param_2[0x24];
    local_234 = (uint *)(param_2 + 0x1c);
    puVar18 = unaff_r7;
    puVar24 = unaff_r8;
    puVar29 = (uint *)unaff_r11;
    if (iVar10 != 0) {
      do {
        (**(code **)(param_2[0x25] + 0xc))(&local_98,iVar10,param_3);
        if (local_98 == (uint *)&DAT_00000005 && local_94 == (uint *)0x0) {
LAB_00d82d80:
          if (param_2[0x1d] == 0) goto LAB_00d831b8;
          goto LAB_00d82db8;
        }
        FUN_01bed4e2(&local_138,&local_98,0x68);
        puVar18 = local_124;
        puVar25 = local_128;
        puVar27 = local_12c;
        puVar29 = local_130;
        puVar20 = local_134;
        unaff_r10 = local_138;
        if (local_138 == (uint *)&SUB_00000004 && local_134 == (uint *)0x0) {
          if (param_2[0x24] != 0) {
            FUN_01139b38(param_2[0x24],param_2[0x25]);
          }
          param_2[0x24] = 0;
          puVar18 = unaff_r7;
          puVar24 = unaff_r8;
          puVar29 = (uint *)unaff_r11;
          break;
        }
        local_260 = local_130;
        local_238 = local_128;
        local_168 = local_120;
        puStack_164 = local_11c;
        puStack_160 = local_118;
        puStack_15c = local_114;
        local_158 = local_110;
        puStack_154 = local_10c;
        puStack_150 = puStack_108;
        puStack_14c = puStack_104;
        local_198 = local_100;
        puStack_194 = puStack_fc;
        puStack_190 = puStack_f8;
        puStack_18c = puStack_f4;
        puStack_188 = puStack_f0;
        local_184 = puStack_ec;
        local_180 = local_e8;
        puStack_17c = puStack_e4;
        puStack_178 = puStack_e0;
        puStack_174 = puStack_dc;
        iStack_170 = iStack_d8;
        iStack_16c = iStack_d4;
        if (local_138 != (uint *)&DAT_00000003 || local_134 != (uint *)0x0) {
          if (local_138 == (uint *)&DAT_00000005 && local_134 == (uint *)0x0) goto LAB_00d82d80;
          iVar10 = param_2[0x1d];
          local_22c = local_23c;
          local_230 = (uint *)unaff_r11;
          if (iVar10 == 0) {
            puVar20 = local_138;
            puVar18 = local_12c;
            puVar24 = local_124;
            puVar25 = local_134;
            unaff_r10 = local_128;
            goto LAB_00d82d60;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar10 = param_2[0x1d];
          }
          param_2[2] = (int)puVar29;
          param_2[3] = (int)puVar27;
          param_2[4] = (int)puVar25;
          *param_2 = (int)unaff_r10;
          param_2[1] = (int)puVar20;
          param_2[5] = (int)puVar18;
          param_2[6] = (int)local_168;
          param_2[7] = (int)puStack_164;
          param_2[8] = (int)puStack_160;
          param_2[9] = (int)puStack_15c;
          param_2[10] = (int)local_158;
          param_2[0xb] = (int)puStack_154;
          param_2[0xc] = (int)puStack_150;
          param_2[0xd] = (int)puStack_14c;
          param_2[0xe] = (int)local_198;
          param_2[0xf] = (int)puStack_194;
          param_2[0x10] = (int)puStack_190;
          param_2[0x11] = (int)puStack_18c;
          param_2[0x12] = (int)puStack_188;
          param_2[0x13] = (int)local_184;
          param_2[0x14] = (int)local_180;
          param_2[0x15] = (int)puStack_17c;
          param_2[0x16] = (int)puStack_178;
          param_2[0x17] = (int)puStack_174;
          param_2[0x18] = iStack_170;
          param_2[0x19] = iStack_16c;
          FUN_01283fd8(&local_148,local_234,iVar10);
          if (((uint)local_13c & 1) == 0) {
            local_260 = &DAT_01d2e520;
            puVar18 = local_148;
          }
          else {
            local_c4 = (int)local_144 + ((uint)local_13c >> 5);
            local_c8 = (int)local_148 - ((uint)local_13c >> 5);
            local_cc = local_140 + ((uint)local_13c >> 5);
            FUN_01283524(&local_138,&local_cc);
            local_c0 = (uint)local_13c >> 5;
            if (local_130 < (uint *)((uint)local_13c >> 5)) {
              local_90 = &local_bc;
              local_bc = local_130;
              local_8c = (uint *)&LAB_01a6a304;
              local_94 = (uint *)&LAB_01a6a304;
              local_98 = &local_c0;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
            }
            local_144 = (uint *)((int)local_130 - local_c0);
            local_260 = local_138;
            puVar18 = (uint *)((int)local_134 + local_c0);
            local_13c = local_12c;
          }
          puVar24 = local_13c;
          unaff_r10 = local_144;
          goto LAB_00d82e40;
        }
        local_220 = local_120;
        local_21c = local_11c;
        puStack_218 = local_118;
        puStack_214 = local_114;
        local_210 = local_110;
        puStack_20c = local_10c;
        local_208 = puStack_108;
        puStack_204 = puStack_104;
        uVar23 = param_2[0x1d];
        unaff_r7 = (uint *)param_2[0x1a];
        iVar10 = param_2[0x1b];
        uVar30 = uVar23;
        if (param_2[0x1e] - uVar23 < 5) {
          FUN_01283c9c(local_234,5);
          uVar30 = param_2[0x1d];
          local_134 = (uint *)(param_2[0x1e] - uVar30);
          if (local_134 < 5) {
            local_228 = local_128;
            local_224 = local_124;
            local_22c = puVar27;
            local_230 = puVar29;
            local_138 = (uint *)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_138);
          }
        }
        param_2[0x1d] = uVar30 + 5;
        local_130 = local_128;
        local_12c = local_124;
        unaff_r8 = (uint *)0x0;
        local_138 = puVar29;
        local_134 = puVar27;
        local_128 = local_168;
        local_124 = puStack_164;
        local_120 = puStack_160;
        local_11c = puStack_15c;
        local_118 = local_158;
        local_114 = puStack_154;
        local_110 = puStack_150;
        local_10c = puStack_14c;
        iVar16 = 0;
        local_238 = puVar29;
        if (((uint)puVar29 & 1) != 0) {
          if (puVar25 == (uint *)0x0 && puVar18 == (uint *)0x0) {
            iVar6 = 2;
          }
          else {
            uVar5 = LZCOUNT((uint)puVar25 | 1) | 0x20;
            if (puVar18 != (uint *)0x0) {
              uVar5 = LZCOUNT(puVar18);
            }
            iVar6 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          if (local_168 == (uint *)0x0) {
            iVar11 = 0;
          }
          else {
            uVar5 = LZCOUNT((uint)local_168 | 1) | 0x20;
            if ((int)local_168 < 0) {
              uVar5 = LZCOUNT((int)local_168 >> 0x1f);
            }
            iVar11 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
          unaff_r8 = (uint *)(iVar11 + iVar6);
        }
        if (local_158 != (uint *)0x0) {
          puVar20 = local_158;
          puVar24 = puStack_15c;
          do {
            iVar6 = 0;
            if (puVar24[0x10] != 0) {
              iVar6 = ((LZCOUNT(puVar24[0x10] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            if (puVar24[0x11] == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = ((LZCOUNT(puVar24[0x11] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            puVar19 = puVar24 + 4;
            iVar17 = 1;
            if ((*puVar24 & 1) != 0) {
              iVar17 = 10;
            }
            puVar2 = puVar24 + 8;
            puVar3 = puVar24 + 0xc;
            iVar16 = iVar16 + iVar6 + iVar11 + iVar17;
            puVar24 = puVar24 + 0x12;
            if ((*puVar19 & 1) != 0) {
              iVar16 = iVar16 + 9;
            }
            if ((*puVar2 & 1) != 0) {
              iVar16 = iVar16 + 9;
            }
            if ((*puVar3 & 1) != 0) {
              iVar16 = iVar16 + 9;
            }
            puVar20 = (uint *)((int)puVar20 + -1);
          } while (puVar20 != (uint *)0x0);
        }
        if (puStack_14c == (uint *)0x0) {
          iVar6 = 0;
          unaff_r11 = (uint **)unaff_r7;
        }
        else {
          puVar24 = puStack_150 + 0x18;
          iVar6 = 0;
          puVar20 = puStack_14c;
          do {
            iVar11 = 0;
            if (puVar24[0x16] != 0) {
              iVar11 = ((LZCOUNT(puVar24[0x16] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar17 = 1;
            if ((puVar24[-0x18] & 1) != 0) {
              iVar17 = 10;
            }
            iVar6 = iVar6 + iVar11 + iVar17;
            if ((puVar24[-0x14] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            unaff_r11 = (uint **)puVar24[-4];
            if (*(double *)(puVar24 + 0x14) != 0.0) {
              iVar6 = iVar6 + 9;
            }
            if ((puVar24[-0x10] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if ((puVar24[-0xc] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if ((puVar24[-8] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if (((uint)unaff_r11 & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if ((*puVar24 & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if ((puVar24[4] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if ((puVar24[8] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if ((puVar24[0xc] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            if ((puVar24[0x10] & 1) != 0) {
              iVar6 = iVar6 + 9;
            }
            puVar24 = puVar24 + 0x30;
            puVar20 = (uint *)((int)puVar20 + -1);
          } while (puVar20 != (uint *)0x0);
        }
        puVar20 = (uint *)(0x7ffffffa - uVar30);
        puVar24 = (uint *)((int)puStack_14c +
                          (int)((undefined1 *)((int)local_158 + (int)unaff_r8) + iVar6 + iVar16));
        if (puVar20 < puVar24) {
LAB_00d834b0:
          local_148 = puVar24;
          local_144 = puVar20;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_148,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        puVar19 = puStack_14c;
        if (((uint)puVar29 & 1) != 0) {
          FUN_00efc900(1,local_234,puVar25,puVar18,local_168,local_234);
          puVar19 = extraout_r2;
        }
        puVar25 = puVar24;
        if (local_158 != (uint *)0x0) {
          puVar25 = (uint *)0x0;
          local_238 = (uint *)((int)local_158 * 0x48);
          do {
            local_148._0_1_ = 0x12;
            FUN_01284394(local_234,&local_148,1);
            cVar4 = '\0';
            cVar8 = '\0';
            puVar28 = (undefined1 *)((int)puStack_15c + (int)puVar25);
            uVar30 = *(uint *)(puVar28 + 0x40);
            if (uVar30 != 0) {
              cVar8 = (char)((LZCOUNT(uVar30 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
            }
            unaff_r8 = *(uint **)(puVar28 + 0x44);
            if (unaff_r8 != (uint *)0x0) {
              cVar4 = (char)((LZCOUNT((uint)unaff_r8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
            }
            cVar4 = cVar4 + cVar8;
            puVar18 = (uint *)((int)puStack_15c + (int)puVar25);
            uVar26 = *puVar18;
            uVar5 = puVar18[4];
            uVar22 = puVar18[8];
            if ((uVar26 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            unaff_r11 = (uint **)puVar18[0xc];
            if ((uVar5 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            if ((uVar22 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            if (((uint)unaff_r11 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            local_148 = (uint *)CONCAT31(local_148._1_3_,cVar4);
            FUN_01284394(local_234,&local_148,1);
            puVar19 = extraout_r2_00;
            if (uVar30 != 0) {
              FUN_00efc9fc(1,*(undefined4 *)(puVar28 + 0x40),local_234);
              puVar19 = extraout_r2_01;
            }
            if (unaff_r8 != (uint *)0x0) {
              FUN_00efc9fc(2,*(undefined4 *)(puVar28 + 0x44),local_234);
              puVar19 = extraout_r2_02;
            }
            if ((uVar26 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(puVar28 + 8),3,local_234);
              puVar19 = extraout_r2_03;
            }
            if ((uVar5 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(puVar28 + 0x18),4,local_234);
              puVar19 = extraout_r2_04;
            }
            if ((uVar22 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(puVar28 + 0x28),5,local_234);
              puVar19 = extraout_r2_05;
            }
            if (((uint)unaff_r11 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(puVar28 + 0x38),6,local_234);
              puVar19 = extraout_r2_06;
            }
            puVar25 = puVar25 + 0x12;
          } while (local_238 != puVar25);
        }
        if (puStack_14c != (uint *)0x0) {
          iVar16 = 0;
          do {
            local_148._0_1_ = 0x1a;
            FUN_01284394(local_234,&local_148,1);
            local_238 = (uint *)((int)puStack_150 + iVar16);
            puVar25 = (uint *)local_238[0x2e];
            if (puVar25 == (uint *)0x0) {
              cVar4 = '\0';
            }
            else {
              cVar4 = (char)((LZCOUNT((uint)puVar25 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
            }
            puVar18 = (uint *)((int)puStack_150 + iVar16);
            uVar30 = *puVar18;
            dVar31 = *(double *)(puVar18 + 0x2c);
            unaff_r8 = (uint *)puVar18[4];
            if ((uVar30 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            uVar5 = puVar18[8];
            uVar22 = puVar18[0xc];
            if (((uint)unaff_r8 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            unaff_r11 = (uint **)puVar18[0x10];
            uVar26 = puVar18[0x14];
            uVar21 = puVar18[0x18];
            if (dVar31 != 0.0) {
              cVar4 = cVar4 + '\t';
            }
            if ((uVar5 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            if ((uVar22 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            if (((uint)unaff_r11 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            uVar12 = puVar18[0x1c];
            if ((uVar26 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            if ((uVar21 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            uVar13 = puVar18[0x20];
            if ((uVar12 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            uVar14 = puVar18[0x24];
            if ((uVar13 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            uVar15 = puVar18[0x28];
            if ((uVar14 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            if ((uVar15 & 1) != 0) {
              cVar4 = cVar4 + '\t';
            }
            local_148 = (uint *)CONCAT31(local_148._1_3_,cVar4);
            FUN_01284394(local_234,&local_148,1);
            puVar19 = extraout_r2_07;
            if (puVar25 != (uint *)0x0) {
              FUN_00efc9fc(1,local_238[0x2e],local_234);
              puVar19 = extraout_r2_08;
            }
            if ((uVar30 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 2),2,local_234);
              puVar19 = extraout_r2_09;
            }
            if (((uint)unaff_r8 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 6),3,local_234);
              puVar19 = extraout_r2_10;
            }
            if (dVar31 != 0.0) {
              FUN_01016b28((int)*(undefined8 *)(puVar18 + 0x2c),4,local_234);
              puVar19 = extraout_r2_11;
            }
            if ((uVar5 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 10),5,local_234);
              puVar19 = extraout_r2_12;
            }
            if ((uVar22 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0xe),6,local_234);
              puVar19 = extraout_r2_13;
            }
            if (((uint)unaff_r11 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0x12),7,local_234);
              puVar19 = extraout_r2_14;
            }
            if ((uVar26 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0x16),8,local_234);
              puVar19 = extraout_r2_15;
            }
            if ((uVar21 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0x1a),9,local_234);
              puVar19 = extraout_r2_16;
            }
            if ((uVar12 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0x1e),10,local_234);
              puVar19 = extraout_r2_17;
            }
            if ((uVar13 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0x22),0xb,local_234);
              puVar19 = extraout_r2_18;
            }
            if ((uVar14 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0x26),0xc,local_234);
              puVar19 = extraout_r2_19;
            }
            if ((uVar15 & 1) != 0) {
              FUN_01016b28((int)*(undefined8 *)(local_238 + 0x2a),0xd,local_234);
              puVar19 = extraout_r2_20;
            }
            iVar16 = iVar16 + 0xc0;
          } while ((int)puStack_14c * 0xc0 != iVar16);
        }
        bVar1 = puVar20 < puVar24;
        puVar20 = puVar19;
        puVar24 = puVar25;
        if (bVar1) goto LAB_00d834b0;
        FUN_0132b958(local_120,puStack_15c,8,0x48);
        FUN_0132b958(local_114,puStack_150,8,0xc0);
        uVar30 = param_2[0x1d];
        if (uVar30 < uVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar23,uVar30,uVar30,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_98,unaff_r7,iVar10,*local_234 + uVar23,uVar30 - uVar23);
        puVar24 = local_84;
        unaff_r10 = local_88;
        puVar18 = local_8c;
        puVar25 = local_94;
        puVar20 = local_98;
        if (local_98 != (uint *)&DAT_00000003 || local_94 != (uint *)0x0) {
          local_260 = (uint *)local_90;
          FUN_01bed4e2(local_1e8,&local_80,0x50);
          goto LAB_00d82f38;
        }
        if (uVar9 <= (uint)param_2[0x1d]) {
          FUN_01283fd8(&local_148,local_234);
          if (((uint)local_13c & 1) == 0) goto LAB_00d82dd8;
          local_c4 = (int)local_144 + ((uint)local_13c >> 5);
          local_c8 = (int)local_148 - ((uint)local_13c >> 5);
          local_cc = local_140 + ((uint)local_13c >> 5);
          FUN_01283524(&local_138,&local_cc);
          local_c0 = (uint)local_13c >> 5;
          if (local_130 < (uint *)((uint)local_13c >> 5)) {
            local_90 = &local_bc;
            local_bc = local_130;
            local_8c = (uint *)&LAB_01a6a304;
            local_94 = (uint *)&LAB_01a6a304;
            local_98 = &local_c0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
          }
          goto LAB_00d82e28;
        }
        iVar10 = param_2[0x24];
        local_23c = puVar27;
        puVar18 = unaff_r7;
        puVar24 = unaff_r8;
        unaff_r10 = puVar27;
        unaff_r11 = (uint **)puVar29;
      } while (iVar10 != 0);
    }
    unaff_r11 = (uint **)puVar29;
    if (param_2[0x1d] == 0) {
      puVar25 = (uint *)0x0;
      puVar20 = (uint *)&SUB_00000004;
    }
    else {
LAB_00d82db8:
      FUN_01283fd8(&local_148,local_234);
      if (((uint)local_13c & 1) == 0) {
LAB_00d82dd8:
        local_260 = &DAT_01d2e520;
        puVar18 = local_148;
        puVar24 = local_13c;
        unaff_r10 = local_144;
      }
      else {
        local_c4 = (int)local_144 + ((uint)local_13c >> 5);
        local_c8 = (int)local_148 - ((uint)local_13c >> 5);
        local_cc = local_140 + ((uint)local_13c >> 5);
        FUN_01283524(&local_138,&local_cc);
        local_c0 = (uint)local_13c >> 5;
        if (local_130 < (uint *)((uint)local_13c >> 5)) {
          local_90 = &local_bc;
          local_bc = local_130;
          local_8c = (uint *)&LAB_01a6a304;
          local_94 = (uint *)&LAB_01a6a304;
          local_98 = &local_c0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
        }
LAB_00d82e28:
        local_260 = local_138;
        puVar18 = (uint *)((int)local_134 + local_c0);
        puVar24 = local_12c;
        unaff_r10 = (uint *)((int)local_130 - local_c0);
      }
LAB_00d82e40:
      puVar25 = (uint *)0x0;
      puVar20 = (uint *)&DAT_00000003;
    }
LAB_00d82f38:
    puVar29 = unaff_r10;
    if (puVar20 == (uint *)&SUB_00000004 && puVar25 == (uint *)0x0) {
      FUN_01a737fc(&local_98,param_2 + 0x28);
      if (local_98 == (uint *)&SUB_00000004 && local_94 == (uint *)0x0) {
        local_88 = puVar24;
        puVar27 = puVar25;
      }
      else {
        if (local_98 != (uint *)&DAT_00000003 || local_94 != (uint *)0x0) {
          local_b8 = local_50;
          puStack_b4 = puStack_4c;
          uStack_b0 = uStack_48;
          uStack_ac = uStack_44;
          local_a8 = local_40;
          uStack_a4 = uStack_3c;
          uStack_a0 = uStack_38;
          uStack_9c = uStack_34;
        }
        local_234 = local_84;
        local_238 = local_7c;
        local_138 = local_78;
        local_134 = puStack_74;
        local_130 = puStack_70;
        local_12c = puStack_6c;
        local_128 = puStack_68;
        local_124 = local_64;
        local_120 = puStack_60;
        local_11c = puStack_5c;
        local_118 = puStack_58;
        local_114 = puStack_54;
        puVar27 = local_8c;
        puVar29 = local_80;
        unaff_r11 = local_90;
      }
      unaff_r10 = local_88;
      local_230 = local_138;
      local_22c = local_134;
      local_228 = local_130;
      local_224 = local_12c;
      local_220 = local_128;
      local_21c = local_124;
      puStack_218 = local_120;
      puStack_214 = local_11c;
      local_210 = local_118;
      puStack_20c = local_114;
      local_208 = local_b8;
      puStack_204 = puStack_b4;
      uStack_200 = uStack_b0;
      uStack_1fc = uStack_ac;
      local_1f8 = local_a8;
      uStack_1f4 = uStack_a4;
      uStack_1f0 = uStack_a0;
      uStack_1ec = uStack_9c;
      puVar20 = local_98;
      puVar25 = local_94;
LAB_00d83194:
      if (puVar20 != (uint *)&DAT_00000003 || puVar25 != (uint *)0x0) {
        if (puVar20 != (uint *)&SUB_00000004 || puVar25 != (uint *)0x0) {
          if (puVar20 != (uint *)&DAT_00000005 || puVar25 != (uint *)0x0) {
            FUN_01bed4e2(&local_78,&local_230,0x48);
            local_7c = local_238;
            local_84 = local_234;
            local_98 = puVar20;
            local_94 = puVar25;
            local_90 = unaff_r11;
            local_8c = puVar27;
            local_88 = unaff_r10;
            local_80 = puVar29;
            uVar7 = FUN_01a65494(&local_98);
            FUN_01a7467c(param_1,uVar7,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d831b8;
        }
        uVar7 = 4;
        goto LAB_00d831cc;
      }
      local_260 = unaff_r10;
    }
    else {
      if (puVar20 != (uint *)&DAT_00000003 || puVar25 != (uint *)0x0) {
        local_130 = local_260;
        local_138 = puVar20;
        local_134 = puVar25;
        local_12c = puVar18;
        local_128 = unaff_r10;
        local_124 = puVar24;
        FUN_01bed4e2(&local_120,local_1e8,0x50);
        puVar29 = local_120;
        puVar27 = local_12c;
        unaff_r11 = (uint **)local_130;
        if ((char)param_2[0x42] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x109) = 1;
          FUN_01a738c0(&local_98,&local_138);
          local_238 = local_7c;
          local_234 = local_84;
          local_198 = local_78;
          puStack_194 = puStack_74;
          puStack_190 = puStack_70;
          puStack_18c = puStack_6c;
          puStack_188 = puStack_68;
          local_184 = local_64;
          local_180 = puStack_60;
          puStack_17c = puStack_5c;
          puStack_178 = puStack_58;
          puStack_174 = puStack_54;
          if (local_98 == (uint *)&DAT_00000003 && local_94 == (uint *)0x0) {
            local_230 = local_78;
            local_22c = puStack_74;
            local_228 = puStack_70;
            local_224 = puStack_6c;
            local_220 = puStack_68;
            local_21c = local_64;
            puStack_218 = puStack_60;
            puStack_214 = puStack_5c;
            local_210 = puStack_58;
            puStack_20c = puStack_54;
            FUN_005f6588(&local_138);
            local_94 = (uint *)0x0;
            local_98 = (uint *)&DAT_00000003;
          }
          else {
            local_208 = local_50;
            puStack_204 = puStack_4c;
            uStack_200 = uStack_48;
            uStack_1fc = uStack_44;
            local_1f8 = local_40;
            uStack_1f4 = uStack_3c;
            uStack_1f0 = uStack_38;
            uStack_1ec = uStack_34;
            local_230 = local_78;
            local_22c = puStack_74;
            local_228 = puStack_70;
            local_224 = puStack_6c;
            local_220 = puStack_68;
            local_21c = local_64;
            puStack_218 = puStack_60;
            puStack_214 = puStack_5c;
            local_210 = puStack_58;
            puStack_20c = puStack_54;
            FUN_005f6588(&local_138);
          }
          puVar20 = local_98;
          unaff_r10 = local_88;
          puVar27 = local_8c;
          puVar29 = local_80;
          unaff_r11 = local_90;
          puVar25 = local_94;
        }
        else {
          local_238 = local_11c;
          FUN_01bed4e2(&local_230,auStack_1e0,0x48);
          local_234 = puVar24;
        }
        goto LAB_00d83194;
      }
      puVar27 = (uint *)0x0;
      unaff_r11 = (uint **)&DAT_00000003;
      local_238 = puVar24;
      local_234 = puVar18;
    }
    param_1[8] = local_230;
    param_1[9] = local_22c;
    param_1[10] = local_228;
    param_1[0xb] = local_224;
    param_1[0xc] = local_220;
    param_1[0xd] = local_21c;
    param_1[0xe] = puStack_218;
    param_1[0xf] = puStack_214;
    param_1[0x10] = local_210;
    param_1[0x11] = puStack_20c;
    param_1[1] = 0;
    param_1[2] = unaff_r11;
    *param_1 = 3;
    param_1[3] = puVar27;
    param_1[4] = local_260;
    param_1[5] = local_234;
    param_1[6] = puVar29;
    param_1[7] = local_238;
  }
  else {
    local_260 = (uint *)param_2[2];
    puVar18 = (uint *)param_2[3];
    unaff_r10 = (uint *)param_2[4];
    puVar24 = (uint *)param_2[5];
    FUN_01bed4e2(local_1e8,param_2 + 6,0x50);
LAB_00d82d60:
    if (puVar20 != (uint *)&DAT_00000005 || puVar25 != (uint *)0x0) goto LAB_00d82f38;
LAB_00d831b8:
    uVar7 = 5;
LAB_00d831cc:
    *param_1 = uVar7;
    param_1[1] = 0;
  }
  return;
}

