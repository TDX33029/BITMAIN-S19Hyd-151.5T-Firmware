// FUN_01892120 @ 01892120 size=3108 calls_out=30 calls_in=1
// strings: PrivateModulusLenNotMultipleOf512Bits | InvalidEncoding | InconsistentComponents | InvalidEncoding | InconsistentComponents | InconsistentComponents

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01892120(undefined8 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 uVar28;
  byte *pbVar29;
  int iVar30;
  int iVar31;
  byte *pbVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined4 *local_128;
  undefined1 *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  undefined4 uStack_114;
  undefined4 *local_110;
  undefined4 local_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  undefined1 *local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined4 *local_f4;
  undefined4 *local_f0;
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 *local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  byte *local_40;
  int local_3c;
  byte *local_38;
  int local_34;
  byte **local_30;
  byte **local_2c;
  undefined4 *local_28;
  
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  pcVar8 = (char *)param_2[6];
  iVar9 = param_2[7];
  pcVar10 = (char *)param_2[8];
  iVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  pbVar29 = (byte *)*param_2;
  iVar30 = param_2[1];
  pbVar32 = (byte *)param_2[2];
  iVar31 = param_2[3];
  uVar25 = param_2[0xc];
  uVar28 = param_2[0xd];
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  iVar20 = iVar31;
  FUN_0189934c(&local_128,pbVar29,iVar30,pbVar32,iVar31,0x800,0x1000);
  puVar4 = local_11c;
  puVar3 = local_120;
  puVar2 = local_124;
  puVar16 = local_128;
  if (local_128 == (undefined4 *)0x0 && local_124 == (undefined1 *)0x0) goto LAB_01892288;
  local_58 = local_118;
  uStack_54 = uStack_114;
  puStack_50 = local_110;
  uStack_4c = local_10c;
  puStack_48 = puStack_108;
  uStack_44 = uStack_104;
  local_68._4_4_ = (undefined4 *)local_124;
  local_68._0_4_ = local_128;
  local_60._4_4_ = local_11c;
  local_60._0_4_ = local_120;
  if (iVar30 != 0) {
    local_11c = (undefined4 *)(uint)*pbVar29;
  }
  if (iVar30 != 0 && local_11c != (undefined4 *)0x0) {
    if (iVar31 != 0) {
      local_11c = (undefined4 *)(uint)*pbVar32;
    }
    local_40 = pbVar29;
    local_3c = iVar30;
    if (iVar31 != 0 && local_11c != (undefined4 *)0x0) {
      local_2c = &local_38;
      uVar26 = 0;
      local_30 = &local_40;
      local_128 = (undefined4 *)0x0;
      local_38 = pbVar32;
      local_34 = iVar31;
      FUN_0189b808(&local_128,&LAB_0189b984,&LAB_0189b994,&local_30);
      local_a0._4_4_ = local_128;
      if ((int)local_128 < 0) {
LAB_018922ec:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar26,local_a0._4_4_);
      }
      if (local_128 == (undefined4 *)0x0) {
        local_a8._4_4_ = &DAT_00000001;
        local_a8._0_4_ = (undefined4 *)0x0;
      }
      else {
        uVar26 = 1;
        local_a8._4_4_ = (undefined1 *)FUN_01298504(local_128,1);
        local_a8._0_4_ = local_a0._4_4_;
        if (local_a8._4_4_ == (undefined1 *)0x0) goto LAB_018922ec;
      }
      local_a0._0_4_ = (undefined4 *)0x0;
      FUN_0189b808(&local_a8,FUN_0189b8d8,FUN_0189b914,&local_30);
      local_128 = (undefined4 *)local_a8;
      local_124 = local_a8._4_4_;
      local_120 = (undefined4 *)local_a0;
      local_11c = local_a0._4_4_;
      local_28 = (undefined4 *)local_a0;
      if (local_a0._4_4_ != (undefined4 *)local_a0) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&local_11c,&local_28,0,iVar20,&DAT_01d21f5c);
      }
      local_f8 = (undefined4 *)local_a8;
      local_f4 = (undefined4 *)local_a8._4_4_;
      local_f0 = (undefined4 *)local_a0;
      if (((undefined4 *)local_a0 < (undefined4 *)local_a8) &&
         (iVar30 = FUN_0189452c(&local_f8,(undefined4 *)local_a0,1,1), iVar30 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      puVar5 = puStack_50;
      local_118 = local_58;
      uStack_114 = uStack_54;
      local_110 = puStack_50;
      local_10c = uStack_4c;
      puStack_108 = puStack_48;
      uStack_104 = uStack_44;
      local_100 = (undefined1 *)local_f4;
      local_f4 = puVar4;
      local_f8 = puVar3;
      local_fc = local_f0;
      local_f0 = local_118;
      uStack_ec = uStack_114;
      puStack_e8 = local_110;
      local_90._0_4_ = local_118;
      local_90._4_4_ = uStack_114;
      local_88._0_4_ = local_110;
      local_88._4_4_ = local_10c;
      local_80 = puStack_108;
      uStack_7c = uStack_104;
      if ((iVar9 == 0) || (*pcVar8 != '\0')) {
        local_128 = puVar16;
        local_124 = puVar2;
        local_120 = puVar3;
        local_11c = puVar4;
        FUN_0189ba04(&local_68,iVar9 + 3U >> 2);
        uVar33 = FUN_0189b9a4(&local_68);
        iVar30 = (int)(uVar33 >> 0x20);
        puVar16 = (undefined4 *)uVar33;
        iVar9 = FUN_01895ca0(pcVar8,iVar9,puVar16,iVar30);
        if (iVar9 == 0) {
          if (0x100ffffffff < uVar33) {
            uVar6 = 8;
            pcVar8 = &DAT_005708a8;
            uVar34 = local_a8;
            goto LAB_01892518;
          }
          if (uVar33 < 0x400000000) goto LAB_01892480;
          iVar9 = FUN_01bd4fd4(puVar16,iVar30);
          uVar34 = CONCAT44(local_a8._4_4_,(undefined4 *)local_a8);
          if (iVar9 == 0) {
            iVar9 = FUN_01bd5070(puVar16,3,iVar30);
            uVar34 = CONCAT44(local_a8._4_4_,(undefined4 *)local_a8);
            if (iVar9 == 0) {
              uVar34 = FUN_01bcfa80(*puVar16,puVar16[1]);
              puVar17 = (undefined4 *)FUN_01895f10(puVar16,iVar30);
              local_a0._0_4_ = puVar17;
              if ((undefined4 *)((int)puVar5 - ((uint)puVar5 >> 1)) == puVar17) {
                if (((uint)puVar17 & 0x1ff) == 0) {
                  local_58 = puVar17;
                  local_a8 = uVar34;
                  local_60 = uVar34;
                  local_68 = uVar33;
                  FUN_0189ba04(&local_90,iVar30);
                  uVar35 = FUN_0189b9a4(&local_90);
                  uVar22 = (undefined4)((ulonglong)uVar35 >> 0x20);
                  uVar26 = (undefined4)uVar35;
                  FUN_0188f728(&local_68,uVar26,uVar22);
                  iVar9 = iVar30 + 1;
                  while (iVar9 = iVar9 + -1, iVar9 != 0) {
                    FUN_01895e88(uVar26,uVar22,puVar16,iVar30);
                  }
                  iVar9 = 5;
                  do {
                    FUN_01bda5e0(uVar26,uVar26,uVar26,puVar16,&local_60,uVar22);
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                  local_d0 = puVar17;
                  local_cc = uVar35;
                  local_d8 = uVar34;
                  local_e0 = uVar33;
                  if ((iVar11 == 0) || (*pcVar10 != '\0')) {
                    FUN_0189ba04(&local_68,iVar11 + 3U >> 2);
                    uVar34 = FUN_0189b9a4(&local_68);
                    iVar30 = (int)(uVar34 >> 0x20);
                    puVar18 = (undefined4 *)uVar34;
                    iVar9 = FUN_01895ca0(pcVar10,iVar11,puVar18,iVar30);
                    if (iVar9 != 0) {
LAB_018926e8:
                      uVar6 = 0xf;
                      pcVar8 = &DAT_0051d665;
                      if (iVar30 != 0) goto LAB_018927a4;
                      goto LAB_018927ac;
                    }
                    if (0x100ffffffff < uVar34) {
                      uVar6 = 8;
                      pcVar8 = &DAT_005708a8;
                      goto LAB_018927a4;
                    }
                    if (uVar34 < 0x400000000) goto LAB_018926e8;
                    iVar9 = FUN_01bd4fd4(puVar18,iVar30);
                    if (iVar9 != 0) {
                      uVar6 = 0x10;
                      pcVar8 = &DAT_00569538;
LAB_018927a4:
                      thunk_FUN_01be4678(puVar18);
                      goto LAB_018927ac;
                    }
                    iVar9 = FUN_01bd5070(puVar18,3,iVar30);
                    if (iVar9 != 0) {
                      uVar6 = 0xf;
                      pcVar8 = &DAT_0051d665;
                      goto LAB_018927a4;
                    }
                    uVar36 = FUN_01bcfa80(*puVar18,puVar18[1]);
                    puVar19 = (undefined4 *)FUN_01895f10(puVar18,iVar30);
                    local_a0._0_4_ = puVar19;
                    local_a8 = uVar36;
                    if (puVar17 != puVar19) {
                      thunk_FUN_01be4678(puVar18);
                      uVar6 = 0x16;
                      pcVar8 = "InconsistentComponents";
                      goto LAB_018927ac;
                    }
                    local_58 = puVar17;
                    local_68 = uVar34;
                    local_60 = uVar36;
                    FUN_0189ba04(&local_90,iVar30);
                    uVar35 = FUN_0189b9a4(&local_90);
                    uVar23 = (undefined4)((ulonglong)uVar35 >> 0x20);
                    uVar22 = (undefined4)uVar35;
                    FUN_0188f728(&local_68,uVar22,uVar23);
                    iVar9 = iVar30 + 1;
                    while (iVar9 = iVar9 + -1, iVar9 != 0) {
                      FUN_01895e88(uVar22,uVar23,puVar18,iVar30);
                    }
                    iVar9 = 5;
                    do {
                      FUN_01bda5e0(uVar22,uVar22,uVar22,puVar18,&local_60,uVar23);
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                    local_b4 = puVar19;
                    local_b0 = uVar35;
                    local_c4 = uVar34;
                    local_bc = uVar36;
                    uVar35 = FUN_0188f9b8(&local_c4,&local_f8);
                    iVar11 = (int)((ulonglong)uVar35 >> 0x20);
                    iVar9 = (int)uVar35;
                    if (iVar9 == 0) {
                      *(char **)((int)param_1 + 4) = "InconsistentComponents";
                      *(undefined4 *)(param_1 + 1) = 0x16;
                      *(undefined4 *)param_1 = 0;
LAB_01892a28:
                      FUN_01899664(&local_c4);
                    }
                    else {
                      uVar35 = FUN_0188f9b8(&local_e0,&local_f8);
                      iVar31 = (int)((ulonglong)uVar35 >> 0x20);
                      iVar30 = (int)uVar35;
                      if (iVar30 == 0) {
                        *(char **)((int)param_1 + 4) = "InconsistentComponents";
                        *(undefined4 *)(param_1 + 1) = 0x16;
                        *(undefined4 *)param_1 = 0;
                        if (iVar11 != 0) {
                          thunk_FUN_01be4678(iVar9);
                        }
                        goto LAB_01892a28;
                      }
                      FUN_01bda5e0(iVar30,iVar30,local_10c,puVar3,&local_f0,iVar31);
                      FUN_01bda5e0(iVar30,iVar30,iVar9,puVar3,&local_f0,iVar31);
                      iVar20 = FUN_01bd4ea8(iVar30,iVar31);
                      if (iVar20 == -1) {
                        FUN_0188f7fc(&local_68,uVar6,uVar7);
                        puVar18 = local_68._4_4_;
                        iVar20 = (int)(undefined4 *)local_68;
                        if ((undefined4 *)local_68 == (undefined4 *)0x0) {
                          uVar6 = 0x10;
                          pcVar8 = &DAT_00569538;
                          goto LAB_0189297c;
                        }
                        if ((puVar17 < local_58) && (local_58 <= puVar5)) {
                          if (puVar4 == local_68._4_4_) {
                            iVar21 = FUN_01bd4ff4((undefined4 *)local_68,puVar3,puVar4);
                            if (iVar21 != -1) goto LAB_01892a9c;
                          }
                          local_98 = puVar17;
                          local_a8 = uVar33;
                          local_a0 = local_d8;
                          uVar35 = FUN_01895d9c(uVar14,uVar15);
                          iVar24 = (int)((ulonglong)uVar35 >> 0x20);
                          iVar21 = (int)uVar35;
                          if (iVar21 == 0) {
                            uVar6 = 0x10;
                            pcVar8 = &DAT_00569538;
                            goto LAB_01892aa8;
                          }
                          FUN_01bda5e0(iVar21,iVar21,uVar26,puVar16,&local_a0,iVar24);
                          uVar37 = FUN_01892f84(iVar9,iVar11,&local_a8,local_b4);
                          uVar7 = (undefined4)((ulonglong)uVar37 >> 0x20);
                          uVar6 = (undefined4)uVar37;
                          FUN_01bda5e0(uVar6,uVar6,uVar26,puVar16,&local_a0,uVar7);
                          iVar27 = FUN_01894784(iVar21,uVar6,uVar7,&local_a8);
                          if (iVar27 == 0) {
                            FUN_018930bc(&local_68,&local_e0,uVar12,uVar13);
                            bVar1 = (undefined4 *)local_68 == (undefined4 *)0x0;
                            if ((undefined4 *)local_68 == (undefined4 *)0x0) {
                              *(undefined4 *)param_1 = 0;
                              *(undefined4 **)((int)param_1 + 4) = local_68._4_4_;
                              *(undefined4 **)(param_1 + 1) = (undefined4 *)local_60;
                            }
                            else {
                              local_80 = local_58;
                              uStack_7c = uStack_54;
                              puStack_78 = puStack_50;
                              uStack_74 = uStack_4c;
                              puStack_70 = puStack_48;
                              local_90 = local_68;
                              local_88 = local_60;
                              FUN_018931e4(&local_68,&local_c4,uVar25,uVar28);
                              if ((undefined4 *)local_68 != (undefined4 *)0x0) {
                                *(undefined4 **)(param_1 + 0xd) = local_60._4_4_;
                                *(undefined4 **)((int)param_1 + 0x6c) = local_58;
                                *(undefined4 *)(param_1 + 0xe) = uStack_54;
                                *(undefined4 **)((int)param_1 + 0x74) = puStack_50;
                                *(undefined4 *)(param_1 + 0xf) = uStack_4c;
                                *(undefined4 **)((int)param_1 + 0x7c) = puStack_48;
                                param_1[7] = local_90;
                                param_1[8] = local_88;
                                *(undefined4 **)(param_1 + 9) = local_80;
                                *(undefined4 *)((int)param_1 + 0x4c) = uStack_7c;
                                *(undefined4 **)(param_1 + 10) = puStack_78;
                                *(undefined4 *)((int)param_1 + 0x54) = uStack_74;
                                *(undefined4 **)(param_1 + 0xb) = puStack_70;
                                *(undefined4 **)(param_1 + 1) = local_128;
                                *(undefined1 **)((int)param_1 + 0xc) = local_124;
                                *(undefined4 **)(param_1 + 2) = local_120;
                                *(undefined4 **)((int)param_1 + 0x14) = local_11c;
                                *(undefined4 **)(param_1 + 3) = local_118;
                                *(undefined4 *)((int)param_1 + 0x1c) = uStack_114;
                                *(undefined4 **)(param_1 + 4) = local_110;
                                *(undefined4 *)((int)param_1 + 0x24) = local_10c;
                                *(undefined4 **)(param_1 + 5) = puStack_108;
                                *(undefined4 *)((int)param_1 + 0x2c) = uStack_104;
                                *(undefined1 **)(param_1 + 6) = local_100;
                                *(undefined4 **)((int)param_1 + 0x34) = local_fc;
                                *(undefined4 **)((int)param_1 + 100) = (undefined4 *)local_60;
                                *param_1 = uVar35;
                                *(ulonglong *)((int)param_1 + 0x5c) = local_68;
                                if (puVar18 != (undefined4 *)0x0) {
                                  thunk_FUN_01be4678(iVar20);
                                }
                                if (iVar31 != 0) {
                                  thunk_FUN_01be4678(iVar30);
                                }
                                if (iVar11 == 0) {
                                  return;
                                }
                                thunk_FUN_01be4678(iVar9);
                                return;
                              }
                              *(undefined4 *)param_1 = 0;
                              *(undefined4 **)((int)param_1 + 4) = local_68._4_4_;
                              *(undefined4 **)(param_1 + 1) = (undefined4 *)local_60;
                              FUN_01893398(&local_90);
                            }
                          }
                          else {
                            bVar1 = true;
                            *(char **)((int)param_1 + 4) = "InconsistentComponents";
                            *(undefined4 *)(param_1 + 1) = 0x16;
                            *(undefined4 *)param_1 = 0;
                          }
                          if (iVar24 != 0) {
                            thunk_FUN_01be4678(iVar21);
                          }
                        }
                        else {
LAB_01892a9c:
                          uVar6 = 0x16;
                          pcVar8 = "InconsistentComponents";
LAB_01892aa8:
                          bVar1 = true;
                          iVar27 = 1;
                          *(undefined4 *)param_1 = 0;
                          *(char **)((int)param_1 + 4) = pcVar8;
                          *(undefined4 *)(param_1 + 1) = uVar6;
                        }
                        if (puVar18 != (undefined4 *)0x0) {
                          thunk_FUN_01be4678(iVar20);
                        }
                      }
                      else {
                        uVar6 = 0x16;
                        pcVar8 = "InconsistentComponents";
LAB_0189297c:
                        bVar1 = true;
                        iVar27 = 1;
                        *(undefined4 *)param_1 = 0;
                        *(char **)((int)param_1 + 4) = pcVar8;
                        *(undefined4 *)(param_1 + 1) = uVar6;
                      }
                      if (iVar31 != 0) {
                        thunk_FUN_01be4678(iVar30);
                      }
                      if (iVar11 != 0) {
                        thunk_FUN_01be4678(iVar9);
                      }
                      if (bVar1) {
                        FUN_01899664(&local_c4);
                      }
                      if (iVar27 == 0) goto LAB_01892524;
                    }
                  }
                  else {
                    uVar6 = 0xf;
                    pcVar8 = "InvalidEncoding";
LAB_018927ac:
                    *(undefined4 *)param_1 = 0;
                    *(char **)((int)param_1 + 4) = pcVar8;
                    *(undefined4 *)(param_1 + 1) = uVar6;
                  }
                  FUN_01899664(&local_e0);
                  goto LAB_01892524;
                }
                uVar6 = 0x25;
                pcVar8 = "PrivateModulusLenNotMultipleOf512Bits";
              }
              else {
                uVar6 = 0x16;
                pcVar8 = "InconsistentComponents";
              }
            }
            else {
              uVar6 = 0xf;
              pcVar8 = &DAT_0051d665;
            }
          }
          else {
            uVar6 = 0x10;
            pcVar8 = &DAT_00569538;
          }
LAB_01892518:
          local_a8 = uVar34;
          thunk_FUN_01be4678(puVar16);
        }
        else {
LAB_01892480:
          uVar6 = 0xf;
          pcVar8 = &DAT_0051d665;
          uVar34 = CONCAT44(local_a8._4_4_,(undefined4 *)local_a8);
          if (iVar30 != 0) goto LAB_01892518;
        }
      }
      else {
        uVar6 = 0xf;
        pcVar8 = "InvalidEncoding";
      }
      *(undefined4 *)param_1 = 0;
      *(char **)((int)param_1 + 4) = pcVar8;
      *(undefined4 *)(param_1 + 1) = uVar6;
LAB_01892524:
      FUN_018933e0(&local_128);
      return;
    }
  }
  FUN_01899664(&local_60);
  local_11c = (undefined4 *)&DAT_0000000f;
  local_120 = (undefined4 *)&DAT_0051d665;
LAB_01892288:
  *(undefined4 **)(param_1 + 1) = local_11c;
  *(undefined4 *)param_1 = 0;
  *(undefined4 **)((int)param_1 + 4) = local_120;
  return;
}

