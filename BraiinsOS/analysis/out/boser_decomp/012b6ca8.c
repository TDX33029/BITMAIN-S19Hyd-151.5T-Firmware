// FUN_012b6ca8 @ 012b6ca8 size=7284 calls_out=45 calls_in=1
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

uint ****** FUN_012b6ca8(uint ******param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint ****ppppuVar5;
  uint ******ppppppuVar6;
  undefined *puVar7;
  uint ******ppppppuVar8;
  uint ******ppppppuVar9;
  undefined4 *puVar10;
  uint ****ppppuVar11;
  uint ***pppuVar12;
  uint uVar13;
  int iVar14;
  uint ******ppppppuVar15;
  byte bVar16;
  uint uVar17;
  undefined4 uVar18;
  uint ***pppuVar19;
  uint *****pppppuVar20;
  uint ******ppppppuVar21;
  int iVar22;
  uint ****ppppuVar23;
  uint *****pppppuVar24;
  int iVar25;
  int iVar26;
  uint ****ppppuVar27;
  uint ******ppppppuVar28;
  int iVar29;
  undefined4 uVar30;
  uint *****pppppuVar31;
  uint *****pppppuVar32;
  uint *****pppppuVar33;
  uint *****pppppuVar34;
  uint *****pppppuVar35;
  uint ******ppppppuVar36;
  uint *****pppppuVar37;
  uint *****pppppuVar38;
  uint ******ppppppuVar39;
  uint ******ppppppuVar40;
  bool bVar41;
  undefined8 uVar42;
  uint *****local_138;
  uint *****local_134;
  int local_124;
  uint ***local_11c;
  uint ******local_118;
  uint ******local_114;
  uint *****local_110;
  uint ******local_10c;
  uint ******local_108;
  uint ******local_104;
  uint ******ppppppuStack_100;
  uint ******ppppppuStack_fc;
  uint ******ppppppuStack_f8;
  uint ******ppppppuStack_f4;
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  uint ******local_d8;
  uint ******local_d4;
  uint ******local_d0;
  uint ******local_cc;
  uint ******local_c8;
  uint ******local_c4;
  uint ******local_c0;
  uint ******local_bc;
  uint ******local_b8;
  uint ******local_b4;
  uint ******local_b0;
  uint ******local_ac;
  uint ******local_a8;
  uint ******local_a4;
  uint ******local_a0;
  uint ******local_98;
  uint ******local_94;
  int local_90;
  uint ******local_88;
  uint ******local_84;
  uint ******local_80;
  uint ******local_78;
  undefined4 local_74;
  uint ******local_70;
  uint ******local_6c;
  uint ******local_68;
  uint ******local_64;
  undefined4 local_60;
  uint ******local_5c;
  uint ******local_58;
  uint ******local_54;
  uint ******local_50;
  uint ******local_4c;
  uint ******local_48;
  uint ******local_44;
  uint ******ppppppuStack_40;
  uint ******local_38;
  uint ******local_34;
  uint ******local_30;
  undefined1 uStack_25;
  
  iVar14 = *(int *)(param_2 + 0x28);
  pppppuVar37 = *(uint ******)(param_2 + 0x24);
  ppppppuVar21 = (uint ******)0x0;
  local_110 = *(uint ******)(param_2 + 0x30);
  local_124 = *(int *)(param_2 + 0x34);
  pppppuVar31 = param_1[3];
  local_68 = (uint ******)&SUB_00000004;
  local_74 = (uint ******)&SUB_00000004;
  pppppuVar24 = local_110 + local_124 * 0xf;
  local_64 = (uint ******)0x0;
  pppppuVar34 = pppppuVar37 + iVar14 * 2;
  local_6c = (uint ******)0x0;
  local_70 = (uint ******)0x0;
  local_78 = (uint ******)0x0;
  pppppuVar38 = local_110;
  pppppuVar20 = pppppuVar37;
  while (pppppuVar33 = pppppuVar20, pppppuVar33 != pppppuVar34) {
    if (pppppuVar38 == pppppuVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce24b4);
    }
    iVar2 = FUN_012bf928(pppppuVar38,"");
    pppppuVar38 = pppppuVar38 + 0xf;
    pppppuVar20 = pppppuVar33 + 2;
    if (iVar2 != 0) {
      FUN_012b6a2c(&local_d0,pppppuVar31,*pppppuVar33,pppppuVar33[1]);
      ppppppuVar6 = local_70;
      ppppppuVar39 = local_c8;
      ppppppuVar8 = local_cc;
      ppppppuVar36 = local_d0;
      if (local_d0 == (uint ******)&DAT_80000000) break;
      pppppuVar32 = (uint *****)*pppppuVar33;
      pppppuVar35 = (uint *****)pppppuVar33[1];
      ppppppuVar9 = ppppppuVar21;
      if (local_70 == local_78) {
        FUN_015f5ab8(&local_78);
        ppppppuVar9 = local_64;
      }
      local_74[(int)ppppppuVar6 * 2] = pppppuVar32;
      (local_74 + (int)ppppppuVar6 * 2)[1] = pppppuVar35;
      local_70 = (uint ******)((int)ppppppuVar6 + 1);
      if (ppppppuVar9 == local_6c) {
        FUN_018c4418(&local_6c);
      }
      ppppppuVar21 = (uint ******)((int)ppppppuVar9 + 1);
      ppppppuVar6 = local_68 + (int)ppppppuVar9 * 3;
      *ppppppuVar6 = (uint *****)ppppppuVar36;
      ppppppuVar6[1] = (uint *****)ppppppuVar8;
      ppppppuVar6[2] = (uint *****)ppppppuVar39;
      local_64 = ppppppuVar21;
    }
  }
  ppppppuVar21 = (uint ******)&local_78;
  bVar16 = 0;
  local_108 = local_78;
  local_104 = local_74;
  ppppppuStack_100 = local_70;
  ppppppuStack_fc = local_6c;
  ppppppuStack_f8 = local_68;
  ppppppuStack_f4 = local_64;
  ppppppuVar36 = (uint ******)param_1[3];
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 == 0) {
    pppppuVar38 = ppppppuVar36[0x51];
    bVar41 = ((uint)pppppuVar38 & 0x10000) == 0;
    if (bVar41) {
      bVar16 = *(byte *)((int)ppppppuVar36 + 0x14a);
    }
    if (!bVar41 || (bVar16 & 1) != 0) {
      iVar25 = 0;
      iVar26 = local_124 * 0x3c;
      pppppuVar38 = local_110;
      for (iVar22 = iVar14 << 3; iVar22 != 0; iVar22 = iVar22 + -8) {
        if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01ce24b4);
        }
        iVar29 = FUN_012bf928(pppppuVar38,"");
        iVar25 = iVar25 + iVar29;
        iVar26 = iVar26 + -0x3c;
        pppppuVar38 = pppppuVar38 + 0xf;
      }
      ppppppuVar36 = (uint ******)param_1[3];
      if (iVar25 == 0) {
        FUN_012a81d8(auStack_f0,ppppppuVar36,0);
        ppppppuVar21 = (uint ******)FUN_012bca38(0xd,param_1[3],auStack_f0);
        goto LAB_012b8494;
      }
      pppppuVar38 = ppppppuVar36[0x51];
    }
    bVar41 = ((uint)pppppuVar38 & 0x200) == 0;
    if (bVar41) {
      pppppuVar38 = (uint *****)(uint)*(byte *)((int)ppppppuVar36 + 0x149);
    }
    if (!bVar41 || ((uint)pppppuVar38 & 2) != 0) {
      ppppppuVar39 = ppppppuVar36 + 0x27;
      ppppppuVar8 = ppppppuVar36 + 0x28;
      if (ppppppuVar36[0x26] == (uint *****)0x80000000) {
        ppppppuVar8 = ppppppuVar36 + 0x48;
        ppppppuVar39 = ppppppuVar36 + 0x47;
      }
      ppppppuVar8 = (uint ******)*ppppppuVar8;
      if ((int)ppppppuVar8 < 0) {
        uVar18 = 0;
LAB_012b7434:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar18,ppppppuVar8);
      }
      pppppuVar38 = *ppppppuVar39;
      if (ppppppuVar8 == (uint ******)0x0) {
        ppppppuVar39 = (uint ******)&DAT_00000001;
        local_10c = (uint ******)0x0;
      }
      else {
        uVar18 = 1;
        ppppppuVar39 = (uint ******)FUN_01298504(ppppppuVar8,1);
        if (ppppppuVar39 == (uint ******)0x0) goto LAB_012b7434;
        local_10c = ppppppuVar8;
      }
      FUN_01bed4e2(ppppppuVar39,pppppuVar38,ppppppuVar8);
      local_b0 = (uint ******)param_1[3][0x18];
      local_ac = local_b0 + (int)param_1[3][0x19] * 0x5b;
      local_c4 = (uint ******)0x2;
      local_d8 = (uint ******)0x2;
      FUN_01298668(&local_48,&local_d8);
      if (local_48 == (uint ******)&DAT_80000000) {
        local_a0 = (uint ******)0x0;
        local_a4 = (uint ******)&SUB_00000004;
        local_a8 = (uint ******)0x0;
      }
      else {
        uVar17 = 0;
        uVar13 = 0;
        if (local_d8 != (uint ******)0x2) {
          if (((uint)local_d8 & 1) == 0) {
            if (local_cc != (uint ******)0x0) {
              uVar13 = ((uint)((int)local_c8 - (int)local_cc) >> 2) * -0x55555555;
            }
          }
          else {
            uVar13 = (uint)(local_d4 != (uint ******)0x0);
            if (local_cc != (uint ******)0x0) {
              uVar13 = ((uint)((int)local_c8 - (int)local_cc) >> 2) * -0x55555555 + uVar13;
            }
          }
        }
        if (local_c4 != (uint ******)0x2) {
          if (((uint)local_c4 & 1) == 0) {
            if (local_b8 != (uint ******)0x0) {
              uVar17 = ((uint)((int)local_b4 - (int)local_b8) >> 2) * -0x55555555;
            }
          }
          else {
            uVar17 = (uint)(local_c0 != (uint ******)0x0);
            if (local_b8 != (uint ******)0x0) {
              uVar17 = ((uint)((int)local_b4 - (int)local_b8) >> 2) * -0x55555555 + uVar17;
            }
          }
        }
        uVar17 = uVar17 + uVar13;
        uVar13 = uVar17;
        if (uVar17 < 4) {
          uVar13 = 3;
        }
        if (0xaaaaaa9 < uVar17) {
          uVar18 = 0;
LAB_012b8574:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar18,ppppppuVar21);
        }
        ppppppuVar6 = (uint ******)(uVar13 + 1);
        ppppppuVar21 = (uint ******)((int)ppppppuVar6 * 0xc);
        if (ppppppuVar21 == (uint ******)0x0) {
          ppppppuVar9 = (uint ******)&SUB_00000004;
          ppppppuVar6 = (uint ******)0x0;
        }
        else {
          uVar18 = 4;
          ppppppuVar9 = (uint ******)FUN_01298504(ppppppuVar21,4);
          if (ppppppuVar9 == (uint ******)0x0) goto LAB_012b8574;
        }
        *ppppppuVar9 = (uint *****)local_48;
        ppppppuVar9[1] = (uint *****)local_44;
        ppppppuVar9[2] = (uint *****)ppppppuStack_40;
        local_80 = (uint ******)&DAT_00000001;
        local_78 = local_d8;
        local_74 = local_d4;
        local_70 = local_d0;
        local_6c = local_cc;
        local_68 = local_c8;
        local_64 = local_c4;
        local_60 = local_c0;
        local_5c = local_bc;
        local_58 = local_b8;
        local_54 = local_b4;
        local_50 = local_b0;
        local_4c = local_ac;
        iVar14 = 0xc;
        local_88 = ppppppuVar6;
        local_84 = ppppppuVar9;
        while( true ) {
          ppppppuVar21 = local_80;
          FUN_01298668(&local_38,&local_78);
          if (local_38 == (uint ******)&DAT_80000000) break;
          if (ppppppuVar21 == local_88) {
            uVar17 = 0;
            uVar13 = 0;
            if (local_78 != (uint ******)0x2) {
              if (((uint)local_78 & 1) == 0) {
                if (local_6c != (uint ******)0x0) {
                  uVar13 = ((uint)((int)local_68 - (int)local_6c) >> 2) * -0x55555555;
                }
              }
              else {
                uVar13 = (uint)(local_74 != (uint ******)0x0);
                if (local_6c != (uint ******)0x0) {
                  uVar13 = ((uint)((int)local_68 - (int)local_6c) >> 2) * -0x55555555 + uVar13;
                }
              }
            }
            if (local_64 != (uint ******)0x2) {
              if (((uint)local_64 & 1) == 0) {
                if (local_58 != (uint ******)0x0) {
                  uVar17 = ((uint)((int)local_54 - (int)local_58) >> 2) * -0x55555555;
                }
              }
              else {
                uVar17 = (uint)(local_60 != (uint ******)0x0);
                if (local_58 != (uint ******)0x0) {
                  uVar17 = ((uint)((int)local_54 - (int)local_58) >> 2) * -0x55555555 + uVar17;
                }
              }
            }
            FUN_006520b4(&local_88,ppppppuVar21,uVar17 + uVar13 + 1,4,0xc);
            ppppppuVar9 = local_84;
          }
          puVar10 = (undefined4 *)((int)ppppppuVar9 + iVar14);
          local_80 = (uint ******)((int)ppppppuVar21 + 1);
          iVar14 = iVar14 + 0xc;
          *puVar10 = local_38;
          puVar10[1] = local_34;
          puVar10[2] = local_30;
        }
        local_a8 = local_88;
        local_a4 = local_84;
        local_a0 = local_80;
      }
      ppppppuVar6 = (uint ******)param_1[3];
      ppppppuVar21 = (uint ******)FUN_012b9138(ppppppuVar6 + 0x1d);
      local_34 = (uint ******)&DAT_00420598;
      if (ppppppuVar21 != (uint ******)0x0) {
        local_34 = ppppppuVar21;
      }
      local_38 = ppppppuVar6;
      local_30 = param_1;
      FUN_012b5c88(&local_48,&local_38,4,0);
      ppppppuVar21 = (uint ******)FUN_012bc650(10);
      FUN_012bc780(ppppppuVar21,ppppppuVar36);
      FUN_01bed4e2((uint)&local_d8 | 3,&local_a8,0xc);
      local_60 = (uint ******)CONCAT31(local_60._1_3_,3);
      local_64 = (uint ******)CONCAT31(local_64._1_3_,3);
      local_70 = local_10c;
      local_74 = (uint ******)CONCAT31(local_74._1_3_,2);
      local_78 = (uint ******)((uint)local_78 & 0xffffff00);
      local_6c = ppppppuVar39;
      local_68 = ppppppuVar8;
      FUN_01bed4e2((int)&local_60 + 1,&local_d8,0xf);
      FUN_012bcd1c(ppppppuVar21,&local_78);
      if (local_48 != (uint ******)&DAT_80000000) {
        local_74 = local_48;
        local_70 = local_44;
        local_6c = ppppppuStack_40;
        local_78 = (uint ******)CONCAT31(local_78._1_3_,4);
        FUN_012bca08(ppppppuVar21,0xf,&local_78);
      }
      goto LAB_012b8494;
    }
  }
  iVar29 = 0;
  uVar17 = 0;
  iVar22 = iVar14 * 8;
  iVar26 = local_124 * 0x3c;
  for (iVar25 = 0; iVar22 != iVar25; iVar25 = iVar25 + 8) {
    if (iVar26 == iVar29) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce24b4);
    }
    iVar3 = FUN_012bf928((int)local_110 + iVar29,"");
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar3 = FUN_012a4878(ppppppuVar36[0x12],ppppppuVar36[0x13],
                           *(undefined4 *)((int)pppppuVar37 + iVar25),
                           ((undefined4 *)((int)pppppuVar37 + iVar25))[1]);
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = 1;
      }
    }
    uVar17 = iVar4 + uVar17;
    iVar29 = iVar29 + 0x3c;
  }
  if (1 < uVar17) {
    pppppuVar20 = pppppuVar37 + 1;
    pppppuVar38 = local_110;
    for (; iVar22 != 0; iVar22 = iVar22 + -8) {
      if (iVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce24b4);
      }
      iVar25 = FUN_012bf928(pppppuVar38,"");
      if (iVar25 != 0) {
        uVar42 = FUN_012a4878(ppppppuVar36[0x12],ppppppuVar36[0x13],pppppuVar20[-1],*pppppuVar20);
        uVar17 = (uint)((ulonglong)uVar42 >> 0x20);
        iVar25 = (int)uVar42;
        if (iVar25 != 0) {
          uVar17 = (uint)*(byte *)(iVar25 + 0x11d);
        }
        if (iVar25 != 0 && (uVar17 & 0x40) != 0) {
          local_78 = (uint ******)&local_d8;
          local_d0 = (uint ******)0x0;
          local_d8 = (uint ******)0x0;
          local_6c = (uint ******)0x0;
          local_d4 = (uint ******)&DAT_00000001;
          local_70 = (uint ******)0x60000020;
          local_74 = (uint ******)&DAT_01ce269c;
          iVar14 = FUN_012bb12c(iVar25,&local_78);
          if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01ce26b4,&DAT_01d30334);
          }
          local_48 = local_d8;
          local_44 = local_d4;
          ppppppuStack_40 = local_d0;
          local_30 = (uint ******)0x0;
          local_34 = (uint ******)&SUB_00000004;
          local_38 = (uint ******)0x0;
          ppppppuVar21 = (uint ******)FUN_012b9138(ppppppuVar36 + 0x1d);
          local_74 = (uint ******)&DAT_00420598;
          if (ppppppuVar21 != (uint ******)0x0) {
            local_74 = ppppppuVar21;
          }
          local_78 = ppppppuVar36;
          local_70 = param_1;
          FUN_012b5c88(&local_d8,&local_78,4,0);
          ppppppuVar21 = (uint ******)FUN_012bd3f8(ppppppuVar36,&local_48,&local_38,&local_d8);
          goto LAB_012b8494;
        }
      }
      pppppuVar38 = pppppuVar38 + 0xf;
      iVar26 = iVar26 + -0x3c;
      pppppuVar20 = pppppuVar20 + 2;
    }
  }
  iVar26 = 0;
  iVar14 = iVar14 * 8;
  pppppuVar38 = param_1[3];
  local_124 = local_124 * 0x3c;
  for (iVar22 = 0; iVar14 != iVar22; iVar22 = iVar22 + 8) {
    if (local_124 == iVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce24b4);
    }
    iVar25 = FUN_012bf928((int)local_110 + iVar26,"");
    if (iVar25 != 0) {
      uVar18 = *(undefined4 *)((int)pppppuVar37 + iVar22);
      uVar30 = ((undefined4 *)((int)pppppuVar37 + iVar22))[1];
      iVar25 = FUN_012a4878(pppppuVar38[0x12],pppppuVar38[0x13],uVar18,uVar30);
      if (iVar25 != 0) {
        FUN_012b8dec(&local_a8,&local_108,param_1[3],uVar18,uVar30);
        ppppppuVar36 = local_a4;
        if (local_a0 != (uint ******)0x0) {
          ppppppuVar39 = (uint ******)param_1[3];
          local_54 = local_a4 + (int)local_a0 * 2;
          local_58 = local_a4;
          local_68 = (uint ******)0x0;
          local_78 = (uint ******)0x0;
          local_50 = ppppppuVar39;
          FUN_012b1340(&local_88,&local_78);
          ppppppuVar21 = local_80;
          ppppppuVar8 = local_84;
          local_74 = local_84 + (int)local_80 * 2;
          local_78 = local_84;
          local_70 = ppppppuVar39;
          FUN_0129bb0c(&local_48,&local_78);
          iVar14 = FUN_012a4878(ppppppuVar39[0x12],ppppppuVar39[0x13],
                                *(undefined4 *)((int)pppppuVar37 + iVar22),
                                ((undefined4 *)((int)pppppuVar37 + iVar22))[1]);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                         ,99,&DAT_01ce267c);
          }
          local_60 = ppppppuVar21;
          local_64 = ppppppuVar8;
          local_78 = (uint ******)pppppuVar37;
          local_74 = (uint ******)pppppuVar34;
          local_70 = (uint ******)local_110;
          local_6c = (uint ******)pppppuVar24;
          local_68 = ppppppuVar39;
          FUN_0129c0b8(&local_38,&local_78);
          local_50 = local_34;
          local_58 = local_34 + (int)local_30 * 2;
          local_5c = local_34;
          local_64 = (uint ******)0x0;
          local_6c = (uint ******)0x0;
          local_70 = ppppppuVar21;
          local_74 = ppppppuVar8;
          local_78 = (uint ******)&local_38;
          local_54 = ppppppuVar39;
          local_4c = local_58;
          FUN_0129bf30(&local_d8,&local_78);
          puVar7 = (undefined *)FUN_012b9138(ppppppuVar39 + 0x1d);
          local_74 = (uint ******)&DAT_00420598;
          if (puVar7 != (undefined *)0x0) {
            local_74 = (uint ******)puVar7;
          }
          local_78 = ppppppuVar39;
          local_70 = param_1;
          FUN_012b5c88(auStack_e4,&local_78,local_d4,local_d0);
          FUN_0134aee0(local_d8,local_d4,4,8);
          FUN_0134aee0(local_38,local_34,4,8);
          local_d0 = (uint ******)0x0;
          local_d8 = (uint ******)0x0;
          local_6c = (uint ******)0x0;
          local_d4 = (uint ******)&DAT_00000001;
          local_70 = (uint ******)0x60000020;
          local_74 = (uint ******)&DAT_01ce269c;
          local_78 = (uint ******)&local_d8;
          iVar14 = FUN_012bb12c(iVar14,&local_78);
          if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01ce26b4,&DAT_01d30334);
          }
          local_38 = local_d8;
          local_34 = local_d4;
          local_30 = local_d0;
          local_78 = local_48;
          local_74 = local_44;
          local_70 = ppppppuStack_40;
          ppppppuVar21 = (uint ******)FUN_012bd3f8(ppppppuVar39,&local_38,&local_78,auStack_e4);
          FUN_0134aee0(local_88,ppppppuVar8,4,8);
          ppppppuVar8 = local_a8;
          goto LAB_012b8488;
        }
        FUN_0134aee0(local_a8,local_a4,4,8);
      }
    }
    iVar26 = iVar26 + 0x3c;
  }
  uVar17 = 1;
  if ((*(byte *)((int)param_1[3] + 0x145) & 0x10) == 0) {
    uVar17 = (*(byte *)((int)param_1[3] + 0x149) & 0x1f) >> 4;
  }
  ppppppuVar21 = param_1;
  if (iVar2 != 0) {
    ppppppuVar21 = (uint ******)0x0;
  }
  if (iVar2 != 0 && uVar17 != 0) goto LAB_012b8494;
  pppppuVar38 = local_110;
  pppppuVar20 = pppppuVar37;
