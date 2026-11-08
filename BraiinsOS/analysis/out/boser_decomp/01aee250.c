// FUN_01aee250 @ 01aee250 size=4008 calls_out=13 calls_in=1
// strings: assertion failed: !self.only_contains_attribute_certs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01aee250(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5
                 ,int param_6,undefined4 param_7,undefined4 param_8,undefined1 *param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,uint param_15,uint param_16)

{
  byte *pbVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 **ppuVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  undefined4 uVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  int iVar28;
  uint *puVar29;
  uint *puVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 *puVar33;
  int *piVar34;
  int *piVar35;
  int *piVar36;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint *extraout_r12_02;
  uint *extraout_r12_03;
  uint *extraout_r12_04;
  uint *extraout_r12_05;
  uint *puVar37;
  bool bVar38;
  uint *local_1d0;
  uint *local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  uint *local_1bc;
  uint *local_1b4;
  uint *local_1b0;
  uint *local_1ac;
  uint *local_1a8;
  uint *local_1a4;
  uint *local_1a0;
  uint *local_19c;
  uint *local_198;
  uint *local_194;
  uint *local_190;
  uint *local_18c;
  uint *local_188;
  uint *local_184;
  uint *local_17c;
  uint *local_178;
  uint *local_168;
  uint *local_164;
  uint *local_160;
  uint *local_154;
  uint *local_150;
  uint *local_148;
  int local_11c;
  int local_118 [8];
  uint *local_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint *puStack_ec;
  uint *puStack_e8;
  uint *local_e0;
  uint *local_dc;
  uint *local_d8;
  uint *local_d0;
  uint *local_cc;
  uint *local_c8;
  int local_c0 [8];
  undefined1 *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  undefined4 local_8c;
  uint *local_88;
  uint *puStack_84;
  undefined1 local_80;
  undefined4 uStack_7f;
  undefined3 uStack_7b;
  uint *local_74;
  uint *local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 local_64;
  undefined2 uStack_63;
  undefined1 uStack_61;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  undefined1 *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  if ((*(int *)(param_3 + 0x30) != param_6) ||
     (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(param_3 + 0x2c),param_5), iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533423,0x44,&DAT_01d30508);
  }
  if ((param_4 == 0) || ((*(byte *)(param_2 + 2) & 1) != 0)) {
    puVar8 = (undefined4 *)((uint)&local_a0 | 4);
    iVar7 = param_2[1];
    piVar34 = (int *)*param_2;
    piVar36 = piVar34;
LAB_01aee2fc:
    piVar35 = piVar36;
    if (piVar35 != piVar34 + iVar7) {
      piVar36 = piVar35 + 1;
      iVar28 = *piVar35;
      iVar9 = 0x10;
      iVar23 = *(int *)(iVar28 + 8);
      if (iVar23 == -0x80000000) {
        iVar9 = 0x2c;
      }
      if (*(int *)(iVar28 + iVar9) == *(int *)(param_3 + 0x30)) {
        iVar9 = 0xc;
        if (iVar23 == -0x80000000) {
          iVar9 = 0x28;
        }
        iVar9 = thunk_FUN_01bed842(*(undefined4 *)(iVar28 + iVar9),*(undefined4 *)(param_3 + 0x2c));
        if (iVar9 == 0) {
          if (iVar23 == -0x80000000) {
            iVar9 = *(int *)(iVar28 + 0x38);
            if (iVar9 != 0) {
              puVar10 = (undefined4 *)(iVar28 + 0x3c);
              goto LAB_01aee380;
            }
          }
          else if (*(int *)(iVar28 + 0x38) != -0x80000000) {
            iVar9 = *(int *)(iVar28 + 0x3c);
            puVar10 = (undefined4 *)(iVar28 + 0x40);
LAB_01aee380:
            FUN_01af6b6c(&local_a0,iVar9,*puVar10);
            if (local_a0 == (undefined1 *)0x8000002d) {
              if (((uint)local_8c & 0x1000000) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec("assertion failed: !self.only_contains_attribute_certs",0x35,
                             &DAT_01d30648);
              }
              bVar38 = (param_4 == 0 & local_8c._1_1_) == 0;
              bVar6 = local_8c._1_1_;
              if (bVar38) {
                bVar6 = (byte)local_8c;
              }
              if (!bVar38 || (bVar6 & param_4 != 0) != 0) {
                piVar36 = piVar35 + 1;
                goto LAB_01aee2fc;
              }
              puVar24 = *(uint **)(param_3 + 0x74);
              if (puVar24 == (uint *)0x0) goto LAB_01aeee28;
              puVar11 = *(uint **)(param_3 + 0x78);
              FUN_01af72b0(&local_a0,local_9c,local_98);
              if ((local_a0 == (undefined1 *)0x8000002d) && (local_9c != (uint *)0x0)) {
                if (local_98 != (uint *)0x0) {
                  local_e0 = local_98;
                  local_dc = local_94;
                  local_d8 = local_90;
                  local_154 = (uint *)0x0;
                  puVar25 = local_90;
                  puVar21 = extraout_r12;
LAB_01aee440:
                  if (local_154 != puVar11) {
                    local_68 = (undefined1 *)0x8000001d;
                    local_64 = 7;
                    puVar30 = puVar11;
                    if (local_154 < puVar11) {
                      pbVar1 = (byte *)((int)puVar24 + (int)local_154);
                      puVar12 = (uint *)((int)local_154 + 1);
                      puVar13 = puVar12;
                      if (((~*pbVar1 & 0x1f) == 0) || (puVar11 <= puVar12))
                      goto switchD_01aeea64_default;
                      puVar19 = (uint *)(int)(char)*(byte *)((int)puVar24 + (int)puVar12);
                      puVar13 = (uint *)((int)local_154 + 2);
                      puVar25 = (uint *)(uint)*(byte *)((int)puVar24 + (int)puVar12);
                      if ((int)puVar19 < 0) {
                        switch(puVar25) {
                        case (uint *)0x81:
                          puVar25 = &switchD_01aeea64::switchdataD_01aeea68;
                          if (puVar13 < puVar11) {
                            pbVar16 = (byte *)((int)puVar24 + (int)puVar13);
                            puVar19 = (uint *)(int)(char)*pbVar16;
                            puVar13 = (uint *)((int)local_154 + 3);
                            if ((uint *)0x7fffffff < puVar19) {
                              puVar25 = (uint *)(uint)*pbVar16;
                              goto LAB_01aee4a4;
                            }
                          }
                          break;
                        case (uint *)0x82:
                          puVar25 = &switchD_01aeea64::switchdataD_01aeea68;
                          if (puVar13 < puVar11) {
                            if ((uint *)((int)local_154 + 3) < puVar11) {
                              pbVar16 = (byte *)((int)puVar24 + (int)puVar13);
                              puVar21 = (uint *)(uint)*pbVar16;
                              puVar13 = local_154 + 1;
                              puVar25 = puVar24;
                              if (puVar21 != (uint *)0x0) {
                                puVar25 = (uint *)(uint)CONCAT11(*pbVar16,*(byte *)((int)puVar24 +
                                                                                   (int)local_154 +
                                                                                   3));
LAB_01aeeb94:
                                puVar19 = (uint *)0xffff;
                                puVar30 = puVar11;
                                if (puVar25 < (uint *)0xffff) goto LAB_01aee4a4;
                              }
                            }
                            else {
LAB_01aeebec:
                              puVar13 = (uint *)((int)local_154 + 3);
                              puVar25 = &switchD_01aeea64::switchdataD_01aeea68;
                            }
                          }
                          break;
                        case (uint *)0x83:
                          puVar25 = &switchD_01aeea64::switchdataD_01aeea68;
                          if (puVar13 < puVar11) {
                            if (puVar11 <= (uint *)((int)local_154 + 3)) goto LAB_01aeebec;
                            puVar21 = local_154 + 1;
                            if (puVar21 < puVar11) {
                              pbVar16 = (byte *)((int)puVar24 + (int)puVar13);
                              puVar13 = (uint *)((int)local_154 + 5);
                              puVar25 = (uint *)0x0;
                              if (*pbVar16 != 0) {
                                puVar25 = (uint *)((uint)*(byte *)((int)puVar24 + (int)local_154 + 3
                                                                  ) << 8 | (uint)*pbVar16 << 0x10 |
                                                  (uint)*(byte *)((int)puVar24 + (int)puVar21));
                                goto LAB_01aeeb94;
                              }
                            }
                            else {
                              puVar13 = puVar21;
                            }
                          }
                          break;
                        case (uint *)0x84:
                          puVar25 = &switchD_01aeea64::switchdataD_01aeea68;
                          if (puVar13 < puVar11) {
                            if (puVar11 <= (uint *)((int)local_154 + 3)) goto LAB_01aeebec;
                            puVar25 = local_154 + 1;
                            if (puVar25 < puVar11) {
                              puVar12 = (uint *)((int)local_154 + 5);
                              if (puVar12 < puVar11) {
                                puVar21 = (uint *)(uint)*(byte *)((int)puVar24 + (int)puVar13);
                                puVar13 = (uint *)((int)local_154 + 6);
                                puVar30 = puVar24;
                                if (puVar21 != (uint *)0x0) {
                                  puVar25 = (uint *)((uint)*(byte *)((int)puVar24 +
                                                                    (int)local_154 + 3) << 0x10 |
                                                     (int)puVar21 << 0x18 |
                                                     (uint)*(byte *)((int)puVar24 + (int)puVar25) <<
                                                     8 | (uint)*(byte *)((int)puVar24 + (int)puVar12
                                                                        ));
                                  goto LAB_01aeeb94;
                                }
                              }
                              else {
                                puVar13 = puVar12;
                              }
                            }
                            else {
                              puVar13 = puVar25;
                            }
                          }
                        }
                        goto switchD_01aeea64_default;
                      }
LAB_01aee4a4:
                      local_154 = (uint *)((int)puVar25 + (int)puVar13);
                      puVar30 = puVar11;
                      if (CARRY4((uint)puVar25,(uint)puVar13)) goto switchD_01aeea64_default;
                      if (puVar11 < local_154) goto switchD_01aeea64_default;
                      if (*pbVar1 != 0x30) goto LAB_01aee818;
                      if (puVar25 != (uint *)0x0) {
                        puVar12 = (uint *)0x0;
                        puVar37 = (uint *)0x0;
                        puVar13 = (uint *)((int)puVar24 + (int)puVar13);
                        local_1b4 = (uint *)0x0;
                        local_148 = (uint *)0x0;
                        local_17c = (uint *)0x0;
                        local_194 = (uint *)0x0;
                        local_198 = (uint *)0x0;
                        local_19c = (uint *)0x0;
                        local_1a0 = (uint *)0x0;
                        local_190 = (uint *)0x0;
                        local_1a4 = (uint *)0x0;
                        local_1a8 = (uint *)0x0;
                        local_178 = (uint *)0x0;
                        local_1ac = (uint *)0x0;
                        local_1b0 = (uint *)0x0;
                        puVar14 = (uint *)0x0;
                        puVar26 = local_178;
LAB_01aee520:
                        local_178 = puVar26;
                        puVar20 = puVar21;
                        puVar29 = (uint *)(uint)*(byte *)((int)puVar13 + (int)local_148);
                        if ((~(uint)puVar29 & 0x1f) != 0) {
                          if (puVar25 <= (uint *)((int)local_148 + 1)) goto LAB_01aeed30;
                          puVar21 = (uint *)((int)local_148 + 2);
                          bVar6 = *(byte *)((int)puVar13 + (int)local_148 + 1);
                          puVar26 = (uint *)(uint)bVar6;
                          puVar27 = puVar26;
                          puVar30 = puVar29;
                          if ((uint)(int)(char)bVar6 < 0x80000000) {
LAB_01aee72c:
                            local_148 = (uint *)((int)puVar27 + (int)puVar21);
                            if ((CARRY4((uint)puVar27,(uint)puVar21)) || (puVar25 < local_148)) {
                              uVar17 = (uint)puVar20 & 0xffffff00;
                              local_178 = (uint *)((uint)puVar20 & 0xff);
                              puVar33 = (undefined1 *)0x80000000;
                              puVar30 = puVar19;
                              goto LAB_01aeed3c;
                            }
                            puVar21 = (uint *)((int)puVar13 + (int)puVar21);
                            if (puVar29 == (uint *)0x81) {
                              if (puVar37 == (uint *)0x0) {
                                FUN_01af38d8(&local_a0,puVar21,puVar27);
                                local_18c = local_98;
                                if (local_a0 == (undefined1 *)0x8000002d) {
                                  puVar30 = puVar21;
                                  puVar37 = local_9c;
                                  goto LAB_01aee7cc;
                                }
                                local_150 = puStack_84;
                                local_160 = local_90;
                                local_164 = local_8c;
                                local_168 = local_88;
                                puVar19 = local_94;
                                local_1c4 = local_98;
                                puVar33 = local_a0;
                                local_1c0 = local_9c;
                              }
                              else {
                                puVar33 = &DAT_80000009;
                                local_160 = local_1c8;
                                local_164 = local_1cc;
                                local_168 = local_1d0;
                                puVar19 = local_1bc;
                              }
                              uVar17 = (uint)local_1c0 & 0xffffff00;
                              local_178 = (uint *)((uint)local_1c0 & 0xff);
                              puVar30 = local_1c4;
                              local_1d0 = local_168;
                              local_1cc = local_164;
                              local_1c8 = local_160;
                              local_1bc = puVar19;
                              goto LAB_01aeed3c;
                            }
                            puVar20 = puVar21;
                            puVar3 = puVar12;
                            puVar4 = puVar27;
                            puVar5 = local_184;
                            puVar14 = local_17c;
                            if (puVar29 != (uint *)0xa2) {
                              puVar20 = local_17c;
                              puVar3 = puVar21;
                              puVar4 = local_188;
                              puVar5 = puVar27;
                              puVar14 = puVar12;
                              if (puVar29 != (uint *)&DAT_000000a0) {
                                local_178 = (uint *)0x0;
                                puVar20 = puVar19;
                                puVar19 = puVar27;
                                goto LAB_01aeed30;
                              }
                            }
                            local_184 = puVar5;
                            local_188 = puVar4;
                            puVar12 = puVar3;
                            local_17c = puVar20;
                            if (puVar14 != (uint *)0x0) {
                              puVar33 = &DAT_80000009;
                              local_178 = (uint *)0x0;
                              puVar19 = puVar27;
                              goto LAB_01aeed38;
                            }
LAB_01aee7cc:
                            if (local_148 == puVar25) {
                              puVar19 = puVar27;
                              puVar25 = puVar37;
                              goto LAB_01aeebb0;
                            }
                            puVar14 = puVar29;
                            puVar20 = puVar27;
                            puVar19 = puVar27;
                            local_178 = puVar29;
                            if (puVar25 <= local_148) goto LAB_01aeed30;
                            goto LAB_01aee520;
                          }
                          switch(puVar26) {
                          case (uint *)0x81:
                            if (puVar21 < puVar25) {
                              if (0x7fffffff <
                                  (uint)(int)(char)*(byte *)((int)puVar13 + (int)puVar21)) {
                                puVar27 = (uint *)(uint)*(byte *)((int)puVar13 + (int)puVar21);
                                puVar21 = (uint *)((int)local_148 + 3);
                                local_190 = puVar27;
                                goto LAB_01aee72c;
                              }
                              break;
                            }
                            local_178 = local_190;
                            goto LAB_01aeed30;
                          case (uint *)0x82:
                            if (puVar25 <= puVar21) {
                              local_178 = local_194;
                              goto LAB_01aeed30;
                            }
                            if (puVar25 <= (uint *)((int)local_148 + 3)) {
                              local_178 = local_198;
                              goto LAB_01aeed30;
                            }
                            local_194 = (uint *)(uint)*(byte *)((int)puVar13 + (int)puVar21);
                            if (local_194 != (uint *)0x0) {
                              bVar6 = *(byte *)((int)puVar13 + (int)local_148 + 3);
                              local_198 = (uint *)(uint)bVar6;
                              puVar27 = (uint *)(uint)CONCAT11(*(byte *)((int)puVar13 + (int)puVar21
                                                                        ),bVar6);
                              puVar21 = local_148 + 1;
LAB_01aee720:
                              if (puVar27 < (uint *)0xffff) goto LAB_01aee72c;
                            }
                            break;
                          case (uint *)0x83:
                            if (puVar25 <= puVar21) {
                              local_178 = local_19c;
                              goto LAB_01aeed30;
                            }
                            if (puVar25 <= (uint *)((int)local_148 + 3)) {
                              local_178 = local_1a0;
                              goto LAB_01aeed30;
                            }
                            if (puVar25 <= local_148 + 1) {
                              local_178 = local_1a4;
                              goto LAB_01aeed30;
                            }
                            local_19c = (uint *)(uint)*(byte *)((int)puVar13 + (int)puVar21);
                            if (local_19c != (uint *)0x0) {
                              local_1a0 = (uint *)(uint)*(byte *)((int)puVar13 + (int)local_148 + 3)
                              ;
                              local_1a4 = (uint *)(uint)*(byte *)((int)puVar13 +
                                                                 (int)(local_148 + 1));
                              puVar27 = (uint *)((int)local_1a0 << 8 | (int)local_19c << 0x10 |
                                                (uint)local_1a4);
                              puVar21 = (uint *)((int)local_148 + 5);
                              puVar30 = local_1a0;
                              goto LAB_01aee720;
                            }
                            break;
                          case (uint *)0x84:
                            if (puVar25 <= puVar21) {
                              local_178 = local_1a8;
                              goto LAB_01aeed30;
                            }
                            if (puVar25 <= (uint *)((int)local_148 + 3)) {
                              local_178 = local_1ac;
                              goto LAB_01aeed30;
                            }
                            if (puVar25 <= local_148 + 1) {
                              local_178 = local_1b0;
                              goto LAB_01aeed30;
                            }
                            if (puVar25 <= (uint *)((int)local_148 + 5)) {
                              local_178 = local_1b4;
                              goto LAB_01aeed30;
                            }
                            local_1a8 = (uint *)(uint)*(byte *)((int)puVar13 + (int)puVar21);
                            if (local_1a8 != (uint *)0x0) {
                              local_1ac = (uint *)(uint)*(byte *)((int)puVar13 + (int)local_148 + 3)
                              ;
                              local_1b0 = (uint *)(uint)*(byte *)((int)puVar13 +
                                                                 (int)(local_148 + 1));
                              local_1b4 = (uint *)(uint)*(byte *)((int)puVar13 + (int)local_148 + 5)
                              ;
                              puVar27 = (uint *)((int)local_1ac << 0x10 | (int)local_1a8 << 0x18 |
                                                 (int)local_1b0 << 8 | (uint)local_1b4);
                              puVar21 = (uint *)((int)local_148 + 6);
                              puVar30 = puVar13;
                              goto LAB_01aee720;
                            }
                          }
                        }
                        local_178 = puVar14;
                        goto LAB_01aeed30;
                      }
                      puVar12 = (uint *)0x0;
                      local_17c = (uint *)0x0;
                      puVar19 = puVar25;
                      puVar25 = (uint *)0x0;
LAB_01aeebb0:
                      puVar33 = (undefined1 *)0x80000012;
                      local_178 = (uint *)0x0;
                      uVar17 = 0;
                      if (puVar12 != (uint *)0x0 || local_17c != (uint *)0x0) {
                        ppuVar15 = &local_68;
                        puVar33 = (undefined1 *)0x8000002d;
                        local_160 = local_18c;
                        local_168 = local_188;
                        puVar30 = local_184;
                        local_164 = local_17c;
                        goto LAB_01aee824;
                      }
                      goto LAB_01aeed3c;
                    }
                    puVar13 = local_154;
switchD_01aeea64_default:
                    local_44 = (uint *)((uint)local_44 & 0xffffff00);
                    *(undefined1 *)((undefined2 *)((uint)&local_48 | 5) + 1) = 0;
                    *(undefined2 *)((uint)&local_48 | 5) = 0;
                    local_154 = puVar13;
                    local_40 = puVar25;
LAB_01aee818:
                    local_48 = (undefined1 *)0x80000000;
                    puVar12 = (uint *)CONCAT13(uStack_61,CONCAT21(uStack_63,7));
                    puVar33 = (undefined1 *)0x8000001d;
                    ppuVar15 = &local_48;
                    goto LAB_01aee824;
                  }
                }
                goto LAB_01aee2fc;
              }
              if (local_a0 == (undefined1 *)0x8000002d) goto LAB_01aee2fc;
            }
            FUN_01aeb5f4(&local_a0);
            goto LAB_01aee2fc;
          }
LAB_01aeee28:
          iVar7 = *piVar35;
          if (*(int *)(iVar7 + 8) == -0x80000000) {
            local_48 = *(undefined1 **)(iVar7 + 0x10);
            local_44 = *(uint **)(iVar7 + 0x14);
            local_40 = *(uint **)(iVar7 + 0x18);
            local_3c = *(uint **)(iVar7 + 0x1c);
            local_38 = *(uint **)(iVar7 + 0x20);
            local_34 = *(uint **)(iVar7 + 0x24);
          }
          else {
            local_48 = *(undefined1 **)(iVar7 + 0x18);
            local_44 = *(uint **)(iVar7 + 0x1c);
            local_38 = *(uint **)(iVar7 + 0x30);
            local_34 = *(uint **)(iVar7 + 0x34);
            local_3c = *(uint **)(iVar7 + 0x28);
            local_40 = *(uint **)(iVar7 + 0x24);
          }
          FUN_01aee0f8(local_c0,param_11,param_12,param_7,param_8,&local_48,param_13);
          if (local_c0[0] == -0x7fffffd3) {
            local_118[0] = -0x7fffffd3;
          }
          else {
            FUN_01aef23c(local_118,local_c0);
            if (local_118[0] != -0x7fffffd3) {
              FUN_01aef23c(&local_a0,local_118);
              if (local_a0 != (undefined1 *)0x8000002d) {
                puVar8 = (undefined4 *)((uint)&local_a0 | 4);
                uVar22 = puVar8[1];
                uVar31 = puVar8[2];
                param_1[1] = *puVar8;
                param_1[2] = uVar22;
                param_1[3] = uVar31;
                uVar22 = puVar8[4];
                uVar31 = puVar8[5];
                uVar32 = puVar8[6];
                param_1[4] = puVar8[3];
                param_1[5] = uVar22;
                param_1[6] = uVar31;
                param_1[7] = uVar32;
                goto LAB_01aeee00;
              }
            }
          }
          if (*(char *)((int)param_2 + 10) == '\0') {
            puVar24 = (uint *)*piVar35;
            if (puVar24[2] == 0x80000000) {
              puVar24 = puVar24 + 0x10;
            }
            uVar17 = *puVar24;
            uVar18 = puVar24[1];
            if (uVar18 < param_16 || param_16 - uVar18 < (uint)(uVar17 <= param_15)) {
              *param_1 = 0x80000007;
              param_1[2] = param_15;
              param_1[3] = param_16;
              param_1[4] = uVar17;
              param_1[5] = uVar18;
              return;
            }
          }
          if (param_9 != (undefined1 *)0x0) {
            local_40 = (uint *)0x0;
            local_48 = param_9;
            local_44 = (uint *)param_10;
            FUN_01af347c(&local_a0,&local_48,3);
            if (local_a0 != (undefined1 *)0x8000002d) {
              local_f8 = local_94;
              puStack_f4 = local_90;
              puStack_f0 = local_8c;
              puStack_ec = local_88;
              puStack_e8 = puStack_84;
              puVar33 = local_a0;
LAB_01aef180:
              param_1[1] = local_9c;
              param_1[2] = local_98;
              *param_1 = puVar33;
              param_1[3] = local_f8;
              param_1[4] = puStack_f4;
              param_1[5] = puStack_f0;
              param_1[6] = puStack_ec;
              param_1[7] = puStack_e8;
              return;
            }
            bVar6 = FUN_01af38d8(&local_a0);
            if (local_a0 != (undefined1 *)0x8000002d) {
              local_f8 = local_94;
              puStack_f4 = local_90;
              puStack_f0 = local_8c;
              puStack_ec = local_88;
              puStack_e8 = puStack_84;
              puVar33 = local_a0;
              goto LAB_01aef180;
            }
            puVar33 = &DAT_80000010;
            if (local_98 != (uint *)0x0) {
              bVar6 = (byte)*local_9c;
            }
            if (local_98 == (uint *)0x0 || (bVar6 & 2) == 0) goto LAB_01aef180;
          }
          iVar7 = *piVar35;
          puVar24 = *(uint **)(param_3 + 0x10);
          uVar22 = *(undefined4 *)(param_3 + 0xc);
          if (*(int *)(iVar7 + 8) == -0x80000000) {
            local_48 = *(undefined1 **)(iVar7 + 0x30);
            local_44 = *(uint **)(iVar7 + 0x34);
            local_40 = (uint *)0x0;
            goto LAB_01aeefec;
          }
          iVar9 = *(int *)(iVar7 + 0x44);
          if (iVar9 == 0) goto LAB_01aef158;
          local_11c = *(int *)(iVar7 + 0x48);
          goto LAB_01aef098;
        }
      }
      goto LAB_01aee2fc;
    }
    if (*(char *)((int)param_2 + 9) == '\x01') {
      local_a0 = (undefined1 *)0x8000001f;
LAB_01aeee00:
      *param_1 = local_a0;
      return;
    }
  }
  *param_1 = 0x8000002d;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
