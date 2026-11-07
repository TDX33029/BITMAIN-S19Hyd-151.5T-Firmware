// FUN_00d7eb44 @ 00d7eb44 size=3532 calls_out=21 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00d7eb44(undefined4 *param_1,int *******param_2,int *param_3)

{
  int ******ppppppiVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int ******ppppppiVar6;
  int ******ppppppiVar7;
  int *******unaff_r4;
  int *******pppppppiVar8;
  int *******unaff_r5;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *******unaff_r6;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  int iVar13;
  int *******pppppppiVar14;
  int iVar15;
  int *******pppppppiVar16;
  int *******pppppppiVar17;
  int iVar18;
  int *******pppppppiVar19;
  int ******ppppppiVar20;
  int ******ppppppiVar21;
  int *******extraout_r12;
  int *******local_204;
  int *******local_200;
  int *******local_1fc;
  int *******local_1f8;
  int *******local_1f4;
  int *******local_1f0;
  int *******local_1ec;
  int *******pppppppiStack_1e8;
  int *******local_1e4;
  int *******pppppppiStack_1e0;
  int *******pppppppiStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [72];
  int *******local_160;
  int *******local_15c;
  int *******local_158;
  int *******pppppppiStack_154;
  int *******pppppppiStack_150;
  int *******local_14c;
  int *******local_148;
  int *******local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int *******local_f8;
  int *******local_f4;
  int *******local_f0;
  int *******local_ec;
  int *******pppppppiStack_e8;
  int *******local_e4;
  int *******pppppppiStack_e0;
  int *******pppppppiStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *******local_d0;
  int *******local_cc;
  int *******local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
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
  
  pppppppiVar17 = (int *******)*param_2;
  pppppppiVar19 = (int *******)param_2[1];
  ppppppiVar6 = param_2[0x41];
  *param_2 = (int ******)0x3;
  param_2[1] = (int ******)0x0;
  if (pppppppiVar17 == (int *******)&DAT_00000003 && pppppppiVar19 == (int *******)0x0) {
    pppppppiVar16 = param_2 + 0x1a;
    pppppppiVar14 = param_2 + 0x38;
    pppppppiVar17 = (int *******)*pppppppiVar16;
    pppppppiVar19 = (int *******)param_2[0x1b];
    pppppppiVar11 = unaff_r4;
    pppppppiVar10 = unaff_r5;
    pppppppiVar12 = unaff_r6;
    if (pppppppiVar17 != (int *******)&DAT_00000005 || pppppppiVar19 != (int *******)0x0) {
      do {
        if ((int ******)0x1f < param_2[0x34]) {
          iVar18 = *(int *)*param_3;
          iVar15 = ((int *)*param_3)[1];
          param_2[0x34] = (int ******)0x0;
          (**(code **)(iVar18 + 8))(iVar15);
LAB_00d7f43c:
          if (param_2[0x39] == (int ******)0x0) goto LAB_00d7f7a0;
          goto LAB_00d7eba0;
        }
        *pppppppiVar16 = (int ******)0x4;
        param_2[0x1b] = (int ******)0x0;
        param_2[0x34] = (int ******)((int)param_2[0x34] + 1);
        local_90 = pppppppiVar17;
        local_8c = pppppppiVar19;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        pppppppiVar11 = local_7c;
        pppppppiVar12 = local_80;
        pppppppiVar10 = local_84;
        pppppppiVar9 = local_88;
        if (pppppppiVar17 == (int *******)&SUB_00000004 && pppppppiVar19 == (int *******)0x0) {
          FUN_00d7ea1c(pppppppiVar16);
          *pppppppiVar16 = (int ******)0x5;
          param_2[0x1b] = (int ******)0x0;
          pppppppiVar11 = unaff_r4;
          pppppppiVar10 = unaff_r5;
          pppppppiVar12 = unaff_r6;
          break;
        }
        local_1fc = local_88;
        FUN_01bed4e2(&local_160,param_2 + 0x20,0x50);
        if (((uint)pppppppiVar17 & 7) != 3) {
          if (pppppppiVar17 == (int *******)&DAT_00000005) goto LAB_00d7f43c;
          ppppppiVar6 = param_2[0x39];
          if (ppppppiVar6 == (int ******)0x0) {
            FUN_01bed4e2(auStack_1b0,&local_160,0x50);
            goto LAB_00d7f540;
          }
          if (*param_2 != (int ******)0x3 || param_2[1] != (int ******)0x0) {
            FUN_005f6588(param_2);
            ppppppiVar6 = param_2[0x39];
          }
          *param_2 = (int ******)pppppppiVar17;
          param_2[1] = (int ******)pppppppiVar19;
          param_2[2] = (int ******)pppppppiVar9;
          param_2[3] = (int ******)pppppppiVar10;
          param_2[4] = (int ******)pppppppiVar12;
          param_2[5] = (int ******)pppppppiVar11;
          FUN_01bed4e2(param_2 + 6,&local_160,0x50);
          FUN_01283fd8(&local_f8,pppppppiVar14,ppppppiVar6);
          pppppppiVar17 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d7ebc0;
          local_bc = (int)local_f4 + ((uint)local_ec >> 5);
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar17 >> 5);
          if (local_1f0 < (int *******)((uint)pppppppiVar17 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7f2f8;
        }
        pppppppiVar11 = (int *******)param_2[0x39];
        local_200 = pppppppiVar10;
        pppppppiVar19 = (int *******)param_2[0x36];
        pppppppiVar17 = (int *******)param_2[0x37];
        local_204 = pppppppiVar11;
        if ((uint)((int)param_2[0x3a] - (int)pppppppiVar11) < 5) {
          FUN_01283c9c(pppppppiVar14,5);
          local_204 = (int *******)param_2[0x39];
          local_1f4 = (int *******)((int)param_2[0x3a] - (int)local_204);
          if (local_1f4 < 5) {
            local_cc = pppppppiVar10;
            local_c8 = pppppppiVar12;
            local_d0 = pppppppiVar9;
            local_1f8 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f8);
          }
        }
        param_2[0x39] = (int ******)((int)local_204 + 5);
        local_1f0 = pppppppiVar12;
        local_1f4 = pppppppiVar10;
        local_1f8 = pppppppiVar9;
        unaff_r4 = pppppppiVar17;
        unaff_r5 = pppppppiVar19;
        unaff_r6 = pppppppiVar11;
        if (pppppppiVar12 != (int *******)0x0) {
          pppppppiVar8 = pppppppiVar10 + 0xb;
          iVar18 = 0;
          pppppppiVar9 = pppppppiVar12;
          do {
            ppppppiVar1 = pppppppiVar8[-9];
            iVar15 = 0;
            if (ppppppiVar1 != (int ******)0x0) {
              iVar15 = (int)ppppppiVar1 +
                       ((LZCOUNT((uint)ppppppiVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            ppppppiVar1 = pppppppiVar8[-6];
            if (ppppppiVar1 == (int ******)0x0) {
              iVar13 = 0;
            }
            else {
              iVar13 = (int)ppppppiVar1 +
                       ((LZCOUNT((uint)ppppppiVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            ppppppiVar20 = pppppppiVar8[-3];
            iVar2 = FUN_011df180(pppppppiVar8[-4],pppppppiVar8[-4] + (int)ppppppiVar20 * 9);
            ppppppiVar1 = *pppppppiVar8;
            iVar3 = FUN_011df6a4(pppppppiVar8[-1],pppppppiVar8[-1] + (int)ppppppiVar1 * 4);
            uVar4 = (int)ppppppiVar1 + (int)ppppppiVar20 + iVar3 + iVar2 + iVar13 + iVar15;
            pppppppiVar8 = pppppppiVar8 + 0xc;
            pppppppiVar9 = (int *******)((int)pppppppiVar9 + -1);
            iVar18 = uVar4 + iVar18 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          } while (pppppppiVar9 != (int *******)0x0);
          if ((int ******)(0x7ffffffaU - (int)local_204) < (int ******)(iVar18 + (int)pppppppiVar12)
             ) {
            local_f8 = (int *******)(iVar18 + (int)pppppppiVar12);
            local_f4 = (int *******)(0x7ffffffaU - (int)local_204);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003efa56,0x27,&local_f8,&DAT_01c15d9c,&DAT_01c15fbc);
          }
          unaff_r5 = pppppppiVar10;
          do {
            unaff_r4 = unaff_r5;
            local_f8 = (int *******)CONCAT31(local_f8._1_3_,10);
            FUN_01284394(pppppppiVar14,&local_f8,1);
            ppppppiVar1 = unaff_r4[2];
            iVar15 = 0;
            iVar18 = 0;
            if (ppppppiVar1 != (int ******)0x0) {
              iVar18 = (int)ppppppiVar1 +
                       ((LZCOUNT((uint)ppppppiVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            ppppppiVar20 = unaff_r4[5];
            if (ppppppiVar20 != (int ******)0x0) {
              iVar15 = (int)ppppppiVar20 +
                       ((LZCOUNT((uint)ppppppiVar20 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            ppppppiVar21 = unaff_r4[8];
            unaff_r5 = unaff_r4 + 0xc;
            pppppppiVar9 = (int *******)unaff_r4[7];
            local_204 = pppppppiVar9 + (int)ppppppiVar21 * 9;
            iVar13 = FUN_011df180(pppppppiVar9);
            local_1fc = (int *******)unaff_r4[10];
            ppppppiVar7 = unaff_r4[0xb];
            pppppppiVar8 = local_1fc + (int)ppppppiVar7 * 4;
            iVar2 = FUN_011df6a4(local_1fc);
            uVar4 = (int)ppppppiVar7 + (int)ppppppiVar21 + iVar2 + iVar13 + iVar15 + iVar18;
            iVar18 = 10;
            do {
              if (uVar4 < 0x80) {
                local_f8 = (int *******)CONCAT31(local_f8._1_3_,(char)uVar4);
                FUN_01284394(pppppppiVar14,&local_f8,1);
                break;
              }
              local_f8 = (int *******)(CONCAT31(local_f8._1_3_,(char)uVar4) | 0x80);
              FUN_01284394(pppppppiVar14,&local_f8,1);
              uVar4 = uVar4 >> 7;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
            if (ppppppiVar1 != (int ******)0x0) {
              FUN_01016f10(1,unaff_r4[1],unaff_r4[2],pppppppiVar14);
            }
            if (ppppppiVar20 != (int ******)0x0) {
              FUN_01016f10(2,unaff_r4[4],unaff_r4[5],pppppppiVar14);
            }
            local_200 = unaff_r4;
            if (ppppppiVar21 != (int ******)0x0) {
              do {
                local_f8 = (int *******)CONCAT31(local_f8._1_3_,0x1a);
                FUN_01284394(pppppppiVar14,&local_f8,1);
                ppppppiVar1 = pppppppiVar9[2];
                iVar18 = 0;
                iVar15 = 0;
                if (ppppppiVar1 != (int ******)0x0) {
                  iVar15 = (int)ppppppiVar1 +
                           ((LZCOUNT((uint)ppppppiVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                ppppppiVar20 = pppppppiVar9[5];
                if (ppppppiVar20 != (int ******)0x0) {
                  iVar18 = (int)ppppppiVar20 +
                           ((LZCOUNT((uint)ppppppiVar20 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                ppppppiVar21 = pppppppiVar9[8];
                iVar13 = 0;
                if (ppppppiVar21 != (int ******)0x0) {
                  iVar13 = (int)ppppppiVar21 +
                           ((LZCOUNT((uint)ppppppiVar21 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                unaff_r4 = (int *******)&DAT_0000000a;
                uVar4 = iVar18 + iVar15 + iVar13;
                local_200 = pppppppiVar9 + 9;
                do {
                  if (uVar4 < 0x80) {
                    local_f8 = (int *******)CONCAT31(local_f8._1_3_,(char)uVar4);
                    FUN_01284394(pppppppiVar14,&local_f8,1);
                    break;
                  }
                  local_f8 = (int *******)(CONCAT31(local_f8._1_3_,(char)uVar4) | 0x80);
                  FUN_01284394(pppppppiVar14,&local_f8,1);
                  uVar4 = uVar4 >> 7;
                  unaff_r4 = (int *******)((int)unaff_r4 + -1);
                } while (unaff_r4 != (int *******)0x0);
                if (ppppppiVar1 != (int ******)0x0) {
                  FUN_01016f10(1,pppppppiVar9[1],pppppppiVar9[2],pppppppiVar14);
                }
                if (ppppppiVar20 != (int ******)0x0) {
                  FUN_01016f10(2,pppppppiVar9[4],pppppppiVar9[5],pppppppiVar14);
                }
                if (ppppppiVar21 != (int ******)0x0) {
                  FUN_01016f10(3,pppppppiVar9[7],pppppppiVar9[8],pppppppiVar14);
                }
                pppppppiVar9 = local_200;
              } while (local_200 != local_204);
            }
            unaff_r6 = (int *******)&local_f8;
            pppppppiVar9 = local_1fc;
            if (ppppppiVar7 != (int ******)0x0) {
              do {
                unaff_r4 = pppppppiVar9;
                local_f8 = (int *******)CONCAT31(local_f8._1_3_,0x22);
                FUN_01284394(pppppppiVar14,unaff_r6,1);
                ppppppiVar1 = unaff_r4[2];
                iVar18 = 0;
                iVar15 = 0;
                if (ppppppiVar1 != (int ******)0x0) {
                  iVar15 = (int)ppppppiVar1 +
                           ((LZCOUNT((uint)ppppppiVar1 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                ppppppiVar20 = unaff_r4[3];
                if (ppppppiVar20 != (int ******)0x0) {
                  iVar18 = ((LZCOUNT((uint)ppppppiVar20 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                uVar4 = iVar18 + iVar15;
                iVar18 = 10;
                do {
                  if (uVar4 < 0x80) {
                    local_f8 = (int *******)CONCAT31(local_f8._1_3_,(char)uVar4);
                    FUN_01284394(pppppppiVar14,unaff_r6,1);
                    break;
                  }
                  local_f8 = (int *******)(CONCAT31(local_f8._1_3_,(char)uVar4) | 0x80);
                  FUN_01284394(pppppppiVar14,unaff_r6,1);
                  uVar4 = uVar4 >> 7;
                  iVar18 = iVar18 + -1;
                } while (iVar18 != 0);
                if (ppppppiVar1 != (int ******)0x0) {
                  FUN_01016f10(1,unaff_r4[1],unaff_r4[2],pppppppiVar14);
                }
                if (ppppppiVar20 != (int ******)0x0) {
                  FUN_00efc9fc(2,unaff_r4[3],pppppppiVar14);
                }
                pppppppiVar9 = unaff_r4 + 4;
                local_1fc = unaff_r4;
              } while (unaff_r4 + 4 != pppppppiVar8);
            }
          } while (unaff_r5 != pppppppiVar10 + (int)pppppppiVar12 * 0xc);
        }
        FUN_00d7fa90(&local_1f8);
        pppppppiVar9 = (int *******)param_2[0x39];
        if (pppppppiVar9 < pppppppiVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppppppiVar11,pppppppiVar9,pppppppiVar9,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,pppppppiVar19,pppppppiVar17,(int)*pppppppiVar14 + (int)pppppppiVar11,
                     (int)pppppppiVar9 - (int)pppppppiVar11);
        pppppppiVar11 = local_7c;
        pppppppiVar12 = local_80;
        pppppppiVar10 = local_84;
        pppppppiVar9 = local_88;
        pppppppiVar19 = local_8c;
        pppppppiVar17 = local_90;
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          FUN_01bed4e2(auStack_1b0,&local_78,0x50);
          goto LAB_00d7f540;
        }
        if (ppppppiVar6 <= param_2[0x39]) {
          FUN_01283fd8(&local_f8,pppppppiVar14);
          pppppppiVar17 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d7ebc0;
          local_bc = (int)local_f4 + ((uint)local_ec >> 5);
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int *****)((uint)pppppppiVar17 >> 5);
          if (local_1f0 < (int *******)((uint)pppppppiVar17 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d7f2f8;
        }
        pppppppiVar17 = (int *******)*pppppppiVar16;
        pppppppiVar19 = (int *******)param_2[0x1b];
        pppppppiVar11 = unaff_r4;
        pppppppiVar10 = unaff_r5;
        pppppppiVar12 = unaff_r6;
      } while (pppppppiVar17 != (int *******)&DAT_00000005 || pppppppiVar19 != (int *******)0x0);
    }
    if (param_2[0x39] == (int ******)0x0) {
      pppppppiVar19 = (int *******)0x0;
      pppppppiVar17 = (int *******)&SUB_00000004;
      pppppppiVar9 = pppppppiVar14;
    }
    else {
LAB_00d7eba0:
      FUN_01283fd8(&local_f8,pppppppiVar14);
      pppppppiVar17 = local_ec;
      if (((uint)local_ec & 1) == 0) {
LAB_00d7ebc0:
        pppppppiVar11 = local_ec;
        pppppppiVar10 = local_f8;
        pppppppiVar12 = local_f4;
        pppppppiVar9 = (int *******)&DAT_01d2e520;
      }
      else {
        local_bc = (int)local_f4 + ((uint)local_ec >> 5);
        local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
        local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
        FUN_01283524(&local_1f8,&local_c4);
        local_b8 = (int *****)((uint)pppppppiVar17 >> 5);
        if (local_1f0 < (int *******)((uint)pppppppiVar17 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_1f0;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d7f2f8:
        pppppppiVar12 = (int *******)((int)local_1f0 - (int)local_b8);
        pppppppiVar10 = (int *******)((int)local_1f4 + (int)local_b8);
        pppppppiVar11 = local_1ec;
        pppppppiVar9 = local_1f8;
      }
      pppppppiVar19 = (int *******)0x0;
      pppppppiVar17 = (int *******)&DAT_00000003;
    }
LAB_00d7f540:
    if (pppppppiVar17 == (int *******)&SUB_00000004 && pppppppiVar19 == (int *******)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x42);
      pppppppiVar16 = param_2;
      pppppppiVar14 = extraout_r12;
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
        local_1fc = local_7c;
        local_200 = local_88;
        local_204 = local_84;
        local_160 = local_70;
        local_15c = pppppppiStack_6c;
        local_158 = pppppppiStack_68;
        pppppppiStack_154 = pppppppiStack_64;
        pppppppiStack_150 = pppppppiStack_60;
        local_14c = local_5c;
        local_148 = pppppppiStack_58;
        local_144 = pppppppiStack_54;
        uStack_140 = uStack_50;
        uStack_13c = uStack_4c;
        pppppppiVar16 = local_78;
        pppppppiVar9 = local_80;
        pppppppiVar14 = local_74;
      }
      local_1f8 = local_160;
      local_1f4 = local_15c;
      local_1f0 = local_158;
      local_1ec = pppppppiStack_154;
      pppppppiStack_1e8 = pppppppiStack_150;
      local_1e4 = local_14c;
      pppppppiStack_1e0 = local_148;
      pppppppiStack_1dc = local_144;
      uStack_1d8 = uStack_140;
      uStack_1d4 = uStack_13c;
      local_1d0 = local_b0;
      uStack_1cc = uStack_ac;
      uStack_1c8 = uStack_a8;
      uStack_1c4 = uStack_a4;
      local_1c0 = local_a0;
      uStack_1bc = uStack_9c;
      uStack_1b8 = uStack_98;
      uStack_1b4 = uStack_94;
      pppppppiVar17 = local_90;
      pppppppiVar19 = local_8c;
LAB_00d7f778:
      if (pppppppiVar17 != (int *******)&DAT_00000003 || pppppppiVar19 != (int *******)0x0) {
        if (pppppppiVar17 != (int *******)&SUB_00000004 || pppppppiVar19 != (int *******)0x0) {
          if (pppppppiVar17 != (int *******)&DAT_00000005 || pppppppiVar19 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f8,0x48);
            local_84 = local_204;
            local_88 = local_200;
            local_7c = local_1fc;
            local_90 = pppppppiVar17;
            local_8c = pppppppiVar19;
            local_80 = pppppppiVar9;
            local_78 = pppppppiVar16;
            uVar5 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar5,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d7f7a0;
        }
        uVar5 = 4;
        goto LAB_00d7f7b4;
      }
    }
    else {
      if (pppppppiVar17 != (int *******)&DAT_00000003 || pppppppiVar19 != (int *******)0x0) {
        local_160 = pppppppiVar17;
        local_15c = pppppppiVar19;
        local_158 = pppppppiVar9;
        pppppppiStack_154 = pppppppiVar10;
        pppppppiStack_150 = pppppppiVar12;
        local_14c = pppppppiVar11;
        FUN_01bed4e2(&local_148,auStack_1b0,0x50);
        pppppppiVar14 = local_144;
        pppppppiVar16 = local_148;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_160);
          pppppppiVar19 = local_8c;
          pppppppiVar17 = local_90;
          local_200 = local_88;
          local_204 = local_84;
          local_1fc = local_7c;
          local_f8 = local_70;
          local_f4 = pppppppiStack_6c;
          local_f0 = pppppppiStack_68;
          local_ec = pppppppiStack_64;
          pppppppiStack_e8 = pppppppiStack_60;
          local_e4 = local_5c;
          pppppppiStack_e0 = pppppppiStack_58;
          pppppppiStack_dc = pppppppiStack_54;
          uStack_d8 = uStack_50;
          uStack_d4 = uStack_4c;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_1f8 = local_70;
            local_1f4 = pppppppiStack_6c;
            local_1f0 = pppppppiStack_68;
            local_1ec = pppppppiStack_64;
            pppppppiStack_1e8 = pppppppiStack_60;
            local_1e4 = local_5c;
            pppppppiStack_1e0 = pppppppiStack_58;
            pppppppiStack_1dc = pppppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
            pppppppiVar19 = (int *******)0x0;
            pppppppiVar17 = (int *******)&DAT_00000003;
          }
          else {
            local_1d0 = local_48;
            uStack_1cc = uStack_44;
            uStack_1c8 = uStack_40;
            uStack_1c4 = uStack_3c;
            local_1c0 = local_38;
            uStack_1bc = uStack_34;
            uStack_1b8 = uStack_30;
            uStack_1b4 = uStack_2c;
            local_1f8 = local_70;
            local_1f4 = pppppppiStack_6c;
            local_1f0 = pppppppiStack_68;
            local_1ec = pppppppiStack_64;
            pppppppiStack_1e8 = pppppppiStack_60;
            local_1e4 = local_5c;
            pppppppiStack_1e0 = pppppppiStack_58;
            pppppppiStack_1dc = pppppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
          }
          pppppppiVar14 = local_74;
          pppppppiVar16 = local_78;
          pppppppiVar9 = local_80;
        }
        else {
          local_200 = local_158;
          local_204 = pppppppiStack_154;
          FUN_01bed4e2(&local_1f8,auStack_1a8,0x48);
          pppppppiVar9 = pppppppiVar12;
          local_1fc = pppppppiVar11;
        }
        goto LAB_00d7f778;
      }
      local_204 = (int *******)0x0;
      local_200 = (int *******)&DAT_00000003;
      pppppppiVar14 = pppppppiVar11;
      pppppppiVar16 = pppppppiVar12;
      local_1fc = pppppppiVar10;
    }
    param_1[8] = local_1f8;
    param_1[9] = local_1f4;
    param_1[10] = local_1f0;
    param_1[0xb] = local_1ec;
    param_1[0xc] = pppppppiStack_1e8;
    param_1[0xd] = local_1e4;
    param_1[0xe] = pppppppiStack_1e0;
    param_1[0xf] = pppppppiStack_1dc;
    param_1[0x10] = uStack_1d8;
    param_1[0x11] = uStack_1d4;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_200;
    param_1[3] = local_204;
    param_1[4] = pppppppiVar9;
    param_1[5] = local_1fc;
    param_1[6] = pppppppiVar16;
    param_1[7] = pppppppiVar14;
  }
  else {
    pppppppiVar9 = (int *******)param_2[2];
    pppppppiVar10 = (int *******)param_2[3];
    pppppppiVar12 = (int *******)param_2[4];
    pppppppiVar11 = (int *******)param_2[5];
    FUN_01bed4e2(auStack_1b0,param_2 + 6,0x50);
    if (pppppppiVar17 != (int *******)&DAT_00000005 || pppppppiVar19 != (int *******)0x0)
    goto LAB_00d7f540;
LAB_00d7f7a0:
    uVar5 = 5;
LAB_00d7f7b4:
    *param_1 = uVar5;
    param_1[1] = 0;
  }
  return;
}

