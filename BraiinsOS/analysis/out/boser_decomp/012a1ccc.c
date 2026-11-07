// FUN_012a1ccc @ 012a1ccc size=5160 calls_out=38 calls_in=4
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

/* WARNING: Type propagation algorithm not settling */

void FUN_012a1ccc(undefined4 *param_1,int param_2,uint param_3,int *******param_4,int param_5,
                 uint *param_6,int *******param_7,int param_8,int param_9)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  undefined1 uVar8;
  uint3 uVar9;
  int *******pppppppiVar10;
  char cVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int ******ppppppiVar15;
  int iVar16;
  undefined4 *puVar17;
  char *pcVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  int *******pppppppiVar22;
  char *pcVar23;
  int *******extraout_r2;
  int *******pppppppiVar24;
  int *******extraout_r2_00;
  undefined *puVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  int *******pppppppiVar29;
  int *piVar30;
  int *******pppppppiVar31;
  int *******pppppppiVar32;
  int iVar33;
  int *******pppppppiVar34;
  undefined4 uVar35;
  bool bVar36;
  int *******local_d8;
  int *******local_d0;
  int *******local_b4;
  int local_a4;
  int *******local_a0;
  int *******local_9c;
  int *******local_98;
  int *******local_94;
  int local_90;
  uint local_88;
  undefined4 *local_84;
  uint local_80;
  uint local_78;
  undefined4 *local_74;
  uint local_70;
  int ******local_68;
  int *local_64;
  int ******local_60;
  int ******local_58;
  int *******local_54;
  undefined4 local_50;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  int *******local_2c;
  
  iVar12 = FUN_012a3520(param_2,param_9);
  if (iVar12 != 0) goto LAB_012a1d08;
  uVar26 = (uint)param_4 & 0xff;
  if (uVar26 == 2) {
    pppppppiVar31 = (int *******)param_6[2];
    iVar12 = *(int *)(param_2 + 8);
    bVar1 = *(byte *)(iVar12 + 0x144);
    bVar36 = (bVar1 & 1) == 0;
    if (bVar36) {
      bVar1 = *(byte *)(iVar12 + 0x148);
    }
    pppppppiVar24 = extraout_r2;
    if (bVar36 && (bVar1 & 1) == 0) {
      if ((*(uint *)(param_5 + 8) & 1) == 0) {
        puVar25 = &DAT_01ce22c4;
LAB_012a30c4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                     ,99,puVar25);
      }
      pppppppiVar29 = *(int ********)(param_5 + 0xc);
      pppppppiVar34 = *(int ********)(param_5 + 0x10);
      if ((pppppppiVar31 == (int *******)0x0) && (pppppppiVar29 != (int *******)0x0)) {
        if (pppppppiVar34 != (int *******)0x0) {
          piVar30 = &DAT_0041fdf8;
          if (*(int *)(param_5 + 0x28) != 5) {
            piVar30 = (int *)(param_5 + 0x28);
          }
                    /* WARNING: Could not recover jumptable at 0x012a1f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_012a1f44 + *(int *)(&DAT_012a1f44 + *piVar30 * 4)))(1,&UNK_01ce27e0);
          return;
        }
        local_50 = 0;
        local_54 = (int *******)&SUB_00000004;
        local_58 = (int ******)0x0;
        iVar28 = 0;
        iVar16 = 4;
        do {
          iVar33 = iVar16;
          if (iVar28 == 0) {
            local_60 = (int ******)0x0;
            local_64 = (int *)&SUB_00000004;
            local_68 = (int ******)0x0;
            goto LAB_012a2f4c;
          }
          iVar28 = iVar28 + -0x24;
          iVar16 = iVar33 + 0x24;
        } while (*(char *)(iVar33 + 0x20) != '\0');
        iVar16 = *(int *)(iVar33 + 0x1c);
        uVar14 = 0;
        if (iVar16 < 0) {
LAB_012a2c4c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar14,iVar16);
        }
        uVar35 = *(undefined4 *)(iVar33 + 0x18);
        if (iVar16 == 0) {
          iVar19 = 1;
          iVar28 = 0;
        }
        else {
          uVar14 = 1;
          iVar19 = FUN_01298504(iVar16,1);
          iVar28 = iVar16;
          if (iVar19 == 0) goto LAB_012a2c4c;
        }
        FUN_01bed4e2(iVar19,uVar35,iVar16);
        local_9c = (int *******)thunk_FUN_01be5118(0x30);
        if (local_9c == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x30);
        }
        *local_9c = (int ******)iVar28;
        local_9c[1] = (int ******)iVar19;
        local_9c[2] = (int ******)iVar16;
        local_a0 = (int *******)0x4;
        local_98 = (int *******)0x1;
        iVar16 = iVar33 + 0x24;
        local_a4 = param_2;
        pppppppiVar31 = local_9c;
        while( true ) {
          iVar28 = iVar16;
          pppppppiVar24 = local_98;
          if (iVar28 == 4) break;
          iVar16 = iVar28 + 0x24;
          if (*(char *)(iVar28 + 0x20) == '\0') {
            iVar19 = *(int *)(iVar28 + 0x1c);
            iVar33 = 0;
            if (iVar19 < 0) {
LAB_012a31d0:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(iVar33,local_a4);
            }
            uVar14 = *(undefined4 *)(iVar28 + 0x18);
            if (iVar19 == 0) {
              local_a4 = 1;
            }
            else {
              iVar33 = 1;
              local_a4 = FUN_01298504(iVar19,1);
              if (local_a4 == 0) {
                local_a4 = iVar19;
                goto LAB_012a31d0;
              }
              iVar33 = iVar19;
            }
            FUN_01bed4e2(local_a4,uVar14,iVar19);
            if (pppppppiVar24 == local_a0) {
              FUN_006520b4(&local_a0,pppppppiVar24,1,4,0xc);
              pppppppiVar31 = local_9c;
            }
            local_98 = (int *******)((int)pppppppiVar24 + 1);
            piVar30 = (int *)(pppppppiVar31 + (int)pppppppiVar24 * 3);
            *piVar30 = iVar33;
            piVar30[1] = local_a4;
            piVar30[2] = iVar19;
          }
        }
        local_68 = (int ******)local_a0;
        local_64 = (int *)local_9c;
        local_60 = (int ******)local_98;
LAB_012a2f4c:
        ppppppiVar15 = local_60;
        piVar30 = local_64;
        local_a0 = (int *******)&local_38;
        local_30 = (int *******)0x0;
        local_38 = (int *******)0x0;
        local_94 = (int *******)0x0;
        local_34 = (int *******)&DAT_00000001;
        local_98 = (int *******)0x60000020;
        local_9c = (int *******)&DAT_01ce2354;
        iVar16 = FUN_012bb12c(param_5,&local_a0);
        if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_48,&DAT_01ce236c,&DAT_01d30334);
        }
        local_48 = local_38;
        local_44 = local_34;
        local_40 = local_30;
        uVar14 = FUN_012bc0b4(iVar12,piVar30,ppppppiVar15);
        FUN_006a41c0(&local_68);
        FUN_01298844(&local_58);
      }
      else {
        pppppppiVar24 = param_4;
        if (pppppppiVar29 == pppppppiVar34) {
          if (pppppppiVar29 == pppppppiVar31) goto LAB_012a1d58;
          local_a0 = (int *******)&local_38;
          local_30 = (int *******)0x0;
          local_38 = (int *******)0x0;
          local_94 = (int *******)0x0;
          local_34 = (int *******)&DAT_00000001;
          local_98 = (int *******)0x60000020;
          local_9c = (int *******)&DAT_01ce2354;
          iVar16 = FUN_012bb12c(param_5,&local_a0);
          if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_48,&DAT_01ce236c,&DAT_01d30334);
          }
          local_48 = local_38;
          local_44 = local_34;
          local_40 = local_30;
          pppppppiVar34 = *(int ********)(param_2 + 8);
          pppppppiVar24 = (int *******)FUN_012b9138(pppppppiVar34 + 0x1d);
          local_98 = (int *******)0x0;
          local_9c = (int *******)&DAT_00420598;
          if (pppppppiVar24 != (int *******)0x0) {
            local_9c = pppppppiVar24;
          }
          local_a0 = pppppppiVar34;
          FUN_012b5c88(&local_38,&local_a0,4,0);
          uVar14 = FUN_012bdaa0(iVar12,&local_48,pppppppiVar29,pppppppiVar31,&local_38);
        }
        else if (pppppppiVar31 < pppppppiVar29) {
          local_a0 = (int *******)&local_38;
          local_30 = (int *******)0x0;
          local_38 = (int *******)0x0;
          local_94 = (int *******)0x0;
          local_34 = (int *******)&DAT_00000001;
          local_98 = (int *******)0x60000020;
          local_9c = (int *******)&DAT_01ce2354;
          iVar16 = FUN_012bb12c(param_5,&local_a0);
          if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_48,&DAT_01ce236c,&DAT_01d30334);
          }
          local_48 = local_38;
          local_44 = local_34;
          local_40 = local_30;
          pppppppiVar34 = *(int ********)(param_2 + 8);
          pppppppiVar24 = (int *******)FUN_012b9138(pppppppiVar34 + 0x1d);
          local_98 = (int *******)0x0;
          local_9c = (int *******)&DAT_00420598;
          if (pppppppiVar24 != (int *******)0x0) {
            local_9c = pppppppiVar24;
          }
          local_a0 = pppppppiVar34;
          FUN_012b5c88(&local_38,&local_a0,4,0);
          uVar14 = FUN_012bcb04(iVar12,&local_48,pppppppiVar29,pppppppiVar31,&local_38);
        }
        else {
          if (pppppppiVar31 <= pppppppiVar34) goto LAB_012a1d58;
          iVar16 = param_6[1] + (int)pppppppiVar31 * 0xc;
          if (iVar16 == 0xc) {
            puVar25 = &DAT_01ce22d4;
            goto LAB_012a30c4;
          }
          FUN_006643f0(&local_a0,*(undefined4 *)(iVar16 + -8),*(undefined4 *)(iVar16 + -4));
          FUN_0160ec7c(&local_58,&local_a0);
          local_a0 = (int *******)&local_38;
          local_30 = (int *******)0x0;
          local_38 = (int *******)0x0;
          local_94 = (int *******)0x0;
          local_34 = (int *******)&DAT_00000001;
          local_98 = (int *******)0x60000020;
          local_9c = (int *******)&DAT_01ce2354;
          iVar16 = FUN_012bb12c(param_5,&local_a0);
          if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_48,&DAT_01ce236c,&DAT_01d30334);
          }
          local_48 = local_38;
          local_44 = local_34;
          local_40 = local_30;
          pppppppiVar24 = *(int ********)(param_2 + 8);
          pppppppiVar31 = (int *******)FUN_012b9138(pppppppiVar24 + 0x1d);
          local_98 = (int *******)0x0;
          local_9c = (int *******)&DAT_00420598;
          if (pppppppiVar31 != (int *******)0x0) {
            local_9c = pppppppiVar31;
          }
          local_a0 = pppppppiVar24;
          FUN_012b5c88(&local_38,&local_a0,4,0);
          uVar14 = FUN_012bcc04(iVar12,&local_58,&local_48,&local_38);
        }
      }
      *param_1 = &DAT_80000009;
      param_1[1] = uVar14;
      goto LAB_012a1d0c;
    }
  }
  else {
    pppppppiVar31 = (int *******)param_6[2];
    pppppppiVar24 = extraout_r2;
  }
LAB_012a1d58:
  if (pppppppiVar31 == (int *******)0x0) {
    uVar21 = *(uint *)(param_5 + 0xe0);
    if (uVar21 == 0) {
      pppppppiVar31 = (int *******)0x0;
    }
    else {
      pppppppiVar31 = (int *******)0x0;
      iVar12 = *(int *)(param_5 + 0xdc);
      if (*param_6 < uVar21) {
        FUN_006520b4(param_6,0,uVar21,4,0xc);
        pppppppiVar31 = (int *******)param_6[2];
      }
      piVar27 = (int *)(iVar12 + 4);
      piVar30 = (int *)(param_6[1] + (int)pppppppiVar31 * 0xc + 8);
      iVar12 = param_5;
      do {
        iVar28 = *piVar27;
        iVar16 = 0;
        if (iVar28 < 0) {
LAB_012a3198:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(iVar16,iVar12);
        }
        iVar33 = piVar27[-1];
        if (iVar28 == 0) {
          iVar12 = 1;
        }
        else {
          iVar16 = 1;
          iVar12 = FUN_01298504(iVar28,1);
          if (iVar12 == 0) {
            iVar12 = iVar28;
            goto LAB_012a3198;
          }
          iVar16 = iVar28;
        }
        piVar27 = piVar27 + 2;
        FUN_01bed4e2(iVar12,iVar33,iVar28);
        pppppppiVar31 = (int *******)((int)pppppppiVar31 + 1);
        piVar30[-1] = iVar12;
        piVar30[-2] = iVar16;
        uVar21 = uVar21 - 1;
        *piVar30 = iVar28;
        piVar30 = piVar30 + 3;
      } while (uVar21 != 0);
      param_7 = (int *******)0x0;
      param_6[2] = (uint)pppppppiVar31;
      pppppppiVar24 = extraout_r2_00;
    }
  }
  puVar13 = *(undefined1 **)(param_5 + 0x38);
  if (puVar13 != &DAT_00110000) {
    pppppppiVar24 = *(int ********)(param_2 + 8);
    uVar21 = 1;
    if (((uint)pppppppiVar24[0x51] & 0x40) == 0) {
      uVar21 = (*(byte *)(pppppppiVar24 + 0x52) & 0x7f) >> 6;
    }
    if ((uVar21 == 0 || ((uint)param_7 & 1) == 0) || (param_8 != 0)) {
      if (puVar13 < (undefined1 *)0x80) {
        local_58 = (int ******)((uint)puVar13 & 0xff);
        uVar14 = 1;
      }
      else {
        uVar8 = SUB41(puVar13,0);
        uVar5 = (undefined1)((uint)puVar13 >> 6);
        if (puVar13 < (undefined1 *)0x800) {
          uVar14 = 2;
          local_58._0_2_ = CONCAT11(uVar8,uVar5) & 0x3fff | 0x80c0;
          local_58 = (int ******)(uint)(ushort)local_58;
        }
        else {
          bVar1 = (byte)((uint)puVar13 >> 0xc);
          if ((uint)puVar13 >> 0x10 == 0) {
            local_58._0_2_ = (ushort)(bVar1 | 0xe0);
            uVar9 = CONCAT12(uVar8,(ushort)local_58) & 0x3fffff;
            uVar14 = 3;
            local_58._0_1_ = (undefined1)uVar9;
            uVar21 = (uint)(uint3)(CONCAT12((char)(uVar9 >> 0x10),CONCAT11(uVar5,local_58._0_1_)) |
                                  0x800000);
          }
          else {
            uVar14 = 4;
            local_58._0_3_ = (uint3)(byte)((byte)((uint)puVar13 >> 0x12) | 0xf0);
            uVar21 = CONCAT13(uVar8,(uint3)local_58) & 0x3fffffff;
            local_58._0_2_ = (ushort)uVar21;
            uVar21 = CONCAT13((char)(uVar21 >> 0x18),CONCAT12(uVar5,(ushort)local_58)) & 0xff3fffff;
            local_58._0_1_ = (undefined1)uVar21;
            uVar21 = CONCAT22((short)(uVar21 >> 0x10),CONCAT11(bVar1,local_58._0_1_)) | 0x80800000;
          }
          local_58 = (int ******)(uVar21 & 0xffff3fff | 0x8000);
        }
      }
      if (pppppppiVar31 == (int *******)0x0) {
        local_b4 = (int *******)&SUB_00000004;
        local_48 = (int *******)0x0;
      }
      else {
        local_b4 = (int *******)FUN_01298504((int)pppppppiVar31 * 0xc,4);
        if (local_b4 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,(int)pppppppiVar31 * 0xc);
        }
        local_48 = pppppppiVar31;
      }
      local_a0 = (int *******)param_6[1];
      local_98 = (int *******)*param_6;
      local_40 = (int *******)0x0;
      pppppppiVar24 = local_a0 + (int)pppppppiVar31 * 3;
      local_90 = 0;
      local_9c = local_a0;
      local_94 = pppppppiVar24;
      local_44 = local_b4;
      if (pppppppiVar31 != (int *******)0x0) {
        pppppppiVar34 = (int *******)0x0;
        iVar12 = 0;
        pppppppiVar31 = local_a0;
        do {
          pppppppiVar29 = pppppppiVar31 + 3;
          ppppppiVar15 = *pppppppiVar31;
          local_9c = pppppppiVar29;
          if (ppppppiVar15 == (int ******)0x80000000) break;
          pppppppiVar32 = (int *******)pppppppiVar31[1];
          pppppppiVar31 = (int *******)pppppppiVar31[2];
          local_90 = iVar12 + 1;
          iVar16 = FUN_012c1ef4(pppppppiVar32,pppppppiVar31,&local_58,uVar14);
          if (iVar16 == 0) {
LAB_012a2184:
            if (pppppppiVar34 == local_48) {
              FUN_019abd3c(&local_48);
            }
            local_40 = (int *******)((int)pppppppiVar34 + 1);
            local_b4 = local_44;
            pppppppiVar34 = local_44 + (int)pppppppiVar34 * 3;
            *pppppppiVar34 = ppppppiVar15;
            pppppppiVar34[1] = (int ******)pppppppiVar32;
            pppppppiVar34[2] = (int ******)pppppppiVar31;
            pppppppiVar34 = local_40;
          }
          else {
            pppppppiVar22 = param_7;
            if ((*(byte *)(*(int *)(param_2 + 8) + 0x144) & 0x40) == 0) {
              pppppppiVar22 =
                   (int *******)
                   ((uint)param_7 & (*(byte *)(*(int *)(param_2 + 8) + 0x148) & 0x40) >> 6);
            }
            if ((((uint)pppppppiVar22 & 1) != 0) && (param_8 == iVar12)) goto LAB_012a2184;
            iVar16 = (int)pppppppiVar34 * 0xc;
            pppppppiVar22 = pppppppiVar32;
            while (pppppppiVar22 != (int *******)0x0) {
              FUN_012c1e5c(&local_38,pppppppiVar22,pppppppiVar31,&local_58,uVar14);
              uVar35 = 0;
              pppppppiVar10 = (int *******)0x0;
              pppppppiVar6 = pppppppiVar22;
              pppppppiVar7 = pppppppiVar31;
              if (local_38 != (int *******)0x0) {
                pppppppiVar31 = local_2c;
                pppppppiVar10 = local_30;
                pppppppiVar6 = local_38;
                pppppppiVar7 = local_34;
              }
              pppppppiVar22 = pppppppiVar10;
              if ((int)pppppppiVar7 < 0) {
LAB_012a31ac:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar35,local_d0);
              }
              if (pppppppiVar7 == (int *******)0x0) {
                local_d8 = (int *******)0x0;
                local_d0 = (int *******)&DAT_00000001;
              }
              else {
                uVar35 = 1;
                local_d0 = (int *******)FUN_01298504(pppppppiVar7,1);
                if (local_d0 == (int *******)0x0) {
                  local_d0 = pppppppiVar7;
                  goto LAB_012a31ac;
                }
                local_d8 = pppppppiVar7;
              }
              FUN_01bed4e2(local_d0,pppppppiVar6,pppppppiVar7);
              if (pppppppiVar34 == local_48) {
                FUN_006520b4(&local_48,pppppppiVar34,1,4,0xc);
                local_b4 = local_44;
              }
              pppppppiVar34 = (int *******)((int)pppppppiVar34 + 1);
              puVar17 = (undefined4 *)((int)local_b4 + iVar16);
              *puVar17 = local_d8;
              puVar17[1] = local_d0;
              puVar17[2] = pppppppiVar7;
              iVar16 = iVar16 + 0xc;
              local_40 = pppppppiVar34;
            }
            FUN_0134bd64(ppppppiVar15,pppppppiVar32);
          }
          iVar12 = iVar12 + 1;
          pppppppiVar31 = pppppppiVar29;
        } while (pppppppiVar29 != pppppppiVar24);
      }
      FUN_012c1dbc(&local_a0);
      *param_6 = (uint)local_48;
      param_6[1] = (uint)local_44;
      param_6[2] = (uint)local_40;
      pppppppiVar24 = local_48;
      param_7 = local_40;
    }
  }
  param_3 = param_3 & 0xff;
  cVar11 = '\0';
  if (*(char *)(param_5 + 0x130) != '\t') {
    cVar11 = *(char *)(param_5 + 0x130);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar11) {
  case '\0':
    bVar36 = param_3 == 1;
    uVar14 = *(undefined4 *)(param_5 + 0x114);
    if (param_3 < 2) {
      bVar36 = uVar26 == 2;
    }
    iVar12 = *(int *)(param_5 + 0x118);
    if (bVar36) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
    iVar16 = FUN_012c02fc(param_9,uVar14,iVar12);
    if (iVar16 != 0) {
      iVar16 = *(int *)(param_2 + 8);
      bVar1 = *(byte *)(iVar16 + 0x144);
      bVar36 = (bVar1 & 8) == 0;
      if (bVar36) {
        bVar1 = *(byte *)(iVar16 + 0x148);
      }
      if (!(!bVar36 || (bVar1 & 8) != 0)) {
        piVar30 = (int *)(*(int *)(param_5 + 0x4c) + 4);
        for (iVar28 = *(int *)(param_5 + 0x50) << 3; iVar28 != 0; iVar28 = iVar28 + -8) {
          if ((*piVar30 == iVar12) &&
             (iVar33 = thunk_FUN_01bed842(piVar30[-1],uVar14,iVar12), iVar33 == 0))
          goto LAB_012a23b8;
          piVar30 = piVar30 + 2;
        }
        FUN_012a410c(&local_58,param_5);
        pppppppiVar31 = (int *******)FUN_012a41c8();
        FUN_012a410c(&local_a0,param_5);
        *pppppppiVar31 = (int ******)local_a0;
        pppppppiVar31[1] = (int ******)local_9c;
        pppppppiVar31[2] = (int ******)local_98;
        local_40 = (int *******)&DAT_00000001;
        local_48 = (int *******)&DAT_00000001;
        pppppppiVar24 = *(int ********)(param_2 + 8);
        local_44 = pppppppiVar31;
        pppppppiVar31 = (int *******)FUN_012b9138(pppppppiVar24 + 0x1d);
        local_98 = (int *******)0x0;
        local_9c = (int *******)&DAT_00420598;
        if (pppppppiVar31 != (int *******)0x0) {
          local_9c = pppppppiVar31;
        }
        local_a0 = pppppppiVar24;
        FUN_012b5c88(&local_38,&local_a0,4,0);
        iVar12 = FUN_012bd3f8(iVar16,&local_58,&local_48,&local_38);
        break;
      }
    }
LAB_012a23b8:
    FUN_012a36e4(param_2,param_9,param_5,param_4);
LAB_012a24c0:
    iVar12 = FUN_012a41e8(param_2,param_5,param_6,param_4,param_9);
    if (iVar12 == 0) {
      *param_1 = 0x80000002;
      return;
    }
    *param_1 = &DAT_80000009;
    param_1[1] = iVar12;
    return;
  case '\x01':
    bVar36 = param_3 == 1;
    if (param_3 < 2) {
      bVar36 = uVar26 == 2;
    }
    if (bVar36) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
    FUN_012a36e4(param_2,param_9,param_5,param_4);
    goto LAB_012a24c0;
  case '\x02':
    uVar26 = param_6[2];
    if (uVar26 == 0) {
      puVar17 = (undefined4 *)FUN_012a41c8();
      FUN_012bbd90(&local_a0,&DAT_0056eb7c,4);
      *puVar17 = local_a0;
      puVar17[1] = local_9c;
      puVar17[2] = local_98;
      local_80 = 1;
      local_88 = 1;
      local_84 = puVar17;
    }
    else {
      local_88 = *param_6;
      local_80 = param_6[2];
      local_84 = (undefined4 *)param_6[1];
    }
    uVar14 = *(undefined4 *)(param_5 + 0x114);
    iVar16 = *(int *)(param_5 + 0x118);
    iVar12 = FUN_012c02fc(param_9,uVar14,iVar16);
    if (((iVar12 == 0) || (iVar12 = *(int *)(param_2 + 8), (*(byte *)(iVar12 + 0x144) & 8) != 0)) ||
       ((*(byte *)(iVar12 + 0x148) & 8) != 0)) {
LAB_012a2820:
      FUN_012a36e4(param_2,param_9,param_5,param_4);
      iVar12 = FUN_012a41e8(param_2,param_5,&local_88,param_4,param_9);
      goto LAB_012a2968;
    }
    piVar30 = (int *)(*(int *)(param_5 + 0x4c) + 4);
    for (iVar28 = *(int *)(param_5 + 0x50) << 3; iVar28 != 0; iVar28 = iVar28 + -8) {
      if ((*piVar30 == iVar16) &&
         (iVar33 = thunk_FUN_01bed842(piVar30[-1],uVar14,iVar16), iVar33 == 0)) goto LAB_012a2820;
      piVar30 = piVar30 + 2;
    }
    FUN_012a410c(&local_58,param_5);
    pppppppiVar31 = (int *******)FUN_012a41c8();
    FUN_012a410c(&local_a0,param_5);
    *pppppppiVar31 = (int ******)local_a0;
    pppppppiVar31[1] = (int ******)local_9c;
    pppppppiVar31[2] = (int ******)local_98;
    local_40 = (int *******)&DAT_00000001;
    local_48 = (int *******)&DAT_00000001;
    pppppppiVar24 = *(int ********)(param_2 + 8);
    local_44 = pppppppiVar31;
    pppppppiVar31 = (int *******)FUN_012b9138(pppppppiVar24 + 0x1d);
    local_98 = (int *******)0x0;
    local_9c = (int *******)&DAT_00420598;
    if (pppppppiVar31 != (int *******)0x0) {
      local_9c = pppppppiVar31;
    }
    local_a0 = pppppppiVar24;
    FUN_012b5c88(&local_38,&local_a0,4,0);
    uVar14 = FUN_012bd3f8(iVar12,&local_58,&local_48,&local_38);
    *param_1 = &DAT_80000009;
    param_1[1] = uVar14;
    puVar20 = &local_88;
LAB_012a2e14:
    FUN_012987d4(puVar20);
    goto joined_r0x012a299c;
  case '\x03':
    uVar26 = param_6[2];
    if (uVar26 == 0) {
      puVar17 = (undefined4 *)FUN_012a41c8();
      FUN_012bbd90(&local_a0,"f",5);
      *puVar17 = local_a0;
      puVar17[1] = local_9c;
      puVar17[2] = local_98;
      local_70 = 1;
      local_78 = 1;
      local_74 = puVar17;
    }
    else {
      local_78 = *param_6;
      local_70 = param_6[2];
      local_74 = (undefined4 *)param_6[1];
    }
    uVar14 = *(undefined4 *)(param_5 + 0x114);
    iVar16 = *(int *)(param_5 + 0x118);
    iVar12 = FUN_012c02fc(param_9,uVar14,iVar16);
    if (((iVar12 != 0) && (iVar12 = *(int *)(param_2 + 8), (*(byte *)(iVar12 + 0x144) & 8) == 0)) &&
       ((*(byte *)(iVar12 + 0x148) & 8) == 0)) {
      piVar30 = (int *)(*(int *)(param_5 + 0x4c) + 4);
      for (iVar28 = *(int *)(param_5 + 0x50) << 3; iVar28 != 0; iVar28 = iVar28 + -8) {
        if ((*piVar30 == iVar16) &&
           (iVar33 = thunk_FUN_01bed842(piVar30[-1],uVar14,iVar16), iVar33 == 0)) goto LAB_012a2930;
        piVar30 = piVar30 + 2;
      }
      FUN_012a410c(&local_58,param_5);
      pppppppiVar31 = (int *******)FUN_012a41c8();
      FUN_012a410c(&local_a0,param_5);
      *pppppppiVar31 = (int ******)local_a0;
      pppppppiVar31[1] = (int ******)local_9c;
      pppppppiVar31[2] = (int ******)local_98;
      local_40 = (int *******)&DAT_00000001;
      local_48 = (int *******)&DAT_00000001;
      pppppppiVar24 = *(int ********)(param_2 + 8);
      local_44 = pppppppiVar31;
      pppppppiVar31 = (int *******)FUN_012b9138(pppppppiVar24 + 0x1d);
      local_98 = (int *******)0x0;
      local_9c = (int *******)&DAT_00420598;
      if (pppppppiVar31 != (int *******)0x0) {
        local_9c = pppppppiVar31;
      }
      local_a0 = pppppppiVar24;
      FUN_012b5c88(&local_38,&local_a0,4,0);
      uVar14 = FUN_012bd3f8(iVar12,&local_58,&local_48,&local_38);
      *param_1 = &DAT_80000009;
      param_1[1] = uVar14;
      puVar20 = &local_78;
      goto LAB_012a2e14;
    }
LAB_012a2930:
    FUN_012a36e4(param_2,param_9,param_5,param_4);
    iVar12 = FUN_012a41e8(param_2,param_5,&local_78,param_4,param_9);
LAB_012a2968:
    if (iVar12 == 0) {
      *param_1 = 0x80000002;
    }
    else {
      *param_1 = &DAT_80000009;
      param_1[1] = iVar12;
    }
    goto joined_r0x012a299c;
  case '\x04':
    uVar26 = param_6[2];
    if (uVar26 == 0) {
      uVar14 = *(undefined4 *)(param_5 + 0x114);
      uVar35 = *(undefined4 *)(param_5 + 0x118);
      pcVar18 = (char *)FUN_012b67f0(param_9 + 0x20,uVar14,uVar35);
      pcVar23 = "";
      if (pcVar18 != (char *)0x0) {
        pcVar23 = pcVar18;
      }
      cVar11 = *pcVar23;
      pppppppiVar31 = (int *******)FUN_012a41c8();
      bVar1 = UnsignedSaturate(cVar11 + '\x01',0x10);
      uVar2 = UnsignedSaturate(0,0x10);
      uVar3 = UnsignedSaturate(0,0x10);
      uVar4 = UnsignedSaturate(0,0x10);
      FUN_012a4490(&local_a0,
                   (uint)uVar4 << 0x18 | (uint)uVar3 << 0x10 | (uint)uVar2 << 8 | (uint)bVar1);
      local_38 = local_a0;
      local_34 = local_9c;
      local_30 = local_98;
      *pppppppiVar31 = (int ******)local_a0;
      pppppppiVar31[1] = (int ******)local_9c;
      pppppppiVar31[2] = (int ******)local_98;
      local_40 = (int *******)&DAT_00000001;
      local_48 = (int *******)&DAT_00000001;
      local_44 = pppppppiVar31;
    }
    else {
      local_48 = (int *******)*param_6;
      local_40 = (int *******)param_6[2];
      uVar14 = *(undefined4 *)(param_5 + 0x114);
      uVar35 = *(undefined4 *)(param_5 + 0x118);
      local_44 = (int *******)param_6[1];
    }
    FUN_012c02fc(param_9,uVar14,uVar35);
    FUN_012a36e4(param_2,param_9,param_5,param_4);
    iVar12 = FUN_012a41e8(param_2,param_5,&local_48,param_4,param_9);
    if (iVar12 == 0) {
      *param_1 = 0x80000002;
    }
    else {
      *param_1 = &DAT_80000009;
      param_1[1] = iVar12;
    }
joined_r0x012a299c:
    if (uVar26 != 0) {
      return;
    }
    goto LAB_012a1d0c;
  case '\x05':
    FUN_012a81d8(&local_a0,*(undefined4 *)(param_2 + 8),param_3 - 1 < 3);
    iVar12 = FUN_012bca38(0xc,*(undefined4 *)(param_2 + 8),&local_a0);
    break;
  case '\x06':
    FUN_012a81d8(&local_a0,*(undefined4 *)(param_2 + 8),0);
    iVar12 = FUN_012bca38(0xc,*(undefined4 *)(param_2 + 8),&local_a0);
    break;
  case '\a':
    FUN_012a81d8(&local_a0,*(undefined4 *)(param_2 + 8),1);
    iVar12 = FUN_012bca38(0xc,*(undefined4 *)(param_2 + 8),&local_a0);
    break;
  case '\b':
    iVar12 = *(int *)(param_2 + 8);
    if (param_3 - 1 < 3) {
      ppppppiVar15 = *(int *******)(iVar12 + 0x13c);
      local_58 = (int ******)0x0;
      if (ppppppiVar15 == (int ******)0x0) {
        ppppppiVar15 = (int ******)0x0;
      }
      else {
        pppppppiVar24 = *(int ********)(iVar12 + 0x140);
      }
      if (*(int *******)(iVar12 + 0x134) != (int ******)0x0) {
        param_7 = *(int ********)(iVar12 + 0x138);
        local_58 = *(int *******)(iVar12 + 0x134);
      }
    }
    else {
      ppppppiVar15 = *(int *******)(iVar12 + 0x134);
      local_58 = (int ******)0x0;
      if (ppppppiVar15 == (int ******)0x0) {
        ppppppiVar15 = (int ******)0x0;
      }
      else {
        pppppppiVar24 = *(int ********)(iVar12 + 0x138);
      }
      if (*(int *******)(iVar12 + 0x13c) != (int ******)0x0) {
        param_7 = *(int ********)(iVar12 + 0x140);
        local_58 = *(int *******)(iVar12 + 0x13c);
      }
    }
    local_48 = *(int ********)(iVar12 + 0x90);
    if (ppppppiVar15 != (int ******)0x0) {
      param_7 = pppppppiVar24;
      local_58 = ppppppiVar15;
    }
    if (local_58 == (int ******)0x0) {
      local_58 = (int ******)0x1;
      param_7 = (int *******)0x0;
    }
    if (*(int *)(iVar12 + 0x8c) == -0x80000000) {
      local_48 = *(int ********)(iVar12 + 0x11c);
      local_44 = *(int ********)(iVar12 + 0x120);
    }
    else {
      local_44 = *(int ********)(iVar12 + 0x94);
    }
    local_98 = &local_58;
    local_a0 = (int *******)&local_48;
    local_94 = (int *******)&LAB_018a13b8;
    local_9c = (int *******)&LAB_018a13b8;
    local_54 = param_7;
    FUN_00664898(&local_38,&DAT_005ab6af,&local_a0);
    iVar12 = FUN_012bca38(0xe,*(undefined4 *)(param_2 + 8),&local_38);
  }
LAB_012a1d08:
  *param_1 = &DAT_80000009;
  param_1[1] = iVar12;
LAB_012a1d0c:
  FUN_012987d4(param_6);
  return;
}

