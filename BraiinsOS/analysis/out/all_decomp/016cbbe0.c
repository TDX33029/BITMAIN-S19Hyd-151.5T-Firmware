// FUN_016cbbe0 @ 016cbbe0 size=4616 calls_out=11 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016cbbe0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5
                 ,int param_6,undefined4 param_7,undefined4 param_8,byte *param_9,byte *param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
                 uint param_15,uint param_16)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte **ppbVar17;
  uint uVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  byte **ppbVar25;
  byte *pbVar26;
  int iVar27;
  byte *pbVar28;
  int iVar29;
  byte **ppbVar30;
  byte bVar31;
  byte *pbVar32;
  byte *extraout_r12;
  byte *extraout_r12_00;
  byte **ppbVar33;
  byte *local_1b0;
  byte *local_1ac;
  byte *local_1a8;
  byte *local_1a4;
  byte *local_198;
  byte *local_194;
  byte *local_190;
  byte *local_184;
  byte *local_180;
  byte *local_17c;
  byte *local_178;
  byte *local_174;
  byte *local_170;
  byte *local_138;
  byte *pbStack_134;
  byte *pbStack_130;
  byte *pbStack_12c;
  byte *pbStack_128;
  byte *local_120 [8];
  byte *local_100;
  byte *pbStack_fc;
  byte *pbStack_f8;
  byte *local_f4;
  byte *pbStack_f0;
  byte *pbStack_ec;
  byte *pbStack_e8;
  byte *local_e0;
  byte *local_dc;
  byte *local_d8;
  byte *local_d0;
  byte *local_cc;
  byte *local_c8;
  byte *local_c0;
  byte *local_bc;
  byte *local_b8;
  byte *local_b4;
  byte *local_b0;
  undefined4 local_ac;
  byte *local_a8;
  byte *local_a4;
  undefined1 local_a0;
  byte *local_9f;
  uint3 uStack_9b;
  byte *local_98;
  byte *local_94;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  byte *local_84;
  byte *local_80;
  undefined4 uStack_78;
  byte *pbStack_74;
  byte *local_70;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  byte *local_50;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  
  if ((*(int *)(param_3 + 0x30) != param_6) ||
     (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(param_3 + 0x2c),param_5), iVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00418e4d,0x44,&DAT_018af3b8);
  }
  if ((param_4 == 0) || ((*(byte *)(param_2 + 2) & 1) != 0)) {
    puVar6 = (undefined4 *)((uint)&local_c0 | 4);
    puVar7 = (undefined4 *)((uint)&local_48 | 4);
    iVar5 = param_2[1];
    piVar22 = (int *)*param_2;
    piVar24 = piVar22;
LAB_016cbc98:
    piVar23 = piVar24;
    if (piVar23 != piVar22 + iVar5) {
      piVar24 = piVar23 + 1;
      iVar29 = *piVar23;
      iVar8 = 0x10;
      iVar27 = *(int *)(iVar29 + 8);
      if (iVar27 == -0x80000000) {
        iVar8 = 0x2c;
      }
      if (*(int *)(iVar29 + iVar8) == *(int *)(param_3 + 0x30)) {
        iVar8 = 0xc;
        if (iVar27 == -0x80000000) {
          iVar8 = 0x28;
        }
        iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar29 + iVar8),*(undefined4 *)(param_3 + 0x2c));
        if (iVar8 == 0) {
          if (iVar27 == -0x80000000) {
            iVar27 = *(int *)(iVar29 + 0x38);
            iVar8 = 0x3c;
            if (iVar27 != 0) goto LAB_016cbd18;
          }
          else if (*(int *)(iVar29 + 0x38) != -0x80000000) {
            iVar27 = *(int *)(iVar29 + 0x3c);
            iVar8 = 0x40;
LAB_016cbd18:
            FUN_016c9b60(&local_c0,iVar27,*(undefined4 *)(iVar29 + iVar8));
            if (local_c0 != (byte *)0x8000002d) {
              FUN_016c3a1c(&local_c0);
              goto LAB_016cbc98;
            }
            if (((uint)local_ac & 0x1000000) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00418e18,0x35,&DAT_018af378);
            }
            if ((param_4 == 0 & local_ac._1_1_) != 0) goto LAB_016cbc98;
            if (param_4 != 0 && (((uint)local_ac & 0xff ^ 1) & 1) == 0) goto LAB_016cbc98;
            pbVar32 = *(byte **)(param_3 + 0x74);
            if (pbVar32 != (byte *)0x0) {
              if (local_bc != (byte *)0x0) {
                pbVar12 = *(byte **)(param_3 + 0x78);
                local_98 = local_bc;
                local_94 = local_b8;
                local_90 = (byte *)0x0;
                FUN_016c8d60(&local_c0,&local_98);
                uStack_78 = (byte *)*puVar6;
                pbStack_74 = (byte *)puVar6[1];
                local_38 = (byte *)puVar6[2];
                local_70 = local_38;
                local_68 = local_b0;
                local_64 = local_ac;
                local_60 = local_a8;
                local_5c = local_a4;
                if (local_c0 == (byte *)0x8000002d) {
                  local_40 = uStack_78;
                  local_3c = pbStack_74;
                  if (uStack_78 != (byte *)0x0) {
                    local_e0 = uStack_78;
                    local_dc = pbStack_74;
                    local_d8 = local_38;
                    if (pbVar12 != (byte *)0x0) {
                      local_174 = (byte *)0x0;
                      pbVar26 = local_ac;
                      do {
                        local_68 = &DAT_8000001d;
                        local_64._0_1_ = 7;
                        pbVar16 = local_174;
                        if (pbVar12 <= local_174) goto LAB_016cc36c;
                        pbVar15 = local_174 + 1;
                        pbVar26 = pbVar32;
                        if (((~pbVar32[(int)local_174] & 0x1f) == 0) || (pbVar12 <= pbVar15))
                        goto switchD_016cc224_default;
                        pbVar16 = pbVar32 + (int)pbVar15;
                        pbVar15 = local_174 + 2;
                        ppbVar25 = (byte **)(uint)*pbVar16;
                        if ((char)*pbVar16 < '\0') {
                          switch(ppbVar25) {
                          case (byte **)0x81:
                            if (pbVar12 <= pbVar15) break;
                            pbVar16 = local_174 + 3;
                            if (0x7fffffff < (uint)(int)(char)pbVar32[(int)pbVar15]) {
                              ppbVar25 = (byte **)(uint)pbVar32[(int)pbVar15];
                              pbVar15 = pbVar16;
                              goto LAB_016cbe90;
                            }
                            goto LAB_016cc36c;
                          case (byte **)0x82:
                            if (pbVar15 < pbVar12) {
                              if (local_174 + 3 < pbVar12) {
                                pbVar9 = local_174 + 4;
                                if (pbVar32[(int)pbVar15] == 0) {
LAB_016cc658:
                                  pbVar16 = pbVar9;
                                }
                                else {
                                  ppbVar25 = (byte **)(uint)CONCAT11(pbVar32[(int)pbVar15],
                                                                     pbVar32[(int)(local_174 + 3)]);
                                  pbVar16 = pbVar9;
LAB_016cc34c:
                                  pbVar15 = pbVar16;
                                  if (ppbVar25 < &DAT_0000ffff) goto LAB_016cbe90;
                                }
                              }
                              else {
LAB_016cc620:
                                pbVar16 = local_174 + 3;
                              }
                              goto LAB_016cc36c;
                            }
                            break;
                          case (byte **)0x83:
                            if (pbVar15 < pbVar12) {
                              if (pbVar12 <= local_174 + 3) goto LAB_016cc620;
                              pbVar16 = local_174 + 4;
                              pbVar26 = pbVar16;
                              if (pbVar16 < pbVar12) {
                                pbVar9 = local_174 + 5;
                                if (pbVar32[(int)pbVar15] == 0) goto LAB_016cc658;
                                ppbVar25 = (byte **)((uint)pbVar32[(int)(local_174 + 3)] << 8 |
                                                     (uint)pbVar32[(int)pbVar15] << 0x10 |
                                                    (uint)pbVar32[(int)pbVar16]);
                                pbVar16 = pbVar9;
                                goto LAB_016cc34c;
                              }
                              goto LAB_016cc36c;
                            }
                            break;
                          case (byte **)0x84:
                            if (pbVar15 < pbVar12) {
                              if (pbVar12 <= local_174 + 3) goto LAB_016cc620;
                              pbVar16 = local_174 + 4;
                              if (pbVar16 < pbVar12) {
                                pbVar28 = local_174 + 5;
                                if (pbVar28 < pbVar12) {
                                  pbVar9 = local_174 + 6;
                                  if (pbVar32[(int)pbVar15] == 0) goto LAB_016cc658;
                                  ppbVar25 = (byte **)((uint)pbVar32[(int)(local_174 + 3)] << 0x10 |
                                                       (uint)pbVar32[(int)pbVar15] << 0x18 |
                                                       (uint)pbVar32[(int)pbVar16] << 8 |
                                                      (uint)pbVar32[(int)pbVar28]);
                                  pbVar16 = pbVar9;
                                  goto LAB_016cc34c;
                                }
                                pbVar16 = pbVar28;
                              }
                              goto LAB_016cc36c;
                            }
                          }
switchD_016cc224_default:
                          pbVar16 = pbVar15;
LAB_016cc36c:
                          local_48 = (byte *)0x80000000;
                          pbVar15 = &DAT_8000001d;
                          bVar31 = 7;
                          ppbVar25 = &local_48;
                          local_174 = pbVar16;
                        }
                        else {
LAB_016cbe90:
                          pbVar16 = pbVar15 + (int)ppbVar25;
                          if ((CARRY4((uint)pbVar15,(uint)ppbVar25)) || (pbVar12 < pbVar16))
                          goto switchD_016cc224_default;
                          if (pbVar32[(int)local_174] != 0x30) goto LAB_016cc36c;
                          pbVar15 = pbVar32 + (int)pbVar15;
                          local_44 = pbVar15;
                          pbVar26 = local_198;
                          local_174 = pbVar16;
                          if (ppbVar25 == (byte **)0x0) {
LAB_016cc608:
                            pbVar15 = (byte *)0x80000012;
LAB_016cc61c:
                            ppbVar25 = &local_68;
                            bVar31 = 0;
                          }
                          else {
                            pbVar28 = (byte *)0x0;
                            ppbVar19 = (byte **)0x0;
                            ppbVar17 = (byte **)0x0;
                            local_170 = (byte *)0x0;
                            local_194 = (byte *)0x0;
                            do {
                              bVar31 = (byte)ppbVar17;
                              ppbVar30 = &local_c0;
                              bVar1 = pbVar15[(int)ppbVar19];
                              ppbVar17 = (byte **)(uint)bVar1;
                              local_180 = pbVar15;
                              if ((~(uint)ppbVar17 & 0x1f) == 0) {
                                ppbVar25 = &local_68;
                                pbVar15 = &DAT_80000000;
                                local_178 = local_190;
                                local_170 = pbVar16;
                                goto LAB_016cc384;
                              }
                              if (ppbVar25 <= (byte **)((int)ppbVar19 + 1)) {
LAB_016cc648:
                                local_178 = local_190;
                                ppbVar25 = &local_68;
                                pbVar15 = &DAT_80000000;
                                local_170 = pbVar16;
                                goto LAB_016cc384;
                              }
                              ppbVar33 = (byte **)((int)ppbVar19 + 2);
                              pbVar9 = (byte *)(uint)pbVar15[(int)ppbVar19 + 1];
                              if ((char)pbVar15[(int)ppbVar19 + 1] < '\0') {
                                if (pbVar9 + -0x81 < &DAT_00000004) {
                                  puVar10 = &switchD_016cbf9c::switchdataD_016cbfa0;
                                  ppbVar20 = (byte **)(&switchD_016cbf9c::switchdataD_016cbfa0)
                                                      [(int)(pbVar9 + -0x81)];
                                  switch(pbVar9) {
                                  case (byte *)0x81:
                                    if ((ppbVar33 < ppbVar25) &&
                                       (0x7fffffff < (uint)(int)(char)pbVar15[(int)ppbVar33])) {
                                      pbVar9 = (byte *)(uint)pbVar15[(int)ppbVar33];
                                      ppbVar33 = (byte **)((int)ppbVar19 + 3);
                                      goto LAB_016cbf24;
                                    }
                                    break;
                                  case (byte *)0x82:
                                    if (ppbVar33 < ppbVar25) {
                                      ppbVar20 = (byte **)((int)ppbVar19 + 3);
                                    }
                                    if ((ppbVar33 < ppbVar25 && ppbVar20 < ppbVar25) &&
                                       (pbVar15[(int)ppbVar33] != 0)) {
                                      pbVar9 = (byte *)(uint)CONCAT11(pbVar15[(int)ppbVar33],
                                                                      pbVar15[(int)ppbVar20]);
                                      ppbVar33 = ppbVar19 + 1;
LAB_016cc1d8:
                                      if (pbVar9 < &DAT_0000ffff) goto LAB_016cbf24;
                                    }
                                    break;
                                  case (byte *)0x83:
                                    if (ppbVar33 < ppbVar25) {
                                      ppbVar30 = (byte **)((int)ppbVar19 + 3);
                                      if (ppbVar30 < ppbVar25) {
                                        puVar10 = (uint *)(ppbVar19 + 1);
                                      }
                                      if ((ppbVar30 < ppbVar25 && puVar10 < ppbVar25) &&
                                         (pbVar15[(int)ppbVar33] != 0)) {
                                        pbVar9 = (byte *)((uint)pbVar15[(int)ppbVar30] << 8 |
                                                          (uint)pbVar15[(int)ppbVar33] << 0x10 |
                                                         (uint)pbVar15[(int)puVar10]);
                                        ppbVar33 = (byte **)((int)ppbVar19 + 5);
                                        goto LAB_016cc1d8;
                                      }
                                    }
                                    break;
                                  case (byte *)0x84:
                                    ppbVar20 = ppbVar17;
                                    if (ppbVar33 < ppbVar25) {
                                      ppbVar20 = (byte **)((int)ppbVar19 + 3);
                                    }
                                    if (ppbVar33 < ppbVar25 && ppbVar20 < ppbVar25) {
                                      ppbVar21 = ppbVar19 + 1;
                                      if (ppbVar21 < ppbVar25) {
                                        ppbVar30 = (byte **)((int)ppbVar19 + 5);
                                      }
                                      if ((ppbVar21 < ppbVar25 && ppbVar30 < ppbVar25) &&
                                         (pbVar15[(int)ppbVar33] != 0)) {
                                        pbVar9 = (byte *)((uint)pbVar15[(int)ppbVar20] << 0x10 |
                                                          (uint)pbVar15[(int)ppbVar33] << 0x18 |
                                                          (uint)pbVar15[(int)ppbVar21] << 8 |
                                                         (uint)pbVar15[(int)ppbVar30]);
                                        ppbVar33 = (byte **)((int)ppbVar19 + 6);
                                        goto LAB_016cc1d8;
                                      }
                                    }
                                  }
                                }
                                goto LAB_016cc648;
                              }
LAB_016cbf24:
                              ppbVar19 = (byte **)(pbVar9 + (int)ppbVar33);
                              if ((CARRY4((uint)pbVar9,(uint)ppbVar33)) || (ppbVar25 < ppbVar19))
                              goto LAB_016cc648;
                              local_190 = pbVar15 + (int)ppbVar33;
                              if (ppbVar17 == (byte **)&DAT_00000081) {
                                if (local_170 == (byte *)0x0) {
                                  local_c0 = (byte *)0x80000000;
                                  if (pbVar9 != (byte *)0x0) {
                                    local_170 = local_190 + 1;
                                    uVar11 = (uint)*local_190;
                                    if ((uVar11 < 8) &&
                                       ((local_17c = pbVar9 + -1, local_17c != (byte *)0x0 ||
                                        (uVar11 == 0)))) {
                                      if (pbVar9 == &DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                                        FUN_00faa4a4(0xffffffff,0,&DAT_018af2b8);
                                      }
                                      if ((uVar11 == 0) ||
                                         (((uint)local_170[(int)(pbVar9 + -2)] & ~(-1 << uVar11)) ==
                                          0)) {
                                        FUN_016c3a1c(&local_c0);
                                        local_1a8 = local_17c;
                                        local_1a4 = local_170;
                                        goto LAB_016cc0a4;
                                      }
                                    }
                                  }
                                  FUN_016c3a1c(&local_c0);
                                  pbVar15 = &DAT_80000000;
                                  local_1ac = local_1a4;
                                  local_1b0 = local_1a8;
                                }
                                else {
                                  pbVar15 = (byte *)0x80000009;
                                }
                                local_198 = (byte *)((uint)local_1ac >> 8);
                                bVar31 = (byte)local_1ac;
                                ppbVar25 = &local_68;
                                pbVar26 = local_198;
                                local_178 = local_1b0;
                                goto LAB_016cc384;
                              }
                              if (ppbVar17 == (byte **)&DAT_000000a2) {
                                if (pbVar28 != (byte *)0x0) {
LAB_016cc7b0:
                                  pbVar15 = (byte *)0x80000009;
                                  ppbVar25 = &local_68;
                                  bVar31 = 0;
                                  pbVar26 = pbVar28;
                                  goto LAB_016cc384;
                                }
                                pbVar28 = local_190;
                                local_184 = pbVar9;
                              }
                              else {
                                if (ppbVar17 != (byte **)&DAT_000000a0) {
                                  pbVar15 = &DAT_80000000;
                                  goto LAB_016cc61c;
                                }
                                if (local_194 != (byte *)0x0) goto LAB_016cc7b0;
                                local_194 = local_190;
                                local_178 = pbVar9;
                              }
LAB_016cc0a4:
                              if (ppbVar19 == ppbVar25) {
                                if (local_194 == (byte *)0x0 && pbVar28 == (byte *)0x0)
                                goto LAB_016cc608;
                                bVar31 = (byte)local_194;
                                pbVar15 = (byte *)0x8000002d;
                                ppbVar25 = &local_68;
                                pbVar26 = (byte *)((uint)local_194 >> 8);
                                local_180 = pbVar28;
                                goto LAB_016cc384;
                              }
                              pbVar16 = pbVar9;
                            } while (ppbVar19 < ppbVar25);
                            ppbVar25 = &local_68;
                            pbVar15 = &DAT_80000000;
                            local_178 = local_190;
                            local_170 = pbVar9;
                            bVar31 = bVar1;
                          }
                        }
LAB_016cc384:
                        FUN_016c3a1c(ppbVar25);
                        local_64 = (byte *)CONCAT31(local_64._1_3_,bVar31);
                        *(char *)((undefined2 *)((uint)&local_68 | 5) + 1) =
                             (char)((uint)pbVar26 >> 0x10);
                        local_50 = local_184;
                        *(undefined2 *)((uint)&local_68 | 5) = (short)pbVar26;
                        local_58 = local_17c;
                        local_54 = local_180;
                        local_5c = local_170;
                        local_60 = local_178;
                        local_68 = pbVar15;
                        if (pbVar15 != (byte *)0x8000002d) {
                          FUN_016c3a1c(&local_68);
                          break;
                        }
                        if (local_180 != (byte *)0x0 || local_170 != (byte *)0x0) break;
                        if (local_64 == (byte *)0x0) {
                          local_44 = (byte *)0x0;
                          local_48 = (byte *)0x8000002d;
                          break;
                        }
                        local_70 = (byte *)0x0;
                        uStack_78 = local_64;
                        pbStack_74 = local_178;
                        FUN_016c8d60(&local_c0,&uStack_78);
                        local_88 = (byte *)*puVar6;
                        local_84 = (byte *)puVar6[1];
                        local_38 = (byte *)puVar6[2];
                        local_80 = local_38;
                        local_98 = local_b0;
                        local_94 = local_ac;
                        local_90 = local_a8;
                        local_8c = local_a4;
                        if (local_c0 != (byte *)0x8000002d) {
                          puVar7[2] = local_38;
                          *puVar7 = local_88;
                          puVar7[1] = local_84;
                          goto LAB_016cc7f0;
                        }
                        local_44 = &DAT_00000001;
                        local_48 = (byte *)0x8000002d;
                        local_40 = local_88;
                        local_3c = local_84;
                        if (local_88 == (byte *)0x0) break;
                        pbVar26 = local_ac;
                        local_d0 = local_88;
                        local_cc = local_84;
                        local_c8 = local_38;
LAB_016cc4b0:
                        if (local_d8 != local_dc) {
                          FUN_016cd97c(&local_48,&local_e0);
                          pbVar15 = local_3c;
                          pbVar16 = local_40;
                          if (local_48 == (byte *)0x8000002e) goto LAB_016cc5dc;
                          local_b0 = local_38;
                          local_ac = local_34;
                          local_a8 = local_30;
                          local_a4 = local_2c;
                          local_b4 = local_3c;
                          local_c0 = local_48;
                          local_bc = local_44;
                          local_b8 = local_40;
                          pbVar26 = local_2c;
                          if (local_48 == (byte *)0x8000002d) {
                            if (((uint)local_44 & 0xff) == 3) {
                              local_170 = local_40;
                              pbVar26 = local_2c;
                              while (local_c8 != local_cc) {
                                FUN_016cd97c(&local_48,&local_d0);
                                if (local_48 == (byte *)0x8000002e) break;
                                local_b0 = local_38;
                                local_ac = local_34;
                                local_a8 = local_30;
                                local_a4 = local_2c;
                                local_b4 = local_3c;
                                local_b8 = local_40;
                                local_bc = local_44;
                                local_c0 = local_48;
                                pbVar26 = local_34;
                                if (local_48 == (byte *)0x8000002d) {
                                  if ((((uint)local_44 & 0xff) == 3 && pbVar15 == local_3c) &&
                                     (iVar8 = thunk_FUN_016dd50a(pbVar16,local_40,pbVar15),
                                     iVar8 == 0)) goto LAB_016cc8d4;
                                }
                                else {
                                  FUN_016c3a1c(&local_c0);
                                }
                              }
                            }
                          }
                          else {
                            FUN_016c3a1c(&local_c0);
                          }
                          goto LAB_016cc4b0;
                        }
LAB_016cc5dc:
                      } while (local_174 != pbVar12);
                    }
                  }
                }
                else {
                  *puVar7 = uStack_78;
                  puVar7[1] = pbStack_74;
                  puVar7[2] = local_38;
LAB_016cc7f0:
                  local_48 = local_c0;
                  local_38 = local_b0;
                  local_34 = local_ac;
                  local_30 = local_a8;
                  local_2c = local_a4;
                  FUN_016c3a1c(&local_48);
                }
              }
              goto LAB_016cbc98;
            }
          }
LAB_016cc8d4:
          iVar5 = *piVar23;
          if (*(int *)(iVar5 + 8) == -0x80000000) {
            local_68 = *(byte **)(iVar5 + 0x10);
            local_64 = *(byte **)(iVar5 + 0x14);
            local_60 = *(byte **)(iVar5 + 0x18);
            local_5c = *(byte **)(iVar5 + 0x1c);
            local_58 = *(byte **)(iVar5 + 0x20);
            local_54 = *(byte **)(iVar5 + 0x24);
          }
          else {
            local_68 = *(byte **)(iVar5 + 0x18);
            local_64 = *(byte **)(iVar5 + 0x1c);
            local_58 = *(byte **)(iVar5 + 0x30);
            local_54 = *(byte **)(iVar5 + 0x34);
            local_5c = *(byte **)(iVar5 + 0x28);
            local_60 = *(byte **)(iVar5 + 0x24);
          }
          FUN_016cb9b4(&local_c0,param_11,param_12,param_7,param_8,&local_68,param_13);
          if (local_c0 != (byte *)0x8000002d) {
            uVar18 = (uint)local_c0 ^ 0x80000000;
            uVar11 = uVar18;
            if (-1 < (int)local_c0) {
              uVar11 = 4;
            }
            if (uVar11 == 0xf) {
              pbVar32 = (byte *)0x8000000e;
LAB_016ccbcc:
              FUN_016c3a1c(&local_c0);
              uVar18 = (uint)pbVar32 & 0x2f;
              local_120[0] = pbVar32;
            }
            else {
              if (uVar11 == 0x2c) {
                pbVar32 = (byte *)0x8000002b;
                goto LAB_016ccbcc;
              }
              if (uVar11 == 0x2a) {
                pbVar32 = (byte *)0x80000029;
                goto LAB_016ccbcc;
              }
              puVar6 = (undefined4 *)((uint)&local_c0 | 4);
              local_48 = (byte *)*puVar6;
              local_44 = (byte *)puVar6[1];
              local_40 = (byte *)puVar6[2];
              local_3c = (byte *)puVar6[3];
              local_38 = (byte *)puVar6[4];
              local_34 = (byte *)puVar6[5];
              local_30 = (byte *)puVar6[6];
              local_120[0] = local_c0;
            }
            puVar6 = (undefined4 *)((uint)local_120 | 4);
            if (-1 < (int)local_120[0]) {
              uVar18 = 4;
            }
            *puVar6 = local_48;
            puVar6[1] = local_44;
            puVar6[2] = local_40;
            puVar6[3] = local_3c;
            puVar6[4] = local_38;
            puVar6[5] = local_34;
            puVar6[6] = local_30;
            if (uVar18 == 0xf) {
              pbVar32 = (byte *)0x8000000e;
            }
            else if (uVar18 == 0x2a) {
              pbVar32 = (byte *)0x80000029;
            }
            else {
              if (uVar18 != 0x2c) {
                local_100 = local_48;
                pbStack_fc = local_44;
                pbStack_f8 = local_40;
                local_f4 = local_3c;
                pbStack_f0 = local_38;
                pbStack_ec = local_34;
                pbStack_e8 = local_30;
                goto LAB_016ccc6c;
              }
              pbVar32 = (byte *)0x8000002b;
            }
            FUN_016c3a1c(local_120);
            local_120[0] = pbVar32;
LAB_016ccc6c:
            *param_1 = local_120[0];
            param_1[1] = local_100;
            param_1[2] = pbStack_fc;
            param_1[3] = pbStack_f8;
            param_1[4] = local_f4;
            param_1[5] = pbStack_f0;
            param_1[6] = pbStack_ec;
            param_1[7] = pbStack_e8;
            return;
          }
          if (*(char *)((int)param_2 + 10) == '\0') {
            puVar10 = (uint *)*piVar23;
            if (puVar10[2] == 0x80000000) {
              puVar10 = puVar10 + 0x10;
            }
            uVar11 = *puVar10;
            uVar18 = puVar10[1];
            if (uVar18 < param_16 || param_16 - uVar18 < (uint)(uVar11 <= param_15)) {
              *param_1 = 0x80000007;
              param_1[2] = param_15;
              param_1[3] = param_16;
              param_1[4] = uVar11;
              param_1[5] = uVar18;
              return;
            }
          }
          if (param_9 != (byte *)0x0) {
            local_40 = (byte *)0x0;
            local_48 = param_9;
            local_44 = param_10;
            FUN_016c607c(&local_c0,&local_48,3);
            if (local_c0 != (byte *)0x8000002d) {
              local_138 = local_b4;
              pbStack_134 = local_b0;
              pbStack_130 = local_ac;
              pbStack_12c = local_a8;
              pbStack_128 = local_a4;
              goto LAB_016ccc94;
            }
            local_c0 = (byte *)0x80000000;
            pbVar32 = local_bc;
            if (local_b8 != (byte *)0x0) {
              pbVar32 = local_bc + 1;
              uVar11 = (uint)*local_bc;
              if ((uVar11 < 8) && ((local_b8 != &DAT_00000001 || (uVar11 == 0)))) {
                pbVar12 = local_b8 + -2;
                if (local_b8 == &DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(0xffffffff,0,&DAT_018af2b8);
                }
                if (uVar11 != 0) {
                  pbVar12 = (byte *)((uint)pbVar32[(int)pbVar12] & ~(-1 << uVar11));
                }
                if (uVar11 == 0 || ((uint)pbVar12 & 0xff) == 0) {
                  FUN_016c3a1c(&local_c0);
                  if ((*pbVar32 & 2) == 0) {
                    local_c0 = &DAT_80000010;
                    local_bc = pbVar32;
                    local_b8 = extraout_r12;
                    goto LAB_016ccc94;
                  }
                  goto LAB_016cca80;
                }
              }
            }
            FUN_016c3a1c(&local_c0);
            local_c0 = (byte *)0x80000000;
            local_bc = pbVar32;
            local_b8 = extraout_r12_00;
LAB_016ccc94:
            *param_1 = local_c0;
            param_1[1] = local_bc;
            param_1[2] = local_b8;
            param_1[3] = local_138;
            param_1[4] = pbStack_134;
            param_1[5] = pbStack_130;
            param_1[6] = pbStack_12c;
            param_1[7] = pbStack_128;
            return;
          }
LAB_016cca80:
          uVar13 = *(undefined4 *)(param_3 + 0xc);
          iVar5 = *piVar23;
          pbVar32 = *(byte **)(param_3 + 0x10);
          if (*(int *)(iVar5 + 8) == -0x80000000) {
            local_68 = *(byte **)(iVar5 + 0x30);
            local_64 = *(byte **)(iVar5 + 0x34);
            local_60 = (byte *)0x0;
            if (local_64 != (byte *)0x0) goto LAB_016ccae0;
            goto LAB_016ccd88;
          }
          iVar8 = *(int *)(iVar5 + 0x44);
          if (iVar8 == 0) goto LAB_016ccd88;
          iVar5 = *(int *)(iVar5 + 0x48);
          goto LAB_016cccec;
        }
      }
      goto LAB_016cbc98;
    }
    if (*(char *)((int)param_2 + 9) == '\x01') {
      *param_1 = 0x8000001f;
      return;
    }
  }
  *param_1 = 0x8000002d;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