LAB_012b6ffc:
  local_134 = pppppuVar20;
  local_138 = pppppuVar38;
  if (local_134 != pppppuVar34) {
    if (local_138 == pppppuVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce24b4);
    }
    iVar2 = FUN_012bf928(local_138,"");
    pppppuVar20 = local_134 + 2;
    pppppuVar38 = local_138 + 0xf;
    if (iVar2 != 0) {
      pppppuVar31 = param_1[3];
      ppppuVar27 = *local_134;
      ppppuVar23 = local_134[1];
      ppppuVar5 = pppppuVar31[0x12];
      ppppuVar11 = pppppuVar31[0x13];
      iVar2 = FUN_012a4878(ppppuVar5,ppppuVar11,ppppuVar27,ppppuVar23);
      if (iVar2 == 0) {
        ppppuVar5 = pppppuVar31[0x1b];
        iVar2 = (int)pppppuVar31[0x1c] * 0x30;
        while( true ) {
          if (iVar2 == 0) break;
          if (((uint ****)ppppuVar5[10] == ppppuVar23) &&
             (iVar22 = thunk_FUN_01bed842(ppppuVar5[9],ppppuVar27,ppppuVar23), iVar22 == 0)) {
            pppuVar19 = ppppuVar5[4];
            pppuVar12 = pppuVar19 + (int)ppppuVar5[5] * 2;
            if (ppppuVar5[5] != (uint ***)0x0) {
              do {
                FUN_012bba08(param_1,*pppuVar19,pppuVar19[1]);
                pppuVar19 = pppuVar19 + 2;
              } while (pppuVar19 != pppuVar12);
            }
            break;
          }
          ppppuVar5 = ppppuVar5 + 0xc;
          iVar2 = iVar2 + -0x30;
        }
      }
      else {
        local_30 = (uint ******)0x0;
        local_38 = (uint ******)0x0;
        local_34 = (uint ******)&SUB_00000004;
        local_114 = (uint ******)thunk_FUN_01be5118(4);
        if (local_114 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,4);
        }
        ppppppuVar36 = (uint ******)0x0;
        *local_114 = (uint *****)(iVar2 + 0x114);
        local_d0 = (uint ******)&DAT_00000001;
        ppppppuVar21 = (uint ******)&SUB_00000004;
        local_d8 = (uint ******)&DAT_00000001;
        local_70 = (uint ******)0x0;
        local_74 = (uint ******)&SUB_00000004;
        local_78 = (uint ******)0x0;
        local_d4 = local_114;
        do {
          local_d0 = (uint ******)((int)local_d0 + -1);
          pppppuVar31 = local_114[(int)local_d0];
          iVar2 = FUN_012b9274(pppppuVar31,ppppppuVar21,ppppppuVar36);
          if (iVar2 == 0) {
            if (ppppppuVar36 == local_38) {
              FUN_01a54b48(&local_38);
              ppppppuVar21 = local_34;
            }
            ppppppuVar21[(int)ppppppuVar36] = pppppuVar31;
            ppppppuVar36 = (uint ******)((int)ppppppuVar36 + 1);
            local_30 = ppppppuVar36;
            iVar2 = FUN_012a4878(ppppuVar5,ppppuVar11,*pppppuVar31,pppppuVar31[1]);
            if (iVar2 != 0) {
              iVar22 = *(int *)(iVar2 + 100);
              iVar2 = iVar22 + *(int *)(iVar2 + 0x68) * 0x10;
              while (iVar22 != iVar2) {
                iVar26 = FUN_012bf928(local_138,iVar22);
                if (iVar26 == 0) {
                  iVar22 = iVar22 + 0x10;
                }
                else {
                  pppppuVar33 = *(uint ******)(iVar22 + 8);
                  pppppuVar32 = *(uint ******)(iVar22 + 0xc);
                  ppppppuVar6 = (uint ******)
                                FUN_012a4878(ppppuVar5,ppppuVar11,pppppuVar33,pppppuVar32);
                  ppppppuVar39 = local_d0;
                  pppppuVar31 = (uint *****)0x0;
                  ppppppuVar8 = ppppppuVar21;
                  if (ppppppuVar6 != (uint ******)0x0) {
                    pppppuVar31 = ppppppuVar6[0x1a];
                    ppppppuVar8 = ppppppuVar6;
                  }
                  if (ppppppuVar6 != (uint ******)0x0 && pppppuVar31 != (uint *****)0x0) {
                    if (local_d0 == local_d8) {
                      FUN_01a54b48(&local_d8);
                    }
                    local_114 = local_d4;
                    local_d4[(int)ppppppuVar39] = (uint *****)(ppppppuVar8 + 0x45);
                    local_d0 = (uint ******)((int)ppppppuVar39 + 1);
                  }
                  ppppppuVar8 = local_70;
                  if (local_70 == local_78) {
                    FUN_015f5ab8(&local_78);
                  }
                  iVar22 = iVar22 + 0x10;
                  local_74[(int)ppppppuVar8 * 2] = pppppuVar33;
                  (local_74 + (int)ppppppuVar8 * 2)[1] = pppppuVar32;
                  local_70 = (uint ******)((int)ppppppuVar8 + 1);
                }
              }
            }
          }
          ppppppuVar6 = local_70;
          ppppppuVar39 = local_74;
          ppppppuVar8 = local_78;
        } while (local_d0 != (uint ******)0x0);
        FUN_0134aee0(local_d8,local_d4,4,4);
        FUN_0134aee0(local_38,local_34,4,4);
        ppppppuVar21 = ppppppuVar39;
        for (iVar2 = (int)ppppppuVar6 << 3; iVar2 != 0; iVar2 = iVar2 + -8) {
          pppppuVar31 = *ppppppuVar21;
          ppppppuVar36 = ppppppuVar21 + 1;
          ppppppuVar21 = ppppppuVar21 + 2;
          FUN_012bba08(param_1,pppppuVar31,*ppppppuVar36);
        }
        FUN_0134aee0(ppppppuVar8,ppppppuVar39,4,8);
      }
    }
    goto LAB_012b6ffc;
  }
  local_a0 = (uint ******)0x0;
  local_a8 = (uint ******)0x0;
  local_a4 = (uint ******)&SUB_00000004;
  pppppuVar38 = param_1[3];
  pppppuVar37 = pppppuVar37 + 1;
  for (; iVar14 != 0; iVar14 = iVar14 + -8) {
    if (local_124 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce24b4);
    }
    iVar2 = FUN_012bf928(local_110,"");
    if (iVar2 != 0) {
      iVar2 = FUN_012a4878(pppppuVar38[0x12],pppppuVar38[0x13],pppppuVar37[-1],*pppppuVar37);
      bVar16 = 0;
      if (iVar2 != 0) {
        bVar16 = *(byte *)(iVar2 + 0x11d);
      }
      if (iVar2 != 0 && (bVar16 & 0x40) != 0) break;
    }
    pppppuVar37 = pppppuVar37 + 2;
    local_110 = local_110 + 0xf;
    local_124 = local_124 + -0x3c;
  }
  pppppuVar20 = param_1[1];
  pppppuVar24 = param_1[2];
  iVar2 = param_2 + 0x20;
  local_10c = (uint ******)0x0;
  local_118 = (uint ******)&SUB_00000004;
  local_11c = (uint ***)0x0;
  pppppuVar38 = pppppuVar20;
