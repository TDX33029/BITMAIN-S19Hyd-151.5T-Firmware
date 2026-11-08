// FUN_00d49530 @ 00d49530 size=3252 calls_out=18 calls_in=2
// strings: fixed_share_ratio | quota | enabled | user-- | internal error: entered unreachable code: datetimes should only be serialized as structs; not maps | internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d49530(undefined4 *param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 **ppuVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  double dVar19;
  int local_4b8;
  undefined1 auStack_4b4 [68];
  undefined4 local_470;
  undefined4 local_468;
  undefined1 *local_45c;
  undefined1 *puStack_458;
  undefined1 *puStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 local_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined1 local_42c;
  undefined4 local_414;
  undefined1 *local_400;
  undefined1 *local_3fc;
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  undefined1 *puStack_3ec;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e4 [72];
  int local_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 *local_388;
  undefined1 *puStack_384;
  undefined1 *puStack_380;
  undefined1 *puStack_37c;
  undefined1 *local_378;
  undefined1 auStack_374 [28];
  undefined1 *local_358;
  undefined1 auStack_354 [72];
  undefined1 *local_30c;
  undefined1 *apuStack_308 [2];
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined1 *local_2d8;
  undefined1 *puStack_2d4;
  undefined1 *puStack_2d0;
  undefined1 *local_2c8;
  undefined1 *apuStack_2c4 [17];
  undefined1 *local_280;
  undefined1 auStack_27c [4];
  undefined4 local_278;
  undefined4 local_274;
  undefined1 *local_26c;
  double local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 local_23c;
  undefined4 local_22c;
  undefined4 local_224;
  undefined1 *local_210;
  undefined1 *local_20c;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1fc;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f4 [72];
  int local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 *local_198;
  undefined1 *puStack_194;
  undefined1 *local_190;
  undefined1 *local_18c;
  undefined1 *local_188;
  undefined1 *local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 local_15c;
  undefined4 local_144;
  undefined4 local_13c;
  undefined1 *local_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined1 *local_110;
  undefined1 *local_10c;
  undefined1 *local_108;
  undefined1 *local_104;
  undefined1 *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 local_d4;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_98 [21];
  int local_44;
  
  FUN_00644720(&local_110,param_2,&DAT_0051d8de,5);
  if (local_110 != &DAT_80000005) {
    *param_1 = local_110;
    param_1[1] = local_10c;
    param_1[2] = local_108;
    if ((undefined1 *)*param_1 != &DAT_80000005) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                 ,0xc5,&DAT_01d2bdec);
  }
  iVar2 = *param_3;
  if (iVar2 != -0x80000000) {
    iVar9 = param_3[2];
    puVar15 = (uint *)param_3[1];
    FUN_01a5c610(&local_110,iVar9);
    if (local_110 == (undefined1 *)0x0) {
      local_400 = local_10c;
      local_3fc = local_108;
      local_3f8 = local_104;
      if (iVar9 != 0) {
        puVar3 = puVar15 + iVar9 * 0xc;
        puVar4 = (undefined4 *)((uint)&local_3f0 | 4);
        puVar5 = (undefined4 *)((uint)&local_200 | 4);
        do {
          FUN_01a5c554(&local_110,0);
          puVar8 = local_100;
          if (local_100 == (undefined1 *)0x80000001) {
            local_198 = local_110;
            puStack_194 = local_10c;
            local_190 = local_108;
            local_3f0 = local_110;
            puStack_3ec = local_10c;
            puStack_3e8 = local_108;
            puVar11 = (undefined1 *)*puVar4;
            puVar13 = (undefined1 *)puVar4[1];
            puVar8 = local_110;
            goto LAB_00d49820;
          }
          local_198 = local_110;
          puStack_194 = local_10c;
          local_190 = local_108;
          local_18c = local_104;
          FUN_01bed4e2(auStack_374,&local_fc,100);
          local_388 = local_198;
          puStack_384 = puStack_194;
          puStack_380 = local_190;
          puStack_37c = local_18c;
          local_378 = puVar8;
          uVar12 = puVar15[5];
          uVar10 = puVar15[6];
          FUN_00644720(&local_200,&local_388,&DAT_0056ee18,4);
          if (local_200 != &DAT_80000005) {
            ppuVar6 = &puStack_1fc;
            puVar8 = local_200;
            goto LAB_00d49810;
          }
          if (local_378 == (undefined1 *)0x80000000) goto LAB_00d4a1c8;
          FUN_01a5bfb4(local_98,uVar12,uVar10);
          puVar8 = local_358;
          if (local_44 == 8) {
            if (local_98[0] == &DAT_80000005) goto LAB_00d498a8;
            puVar11 = *(undefined1 **)((uint)local_98 | 4);
            puVar13 = (undefined1 *)((undefined4 *)((uint)local_98 | 4))[1];
            puVar8 = local_98[0];
LAB_00d49818:
            FUN_005f8054(&local_388);
LAB_00d49820:
            if (puVar8 != &DAT_80000005) {
              FUN_01272b34(&local_400);
              if (iVar2 == -0x80000000 && puVar8 == (undefined1 *)0x80000002) goto LAB_00d4a11c;
              goto LAB_00d4a154;
            }
          }
          else {
            local_358 = (undefined1 *)0x80000000;
            if (puVar8 == (undefined1 *)0x80000000) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2bdfc);
            }
            local_280 = puVar8;
            FUN_01bed4e2(auStack_27c,auStack_354,0x44);
            FUN_01bed4e2(&local_190,local_98,0x68);
            local_198 = (undefined1 *)0x1;
            FUN_01a4b734(&local_110,&local_388,&local_280,&local_198);
            if (local_110 != (undefined1 *)0x4) {
              FUN_005f6530(&local_110);
            }
LAB_00d498a8:
            if (*puVar15 != 2) {
              if ((*puVar15 & 1) == 0) {
                uVar10 = puVar15[1];
                FUN_00644720(&local_2c8,&local_388,"quota",5);
                puVar8 = local_358;
                if (local_2c8 != &DAT_80000005) goto LAB_00d49ad8;
                if (local_378 == (undefined1 *)0x80000000) goto LAB_00d4a1c8;
                local_274 = 0x80000003;
                local_268 = (double)CONCAT44(local_268._4_4_,uVar10);
                bVar18 = local_358 == (undefined1 *)0x80000000;
                local_358 = (undefined1 *)0x80000000;
                local_280 = (undefined1 *)0x80000003;
                local_22c = 3;
                local_260 = 0x80000003;
                if (bVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d2bdfc);
                }
                local_200 = puVar8;
                FUN_01bed4e2(&puStack_1fc,auStack_354,0x44);
                local_184 = (undefined1 *)0x80000003;
                local_190 = (undefined1 *)0x80000003;
                local_178 = (double)CONCAT44(local_178._4_4_,uVar10);
                local_13c = 3;
                local_170 = 0x80000003;
                local_198 = (undefined1 *)0x1;
                FUN_01a4b734(&local_110,&local_388,&local_200,&local_198);
                if (local_110 != (undefined1 *)0x4) {
                  FUN_005f6530(&local_110);
                }
              }
              else {
                dVar19 = *(double *)(puVar15 + 2);
                FUN_00644720(&local_2c8,&local_388,"fixed_share_ratio",0x11);
                puVar8 = local_358;
                if (local_2c8 != &DAT_80000005) {
LAB_00d49ad8:
                  ppuVar6 = apuStack_2c4;
                  puVar8 = local_2c8;
                  goto LAB_00d49810;
                }
                if (local_378 == (undefined1 *)0x80000000) {
LAB_00d4a1c8:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                               ,0xc5,&DAT_01d2bdec);
                }
                local_358 = (undefined1 *)0x80000000;
                local_22c = 4;
                local_260 = 0x80000003;
                local_274 = 0x80000003;
                local_280 = (undefined1 *)0x80000003;
                if (NAN(dVar19)) {
                  dVar19 = ABS(dVar19);
                }
                local_268 = dVar19;
                if (puVar8 == (undefined1 *)0x80000000) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d2bdfc);
                }
                local_200 = puVar8;
                FUN_01bed4e2(&puStack_1fc,auStack_354,0x44);
                local_13c = 4;
                local_170 = 0x80000003;
                local_184 = (undefined1 *)0x80000003;
                local_190 = (undefined1 *)0x80000003;
                local_198 = (undefined1 *)0x1;
                local_178 = dVar19;
                FUN_01a4b734(&local_110,&local_388,&local_200,&local_198);
                if (local_110 != (undefined1 *)0x4) {
                  FUN_005f6530(&local_110);
                }
              }
            }
            if (puVar15[8] != 0x80000000) {
              FUN_00644720(&local_30c,&local_388,&DAT_0056dc6c,4);
              if (local_30c != &DAT_80000005) {
                ppuVar6 = apuStack_308;
                puVar8 = local_30c;
LAB_00d49810:
                puVar11 = *ppuVar6;
                puVar13 = ppuVar6[1];
                goto LAB_00d49818;
              }
              if (local_378 == (undefined1 *)0x80000000) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                             ,0xc5,&DAT_01d2bdec);
              }
              uVar10 = puVar15[9];
              uVar12 = puVar15[10];
              FUN_01a5c610(&local_110,uVar12);
              if (local_110 == (undefined1 *)0x0) {
                local_210 = local_10c;
                local_20c = local_108;
                local_208 = local_104;
                if (uVar12 != 0) {
                  iVar9 = 0;
                  do {
                    iVar17 = uVar10 + iVar9;
                    uVar14 = (uint)*(byte *)(iVar17 + 0x24);
                    iVar16 = *(int *)(iVar17 + 0x18);
                    uVar7 = uVar14;
                    if (uVar14 != 2) {
                      uVar7 = 3;
                    }
                    if (iVar16 != -0x80000000) {
                      uVar7 = uVar7 + 1;
                    }
                    FUN_01a4c5c8(&local_110,uVar7);
                    puVar8 = local_100;
                    if (local_100 == (undefined1 *)0x80000001) {
                      local_120 = local_110;
                      puStack_11c = local_10c;
                      puStack_118 = local_108;
                      local_200 = local_110;
                      puStack_1fc = local_10c;
                      puStack_1f8 = local_108;
                      puVar11 = (undefined1 *)*puVar5;
                      puVar13 = (undefined1 *)puVar5[1];
                      puVar8 = local_110;
LAB_00d49d84:
                      if (puVar8 != &DAT_80000005) {
                        FUN_01272b34(&local_210);
                        goto LAB_00d49818;
                      }
                    }
                    else {
                      local_120 = local_110;
                      puStack_11c = local_10c;
                      puStack_118 = local_108;
                      puStack_114 = local_104;
                      FUN_01bed4e2(&local_184,&local_fc,100);
                      local_198 = local_120;
                      puStack_194 = puStack_11c;
                      local_190 = puStack_118;
                      local_18c = puStack_114;
                      local_188 = puVar8;
                      if ((((uVar14 != 2) &&
                           (FUN_00a25ef0(&local_110,&local_198,"enabled",7,
                                         *(undefined1 *)(iVar17 + 0x24)), local_110 != &DAT_80000005
                           )) || (FUN_01a416cc(&local_110,&local_198,"url",3,
                                               *(undefined4 *)(iVar17 + 4),
                                               *(undefined4 *)(iVar17 + 8)),
                                 local_110 != &DAT_80000005)) ||
                         ((FUN_01a416cc(&local_110,&local_198,"user--",4,
                                        *(undefined4 *)(iVar17 + 0x10),
                                        *(undefined4 *)(iVar17 + 0x14)), local_110 != &DAT_80000005
                          || ((iVar16 != -0x80000000 &&
                              (FUN_00644f7c(&local_110,&local_198,&DAT_00571120,8,
                                            (int *)(iVar17 + 0x18)), local_110 != &DAT_80000005)))))
                         ) {
                        puVar13 = local_108;
                        puVar11 = local_10c;
                        puVar8 = local_110;
                        FUN_005f8054(&local_198);
                        goto LAB_00d49d84;
                      }
                      FUN_01bed4e2(&local_110,&local_198,0x78);
                      FUN_01a4aaf4(&local_200,&local_110);
                      iVar16 = local_1ac;
                      puVar8 = local_200;
                      puVar11 = (undefined1 *)*puVar5;
                      puVar13 = (undefined1 *)puVar5[1];
                      if (local_1ac == 8) goto LAB_00d49d84;
                      FUN_01bed4e2(&local_fc,auStack_1f4,0x48);
                      puVar1 = local_208;
                      local_b0 = local_1a8;
                      uStack_ac = uStack_1a4;
                      uStack_a8 = uStack_1a0;
                      uStack_a4 = uStack_19c;
                      local_108 = puVar8;
                      local_b4 = iVar16;
                      local_110 = (undefined1 *)0x1;
                      local_104 = puVar11;
                      local_100 = puVar13;
                      if (local_208 == local_210) {
                        FUN_01a54bd8(&local_210);
                      }
                      FUN_01bed4e2(local_20c + (int)puVar1 * 0x70,&local_110,0x70);
                      local_208 = puVar1 + 1;
                    }
                    iVar9 = iVar9 + 0x28;
                  } while (uVar12 * 0x28 != iVar9);
                }
                local_2d8 = local_210;
                puStack_2d4 = local_20c;
                puStack_2d0 = local_208;
                local_f8 = 0x80000000;
                local_d4 = 0;
                local_fc = 0;
                local_104 = (undefined1 *)0x0;
                local_110 = (undefined1 *)0x0;
                local_e0 = 0x80000003;
                local_ec = 0x80000003;
                local_100 = (undefined1 *)0x8;
                local_2e8 = 0x80000000;
                uStack_2e4 = uStack_f4;
                uStack_2e0 = uStack_f0;
                local_300 = 0x80000003;
                uStack_2fc = uStack_e8;
                uStack_2f8 = uStack_e4;
                uStack_2f4 = 0x80000003;
                uStack_2f0 = uStack_dc;
                uStack_2ec = uStack_d8;
                FUN_01272b34(&local_104);
                puVar8 = local_358;
                local_198 = (undefined1 *)0x0;
                local_18c = local_2d8;
                local_188 = puStack_2d4;
                local_184 = puStack_2d0;
                local_178 = (double)CONCAT44(local_178._4_4_,uStack_2e0);
                local_170 = uStack_2fc;
                local_144 = 7;
                local_15c = 0;
                bVar18 = local_358 == (undefined1 *)0x80000000;
                local_358 = (undefined1 *)0x80000000;
                if (bVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d2bdfc);
                }
                local_2c8 = puVar8;
                FUN_01bed4e2(apuStack_2c4,auStack_354,0x44);
                local_278 = 0;
                local_26c = local_2d8;
                local_268 = (double)CONCAT44(local_268._4_4_,puStack_2d4);
                local_260 = local_2e8;
                uStack_25c = uStack_2e4;
                uStack_258 = uStack_2e0;
                local_254 = local_300;
                uStack_250 = uStack_2fc;
                uStack_24c = uStack_2f8;
                uStack_248 = uStack_2f4;
                uStack_244 = uStack_2f0;
                uStack_240 = uStack_2ec;
                local_224 = 7;
                local_23c = 0;
                local_280 = (undefined1 *)0x1;
                FUN_01a4b734(&local_110,&local_388,&local_2c8,&local_280);
                if (local_110 != (undefined1 *)0x4) {
                  FUN_005f6530(&local_110);
                }
              }
              else if (local_10c != &DAT_80000005) {
                ppuVar6 = &local_108;
                puVar8 = local_10c;
                goto LAB_00d49810;
              }
            }
            FUN_01bed4e2(&local_110,&local_388,0x78);
            FUN_01a4aa04(&local_3f0,&local_110);
            iVar9 = local_39c;
            puVar8 = local_3f0;
            puVar11 = (undefined1 *)*puVar4;
            puVar13 = (undefined1 *)puVar4[1];
            if (local_39c == 8) goto LAB_00d49820;
            FUN_01bed4e2(&local_fc,auStack_3e4,0x48);
            puVar1 = local_3f8;
            local_b0 = local_398;
            uStack_ac = uStack_394;
            uStack_a8 = uStack_390;
            uStack_a4 = uStack_38c;
            local_108 = puVar8;
            local_b4 = iVar9;
            local_110 = (undefined1 *)0x1;
            local_104 = puVar11;
            local_100 = puVar13;
            if (local_3f8 == local_400) {
              FUN_01a54bd8(&local_400);
            }
            FUN_01bed4e2(local_3fc + (int)puVar1 * 0x70,&local_110,0x70);
            local_3f8 = puVar1 + 1;
          }
          puVar15 = puVar15 + 0xc;
        } while (puVar15 != puVar3);
      }
      puVar8 = local_400;
      puVar11 = local_3fc;
      puVar13 = local_3f8;
      local_f8 = 0x80000000;
      local_e0 = 0x80000003;
      local_ec = 0x80000003;
      local_100 = (undefined1 *)0x8;
      local_d4 = 0;
      local_fc = 0;
      local_104 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      FUN_01272b34(&local_104);
      local_198 = (undefined1 *)0x0;
      uStack_180 = 0x80000000;
      uStack_17c = uStack_f4;
      local_178 = (double)CONCAT44(0x80000003,uStack_f0);
      local_170 = uStack_e8;
      uStack_16c = uStack_e4;
      uStack_168 = 0x80000003;
      uStack_164 = uStack_dc;
      uStack_160 = uStack_d8;
      local_15c = 0;
      local_4b8 = *(int *)(param_2 + 0x30);
      *(undefined4 *)(param_2 + 0x30) = 0x80000000;
      local_144 = 7;
      local_18c = puVar8;
      local_188 = puVar11;
      local_184 = puVar13;
      if (local_4b8 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2bdfc);
      }
      FUN_01bed4e2(auStack_4b4,param_2 + 0x34,0x44);
      local_468 = 0;
      uStack_450 = 0x80000000;
      uStack_44c = uStack_f4;
      uStack_448 = uStack_f0;
      local_444 = 0x80000003;
      uStack_440 = uStack_e8;
      uStack_43c = uStack_e4;
      uStack_438 = 0x80000003;
      uStack_434 = uStack_dc;
      uStack_430 = uStack_d8;
      local_414 = 7;
      local_470 = 1;
      local_42c = 0;
      local_45c = puVar8;
      puStack_458 = puVar11;
      puStack_454 = puVar13;
      FUN_01a4b734(&local_110,param_2,&local_4b8);
      if (local_110 != (undefined1 *)0x4) {
        FUN_005f6530(&local_110);
      }
    }
    else if (local_10c != &DAT_80000005) {
      puVar11 = local_108;
      puVar13 = local_104;
      puVar8 = local_10c;
LAB_00d4a154:
      *param_1 = puVar8;
      param_1[1] = puVar11;
      param_1[2] = puVar13;
      return;
    }
  }
LAB_00d4a11c:
  *param_1 = &DAT_80000005;
  return;
}

