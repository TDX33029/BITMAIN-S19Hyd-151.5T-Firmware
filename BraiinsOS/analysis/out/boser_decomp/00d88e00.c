// FUN_00d88e00 @ 00d88e00 size=4512 calls_out=20 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d88e00(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *******pppppppiVar11;
  int iVar12;
  int *******pppppppiVar13;
  int *******pppppppiVar14;
  uint uVar15;
  uint uVar16;
  int *******pppppppiVar17;
  int *******unaff_r10;
  int *******pppppppiVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  int *******local_20c;
  int *******local_208;
  int *******local_204;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [72];
  int *******local_1b0;
  int *******local_1ac;
  int *******local_1a8;
  int *******local_1a4;
  int *******pppppppiStack_1a0;
  int *******local_19c;
  int *******pppppppiStack_198;
  int *******pppppppiStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  int *******local_188;
  int *******pppppppiStack_184;
  int *******pppppppiStack_180;
  int *******pppppppiStack_17c;
  int *******pppppppiStack_178;
  int *******local_174;
  int *******pppppppiStack_170;
  int *******pppppppiStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  int *******local_150;
  int iStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  int *******local_138;
  int *******local_134;
  int *******local_130;
  int *******local_12c;
  int *******local_128;
  int *******local_124;
  int *******local_120;
  int *******local_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined1 *local_cc;
  int local_c8;
  undefined1 *local_c4;
  int *****local_c0;
  int *******local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  int *******local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  int *******local_98;
  int *******local_94;
  int *******local_90;
  int *******local_8c;
  int *******local_88;
  int *******pppppppiStack_84;
  int *******local_80;
  int *******local_7c;
  int *******local_78;
  int *******local_74;
  int *******local_70;
  int *******pppppppiStack_6c;
  int *******local_68;
  int *******local_64;
  int *******local_60;
  int *******pppppppiStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  int *******local_40;
  int local_3c;
  uint local_38;
  undefined4 uStack_34;
  
  piVar10 = param_2 + 0x1e;
  pppppppiVar17 = (int *******)*piVar10;
  pppppppiVar11 = (int *******)param_2[0x1f];
  *piVar10 = 3;
  uVar4 = param_2[0x43];
  param_2[0x1f] = 0;
  if (pppppppiVar17 == (int *******)&DAT_00000003 && pppppppiVar11 == (int *******)0x0) {
    pppppppiVar14 = (int *******)*param_2;
    pppppppiVar13 = (int *******)(param_2 + 0x3a);
    if (pppppppiVar14 != (int *******)&DAT_00000003 || param_2[1] != 0) {
      local_208 = (int *******)&local_80;
      do {
        local_20c = pppppppiVar13;
        if (0x1f < (uint)param_2[0x1c]) {
          iVar1 = *(int *)*param_3;
          iVar8 = ((int *)*param_3)[1];
          param_2[0x1c] = 0;
          (**(code **)(iVar1 + 8))(iVar8);
LAB_00d899c4:
          if (param_2[0x3b] != 0) goto LAB_00d88e74;
          goto LAB_00d88ed8;
        }
        param_2[0x1c] = param_2[0x1c] + 1;
        pppppppiVar17 = (int *******)param_2[2];
        pppppppiVar11 = (int *******)param_2[3];
        unaff_r10 = (int *******)param_2[5];
        pppppppiVar18 = (int *******)param_2[6];
        pppppppiVar19 = (int *******)param_2[7];
        *param_2 = 2;
        param_2[1] = 0;
        local_204 = (int *******)param_2[4];
        if (((uint)pppppppiVar14 & 3) == 2) {
          *param_2 = 3;
          param_2[1] = 0;
          unaff_r10 = pppppppiVar18;
          break;
        }
        if (((uint)pppppppiVar14 & 3) == 3) goto LAB_00d899c4;
        pppppppiVar20 = (int *******)&local_188;
        FUN_01bed4e2(pppppppiVar20,param_2 + 8,0x50);
        if (((uint)pppppppiVar14 & 1) != 0) {
          iVar1 = param_2[0x3b];
          if (iVar1 == 0) {
            pppppppiVar14 = pppppppiVar19;
            pppppppiVar19 = pppppppiVar18;
            goto LAB_00d88ebc;
          }
          if (*piVar10 != 3 || param_2[0x1f] != 0) {
            FUN_005f6588();
            iVar1 = param_2[0x3b];
          }
          *piVar10 = (int)pppppppiVar17;
          param_2[0x20] = local_204;
          param_2[0x21] = unaff_r10;
          param_2[0x22] = pppppppiVar18;
          param_2[0x23] = pppppppiVar19;
          param_2[0x1f] = pppppppiVar11;
          FUN_01bed4e2(param_2 + 0x24,&local_188,0x50);
          FUN_01283fd8(&local_1b0,pppppppiVar13,iVar1);
          pppppppiVar17 = local_1a4;
          if (((uint)local_1a4 & 1) == 0) {
            local_204 = (int *******)&DAT_01d2e520;
            pppppppiVar14 = local_1a4;
            unaff_r10 = local_1b0;
            pppppppiVar19 = local_1ac;
            goto LAB_00d8998c;
          }
          local_c4 = (undefined1 *)((int)local_1ac + ((uint)local_1a4 >> 5));
          local_c8 = (int)local_1b0 - ((uint)local_1a4 >> 5);
          local_cc = (undefined1 *)((int)local_1a8 + ((uint)local_1a4 >> 5));
          FUN_01283524(&local_138,&local_cc);
          local_c0 = (int *****)((uint)pppppppiVar17 >> 5);
          if (local_130 < (int *******)((uint)pppppppiVar17 >> 5)) {
            local_90 = (int *******)&local_bc;
            local_bc = local_130;
            local_8c = (int *******)&LAB_01a6a304;
            local_94 = (int *******)&LAB_01a6a304;
            local_98 = (int *******)&local_c0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
          }
          goto LAB_00d89970;
        }
        uVar5 = param_2[0x38];
        uVar15 = param_2[0x3b];
        uVar3 = param_2[0x39];
        uVar16 = uVar15;
        if (param_2[0x3c] - uVar15 < 5) {
          FUN_01283c9c(pppppppiVar13,5);
          uVar16 = param_2[0x3b];
          local_94 = (int *******)(param_2[0x3c] - uVar16);
          if (local_94 < 5) {
            local_98 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_98);
          }
        }
        param_2[0x3b] = uVar16 + 5;
        local_98 = pppppppiVar17;
        local_94 = pppppppiVar11;
        local_90 = local_204;
        local_8c = unaff_r10;
        local_88 = pppppppiVar18;
        pppppppiStack_84 = pppppppiVar19;
        FUN_01bed4e2(local_208,pppppppiVar20,0x50);
        puVar7 = (undefined1 *)0x0;
        iVar1 = 0;
        if (local_38 != 0) {
          uVar2 = LZCOUNT(local_38 | 1) | 0x20;
          if ((int)local_38 < 0) {
            uVar2 = LZCOUNT((int)local_38 >> 0x1f);
          }
          iVar1 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        if (((uint)pppppppiVar17 ^ 2) != 0 || pppppppiVar11 != (int *******)0x0) {
          pppppppiVar18 = local_80;
          if (((uint)pppppppiVar17 & 1) == 0) {
            iVar8 = 0;
            puVar7 = (undefined1 *)0x0;
            if (((uint)local_80 ^ 2) != 0 || local_7c != (int *******)0x0) {
              iVar9 = 2;
              if (((uint)local_80 & 1) != 0) {
                if (local_78 == (int *******)0x0 && local_74 == (int *******)0x0) {
                  iVar12 = 4;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_78 | 1) | 0x20;
                  if (local_74 != (int *******)0x0) {
                    uVar2 = LZCOUNT(local_74);
                  }
                  iVar12 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
                }
                if (local_70 == (int *******)0x0) {
                  iVar9 = 0;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_70 | 1) | 0x20;
                  if ((int)local_70 < 0) {
                    uVar2 = LZCOUNT((int)local_70 >> 0x1f);
                  }
                  iVar9 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
                }
                iVar9 = iVar9 + iVar12;
              }
              pppppppiVar18 = (int *******)0x0;
              iVar12 = 0;
              if (((uint)local_68 & 1) != 0) {
                if (local_60 == (int *******)0x0 && pppppppiStack_5c == (int *******)0x0) {
                  iVar12 = 2;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_60 | 1) | 0x20;
                  if (pppppppiStack_5c != (int *******)0x0) {
                    uVar2 = LZCOUNT(pppppppiStack_5c);
                  }
                  iVar12 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
                }
              }
              if ((local_48 & 1) != 0) {
                if (local_40 == (int *******)0x0 && local_3c == 0) {
                  pppppppiVar18 = (int *******)0x2;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_40 | 1) | 0x20;
                  if (local_3c != 0) {
                    uVar2 = LZCOUNT(local_3c);
                  }
                  pppppppiVar18 = (int *******)(((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3);
                }
              }
              iVar12 = iVar12 + iVar9;
              iVar9 = 2;
              if ((double)CONCAT44(uStack_4c,local_50) != 0.0) {
                iVar9 = 0xb;
              }
              if ((local_58 & 1) != 0) {
                iVar12 = iVar12 + iVar9;
              }
              puVar7 = (undefined1 *)(iVar12 + (int)pppppppiVar18);
            }
            if (((uint)local_90 & 1) != 0) {
              if (local_88 == (int *******)0x0 && pppppppiStack_84 == (int *******)0x0) {
                iVar8 = 2;
              }
              else {
                uVar2 = LZCOUNT((uint)local_88 | 1) | 0x20;
                if (pppppppiStack_84 != (int *******)0x0) {
                  uVar2 = LZCOUNT(pppppppiStack_84);
                }
                iVar8 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            puVar7 = puVar7 + iVar8;
          }
          else {
            puVar7 = (undefined1 *)0x0;
            if (((uint)local_80 ^ 2) != 0 || local_7c != (int *******)0x0) {
              iVar8 = 2;
              if (((uint)local_80 & 1) != 0) {
                if (local_78 == (int *******)0x0 && local_74 == (int *******)0x0) {
                  iVar9 = 4;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_78 | 1) | 0x20;
                  if (local_74 != (int *******)0x0) {
                    uVar2 = LZCOUNT(local_74);
                  }
                  iVar9 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
                }
                if (local_70 == (int *******)0x0) {
                  iVar8 = 0;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_70 | 1) | 0x20;
                  if ((int)local_70 < 0) {
                    uVar2 = LZCOUNT((int)local_70 >> 0x1f);
                  }
                  iVar8 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
                }
                iVar8 = iVar8 + iVar9;
              }
              iVar9 = 0;
              if ((local_48 & 1) != 0) {
                pppppppiVar18 = local_40;
                if (local_40 == (int *******)0x0 && local_3c == 0) {
                  iVar9 = 2;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_40 | 1) | 0x20;
                  if (local_3c != 0) {
                    uVar2 = LZCOUNT(local_3c);
                  }
                  iVar9 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
                }
              }
              iVar12 = 2;
              if ((double)CONCAT44(pppppppiStack_5c,local_60) != 0.0) {
                iVar12 = 0xb;
              }
              if (((uint)local_68 & 1) != 0) {
                iVar8 = iVar8 + iVar12;
              }
              iVar12 = 2;
              if ((double)CONCAT44(uStack_4c,local_50) != 0.0) {
                iVar12 = 0xb;
              }
              if ((local_58 & 1) != 0) {
                iVar8 = iVar8 + iVar12;
              }
              puVar7 = (undefined1 *)(iVar8 + iVar9);
            }
            iVar8 = 2;
            if ((double)CONCAT44(pppppppiStack_84,local_88) != 0.0) {
              iVar8 = 0xb;
            }
            if (((uint)local_90 & 1) != 0) {
              puVar7 = puVar7 + iVar8;
            }
          }
          puVar7 = puVar7 + ((LZCOUNT((uint)puVar7 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        if ((int ******)(0x7ffffffa - uVar16) < puVar7 + iVar1) {
          local_1b0 = (int *******)(puVar7 + iVar1);
          local_1ac = (int *******)(0x7ffffffa - uVar16);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_1b0,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (local_38 != 0) {
          FUN_00efca88(1,local_38,pppppppiVar13);
        }
        if (((uint)pppppppiVar17 ^ 2) != 0 || pppppppiVar11 != (int *******)0x0) {
          if (((uint)pppppppiVar17 & 1) == 0) {
            local_1b0 = (int *******)CONCAT31(local_1b0._1_3_,0x12);
            FUN_01284394(pppppppiVar13,&local_1b0,1);
            pppppppiVar17 = local_7c;
            pppppppiVar18 = local_90;
            iVar8 = 0;
            uVar16 = (uint)local_80 ^ 2;
            iVar1 = 0;
            if (uVar16 != 0 || local_7c != (int *******)0x0) {
              iVar9 = 2;
              if (((uint)local_80 & 1) != 0) {
                if (local_78 == (int *******)0x0 && local_74 == (int *******)0x0) {
                  iVar8 = 4;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_78 | 1) | 0x20;
                  if (local_74 != (int *******)0x0) {
                    uVar2 = LZCOUNT(local_74);
                  }
                  iVar8 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
                }
                if (local_70 == (int *******)0x0) {
                  iVar9 = 0;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_70 | 1) | 0x20;
                  if ((int)local_70 < 0) {
                    uVar2 = LZCOUNT((int)local_70 >> 0x1f);
                  }
                  iVar9 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
                }
                iVar9 = iVar9 + iVar8;
              }
              iVar12 = 0;
              iVar8 = 0;
              if (((uint)local_68 & 1) != 0) {
                if (local_60 == (int *******)0x0 && pppppppiStack_5c == (int *******)0x0) {
                  iVar8 = 2;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_60 | 1) | 0x20;
                  if (pppppppiStack_5c != (int *******)0x0) {
                    uVar2 = LZCOUNT(pppppppiStack_5c);
                  }
                  iVar8 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
                }
              }
              if ((local_48 & 1) != 0) {
                if (local_40 == (int *******)0x0 && local_3c == 0) {
                  iVar12 = 2;
                }
                else {
                  uVar2 = LZCOUNT((uint)local_40 | 1) | 0x20;
                  if (local_3c != 0) {
                    uVar2 = LZCOUNT(local_3c);
                  }
                  iVar12 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
                }
              }
              iVar8 = iVar8 + iVar9;
              iVar9 = 2;
              if ((double)CONCAT44(uStack_4c,local_50) != 0.0) {
                iVar9 = 0xb;
              }
              if ((local_58 & 1) != 0) {
                iVar8 = iVar8 + iVar9;
              }
              iVar8 = iVar8 + iVar12;
            }
            if (((uint)local_90 & 1) != 0) {
              if (local_88 == (int *******)0x0 && pppppppiStack_84 == (int *******)0x0) {
                iVar1 = 2;
              }
              else {
                uVar2 = LZCOUNT((uint)local_88 | 1) | 0x20;
                if (pppppppiStack_84 != (int *******)0x0) {
                  uVar2 = LZCOUNT(pppppppiStack_84);
                }
                iVar1 = ((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
              }
            }
            iVar9 = 10;
            uVar2 = iVar1 + iVar8;
            do {
              if (uVar2 >> 7 == 0) {
                local_1b0 = (int *******)CONCAT31(local_1b0._1_3_,(char)uVar2);
                FUN_01284394(pppppppiVar13,&local_1b0,1);
                uVar6 = extraout_r1_00;
                break;
              }
              local_1b0 = (int *******)(CONCAT31(local_1b0._1_3_,(char)uVar2) | 0x80);
              FUN_01284394(pppppppiVar13,&local_1b0,1);
              iVar9 = iVar9 + -1;
              uVar2 = uVar2 >> 7;
              uVar6 = extraout_r1;
            } while (iVar9 != 0);
            if (uVar16 != 0 || pppppppiVar17 != (int *******)0x0) {
              FUN_00efe99c(local_208,pppppppiVar13);
              uVar6 = extraout_r1_01;
            }
            if (((uint)pppppppiVar18 & 1) != 0) {
              FUN_00efe248(2,uVar6,local_88,pppppppiStack_84,pppppppiVar13);
            }
          }
          else {
            local_1b0 = (int *******)CONCAT31(local_1b0._1_3_,0x1a);
            FUN_01284394(pppppppiVar13,&local_1b0,1);
            pppppppiVar11 = local_7c;
            pppppppiVar17 = local_88;
            pppppppiVar18 = local_90;
            uVar2 = (uint)local_80 ^ 2;
            uVar16 = 0;
            if (uVar2 != 0 || local_7c != (int *******)0x0) {
              iVar1 = 2;
              if (((uint)local_80 & 1) != 0) {
                if (local_78 == (int *******)0x0 && local_74 == (int *******)0x0) {
                  iVar8 = 4;
                }
                else {
                  uVar16 = LZCOUNT((uint)local_78 | 1) | 0x20;
                  if (local_74 != (int *******)0x0) {
                    uVar16 = LZCOUNT(local_74);
                  }
                  iVar8 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 5;
                }
                if (local_70 == (int *******)0x0) {
                  iVar1 = 0;
                }
                else {
                  uVar16 = LZCOUNT((uint)local_70 | 1) | 0x20;
                  if ((int)local_70 < 0) {
                    uVar16 = LZCOUNT((int)local_70 >> 0x1f);
                  }
                  iVar1 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
                }
                iVar1 = iVar1 + iVar8;
              }
              iVar8 = 0;
              if ((local_48 & 1) != 0) {
                if (local_40 == (int *******)0x0 && local_3c == 0) {
                  iVar8 = 2;
                }
                else {
                  uVar16 = LZCOUNT((uint)local_40 | 1) | 0x20;
                  if (local_3c != 0) {
                    uVar16 = LZCOUNT(local_3c);
                  }
                  iVar8 = ((uVar16 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
                }
              }
              iVar9 = 2;
              if ((double)CONCAT44(pppppppiStack_5c,local_60) != 0.0) {
                iVar9 = 0xb;
              }
              if (((uint)local_68 & 1) != 0) {
                iVar1 = iVar1 + iVar9;
              }
              iVar9 = 2;
              if ((double)CONCAT44(uStack_4c,local_50) != 0.0) {
                iVar9 = 0xb;
              }
              if ((local_58 & 1) != 0) {
                iVar1 = iVar1 + iVar9;
              }
              uVar16 = iVar1 + iVar8;
            }
            iVar8 = 10;
            iVar1 = 2;
            if ((double)CONCAT44(pppppppiStack_84,local_88) != 0.0) {
              iVar1 = 0xb;
            }
            if (((uint)local_90 & 1) != 0) {
              uVar16 = uVar16 + iVar1;
            }
            do {
              if (uVar16 >> 7 == 0) {
                local_1b0 = (int *******)CONCAT31(local_1b0._1_3_,(char)uVar16);
                FUN_01284394(pppppppiVar13,&local_1b0,1);
                break;
              }
              local_1b0 = (int *******)(CONCAT31(local_1b0._1_3_,(char)uVar16) | 0x80);
              FUN_01284394(pppppppiVar13,&local_1b0,1);
              iVar8 = iVar8 + -1;
              uVar16 = uVar16 >> 7;
            } while (iVar8 != 0);
            if (uVar2 != 0 || pppppppiVar11 != (int *******)0x0) {
              FUN_00efec08(1,local_208,pppppppiVar13);
            }
            if (((uint)pppppppiVar18 & 1) != 0) {
              FUN_00efe1c0(pppppppiVar17,2,pppppppiVar13);
            }
          }
        }
        uVar16 = param_2[0x3b];
        if (uVar16 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar15,uVar16,uVar16,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_138,uVar5,uVar3,(int)*pppppppiVar13 + uVar15,uVar16 - uVar15);
        pppppppiVar14 = local_124;
        pppppppiVar19 = local_128;
        unaff_r10 = local_12c;
        pppppppiVar11 = local_134;
        pppppppiVar17 = local_138;
        if (local_138 != (int *******)&DAT_00000003 || local_134 != (int *******)0x0) {
          local_204 = local_130;
          FUN_01bed4e2(auStack_200,&local_120,0x50);
          goto LAB_00d89aa4;
        }
        if (uVar4 <= (uint)param_2[0x3b]) {
          FUN_01283fd8(&local_1b0,pppppppiVar13);
          pppppppiVar17 = local_1a4;
          if (((uint)local_1a4 & 1) == 0) goto LAB_00d88e94;
          local_c4 = (undefined1 *)((int)local_1ac + ((uint)local_1a4 >> 5));
          local_c8 = (int)local_1b0 - ((uint)local_1a4 >> 5);
          local_cc = (undefined1 *)((int)local_1a8 + ((uint)local_1a4 >> 5));
          FUN_01283524(&local_138,&local_cc);
          local_c0 = (int *****)((uint)pppppppiVar17 >> 5);
          if (local_130 < (int *******)((uint)pppppppiVar17 >> 5)) {
            local_90 = (int *******)&local_bc;
            local_bc = local_130;
            local_8c = (int *******)&LAB_01a6a304;
            local_94 = (int *******)&LAB_01a6a304;
            local_98 = (int *******)&local_c0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
          }
          goto LAB_00d89970;
        }
        pppppppiVar14 = (int *******)*param_2;
        unaff_r10 = pppppppiVar18;
      } while (pppppppiVar14 != (int *******)&DAT_00000003 || param_2[1] != 0);
    }
    if (param_2[0x3b] == 0) {
      pppppppiVar11 = (int *******)0x0;
      pppppppiVar17 = (int *******)&SUB_00000004;
      pppppppiVar19 = pppppppiVar13;
    }
    else {
LAB_00d88e74:
      FUN_01283fd8(&local_1b0,pppppppiVar13);
      pppppppiVar17 = local_1a4;
      if (((uint)local_1a4 & 1) == 0) {
LAB_00d88e94:
        local_204 = (int *******)&DAT_01d2e520;
        pppppppiVar14 = local_1a4;
        unaff_r10 = local_1b0;
        pppppppiVar19 = local_1ac;
      }
      else {
        local_c4 = (undefined1 *)((int)local_1ac + ((uint)local_1a4 >> 5));
        local_c8 = (int)local_1b0 - ((uint)local_1a4 >> 5);
        local_cc = (undefined1 *)((int)local_1a8 + ((uint)local_1a4 >> 5));
        FUN_01283524(&local_138,&local_cc);
        local_c0 = (int *****)((uint)pppppppiVar17 >> 5);
        if (local_130 < (int *******)((uint)pppppppiVar17 >> 5)) {
          local_90 = (int *******)&local_bc;
          local_bc = local_130;
          local_8c = (int *******)&LAB_01a6a304;
          local_94 = (int *******)&LAB_01a6a304;
          local_98 = (int *******)&local_c0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
        }
LAB_00d89970:
        local_204 = local_138;
        pppppppiVar14 = local_12c;
        unaff_r10 = (int *******)((int)local_134 + (int)local_c0);
        pppppppiVar19 = (int *******)((int)local_130 - (int)local_c0);
      }
LAB_00d8998c:
      pppppppiVar11 = (int *******)0x0;
      pppppppiVar17 = (int *******)&DAT_00000003;
    }
LAB_00d89aa4:
    if (pppppppiVar17 == (int *******)&SUB_00000004 && pppppppiVar11 == (int *******)0x0) {
      pppppppiVar20 = (int *******)0xd89adc;
      FUN_01a737fc(&local_98,param_2 + 0x44);
      pppppppiVar13 = unaff_r10;
      if (local_98 != (int *******)&SUB_00000004 || local_94 != (int *******)0x0) {
        if (local_98 != (int *******)&DAT_00000003 || local_94 != (int *******)0x0) {
          local_b8 = local_50;
          uStack_b4 = uStack_4c;
          uStack_b0 = local_48;
          uStack_ac = uStack_44;
          local_a8 = local_40;
          iStack_a4 = local_3c;
          uStack_a0 = local_38;
          uStack_9c = uStack_34;
        }
        local_208 = local_88;
        local_204 = local_90;
        local_20c = local_8c;
        local_138 = local_78;
        local_134 = local_74;
        local_130 = local_70;
        local_12c = pppppppiStack_6c;
        local_128 = local_68;
        local_124 = local_64;
        local_120 = local_60;
        local_11c = pppppppiStack_5c;
        uStack_118 = local_58;
        uStack_114 = uStack_54;
        pppppppiVar13 = local_7c;
        pppppppiVar19 = pppppppiStack_84;
        pppppppiVar20 = local_80;
      }
      local_188 = local_138;
      pppppppiStack_184 = local_134;
      pppppppiStack_180 = local_130;
      pppppppiStack_17c = local_12c;
      pppppppiStack_178 = local_128;
      local_174 = local_124;
      pppppppiStack_170 = local_120;
      pppppppiStack_16c = local_11c;
      uStack_168 = uStack_118;
      uStack_164 = uStack_114;
      local_160 = local_b8;
      uStack_15c = uStack_b4;
      uStack_158 = uStack_b0;
      uStack_154 = uStack_ac;
      local_150 = local_a8;
      iStack_14c = iStack_a4;
      uStack_148 = uStack_a0;
      uStack_144 = uStack_9c;
      pppppppiVar11 = local_94;
      pppppppiVar17 = local_98;
      unaff_r10 = pppppppiVar19;
LAB_00d89ce4:
      if (pppppppiVar17 != (int *******)&DAT_00000003 || pppppppiVar11 != (int *******)0x0) {
        if (pppppppiVar17 != (int *******)&SUB_00000004 || pppppppiVar11 != (int *******)0x0) {
          FUN_01bed4e2(&local_78,&local_188,0x48);
          local_8c = local_20c;
          local_90 = local_204;
          local_88 = local_208;
          local_98 = pppppppiVar17;
          local_94 = pppppppiVar11;
          pppppppiStack_84 = unaff_r10;
          local_80 = pppppppiVar20;
          local_7c = pppppppiVar13;
          uVar3 = FUN_01a65494(&local_98);
          FUN_01a7467c(param_1,uVar3,&DAT_01d2cc7c);
          return;
        }
        uVar3 = 4;
        goto LAB_00d89d04;
      }
    }
    else {
      if (pppppppiVar17 != (int *******)&DAT_00000003 || pppppppiVar11 != (int *******)0x0) {
        local_130 = local_204;
        local_138 = pppppppiVar17;
        local_134 = pppppppiVar11;
        local_12c = unaff_r10;
        local_128 = pppppppiVar19;
        local_124 = pppppppiVar14;
        FUN_01bed4e2(&local_120,auStack_200,0x50);
        pppppppiVar13 = local_11c;
        pppppppiVar20 = local_120;
        if (*(char *)(param_2 + 0x5e) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x179) = 1;
          FUN_01a738c0(&local_98,&local_138);
          unaff_r10 = pppppppiStack_84;
          pppppppiVar11 = local_94;
          pppppppiVar17 = local_98;
          local_204 = local_90;
          local_20c = local_8c;
          local_208 = local_88;
          local_1b0 = local_78;
          local_1ac = local_74;
          local_1a8 = local_70;
          local_1a4 = pppppppiStack_6c;
          pppppppiStack_1a0 = local_68;
          local_19c = local_64;
          pppppppiStack_198 = local_60;
          pppppppiStack_194 = pppppppiStack_5c;
          uStack_190 = local_58;
          uStack_18c = uStack_54;
          if (local_98 == (int *******)&DAT_00000003 && local_94 == (int *******)0x0) {
            local_188 = local_78;
            pppppppiStack_184 = local_74;
            pppppppiStack_180 = local_70;
            pppppppiStack_17c = pppppppiStack_6c;
            pppppppiStack_178 = local_68;
            local_174 = local_64;
            pppppppiStack_170 = local_60;
            pppppppiStack_16c = pppppppiStack_5c;
            uStack_168 = local_58;
            uStack_164 = uStack_54;
            FUN_005f6588(&local_138);
            pppppppiVar11 = (int *******)0x0;
            pppppppiVar17 = (int *******)&DAT_00000003;
          }
          else {
            local_160 = local_50;
            uStack_15c = uStack_4c;
            uStack_158 = local_48;
            uStack_154 = uStack_44;
            local_150 = local_40;
            iStack_14c = local_3c;
            uStack_148 = local_38;
            uStack_144 = uStack_34;
            local_188 = local_78;
            pppppppiStack_184 = local_74;
            pppppppiStack_180 = local_70;
            pppppppiStack_17c = pppppppiStack_6c;
            pppppppiStack_178 = local_68;
            local_174 = local_64;
            pppppppiStack_170 = local_60;
            pppppppiStack_16c = pppppppiStack_5c;
            uStack_168 = local_58;
            uStack_164 = uStack_54;
            FUN_005f6588(&local_138);
          }
          pppppppiVar20 = local_80;
          pppppppiVar13 = local_7c;
        }
        else {
          local_204 = local_130;
          local_20c = local_12c;
          FUN_01bed4e2(&local_188,auStack_1f8,0x48);
          unaff_r10 = pppppppiVar14;
          local_208 = pppppppiVar19;
        }
        goto LAB_00d89ce4;
      }
      local_20c = (int *******)0x0;
      pppppppiVar13 = pppppppiVar14;
      pppppppiVar20 = pppppppiVar19;
      local_208 = local_204;
      local_204 = (int *******)&DAT_00000003;
    }
    param_1[8] = local_188;
    param_1[9] = pppppppiStack_184;
    param_1[10] = pppppppiStack_180;
    param_1[0xb] = pppppppiStack_17c;
    param_1[0xc] = pppppppiStack_178;
    param_1[0xd] = local_174;
    param_1[0xe] = pppppppiStack_170;
    param_1[0xf] = pppppppiStack_16c;
    param_1[0x10] = uStack_168;
    param_1[0x11] = uStack_164;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_204;
    param_1[3] = local_20c;
    param_1[4] = local_208;
    param_1[5] = unaff_r10;
    param_1[6] = pppppppiVar20;
    param_1[7] = pppppppiVar13;
  }
  else {
    unaff_r10 = (int *******)param_2[0x21];
    pppppppiVar20 = (int *******)(param_2 + 0x24);
    pppppppiVar19 = (int *******)param_2[0x22];
    pppppppiVar14 = (int *******)param_2[0x23];
    local_204 = (int *******)param_2[0x20];
LAB_00d88ebc:
    FUN_01bed4e2(auStack_200,pppppppiVar20,0x50);
    if (pppppppiVar17 != (int *******)&DAT_00000005 || pppppppiVar11 != (int *******)0x0)
    goto LAB_00d89aa4;
LAB_00d88ed8:
    uVar3 = 5;
LAB_00d89d04:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  return;
}

