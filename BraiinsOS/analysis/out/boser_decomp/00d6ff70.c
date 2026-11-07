// FUN_00d6ff70 @ 00d6ff70 size=2440 calls_out=19 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00d6ff70(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *******pppppppiVar1;
  int *******pppppppiVar2;
  int *******pppppppiVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int ******ppppppiVar10;
  int ******ppppppiVar11;
  int *******pppppppiVar12;
  uint uVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  int *******unaff_r8;
  int *******pppppppiVar16;
  int *******unaff_r9;
  int *******unaff_r10;
  int *******unaff_r11;
  int *******pppppppiVar17;
  int *******local_204;
  int *******local_200;
  int *******local_1fc;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [72];
  int *******local_1a8;
  int *******local_1a4;
  int *******local_1a0;
  int *******local_19c;
  int *******pppppppiStack_198;
  int *******local_194;
  int *******pppppppiStack_190;
  int *******pppppppiStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int *******local_180;
  int *******pppppppiStack_17c;
  int *******pppppppiStack_178;
  int *******pppppppiStack_174;
  int *******pppppppiStack_170;
  int *******local_16c;
  int *******pppppppiStack_168;
  int *******pppppppiStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int *******local_130;
  int *******local_12c;
  int *******local_128;
  int *******local_124;
  int *******local_120;
  int *******local_11c;
  int *******local_118;
  int *******local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 *local_c4;
  int local_c0;
  undefined1 *local_bc;
  int *****local_b8;
  int *******local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *******local_90;
  int *******local_8c;
  int *******local_88;
  int *******local_84;
  int *******local_80;
  int *******local_7c;
  int *******local_78;
  int *******local_74;
  int *******local_70;
  int *******pppppppiStack_6c;
  int *******pppppppiStack_68;
  int *******pppppppiStack_64;
  int *******pppppppiStack_60;
  int *******local_5c;
  int *******pppppppiStack_58;
  int *******pppppppiStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pppppppiVar12 = (int *******)*param_2;
  pppppppiVar14 = (int *******)param_2[1];
  uVar6 = param_2[0x27];
  *param_2 = 3;
  param_2[1] = 0;
  if (pppppppiVar12 == (int *******)&DAT_00000003 && pppppppiVar14 == (int *******)0x0) {
    iVar7 = param_2[0x24];
    local_1fc = (int *******)(param_2 + 0x1c);
    pppppppiVar17 = unaff_r11;
    if (iVar7 != 0) {
      pppppppiVar17 = (int *******)&local_90;
      do {
        pppppppiVar15 = (int *******)&local_180;
        (**(code **)(param_2[0x25] + 0xc))(pppppppiVar17,iVar7,param_3);
        if (local_90 == (int *******)&DAT_00000005 && local_8c == (int *******)0x0) {
LAB_00d702b8:
          pppppppiVar17 = unaff_r11;
          if (param_2[0x1d] != 0) goto LAB_00d702f0;
          goto LAB_00d706fc;
        }
        FUN_01bed4e2(&local_130,pppppppiVar17,0x68);
        pppppppiVar3 = local_11c;
        pppppppiVar2 = local_120;
        pppppppiVar1 = local_124;
        pppppppiVar16 = local_128;
        pppppppiVar14 = local_12c;
        pppppppiVar12 = local_130;
        if (local_130 == (int *******)&SUB_00000004 && local_12c == (int *******)0x0) {
          if (param_2[0x24] != 0) {
            FUN_01139b38(param_2[0x24],param_2[0x25]);
          }
          param_2[0x24] = 0;
          break;
        }
        local_200 = local_124;
        FUN_01bed4e2(pppppppiVar15,&local_118,0x50);
        unaff_r11 = pppppppiVar17;
        if (pppppppiVar12 != (int *******)&DAT_00000003 || pppppppiVar14 != (int *******)0x0) {
          if (pppppppiVar12 == (int *******)&DAT_00000005 && pppppppiVar14 == (int *******)0x0)
          goto LAB_00d702b8;
          pppppppiVar17 = (int *******)param_2[0x1d];
          unaff_r8 = pppppppiVar16;
          unaff_r9 = pppppppiVar3;
          unaff_r10 = pppppppiVar2;
          unaff_r11 = pppppppiVar17;
          if (pppppppiVar17 == (int *******)0x0) goto LAB_00d7028c;
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            pppppppiVar17 = (int *******)param_2[0x1d];
          }
          param_2[3] = (int)pppppppiVar1;
          *param_2 = (int)pppppppiVar12;
          param_2[1] = (int)pppppppiVar14;
          param_2[2] = (int)pppppppiVar16;
          param_2[4] = (int)pppppppiVar2;
          param_2[5] = (int)pppppppiVar3;
          FUN_01bed4e2(param_2 + 6,&local_180,0x50);
          FUN_01283fd8(&local_1a8,local_1fc,pppppppiVar17);
          pppppppiVar12 = local_19c;
          if (((uint)local_19c & 1) == 0) goto LAB_00d70310;
          local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
          local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
          local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
          FUN_01283524(&local_130,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar12 >> 5);
          if (local_128 < (int *******)((uint)pppppppiVar12 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_128;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d70360;
        }
        uVar13 = param_2[0x1d];
        local_204 = (int *******)param_2[0x1a];
        iVar7 = param_2[0x1b];
        uVar4 = uVar13;
        if (param_2[0x1e] - uVar13 < 5) {
          FUN_01283c9c(local_1fc,5);
          uVar4 = param_2[0x1d];
          if (param_2[0x1e] - uVar4 < 5) {
            local_130 = (int *******)0x5;
            local_12c = (int *******)(param_2[0x1e] - uVar4);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_130);
          }
        }
        param_2[0x1d] = uVar4 + 5;
        if (pppppppiVar16 != (int *******)0x2) {
          if (((uint)pppppppiVar16 & 1) == 0) {
            if (pppppppiVar2 == (int *******)0x0 && pppppppiVar3 == (int *******)0x0) {
              ppppppiVar10 = (int ******)0x2;
            }
            else {
              uVar9 = LZCOUNT((uint)pppppppiVar2 | 1) | 0x20;
              if (pppppppiVar3 != (int *******)0x0) {
                uVar9 = LZCOUNT(pppppppiVar3);
              }
              ppppppiVar10 = (int ******)(((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3);
            }
            ppppppiVar11 = (int ******)(0x7ffffffa - uVar4);
            if (ppppppiVar11 < ppppppiVar10) goto LAB_00d708d8;
            if (((uint)pppppppiVar16 & 1) == 0) {
              pppppppiVar16 = (int *******)0x0;
              local_130._0_1_ = 10;
              FUN_01284394(local_1fc,&local_130,1);
              if (pppppppiVar2 == (int *******)0x0 && pppppppiVar3 == (int *******)0x0) {
                pppppppiVar16 = (int *******)0x0;
                local_130 = (int *******)((uint)local_130._1_3_ << 8);
                FUN_01284394(local_1fc,&local_130,1);
              }
              else {
                uVar4 = LZCOUNT((uint)pppppppiVar2 | 1) | 0x20;
                if (pppppppiVar3 != (int *******)0x0) {
                  uVar4 = LZCOUNT(pppppppiVar3);
                }
                local_130 = (int *******)
                            CONCAT31(local_130._1_3_,(char)((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01'
                                    );
                FUN_01284394(local_1fc,&local_130,1);
                FUN_01016968(pppppppiVar2,pppppppiVar3,local_1fc);
              }
              goto LAB_00d70178;
            }
          }
          else {
            if (pppppppiVar3 == (int *******)0x0) {
              puVar8 = (undefined1 *)0x0;
            }
            else {
              puVar8 = (undefined1 *)
                       ((int)pppppppiVar3 +
                       ((LZCOUNT((uint)pppppppiVar3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1);
            }
            ppppppiVar11 = (int ******)(0x7ffffffa - uVar4);
            ppppppiVar10 = (int ******)
                           (puVar8 + ((LZCOUNT((uint)puVar8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1);
            if (ppppppiVar11 < ppppppiVar10) {
LAB_00d708d8:
              local_130 = (int *******)ppppppiVar10;
              local_12c = (int *******)ppppppiVar11;
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_003efa56,0x27,&local_130,&DAT_01c15d9c,&DAT_01c15fbc);
            }
          }
          pppppppiVar16 = (int *******)&DAT_00000001;
          FUN_00f07224(2,pppppppiVar2,pppppppiVar3,local_1fc);
          FUN_019bb7e0(pppppppiVar1,pppppppiVar2);
        }
LAB_00d70178:
        uVar4 = param_2[0x1d];
        if (uVar4 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar13,uVar4,uVar4,&DAT_01c15f4c);
        }
        FUN_01a745b4(pppppppiVar17,local_204,iVar7,(int)*local_1fc + uVar13,uVar4 - uVar13);
        unaff_r9 = local_7c;
        unaff_r10 = local_80;
        unaff_r8 = local_88;
        pppppppiVar14 = local_8c;
        pppppppiVar12 = local_90;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_200 = local_84;
          FUN_01bed4e2(auStack_1f8,&local_78,0x50);
          goto LAB_00d704a4;
        }
        if (uVar6 <= (uint)param_2[0x1d]) {
          FUN_01283fd8(&local_1a8,local_1fc);
          pppppppiVar12 = local_19c;
          if (((uint)local_19c & 1) == 0) goto LAB_00d70310;
          local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
          local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
          local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
          FUN_01283524(&local_130,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar12 >> 5);
          if (local_128 < (int *******)((uint)pppppppiVar12 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_128;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d70360;
        }
        iVar7 = param_2[0x24];
        unaff_r8 = pppppppiVar16;
        unaff_r9 = pppppppiVar3;
        unaff_r10 = pppppppiVar2;
      } while (iVar7 != 0);
    }
    if (param_2[0x1d] == 0) {
      pppppppiVar14 = (int *******)0x0;
      pppppppiVar12 = (int *******)&SUB_00000004;
      unaff_r11 = pppppppiVar17;
    }
    else {
LAB_00d702f0:
      FUN_01283fd8(&local_1a8,local_1fc);
      pppppppiVar12 = local_19c;
      if (((uint)local_19c & 1) == 0) {
LAB_00d70310:
        unaff_r8 = (int *******)&DAT_01d2e520;
        unaff_r9 = local_19c;
        unaff_r10 = local_1a4;
        local_200 = local_1a8;
      }
      else {
        local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
        local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
        local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
        FUN_01283524(&local_130,&local_c4);
        local_b8 = (int *****)((uint)pppppppiVar12 >> 5);
        if (local_128 < (int *******)((uint)pppppppiVar12 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_128;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d70360:
        unaff_r10 = (int *******)((int)local_128 - (int)local_b8);
        local_200 = (int *******)((int)local_12c + (int)local_b8);
        unaff_r8 = local_130;
        unaff_r9 = local_124;
      }
      pppppppiVar14 = (int *******)0x0;
      pppppppiVar12 = (int *******)&DAT_00000003;
      unaff_r11 = pppppppiVar17;
    }
LAB_00d704a4:
    pppppppiVar15 = unaff_r10;
    if (pppppppiVar12 == (int *******)&SUB_00000004 && pppppppiVar14 == (int *******)0x0) {
      local_200 = (int *******)0xd704e0;
      FUN_01a737fc(&local_90,param_2 + 0x28);
      if (local_90 != (int *******)&SUB_00000004 || local_8c != (int *******)0x0) {
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_1fc = local_80;
        local_204 = local_74;
        local_130 = local_70;
        local_12c = pppppppiStack_6c;
        local_128 = pppppppiStack_68;
        local_124 = pppppppiStack_64;
        local_120 = pppppppiStack_60;
        local_11c = local_5c;
        local_118 = pppppppiStack_58;
        local_114 = pppppppiStack_54;
        uStack_110 = uStack_50;
        uStack_10c = uStack_4c;
        unaff_r9 = local_7c;
        pppppppiVar15 = local_78;
        unaff_r11 = local_88;
        local_200 = local_84;
      }
      local_180 = local_130;
      pppppppiStack_17c = local_12c;
      pppppppiStack_178 = local_128;
      pppppppiStack_174 = local_124;
      pppppppiStack_170 = local_120;
      local_16c = local_11c;
      pppppppiStack_168 = local_118;
      pppppppiStack_164 = local_114;
      uStack_160 = uStack_110;
      uStack_15c = uStack_10c;
      local_158 = local_b0;
      uStack_154 = uStack_ac;
      uStack_150 = uStack_a8;
      uStack_14c = uStack_a4;
      local_148 = local_a0;
      uStack_144 = uStack_9c;
      uStack_140 = uStack_98;
      uStack_13c = uStack_94;
      pppppppiVar12 = local_90;
      pppppppiVar14 = local_8c;
LAB_00d706d4:
      if (pppppppiVar12 != (int *******)&DAT_00000003 || pppppppiVar14 != (int *******)0x0) {
        if (pppppppiVar12 != (int *******)&SUB_00000004 || pppppppiVar14 != (int *******)0x0) {
          if (pppppppiVar12 != (int *******)&DAT_00000005 || pppppppiVar14 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_180,0x48);
            local_84 = local_200;
            local_74 = local_204;
            local_80 = local_1fc;
            local_90 = pppppppiVar12;
            local_8c = pppppppiVar14;
            local_88 = unaff_r11;
            local_7c = unaff_r9;
            local_78 = pppppppiVar15;
            uVar5 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar5,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d706fc;
        }
        uVar5 = 4;
        goto LAB_00d70710;
      }
      pppppppiVar12 = local_200;
    }
    else {
      if (pppppppiVar12 != (int *******)&DAT_00000003 || pppppppiVar14 != (int *******)0x0) {
        local_124 = local_200;
        local_130 = pppppppiVar12;
        local_12c = pppppppiVar14;
        local_128 = unaff_r8;
        local_120 = unaff_r10;
        local_11c = unaff_r9;
        FUN_01bed4e2(&local_118,auStack_1f8,0x50);
        pppppppiVar15 = local_118;
        unaff_r11 = local_128;
        if ((char)param_2[0x42] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x109) = 1;
          FUN_01a738c0(&local_90,&local_130);
          local_204 = local_74;
          local_1fc = local_80;
          local_1a8 = local_70;
          local_1a4 = pppppppiStack_6c;
          local_1a0 = pppppppiStack_68;
          local_19c = pppppppiStack_64;
          pppppppiStack_198 = pppppppiStack_60;
          local_194 = local_5c;
          pppppppiStack_190 = pppppppiStack_58;
          pppppppiStack_18c = pppppppiStack_54;
          uStack_188 = uStack_50;
          uStack_184 = uStack_4c;
          local_200 = local_84;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_180 = local_70;
            pppppppiStack_17c = pppppppiStack_6c;
            pppppppiStack_178 = pppppppiStack_68;
            pppppppiStack_174 = pppppppiStack_64;
            pppppppiStack_170 = pppppppiStack_60;
            local_16c = local_5c;
            pppppppiStack_168 = pppppppiStack_58;
            pppppppiStack_164 = pppppppiStack_54;
            uStack_160 = uStack_50;
            uStack_15c = uStack_4c;
            FUN_005f6588(&local_130);
            local_8c = (int *******)0x0;
            local_90 = (int *******)&DAT_00000003;
          }
          else {
            local_158 = local_48;
            uStack_154 = uStack_44;
            uStack_150 = uStack_40;
            uStack_14c = uStack_3c;
            local_148 = local_38;
            uStack_144 = uStack_34;
            uStack_140 = uStack_30;
            uStack_13c = uStack_2c;
            local_180 = local_70;
            pppppppiStack_17c = pppppppiStack_6c;
            pppppppiStack_178 = pppppppiStack_68;
            pppppppiStack_174 = pppppppiStack_64;
            pppppppiStack_170 = pppppppiStack_60;
            local_16c = local_5c;
            pppppppiStack_168 = pppppppiStack_58;
            pppppppiStack_164 = pppppppiStack_54;
            uStack_160 = uStack_50;
            uStack_15c = uStack_4c;
            FUN_005f6588(&local_130);
          }
          pppppppiVar12 = local_90;
          pppppppiVar14 = local_8c;
          pppppppiVar15 = local_78;
          unaff_r9 = local_7c;
          unaff_r11 = local_88;
        }
        else {
          local_204 = local_114;
          local_200 = local_124;
          FUN_01bed4e2(&local_180,auStack_1f0,0x48);
          local_1fc = unaff_r10;
        }
        goto LAB_00d706d4;
      }
      unaff_r11 = (int *******)&DAT_00000003;
      local_1fc = unaff_r8;
      local_204 = unaff_r9;
      pppppppiVar12 = (int *******)0x0;
      unaff_r9 = local_200;
    }
    param_1[8] = local_180;
    param_1[9] = pppppppiStack_17c;
    param_1[10] = pppppppiStack_178;
    param_1[0xb] = pppppppiStack_174;
    param_1[0xc] = pppppppiStack_170;
    param_1[0xd] = local_16c;
    param_1[0xe] = pppppppiStack_168;
    param_1[0xf] = pppppppiStack_164;
    param_1[0x10] = uStack_160;
    param_1[0x11] = uStack_15c;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = unaff_r11;
    param_1[3] = pppppppiVar12;
    param_1[4] = local_1fc;
    param_1[5] = unaff_r9;
    param_1[6] = pppppppiVar15;
    param_1[7] = local_204;
  }
  else {
    unaff_r8 = (int *******)param_2[2];
    pppppppiVar15 = (int *******)(param_2 + 6);
    unaff_r10 = (int *******)param_2[4];
    unaff_r9 = (int *******)param_2[5];
    local_200 = (int *******)param_2[3];
LAB_00d7028c:
    FUN_01bed4e2(auStack_1f8,pppppppiVar15,0x50);
    if (pppppppiVar12 != (int *******)&DAT_00000005 || pppppppiVar14 != (int *******)0x0)
    goto LAB_00d704a4;
LAB_00d706fc:
    uVar5 = 5;
LAB_00d70710:
    *param_1 = uVar5;
    param_1[1] = 0;
  }
  return;
}