LAB_012b7510:
  pppppuVar34 = pppppuVar38;
  if (pppppuVar34 != pppppuVar20 + (int)pppppuVar24 * 5) {
    iVar22 = FUN_012b1930(iVar2,pppppuVar34[3],pppppuVar34[4]);
    if (iVar22 != 0) goto code_r0x012b7538;
    goto LAB_012b754c;
  }
  ppppuVar11 = param_1[3][0x12];
  ppppuVar23 = param_1[3][0x13];
  ppppuVar5 = ppppuVar11;
LAB_012b7828:
  ppppuVar27 = ppppuVar5;
  if (ppppuVar27 != ppppuVar11 + (int)ppppuVar23 * 0x4d) {
    iVar22 = FUN_012b1930(iVar2,ppppuVar27[0x45],ppppuVar27[0x46]);
    if (iVar22 != 0) goto code_r0x012b784c;
    goto LAB_012b7868;
  }
  pppppuVar38 = param_1[3];
  if (((((uint)pppppuVar38[0x51] & 0x10) == 0) && (((uint)pppppuVar38[0x52] & 0x10) == 0)) &&
     (pppppuVar38[0x13] != (uint ****)0x0)) {
    ppppuVar11 = pppppuVar38[0x12] + (int)pppppuVar38[0x13] * 0x4d;
    ppppuVar5 = pppppuVar38[0x12];
    do {
      while( true ) {
        pppuVar19 = ppppuVar5[0x48];
        bVar41 = pppuVar19 == (uint ***)0x0;
        if (bVar41) {
          pppuVar19 = ppppuVar5[0xd];
        }
        if ((bVar41 && pppuVar19 == (uint ***)&DAT_00110000) &&
           ((iVar14 = FUN_012b1930(iVar2,ppppuVar5[0x45],ppppuVar5[0x46]), iVar14 == 0 ||
            (iVar14 = FUN_012bf928(iVar14,""), iVar14 == 0)))) break;
        ppppuVar5 = ppppuVar5 + 0x4d;
        if (ppppuVar5 == ppppuVar11) goto LAB_012b7d78;
      }
      ppppuVar23 = ppppuVar5 + 0x4d;
      if ((ppppuVar5[5] == (uint ***)0x0) || (ppppuVar5[6] < local_11c)) {
        pppppuVar20 = (uint *****)ppppuVar5[0x45];
        pppppuVar38 = (uint *****)ppppuVar5[0x46];
        if (local_10c == local_a8) {
          FUN_015f5ab8(&local_a8);
        }
        iVar14 = (int)local_10c * 2;
        local_a4[iVar14] = pppppuVar20;
        local_10c = (uint ******)((int)local_10c + 1);
        (local_a4 + iVar14)[1] = pppppuVar38;
        local_a0 = local_10c;
      }
      ppppuVar5 = ppppuVar23;
    } while (ppppuVar23 != ppppuVar11);
  }