LAB_01aeed30:
  puVar33 = (undefined1 *)0x80000000;
  puVar30 = puVar20;
LAB_01aeed38:
  uVar17 = 0;
LAB_01aeed3c:
  puVar12 = (uint *)(uVar17 | (uint)local_178);
  ppuVar15 = &local_68;
  puVar25 = puVar19;
LAB_01aee824:
  FUN_01aeb5f4(ppuVar15);
  local_4c = local_150;
  local_50 = local_168;
  local_54 = local_164;
  local_58 = local_160;
  local_64 = SUB41(puVar12,0);
  uStack_63 = (undefined2)((uint)puVar12 >> 8);
  uStack_61 = (undefined1)((uint)puVar12 >> 0x18);
  local_68 = puVar33;
  local_60 = puVar30;
  local_5c = puVar25;
  if (puVar33 != (undefined1 *)0x8000002d) {
    FUN_01aeb5f4(&local_68);
    goto LAB_01aee2fc;
  }
  if (local_164 != (uint *)0x0 || puVar25 != (uint *)0x0) goto LAB_01aee2fc;
  if (puVar12 == (uint *)0x0) {
LAB_01aeedbc:
    local_48 = (undefined1 *)0x8000002d;
    local_44 = (uint *)0x0;
    goto LAB_01aee2fc;
  }
  local_6c = 0;
  local_74 = puVar12;
  local_70 = puVar30;
  FUN_01af09a0(&local_a0,&local_74);
  if (local_a0 == (undefined1 *)0x8000002d) {
    local_40 = (uint *)*puVar8;
    local_3c = (uint *)puVar8[1];
    local_38 = (uint *)puVar8[2];
    bVar38 = true;
    local_48 = (undefined1 *)0x8000002d;
    local_44 = (uint *)&DAT_00000001;
  }
  else {
    if (local_a0 == (undefined1 *)0x8000002e) goto LAB_01aeedbc;
    local_48 = local_a0;
    local_44 = local_9c;
    local_40 = local_98;
    local_3c = local_94;
    local_38 = local_90;
    local_34 = local_8c;
    puStack_30 = local_88;
    puStack_2c = puStack_84;
    bVar38 = local_a0 == (undefined1 *)0x8000002d;
    puVar25 = local_88;
  }
  if (!bVar38 || local_44 == (uint *)0x0) {
    if (!bVar38) {
      FUN_01aeb5f4(&local_48);
    }
    goto LAB_01aee2fc;
  }
  if (local_40 == (uint *)0x0) goto LAB_01aee2fc;
  local_d0 = local_40;
  local_cc = local_3c;
  local_c8 = local_38;
  puVar21 = extraout_r12_00;
