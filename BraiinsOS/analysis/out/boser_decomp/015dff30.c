// FUN_015dff30 @ 015dff30 size=3472 calls_out=27 calls_in=1
// strings: DNS Incoming: not enough data to read an IPV4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015dff30(undefined4 *param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint *****pppppuVar6;
  uint *****pppppuVar7;
  ushort uVar8;
  uint *****pppppuVar9;
  uint *****pppppuVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *****pppppuVar13;
  int iVar14;
  ushort *puVar15;
  uint *****pppppuVar16;
  uint ****ppppuVar17;
  char *pcVar18;
  uint *****pppppuVar19;
  uint uVar20;
  uint ****ppppuVar21;
  undefined *puVar22;
  ushort uVar23;
  uint uVar24;
  uint *****pppppuVar25;
  uint uVar26;
  uint *****pppppuVar27;
  uint ****ppppuVar28;
  uint *****pppppuVar29;
  uint ****ppppuVar30;
  uint ****ppppuVar31;
  undefined *local_184;
  int local_170;
  int local_154;
  ushort local_142;
  int local_140;
  int local_13c;
  int local_138;
  uint *****local_130;
  uint *****local_12c;
  uint *****local_128;
  ushort local_122;
  uint ****local_120;
  uint ****local_11c;
  uint *****pppppuStack_118;
  uint *****pppppuStack_114;
  uint *****pppppuStack_110;
  uint ****local_10c;
  int local_108;
  uint ****local_104;
  uint *****pppppuStack_100;
  uint *****pppppuStack_fc;
  uint *****pppppuStack_f8;
  uint *****local_f0;
  uint *****local_ec;
  uint *****local_e8;
  uint *****local_e4;
  uint *****local_e0;
  code *local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint *****local_b0;
  uint *****local_ac;
  uint *****local_a8;
  uint *****local_a4;
  uint *****local_a0;
  uint *****local_9c;
  uint *****local_88;
  undefined *local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  char local_75;
  uint *****local_74;
  uint *****local_70;
  uint *****local_6c;
  uint *****local_68;
  undefined4 local_64;
  uint *****local_60;
  uint *****local_5c;
  uint *****local_58;
  code *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_64 = (code *)CONCAT22(local_64._2_2_,CONCAT11(local_64._1_1_,(undefined1)local_64));
  local_142 = param_3;
  if (4 < DAT_01d51b00) {
    local_68 = (uint *****)&local_142;
    local_e0 = (uint *****)&DAT_01cfd348;
    local_64 = FUN_012fcf18;
    local_e4 = (uint *****)&DAT_00000013;
    local_ec = (uint *****)&DAT_00000013;
    local_e8 = (uint *****)0x4b3c6f;
    local_f0 = (uint *****)0x4b3c6f;
    FUN_015fb650(&DAT_005b0d3a,&local_68,5,&local_f0);
  }
  local_138 = 0;
  local_140 = 0;
  local_170 = 4;
  local_13c = 4;
  if (param_3 != 0) {
    uVar26 = 0;
    pppppuVar9 = (uint *****)(param_2 + 0x4c);
    local_184 = &DAT_01cfd398;
    local_154 = 0;
    do {
      FUN_015dfaa4(&local_f0,param_2);
      local_68 = local_ec;
      pppppuVar27 = local_e8;
      local_60 = local_e4;
      local_64 = (code *)local_e8;
      if (local_f0 != (uint *****)&SUB_00000004) {
        param_1[1] = local_ec;
        param_1[2] = local_e8;
        param_1[3] = local_e4;
        *param_1 = local_f0;
        goto LAB_015e09cc;
      }
      ppppuVar28 = *(uint *****)(param_2 + 8);
      ppppuVar30 = *(uint *****)(param_2 + 0x4c);
      local_130 = local_68;
      local_12c = pppppuVar27;
      local_128 = local_60;
      if (ppppuVar28 < ppppuVar30) {
        puVar22 = &DAT_01cfd358;
        ppppuVar17 = ppppuVar28;
        goto LAB_015e0c4c;
      }
      if ((uint *****)((int)ppppuVar28 - (int)ppppuVar30) < &DAT_0000000a) {
        local_6c = (uint *****)&local_130;
        local_e8 = (uint *****)&local_88;
        local_e4 = (uint *****)FUN_012fd02c;
        local_ec = (uint *****)&LAB_0193a90c;
        local_f0 = (uint *****)&local_6c;
        local_88 = (uint *****)((int)ppppuVar28 - (int)ppppuVar30);
        FUN_00664898(&local_68,&DAT_005991ce,&local_f0);
LAB_015e09a8:
        param_1[1] = local_68;
        param_1[2] = local_64;
        param_1[3] = local_60;
        *param_1 = 2;
LAB_015e09c0:
        FUN_0134bd64(local_130,local_12c);
LAB_015e09cc:
        FUN_015defc4(&local_140);
        return;
      }
      iVar14 = *(int *)(param_2 + 4);
      ppppuVar31 = (uint ****)((int)ppppuVar30 + 10);
      puVar15 = (ushort *)(iVar14 + (int)ppppuVar30);
      uVar8 = *puVar15;
      local_122 = (ushort)((uVar8 & 0xff) << 8) | uVar8 >> 8;
      uVar1 = puVar15[4];
      uVar20 = *(uint *)(puVar15 + 2);
      uVar23 = puVar15[1];
      uVar2 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
      uVar24 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18;
      ppppuVar17 = (uint ****)(uVar2 >> 0x10);
      ppppuVar21 = (uint ****)((int)ppppuVar31 + (uVar2 >> 0x10));
      *(uint *****)(param_2 + 0x4c) = ppppuVar31;
      if (uVar20 == 0) {
        uVar24 = (uint)(*(ushort *)(param_2 + 0x52) >> 0xf);
      }
      local_120 = ppppuVar17;
      local_11c = ppppuVar21;
      if (ppppuVar28 < ppppuVar21) {
        local_88 = (uint *****)((int)ppppuVar28 - (int)ppppuVar31);
        local_ec = (uint *****)&LAB_00632348;
        local_f0 = (uint *****)&local_130;
        local_e0 = (uint *****)&local_88;
        local_dc = FUN_012fd02c;
        local_e4 = (uint *****)FUN_012fd02c;
        local_e8 = &local_120;
        FUN_00664898(&local_68,&DAT_005a8535,&local_f0);
        goto LAB_015e09a8;
      }
      uVar8 = FUN_015dfee0(((uint)uVar8 << 0x18 | (uint)(uVar8 >> 8) << 0x10) >> 0x10);
      pppppuVar6 = local_128;
      pppppuVar27 = local_12c;
      if (uVar8 != 0) {
        uVar23 = uVar23 << 8 | uVar23 >> 8;
        if (uVar8 < 0x10) {
          if (uVar8 < 0xc) {
            if (uVar8 == 1) {
              ppppuVar17 = (uint ****)((int)ppppuVar30 + 0xe);
              if (ppppuVar28 < ppppuVar17) {
                iVar14 = thunk_FUN_01be5118(0x2d);
                if (iVar14 == 0) {
                  ppppuVar17 = (uint ****)0x2d;
                  goto LAB_015e0ca8;
                }
                pcVar18 = "DNS Incoming: not enough data to read an IPV4";
                goto LAB_015e0a50;
              }
              if ((uint ****)0xfffffffa < ppppuVar31 && ppppuVar30 != (uint ****)0xfffffff1) {
                puVar22 = &DAT_01cfd3d8;
                ppppuVar30 = ppppuVar31;
                goto LAB_015e0c4c;
              }
              iVar14 = *(int *)(iVar14 + (int)ppppuVar31);
              *(uint *****)(param_2 + 0x4c) = ppppuVar17;
              local_68 = (uint *****)(iVar14 << 8);
              local_64._0_1_ = (undefined1)((uint)iVar14 >> 0x18);
              FUN_006666fc(&local_88,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44)
                          );
              local_7c = *(undefined4 *)(param_2 + 0x48);
              FUN_015df6e4(&local_f0,pppppuVar27,pppppuVar6,1,uVar23,uVar24,&local_68,&local_88);
              local_88 = (uint *****)FUN_015e0e3c(&local_f0);
LAB_015e0704:
              local_84 = &DAT_01cfd658;
            }
            else {
LAB_015e03e8:
              FUN_015dfaa4(&local_68,param_2);
              pppppuStack_118 = (uint *****)local_64;
              pppppuStack_114 = local_60;
              pppppuStack_110 = local_5c;
              if (local_68 != (uint *****)&SUB_00000004) {
                param_1[1] = local_64;
                param_1[2] = local_60;
                param_1[3] = local_5c;
                *param_1 = local_68;
                goto LAB_015e09c0;
              }
              FUN_015df948(&local_f0,pppppuVar27,pppppuVar6,uVar8,uVar23,uVar24,&pppppuStack_118);
              local_88 = (uint *****)FUN_015e0ea0(&local_f0);
              local_84 = &DAT_01cfd6d8;
            }
          }
          else {
            if (uVar8 == 0xc) goto LAB_015e03e8;
            FUN_015e0f04(&local_68,param_2);
            pppppuVar7 = local_5c;
            pppppuVar19 = local_60;
            pppppuVar13 = (uint *****)local_64;
            if (local_68 != (uint *****)&SUB_00000004) {
              *param_1 = local_68;
              param_1[1] = local_64;
              param_1[2] = local_60;
              param_1[3] = local_5c;
              goto LAB_015e09c0;
            }
            FUN_015e0f04(&local_68,param_2);
            pppppuVar25 = local_5c;
            pppppuVar16 = local_60;
            pppppuVar10 = (uint *****)local_64;
            if (local_68 != (uint *****)&SUB_00000004) {
              *param_1 = local_68;
              param_1[1] = local_64;
              param_1[2] = local_60;
              param_1[3] = local_5c;
              goto LAB_015e0c38;
            }
            FUN_015df764(&local_68,pppppuVar27,pppppuVar6,0xd,uVar23,uVar24);
            local_ac = pppppuVar19;
            local_9c = pppppuVar25;
            local_a0 = pppppuVar16;
            local_a8 = pppppuVar7;
            local_ec = (uint *****)local_64;
            local_f0 = local_68;
            local_e8 = local_60;
            local_e4 = local_5c;
            local_e0 = local_58;
            local_dc = local_54;
            uStack_d8 = uStack_50;
            uStack_d4 = uStack_4c;
            uStack_d0 = uStack_48;
            uStack_cc = uStack_44;
            local_c8 = local_40;
            uStack_c4 = uStack_3c;
            uStack_c0 = uStack_38;
            uStack_bc = uStack_34;
            uStack_b8 = uStack_30;
            uStack_b4 = uStack_2c;
            local_b0 = pppppuVar13;
            local_a4 = pppppuVar10;
            local_88 = (uint *****)FUN_015e1128();
            local_84 = &DAT_01cfd758;
          }
LAB_015e0784:
          if (4 < DAT_01d51b00) {
            local_6c = (uint *****)&local_88;
            local_64 = (code *)&LAB_01676040;
            local_68 = (uint *****)&local_6c;
            local_e4 = (uint *****)&DAT_00000013;
            local_e0 = (uint *****)&DAT_01cfd368;
            local_ec = (uint *****)&DAT_00000013;
            local_e8 = (uint *****)0x4b3c6f;
            local_f0 = (uint *****)0x4b3c6f;
            FUN_015fb650(&DAT_005b0d3a,&local_68,5,&local_f0);
          }
          puVar22 = local_84;
          pppppuVar27 = local_88;
          if (local_154 == local_140) {
            FUN_015f5ab8(&local_140);
            local_170 = local_13c;
          }
          puVar12 = (undefined4 *)(local_170 + local_154 * 8);
          *puVar12 = pppppuVar27;
          local_154 = local_154 + 1;
          puVar12[1] = puVar22;
          ppppuVar30 = *pppppuVar9;
          local_138 = local_154;
          goto LAB_015e0850;
        }
        if (uVar8 < 0x21) {
          if (uVar8 == 0x10) {
            if (ppppuVar21 < ppppuVar31) {
              puVar22 = &DAT_01cfd3c8;
              ppppuVar17 = ppppuVar21;
              ppppuVar30 = ppppuVar31;
LAB_015e0c4c:
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(ppppuVar30,ppppuVar17,ppppuVar28,puVar22);
            }
            if (uVar1 == 0) {
              iVar11 = 1;
              ppppuVar30 = (uint ****)0x0;
            }
            else {
              iVar11 = FUN_01298504(ppppuVar17,1);
              if (iVar11 == 0) goto LAB_015e0ca8;
              ppppuVar30 = ppppuVar17;
            }
            FUN_01bed4e2(iVar11,iVar14 + (int)ppppuVar31,ppppuVar17);
            *pppppuVar9 = ppppuVar21;
            local_10c = ppppuVar30;
            local_108 = iVar11;
            local_104 = ppppuVar17;
            FUN_015e118c(&local_f0,pppppuVar27,pppppuVar6,uVar23,uVar24,&local_10c);
            local_88 = (uint *****)FUN_015e11f8(&local_f0);
            local_84 = &DAT_01cfd558;
            goto LAB_015e0784;
          }
          ppppuVar17 = (uint ****)((int)ppppuVar30 + 0x1a);
          if (ppppuVar17 <= ppppuVar28) {
            if ((uint ****)0xffffffee < ppppuVar31 && ppppuVar30 != (uint ****)0xffffffe5) {
              puVar22 = &DAT_01cfd3e8;
              ppppuVar30 = ppppuVar31;
              goto LAB_015e0c4c;
            }
            local_5c = *(uint ******)((int)ppppuVar31 + iVar14 + 0xb);
            local_60 = *(uint ******)((int)ppppuVar31 + iVar14 + 7);
            local_64 = *(code **)((int)ppppuVar31 + iVar14 + 3);
            local_58 = (uint *****)
                       CONCAT31(local_58._1_3_,*(undefined1 *)((int)ppppuVar31 + iVar14 + 0xf));
            *(uint *****)(param_2 + 0x4c) = ppppuVar17;
            local_68 = (uint *****)CONCAT31(local_68._1_3_,1);
            FUN_006666fc(&local_88,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
            local_7c = *(undefined4 *)(param_2 + 0x48);
            FUN_015df6e4(&local_f0,pppppuVar27,pppppuVar6,0x1c,uVar23,uVar24,&local_68,&local_88);
            local_88 = (uint *****)FUN_015e0e3c(&local_f0);
            goto LAB_015e0704;
          }
          iVar14 = thunk_FUN_01be5118(0x2d);
          if (iVar14 == 0) {
            ppppuVar17 = (uint ****)0x2d;
LAB_015e0ca8:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,ppppuVar17);
          }
          pcVar18 = &DAT_004b3ce8;
LAB_015e0a50:
          FUN_01bed4e2(iVar14,pcVar18,0x2d);
          *param_1 = 2;
          param_1[1] = 0x2d;
          param_1[2] = iVar14;
          param_1[3] = 0x2d;
        }
        else if (uVar8 == 0x21) {
          FUN_015e125c(&local_68,param_2);
          pppppuVar13 = local_68;
          uVar3 = SUB42(local_64,0);
          if (local_68 == (uint *****)&SUB_00000004) {
            FUN_015e125c(&local_68,param_2);
            pppppuVar13 = local_68;
            uVar4 = SUB42(local_64,0);
            if (local_68 == (uint *****)&SUB_00000004) {
              FUN_015e125c(&local_68,param_2);
              pppppuVar13 = local_68;
              uVar5 = SUB42(local_64,0);
              if (local_68 == (uint *****)&SUB_00000004) {
                FUN_015dfaa4(&local_68,param_2);
                pppppuStack_100 = (uint *****)local_64;
                pppppuStack_fc = local_60;
                pppppuStack_f8 = local_5c;
                if (local_68 == (uint *****)&SUB_00000004) {
                  FUN_015e1300(&local_f0,pppppuVar27,pppppuVar6,uVar23,uVar24,uVar3,uVar4,uVar5,
                               &pppppuStack_100);
                  local_88 = (uint *****)FUN_015e1388(&local_f0);
                  local_84 = &DAT_01cfd4d8;
                  goto LAB_015e0784;
                }
                param_1[1] = local_64;
                param_1[2] = local_60;
                param_1[3] = local_5c;
                *param_1 = local_68;
              }
              else {
                FUN_01bed4e2((int)param_1 + 6,(int)&local_64 + 2,10);
                *(undefined2 *)(param_1 + 1) = uVar5;
                *param_1 = pppppuVar13;
              }
              goto LAB_015e09c0;
            }
            FUN_01bed4e2((int)param_1 + 6,(int)&local_64 + 2,10);
            *(undefined2 *)(param_1 + 1) = uVar4;
          }
          else {
            FUN_01bed4e2((int)param_1 + 6,(int)&local_64 + 2,10);
            *(undefined2 *)(param_1 + 1) = uVar3;
          }
          *param_1 = pppppuVar13;
        }
        else {
          if (uVar8 != 0x2f) goto LAB_015e0288;
          FUN_015dfaa4(&local_68,param_2);
          pppppuVar7 = local_5c;
          pppppuVar19 = local_60;
          pppppuVar13 = (uint *****)local_64;
          if (local_68 == (uint *****)&SUB_00000004) {
            pppppuVar10 = *(uint ******)(param_2 + 0x4c);
            pppppuVar16 = *(uint ******)(param_2 + 8);
            pppppuVar25 = (uint *****)((int)pppppuVar10 + 2);
            if (pppppuVar16 < pppppuVar25) {
              local_5c = (uint *****)FUN_012fd02c;
              local_64 = FUN_012fd02c;
              local_68 = (uint *****)&local_6c;
              local_6c = pppppuVar16;
              local_60 = pppppuVar9;
              FUN_00664898(&local_84,&DAT_00573e4b,&local_68);
            }
            else {
              if (pppppuVar16 <= pppppuVar10) {
LAB_015e0cc4:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(pppppuVar10,pppppuVar16,local_184);
              }
              iVar14 = *(int *)(param_2 + 4);
              local_75 = *(char *)(iVar14 + (int)pppppuVar10);
              pppppuVar10 = (uint *****)((int)pppppuVar10 + 1);
              *(uint ******)(param_2 + 0x4c) = pppppuVar10;
              if (local_75 == '\0') {
                if (pppppuVar16 <= pppppuVar10) {
                  local_184 = &DAT_01cfd3a8;
                  goto LAB_015e0cc4;
                }
                pppppuVar10 = (uint *****)(uint)*(byte *)(iVar14 + (int)pppppuVar10);
                local_74 = pppppuVar10;
                if ((undefined1 *)((int)pppppuVar10 + -1) < (undefined1 *)0x20) {
                  pppppuVar29 = (uint *****)((int)pppppuVar25 + (int)pppppuVar10);
                  *pppppuVar9 = (uint ****)pppppuVar25;
                  local_70 = pppppuVar29;
                  if (pppppuVar29 <= pppppuVar16) {
                    pppppuVar16 = (uint *****)FUN_01298504(pppppuVar10,1);
                    if (pppppuVar16 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(1,pppppuVar10);
                    }
                    FUN_01bed4e2(pppppuVar16,(undefined1 *)(iVar14 + (int)pppppuVar25),pppppuVar10);
                    *pppppuVar9 = (uint ****)pppppuVar29;
                    FUN_015df764(&local_68,pppppuVar27,pppppuVar6,0x2f,uVar23,uVar24);
                    local_a8 = pppppuVar7;
                    local_ac = pppppuVar19;
                    local_ec = (uint *****)local_64;
                    local_f0 = local_68;
                    local_e8 = local_60;
                    local_e4 = local_5c;
                    local_e0 = local_58;
                    local_dc = local_54;
                    uStack_d8 = uStack_50;
                    uStack_d4 = uStack_4c;
                    uStack_d0 = uStack_48;
                    uStack_cc = uStack_44;
                    local_c8 = local_40;
                    uStack_c4 = uStack_3c;
                    uStack_c0 = uStack_38;
                    uStack_bc = uStack_34;
                    uStack_b8 = uStack_30;
                    uStack_b4 = uStack_2c;
                    local_b0 = pppppuVar13;
                    local_a4 = pppppuVar10;
                    local_a0 = pppppuVar16;
                    local_9c = pppppuVar10;
                    local_88 = (uint *****)FUN_015e13ec();
                    local_84 = &DAT_01cfd5d8;
                    goto LAB_015e0784;
                  }
                  local_60 = (uint *****)&local_6c;
                  local_5c = (uint *****)FUN_012fd02c;
                  local_64 = FUN_012fd02c;
                  local_68 = (uint *****)&local_70;
                  local_6c = pppppuVar16;
                  FUN_00664898(&local_84,&DAT_00585df6,&local_68);
                }
                else {
                  local_68 = (uint *****)&local_74;
                  local_64 = FUN_012fd02c;
                  FUN_00664898(&local_84,&DAT_00599805,&local_68);
                }
              }
              else {
                local_68 = (uint *****)&local_75;
                local_64 = FUN_012fcc70;
                FUN_00664898(&local_84,&DAT_0058c20e,&local_68);
              }
            }
            *param_1 = 2;
            param_1[1] = local_84;
            param_1[2] = uStack_80;
            param_1[3] = local_7c;
LAB_015e0c38:
            FUN_0134bd64(pppppuVar13,pppppuVar19);
          }
          else {
            *param_1 = local_68;
            param_1[1] = local_64;
            param_1[2] = local_60;
            param_1[3] = local_5c;
          }
        }
        goto LAB_015e09c0;
      }
LAB_015e0288:
      ppppuVar30 = ppppuVar21;
      if (4 < DAT_01d51b00) {
        local_88 = (uint *****)&local_130;
        local_5c = (uint *****)&LAB_0193a90c;
        local_60 = (uint *****)&local_88;
        local_64 = FUN_012fcf18;
        local_68 = (uint *****)&local_122;
        local_e4 = (uint *****)&DAT_00000013;
        local_e0 = (uint *****)&DAT_01cfd378;
        local_ec = (uint *****)&DAT_00000013;
        local_e8 = (uint *****)0x4b3c6f;
        local_f0 = (uint *****)0x4b3c6f;
        FUN_015fb650(&DAT_005a7e7b,&local_68,5,&local_f0);
        ppppuVar30 = (uint ****)((int)*pppppuVar9 + (int)ppppuVar17);
      }
      *pppppuVar9 = ppppuVar30;
LAB_015e0850:
      if (ppppuVar30 != ppppuVar21) {
        local_e0 = &local_11c;
        local_dc = FUN_012fd02c;
        local_e4 = (uint *****)FUN_012fd02c;
        local_ec = (uint *****)FUN_012fcf18;
        local_f0 = (uint *****)&local_122;
        local_e8 = pppppuVar9;
        FUN_00664898(&local_68,&DAT_005b4ad3,&local_f0);
        goto LAB_015e09a8;
      }
      uVar26 = uVar26 + 1;
      FUN_0134bd64(local_130,local_12c);
    } while (uVar26 < param_3);
  }
  param_1[1] = local_140;
  param_1[2] = local_13c;
  param_1[3] = local_138;
  *param_1 = 4;
  return;
}

