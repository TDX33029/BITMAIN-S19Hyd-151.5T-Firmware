// FUN_00ffcdb4 @ 00ffcdb4 size=3220 calls_out=13 calls_in=7
// strings: 

int FUN_00ffcdb4(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  undefined4 *puVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  int *piVar34;
  int *piVar35;
  undefined8 uVar36;
  uint *local_3a8;
  int local_3a4;
  int local_39c;
  int **local_388;
  undefined4 local_384;
  undefined1 local_380;
  uint *local_378;
  int local_374;
  int local_36c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 local_350;
  uint local_348;
  undefined4 *local_344;
  undefined4 local_340;
  undefined1 local_33c;
  undefined4 *local_338;
  uint uStack_334;
  uint *puStack_330;
  uint *puStack_32c;
  uint local_328;
  uint *puStack_324;
  int local_320;
  int local_31c;
  int **local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  int *local_308;
  int *local_304;
  int *local_300;
  uint *local_2fc;
  uint local_2f8;
  int *local_2f4;
  int *local_2f0;
  byte local_2ec;
  undefined4 *local_2e8;
  uint local_2e4;
  uint *local_2e0;
  uint *local_2dc;
  uint local_2d8;
  uint *local_2d4;
  int local_2d0;
  int local_2cc;
  int **local_2c8;
  int *local_2c0;
  int *local_2bc;
  int *local_2b8;
  uint *local_2b4;
  uint local_2b0;
  int *local_2ac;
  int *local_2a8;
  undefined4 local_2a4;
  undefined4 *local_2a0;
  uint local_29c;
  uint *puStack_298;
  uint *puStack_294;
  uint local_290;
  uint *local_28c;
  int local_288;
  int local_284;
  int **local_280;
  undefined4 *local_278;
  uint uStack_274;
  uint *puStack_270;
  uint *local_26c;
  uint local_268;
  uint *local_264;
  int local_260;
  int local_25c;
  undefined1 auStack_258 [136];
  undefined4 *local_1d0;
  uint local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint uStack_1c0;
  uint *puStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int **ppiStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  int *piStack_19c;
  int *piStack_198;
  uint *puStack_194;
  uint uStack_190;
  int *piStack_18c;
  int *local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int *local_140;
  int *local_13c;
  int *piStack_138;
  uint *puStack_134;
  uint local_130;
  int *piStack_12c;
  int *local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  int *local_b0;
  int *local_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *local_9c;
  int *local_98;
  undefined1 local_94;
  
  FUN_00711858(&local_3a8,param_1);
  piVar22 = (int *)*param_2;
  piVar11 = piVar22 + 0x26;
  do {
    bVar3 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar3);
  *piVar11 = *piVar11 + 1;
  do {
    iVar12 = *piVar22;
    bVar3 = (bool)hasExclusiveAccess(piVar22);
  } while (!bVar3);
  *piVar22 = iVar12 + 1;
  if (-1 < iVar12) {
    piVar8 = (int *)param_2[1];
    do {
      iVar12 = *piVar8;
      bVar3 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar3);
    *piVar8 = iVar12 + 1;
    if (-1 < iVar12) {
      piVar27 = (int *)param_2[2];
      piVar18 = piVar27 + 0x26;
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar3);
      *piVar18 = *piVar18 + 1;
      do {
        iVar12 = *piVar27;
        bVar3 = (bool)hasExclusiveAccess(piVar27);
      } while (!bVar3);
      *piVar27 = iVar12 + 1;
      if (-1 < iVar12) {
        puVar33 = (uint *)param_2[3];
        uVar13 = param_2[4];
        do {
          uVar14 = *puVar33;
          bVar3 = (bool)hasExclusiveAccess(puVar33);
        } while (!bVar3);
        *puVar33 = uVar14 + 1;
        if (-1 < (int)uVar14) {
          puVar32 = puVar33 + 0x29;
          do {
            bVar3 = (bool)hasExclusiveAccess(puVar32);
          } while (!bVar3);
          *puVar32 = *puVar32 + 1;
          piVar5 = (int *)param_2[5];
          do {
            iVar12 = *piVar5;
            bVar3 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar3);
          *piVar5 = iVar12 + 1;
          if (-1 < iVar12) {
            piVar19 = (int *)param_2[6];
            piVar26 = piVar19 + 0x26;
            do {
              bVar3 = (bool)hasExclusiveAccess(piVar26);
            } while (!bVar3);
            *piVar26 = *piVar26 + 1;
            do {
              iVar12 = *piVar19;
              puVar16 = (uint *)(iVar12 + 1);
              bVar3 = (bool)hasExclusiveAccess(piVar19);
            } while (!bVar3);
            *piVar19 = (int)puVar16;
            if (-1 < iVar12) {
              bVar2 = (byte)param_2[7];
              local_29c = (uint)bVar2;
              local_2a4 = CONCAT31(local_2a4._1_3_,bVar2);
              if (local_3a4 == 0) {
                local_2a0 = (undefined4 *)0x0;
              }
              else {
                local_2a0 = (undefined4 *)0x4;
                puVar16 = local_3a8 + local_3a4 * -0x24 + -0x24;
                local_29c = local_3a4 * 0x91 + 0x95;
              }
              local_280 = &local_2c0;
              local_28c = local_3a8 + 1;
              local_284 = local_39c;
              local_290 = ~*local_3a8 & 0x80808080;
              puStack_294 = local_3a8;
              local_2c0 = piVar22;
              local_2bc = piVar8;
              local_2b8 = piVar27;
              local_2b4 = puVar33;
              local_2b0 = uVar13;
              local_2ac = piVar5;
              local_2a8 = piVar19;
              puStack_298 = puVar16;
              uVar36 = thunk_FUN_01bee35a(&local_29c,(int)local_3a8 + local_3a4);
              iVar12 = (int)uVar36;
              puVar16 = (uint *)(iVar12 + 0x2c0);
              local_288 = (int)((ulonglong)uVar36 >> 0x20) + 1;
              if (*(char *)(iVar12 + 0x2d0) == '\0') {
                FUN_019ae6ac(&local_140);
                *puVar16 = (uint)local_140;
                *(int **)(iVar12 + 0x2c4) = local_13c;
                *(int **)(iVar12 + 0x2c8) = piStack_138;
                *(uint **)(iVar12 + 0x2cc) = puStack_134;
                *(undefined1 *)(iVar12 + 0x2d0) = 1;
              }
              local_268 = *puVar16;
              local_264 = *(uint **)(iVar12 + 0x2c4);
              local_25c = *(int *)(iVar12 + 0x2cc);
              piVar6 = (int *)(iVar12 + 0x2c8);
              local_260 = *piVar6;
              *puVar16 = local_268 + 1;
              *(uint *)(iVar12 + 0x2c4) = (int)local_264 + (uint)(0xfffffffe < local_268);
              local_278 = &DAT_0056d238;
              uStack_274 = 0;
              puStack_270 = (uint *)0x0;
              local_26c = (uint *)0x0;
              local_338 = local_2a0;
              uStack_334 = local_29c;
              puStack_330 = puStack_298;
              puStack_32c = puStack_294;
              local_328 = local_290;
              puStack_324 = local_28c;
              local_320 = local_288;
              local_31c = local_284;
              local_318 = local_280;
              if (local_284 != 0) {
                FUN_00708b7c(&local_278,local_284,local_268,local_264,local_260,local_25c);
              }
              ppiVar4 = local_318;
              local_2e8 = local_2a0;
              local_2e4 = local_29c;
              local_2e0 = puStack_298;
              local_2dc = puStack_294;
              local_2d8 = local_290;
              local_2d4 = local_28c;
              local_2d0 = local_288;
              local_2cc = local_284;
              uVar14 = local_290;
              iVar23 = local_284;
              puVar30 = local_28c;
              puVar31 = puStack_294;
              while( true ) {
                iVar9 = 0;
                if (iVar23 == 0) break;
                uVar7 = uVar14;
                puVar29 = puVar30;
                if (uVar14 == 0) {
                  do {
                    puVar30 = puVar29 + 1;
                    uVar14 = *puVar29;
                    puVar31 = puVar31 + -0x90;
                    puVar29 = puVar30;
                  } while ((uVar14 & 0x80808080) == 0x80808080);
                  uVar7 = uVar14 & 0x80808080 ^ 0x80808080;
                  local_2dc = puVar31;
                  local_2d4 = puVar30;
                }
                uVar14 = uVar7 - 1 & uVar7;
                uVar7 = (uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
                puVar28 = (undefined4 *)puVar31[uVar7 * -0x24 + -0x24];
                uVar20 = puVar31[uVar7 * -0x24 + -0x23];
                local_2d8 = uVar14;
                FUN_01bed4e2(auStack_258,puVar31 + uVar7 * -0x24 + -0x22,0x88);
                iVar23 = iVar23 + -1;
                if (uVar20 == 4) {
                  iVar9 = iVar23;
                  break;
                }
                local_1d0 = puVar28;
                local_1cc = uVar20;
                FUN_01bed4e2(&local_1c8,auStack_258,0x88);
                piVar35 = *ppiVar4;
                piVar10 = piVar35 + 0x26;
                do {
                  bVar3 = (bool)hasExclusiveAccess(piVar10);
                } while (!bVar3);
                *piVar10 = *piVar10 + 1;
                do {
                  iVar9 = *piVar35;
                  bVar3 = (bool)hasExclusiveAccess(piVar35);
                } while (!bVar3);
                *piVar35 = iVar9 + 1;
                if (iVar9 < 0) goto LAB_00ffda4c;
                piVar10 = ppiVar4[1];
                do {
                  iVar9 = *piVar10;
                  bVar3 = (bool)hasExclusiveAccess(piVar10);
                } while (!bVar3);
                *piVar10 = iVar9 + 1;
                if (iVar9 < 0) goto LAB_00ffda4c;
                piVar15 = ppiVar4[2];
                piVar17 = piVar15 + 0x26;
                do {
                  bVar3 = (bool)hasExclusiveAccess(piVar17);
                } while (!bVar3);
                *piVar17 = *piVar17 + 1;
                do {
                  iVar9 = *piVar15;
                  bVar3 = (bool)hasExclusiveAccess(piVar15);
                } while (!bVar3);
                *piVar15 = iVar9 + 1;
                if (iVar9 < 0) goto LAB_00ffda4c;
                piVar17 = ppiVar4[3];
                piVar34 = ppiVar4[4];
                do {
                  iVar9 = *piVar17;
                  bVar3 = (bool)hasExclusiveAccess(piVar17);
                } while (!bVar3);
                *piVar17 = iVar9 + 1;
                if (iVar9 < 0) goto LAB_00ffda4c;
                piVar25 = piVar17 + 0x29;
                do {
                  bVar3 = (bool)hasExclusiveAccess(piVar25);
                } while (!bVar3);
                *piVar25 = *piVar25 + 1;
                piVar25 = ppiVar4[5];
                do {
                  iVar9 = *piVar25;
                  bVar3 = (bool)hasExclusiveAccess(piVar25);
                } while (!bVar3);
                *piVar25 = iVar9 + 1;
                if (iVar9 < 0) goto LAB_00ffda4c;
                piVar21 = ppiVar4[6];
                piVar24 = piVar21 + 0x26;
                do {
                  bVar3 = (bool)hasExclusiveAccess(piVar24);
                } while (!bVar3);
                *piVar24 = *piVar24 + 1;
                do {
                  iVar9 = *piVar21;
                  bVar3 = (bool)hasExclusiveAccess(piVar21);
                } while (!bVar3);
                *piVar21 = iVar9 + 1;
                if (iVar9 < 0) goto LAB_00ffda4c;
                local_94 = *(undefined1 *)(ppiVar4 + 7);
                local_b0 = piVar35;
                local_ac = piVar10;
                piStack_a8 = piVar15;
                piStack_a4 = piVar17;
                piStack_a0 = piVar34;
                local_9c = piVar25;
                local_98 = piVar21;
                FUN_00ffdcf8(&local_13c,(uint)&local_1d0 | 4,&local_b0);
                FUN_0070bb70(&local_b0,&local_278,puVar28,&local_13c);
                if (local_b0 != (int *)&SUB_00000004) {
                  FUN_00fedc64(&local_b0);
                }
              }
              local_2cc = iVar9;
              FUN_00943cd0(&local_2e8);
              local_338 = local_278;
              uStack_334 = uStack_274;
              puStack_330 = puStack_270;
              puStack_32c = local_26c;
              local_328 = local_268;
              puStack_324 = local_264;
              local_320 = local_260;
              local_31c = local_25c;
              local_310 = CONCAT31(local_310._1_3_,local_380);
              local_314 = local_384;
              local_318 = local_388;
              FUN_00ffdc34(&local_2c0);
              do {
                bVar3 = (bool)hasExclusiveAccess(piVar11);
              } while (!bVar3);
              *piVar11 = *piVar11 + 1;
              do {
                iVar23 = *piVar22;
                bVar3 = (bool)hasExclusiveAccess(piVar22);
              } while (!bVar3);
              *piVar22 = iVar23 + 1;
              if (-1 < iVar23) {
                do {
                  iVar23 = *piVar8;
                  bVar3 = (bool)hasExclusiveAccess(piVar8);
                } while (!bVar3);
                *piVar8 = iVar23 + 1;
                if (-1 < iVar23) {
                  do {
                    bVar3 = (bool)hasExclusiveAccess(piVar18);
                  } while (!bVar3);
                  *piVar18 = *piVar18 + 1;
                  do {
                    iVar23 = *piVar27;
                    bVar3 = (bool)hasExclusiveAccess(piVar27);
                  } while (!bVar3);
                  *piVar27 = iVar23 + 1;
                  if (-1 < iVar23) {
                    do {
                      uVar14 = *puVar33;
                      bVar3 = (bool)hasExclusiveAccess(puVar33);
                    } while (!bVar3);
                    *puVar33 = uVar14 + 1;
                    if (-1 < (int)uVar14) {
                      do {
                        bVar3 = (bool)hasExclusiveAccess(puVar32);
                      } while (!bVar3);
                      *puVar32 = *puVar32 + 1;
                      do {
                        iVar23 = *piVar5;
                        bVar3 = (bool)hasExclusiveAccess(piVar5);
                      } while (!bVar3);
                      *piVar5 = iVar23 + 1;
                      if (-1 < iVar23) {
                        do {
                          bVar3 = (bool)hasExclusiveAccess(piVar26);
                        } while (!bVar3);
                        *piVar26 = *piVar26 + 1;
                        do {
                          iVar23 = *piVar19;
                          bVar3 = (bool)hasExclusiveAccess(piVar19);
                        } while (!bVar3);
                        *piVar19 = iVar23 + 1;
                        if (-1 < iVar23) {
                          if (local_374 == 0) {
                            local_2e8 = (undefined4 *)0x0;
                            local_2e4 = 0;
                            local_2e0 = puVar33;
                          }
                          else {
                            local_2e4 = local_374 * 0x91 + 0x95;
                            local_2e8 = (undefined4 *)0x4;
                            local_2e0 = local_378 + local_374 * -0x24 + -0x24;
                          }
                          local_2c8 = &local_308;
                          local_2d4 = local_378 + 1;
                          local_2dc = local_378;
                          local_2d0 = (int)local_378 + local_374 + 1;
                          local_2d8 = ~*local_378 & 0x80808080;
                          local_2cc = local_36c;
                          local_308 = piVar22;
                          local_304 = piVar8;
                          local_300 = piVar27;
                          local_2fc = puVar33;
                          local_2f8 = uVar13;
                          local_2f4 = piVar5;
                          local_2f0 = piVar19;
                          local_2ec = bVar2;
                          if (*(char *)(iVar12 + 0x2d0) == '\0') {
                            FUN_019ae6ac(&local_140);
                            *puVar16 = (uint)local_140;
                            *(int **)(iVar12 + 0x2c4) = local_13c;
                            *piVar6 = (int)piStack_138;
                            *(uint **)(iVar12 + 0x2cc) = puStack_134;
                            *(undefined1 *)(iVar12 + 0x2d0) = 1;
                          }
                          local_2b0 = *puVar16;
                          local_2ac = *(int **)(iVar12 + 0x2c4);
                          local_2a8 = (int *)*piVar6;
                          local_2a4 = *(undefined4 *)(iVar12 + 0x2cc);
                          *puVar16 = local_2b0 + 1;
                          *(uint *)(iVar12 + 0x2c4) =
                               (int)local_2ac + (uint)(0xfffffffe < local_2b0);
                          local_2c0 = &DAT_0056d238;
                          local_2bc = (int *)0x0;
                          local_2b8 = (int *)0x0;
                          local_2b4 = (uint *)0x0;
                          local_2a0 = local_2e8;
                          local_29c = local_2e4;
                          puStack_298 = local_2e0;
                          puStack_294 = local_2dc;
                          local_290 = local_2d8;
                          local_28c = local_2d4;
                          local_288 = local_2d0;
                          local_284 = local_2cc;
                          local_280 = local_2c8;
                          if (local_2cc != 0) {
                            FUN_00708b7c(&local_2c0,local_2cc,local_2b0,local_2ac,local_2a8,
                                         local_2a4);
                          }
                          ppiVar4 = local_280;
                          local_278 = local_2e8;
                          uStack_274 = local_2e4;
                          puStack_270 = local_2e0;
                          local_26c = local_2dc;
                          local_268 = local_2d8;
                          local_264 = local_2d4;
                          local_260 = local_2d0;
                          local_25c = local_2cc;
                          uVar13 = local_2d8;
                          iVar12 = local_2cc;
                          puVar33 = local_2d4;
                          puVar32 = local_2dc;
                          while (iVar23 = 0, iVar12 != 0) {
                            uVar14 = uVar13;
                            puVar16 = puVar33;
                            if (uVar13 == 0) {
                              do {
                                puVar33 = puVar16 + 1;
                                uVar13 = *puVar16;
                                puVar32 = puVar32 + -0x90;
                                puVar16 = puVar33;
                              } while ((uVar13 & 0x80808080) == 0x80808080);
                              uVar14 = uVar13 & 0x80808080 ^ 0x80808080;
                              local_26c = puVar32;
                              local_264 = puVar33;
                            }
                            uVar13 = uVar14 - 1 & uVar14;
                            uVar14 = (uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                                   (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >>
                                     3;
                            puVar28 = (undefined4 *)puVar32[uVar14 * -0x24 + -0x24];
                            uVar7 = puVar32[uVar14 * -0x24 + -0x23];
                            local_268 = uVar13;
                            FUN_01bed4e2(auStack_258,puVar32 + uVar14 * -0x24 + -0x22,0x88);
                            iVar23 = iVar12 + -1;
                            if (uVar7 == 4) break;
                            local_1d0 = puVar28;
                            local_1cc = uVar7;
                            FUN_01bed4e2(&local_1c8,auStack_258,0x88);
                            piVar22 = *ppiVar4;
                            piVar11 = piVar22 + 0x26;
                            do {
                              bVar3 = (bool)hasExclusiveAccess(piVar11);
                            } while (!bVar3);
                            *piVar11 = *piVar11 + 1;
                            do {
                              iVar12 = *piVar22;
                              bVar3 = (bool)hasExclusiveAccess(piVar22);
                            } while (!bVar3);
                            *piVar22 = iVar12 + 1;
                            if (iVar12 < 0) goto LAB_00ffda4c;
                            piVar11 = ppiVar4[1];
                            do {
                              iVar12 = *piVar11;
                              bVar3 = (bool)hasExclusiveAccess(piVar11);
                            } while (!bVar3);
                            *piVar11 = iVar12 + 1;
                            if (iVar12 < 0) goto LAB_00ffda4c;
                            piVar8 = ppiVar4[2];
                            piVar18 = piVar8 + 0x26;
                            do {
                              bVar3 = (bool)hasExclusiveAccess(piVar18);
                            } while (!bVar3);
                            *piVar18 = *piVar18 + 1;
                            do {
                              iVar12 = *piVar8;
                              bVar3 = (bool)hasExclusiveAccess(piVar8);
                            } while (!bVar3);
                            *piVar8 = iVar12 + 1;
                            if (iVar12 < 0) goto LAB_00ffda4c;
                            piVar18 = ppiVar4[3];
                            piVar27 = ppiVar4[4];
                            do {
                              iVar12 = *piVar18;
                              bVar3 = (bool)hasExclusiveAccess(piVar18);
                            } while (!bVar3);
                            *piVar18 = iVar12 + 1;
                            if (iVar12 < 0) goto LAB_00ffda4c;
                            piVar5 = piVar18 + 0x29;
                            do {
                              bVar3 = (bool)hasExclusiveAccess(piVar5);
                            } while (!bVar3);
                            *piVar5 = *piVar5 + 1;
                            piVar5 = ppiVar4[5];
                            do {
                              iVar12 = *piVar5;
                              bVar3 = (bool)hasExclusiveAccess(piVar5);
                            } while (!bVar3);
                            *piVar5 = iVar12 + 1;
                            if (iVar12 < 0) goto LAB_00ffda4c;
                            piVar26 = ppiVar4[6];
                            piVar19 = piVar26 + 0x26;
                            do {
                              bVar3 = (bool)hasExclusiveAccess(piVar19);
                            } while (!bVar3);
                            *piVar19 = *piVar19 + 1;
                            do {
                              iVar12 = *piVar26;
                              bVar3 = (bool)hasExclusiveAccess(piVar26);
                            } while (!bVar3);
                            *piVar26 = iVar12 + 1;
                            if (iVar12 < 0) goto LAB_00ffda4c;
                            local_94 = *(undefined1 *)(ppiVar4 + 7);
                            local_b0 = piVar22;
                            local_ac = piVar11;
                            piStack_a8 = piVar8;
                            piStack_a4 = piVar18;
                            piStack_a0 = piVar27;
                            local_9c = piVar5;
                            local_98 = piVar26;
                            FUN_00ffdcf8(&local_13c,(uint)&local_1d0 | 4,&local_b0);
                            FUN_0070bb70(&local_b0,&local_2c0,puVar28,&local_13c);
                            if (local_b0 != (int *)&SUB_00000004) {
                              FUN_00fedc64(&local_b0);
                            }
                            iVar12 = iVar23;
                          }
                          local_25c = iVar23;
                          FUN_00943cd0(&local_278);
                          local_140 = local_2c0;
                          local_13c = local_2bc;
                          piStack_138 = local_2b8;
                          puStack_134 = local_2b4;
                          local_130 = local_2b0;
                          piStack_12c = local_2ac;
                          local_128 = local_2a8;
                          uStack_124 = local_2a4;
                          local_118 = CONCAT31(local_118._1_3_,local_350);
                          local_11c = local_354;
                          local_120 = local_358;
                          FUN_00ffdc34(&local_308);
                          if (local_348 < 2) {
                            local_d4 = FUN_011d891c(local_344,local_340,param_2);
                          }
                          else {
                            local_1c8 = (uint *)thunk_FUN_01be5118(0x20);
                            if (local_1c8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_0066439c(4,0x20);
                            }
                            uVar13 = param_2[1];
                            uVar14 = param_2[2];
                            uVar7 = param_2[3];
                            *local_1c8 = *param_2;
                            local_1c8[1] = uVar13;
                            local_1c8[2] = uVar14;
                            local_1c8[3] = uVar7;
                            uVar13 = param_2[5];
                            uVar14 = param_2[6];
                            uVar7 = param_2[7];
                            local_1c8[4] = param_2[4];
                            local_1c8[5] = uVar13;
                            local_1c8[6] = uVar14;
                            local_1c8[7] = uVar7;
                            local_1c4 = (uint *)&DAT_01c22004;
                            local_1cc = local_340;
                            local_1d0 = local_344;
                            puVar28 = (undefined4 *)thunk_FUN_01be5118(0x10);
                            if (puVar28 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_0066439c(4,0x10);
                            }
                            local_d4 = CONCAT44(&DAT_01c21f74,puVar28);
                            *puVar28 = local_1d0;
                            puVar28[1] = local_1cc;
                            puVar28[2] = local_1c8;
                            puVar28[3] = local_1c4;
                          }
                          local_1d0 = local_338;
                          local_1cc = uStack_334;
                          local_1c8 = puStack_330;
                          local_1c4 = puStack_32c;
                          uStack_1c0 = local_328;
                          puStack_1bc = puStack_324;
                          local_1b8 = local_320;
                          iStack_1b4 = local_31c;
                          ppiStack_1b0 = local_318;
                          uStack_1ac = local_314;
                          uStack_1a8 = local_310;
                          uStack_1a4 = uStack_30c;
                          piStack_1a0 = local_140;
                          piStack_19c = local_13c;
                          piStack_198 = piStack_138;
                          puStack_194 = puStack_134;
                          uStack_190 = local_130;
                          piStack_18c = piStack_12c;
                          local_188 = local_128;
                          uStack_184 = uStack_124;
                          uStack_180 = local_120;
                          uStack_17c = local_11c;
                          uStack_178 = local_118;
                          uStack_174 = uStack_114;
                          local_13c = (int *)0x1;
                          local_140 = (int *)0x1;
                          FUN_01bed4e2(&piStack_138,&local_1d0,0x60);
                          local_cc = local_33c;
                          local_d8 = local_348;
                          iVar12 = thunk_FUN_01be5118(0x78);
                          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_0066439c(8,0x78);
                          }
                          FUN_01bed4e2(iVar12,&local_140,0x78);
                          return iVar12;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00ffda4c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xffda4c);
  (*pcVar1)();
}