LAB_012b7d78:
  ppppppuVar36 = local_a4;
  ppppppuVar21 = local_a8;
  if (local_10c == (uint ******)0x0) {
    FUN_0134aee0(local_a8,local_a4,4,8);
    ppppppuVar21 = (uint ******)0x0;
    goto LAB_012b8494;
  }
  ppppppuVar39 = (uint ******)param_1[3];
  ppppppuVar8 = (uint ******)FUN_012b9138(ppppppuVar39 + 0x1d);
  local_84 = (uint ******)&DAT_00420598;
  if (ppppppuVar8 != (uint ******)0x0) {
    local_84 = ppppppuVar8;
  }
  local_88 = ppppppuVar39;
  local_80 = param_1;
  FUN_012b5da8(&local_78,&local_88,ppppppuVar36,local_10c,param_2);
  ppppppuVar6 = local_74;
  ppppppuVar8 = local_78;
  local_d0 = local_78;
  ppppppuVar15 = local_74 + (int)local_70 * 3;
  local_d8 = local_74;
  ppppppuVar9 = local_74;
  ppppppuVar40 = local_74;
  if (local_70 != (uint ******)0x0) {
    iVar14 = (int)local_70 * 0xc;
    local_cc = ppppppuVar15;
    do {
      pppppuVar20 = *ppppppuVar9;
      pppppuVar38 = ppppppuVar9[1];
      ppppppuVar40 = ppppppuVar9 + 3;
      local_34 = (uint ******)&DAT_00000001;
      local_30 = (uint ******)0x0;
      local_38 = (uint ******)0x0;
      local_6c = (uint ******)0x0;
      local_70 = (uint ******)0x60000020;
      local_74 = (uint ******)&DAT_01ce26f4;
      local_78 = (uint ******)&local_38;
      iVar2 = FUN_012fb940(&local_78,pppppuVar38,ppppppuVar9[2]);
      if (iVar2 != 0) {
        local_d4 = ppppppuVar40;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01ce270c,&DAT_01d30334);
      }
      local_48 = local_38;
      local_44 = local_34;
      ppppppuStack_40 = local_30;
      FUN_0134bd64(pppppuVar20,pppppuVar38);
      iVar14 = iVar14 + -0xc;
      *ppppppuVar9 = (uint *****)local_48;
      ppppppuVar9[1] = (uint *****)local_44;
      ppppppuVar9[2] = (uint *****)ppppppuStack_40;
      ppppppuVar9 = ppppppuVar40;
    } while (iVar14 != 0);
    ppppppuVar9 = ppppppuVar15;
  }
  ppppppuVar28 = ppppppuVar9 + 1;
  local_cc = (uint ******)0x4;
  local_d4 = (uint ******)0x4;
  local_d8 = (uint ******)0x4;
  local_d0 = (uint ******)0x0;
  for (iVar14 = ((uint)((int)ppppppuVar15 - (int)ppppppuVar9) >> 2) * -0x55555555; iVar14 != 0;
      iVar14 = iVar14 + -1) {
    FUN_0134bd64(ppppppuVar28[-1],*ppppppuVar28);
    ppppppuVar28 = ppppppuVar28 + 3;
  }
  local_90 = ((uint)((int)ppppppuVar40 - (int)ppppppuVar6) >> 2) * -0x55555555;
  local_98 = ppppppuVar8;
  local_94 = ppppppuVar6;
  FUN_012bb240(&local_d8);
  local_c8 = *(uint *******)(param_2 + 0x24);
  local_c0 = *(uint *******)(param_2 + 0x30);
  local_c4 = local_c8 + *(int *)(param_2 + 0x28) * 2;
  ppppppuVar8 = ppppppuVar36 + (int)local_10c * 2;
  local_bc = local_c0 + *(int *)(param_2 + 0x34) * 0xf;
  local_d8 = ppppppuVar36;
  local_d4 = ppppppuVar36;
  local_d0 = ppppppuVar21;
  local_cc = ppppppuVar8;
  local_b8 = ppppppuVar39;
  uVar42 = FUN_012b93d4(&local_c8);
  if ((int)uVar42 == 0) {
    ppppppuVar8 = (uint ******)0x0;
    local_c8 = (uint ******)0x0;
    if (local_d8 != (uint ******)0x0) {
      if (local_d4 != local_cc) {
        uVar42 = *(undefined8 *)local_d4;
        local_d4 = local_d4 + 2;
        goto LAB_012b8204;
      }
      FUN_0134aee0(local_d0,local_d8,4,8);
    }
    ppppppuVar36 = (uint ******)&SUB_00000004;
    ppppppuVar8 = (uint ******)0x0;
    ppppppuVar21 = (uint ******)0x0;
    goto LAB_012b83d8;
  }
  if (local_c8 == (uint ******)0x0) {
    if (local_d8 == (uint ******)0x0) goto LAB_012b820c;
LAB_012b8204:
    uVar17 = (uint)((int)local_cc - (int)local_d4) >> 3;
  }
  else {
    if (local_d8 != (uint ******)0x0) goto LAB_012b8204;
LAB_012b820c:
    uVar17 = 0;
  }
  uVar13 = uVar17;
  if (uVar17 < 4) {
    uVar13 = 3;
  }
  uVar18 = 0;
  if (uVar17 != 0x1fffffff) {
    ppppppuVar21 = (uint ******)(uVar13 + 1);
    ppppppuVar8 = (uint ******)((int)ppppppuVar21 * 8);
    if (ppppppuVar8 < (uint ******)0x7ffffffd) {
      if (ppppppuVar8 == (uint ******)0x0) {
        ppppppuVar36 = (uint ******)&SUB_00000004;
        ppppppuVar21 = (uint ******)0x0;
      }
      else {
        uVar18 = 4;
        ppppppuVar36 = (uint ******)FUN_01298504(ppppppuVar8,4);
        if (ppppppuVar36 == (uint ******)0x0) goto LAB_012b8264;
      }
      *(undefined8 *)ppppppuVar36 = uVar42;
      local_30 = (uint ******)&DAT_00000001;
      local_78 = local_d8;
      local_74 = local_d4;
      local_70 = local_d0;
      local_6c = local_cc;
      local_68 = local_c8;
      local_64 = local_c4;
      local_60 = local_c0;
      local_5c = local_bc;
      local_58 = local_b8;
      iVar14 = 0;
      local_38 = ppppppuVar21;
      local_34 = ppppppuVar36;
      do {
        ppppppuVar21 = (uint ******)(iVar14 + 1);
        if (local_68 == (uint ******)0x0) {
LAB_012b82f8:
          if (local_78 == (uint ******)0x0) goto LAB_012b83a0;
          if (local_74 == local_6c) goto LAB_012b8390;
          uVar42 = *(undefined8 *)local_74;
          local_74 = local_74 + 2;
        }
        else {
          uVar42 = FUN_012b93d4(&local_68);
          if ((int)uVar42 == 0) {
            local_68 = (uint ******)0x0;
            goto LAB_012b82f8;
          }
        }
        if (ppppppuVar21 == local_38) {
          if (local_78 == (uint ******)0x0) {
            uVar17 = 0;
          }
          else {
            uVar17 = (uint)((int)local_6c - (int)local_74) >> 3;
          }
          FUN_006520b4(&local_38,ppppppuVar21,uVar17 + 1,4,8);
          ppppppuVar36 = local_34;
        }
        *(undefined8 *)(ppppppuVar36 + iVar14 * 2 + 2) = uVar42;
        local_30 = (uint ******)(iVar14 + 2);
        iVar14 = iVar14 + 1;
      } while( true );
    }
  }