LAB_01aee92c:
  if (local_d8 != local_dc) {
    FUN_01af61c4(&local_48,&local_e0);
    puVar13 = local_3c;
    puVar30 = local_40;
    puVar21 = extraout_r12_01;
    if (local_48 == (undefined1 *)0x8000002e) goto LAB_01aee440;
    local_90 = local_38;
    local_8c = local_34;
    local_88 = puStack_30;
    puStack_84 = puStack_2c;
    local_94 = local_3c;
    local_98 = local_40;
    local_9c = local_44;
    local_a0 = local_48;
    puVar25 = local_34;
    if (local_48 == (undefined1 *)0x8000002d) {
      puVar21 = local_44;
      if (((uint)local_44 & 0xff) == 3) {
        while (local_c8 != local_cc) {
          FUN_01af61c4(&local_48,&local_d0);
          puVar21 = extraout_r12_02;
          if (local_48 == (undefined1 *)0x8000002e) break;
          local_90 = local_38;
          local_8c = local_34;
          local_88 = puStack_30;
          puStack_84 = puStack_2c;
          local_94 = local_3c;
          local_98 = local_40;
          local_9c = local_44;
          local_a0 = local_48;
          puVar25 = puStack_2c;
          if (local_48 == (undefined1 *)0x8000002d) {
            puVar21 = local_3c;
            if (((uint)local_44 & 0xff) == 3 && puVar13 == local_3c) {
              iVar9 = thunk_FUN_01bed842(puVar30,local_40,puVar13);
              puVar21 = extraout_r12_03;
              if (iVar9 == 0) goto LAB_01aeee28;
            }
          }
          else {
            FUN_01aeb5f4(&local_a0);
            puVar21 = extraout_r12_04;
          }
        }
      }
    }
    else {
      FUN_01aeb5f4(&local_a0);
      puVar21 = extraout_r12_05;
    }
    goto LAB_01aee92c;
  }
  goto LAB_01aee440;
