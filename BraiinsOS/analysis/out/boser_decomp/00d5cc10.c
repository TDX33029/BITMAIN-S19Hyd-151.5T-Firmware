// FUN_00d5cc10 @ 00d5cc10 size=3996 calls_out=23 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d5cc10(undefined4 *param_1,uint ****param_2,int *param_3)

{
  double dVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint ***pppuVar7;
  uint ***pppuVar8;
  undefined4 extraout_r1;
  uint ***pppuVar9;
  uint ***pppuVar10;
  uint ****unaff_r5;
  uint ****ppppuVar11;
  uint ***pppuVar12;
  uint ****ppppuVar13;
  uint ***pppuVar14;
  uint ****ppppuVar15;
  uint ****unaff_r8;
  uint ****ppppuVar16;
  uint ***pppuVar17;
  uint ****ppppuVar18;
  uint ****unaff_r9;
  uint ****ppppuVar19;
  uint ****ppppuVar20;
  uint ***pppuVar21;
  int iVar22;
  uint ****ppppuVar23;
  uint ****local_244;
  uint ****local_240;
  uint ****local_23c;
  uint ****local_238;
  uint ****local_234;
  uint ****local_230;
  uint ****local_22c;
  uint ****local_228;
  uint ****local_224;
  uint ****ppppuStack_220;
  uint ****ppppuStack_21c;
  uint ***local_218;
  uint ****ppppuStack_214;
  uint ***local_210;
  uint ***pppuStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint ***local_1f0;
  uint ***pppuStack_1ec;
  uint ***pppuStack_1e8;
  uint ***pppuStack_1e4;
  uint ***local_1e0;
  uint ***pppuStack_1dc;
  uint ***pppuStack_1d8;
  uint ***pppuStack_1d4;
  uint ***local_1d0;
  uint ***pppuStack_1cc;
  uint ***pppuStack_1c8;
  uint ***pppuStack_1c4;
  uint ***pppuStack_1c0;
  uint ***pppuStack_1bc;
  uint ***local_1b8;
  uint ***pppuStack_1b4;
  uint ***pppuStack_1b0;
  uint ***pppuStack_1ac;
  uint ***pppuStack_1a8;
  uint ***pppuStack_1a4;
  uint ****local_1a0;
  uint ****local_19c;
  uint ****local_198;
  uint ****ppppuStack_194;
  uint ****local_190;
  uint ****local_18c;
  uint ****local_188;
  uint ****ppppuStack_184;
  uint ***local_180;
  uint ****local_17c;
  uint ***pppuStack_174;
  uint ****local_138;
  uint ****ppppuStack_134;
  uint ****ppppuStack_130;
  uint ****ppppuStack_12c;
  uint ****ppppuStack_128;
  uint ****local_124;
  uint ****local_120;
  uint ****ppppuStack_11c;
  uint ***pppuStack_118;
  uint ****ppppuStack_114;
  uint ***pppuStack_110;
  uint ***pppuStack_10c;
  uint ****local_108;
  uint ****ppppuStack_104;
  uint ****ppppuStack_100;
  uint ****ppppuStack_fc;
  uint ***local_f8;
  uint ****ppppuStack_f4;
  uint ***pppuStack_f0;
  uint ***pppuStack_ec;
  uint ****local_e4;
  uint ****local_e0;
  int local_dc;
  uint ****local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint **local_c8;
  uint ****local_c4;
  uint ***local_c0;
  uint ***pppuStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  uint ****local_94;
  uint ****local_90;
  uint ****local_8c;
  uint ****local_88;
  uint ****local_84;
  uint ****local_80;
  uint ****ppppuStack_7c;
  uint ****ppppuStack_78;
  uint ****ppppuStack_74;
  uint ****ppppuStack_70;
  uint ****local_6c;
  uint ****ppppuStack_68;
  uint ****ppppuStack_64;
  uint ***pppuStack_60;
  uint ****ppppuStack_5c;
  uint ***local_58;
  uint ***pppuStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  ppppuVar20 = (uint ****)*param_2;
  ppppuVar13 = (uint ****)param_2[1];
  pppuVar7 = param_2[0x41];
  *param_2 = (uint ***)0x3;
  param_2[1] = (uint ***)0x0;
  if (ppppuVar20 == (uint ****)&DAT_00000003 && ppppuVar13 == (uint ****)0x0) {
    ppppuVar18 = param_2 + 0x1a;
    ppppuVar23 = param_2 + 0x38;
    ppppuVar20 = (uint ****)*ppppuVar18;
    local_23c = (uint ****)param_2[0x1b];
    if (ppppuVar20 != (uint ****)&DAT_00000005 || local_23c != (uint ****)0x0) {
      unaff_r5 = param_2 + 0x20;
      ppppuVar13 = unaff_r8;
      ppppuVar16 = unaff_r9;
      do {
        if ((uint ***)0x1f < param_2[0x34]) {
          iVar4 = *(int *)*param_3;
          iVar22 = ((int *)*param_3)[1];
          param_2[0x34] = (uint ***)0x0;
          (**(code **)(iVar4 + 8))(iVar22);
LAB_00d5d91c:
          if (param_2[0x39] != (uint ***)0x0) goto LAB_00d5cc8c;
          goto LAB_00d5d824;
        }
        *ppppuVar18 = (uint ***)0x4;
        param_2[0x1b] = (uint ***)0x0;
        param_2[0x34] = (uint ***)((int)param_2[0x34] + 1);
        local_9c = local_23c;
        local_a0 = ppppuVar20;
        FUN_01bed4e2(&local_98,param_2 + 0x1c,0x60);
        ppppuVar19 = local_8c;
        ppppuVar11 = local_90;
        unaff_r8 = local_94;
        unaff_r9 = local_98;
        if (ppppuVar20 == (uint ****)&SUB_00000004 && local_23c == (uint ****)0x0) {
          FUN_00d5cac0(ppppuVar18);
          *ppppuVar18 = (uint ***)0x5;
          param_2[0x1b] = (uint ***)0x0;
          unaff_r8 = ppppuVar13;
          unaff_r9 = ppppuVar16;
          break;
        }
        local_244 = local_98;
        local_240 = local_8c;
        local_108 = (uint ****)*unaff_r5;
        ppppuStack_104 = (uint ****)param_2[0x21];
        ppppuStack_100 = (uint ****)param_2[0x22];
        ppppuStack_fc = (uint ****)param_2[0x23];
        local_f8 = param_2[0x24];
        ppppuStack_f4 = (uint ****)param_2[0x25];
        pppuStack_f0 = param_2[0x26];
        pppuStack_ec = param_2[0x27];
        local_138 = (uint ****)param_2[0x28];
        ppppuStack_134 = (uint ****)param_2[0x29];
        ppppuStack_130 = (uint ****)param_2[0x2a];
        ppppuStack_12c = (uint ****)param_2[0x2b];
        ppppuStack_128 = (uint ****)param_2[0x2c];
        local_124 = (uint ****)param_2[0x2d];
        local_120 = (uint ****)param_2[0x2e];
        ppppuStack_11c = (uint ****)param_2[0x2f];
        pppuStack_118 = param_2[0x30];
        ppppuStack_114 = (uint ****)param_2[0x31];
        pppuStack_110 = param_2[0x32];
        pppuStack_10c = param_2[0x33];
        if (((uint)ppppuVar20 & 7) != 3) {
          if (ppppuVar20 == (uint ****)&DAT_00000005) goto LAB_00d5d91c;
          pppuVar7 = param_2[0x39];
          local_238 = ppppuVar16;
          local_234 = ppppuVar13;
          if (pppuVar7 == (uint ***)0x0) {
            local_1f0 = *unaff_r5;
            pppuStack_1ec = param_2[0x21];
            pppuStack_1e8 = param_2[0x22];
            pppuStack_1e4 = param_2[0x23];
            local_1e0 = param_2[0x24];
            pppuStack_1dc = param_2[0x25];
            pppuStack_1d8 = param_2[0x26];
            pppuStack_1d4 = param_2[0x27];
            local_1d0 = param_2[0x28];
            pppuStack_1cc = param_2[0x29];
            pppuStack_1c8 = param_2[0x2a];
            pppuStack_1c4 = param_2[0x2b];
            pppuStack_1c0 = param_2[0x2c];
            pppuStack_1bc = param_2[0x2d];
            local_1b8 = param_2[0x2e];
            pppuStack_1b4 = param_2[0x2f];
            pppuStack_1b0 = param_2[0x30];
            pppuStack_1ac = param_2[0x31];
            pppuStack_1a8 = param_2[0x32];
            pppuStack_1a4 = param_2[0x33];
            ppppuVar13 = local_23c;
            ppppuVar16 = local_94;
            goto LAB_00d5d4fc;
          }
          if (*param_2 != (uint ***)0x3 || param_2[1] != (uint ***)0x0) {
            FUN_005f6588(param_2);
            pppuVar7 = param_2[0x39];
          }
          *param_2 = (uint ***)ppppuVar20;
          param_2[2] = (uint ***)unaff_r9;
          param_2[3] = (uint ***)unaff_r8;
          param_2[4] = (uint ***)ppppuVar11;
          param_2[5] = (uint ***)ppppuVar19;
          param_2[1] = (uint ***)local_23c;
          param_2[6] = (uint ***)local_108;
          param_2[7] = (uint ***)ppppuStack_104;
          param_2[8] = (uint ***)ppppuStack_100;
          param_2[9] = (uint ***)ppppuStack_fc;
          param_2[10] = local_f8;
          param_2[0xb] = (uint ***)ppppuStack_f4;
          param_2[0xc] = pppuStack_f0;
          param_2[0xd] = pppuStack_ec;
          param_2[0xe] = (uint ***)local_138;
          param_2[0xf] = (uint ***)ppppuStack_134;
          param_2[0x10] = (uint ***)ppppuStack_130;
          param_2[0x11] = (uint ***)ppppuStack_12c;
          param_2[0x12] = (uint ***)ppppuStack_128;
          param_2[0x13] = (uint ***)local_124;
          param_2[0x14] = (uint ***)local_120;
          param_2[0x15] = (uint ***)ppppuStack_11c;
          param_2[0x16] = pppuStack_118;
          param_2[0x17] = (uint ***)ppppuStack_114;
          param_2[0x18] = pppuStack_110;
          param_2[0x19] = pppuStack_10c;
          FUN_01283fd8(&local_e4,ppppuVar23,pppuVar7);
          if (((uint)local_d8 & 1) == 0) goto LAB_00d5ccb4;
          local_cc = (int)local_e0 + ((uint)local_d8 >> 5);
          local_d0 = (int)local_e4 - ((uint)local_d8 >> 5);
          local_d4 = local_dc + ((uint)local_d8 >> 5);
          FUN_01283524(&local_1a0,&local_d4);
          local_c8 = (uint **)((uint)local_d8 >> 5);
          if (local_198 < (uint ****)((uint)local_d8 >> 5)) {
            local_98 = (uint ****)&local_c4;
            local_c4 = local_198;
            local_94 = (uint ****)&LAB_01a6a304;
            local_9c = (uint ****)&LAB_01a6a304;
            local_a0 = (uint ****)&local_c8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_a0,&DAT_01d2e534);
          }
          local_e0 = (uint ****)((int)local_198 - (int)local_c8);
          local_244 = local_1a0;
          unaff_r8 = (uint ****)((int)local_19c + (int)local_c8);
          local_d8 = ppppuStack_194;
          goto LAB_00d5d4e4;
        }
        local_228 = (uint ****)*unaff_r5;
        local_224 = (uint ****)param_2[0x21];
        ppppuStack_220 = (uint ****)param_2[0x22];
        ppppuStack_21c = (uint ****)param_2[0x23];
        local_218 = param_2[0x24];
        ppppuStack_214 = (uint ****)param_2[0x25];
        local_210 = param_2[0x26];
        pppuStack_20c = param_2[0x27];
        pppuVar9 = param_2[0x39];
        pppuVar17 = param_2[0x36];
        pppuVar14 = param_2[0x37];
        pppuVar21 = pppuVar9;
        if ((uint)((int)param_2[0x3a] - (int)pppuVar9) < 5) {
          FUN_01283c9c(ppppuVar23,5);
          pppuVar21 = param_2[0x39];
          local_19c = (uint ****)((int)param_2[0x3a] - (int)pppuVar21);
          if (local_19c < 5) {
            local_22c = ppppuVar19;
            local_234 = unaff_r8;
            local_230 = ppppuVar11;
            local_238 = unaff_r9;
            local_1a0 = (uint ****)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1a0);
          }
        }
        pppuVar10 = pppuStack_f0;
        ppppuVar16 = ppppuStack_f4;
        ppppuVar13 = ppppuStack_100;
        ppppuVar20 = local_108;
        param_2[0x39] = (uint ***)((int)pppuVar21 + 5);
        ppppuStack_194 = ppppuVar19;
        local_19c = unaff_r8;
        local_1a0 = unaff_r9;
        local_198 = ppppuVar11;
        local_190 = local_108;
        local_18c = ppppuStack_104;
        local_188 = ppppuStack_100;
        ppppuStack_184 = ppppuStack_fc;
        local_180 = local_f8;
        local_17c = ppppuStack_f4;
        pppuStack_174 = pppuStack_ec;
        if (unaff_r9 != (uint ****)&DAT_00000003 || unaff_r8 != (uint ****)0x0) {
          if (unaff_r9 == (uint ****)0x2 && unaff_r8 == (uint ****)0x0) {
            iVar4 = 0;
            if (((uint)ppppuVar11 ^ 2) != 0 || ppppuVar19 != (uint ****)0x0) {
              if (((uint)ppppuVar11 & 1) == 0) {
                iVar4 = 2;
                if (local_108 != (uint ****)0x0) {
                  if (ppppuStack_100 == (uint ****)0x0 && ppppuStack_fc == (uint ****)0x0) {
                    iVar4 = 4;
                  }
                  else {
                    uVar5 = LZCOUNT((uint)ppppuStack_100 | 1) | 0x20;
                    if (ppppuStack_fc != (uint ****)0x0) {
                      uVar5 = LZCOUNT(ppppuStack_fc);
                    }
                    iVar4 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
                  }
                }
              }
              else {
                iVar4 = 4;
                if ((double)CONCAT44(ppppuStack_fc,ppppuStack_100) != 0.0) {
                  iVar4 = 0xd;
                }
                if (local_108 == (uint ****)0x0) {
                  iVar4 = 2;
                }
              }
            }
            pppuVar21 = (uint ***)(0x7ffffffa - (int)pppuVar21);
            pppuVar8 = (uint ***)(iVar4 + 2);
            if (pppuVar21 < pppuVar8) {
LAB_00d5db8c:
              local_e4 = (uint ****)pppuVar8;
              local_e0 = (uint ****)pppuVar21;
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_003efa56,0x27,&local_e4,&DAT_01c15d9c,&DAT_01c15fbc);
            }
            local_e4._0_1_ = 0x12;
            FUN_01284394(ppppuVar23,&local_e4,1);
            ppppuVar16 = ppppuStack_184;
            ppppuVar13 = local_188;
            ppppuVar20 = local_190;
            if (((uint)ppppuVar11 ^ 2) == 0 && ppppuVar19 == (uint ****)0x0) {
              local_e4 = (uint ****)((uint)local_e4._1_3_ << 8);
              FUN_01284394(ppppuVar23,&local_e4,1);
            }
            else if (((uint)ppppuVar11 & 1) == 0) {
              if (local_190 == (uint ****)0x0) {
                local_e4._0_1_ = 2;
                FUN_01284394(ppppuVar23,&local_e4,1);
                local_e4._0_1_ = 10;
                FUN_01284394(ppppuVar23,&local_e4,1);
                local_e4 = (uint ****)((uint)local_e4._1_3_ << 8);
                FUN_01284394(ppppuVar23,&local_e4,1);
              }
              else {
                if (local_188 == (uint ****)0x0 && ppppuStack_184 == (uint ****)0x0) {
                  local_e4._0_1_ = 4;
                  FUN_01284394(ppppuVar23,&local_e4,1);
                  local_e4 = (uint ****)CONCAT31(local_e4._1_3_,10);
                  FUN_01284394(ppppuVar23,&local_e4,1);
                  cVar3 = '\x02';
                }
                else {
                  uVar5 = LZCOUNT((uint)local_188 | 1) | 0x20;
                  if (ppppuStack_184 != (uint ****)0x0) {
                    uVar5 = LZCOUNT(ppppuStack_184);
                  }
                  uVar5 = (uVar5 ^ 0x3f) * 9 + 0x49;
                  local_e4._0_1_ = (char)(uVar5 >> 6) + '\x05';
                  FUN_01284394(ppppuVar23,&local_e4,1);
                  local_e4 = (uint ****)CONCAT31(local_e4._1_3_,10);
                  FUN_01284394(ppppuVar23,&local_e4,1);
                  cVar3 = (char)(uVar5 >> 6) + '\x03';
                }
                local_e4 = (uint ****)CONCAT31(local_e4._1_3_,cVar3);
                FUN_01284394(ppppuVar23,&local_e4,1);
                FUN_00efe248(1,extraout_r1,ppppuVar13,ppppuVar16,ppppuVar23);
              }
            }
            else {
              dVar1 = (double)CONCAT44(ppppuStack_184,local_188);
              local_e4._0_1_ = 4;
              if (dVar1 != 0.0) {
                local_e4._0_1_ = 0xd;
              }
              if (local_190 == (uint ****)0x0) {
                local_e4._0_1_ = 2;
              }
              FUN_01284394(ppppuVar23,&local_e4,1);
              local_e4._0_1_ = 0x12;
              FUN_01284394(ppppuVar23,&local_e4,1);
              uVar2 = 2;
              if (dVar1 != 0.0) {
                uVar2 = 0xb;
              }
              if (ppppuVar20 == (uint ****)0x0) {
                uVar2 = 0;
              }
              local_e4 = (uint ****)CONCAT31(local_e4._1_3_,uVar2);
              FUN_01284394(ppppuVar23,&local_e4,1);
              if (ppppuVar20 != (uint ****)0x0) {
                FUN_00efe1c0(ppppuVar13,1,ppppuVar23);
              }
            }
          }
          else {
            iVar4 = 2;
            if ((double)CONCAT44(ppppuVar19,ppppuVar11) != 0.0) {
              iVar4 = 0xb;
            }
            pppuVar12 = pppuStack_f0;
            if (((uint)unaff_r9 & 1) != 0) {
              pppuVar12 = (uint ***)((int)pppuStack_f0 + iVar4);
            }
            iVar4 = 2;
            if ((double)CONCAT44(ppppuStack_fc,ppppuStack_100) != 0.0) {
              iVar4 = 0xb;
            }
            if (((uint)local_108 & 1) != 0) {
              pppuVar12 = (uint ***)((int)pppuVar12 + iVar4);
            }
            local_240 = ppppuStack_f4 + (int)pppuStack_f0 * 0xc;
            iVar4 = FUN_010131e4(ppppuStack_f4);
            pppuVar8 = (uint ***)
                       ((int)pppuVar12 + iVar4 +
                        ((LZCOUNT((int)pppuVar12 + iVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1);
            pppuVar21 = (uint ***)(0x7ffffffa - (int)pppuVar21);
            if (pppuVar21 < pppuVar8) goto LAB_00d5db8c;
            local_e4 = (uint ****)CONCAT31(local_e4._1_3_,10);
            FUN_01284394(ppppuVar23,&local_e4,1);
            iVar4 = FUN_010131e4(ppppuVar16,local_240);
            uVar5 = (int)pppuVar12 + iVar4;
            iVar4 = 10;
            do {
              if (uVar5 < 0x80) {
                local_e4 = (uint ****)CONCAT31(local_e4._1_3_,(char)uVar5);
                FUN_01284394(ppppuVar23,&local_e4,1);
                break;
              }
              local_e4 = (uint ****)(CONCAT31(local_e4._1_3_,(char)uVar5) | 0x80);
              FUN_01284394(ppppuVar23,&local_e4,1);
              uVar5 = uVar5 >> 7;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            if (((uint)unaff_r9 & 1) != 0) {
              FUN_00efdf5c(ppppuVar11,1,ppppuVar23);
            }
            if (((uint)ppppuVar20 & 1) != 0) {
              FUN_00efdfe4(ppppuVar13,2,ppppuVar23);
            }
            if (pppuVar10 != (uint ***)0x0) {
              do {
                local_e4 = (uint ****)CONCAT31(local_e4._1_3_,0x1a);
                FUN_01284394(ppppuVar23,&local_e4,1);
                pppuVar21 = ppppuVar16[10];
                uVar5 = 0;
                if (pppuVar21 != (uint ***)0x0) {
                  uVar5 = (int)pppuVar21 +
                          ((LZCOUNT((uint)pppuVar21 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                local_23c = ppppuVar16 + 0xc;
                iVar22 = 10;
                pppuVar10 = *ppppuVar16;
                pppuVar12 = ppppuVar16[4];
                iVar4 = 2;
                if (*(double *)(ppppuVar16 + 2) != 0.0) {
                  iVar4 = 0xb;
                }
                if (((uint)pppuVar10 & 1) != 0) {
                  uVar5 = uVar5 + iVar4;
                }
                iVar4 = 2;
                if (*(double *)(ppppuVar16 + 6) != 0.0) {
                  iVar4 = 0xb;
                }
                if (((uint)pppuVar12 & 1) != 0) {
                  uVar5 = uVar5 + iVar4;
                }
                do {
                  if (uVar5 < 0x80) {
                    local_e4 = (uint ****)CONCAT31(local_e4._1_3_,(char)uVar5);
                    FUN_01284394(ppppuVar23,&local_e4,1);
                    break;
                  }
                  local_e4 = (uint ****)(CONCAT31(local_e4._1_3_,(char)uVar5) | 0x80);
                  FUN_01284394(ppppuVar23,&local_e4,1);
                  uVar5 = uVar5 >> 7;
                  iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
                if (pppuVar21 != (uint ***)0x0) {
                  FUN_01016f10(1,ppppuVar16[9],ppppuVar16[10],ppppuVar23);
                }
                if (((uint)pppuVar10 & 1) != 0) {
                  FUN_00efdf5c((int)*(undefined8 *)(ppppuVar16 + 2),2,ppppuVar23);
                }
                if (((uint)pppuVar12 & 1) != 0) {
                  FUN_00efdfe4((int)*(undefined8 *)(ppppuVar16 + 6),3,ppppuVar23);
                }
                ppppuVar16 = local_23c;
              } while (local_23c != local_240);
            }
          }
        }
        FUN_00d5cae4(&local_1a0);
        pppuVar21 = param_2[0x39];
        if (pppuVar21 < pppuVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppuVar9,pppuVar21,pppuVar21,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_a0,pppuVar17,pppuVar14,(int)*ppppuVar23 + (int)pppuVar9,
                     (int)pppuVar21 - (int)pppuVar9);
        ppppuVar19 = local_8c;
        ppppuVar11 = local_90;
        ppppuVar16 = local_94;
        ppppuVar13 = local_9c;
        ppppuVar20 = local_a0;
        if (local_a0 != (uint ****)&DAT_00000003 || local_9c != (uint ****)0x0) {
          local_244 = local_98;
          FUN_01bed4e2(&local_1f0,&local_88,0x50);
          goto LAB_00d5d4fc;
        }
        if (pppuVar7 <= param_2[0x39]) {
          FUN_01283fd8(&local_e4,ppppuVar23);
          if (((uint)local_d8 & 1) == 0) goto LAB_00d5ccb4;
          local_cc = (int)local_e0 + ((uint)local_d8 >> 5);
          local_d0 = (int)local_e4 - ((uint)local_d8 >> 5);
          local_d4 = local_dc + ((uint)local_d8 >> 5);
          FUN_01283524(&local_1a0,&local_d4);
          local_c8 = (uint **)((uint)local_d8 >> 5);
          if (local_198 < (uint ****)((uint)local_d8 >> 5)) {
            local_98 = (uint ****)&local_c4;
            local_c4 = local_198;
            local_94 = (uint ****)&LAB_01a6a304;
            local_9c = (uint ****)&LAB_01a6a304;
            local_a0 = (uint ****)&local_c8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_a0,&DAT_01d2e534);
          }
          goto LAB_00d5d4cc;
        }
        ppppuVar20 = (uint ****)*ppppuVar18;
        local_23c = (uint ****)param_2[0x1b];
        ppppuVar13 = unaff_r8;
        ppppuVar16 = unaff_r9;
      } while (ppppuVar20 != (uint ****)&DAT_00000005 || local_23c != (uint ****)0x0);
    }
    if (param_2[0x39] == (uint ***)0x0) {
      ppppuVar20 = (uint ****)&SUB_00000004;
      local_e0 = unaff_r5;
    }
    else {
LAB_00d5cc8c:
      FUN_01283fd8(&local_e4,ppppuVar23);
      if (((uint)local_d8 & 1) == 0) {
LAB_00d5ccb4:
        local_244 = (uint ****)&DAT_01d2e520;
        unaff_r8 = local_e4;
      }
      else {
        local_cc = (int)local_e0 + ((uint)local_d8 >> 5);
        local_d0 = (int)local_e4 - ((uint)local_d8 >> 5);
        local_d4 = local_dc + ((uint)local_d8 >> 5);
        FUN_01283524(&local_1a0,&local_d4);
        local_c8 = (uint **)((uint)local_d8 >> 5);
        if (local_198 < (uint ****)((uint)local_d8 >> 5)) {
          local_98 = (uint ****)&local_c4;
          local_c4 = local_198;
          local_94 = (uint ****)&LAB_01a6a304;
          local_9c = (uint ****)&LAB_01a6a304;
          local_a0 = (uint ****)&local_c8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_a0,&DAT_01d2e534);
        }
LAB_00d5d4cc:
        local_e0 = (uint ****)((int)local_198 - (int)local_c8);
        local_244 = local_1a0;
        unaff_r8 = (uint ****)((int)local_19c + (int)local_c8);
        local_d8 = ppppuStack_194;
      }
LAB_00d5d4e4:
      ppppuVar20 = (uint ****)&DAT_00000003;
      unaff_r9 = local_d8;
    }
    ppppuVar11 = local_e0;
    ppppuVar13 = (uint ****)0x0;
    ppppuVar16 = unaff_r8;
    ppppuVar19 = unaff_r9;
LAB_00d5d4fc:
    if (ppppuVar20 == (uint ****)&SUB_00000004 && ppppuVar13 == (uint ****)0x0) {
      FUN_01a737fc(&local_a0,param_2 + 0x42);
      if (local_a0 == (uint ****)&SUB_00000004 && local_9c == (uint ****)0x0) {
        ppppuVar18 = ppppuVar16;
        local_8c = ppppuVar19;
        ppppuVar23 = param_2;
        ppppuVar15 = (uint ****)0xd5d538;
      }
      else {
        if (local_a0 != (uint ****)&DAT_00000003 || local_9c != (uint ****)0x0) {
          local_c0 = local_58;
          pppuStack_bc = pppuStack_54;
          uStack_b8 = uStack_50;
          uStack_b4 = uStack_4c;
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
        }
        local_23c = local_90;
        local_240 = local_84;
        local_1a0 = local_80;
        local_19c = ppppuStack_7c;
        local_198 = ppppuStack_78;
        ppppuStack_194 = ppppuStack_74;
        local_190 = ppppuStack_70;
        local_18c = local_6c;
        local_188 = ppppuStack_68;
        ppppuStack_184 = ppppuStack_64;
        local_180 = pppuStack_60;
        local_17c = ppppuStack_5c;
        ppppuVar18 = local_98;
        ppppuVar23 = local_94;
        ppppuVar15 = local_88;
      }
      local_238 = local_1a0;
      local_234 = local_19c;
      local_230 = local_198;
      local_22c = ppppuStack_194;
      local_228 = local_190;
      local_224 = local_18c;
      ppppuStack_220 = local_188;
      ppppuStack_21c = ppppuStack_184;
      local_218 = local_180;
      ppppuStack_214 = local_17c;
      local_210 = local_c0;
      pppuStack_20c = pppuStack_bc;
      uStack_208 = uStack_b8;
      uStack_204 = uStack_b4;
      local_200 = local_b0;
      uStack_1fc = uStack_ac;
      uStack_1f8 = uStack_a8;
      uStack_1f4 = uStack_a4;
      ppppuVar13 = local_9c;
      ppppuVar16 = local_8c;
      ppppuVar20 = local_a0;
LAB_00d5d800:
      if (ppppuVar20 != (uint ****)&DAT_00000003 || ppppuVar13 != (uint ****)0x0) {
        if (ppppuVar20 != (uint ****)&SUB_00000004 || ppppuVar13 != (uint ****)0x0) {
          if (ppppuVar20 != (uint ****)&DAT_00000005 || ppppuVar13 != (uint ****)0x0) {
            FUN_01bed4e2(&local_80,&local_238,0x48);
            local_84 = local_240;
            local_90 = local_23c;
            local_a0 = ppppuVar20;
            local_9c = ppppuVar13;
            local_98 = ppppuVar18;
            local_94 = ppppuVar23;
            local_8c = ppppuVar16;
            local_88 = ppppuVar15;
            uVar6 = FUN_01a65494(&local_a0);
            FUN_01a7467c(param_1,uVar6,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d5d824;
        }
        uVar6 = 4;
        goto LAB_00d5d838;
      }
      local_244 = local_23c;
    }
    else {
      if (ppppuVar20 != (uint ****)&DAT_00000003 || ppppuVar13 != (uint ****)0x0) {
        local_198 = local_244;
        local_1a0 = ppppuVar20;
        local_19c = ppppuVar13;
        ppppuStack_194 = ppppuVar16;
        local_190 = ppppuVar11;
        local_18c = ppppuVar19;
        FUN_01bed4e2(&local_188,&local_1f0,0x50);
        ppppuVar15 = local_188;
        ppppuVar23 = ppppuStack_194;
        ppppuVar18 = local_198;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_a0,&local_1a0);
          ppppuVar13 = local_9c;
          ppppuVar20 = local_a0;
          local_240 = local_84;
          local_23c = local_90;
          local_138 = local_80;
          ppppuStack_134 = ppppuStack_7c;
          ppppuStack_130 = ppppuStack_78;
          ppppuStack_12c = ppppuStack_74;
          ppppuStack_128 = ppppuStack_70;
          local_124 = local_6c;
          local_120 = ppppuStack_68;
          ppppuStack_11c = ppppuStack_64;
          pppuStack_118 = pppuStack_60;
          ppppuStack_114 = ppppuStack_5c;
          if (local_a0 == (uint ****)&DAT_00000003 && local_9c == (uint ****)0x0) {
            local_238 = local_80;
            local_234 = ppppuStack_7c;
            local_230 = ppppuStack_78;
            local_22c = ppppuStack_74;
            local_228 = ppppuStack_70;
            local_224 = local_6c;
            ppppuStack_220 = ppppuStack_68;
            ppppuStack_21c = ppppuStack_64;
            local_218 = pppuStack_60;
            ppppuStack_214 = ppppuStack_5c;
            FUN_005f6588(&local_1a0);
            ppppuVar13 = (uint ****)0x0;
            ppppuVar20 = (uint ****)&DAT_00000003;
          }
          else {
            local_210 = local_58;
            pppuStack_20c = pppuStack_54;
            uStack_208 = uStack_50;
            uStack_204 = uStack_4c;
            local_200 = local_48;
            uStack_1fc = uStack_44;
            uStack_1f8 = uStack_40;
            uStack_1f4 = uStack_3c;
            local_238 = local_80;
            local_234 = ppppuStack_7c;
            local_230 = ppppuStack_78;
            local_22c = ppppuStack_74;
            local_228 = ppppuStack_70;
            local_224 = local_6c;
            ppppuStack_220 = ppppuStack_68;
            ppppuStack_21c = ppppuStack_64;
            local_218 = pppuStack_60;
            ppppuStack_214 = ppppuStack_5c;
            FUN_005f6588(&local_1a0);
          }
          ppppuVar15 = local_88;
          ppppuVar18 = local_98;
          ppppuVar16 = local_8c;
          ppppuVar23 = local_94;
        }
        else {
          local_240 = ppppuStack_184;
          FUN_01bed4e2(&local_238,&pppuStack_1e8,0x48);
          ppppuVar16 = ppppuVar19;
          local_23c = ppppuVar11;
        }
        goto LAB_00d5d800;
      }
      ppppuVar23 = (uint ****)0x0;
      ppppuVar18 = (uint ****)&DAT_00000003;
      local_240 = ppppuVar19;
      ppppuVar15 = ppppuVar11;
    }
    param_1[8] = local_238;
    param_1[9] = local_234;
    param_1[10] = local_230;
    param_1[0xb] = local_22c;
    param_1[0xc] = local_228;
    param_1[0xd] = local_224;
    param_1[0xe] = ppppuStack_220;
    param_1[0xf] = ppppuStack_21c;
    param_1[0x10] = local_218;
    param_1[0x11] = ppppuStack_214;
    param_1[1] = 0;
    param_1[2] = ppppuVar18;
    param_1[3] = ppppuVar23;
    *param_1 = 3;
    param_1[4] = local_244;
    param_1[5] = ppppuVar16;
    param_1[6] = ppppuVar15;
    param_1[7] = local_240;
  }
  else {
    local_244 = (uint ****)param_2[2];
    ppppuVar16 = (uint ****)param_2[3];
    ppppuVar11 = (uint ****)param_2[4];
    ppppuVar19 = (uint ****)param_2[5];
    FUN_01bed4e2(&local_1f0,param_2 + 6,0x50);
    if (ppppuVar20 != (uint ****)&DAT_00000005 || ppppuVar13 != (uint ****)0x0) goto LAB_00d5d4fc;
LAB_00d5d824:
    uVar6 = 5;
LAB_00d5d838:
    *param_1 = uVar6;
    param_1[1] = 0;
  }
  return;
}