LAB_012b8264:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar18,ppppppuVar8);
code_r0x012b7538:
  iVar22 = FUN_012bf928(iVar22,"");
  pppppuVar38 = pppppuVar34 + 5;
  if (iVar22 == 0) {
LAB_012b754c:
    pppppuVar38 = pppppuVar34 + 5;
    ppppuVar5 = pppppuVar34[3];
    ppppuVar11 = pppppuVar34[4];
    pppppuVar34 = param_1[3];
    iVar22 = FUN_012a4878(pppppuVar34[0x12],pppppuVar34[0x13],ppppuVar5,ppppuVar11);
    if (iVar22 == 0) {
      ppppuVar23 = pppppuVar34[0x1b];
      for (iVar22 = (int)pppppuVar34[0x1c] * 0x30; iVar22 != 0; iVar22 = iVar22 + -0x30) {
        if (((uint ****)ppppuVar23[10] == ppppuVar11) &&
           (iVar26 = thunk_FUN_01bed842(ppppuVar23[9],ppppuVar5,ppppuVar11), iVar26 == 0)) {
          FUN_012a7da0(&local_78,pppppuVar34,ppppuVar23 + 9);
          ppppppuVar21 = local_74;
          iVar22 = (int)local_70 << 3;
          ppppppuVar36 = local_74;
          goto LAB_012b76c8;
        }
        ppppuVar23 = ppppuVar23 + 0xc;
      }
    }
    else if (iVar14 == 0) {
      FUN_012b8dec(&local_78,&local_108,pppppuVar34,*(undefined4 *)(iVar22 + 0x114),
                   *(undefined4 *)(iVar22 + 0x118));
      ppppppuVar21 = local_70;
      FUN_0134aee0(local_78,local_74,4,8);
      if (ppppppuVar21 == (uint ******)0x0) {
        ppppuVar11 = pppppuVar34[0x1b];
        uVar18 = *(undefined4 *)(iVar22 + 0x114);
        uVar30 = *(undefined4 *)(iVar22 + 0x118);
        ppppuVar5 = ppppuVar11 + 9;
        for (iVar26 = (int)pppppuVar34[0x1c] * 0x30; iVar26 != 0; iVar26 = iVar26 + -0x30) {
          iVar25 = FUN_012a949c(uVar18,uVar30,ppppuVar11[1],ppppuVar11[2]);
          if (iVar25 != 0) {
            FUN_012b8dec(&local_78,&local_108,pppppuVar34,*ppppuVar5,ppppuVar5[1]);
            ppppppuVar21 = local_70;
            FUN_0134aee0(local_78,local_74,4,8);
            if (ppppppuVar21 != (uint ******)0x0) goto LAB_012b7510;
          }
          ppppuVar11 = ppppuVar11 + 0xc;
          ppppuVar5 = ppppuVar5 + 0xc;
        }
        pppppuVar34 = *(uint ******)(iVar22 + 0x114);
        pppppuVar37 = *(uint ******)(iVar22 + 0x118);
        if (local_10c == local_a8) {
          FUN_015f5ab8(&local_a8);
          local_118 = local_a4;
        }
        iVar26 = (int)local_10c * 2;
        local_118[iVar26] = pppppuVar34;
        local_10c = (uint ******)((int)local_10c + 1);
        (local_118 + iVar26)[1] = pppppuVar37;
        local_a0 = local_10c;
        if ((*(byte *)(iVar22 + 0x11d) & 1) == 0) {
          pppuVar19 = *(uint ****)(iVar22 + 0x18);
          if (*(uint ****)(iVar22 + 0x18) <= local_11c) {
            pppuVar19 = local_11c;
          }
          if (*(int *)(iVar22 + 0x14) != 0) {
            local_11c = pppuVar19;
          }
        }
      }
    }
  }
  goto LAB_012b7510;
  while( true ) {
    iVar26 = FUN_012b1930(iVar2,*ppppppuVar36,ppppppuVar36[1]);
    if (iVar26 == 0) {
      iVar26 = 0;
    }
    else {
      iVar26 = FUN_012bf928(iVar26,"");
    }
    iVar22 = iVar22 + -8;
    ppppppuVar36 = ppppppuVar36 + 2;
    if (iVar26 != 0) break;
LAB_012b76c8:
    if (iVar22 == 0) {
      FUN_0134aee0(local_78,ppppppuVar21,4,8);
      pppppuVar37 = (uint *****)ppppuVar23[9];
      pppppuVar34 = (uint *****)ppppuVar23[10];
      if (local_10c == local_a8) {
        FUN_015f5ab8(&local_a8);
      }
      local_118 = local_a4;
      iVar22 = (int)local_10c * 2;
      local_a4[iVar22] = pppppuVar37;
      local_10c = (uint ******)((int)local_10c + 1);
      (local_a4 + iVar22)[1] = pppppuVar34;
      local_a0 = local_10c;
      goto LAB_012b7510;
    }
  }
  FUN_0134aee0(local_78,ppppppuVar21,4,8);
  goto LAB_012b7510;