LAB_01aef098:
  iVar23 = iVar9 + 0x1bc;
  uVar2 = *(ushort *)(iVar9 + 0x242);
  uVar17 = 0xffffffff;
  iVar7 = (uint)uVar2 * 0xc;
  do {
    if (iVar7 == 0) {
      uVar17 = (uint)uVar2;
      goto LAB_01aef11c;
    }
    puVar25 = *(uint **)(iVar23 + 8);
    puVar11 = puVar25;
    if (puVar24 < puVar25) {
      puVar11 = puVar24;
    }
    iVar28 = FUN_01bed842(uVar22,*(undefined4 *)(iVar23 + 4),puVar11);
    if (iVar28 == 0) {
      iVar28 = (int)puVar24 - (int)puVar25;
    }
    iVar7 = iVar7 + -0xc;
    uVar17 = uVar17 + 1;
    iVar23 = iVar23 + 0xc;
  } while ((char)((0 < iVar28) - (iVar28 < 0)) == '\x01');
  if (0 < iVar28 == iVar28 < 0) goto LAB_01aef03c;
LAB_01aef11c:
  if (local_11c == 0) goto LAB_01aef158;
  local_11c = local_11c + -1;
  iVar9 = *(int *)(iVar9 + uVar17 * 4 + 0x248);
  goto LAB_01aef098;
