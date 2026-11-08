// FUN_00d86610 @ 00d86610 size=3716 calls_out=24 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00d86610(undefined4 *param_1,uint *******param_2,int *param_3)

{
  byte bVar1;
  uint ******ppppppuVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint ******ppppppuVar6;
  uint ******ppppppuVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  uint *******unaff_r4;
  uint *******pppppppuVar10;
  int iVar11;
  uint *******unaff_r5;
  uint *******pppppppuVar12;
  uint ******ppppppuVar13;
  int iVar14;
  uint *******unaff_r7;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  uint ******ppppppuVar17;
  uint *******pppppppuVar18;
  uint *******pppppppuVar19;
  uint ******ppppppuVar20;
  uint *****pppppuVar21;
  uint *******pppppppuVar22;
  uint ******ppppppuVar23;
  int iVar24;
  uint *****pppppuVar25;
  uint *******unaff_r11;
  int iVar26;
  uint *******extraout_r12;
  uint *******pppppppuVar27;
  uint *******local_208;
  uint *******local_204;
  uint *******local_200;
  uint *******local_1f8;
  uint *******local_1f4;
  uint *******local_1f0;
  uint *******local_1ec;
  uint *******pppppppuStack_1e8;
  uint *******local_1e4;
  uint *******pppppppuStack_1e0;
  uint *******pppppppuStack_1dc;
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
  uint *******local_160;
  uint *******local_15c;
  uint *******local_158;
  uint *******local_154;
  uint *******local_150;
  uint *******local_14c;
  uint *******local_148;
  uint *******local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint *******local_f8;
  uint *******local_f4;
  uint *******local_f0;
  uint *******local_ec;
  uint *******pppppppuStack_e8;
  uint *******local_e4;
  uint *******pppppppuStack_e0;
  uint *******pppppppuStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint *******local_d0;
  uint *******local_cc;
  uint *******local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint *****local_b8;
  uint *******local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *******local_90;
  uint *******local_8c;
  uint *******local_88;
  uint *******local_84;
  uint *******local_80;
  uint *******local_7c;
  uint *******local_78;
  uint *******local_74;
  uint *******local_70;
  uint *******pppppppuStack_6c;
  uint *******pppppppuStack_68;
  uint *******pppppppuStack_64;
  uint *******pppppppuStack_60;
  uint *******local_5c;
  uint *******pppppppuStack_58;
  uint *******pppppppuStack_54;
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
  
  pppppppuVar22 = (uint *******)*param_2;
  pppppppuVar19 = (uint *******)param_2[1];
  ppppppuVar6 = param_2[0x41];
  *param_2 = (uint ******)0x3;
  param_2[1] = (uint ******)0x0;
  if (pppppppuVar22 == (uint *******)&DAT_00000003 && pppppppuVar19 == (uint *******)0x0) {
    pppppppuVar27 = param_2 + 0x1a;
    pppppppuVar18 = param_2 + 0x38;
    pppppppuVar22 = (uint *******)*pppppppuVar27;
    pppppppuVar19 = (uint *******)param_2[0x1b];
    pppppppuVar15 = unaff_r7;
    pppppppuVar16 = unaff_r11;
    if (pppppppuVar22 != (uint *******)&DAT_00000005 || pppppppuVar19 != (uint *******)0x0) {
      pppppppuVar10 = unaff_r4;
      pppppppuVar12 = unaff_r5;
      do {
        if ((uint ******)0x1f < param_2[0x34]) {
          iVar11 = *(int *)*param_3;
          iVar14 = ((int *)*param_3)[1];
          param_2[0x34] = (uint ******)0x0;
          (**(code **)(iVar11 + 8))(iVar14);
LAB_00d86fb0:
          if (param_2[0x39] != (uint ******)0x0) goto LAB_00d86678;
          goto LAB_00d87324;
        }
        *pppppppuVar27 = (uint ******)0x4;
        param_2[0x1b] = (uint ******)0x0;
        param_2[0x34] = (uint ******)((int)param_2[0x34] + 1);
        local_90 = pppppppuVar22;
        local_8c = pppppppuVar19;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        pppppppuVar15 = local_7c;
        unaff_r4 = local_80;
        unaff_r5 = local_84;
        pppppppuVar16 = local_88;
        if (pppppppuVar22 == (uint *******)&SUB_00000004 && pppppppuVar19 == (uint *******)0x0) {
          FUN_00d864e8(pppppppuVar27);
          *pppppppuVar27 = (uint ******)0x5;
          param_2[0x1b] = (uint ******)0x0;
          unaff_r4 = pppppppuVar10;
          unaff_r5 = pppppppuVar12;
          pppppppuVar15 = unaff_r7;
          pppppppuVar16 = unaff_r11;
          break;
        }
        FUN_01bed4e2(&local_160,param_2 + 0x20,0x50);
        if (((uint)pppppppuVar22 & 7) != 3) {
          if (pppppppuVar22 == (uint *******)&DAT_00000005) goto LAB_00d86fb0;
          ppppppuVar6 = param_2[0x39];
          if (ppppppuVar6 == (uint ******)0x0) {
            FUN_01bed4e2(auStack_1b0,&local_160,0x50);
            goto LAB_00d870b8;
          }
          if (*param_2 != (uint ******)0x3 || param_2[1] != (uint ******)0x0) {
            FUN_005f6588(param_2);
            ppppppuVar6 = param_2[0x39];
          }
          *param_2 = (uint ******)pppppppuVar22;
          param_2[2] = (uint ******)pppppppuVar16;
          param_2[3] = (uint ******)unaff_r5;
          param_2[4] = (uint ******)unaff_r4;
          param_2[1] = (uint ******)pppppppuVar19;
          param_2[5] = (uint ******)pppppppuVar15;
          FUN_01bed4e2(param_2 + 6,&local_160,0x50);
          FUN_01283fd8(&local_f8,pppppppuVar18,ppppppuVar6);
          pppppppuVar22 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d86698;
          local_bc = (int)local_f4 + ((uint)local_ec >> 5);
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (uint *****)((uint)pppppppuVar22 >> 5);
          if (local_1f0 < (uint *******)((uint)pppppppuVar22 >> 5)) {
            local_88 = (uint *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (uint *******)&LAB_01a6a304;
            local_8c = (uint *******)&LAB_01a6a304;
            local_90 = (uint *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d86e68;
        }
        pppppppuVar19 = (uint *******)param_2[0x39];
        ppppppuVar23 = param_2[0x36];
        ppppppuVar13 = param_2[0x37];
        pppppppuVar22 = pppppppuVar19;
        if ((uint)((int)param_2[0x3a] - (int)pppppppuVar19) < 5) {
          FUN_01283c9c(pppppppuVar18,5);
          pppppppuVar22 = (uint *******)param_2[0x39];
          local_1f4 = (uint *******)((int)param_2[0x3a] - (int)pppppppuVar22);
          if (local_1f4 < 5) {
            local_c8 = unaff_r4;
            local_cc = unaff_r5;
            local_d0 = pppppppuVar16;
            local_1f8 = (uint *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f8);
          }
        }
        param_2[0x39] = (uint ******)((int)pppppppuVar22 + 5);
        local_1f0 = unaff_r4;
        local_1f4 = unaff_r5;
        local_1f8 = pppppppuVar16;
        unaff_r7 = pppppppuVar19;
        unaff_r11 = unaff_r4;
        if (unaff_r4 != (uint *******)0x0) {
          pppppppuVar15 = unaff_r5 + 6;
          iVar11 = 0;
          pppppppuVar16 = unaff_r4;
          do {
            ppppppuVar2 = *pppppppuVar15;
            iVar14 = 0;
            if (ppppppuVar2 != (uint ******)0x0) {
              iVar14 = (int)ppppppuVar2 +
                       ((LZCOUNT((uint)ppppppuVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            iVar24 = 0;
            iVar26 = 0;
            if (pppppppuVar15[-6] != (uint ******)0x2) {
              if (((uint)pppppppuVar15[-6] & 1) == 0) {
                if (pppppppuVar15[-5] == (uint ******)0x0) {
                  iVar26 = 2;
                }
                else {
                  iVar26 = ((LZCOUNT((uint)pppppppuVar15[-5] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
                }
              }
              else {
                iVar26 = 2;
                if (*(double *)(pppppppuVar15 + -4) != 0.0) {
                  iVar26 = 0xb;
                }
              }
            }
            ppppppuVar20 = pppppppuVar15[3];
            iVar3 = FUN_011df2f4(pppppppuVar15[2],pppppppuVar15[2] + (int)ppppppuVar20 * 0x20);
            ppppppuVar2 = pppppppuVar15[6];
            if (ppppppuVar2 != (uint ******)0x0) {
              iVar24 = (int)ppppppuVar2 +
                       ((LZCOUNT((uint)ppppppuVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppppppuVar15 = pppppppuVar15 + 0xe;
            pppppppuVar16 = (uint *******)((int)pppppppuVar16 + -1);
            uVar4 = (int)ppppppuVar20 + iVar24 + iVar3 + iVar26 + iVar14;
            iVar11 = uVar4 + iVar11 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6);
          } while (pppppppuVar16 != (uint *******)0x0);
          if ((uint ******)(0x7ffffffaU - (int)pppppppuVar22) <
              (uint ******)(iVar11 + (int)unaff_r4)) {
            local_f8 = (uint *******)(iVar11 + (int)unaff_r4);
            local_f4 = (uint *******)(0x7ffffffaU - (int)pppppppuVar22);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003efa56,0x27,&local_f8,&DAT_01c15d9c,&DAT_01c15fbc);
          }
          pppppppuVar16 = unaff_r5 + (int)unaff_r4 * 0xe;
          pppppppuVar22 = unaff_r5;
          do {
            local_f8 = (uint *******)CONCAT31(local_f8._1_3_,10);
            FUN_01284394(pppppppuVar18,&local_f8,1);
            ppppppuVar2 = pppppppuVar22[6];
            iVar11 = 0;
            iVar14 = 0;
            if (ppppppuVar2 != (uint ******)0x0) {
              iVar14 = (int)ppppppuVar2 +
                       ((LZCOUNT((uint)ppppppuVar2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            ppppppuVar20 = *pppppppuVar22;
            if (ppppppuVar20 != (uint ******)0x2) {
              if (((uint)ppppppuVar20 & 1) == 0) {
                if (pppppppuVar22[1] == (uint ******)0x0) {
                  iVar11 = 2;
                }
                else {
                  iVar11 = ((LZCOUNT((uint)pppppppuVar22[1] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 3;
                }
              }
              else {
                iVar11 = 2;
                if (*(double *)(pppppppuVar22 + 2) != 0.0) {
                  iVar11 = 0xb;
                }
              }
            }
            local_200 = (uint *******)pppppppuVar22[9];
            ppppppuVar17 = pppppppuVar22[8];
            iVar24 = (int)local_200 * 0x20;
            iVar26 = FUN_011df2f4(ppppppuVar17);
            ppppppuVar7 = pppppppuVar22[0xc];
            iVar3 = 0;
            if (ppppppuVar7 != (uint ******)0x0) {
              iVar3 = (int)ppppppuVar7 +
                      ((LZCOUNT((uint)ppppppuVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
            }
            pppppppuVar15 = pppppppuVar22 + 0xe;
            unaff_r7 = (uint *******)((int)local_200 + iVar3 + iVar26 + iVar11 + iVar14);
            iVar11 = 10;
            do {
              if (unaff_r7 < &DAT_00000080) {
                local_f8 = (uint *******)CONCAT31(local_f8._1_3_,(char)unaff_r7);
                FUN_01284394(pppppppuVar18,&local_f8,1);
                break;
              }
              local_f8 = (uint *******)(CONCAT31(local_f8._1_3_,(char)unaff_r7) | 0x80);
              FUN_01284394(pppppppuVar18,&local_f8,1);
              unaff_r7 = (uint *******)((uint)unaff_r7 >> 7);
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
            unaff_r5 = (uint *******)0x0;
            if (ppppppuVar2 != (uint ******)0x0) {
              FUN_01016f10(1,pppppppuVar22[5],pppppppuVar22[6],pppppppuVar18);
            }
            if (ppppppuVar20 != (uint ******)0x2) {
              if (((uint)ppppppuVar20 & 1) == 0) {
                FUN_00f00504(2,pppppppuVar22[1],pppppppuVar18);
              }
              else {
                FUN_00f0047c((int)*(undefined8 *)(pppppppuVar22 + 2),3,pppppppuVar18);
              }
            }
            ppppppuVar2 = ppppppuVar17;
            if (local_200 != (uint *******)0x0) {
              do {
                local_f8 = (uint *******)CONCAT31(local_f8._1_3_,0x22);
                FUN_01284394(pppppppuVar18,&local_f8,1);
                local_200 = (uint *******)ppppppuVar2[0x18];
                iVar14 = 0;
                iVar11 = 0;
                if (local_200 != (uint *******)0x0) {
                  iVar11 = (int)local_200 +
                           ((LZCOUNT((uint)local_200 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                pppppuVar21 = ppppppuVar2[0x1b];
                if (pppppuVar21 != (uint *****)0x0) {
                  iVar14 = (int)pppppuVar21 +
                           ((LZCOUNT((uint)pppppuVar21 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                pppppuVar25 = ppppppuVar2[0x1e];
                iVar26 = 0;
                iVar3 = 0;
                if (pppppuVar25 != (uint *****)0x0) {
                  iVar3 = (int)pppppuVar25 +
                          ((LZCOUNT((uint)pppppuVar25 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                pppppuVar8 = *ppppppuVar2;
                pppppuVar9 = ppppppuVar2[1];
                local_208 = (uint *******)(uint)*(byte *)((int)ppppppuVar2 + 0x7e);
                local_204 = (uint *******)(uint)*(byte *)((int)ppppppuVar2 + 0x7d);
                bVar1 = *(byte *)(ppppppuVar2 + 0x1f);
                if (((uint)pppppuVar8 ^ 2) != 0 || pppppuVar9 != (uint *****)0x0) {
                  uVar4 = FUN_00f00b38(ppppppuVar2);
                  iVar26 = uVar4 + ((LZCOUNT(uVar4 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
                }
                ppppppuVar20 = ppppppuVar2 + 0x20;
                unaff_r5 = (uint *******)
                           (iVar14 + iVar11 + iVar3 + (uint)bVar1 * 2 + (int)local_204 * 2 +
                            (int)local_208 * 2 + iVar26);
                unaff_r7 = (uint *******)&DAT_0000000a;
                do {
                  if (unaff_r5 < &DAT_00000080) {
                    local_f8 = (uint *******)CONCAT31(local_f8._1_3_,(char)unaff_r5);
                    FUN_01284394(pppppppuVar18,&local_f8,1);
                    break;
                  }
                  local_f8 = (uint *******)(CONCAT31(local_f8._1_3_,(char)unaff_r5) | 0x80);
                  FUN_01284394(pppppppuVar18,&local_f8,1);
                  unaff_r5 = (uint *******)((uint)unaff_r5 >> 7);
                  unaff_r7 = (uint *******)((int)unaff_r7 + -1);
                } while (unaff_r7 != (uint *******)0x0);
                if (local_200 != (uint *******)0x0) {
                  FUN_01016f10(1,ppppppuVar2[0x17],ppppppuVar2[0x18],pppppppuVar18);
                }
                if (pppppuVar21 != (uint *****)0x0) {
                  FUN_01016f10(2,ppppppuVar2[0x1a],ppppppuVar2[0x1b],pppppppuVar18);
                }
                if (pppppuVar25 != (uint *****)0x0) {
                  FUN_01016f10(3,ppppppuVar2[0x1d],ppppppuVar2[0x1e],pppppppuVar18);
                }
                if (bVar1 != 0) {
                  FUN_00efe13c(4,*(undefined1 *)(ppppppuVar2 + 0x1f),pppppppuVar18);
                }
                if (local_204 != (uint *******)0x0) {
                  FUN_00efe13c(5,*(undefined1 *)((int)ppppppuVar2 + 0x7d),pppppppuVar18);
                }
                if (local_208 != (uint *******)0x0) {
                  FUN_00efe13c(6,*(undefined1 *)((int)ppppppuVar2 + 0x7e),pppppppuVar18);
                }
                if (((uint)pppppuVar8 ^ 2) != 0 || pppppuVar9 != (uint *****)0x0) {
                  FUN_00f00d70(7,ppppppuVar2,pppppppuVar18);
                }
                ppppppuVar2 = ppppppuVar20;
              } while (ppppppuVar20 != ppppppuVar17 + iVar24);
            }
            unaff_r11 = (uint *******)&local_f8;
            if (ppppppuVar7 != (uint ******)0x0) {
              FUN_01016f10(5,pppppppuVar22[0xb],pppppppuVar22[0xc],pppppppuVar18);
            }
            pppppppuVar22 = pppppppuVar15;
          } while (pppppppuVar15 != pppppppuVar16);
        }
        FUN_00d87608(&local_1f8);
        pppppppuVar22 = (uint *******)param_2[0x39];
        if (pppppppuVar22 < pppppppuVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppppppuVar19,pppppppuVar22,pppppppuVar22,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,ppppppuVar23,ppppppuVar13,(int)*pppppppuVar18 + (int)pppppppuVar19,
                     (int)pppppppuVar22 - (int)pppppppuVar19);
        pppppppuVar15 = local_7c;
        unaff_r4 = local_80;
        pppppppuVar10 = local_84;
        pppppppuVar16 = local_88;
        pppppppuVar19 = local_8c;
        pppppppuVar22 = local_90;
        if (local_90 != (uint *******)&DAT_00000003 || local_8c != (uint *******)0x0) {
          FUN_01bed4e2(auStack_1b0,&local_78,0x50);
          unaff_r5 = pppppppuVar10;
          goto LAB_00d870b8;
        }
        if (ppppppuVar6 <= param_2[0x39]) {
          FUN_01283fd8(&local_f8,pppppppuVar18);
          pppppppuVar22 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d86698;
          local_bc = (int)local_f4 + ((uint)local_ec >> 5);
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (uint *****)((uint)pppppppuVar22 >> 5);
          if (local_1f0 < (uint *******)((uint)pppppppuVar22 >> 5)) {
            local_88 = (uint *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (uint *******)&LAB_01a6a304;
            local_8c = (uint *******)&LAB_01a6a304;
            local_90 = (uint *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d86e68;
        }
        pppppppuVar22 = (uint *******)*pppppppuVar27;
        pppppppuVar19 = (uint *******)param_2[0x1b];
        unaff_r4 = pppppppuVar18;
        pppppppuVar10 = pppppppuVar18;
        pppppppuVar12 = unaff_r5;
        pppppppuVar15 = unaff_r7;
        pppppppuVar16 = unaff_r11;
      } while (pppppppuVar22 != (uint *******)&DAT_00000005 || pppppppuVar19 != (uint *******)0x0);
    }
    if (param_2[0x39] == (uint ******)0x0) {
      pppppppuVar19 = (uint *******)0x0;
      pppppppuVar22 = (uint *******)&SUB_00000004;
    }
    else {
LAB_00d86678:
      FUN_01283fd8(&local_f8,pppppppuVar18);
      pppppppuVar22 = local_ec;
      if (((uint)local_ec & 1) == 0) {
LAB_00d86698:
        unaff_r4 = local_f4;
        unaff_r5 = local_f8;
        pppppppuVar15 = local_ec;
        pppppppuVar16 = (uint *******)&DAT_01d2e520;
      }
      else {
        local_bc = (int)local_f4 + ((uint)local_ec >> 5);
        local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
        local_c4 = (int)local_f0 + ((uint)local_ec >> 5);
        FUN_01283524(&local_1f8,&local_c4);
        local_b8 = (uint *****)((uint)pppppppuVar22 >> 5);
        if (local_1f0 < (uint *******)((uint)pppppppuVar22 >> 5)) {
          local_88 = (uint *******)&local_b4;
          local_b4 = local_1f0;
          local_84 = (uint *******)&LAB_01a6a304;
          local_8c = (uint *******)&LAB_01a6a304;
          local_90 = (uint *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d86e68:
        unaff_r4 = (uint *******)((int)local_1f0 - (int)local_b8);
        unaff_r5 = (uint *******)((int)local_1f4 + (int)local_b8);
        pppppppuVar15 = local_1ec;
        pppppppuVar16 = local_1f8;
      }
      pppppppuVar19 = (uint *******)0x0;
      pppppppuVar22 = (uint *******)&DAT_00000003;
    }
LAB_00d870b8:
    if (pppppppuVar22 == (uint *******)&SUB_00000004 && pppppppuVar19 == (uint *******)0x0) {
      pppppppuVar27 = (uint *******)0xd870f8;
      FUN_01a737fc(&local_90,param_2 + 0x42);
      pppppppuVar18 = param_2;
      unaff_r4 = extraout_r12;
      if (local_90 != (uint *******)&SUB_00000004 || local_8c != (uint *******)0x0) {
        if (local_90 != (uint *******)&DAT_00000003 || local_8c != (uint *******)0x0) {
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_200 = local_7c;
        local_204 = local_88;
        local_208 = local_74;
        local_160 = local_70;
        local_15c = pppppppuStack_6c;
        local_158 = pppppppuStack_68;
        local_154 = pppppppuStack_64;
        local_150 = pppppppuStack_60;
        local_14c = local_5c;
        local_148 = pppppppuStack_58;
        local_144 = pppppppuStack_54;
        uStack_140 = uStack_50;
        uStack_13c = uStack_4c;
        pppppppuVar18 = local_84;
        unaff_r4 = local_80;
        pppppppuVar27 = local_78;
      }
      local_1f8 = local_160;
      local_1f4 = local_15c;
      local_1f0 = local_158;
      local_1ec = local_154;
      pppppppuStack_1e8 = local_150;
      local_1e4 = local_14c;
      pppppppuStack_1e0 = local_148;
      pppppppuStack_1dc = local_144;
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
      pppppppuVar19 = local_8c;
      pppppppuVar22 = local_90;
LAB_00d87300:
      if (pppppppuVar22 != (uint *******)&DAT_00000003 || pppppppuVar19 != (uint *******)0x0) {
        if (pppppppuVar22 != (uint *******)&SUB_00000004 || pppppppuVar19 != (uint *******)0x0) {
          if (pppppppuVar22 != (uint *******)&DAT_00000005 || pppppppuVar19 != (uint *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f8,0x48);
            local_88 = local_204;
            local_74 = local_208;
            local_7c = local_200;
            local_90 = pppppppuVar22;
            local_8c = pppppppuVar19;
            local_84 = pppppppuVar18;
            local_80 = unaff_r4;
            local_78 = pppppppuVar27;
            uVar5 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar5,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d87324;
        }
        uVar5 = 4;
        goto LAB_00d87338;
      }
      pppppppuVar16 = unaff_r4;
    }
    else {
      if (pppppppuVar22 != (uint *******)&DAT_00000003 || pppppppuVar19 != (uint *******)0x0) {
        local_160 = pppppppuVar22;
        local_15c = pppppppuVar19;
        local_158 = pppppppuVar16;
        local_154 = unaff_r5;
        local_150 = unaff_r4;
        local_14c = pppppppuVar15;
        FUN_01bed4e2(&local_148,auStack_1b0,0x50);
        pppppppuVar27 = local_148;
        pppppppuVar18 = local_154;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_160);
          pppppppuVar19 = local_8c;
          pppppppuVar22 = local_90;
          local_204 = local_88;
          local_208 = local_74;
          local_200 = local_7c;
          local_f8 = local_70;
          local_f4 = pppppppuStack_6c;
          local_f0 = pppppppuStack_68;
          local_ec = pppppppuStack_64;
          pppppppuStack_e8 = pppppppuStack_60;
          local_e4 = local_5c;
          pppppppuStack_e0 = pppppppuStack_58;
          pppppppuStack_dc = pppppppuStack_54;
          uStack_d8 = uStack_50;
          uStack_d4 = uStack_4c;
          if (local_90 == (uint *******)&DAT_00000003 && local_8c == (uint *******)0x0) {
            local_1f8 = local_70;
            local_1f4 = pppppppuStack_6c;
            local_1f0 = pppppppuStack_68;
            local_1ec = pppppppuStack_64;
            pppppppuStack_1e8 = pppppppuStack_60;
            local_1e4 = local_5c;
            pppppppuStack_1e0 = pppppppuStack_58;
            pppppppuStack_1dc = pppppppuStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
            pppppppuVar19 = (uint *******)0x0;
            pppppppuVar22 = (uint *******)&DAT_00000003;
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
            local_1f4 = pppppppuStack_6c;
            local_1f0 = pppppppuStack_68;
            local_1ec = pppppppuStack_64;
            pppppppuStack_1e8 = pppppppuStack_60;
            local_1e4 = local_5c;
            pppppppuStack_1e0 = pppppppuStack_58;
            pppppppuStack_1dc = pppppppuStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_160);
          }
          unaff_r4 = local_80;
          pppppppuVar27 = local_78;
          pppppppuVar18 = local_84;
        }
        else {
          local_208 = local_144;
          local_204 = local_158;
          FUN_01bed4e2(&local_1f8,auStack_1a8,0x48);
          local_200 = pppppppuVar15;
        }
        goto LAB_00d87300;
      }
      pppppppuVar18 = (uint *******)0x0;
      local_204 = (uint *******)&DAT_00000003;
      local_200 = unaff_r5;
      pppppppuVar27 = unaff_r4;
      local_208 = pppppppuVar15;
    }
    param_1[8] = local_1f8;
    param_1[9] = local_1f4;
    param_1[10] = local_1f0;
    param_1[0xb] = local_1ec;
    param_1[0xc] = pppppppuStack_1e8;
    param_1[0xd] = local_1e4;
    param_1[0xe] = pppppppuStack_1e0;
    param_1[0xf] = pppppppuStack_1dc;
    param_1[0x10] = uStack_1d8;
    param_1[0x11] = uStack_1d4;
    param_1[1] = 0;
    param_1[2] = local_204;
    *param_1 = 3;
    param_1[3] = pppppppuVar18;
    param_1[4] = pppppppuVar16;
    param_1[5] = local_200;
    param_1[6] = pppppppuVar27;
    param_1[7] = local_208;
  }
  else {
    pppppppuVar16 = (uint *******)param_2[2];
    unaff_r5 = (uint *******)param_2[3];
    unaff_r4 = (uint *******)param_2[4];
    pppppppuVar15 = (uint *******)param_2[5];
    FUN_01bed4e2(auStack_1b0,param_2 + 6,0x50);
    if (pppppppuVar22 != (uint *******)&DAT_00000005 || pppppppuVar19 != (uint *******)0x0)
    goto LAB_00d870b8;
LAB_00d87324:
    uVar5 = 5;
LAB_00d87338:
    *param_1 = uVar5;
    param_1[1] = 0;
  }
  return;
}