code_r0x012b784c:
  iVar22 = FUN_012bf928(iVar22,"");
  ppppuVar5 = ppppuVar27 + 0x4d;
  if (iVar22 != 0) goto LAB_012b7828;
LAB_012b7868:
  ppppuVar5 = ppppuVar27 + 0x4d;
  if (ppppuVar27[0x1d] == (uint ***)0x0) {
    bVar16 = 0;
  }
  else {
    iVar22 = (int)ppppuVar27[0x1d] << 4;
    bVar16 = 0;
    pppuVar19 = ppppuVar27[0x1c] + 2;
    do {
      local_78 = (uint ******)*pppuVar19;
      local_74 = (uint ******)pppuVar19[1];
      iVar26 = FUN_012b1930(iVar2,pppuVar19[-2],pppuVar19[-1]);
      if (iVar26 != 0) {
        bVar1 = FUN_012bf928(iVar26,&local_78);
        bVar16 = bVar1 | bVar16;
      }
      pppuVar19 = pppuVar19 + 4;
      iVar22 = iVar22 + -0x10;
    } while (iVar22 != 0);
  }
  pppuVar19 = ppppuVar27[0x1f];
  iVar22 = (int)ppppuVar27[0x20] << 4;
  do {
    if (iVar22 == 0) {
      bVar16 = ppppuVar27[0x20] != (uint ***)0x0 | bVar16;
      break;
    }
    local_78 = (uint ******)pppuVar19[2];
    local_74 = (uint ******)pppuVar19[3];
    iVar26 = FUN_012b1930(iVar2,*pppuVar19,pppuVar19[1]);
    if (iVar26 == 0) break;
    iVar26 = FUN_012bf928(iVar26,&local_78);
    pppuVar19 = pppuVar19 + 4;
    iVar22 = iVar22 + -0x10;
  } while (iVar26 != 0);
  pppuVar12 = ppppuVar27[0x23];
  pppuVar19 = ppppuVar27[0x26];
  if (pppuVar12 == (uint ***)0x0) {
    if (pppuVar19 == (uint ***)0x0) goto LAB_012b79e8;
LAB_012b7954:
    pppuVar12 = ppppuVar27[0x25];
    iVar22 = (int)pppuVar19 << 3;
    do {
      if (iVar22 == 0) goto LAB_012b79e8;
      iVar26 = FUN_012b1930(iVar2,*pppuVar12,pppuVar12[1]);
      if (iVar26 == 0) break;
      iVar26 = FUN_012bf928(iVar26,"");
      iVar22 = iVar22 + -8;
      pppuVar12 = pppuVar12 + 2;
    } while (iVar26 != 0);
    pppuVar12 = ppppuVar27[0x23];
  }
  else if (pppuVar19 != (uint ***)0x0) goto LAB_012b7954;
  pppuVar19 = ppppuVar27[0x22];
  iVar22 = (int)pppuVar12 << 3;
  do {
    if (iVar22 == 0) {
      bVar41 = iVar14 == 0;
      goto LAB_012b7a08;
    }
    iVar26 = FUN_012b1930(iVar2,*pppuVar19,pppuVar19[1]);
    if (iVar26 == 0) {
      iVar26 = 0;
    }
    else {
      iVar26 = FUN_012bf928(iVar26,"");
    }
    iVar22 = iVar22 + -8;
    pppuVar19 = pppuVar19 + 2;
  } while (iVar26 == 0);