LAB_01aef158:
  *(undefined1 *)(param_1 + 1) = 1;
  uVar22 = 0x8000002d;
  goto LAB_01aef168;
  while( true ) {
    if (local_a0 == (undefined1 *)0x2 && local_9c == (uint *)0x0) {
      local_64 = (undefined1)uStack_7b;
      uStack_63 = (undefined2)((uint3)uStack_7b >> 8);
      local_68 = uStack_7f;
      param_1[7] = CONCAT22(uStack_63,CONCAT11(local_64,uStack_7f._3_1_));
      *(undefined1 **)((int)param_1 + 0x19) = uStack_7f;
      param_1[4] = local_88;
      param_1[5] = puStack_84;
      *param_1 = local_98;
      param_1[1] = local_94;
      param_1[2] = local_90;
      param_1[3] = local_8c;
      *(undefined1 *)(param_1 + 6) = local_80;
      return;
    }
    if ((local_8c == puVar24) && (iVar7 = thunk_FUN_01bed842(local_90,uVar22,puVar24), iVar7 == 0))
    break;
LAB_01aeefec:
    FUN_01af5170(&local_a0,&local_48);
    if (local_a0 == (undefined1 *)0x3 && local_9c == (uint *)0x0) goto LAB_01aef158;
  }
LAB_01aef03c:
  uVar22 = 0x80000006;
LAB_01aef168:
  *param_1 = uVar22;
  return;
}

