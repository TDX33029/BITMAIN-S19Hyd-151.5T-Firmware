// FUN_01508344 @ 01508344 size=3960 calls_out=17 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01508344(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  ushort uVar27;
  byte *pbVar28;
  uint unaff_r11;
  undefined *puVar29;
  bool bVar30;
  byte *local_1e8;
  byte *local_1e4;
  byte *local_1e0;
  undefined *local_1dc;
  byte *local_1d8;
  byte *local_1d4;
  uint local_1cc;
  byte *local_1c8;
  uint local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  uint local_198;
  uint local_194;
  byte *local_190;
  byte *local_18c;
  byte *local_184;
  uint local_170;
  byte *local_16c;
  int local_168;
  undefined *local_15c;
  byte *local_154;
  int local_150;
  uint local_14c;
  int local_148;
  int local_144;
  int local_140;
  uint local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  byte *local_118;
  uint local_114;
  byte *local_110;
  byte *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  byte *local_dc;
  byte *local_d8;
  byte *local_d4;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  byte *local_8c;
  byte *local_88;
  byte *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  uint local_60;
  byte *local_5c;
  byte *local_58;
  byte local_54;
  byte bStack_53;
  undefined2 uStack_52;
  undefined4 local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined4 local_30;
  
  FUN_0152d84c(&local_90,&DAT_005654a0,param_2);
  pbVar10 = local_8c;
  if ((char)local_90 != '\x18') {
    *(char *)(param_1 + 1) = (char)local_90;
    *(undefined1 *)((int)param_1 + 7) = local_90._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_90._1_2_;
    param_1[2] = local_8c;
    param_1[3] = local_88;
    *param_1 = 1;
    return;
  }
  pbVar18 = (byte *)param_2[1];
  uVar21 = param_2[2];
  if (pbVar18 + -uVar21 < local_8c) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  pbVar12 = local_8c + uVar21;
  param_2[2] = (int)pbVar12;
  if ((CARRY4(uVar21,(uint)local_8c)) || (pbVar18 < pbVar12)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar21,pbVar12,pbVar18,&DAT_018a78f8);
  }
  local_140 = 0;
  local_144 = 4;
  local_148 = 0;
  if (local_8c != (byte *)0x0) {
    iVar19 = *param_2 + uVar21;
    piVar5 = (int *)((uint)&local_54 | 2);
    local_1b8 = 0x41;
    pbVar18 = (byte *)0x0;
    do {
      if ((uint)((int)pbVar10 - (int)pbVar18) < 2) {
        local_48 = &DAT_0000000a;
        uVar21 = 0xc;
        uVar7 = 0;
        pbVar18 = &DAT_0040bce4;
        goto LAB_0150915c;
      }
      pbVar12 = pbVar18 + 2;
      if (((byte *)0xfffffffd < pbVar18) || (pbVar10 < pbVar12)) goto LAB_01509284;
      uVar27 = *(ushort *)(pbVar18 + iVar19);
      local_184 = (byte *)(uint)(uVar27 != 0xdfe);
      if ((uint)((int)pbVar10 - (int)pbVar12) < 2) {
        local_48 = (byte *)0x3;
        uVar21 = 0xc;
        uVar7 = 0;
        pbVar18 = &DAT_00410f57;
        local_184 = local_18c;
        goto LAB_01509160;
      }
      pbVar24 = pbVar18 + 4;
      if (((byte *)0xfffffffc < pbVar12 && pbVar18 != (byte *)0xfffffffb) || (pbVar10 < pbVar24)) {
        pbVar18 = pbVar12;
        pbVar12 = pbVar24;
        goto LAB_01509284;
      }
      uVar7 = (uint)*(ushort *)(pbVar12 + iVar19);
      uVar21 = uVar7 << 0x18 | (uint)(*(ushort *)(pbVar12 + iVar19) >> 8) << 0x10;
      if ((uint)((int)pbVar10 - (int)pbVar24) < uVar21 >> 0x10) {
        local_48 = (byte *)0x0;
        uVar21 = 0xb;
        pbVar18 = local_18c;
        goto LAB_0150914c;
      }
      local_18c = (byte *)(uVar21 >> 0x10);
      pbVar12 = pbVar24 + (int)local_18c;
      pbVar18 = pbVar24;
      if (CARRY4((uint)pbVar24,(uint)local_18c)) {
LAB_01509284:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(pbVar18,pbVar12,pbVar10,&DAT_018a78f8);
      }
      if (pbVar10 < pbVar12) {
        goto LAB_01509284;
      }
      local_16c = pbVar24 + iVar19;
      local_dc = local_16c;
      local_d8 = local_18c;
      if (uVar27 == 0xdfe) {
        if (uVar7 == 0) {
          local_48 = &SUB_00000002;
          pbVar18 = &DAT_00410f4f;
          uVar21 = (local_1a8 & 0xff) << 8;
          local_170 = local_194;
        }
        else {
          if (&SUB_00000002 < local_18c) {
            bVar1 = *local_16c;
            local_1a8 = (uint)bVar1;
            local_170 = 5;
            uVar21 = (uint)*(ushort *)(local_16c + 1) << 0x18 |
                     (uint)(*(ushort *)(local_16c + 1) >> 8) << 0x10;
            local_d4 = (byte *)0x3;
            switch(uVar21 >> 0x10) {
            case 0x10:
              local_170 = 0;
              break;
            case 0x11:
              local_170 = 1;
              break;
            case 0x12:
              local_170 = 2;
              break;
            case 0x20:
              local_170 = 3;
              break;
            case 0x21:
              local_170 = 4;
            }
            FUN_015409a4(&local_54,&local_dc);
            pbVar18 = local_48;
            pbVar26 = local_4c;
            pbVar24 = local_50;
            if (CONCAT22(uStack_52,CONCAT11(bStack_53,local_54)) != 0) {
              uVar21 = (uint)local_50 & 0xff;
              local_16c = local_50;
              pbVar18 = local_4c;
              goto LAB_0150914c;
            }
            FUN_0152d84c(&local_54,&DAT_018a7630,&local_dc);
            pbVar3 = local_50;
            uVar7 = (uint)local_54;
            if (uVar7 == 0x18) {
              if (local_50 <= local_d8 + -(int)local_d4) {
                pbVar25 = local_d4 + (int)local_50;
                if ((CARRY4((uint)local_d4,(uint)local_50)) || (local_d8 < pbVar25)) {
                  local_d4 = pbVar25;
                    /* WARNING: Subroutine does not return */
                  FUN_00faa36c();
                }
                uVar7 = 0;
                bVar30 = local_50 == (byte *)0x0;
                local_154 = local_dc + (int)local_d4;
                local_4c = (byte *)0x0;
                local_50 = &SUB_00000002;
                local_54 = 0;
                bStack_53 = 0;
                uStack_52 = 0;
                if (bVar30) {
                  uVar9 = 0;
                  local_d4 = pbVar25;
                }
                else {
                  iVar20 = 0;
                  pbVar8 = &SUB_00000002;
                  pbVar22 = pbVar3;
                  pbVar28 = &SUB_00000002;
                  local_d4 = pbVar25;
                  iVar16 = local_30;
                  do {
                    pbVar25 = local_4c;
                    local_30._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
                    if (pbVar22 < &SUB_00000002) {
                      uStack_32 = 7;
                      puVar29 = &UNK_0040bcbd;
LAB_01508db8:
                      local_34 = (undefined2)((uint)puVar29 >> 0x10);
                      local_38 = (unaff_r11 & 0xffff) + (int)puVar29 * 0x10000;
                      local_30._0_2_ = 0;
                      if (CONCAT22(uStack_52,CONCAT11(bStack_53,local_54)) != 0) {
                        thunk_FUN_016d3fb4();
                      }
                      uVar7 = 0xc;
                      iVar19 = local_38;
                      goto LAB_01508df0;
                    }
                    local_30 = iVar16;
                    if (pbVar3 < pbVar28) {
                      pbVar10 = pbVar28 + -2;
LAB_01509214:
                    /* WARNING: Subroutine does not return */
                      FUN_00faa36c(pbVar10,pbVar28,pbVar3,&DAT_018a78f8);
                    }
                    uVar27 = *(ushort *)((int)(local_154 + (int)pbVar28) + -2);
                    uVar7 = (uint)uVar27 << 0x18 | (uint)(uVar27 >> 8) << 0x10;
                    unaff_r11 = (uVar7 >> 0x10) - 1 & 0xffff;
                    if (2 < unaff_r11) {
                      unaff_r11 = 3;
                    }
                    if (pbVar3 + -2 < pbVar28) {
                      uStack_32 = 8;
                      puVar29 = &UNK_0056a7f8;
                      unaff_r11 = local_14c;
                      goto LAB_01508db8;
                    }
                    if (pbVar3 <= pbVar28 + 1) {
                      pbVar10 = pbVar28;
                      pbVar28 = pbVar28 + 2;
                      goto LAB_01509214;
                    }
                    uVar27 = *(ushort *)(local_154 + (int)pbVar28);
                    uVar9 = (uint)uVar27 << 0x18 | (uint)(uVar27 >> 8) << 0x10;
                    local_14c = 4;
                    uVar13 = (uVar9 >> 0x10) + 1 & 0xffff;
                    if (uVar13 < 5) {
                      local_14c = (uint)*(ushort *)(&DAT_004225e0 + uVar13 * 2);
                    }
                    if (local_4c == (byte *)CONCAT22(uStack_52,CONCAT11(bStack_53,local_54))) {
                      FUN_0154e1e4(&local_54);
                      pbVar8 = local_50;
                    }
                    local_4c = pbVar25 + 1;
                    pbVar22 = pbVar22 + -4;
                    puVar17 = (uint *)(pbVar8 + iVar20);
                    *puVar17 = unaff_r11 | uVar7;
                    iVar20 = iVar20 + 8;
                    puVar17[1] = local_14c | uVar9;
                    pbVar25 = pbVar28 + 2;
                    pbVar28 = pbVar28 + 4;
                    iVar16 = local_30;
                  } while (pbVar25 < pbVar3);
                  uVar9 = (uint)local_54;
                  uVar7 = (uint)bStack_53;
                }
                local_30._2_2_ = (undefined2)((uint)local_30 >> 0x10);
                iVar16 = *piVar5;
                local_38._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
                pbVar28 = (byte *)(iVar16 << 0x10 | uVar7 << 8 | uVar9);
                local_30._0_2_ = (undefined2)piVar5[2];
                local_34 = (undefined2)piVar5[1];
                uStack_32 = (undefined2)((uint)piVar5[1] >> 0x10);
                local_38 = iVar16;
                if (pbVar24 == &DAT_80000000) {
                  local_48 = pbVar28;
                }
                else {
                  local_80 = CONCAT22(local_34,local_38._2_2_);
                  local_78 = CONCAT22((short)(uVar21 >> 0x10),(short)local_170);
                  local_7c = CONCAT22((undefined2)local_30,uStack_32);
                  local_88 = pbVar18;
                  local_74 = CONCAT31(local_74._1_3_,bVar1);
                  local_8c = pbVar26;
                  local_90 = pbVar24;
                  local_84 = pbVar28;
                  if (local_d8 == local_d4) {
                    if (pbVar24 != (byte *)0x0) {
                      thunk_FUN_016d3fb4(pbVar26);
                    }
                    if (pbVar28 != (byte *)0x0) {
                      thunk_FUN_016d3fb4(local_80);
                    }
                    local_48 = &SUB_00000002;
                    uVar21 = 0xc;
                    pbVar18 = &DAT_00410f4f;
                  }
                  else {
                    if (local_d8 <= local_d4) {
                      local_d4 = local_d4 + 1;
                    /* WARNING: Subroutine does not return */
                      FUN_00faa36c();
                    }
                    local_198 = (uint)local_dc[(int)local_d4];
                    local_d4 = local_d4 + 1;
                    FUN_015407ec(&local_54,&local_dc);
                    pbVar4 = local_48;
                    pbVar22 = local_4c;
                    pbVar8 = local_50;
                    pbVar25 = (byte *)((uint)local_50 >> 0x10);
                    if (CONCAT22(uStack_52,CONCAT11(bStack_53,local_54)) == 1) {
                      if (pbVar24 != (byte *)0x0) {
                        thunk_FUN_016d3fb4(pbVar26);
                      }
                      uVar21 = (uint)pbVar8 & 0xff;
                      local_198 = (uint)pbVar8 >> 8;
                      pbVar24 = pbVar25;
                      pbVar18 = pbVar22;
                      if (pbVar28 != (byte *)0x0) {
                        thunk_FUN_016d3fb4(local_80);
                      }
                    }
                    else {
                      iVar16 = FUN_015746e4(local_4c,local_48);
                      if (iVar16 == 0) {
                        FUN_00fab1e0(&local_54,pbVar22,pbVar4);
                        pbVar25 = local_50;
                        if (CONCAT22(uStack_52,CONCAT11(bStack_53,local_54)) == 1) {
                          local_34 = SUB42(local_4c,0);
                          uStack_32 = (undefined2)((uint)local_4c >> 0x10);
                          local_38._0_2_ = (undefined2)local_50;
                          local_38._2_2_ = local_50._2_2_;
                    /* WARNING: Subroutine does not return */
                          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_018a9138,&DAT_018a90f0);
                        }
                        local_5c = local_50;
                        *(undefined1 *)((undefined2 *)((uint)&local_60 | 1) + 1) = 0x80;
                        *(undefined2 *)((uint)&local_60 | 1) = 0;
                        local_58 = local_4c;
                        local_60 = local_60 & 0xffffff00;
                        FUN_01574b00(&local_70,&local_60);
                        FUN_0152d84c(&local_54,&DAT_005654a0,&local_dc);
                        uVar21 = (uint)local_54;
                        if (uVar21 == 0x18) {
                          pbVar4 = local_50;
                          if (local_50 <= local_d8 + -(int)local_d4) {
                            pbVar14 = local_d4 + (int)local_50;
                            if ((CARRY4((uint)local_d4,(uint)local_50)) || (local_d8 < pbVar14)) {
                              local_d4 = pbVar14;
                    /* WARNING: Subroutine does not return */
                              FUN_00faa36c();
                            }
                            local_1b0 = 4;
                            local_1e0 = local_dc + (int)local_d4;
                            local_3c = (byte *)0x0;
                            local_34 = 4;
                            uStack_32 = 0;
                            local_38._0_2_ = 0;
                            local_38._2_2_ = 0;
                            local_44 = local_1e0;
                            local_40 = pbVar4;
                            if (local_50 == (byte *)0x0) {
                              local_150 = 0;
                              local_1ac = 0;
                              local_d4 = pbVar14;
                            }
                            else {
                              local_150 = 0;
                              iVar16 = 8;
                              local_168 = 4;
                              local_d4 = pbVar14;
                              do {
                                local_30 = local_150;
                                FUN_0152a85c(&local_54,&local_44);
                                pbVar14 = local_44;
                                uVar21 = (uint)local_50 >> 0x10;
                                if (local_54 != 0x18) {
                                  local_1dc = (undefined *)((uint)local_50 & 0xffff);
                                  local_1e0 = (byte *)CONCAT22(uStack_52,
                                                               CONCAT11(bStack_53,local_54));
                                  local_1e4 = local_4c;
LAB_01508ed0:
                                  iVar19 = CONCAT22(uStack_32,local_34);
                                  if (local_150 != 0) {
                                    puVar6 = (undefined4 *)(iVar19 + 4);
                                    do {
                                      if ((puVar6[-1] & 0x7fffffff) != 0) {
                                        thunk_FUN_016d3fb4(*puVar6);
                                      }
                                      puVar6 = puVar6 + 4;
                                      local_150 = local_150 + -1;
                                    } while (local_150 != 0);
                                  }
                                  local_1d4 = (byte *)(((uint)local_1dc & 0xffff) + uVar21 * 0x10000
                                                      );
                                  uVar21 = (uint)local_1e0 & 0xff;
                                  if (CONCAT22(local_38._2_2_,(undefined2)local_38) != 0) {
                                    thunk_FUN_016d3fb4(iVar19);
                                  }
                                  goto LAB_01508f38;
                                }
                                if ((uint)((int)local_40 - (int)local_3c) < 2) {
                                  local_1e0 = (byte *)((int)local_15c << 0x10 | 0xc);
                                  local_1dc = &DAT_00410f57;
                                  uVar21 = local_1b8;
                                  local_1e4 = (byte *)0x3;
                                  goto LAB_01508ed0;
                                }
                                pbVar23 = local_3c + 2;
                                pbVar11 = local_3c;
                                pbVar15 = pbVar23;
                                if (((byte *)0xfffffffd < local_3c) || (local_40 < pbVar23)) {
LAB_01509248:
                    /* WARNING: Subroutine does not return */
                                  FUN_00faa36c(pbVar11,pbVar15,local_40,&DAT_018a78f8);
                                }
                                uVar27 = *(ushort *)(local_44 + (int)local_3c);
                                uVar21 = (uint)uVar27 << 0x18 | (uint)(uVar27 >> 8) << 0x10;
                                if ((uint)((int)local_40 - (int)pbVar23) < uVar21 >> 0x10) {
                                  local_1e0 = (byte *)((uint)local_190 & 0xffffff00 | 0xb);
                                  uVar21 = (uint)local_1dc >> 0x10;
                                  local_1e4 = (byte *)0x0;
                                  goto LAB_01508ed0;
                                }
                                local_1dc = (undefined *)(uVar21 >> 0x10);
                                pbVar15 = pbVar23 + (int)local_1dc;
                                uVar2 = CONCAT22((undefined2)local_50,uStack_52);
                                local_3c = pbVar15;
                                if ((CARRY4((uint)pbVar23,(uint)local_1dc)) || (local_40 < pbVar15))
                                {
                                  pbVar11 = pbVar23;
                                  goto LAB_01509248;
                                }
                                if (uVar27 == 0) {
                                  iVar20 = 1;
                                  puVar29 = (undefined *)0x0;
                                }
                                else {
                                  iVar20 = thunk_FUN_016d4a50(local_1dc);
                                  puVar29 = local_1dc;
                                  if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00600af4(1,local_1dc);
                                  }
                                }
                                local_190 = pbVar14 + (int)pbVar23;
                                FUN_016dd1aa(iVar20,local_190,local_1dc);
                                if (local_150 == CONCAT22(local_38._2_2_,(undefined2)local_38)) {
                                  FUN_0154e184(&local_38);
                                  local_168 = CONCAT22(uStack_32,local_34);
                                }
                                puVar6 = (undefined4 *)(local_168 + local_150 * 0x10);
                                *puVar6 = puVar29;
                                local_150 = local_150 + 1;
                                puVar6[1] = iVar20;
                                puVar6 = (undefined4 *)(local_168 + iVar16);
                                *puVar6 = local_1dc;
                                iVar16 = iVar16 + 0x10;
                                puVar6[1] = uVar2;
                                local_15c = local_1dc;
                              } while (local_3c < local_40);
                              local_1b0 = CONCAT22(uStack_32,local_34);
                              local_1ac = CONCAT22(local_38._2_2_,(undefined2)local_38);
                            }
                            pbVar14 = local_8c;
                            uVar27 = local_80._2_2_;
                            local_b0 = local_70;
                            local_a0 = local_7c;
                            local_9c = local_78;
                            local_98 = local_74;
                            local_168._0_2_ = (undefined2)local_80;
                            local_ac = local_6c;
                            local_a8 = uStack_68;
                            local_30 = local_150;
                            if ((local_60 & 0x7fffffff) != 0) {
                              thunk_FUN_016d3fb4(pbVar25);
                            }
                            if (pbVar8 != (byte *)0x0) {
                              thunk_FUN_016d3fb4(pbVar22);
                            }
                            local_1cc = (uint)pbVar14 >> 8;
                            local_1d8 = (byte *)((uint)pbVar14 >> 0x10);
                            uVar21 = (uint)pbVar14 & 0xff;
                            pbVar25 = (byte *)((int)local_1d8 << 0x10 | (local_1cc & 0xff) << 8 |
                                              uVar21);
                            if (pbVar24 != &DAT_80000000) {
                              local_c0 = local_a0;
                              uStack_bc = local_9c;
                              uStack_b8 = local_98;
                              local_d0 = local_b0;
                              local_cc = local_ac;
                              local_c8 = local_a8;
                              local_128 = local_a0;
                              local_124 = local_9c;
                              local_120 = local_98;
                              local_130 = local_a8;
                              local_134 = local_ac;
                              local_138 = local_b0;
                              if (pbVar24 != (byte *)0x80000001) {
                                local_194 = (uint)pbVar26 >> 0x10;
                                local_1e8 = pbVar18;
                                local_1e4 = pbVar28;
                                local_1d4 = pbVar4;
                                local_1c8 = pbVar3;
                                goto LAB_01508694;
                              }
                              local_48 = pbVar28;
                              local_16c = pbVar25;
                              goto LAB_0150914c;
                            }
                            local_48 = pbVar28;
                            pbVar26 = pbVar25;
                            goto LAB_01509148;
                          }
                          local_1e4 = (byte *)0x0;
                          uVar21 = 0xb;
LAB_01508f38:
                          local_198 = (uint)local_1e0 >> 8;
                        }
                        else {
                          local_198 = (uint)*(uint3 *)((uint)&local_54 | 1);
                          local_1e4 = local_4c;
                          local_1d4 = local_50;
                        }
                        local_1d8 = (byte *)(local_198 >> 8);
                        if ((local_70 & 0x7fffffff) != 0) {
                          thunk_FUN_016d3fb4(local_6c);
                        }
                        if (pbVar24 != (byte *)0x0) {
                          thunk_FUN_016d3fb4(local_8c);
                        }
                        if (pbVar28 != (byte *)0x0) {
                          thunk_FUN_016d3fb4(local_80);
                        }
                        if ((local_60 & 0x7fffffff) != 0) {
                          thunk_FUN_016d3fb4(pbVar25);
                        }
                        local_1e8 = local_1d4;
                      }
                      else {
                        if (pbVar24 != (byte *)0x0) {
                          thunk_FUN_016d3fb4(pbVar26);
                        }
                        if (pbVar28 != (byte *)0x0) {
                          thunk_FUN_016d3fb4(local_80);
                        }
                        uVar21 = 9;
                        local_198 = local_1cc;
                      }
                      pbVar24 = local_1d8;
                      pbVar18 = local_1e8;
                      local_48 = local_1e4;
                      if (pbVar8 == (byte *)0x0) {
                      }
                      else {
                        thunk_FUN_016d3fb4(pbVar22);
                      }
                    }
                  }
                  pbVar26 = (byte *)((int)pbVar24 << 0x10 | (local_198 & 0xff) << 8 | uVar21);
                }
                goto LAB_01509148;
              }
              uStack_32 = 0;
              local_30._0_2_ = 0;
              local_38._2_2_ = SUB42(local_1c8,0);
              local_34 = (undefined2)((uint)local_1c8 >> 0x10);
              pbVar28 = (byte *)((uint)local_154 >> 8);
              uVar7 = 0xb;
              iVar19 = CONCAT22(local_38._2_2_,(short)((uint)local_154 >> 0x10));
            }
            else {
              pbVar28 = (byte *)(uint)bStack_53;
              uStack_32 = SUB42(local_4c,0);
              local_30._0_2_ = (undefined2)((uint)local_4c >> 0x10);
              iVar19 = CONCAT22((undefined2)local_50,uStack_52);
              local_34 = local_50._2_2_;
            }
LAB_01508df0:
            local_38._2_2_ = (undefined2)((uint)iVar19 >> 0x10);
            pbVar18 = (byte *)CONCAT22(local_34,local_38._2_2_);
            pbVar10 = (byte *)CONCAT22((undefined2)local_30,uStack_32);
            local_38 = iVar19;
            if (pbVar24 != (byte *)0x0) {
              thunk_FUN_016d3fb4(pbVar26);
            }
            pbVar26 = (byte *)(iVar19 << 0x10 | ((uint)pbVar28 & 0xff) << 8 | uVar7);
            local_48 = pbVar10;
LAB_01509148:
            uVar21 = (uint)pbVar26 & 0xff;
            local_16c = pbVar26;
LAB_0150914c:
            uVar7 = (uint)local_16c & 0xff00;
            local_184 = (byte *)((uint)local_16c >> 0x10);
LAB_0150915c:
            local_1b8 = (uint)pbVar18 >> 0x10;
LAB_01509160:
            iVar20 = local_144;
            param_1[1] = uVar7 | (int)local_184 << 0x10 | uVar21;
            param_1[2] = ((uint)pbVar18 & 0xffff) + local_1b8 * 0x10000;
            param_1[3] = local_48;
            *param_1 = 1;
            iVar19 = local_144;
            for (iVar16 = local_140; iVar16 != 0; iVar16 = iVar16 + -1) {
              FUN_01496be4(iVar19);
              iVar19 = iVar19 + 0x3c;
            }
            if (local_148 == 0) {
              return;
            }
            thunk_FUN_016d3fb4(iVar20);
            return;
          }
          local_48 = &DAT_00000007;
          uVar21 = 0;
          pbVar18 = &DAT_0040bcc4;
        }
        pbVar26 = (byte *)(uVar21 | local_170 << 0x10 | 0xc);
        goto LAB_01509148;
      }
      if (uVar7 == 0) {
        pbVar25 = (byte *)0x0;
        pbVar18 = &DAT_00000001;
      }
      else {
        pbVar18 = (byte *)thunk_FUN_016d4a50(local_18c);
        pbVar25 = local_18c;
        if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_18c);
        }
      }
      local_168._0_2_ = 1;
      uVar27 = uVar27 << 8 | uVar27 >> 8;
      FUN_016dd1aa(pbVar18,local_16c,local_18c);
      uVar21 = (uint)pbVar25 & 0xff;
      pbVar24 = &DAT_80000000;
      pbVar28 = local_18c;