LAB_012b79e8:
  bVar41 = (iVar14 == 0 & bVar16) == 1;
LAB_012b7a08:
  if (bVar41) {
    pppppuVar38 = (uint *****)ppppuVar27[0x45];
    pppppuVar20 = (uint *****)ppppuVar27[0x46];
    if (local_10c == local_a8) {
      FUN_015f5ab8(&local_a8);
    }
    iVar22 = (int)local_10c * 2;
    local_a4[iVar22] = pppppuVar38;
    local_10c = (uint ******)((int)local_10c + 1);
    (local_a4 + iVar22)[1] = pppppuVar20;
    local_a0 = local_10c;
    if ((*(byte *)((int)ppppuVar27 + 0x11d) & 1) == 0) {
      pppuVar19 = ppppuVar27[6];
      if (ppppuVar27[6] <= local_11c) {
        pppuVar19 = local_11c;
      }
      if (ppppuVar27[5] != (uint ***)0x0) {
        local_11c = pppuVar19;
      }
    }
  }
  goto LAB_012b7828;
LAB_012b8390:
  FUN_0134aee0(local_70,local_78,4,8);
LAB_012b83a0:
  ppppppuVar8 = local_38;
  ppppppuVar36 = local_34;
LAB_012b83d8:
  FUN_012b5c88(&local_38,&local_88,ppppppuVar36,ppppppuVar21);
  ppppppuVar21 = (uint ******)FUN_012bc650(9);
  FUN_012bc780(ppppppuVar21,ppppppuVar39);
  FUN_01bed4e2((uint)&local_d8 | 3,&local_98,0xc);
  local_74 = (uint ******)CONCAT31(local_74._1_3_,3);
  local_78 = (uint ******)CONCAT31(local_78._1_3_,1);
  FUN_01bed4e2((int)&local_74 + 1,&local_d8,0xf);
  FUN_012bd298(ppppppuVar21,&local_78);
  if (local_38 != (uint ******)&DAT_80000000) {
    local_74 = local_38;
    local_70 = local_34;
    local_6c = local_30;
    local_78 = (uint ******)CONCAT31(local_78._1_3_,4);
    FUN_012bca08(ppppppuVar21,0xf);
  }
LAB_012b8488:
  FUN_0134aee0(ppppppuVar8,ppppppuVar36,4,8);
LAB_012b8494:
  FUN_0134aee0(local_108,local_104,4,8);
  FUN_00657a5c(&ppppppuStack_fc);
  return ppppppuVar21;
}