LAB_016cccec:
  iVar29 = iVar8 + 0x1bc;
  uVar2 = *(ushort *)(iVar8 + 0x242);
  uVar11 = 0xffffffff;
  iVar27 = (uint)uVar2 * 0xc;
  do {
    if (iVar27 == 0) {
      uVar11 = (uint)uVar2;
      goto LAB_016ccd70;
    }
    pbVar26 = *(byte **)(iVar29 + 8);
    pbVar12 = pbVar26;
    if (pbVar32 < pbVar26) {
      pbVar12 = pbVar32;
    }
    iVar14 = FUN_016dd50a(uVar13,*(undefined4 *)(iVar29 + 4),pbVar12);
    if (iVar14 == 0) {
      iVar14 = (int)pbVar32 - (int)pbVar26;
    }
    iVar27 = iVar27 + -0xc;
    uVar11 = uVar11 + 1;
    iVar29 = iVar29 + 0xc;
  } while ((char)((0 < iVar14) - (iVar14 < 0)) == '\x01');
  if (0 < iVar14 == iVar14 < 0) {
LAB_016ccb98:
    *param_1 = 0x80000006;
    return;
  }
LAB_016ccd70:
  if (iVar5 == 0) goto LAB_016ccd88;
  iVar5 = iVar5 + -1;
  iVar8 = *(int *)(iVar8 + uVar11 * 4 + 0x248);
  goto LAB_016cccec;
  while (local_60 != local_64) {
LAB_016ccae0:
    local_48 = &DAT_8000001d;
    local_44 = (byte *)CONCAT31(local_44._1_3_,0x18);
    FUN_016c64c0(&local_c0,&local_68,&local_48);
    uVar4 = local_a0;
    pbVar3 = local_a4;
    pbVar9 = local_a8;
    pbVar28 = local_b0;
    pbVar15 = local_b4;
    pbVar16 = local_b8;
    pbVar26 = local_bc;
    pbVar12 = local_c0;
    local_98 = local_9f;
    local_94 = (byte *)CONCAT13(local_94._3_1_,uStack_9b);
    if (local_c0 == (byte *)0x2 && local_bc == (byte *)0x0) {
      pbStack_74 = (byte *)(uint)uStack_9b;
LAB_016ccdb8:
      uStack_78._3_1_ = (undefined1)((uint)local_98 >> 0x18);
      param_1[7] = CONCAT31(pbStack_74._0_3_,uStack_78._3_1_);
      *(byte **)((int)param_1 + 0x19) = local_98;
      *param_1 = pbVar16;
      param_1[1] = pbVar15;
      param_1[2] = pbVar28;
      param_1[4] = pbVar9;
      param_1[5] = pbVar3;
      param_1[3] = local_ac;
      *(undefined1 *)(param_1 + 6) = uVar4;
      return;
    }
    if ((local_ac == pbVar32) && (iVar5 = thunk_FUN_016dd50a(local_b0,uVar13,pbVar32), iVar5 == 0))
    {
      pbStack_74 = (byte *)((uint)local_94 & 0xffffff);
      local_ac = pbVar32;
      if (pbVar12 == (byte *)0x3 && pbVar26 == (byte *)0x0) goto LAB_016ccdb8;
      goto LAB_016ccb98;
    }
  }
LAB_016ccd88:
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0x8000002d;
  return;
}