LAB_01508694:
      iVar16 = local_140;
      uStack_100 = uStack_bc;
      uStack_fc = uStack_b8;
      local_104 = local_c0;
      local_ec = local_d0;
      uStack_e8 = local_cc;
      uStack_e4 = local_c8;
      local_f0 = local_150;
      local_e0 = CONCAT31(local_e0._1_3_,(char)local_198);
      local_f4 = local_1b0;
      local_f8 = local_1ac;
      local_114 = (uint)pbVar25 & 0xffffff00 | uVar21;
      local_108 = CONCAT22(uVar27,(undefined2)local_168);
      local_138 = local_d0;
      local_134 = local_cc;
      local_130 = local_c8;
      local_128 = local_c0;
      local_124 = uStack_bc;
      local_120 = uStack_b8;
      local_118 = pbVar24;
      local_110 = pbVar18;
      local_10c = pbVar28;
      if (local_140 == local_148) {
        FUN_0154dff8(&local_148);
      }
      puVar6 = (undefined4 *)(local_144 + iVar16 * 0x3c);
      *puVar6 = local_118;
      puVar6[1] = local_114;
      puVar6[2] = local_110;
      puVar6[3] = local_10c;
      puVar6[4] = local_108;
      puVar6[5] = local_104;
      puVar6[6] = uStack_100;
      puVar6[7] = uStack_fc;
      puVar6[8] = local_f8;
      puVar6[9] = local_f4;
      puVar6[10] = local_f0;
      puVar6[0xb] = local_ec;
      puVar6[0xc] = uStack_e8;
      puVar6[0xd] = uStack_e4;
      puVar6[0xe] = local_e0;
      local_140 = iVar16 + 1;
      pbVar18 = pbVar12;
    } while (pbVar12 < pbVar10);
  }
  *param_1 = 0;
  param_1[1] = local_148;
  param_1[2] = local_144;
  param_1[3] = local_140;
  return;
}

