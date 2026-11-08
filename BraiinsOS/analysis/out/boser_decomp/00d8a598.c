// FUN_00d8a598 @ 00d8a598 size=3268 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d8a598(undefined4 *param_1,int *******param_2,int *param_3)

{
  int *******pppppppiVar1;
  int *******pppppppiVar2;
  int *******pppppppiVar3;
  int *******pppppppiVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  int ******ppppppiVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int ******ppppppiVar12;
  int ******ppppppiVar13;
  int ******ppppppiVar14;
  int *******pppppppiVar15;
  int iVar16;
  int iVar17;
  int *******pppppppiVar18;
  int iVar19;
  int *******pppppppiVar20;
  int ******ppppppiVar21;
  int ******ppppppiVar22;
  int *******unaff_r9;
  int *******pppppppiVar23;
  int *******unaff_r10;
  int *******unaff_r11;
  int *******pppppppiVar24;
  int iVar25;
  int iVar26;
  int *******local_20c;
  int *******local_208;
  int *******local_204;
  int *******local_200;
  int *******local_1fc;
  int *******local_1f8;
  int *******local_1f4;
  int *******local_1f0;
  int *******local_1ec;
  int *******local_1e8;
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
  undefined1 auStack_1b0 [72];
  int *******local_168;
  int *******local_164;
  int *******local_160;
  int *******local_15c;
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *******local_100;
  int *******local_fc;
  int *******local_f8;
  int *******local_f4;
  int *******local_f0;
  int *******local_ec;
  int *******pppppppiStack_e8;
  int *******pppppppiStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *******local_d4;
  int *******local_d0;
  int local_cc;
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
  
  pppppppiVar18 = (int *******)*param_2;
  pppppppiVar20 = (int *******)param_2[1];
  ppppppiVar12 = param_2[0x41];
  *param_2 = (int ******)0x3;
  param_2[1] = (int ******)0x0;
  if (pppppppiVar18 == (int *******)&DAT_00000003 && pppppppiVar20 == (int *******)0x0) {
    pppppppiVar15 = param_2 + 0x1a;
    unaff_r10 = param_2 + 0x38;
    pppppppiVar18 = (int *******)*pppppppiVar15;
    pppppppiVar20 = (int *******)param_2[0x1b];
    if (pppppppiVar18 != (int *******)&DAT_00000005 || pppppppiVar20 != (int *******)0x0) {
      pppppppiVar24 = unaff_r11;
      do {
        if ((int ******)0x1f < param_2[0x34]) {
          iVar26 = *(int *)*param_3;
          iVar25 = ((int *)*param_3)[1];
          param_2[0x34] = (int ******)0x0;
          (**(code **)(iVar26 + 8))(iVar25);
LAB_00d8ad68:
          unaff_r11 = pppppppiVar24;
          if (param_2[0x39] != (int ******)0x0) goto LAB_00d8a600;
          goto LAB_00d8b0c0;
        }
        *pppppppiVar15 = (int ******)0x4;
        param_2[0x1b] = (int ******)0x0;
        param_2[0x34] = (int ******)((int)param_2[0x34] + 1);
        local_90 = pppppppiVar18;
        local_8c = pppppppiVar20;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        unaff_r11 = local_74;
        pppppppiVar7 = local_78;
        pppppppiVar23 = local_7c;
        pppppppiVar6 = local_80;
        pppppppiVar5 = local_84;
        pppppppiVar4 = local_88;
        if (pppppppiVar18 == (int *******)&SUB_00000004 && pppppppiVar20 == (int *******)0x0) {
          FUN_00d8a470(pppppppiVar15);
          *pppppppiVar15 = (int ******)0x5;
          param_2[0x1b] = (int ******)0x0;
          unaff_r11 = pppppppiVar24;
          break;
        }
        local_208 = local_88;
        local_204 = local_84;
        local_1fc = local_80;
        local_200 = local_78;
        FUN_01bed4e2(&local_168,param_2 + 0x22,0x48);
        if (((uint)pppppppiVar18 & 7) != 3) {
          pppppppiVar24 = unaff_r11;
          if (pppppppiVar18 == (int *******)&DAT_00000005) goto LAB_00d8ad68;
          ppppppiVar12 = param_2[0x39];
          if (ppppppiVar12 == (int ******)0x0) {
            pppppppiVar15 = (int *******)&local_168;
LAB_00d8ae70:
            FUN_01bed4e2(auStack_1b0,pppppppiVar15,0x48);
            goto LAB_00d8ae78;
          }
          if (*param_2 != (int ******)0x3 || param_2[1] != (int ******)0x0) {
            FUN_005f6588(param_2);
            ppppppiVar12 = param_2[0x39];
          }
          param_2[2] = (int ******)pppppppiVar4;
          param_2[3] = (int ******)pppppppiVar5;
          param_2[4] = (int ******)pppppppiVar6;
          *param_2 = (int ******)pppppppiVar18;
          param_2[1] = (int ******)pppppppiVar20;
          param_2[6] = (int ******)pppppppiVar7;
          param_2[7] = (int ******)unaff_r11;
          param_2[5] = (int ******)pppppppiVar23;
          FUN_01bed4e2(param_2 + 8,&local_168,0x48);
          FUN_01283fd8(&local_d4,unaff_r10,ppppppiVar12);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d8a620;
          local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int *****)((uint)local_c8 >> 5);
          if (local_1f0 < (int *******)((uint)local_c8 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d8ac00;
        }
        ppppppiVar13 = param_2[0x36];
        ppppppiVar21 = param_2[0x39];
        ppppppiVar8 = param_2[0x37];
        ppppppiVar22 = ppppppiVar21;
        if ((uint)((int)param_2[0x3a] - (int)ppppppiVar21) < 5) {
          FUN_01283c9c(unaff_r10,5);
          ppppppiVar22 = param_2[0x39];
          local_1f4 = (int *******)((int)param_2[0x3a] - (int)ppppppiVar22);
          if (local_1f4 < 5) {
            local_fc = pppppppiVar5;
            local_f4 = pppppppiVar23;
            local_f8 = pppppppiVar6;
            local_100 = pppppppiVar4;
            local_1f8 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1f8);
          }
        }
        param_2[0x39] = (int ******)((int)ppppppiVar22 + 5);
        iVar26 = 0;
        iVar25 = 0;
        local_1ec = pppppppiVar23;
        local_1e8 = pppppppiVar7;
        local_1e4 = unaff_r11;
        local_1f4 = pppppppiVar5;
        local_1f0 = pppppppiVar6;
        local_1f8 = pppppppiVar4;
        if (pppppppiVar6 != (int *******)0x0) {
          pppppppiVar20 = pppppppiVar5 + 8;
          pppppppiVar18 = pppppppiVar6;
          do {
            iVar19 = 0;
            if (((uint)pppppppiVar20[-8] & 1) != 0) {
              ppppppiVar14 = pppppppiVar20[-5];
              if (pppppppiVar20[-6] == (int ******)0x0 && ppppppiVar14 == (int ******)0x0) {
                iVar10 = 2;
              }
              else {
                uVar9 = LZCOUNT((uint)pppppppiVar20[-6] | 1) | 0x20;
                if (ppppppiVar14 != (int ******)0x0) {
                  uVar9 = LZCOUNT(ppppppiVar14);
                }
                iVar10 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
              ppppppiVar14 = pppppppiVar20[-4];
              if (ppppppiVar14 == (int ******)0x0) {
                iVar19 = 0;
              }
              else {
                uVar9 = LZCOUNT((uint)ppppppiVar14 | 1) | 0x20;
                if ((int)ppppppiVar14 < 0) {
                  uVar9 = LZCOUNT((int)ppppppiVar14 >> 0x1f);
                }
                iVar19 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              iVar19 = iVar19 + iVar10;
            }
            iVar10 = 0;
            iVar17 = 0;
            if (((uint)pppppppiVar20[-2] & 1) != 0) {
              ppppppiVar14 = pppppppiVar20[1];
              if (*pppppppiVar20 == (int ******)0x0 && ppppppiVar14 == (int ******)0x0) {
                iVar17 = 2;
              }
              else {
                uVar9 = LZCOUNT((uint)*pppppppiVar20 | 1) | 0x20;
                if (ppppppiVar14 != (int ******)0x0) {
                  uVar9 = LZCOUNT(ppppppiVar14);
                }
                iVar17 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            if (((uint)pppppppiVar20[6] & 1) != 0) {
              ppppppiVar14 = pppppppiVar20[9];
              if (pppppppiVar20[8] == (int ******)0x0 && ppppppiVar14 == (int ******)0x0) {
                iVar10 = 2;
              }
              else {
                uVar9 = LZCOUNT((uint)pppppppiVar20[8] | 1) | 0x20;
                if (ppppppiVar14 != (int ******)0x0) {
                  uVar9 = LZCOUNT(ppppppiVar14);
                }
                iVar10 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            iVar16 = 2;
            iVar25 = iVar25 + iVar19 + iVar17 + 1;
            if (*(double *)(pppppppiVar20 + 4) != 0.0) {
              iVar16 = 0xb;
            }
            if (((uint)pppppppiVar20[2] & 1) != 0) {
              iVar25 = iVar25 + iVar16;
            }
            pppppppiVar18 = (int *******)((int)pppppppiVar18 + -1);
            iVar25 = iVar25 + iVar10;
            pppppppiVar20 = pppppppiVar20 + 0x12;
          } while (pppppppiVar18 != (int *******)0x0);
        }
        if (unaff_r11 != (int *******)0x0) {
          iVar26 = 0;
          pppppppiVar20 = pppppppiVar7 + 0x10;
          pppppppiVar18 = unaff_r11;
          do {
            iVar19 = 0;
            if (((uint)pppppppiVar20[-0x10] & 1) != 0) {
              ppppppiVar14 = pppppppiVar20[-0xd];
              if (pppppppiVar20[-0xe] == (int ******)0x0 && ppppppiVar14 == (int ******)0x0) {
                iVar10 = 2;
              }
              else {
                uVar9 = LZCOUNT((uint)pppppppiVar20[-0xe] | 1) | 0x20;
                if (ppppppiVar14 != (int ******)0x0) {
                  uVar9 = LZCOUNT(ppppppiVar14);
                }
                iVar10 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
              ppppppiVar14 = pppppppiVar20[-0xc];
              if (ppppppiVar14 == (int ******)0x0) {
                iVar19 = 0;
              }
              else {
                uVar9 = LZCOUNT((uint)ppppppiVar14 | 1) | 0x20;
                if ((int)ppppppiVar14 < 0) {
                  uVar9 = LZCOUNT((int)ppppppiVar14 >> 0x1f);
                }
                iVar19 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
              }
              iVar19 = iVar19 + iVar10;
            }
            pppppppiVar24 = pppppppiVar20 + -10;
            iVar10 = 0;
            pppppppiVar1 = pppppppiVar20 + -6;
            pppppppiVar2 = pppppppiVar20 + -4;
            pppppppiVar3 = pppppppiVar20 + -8;
            if (((uint)pppppppiVar20[-2] & 1) != 0) {
              ppppppiVar14 = pppppppiVar20[1];
              if (*pppppppiVar20 == (int ******)0x0 && ppppppiVar14 == (int ******)0x0) {
                iVar10 = 2;
              }
              else {
                uVar9 = LZCOUNT((uint)*pppppppiVar20 | 1) | 0x20;
                if (ppppppiVar14 != (int ******)0x0) {
                  uVar9 = LZCOUNT(ppppppiVar14);
                }
                iVar10 = ((uVar9 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            iVar17 = 2;
            iVar26 = iVar26 + iVar19 + 1;
            pppppppiVar20 = pppppppiVar20 + 0x12;
            if (*(double *)pppppppiVar3 != 0.0) {
              iVar17 = 0xb;
            }
            if (((uint)*pppppppiVar24 & 1) != 0) {
              iVar26 = iVar26 + iVar17;
            }
            iVar19 = 2;
            if (*(double *)pppppppiVar2 != 0.0) {
              iVar19 = 0xb;
            }
            if (((uint)*pppppppiVar1 & 1) != 0) {
              iVar26 = iVar26 + iVar19;
            }
            pppppppiVar18 = (int *******)((int)pppppppiVar18 + -1);
            iVar26 = iVar26 + iVar10;
          } while (pppppppiVar18 != (int *******)0x0);
        }
        unaff_r9 = (int *******)(0x7ffffffa - (int)ppppppiVar22);
        pppppppiVar18 = (int *******)((int)unaff_r11 + (int)pppppppiVar6 + iVar26 + iVar25);
        if (unaff_r9 < pppppppiVar18) {
LAB_00d8b23c:
          local_d4 = pppppppiVar18;
          local_d0 = unaff_r9;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_d4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (pppppppiVar6 != (int *******)0x0) {
          iVar26 = (int)pppppppiVar6 * 0x48;
          pppppppiVar20 = pppppppiVar5;
          do {
            FUN_00efe99c(pppppppiVar20,unaff_r10);
            pppppppiVar20 = pppppppiVar20 + 0x12;
            iVar26 = iVar26 + -0x48;
          } while (iVar26 != 0);
        }
        if (unaff_r11 != (int *******)0x0) {
          iVar26 = (int)unaff_r11 * 0x48;
          unaff_r11 = pppppppiVar7;
          do {
            FUN_00efec08(2,unaff_r11,unaff_r10);
            unaff_r11 = unaff_r11 + 0x12;
            iVar26 = iVar26 + -0x48;
          } while (iVar26 != 0);
        }
        if (unaff_r9 < pppppppiVar18) goto LAB_00d8b23c;
        FUN_0132b958(pppppppiVar4,pppppppiVar5,8,0x48);
        FUN_0132b958(pppppppiVar23,pppppppiVar7,8,0x48);
        ppppppiVar22 = param_2[0x39];
        if (ppppppiVar22 < ppppppiVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(ppppppiVar21,ppppppiVar22,ppppppiVar22,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,ppppppiVar13,ppppppiVar8,(int)*unaff_r10 + (int)ppppppiVar21,
                     (int)ppppppiVar22 - (int)ppppppiVar21);
        if (local_90 != (int *******)&DAT_00000003 || local_8c != (int *******)0x0) {
          local_208 = local_88;
          local_204 = local_84;
          local_1fc = local_80;
          local_200 = local_78;
          pppppppiVar15 = (int *******)&local_70;
          pppppppiVar18 = local_90;
          pppppppiVar20 = local_8c;
          pppppppiVar23 = local_7c;
          unaff_r11 = local_74;
          goto LAB_00d8ae70;
        }
        if (ppppppiVar12 <= param_2[0x39]) {
          FUN_01283fd8(&local_d4,unaff_r10);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d8a620;
          local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_1f8,&local_c4);
          local_b8 = (int *****)((uint)local_c8 >> 5);
          if (local_1f0 < (int *******)((uint)local_c8 >> 5)) {
            local_88 = (int *******)&local_b4;
            local_b4 = local_1f0;
            local_84 = (int *******)&LAB_01a6a304;
            local_8c = (int *******)&LAB_01a6a304;
            local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d8ac00;
        }
        pppppppiVar18 = (int *******)*pppppppiVar15;
        pppppppiVar20 = (int *******)param_2[0x1b];
        pppppppiVar24 = unaff_r11;
      } while (pppppppiVar18 != (int *******)&DAT_00000005 || pppppppiVar20 != (int *******)0x0);
    }
    if (param_2[0x39] == (int ******)0x0) {
      pppppppiVar20 = (int *******)0x0;
      pppppppiVar18 = (int *******)&SUB_00000004;
      pppppppiVar23 = unaff_r9;
    }
    else {
LAB_00d8a600:
      FUN_01283fd8(&local_d4,unaff_r10);
      if (((uint)local_c8 & 1) == 0) {
LAB_00d8a620:
        local_208 = (int *******)&DAT_01d2e520;
        local_204 = local_d4;
        local_1fc = local_d0;
      }
      else {
        local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
        local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
        local_c4 = local_cc + ((uint)local_c8 >> 5);
        FUN_01283524(&local_1f8,&local_c4);
        local_b8 = (int *****)((uint)local_c8 >> 5);
        if (local_1f0 < (int *******)((uint)local_c8 >> 5)) {
          local_88 = (int *******)&local_b4;
          local_b4 = local_1f0;
          local_84 = (int *******)&LAB_01a6a304;
          local_8c = (int *******)&LAB_01a6a304;
          local_90 = (int *******)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d8ac00:
        local_1fc = (int *******)((int)local_1f0 - (int)local_b8);
        local_208 = local_1f8;
        local_204 = (int *******)((int)local_1f4 + (int)local_b8);
        local_c8 = local_1ec;
      }
      pppppppiVar20 = (int *******)0x0;
      pppppppiVar18 = (int *******)&DAT_00000003;
      pppppppiVar23 = local_c8;
    }
LAB_00d8ae78:
    if (pppppppiVar18 == (int *******)&SUB_00000004 && pppppppiVar20 == (int *******)0x0) {
      pppppppiVar23 = (int *******)&local_90;
      FUN_01a737fc(pppppppiVar23,param_2 + 0x42);
      local_20c = param_2;
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
        local_200 = local_78;
        local_20c = local_88;
        local_168 = local_70;
        local_164 = pppppppiStack_6c;
        local_160 = pppppppiStack_68;
        local_15c = pppppppiStack_64;
        local_158 = pppppppiStack_60;
        local_154 = local_5c;
        local_150 = pppppppiStack_58;
        local_14c = pppppppiStack_54;
        uStack_148 = uStack_50;
        uStack_144 = uStack_4c;
        pppppppiVar23 = local_7c;
        unaff_r10 = local_84;
        unaff_r11 = local_74;
      }
      local_1f8 = local_168;
      local_1f4 = local_164;
      local_1f0 = local_160;
      local_1ec = local_15c;
      local_1e8 = local_158;
      local_1e4 = local_154;
      pppppppiStack_1e0 = local_150;
      pppppppiStack_1dc = local_14c;
      uStack_1d8 = uStack_148;
      uStack_1d4 = uStack_144;
      local_1d0 = local_b0;
      uStack_1cc = uStack_ac;
      uStack_1c8 = uStack_a8;
      uStack_1c4 = uStack_a4;
      local_1c0 = local_a0;
      uStack_1bc = uStack_9c;
      uStack_1b8 = uStack_98;
      uStack_1b4 = uStack_94;
      pppppppiVar18 = local_90;
      pppppppiVar20 = local_8c;
LAB_00d8b09c:
      if (pppppppiVar18 != (int *******)&DAT_00000003 || pppppppiVar20 != (int *******)0x0) {
        if (pppppppiVar18 != (int *******)&SUB_00000004 || pppppppiVar20 != (int *******)0x0) {
          if (pppppppiVar18 != (int *******)&DAT_00000005 || pppppppiVar20 != (int *******)0x0) {
            FUN_01bed4e2(&local_70,&local_1f8,0x48);
            local_88 = local_20c;
            local_78 = local_200;
            local_80 = local_1fc;
            local_90 = pppppppiVar18;
            local_8c = pppppppiVar20;
            local_84 = unaff_r10;
            local_7c = pppppppiVar23;
            local_74 = unaff_r11;
            uVar11 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar11,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d8b0c0;
        }
        uVar11 = 4;
        goto LAB_00d8b0d4;
      }
      local_208 = local_1fc;
      local_1fc = local_200;
      local_204 = pppppppiVar23;
    }
    else {
      if (pppppppiVar18 != (int *******)&DAT_00000003 || pppppppiVar20 != (int *******)0x0) {
        local_150 = local_200;
        local_158 = local_1fc;
        local_15c = local_204;
        local_160 = local_208;
        local_168 = pppppppiVar18;
        local_164 = pppppppiVar20;
        local_154 = pppppppiVar23;
        local_14c = unaff_r11;
        FUN_01bed4e2(&uStack_148,auStack_1b0,0x48);
        unaff_r10 = local_15c;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_168);
          pppppppiVar20 = local_8c;
          pppppppiVar18 = local_90;
          local_20c = local_88;
          local_200 = local_78;
          local_1fc = local_80;
          local_100 = local_70;
          local_fc = pppppppiStack_6c;
          local_f8 = pppppppiStack_68;
          local_f4 = pppppppiStack_64;
          local_f0 = pppppppiStack_60;
          local_ec = local_5c;
          pppppppiStack_e8 = pppppppiStack_58;
          pppppppiStack_e4 = pppppppiStack_54;
          uStack_e0 = uStack_50;
          uStack_dc = uStack_4c;
          unaff_r10 = local_84;
          pppppppiVar23 = local_7c;
          unaff_r11 = local_74;
          if (local_90 == (int *******)&DAT_00000003 && local_8c == (int *******)0x0) {
            local_1f8 = local_70;
            local_1f4 = pppppppiStack_6c;
            local_1f0 = pppppppiStack_68;
            local_1ec = pppppppiStack_64;
            local_1e8 = pppppppiStack_60;
            local_1e4 = local_5c;
            pppppppiStack_1e0 = pppppppiStack_58;
            pppppppiStack_1dc = pppppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_168);
            pppppppiVar18 = (int *******)&DAT_00000003;
            pppppppiVar20 = (int *******)0x0;
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
            local_1e8 = pppppppiStack_60;
            local_1e4 = local_5c;
            pppppppiStack_1e0 = pppppppiStack_58;
            pppppppiStack_1dc = pppppppiStack_54;
            uStack_1d8 = uStack_50;
            uStack_1d4 = uStack_4c;
            FUN_005f6588(&local_168);
          }
        }
        else {
          local_20c = local_160;
          FUN_01bed4e2(&local_1f8,auStack_1b0,0x48);
        }
        goto LAB_00d8b09c;
      }
      unaff_r10 = (int *******)0x0;
      local_20c = (int *******)&DAT_00000003;
      unaff_r11 = pppppppiVar23;
    }
    param_1[8] = local_1f8;
    param_1[9] = local_1f4;
    param_1[10] = local_1f0;
    param_1[0xb] = local_1ec;
    param_1[0xc] = local_1e8;
    param_1[0xd] = local_1e4;
    param_1[0xe] = pppppppiStack_1e0;
    param_1[0xf] = pppppppiStack_1dc;
    param_1[0x10] = uStack_1d8;
    param_1[0x11] = uStack_1d4;
    param_1[1] = 0;
    param_1[2] = local_20c;
    param_1[4] = local_208;
    param_1[5] = local_204;
    *param_1 = 3;
    param_1[3] = unaff_r10;
    param_1[6] = local_1fc;
    param_1[7] = unaff_r11;
  }
  else {
    local_208 = (int *******)param_2[2];
    local_204 = (int *******)param_2[3];
    local_1fc = (int *******)param_2[4];
    local_200 = (int *******)param_2[6];
    unaff_r11 = (int *******)param_2[7];
    pppppppiVar23 = (int *******)param_2[5];
    FUN_01bed4e2(auStack_1b0,param_2 + 8,0x48);
    if (pppppppiVar18 != (int *******)&DAT_00000005 || pppppppiVar20 != (int *******)0x0)
    goto LAB_00d8ae78;
LAB_00d8b0c0:
    uVar11 = 5;
LAB_00d8b0d4:
    *param_1 = uVar11;
    param_1[1] = 0;
  }
  return;
}

