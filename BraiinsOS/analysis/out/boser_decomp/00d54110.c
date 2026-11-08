// FUN_00d54110 @ 00d54110 size=3988 calls_out=21 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d54110(undefined4 *param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  uint *unaff_r5;
  uint *unaff_r6;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint **unaff_r10;
  uint *unaff_r11;
  uint *puVar22;
  uint *extraout_r12;
  uint *puVar23;
  uint *local_208;
  uint *local_204;
  uint *local_200;
  uint *puStack_1fc;
  uint *puStack_1f8;
  uint *puStack_1f4;
  uint *puStack_1f0;
  uint *local_1ec;
  uint *puStack_1e8;
  uint *puStack_1e4;
  uint *puStack_1e0;
  uint *puStack_1dc;
  uint local_1d8;
  uint *puStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint local_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint *local_168;
  uint *local_164;
  uint *local_160;
  uint *local_15c;
  uint *local_158;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint *local_140;
  uint *puStack_13c;
  undefined1 local_138 [4];
  uint *local_134;
  uint local_130;
  uint *local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint *local_100;
  uint *local_fc;
  uint *local_f8;
  uint *local_f4;
  uint *puStack_f0;
  uint *local_ec;
  uint *puStack_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  uint *local_b4;
  uint local_b0;
  uint *puStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *local_90;
  uint *local_8c;
  uint **local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  uint *puStack_60;
  uint *local_5c;
  uint *puStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  uint local_48;
  uint *puStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar18 = (uint *)*param_2;
  puVar20 = (uint *)param_2[1];
  uVar6 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar18 == (uint *)&DAT_00000003 && puVar20 == (uint *)0x0) {
    puVar23 = param_2 + 0x1a;
    local_204 = param_2 + 0x38;
    puVar18 = (uint *)*puVar23;
    puVar20 = (uint *)param_2[0x1b];
    if (puVar18 != (uint *)&DAT_00000005 || puVar20 != (uint *)0x0) {
      do {
        local_208 = param_2;
        if (0x1f < param_2[0x34]) {
          iVar3 = *(int *)*param_3;
          iVar16 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar3 + 8))(iVar16);
LAB_00d54a44:
          if (param_2[0x39] == 0) goto LAB_00d54ecc;
          goto LAB_00d5417c;
        }
        unaff_r10 = (uint **)param_2[0x1c];
        puVar15 = (uint *)param_2[0x1d];
        puVar22 = (uint *)param_2[0x1f];
        unaff_r11 = (uint *)param_2[0x1e];
        param_2[0x34] = param_2[0x34] + 1;
        *puVar23 = 4;
        param_2[0x1b] = 0;
        if (((uint)puVar18 & 7) == 4) {
          *puVar23 = 5;
          param_2[0x1b] = 0;
          unaff_r10 = (uint **)puVar15;
          unaff_r11 = puVar22;
          break;
        }
        if (puVar18 == (uint *)&DAT_00000005) goto LAB_00d54a44;
        local_200 = (uint *)param_2[0x20];
        puStack_1fc = (uint *)param_2[0x21];
        puStack_1f8 = (uint *)param_2[0x22];
        puStack_1f4 = (uint *)param_2[0x23];
        puStack_1f0 = (uint *)param_2[0x24];
        local_1ec = (uint *)param_2[0x25];
        puStack_1e8 = (uint *)param_2[0x26];
        puStack_1e4 = (uint *)param_2[0x27];
        puStack_1e0 = (uint *)param_2[0x28];
        puStack_1dc = (uint *)param_2[0x29];
        local_1d8 = param_2[0x2a];
        puStack_1d4 = (uint *)param_2[0x2b];
        uStack_1d0 = param_2[0x2c];
        uStack_1cc = param_2[0x2d];
        local_1c8 = param_2[0x2e];
        uStack_1c4 = param_2[0x2f];
        local_d8 = param_2[0x30];
        uStack_d4 = param_2[0x31];
        uStack_d0 = param_2[0x32];
        uStack_cc = param_2[0x33];
        if (puVar18 != (uint *)&DAT_00000003 || puVar20 != (uint *)0x0) {
          uVar6 = param_2[0x39];
          if (uVar6 == 0) {
            local_1b8 = param_2[0x20];
            uStack_1b4 = param_2[0x21];
            uStack_1b0 = param_2[0x22];
            uStack_1ac = param_2[0x23];
            uStack_1a8 = param_2[0x24];
            local_1a4 = param_2[0x25];
            uStack_1a0 = param_2[0x26];
            uStack_19c = param_2[0x27];
            uStack_198 = param_2[0x28];
            uStack_194 = param_2[0x29];
            local_190 = param_2[0x2a];
            uStack_18c = param_2[0x2b];
            uStack_188 = param_2[0x2c];
            uStack_184 = param_2[0x2d];
            uStack_180 = param_2[0x2e];
            uStack_17c = param_2[0x2f];
            local_178 = param_2[0x30];
            uStack_174 = param_2[0x31];
            uStack_170 = param_2[0x32];
            uStack_16c = param_2[0x33];
          }
          else {
            if (*param_2 != 3 || param_2[1] != 0) {
              FUN_005f6588(param_2);
              uVar6 = param_2[0x39];
            }
            param_2[2] = (uint)unaff_r10;
            param_2[4] = (uint)unaff_r11;
            *param_2 = (uint)puVar18;
            param_2[1] = (uint)puVar20;
            param_2[3] = (uint)puVar15;
            param_2[5] = (uint)puVar22;
            param_2[6] = (uint)local_200;
            param_2[7] = (uint)puStack_1fc;
            param_2[8] = (uint)puStack_1f8;
            param_2[9] = (uint)puStack_1f4;
            param_2[10] = (uint)puStack_1f0;
            param_2[0xb] = (uint)local_1ec;
            param_2[0xc] = (uint)puStack_1e8;
            param_2[0xd] = (uint)puStack_1e4;
            param_2[0xe] = (uint)puStack_1e0;
            param_2[0xf] = (uint)puStack_1dc;
            param_2[0x10] = local_1d8;
            param_2[0x11] = (uint)puStack_1d4;
            param_2[0x12] = uStack_1d0;
            param_2[0x13] = uStack_1cc;
            param_2[0x14] = local_1c8;
            param_2[0x15] = uStack_1c4;
            param_2[0x16] = local_d8;
            param_2[0x17] = uStack_d4;
            param_2[0x18] = uStack_d0;
            param_2[0x19] = uStack_cc;
            FUN_01283fd8(&local_100,local_204,uVar6);
            puVar18 = local_f4;
            if (((uint)local_f4 & 1) == 0) {
              puVar22 = local_f4;
              puVar15 = local_100;
              unaff_r10 = (uint **)&DAT_01d2e520;
              unaff_r11 = local_fc;
            }
            else {
              local_bc = (int)local_fc + ((uint)local_f4 >> 5);
              local_c0 = (int)local_100 - ((uint)local_f4 >> 5);
              local_c4 = (undefined1 *)((int)local_f8 + ((uint)local_f4 >> 5));
              FUN_01283524(&local_168,&local_c4);
              local_b8 = (uint)puVar18 >> 5;
              if (local_160 < (uint *)((uint)puVar18 >> 5)) {
                local_88 = &local_b4;
                local_b4 = local_160;
                local_84 = (uint *)&LAB_01a6a304;
                local_8c = (uint *)&LAB_01a6a304;
                local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
              }
              unaff_r11 = (uint *)((int)local_160 - local_b8);
              puVar15 = (uint *)((int)local_164 + local_b8);
              puVar22 = local_15c;
              unaff_r10 = (uint **)local_168;
            }
            puVar20 = (uint *)0x0;
            puVar18 = (uint *)&DAT_00000003;
          }
          goto LAB_00d54c6c;
        }
        uVar21 = param_2[0x39];
        uVar13 = param_2[0x36];
        uVar12 = param_2[0x37];
        uVar19 = uVar21;
        if (param_2[0x3a] - uVar21 < 5) {
          FUN_01283c9c(local_204,5);
          uVar19 = param_2[0x39];
          local_164 = (uint *)(param_2[0x3a] - uVar19);
          if (local_164 < 5) {
            local_168 = (uint *)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_168);
          }
        }
        unaff_r5 = puStack_1e0;
        param_2[0x39] = uVar19 + 5;
        local_158 = local_200;
        local_154 = puStack_1fc;
        local_150 = puStack_1f8;
        local_14c = puStack_1f4;
        local_148 = puStack_1f0;
        local_144 = local_1ec;
        local_140 = puStack_1e8;
        puStack_13c = puStack_1e4;
        local_134 = puStack_1dc;
        local_130 = local_1d8;
        local_12c = puStack_1d4;
        local_128 = uStack_1d0;
        local_124 = uStack_1cc;
        local_120 = local_1c8;
        iVar16 = 0;
        iVar3 = 0;
        uVar14 = uStack_1c4 & 0xff;
        local_168 = (uint *)unaff_r10;
        local_164 = puVar15;
        local_160 = unaff_r11;
        local_15c = puVar22;
        if (puStack_1e0 != (uint *)&SUB_00000004) {
          iVar3 = FUN_00f00f10(local_138);
          iVar3 = iVar3 + 2;
        }
        puVar18 = local_150;
        puVar17 = local_168;
        if (((uint)local_168 & 1) != 0) {
          if (local_160 == (uint *)0x0 && local_15c == (uint *)0x0) {
            iVar7 = 2;
          }
          else {
            uVar10 = LZCOUNT((uint)local_160 | 1) | 0x20;
            if (local_15c != (uint *)0x0) {
              uVar10 = LZCOUNT(local_15c);
            }
            iVar7 = ((uVar10 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          if (local_158 == (uint *)0x0) {
            iVar16 = 0;
          }
          else {
            uVar10 = LZCOUNT((uint)local_158 | 1) | 0x20;
            if ((int)local_158 < 0) {
              uVar10 = LZCOUNT((int)local_158 >> 0x1f);
            }
            iVar16 = ((uVar10 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
          iVar16 = iVar16 + iVar7;
        }
        iVar7 = 0;
        if (((uint)local_150 & 1) != 0) {
          if (local_148 == (uint *)0x0 && local_144 == (uint *)0x0) {
            iVar8 = 2;
          }
          else {
            uVar10 = LZCOUNT((uint)local_148 | 1) | 0x20;
            if (local_144 != (uint *)0x0) {
              uVar10 = LZCOUNT(local_144);
            }
            iVar8 = ((uVar10 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          if (local_140 == (uint *)0x0) {
            iVar7 = 0;
          }
          else {
            uVar10 = LZCOUNT((uint)local_140 | 1) | 0x20;
            if ((int)local_140 < 0) {
              uVar10 = LZCOUNT((int)local_140 >> 0x1f);
            }
            iVar7 = ((uVar10 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
          iVar7 = iVar7 + iVar8;
        }
        puVar20 = (uint *)(iVar3 + uVar14 * 2 + iVar16 + iVar7);
        if ((uint *)(0x7ffffffa - uVar19) < puVar20) {
          local_100 = puVar20;
          local_fc = (uint *)(0x7ffffffa - uVar19);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_100,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (uVar14 != 0) {
          FUN_00efe13c(1,1,local_204);
        }
        if (unaff_r5 != (uint *)&SUB_00000004) {
          local_100._0_1_ = 0x12;
          FUN_01284394(local_204,&local_100,1);
          uVar2 = FUN_00f00f10(local_138);
          local_100 = (uint *)CONCAT31(local_100._1_3_,uVar2);
          FUN_01284394(local_204,&local_100,1);
          if (unaff_r5 != (uint *)&DAT_00000003) {
            if (unaff_r5 == (uint *)0x0) {
              local_100._0_1_ = 10;
              FUN_01284394(local_204,&local_100,1);
              if (local_134 == (uint *)0x2) {
                local_100 = (uint *)((uint)local_100._1_3_ << 8);
                FUN_01284394(local_204,&local_100,1);
              }
              else {
                if (local_12c == (uint *)0x0) {
                  cVar5 = '\x02';
                }
                else {
                  cVar5 = (char)((LZCOUNT((uint)local_12c | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x03';
                }
                cVar9 = '\0';
                cVar11 = '\0';
                if (local_128 != 0) {
                  cVar11 = (char)((LZCOUNT(local_128 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
                }
                if (((uint)local_134 & 1) != 0) {
                  cVar9 = (char)((LZCOUNT(local_130 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
                }
                local_100 = (uint *)CONCAT31(local_100._1_3_,cVar11 + cVar5 + cVar9);
                FUN_01284394(local_204,&local_100,1);
                FUN_00f010d4(1,&local_134,local_204);
              }
            }
            else {
              if (unaff_r5 == (uint *)&DAT_00000001) {
                local_100 = (uint *)CONCAT31(local_100._1_3_,0x12);
                FUN_01284394(local_204,&local_100,1);
                iVar16 = 0;
                iVar3 = 0;
                if (local_134 == (uint *)&DAT_00000001) {
                  uVar19 = LZCOUNT(local_130 | 1) | 0x20;
                  if ((int)local_130 < 0) {
                    uVar19 = LZCOUNT((int)local_130 >> 0x1f);
                  }
                  iVar3 = ((uVar19 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
                }
                if (local_12c != (uint *)0x2) {
                  if (local_124 == 0) {
                    iVar7 = 2;
                  }
                  else {
                    iVar7 = ((LZCOUNT(local_124 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
                  }
                  iVar16 = 0;
                  iVar8 = 0;
                  if (local_120 != 0) {
                    iVar8 = ((LZCOUNT(local_120 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                  }
                  if (((uint)local_12c & 1) != 0) {
                    iVar16 = ((LZCOUNT(local_128 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                  }
                  iVar16 = iVar8 + iVar7 + iVar16;
                }
                iVar7 = 10;
                uVar19 = iVar16 + iVar3;
                do {
                  if (uVar19 >> 7 == 0) {
                    local_100 = (uint *)CONCAT31(local_100._1_3_,(char)uVar19);
                    FUN_01284394(local_204,&local_100,1);
                    break;
                  }
                  local_100 = (uint *)(CONCAT31(local_100._1_3_,(char)uVar19) | 0x80);
                  FUN_01284394(local_204,&local_100,1);
                  iVar7 = iVar7 + -1;
                  uVar19 = uVar19 >> 7;
                } while (iVar7 != 0);
                unaff_r5 = local_12c;
                if (local_134 != (uint *)0x0) {
                  FUN_00efca88(1,local_130,local_204);
                }
              }
              else {
                local_100 = (uint *)CONCAT31(local_100._1_3_,0x1a);
                FUN_01284394(local_204,&local_100,1);
                iVar16 = 0;
                iVar3 = 0;
                if (local_134 == (uint *)&DAT_00000001) {
                  iVar3 = ((LZCOUNT(local_130 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                if (local_12c != (uint *)0x2) {
                  if (local_124 == 0) {
                    iVar7 = 2;
                  }
                  else {
                    iVar7 = ((LZCOUNT(local_124 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
                  }
                  iVar16 = 0;
                  iVar8 = 0;
                  if (local_120 != 0) {
                    iVar8 = ((LZCOUNT(local_120 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                  }
                  if (((uint)local_12c & 1) != 0) {
                    iVar16 = ((LZCOUNT(local_128 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                  }
                  iVar16 = iVar8 + iVar7 + iVar16;
                }
                iVar7 = 10;
                uVar19 = iVar16 + iVar3;
                do {
                  if (uVar19 >> 7 == 0) {
                    local_100 = (uint *)CONCAT31(local_100._1_3_,(char)uVar19);
                    FUN_01284394(local_204,&local_100,1);
                    break;
                  }
                  local_100 = (uint *)(CONCAT31(local_100._1_3_,(char)uVar19) | 0x80);
                  FUN_01284394(local_204,&local_100,1);
                  iVar7 = iVar7 + -1;
                  uVar19 = uVar19 >> 7;
                } while (iVar7 != 0);
                unaff_r5 = local_12c;
                if (local_134 != (uint *)0x0) {
                  FUN_00efc9fc(1,local_130,local_204);
                }
              }
              if (unaff_r5 != (uint *)0x2) {
                FUN_00f010d4(2,&local_12c,local_204);
              }
            }
          }
        }
        if (((uint)puVar17 & 1) != 0) {
          FUN_00efc900(3,&local_160,local_160,local_15c,local_158,local_204);
        }
        if (((uint)puVar18 & 1) != 0) {
          FUN_00efc900(4,&local_148,local_148,local_144,local_140,local_204);
        }
        uVar19 = param_2[0x39];
        if (uVar19 < uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar21,uVar19,uVar19,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,uVar13,uVar12,*local_204 + uVar21,uVar19 - uVar21);
        puVar22 = local_7c;
        unaff_r11 = local_80;
        puVar1 = local_84;
        unaff_r10 = local_88;
        puVar20 = local_8c;
        puVar18 = local_90;
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          FUN_01bed4e2(&local_1b8,&local_78,0x50);
          puVar15 = puVar1;
          goto LAB_00d54c6c;
        }
        if (uVar6 <= param_2[0x39]) {
          FUN_01283fd8(&local_100,local_204);
          puVar18 = local_f4;
          if (((uint)local_f4 & 1) == 0) goto LAB_00d5419c;
          local_bc = (int)local_fc + ((uint)local_f4 >> 5);
          local_c0 = (int)local_100 - ((uint)local_f4 >> 5);
          local_c4 = (undefined1 *)((int)local_f8 + ((uint)local_f4 >> 5));
          FUN_01283524(&local_168,&local_c4);
          local_b8 = (uint)puVar18 >> 5;
          if (local_160 < (uint *)((uint)puVar18 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_160;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          unaff_r11 = (uint *)((int)local_160 - local_b8);
          puVar15 = (uint *)((int)local_164 + local_b8);
          puVar22 = local_15c;
          unaff_r10 = (uint **)local_168;
          goto LAB_00d54a0c;
        }
        puVar18 = (uint *)*puVar23;
        puVar20 = (uint *)param_2[0x1b];
        unaff_r6 = local_204;
        unaff_r10 = (uint **)puVar15;
        unaff_r11 = puVar17;
      } while (puVar18 != (uint *)&DAT_00000005 || puVar20 != (uint *)0x0);
    }
    puVar22 = unaff_r5;
    if (param_2[0x39] == 0) {
      puVar20 = (uint *)0x0;
      puVar18 = (uint *)&SUB_00000004;
      puVar15 = unaff_r6;
    }
    else {
LAB_00d5417c:
      FUN_01283fd8(&local_100,local_204);
      puVar18 = local_f4;
      if (((uint)local_f4 & 1) == 0) {
LAB_00d5419c:
        puVar22 = local_f4;
        puVar15 = local_100;
        unaff_r10 = (uint **)&DAT_01d2e520;
        unaff_r11 = local_fc;
      }
      else {
        local_bc = (int)local_fc + ((uint)local_f4 >> 5);
        local_c0 = (int)local_100 - ((uint)local_f4 >> 5);
        local_c4 = (undefined1 *)((int)local_f8 + ((uint)local_f4 >> 5));
        FUN_01283524(&local_168,&local_c4);
        local_b8 = (uint)puVar18 >> 5;
        if (local_160 < (uint *)((uint)puVar18 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_160;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
        unaff_r11 = (uint *)((int)local_160 - local_b8);
        puVar15 = (uint *)((int)local_164 + local_b8);
        puVar22 = local_15c;
        unaff_r10 = (uint **)local_168;
      }
LAB_00d54a0c:
      puVar20 = (uint *)0x0;
      puVar18 = (uint *)&DAT_00000003;
    }
LAB_00d54c6c:
    if (puVar18 == (uint *)&SUB_00000004 && puVar20 == (uint *)0x0) {
      puVar23 = (uint *)0xd54cac;
      FUN_01a737fc(&local_90,param_2 + 0x42);
      puVar17 = (uint *)unaff_r10;
      unaff_r10 = (uint **)unaff_r11;
      puVar22 = extraout_r12;
      if (local_90 != (uint *)&SUB_00000004 || local_8c != (uint *)0x0) {
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_b0 = local_48;
          puStack_ac = puStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_204 = (uint *)local_88;
        local_208 = local_84;
        local_168 = local_70;
        local_164 = puStack_6c;
        local_160 = puStack_68;
        local_15c = puStack_64;
        local_158 = puStack_60;
        local_154 = local_5c;
        local_150 = puStack_58;
        local_14c = puStack_54;
        local_148 = puStack_50;
        local_144 = puStack_4c;
        puVar17 = local_74;
        unaff_r10 = (uint **)local_80;
        puVar22 = local_7c;
        puVar23 = local_78;
      }
      local_200 = local_168;
      puStack_1fc = local_164;
      puStack_1f8 = local_160;
      puStack_1f4 = local_15c;
      puStack_1f0 = local_158;
      local_1ec = local_154;
      puStack_1e8 = local_150;
      puStack_1e4 = local_14c;
      puStack_1e0 = local_148;
      puStack_1dc = local_144;
      local_1d8 = local_b0;
      puStack_1d4 = puStack_ac;
      uStack_1d0 = uStack_a8;
      uStack_1cc = uStack_a4;
      local_1c8 = local_a0;
      uStack_1c4 = uStack_9c;
      uStack_1c0 = uStack_98;
      uStack_1bc = uStack_94;
      puVar18 = local_90;
      puVar20 = local_8c;
LAB_00d54ea8:
      if (puVar18 != (uint *)&DAT_00000003 || puVar20 != (uint *)0x0) {
        if (puVar18 != (uint *)&SUB_00000004 || puVar20 != (uint *)0x0) {
          if (puVar18 != (uint *)&DAT_00000005 || puVar20 != (uint *)0x0) {
            FUN_01bed4e2(&local_70,&local_200,0x48);
            local_88 = (uint **)local_204;
            local_90 = puVar18;
            local_8c = puVar20;
            local_84 = local_208;
            local_80 = (uint *)unaff_r10;
            local_7c = puVar22;
            local_78 = puVar23;
            local_74 = puVar17;
            uVar4 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar4,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d54ecc;
        }
        uVar4 = 4;
        goto LAB_00d54ee0;
      }
    }
    else {
      if (puVar18 != (uint *)&DAT_00000003 || puVar20 != (uint *)0x0) {
        local_168 = puVar18;
        local_164 = puVar20;
        local_160 = (uint *)unaff_r10;
        local_15c = puVar15;
        local_158 = unaff_r11;
        local_154 = puVar22;
        FUN_01bed4e2(&local_150,&local_1b8,0x50);
        puVar17 = local_14c;
        puVar23 = local_150;
        local_208 = local_15c;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_168);
          local_204 = (uint *)local_88;
          local_100 = local_70;
          local_fc = puStack_6c;
          local_f8 = puStack_68;
          local_f4 = puStack_64;
          puStack_f0 = puStack_60;
          local_ec = local_5c;
          puStack_e8 = puStack_58;
          puStack_e4 = puStack_54;
          puStack_e0 = puStack_50;
          puStack_dc = puStack_4c;
          if (local_90 == (uint *)&DAT_00000003 && local_8c == (uint *)0x0) {
            local_200 = local_70;
            puStack_1fc = puStack_6c;
            puStack_1f8 = puStack_68;
            puStack_1f4 = puStack_64;
            puStack_1f0 = puStack_60;
            local_1ec = local_5c;
            puStack_1e8 = puStack_58;
            puStack_1e4 = puStack_54;
            puStack_1e0 = puStack_50;
            puStack_1dc = puStack_4c;
            FUN_005f6588(&local_168);
            local_8c = (uint *)0x0;
            local_90 = (uint *)&DAT_00000003;
          }
          else {
            local_1d8 = local_48;
            puStack_1d4 = puStack_44;
            uStack_1d0 = uStack_40;
            uStack_1cc = uStack_3c;
            local_1c8 = local_38;
            uStack_1c4 = uStack_34;
            uStack_1c0 = uStack_30;
            uStack_1bc = uStack_2c;
            local_200 = local_70;
            puStack_1fc = puStack_6c;
            puStack_1f8 = puStack_68;
            puStack_1f4 = puStack_64;
            puStack_1f0 = puStack_60;
            local_1ec = local_5c;
            puStack_1e8 = puStack_58;
            puStack_1e4 = puStack_54;
            puStack_1e0 = puStack_50;
            puStack_1dc = puStack_4c;
            FUN_005f6588(&local_168);
          }
          puVar23 = local_78;
          puVar22 = local_7c;
          puVar17 = local_74;
          puVar18 = local_90;
          puVar20 = local_8c;
          local_208 = local_84;
          unaff_r10 = (uint **)local_80;
        }
        else {
          local_204 = local_160;
          FUN_01bed4e2(&local_200,&uStack_1b0,0x48);
          unaff_r10 = (uint **)unaff_r11;
        }
        goto LAB_00d54ea8;
      }
      local_208 = (uint *)0x0;
      local_204 = (uint *)&DAT_00000003;
      puVar23 = unaff_r11;
      puVar17 = puVar22;
      puVar22 = puVar15;
    }
    param_1[8] = local_200;
    param_1[9] = puStack_1fc;
    param_1[10] = puStack_1f8;
    param_1[0xb] = puStack_1f4;
    param_1[0xc] = puStack_1f0;
    param_1[0xd] = local_1ec;
    param_1[0xe] = puStack_1e8;
    param_1[0xf] = puStack_1e4;
    param_1[0x10] = puStack_1e0;
    param_1[0x11] = puStack_1dc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_204;
    param_1[3] = local_208;
    param_1[4] = unaff_r10;
    param_1[5] = puVar22;
    param_1[6] = puVar23;
    param_1[7] = puVar17;
  }
  else {
    unaff_r10 = (uint **)param_2[2];
    puVar15 = (uint *)param_2[3];
    unaff_r11 = (uint *)param_2[4];
    puVar22 = (uint *)param_2[5];
    FUN_01bed4e2(&local_1b8,param_2 + 6,0x50);
    if (puVar18 != (uint *)&DAT_00000005 || puVar20 != (uint *)0x0) goto LAB_00d54c6c;
LAB_00d54ecc:
    uVar4 = 5;
LAB_00d54ee0:
    *param_1 = uVar4;
    param_1[1] = 0;
  }
  return;
}

