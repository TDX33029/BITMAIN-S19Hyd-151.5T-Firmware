// FUN_01691e64 @ 01691e64 size=4224 calls_out=28 calls_in=2
// strings: must call 'finish_pattern' firstTLS_ECDHE_ECDSA_WITH_RC4_128_SHA

/* WARNING: Removing unreachable block (ram,0x0169333c) */
/* WARNING: Removing unreachable block (ram,0x01693734) */
/* WARNING: Removing unreachable block (ram,0x01693344) */
/* WARNING: Removing unreachable block (ram,0x01693468) */
/* WARNING: Removing unreachable block (ram,0x01693470) */
/* WARNING: Removing unreachable block (ram,0x016934b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01691e64(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  code *pcVar14;
  uint *puVar15;
  uint **ppuVar16;
  uint **ppuVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int *piVar26;
  undefined *puVar27;
  uint *puVar28;
  int *piVar29;
  uint uVar30;
  uint *puVar31;
  undefined4 uVar32;
  int *piVar33;
  bool bVar34;
  bool bVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint local_4c4;
  int local_4b0;
  undefined *local_4a8;
  undefined *local_4a4;
  undefined1 auStack_478 [256];
  undefined1 auStack_378 [32];
  uint local_358;
  uint local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  int *local_344;
  uint local_340;
  int *local_33c;
  int local_338;
  uint *local_334;
  uint *local_330;
  uint *local_32c;
  undefined1 local_328;
  int local_327;
  undefined4 local_31c;
  uint *local_318;
  int local_314;
  undefined4 local_310;
  int local_30c;
  uint local_308;
  uint *local_304;
  int local_300;
  uint local_2fc;
  uint local_2f8;
  int *local_2f4;
  int *local_2f0;
  undefined4 local_2ec;
  int local_2e8;
  int *local_2e4;
  undefined4 local_2e0;
  int *local_2dc;
  int *local_2d8;
  int local_2d4;
  undefined1 auStack_1f8 [60];
  int local_1bc;
  uint local_1b8;
  uint *local_1b0;
  int local_1ac;
  uint *local_1a0;
  uint *local_19c;
  undefined4 local_198;
  uint local_194 [2];
  uint *local_18c;
  uint *local_188 [2];
  uint local_180;
  int *local_17c;
  uint *local_178;
  code *local_174;
  int local_170;
  int *local_16c;
  undefined4 uStack_168;
  int *piStack_164;
  int *piStack_160;
  int iStack_15c;
  
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("must call \'finish_pattern\' firstTLS_ECDHE_ECDSA_WITH_RC4_128_SHA",0x41,
                 &DAT_01d07a5c);
  }
  iVar18 = 0;
  local_2f0 = (int *)0x0;
  local_2f4 = (int *)&SUB_00000004;
  local_2f8 = 0;
  piVar5 = (int *)thunk_FUN_01be5118(0x30);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  piVar5[9] = 4;
  piVar5[1] = 1;
  piVar5[2] = 0;
  piVar5[3] = 4;
  piVar5[8] = 0;
  piVar5[10] = 0;
  piVar5[0xb] = 0;
  *piVar5 = 1;
  piVar5[6] = 8;
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[7] = 0;
  FUN_01bed93e(local_188,0,0x100);
  do {
    *(char *)((int)local_188 + iVar18) = (char)iVar18;
    iVar18 = iVar18 + 1;
  } while (iVar18 != 0x100);
  FUN_01bed4e2(auStack_478,local_188,0x100);
  uVar32 = 0;
  local_340 = local_2f8;
  local_33c = local_2f4;
  local_338 = (int)local_2f0;
  local_32c = (uint *)0x0;
  local_330 = (uint *)0x4;
  local_334 = (uint *)0x0;
  local_354 = 0;
  local_358 = 0;
  local_344 = piVar5;
  FUN_01bed93e(auStack_378,0,0x20);
  uVar20 = param_2[6];
  local_328 = *(undefined1 *)((int)param_2 + 0x3a);
  local_348 = 0;
  local_34c = 0;
  local_350 = 0;
  local_327 = (uint)*(ushort *)(param_2 + 0xe) << 0x10;
  local_314 = 0;
  local_318 = (uint *)&SUB_00000004;
  local_31c = 0;
  local_308 = 0;
  local_30c = 4;
  local_310 = 0;
  if (uVar20 != 0) {
    FUN_016c1078(&local_310,uVar20);
  }
  puVar28 = (uint *)param_2[9];
  piVar5 = (int *)param_2[8];
  bVar35 = (uint *)0x3ffffffe < puVar28;
  bVar34 = puVar28 == (uint *)0x3fffffff;
  uVar30 = (int)puVar28 * 4;
  if (puVar28 < (uint *)0x40000000) {
    bVar35 = 0x7ffffffb < uVar30;
    bVar34 = uVar30 == 0x7ffffffc;
  }
  local_358 = param_3;
  local_354 = param_4;
  if (!(!bVar35 || bVar34)) {
LAB_01691fd0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar32,uVar30);
  }
  puVar31 = (uint *)&SUB_00000004;
  puVar19 = (uint *)0x0;
  if (uVar30 != 0) {
    uVar32 = 4;
    puVar31 = (uint *)FUN_01298504(uVar30,4);
    puVar19 = puVar28;
    if (puVar31 == (uint *)0x0) goto LAB_01691fd0;
  }
  FUN_01bed4e2(puVar31,piVar5,uVar30);
  FUN_0134aee0(0,4,4,4);
  iVar18 = param_2[0xb];
  local_2d4 = 0;
  local_2d8 = (int *)0x0;
  local_2dc = (int *)&SUB_00000004;
  local_2e0 = 0;
  local_2e4 = (int *)0x0;
  local_2e8 = 8;
  local_2ec = 0;
  local_2f0 = (int *)0x0;
  local_2f4 = (int *)0x4;
  local_2f8 = 0;
  local_334 = puVar19;
  local_330 = puVar31;
  local_32c = puVar28;
  if (param_2[0xc] != 0) {
    piVar33 = (int *)0x0;
    iVar6 = iVar18 + param_2[0xc] * 0xc;
    local_4a4 = &DAT_01d098e8;
    local_4a8 = &DAT_01d098d8;
    do {
      iVar21 = *(int *)(iVar18 + 8);
      puVar28 = (uint *)piVar33;
      if (iVar21 == 0) {
        puVar31 = (uint *)0x80000002;
        goto LAB_01692e4c;
      }
      piVar5 = *(int **)(iVar18 + 4);
      if (*piVar5 != 0) {
        puVar31 = (uint *)0x80000003;
        goto LAB_01692e4c;
      }
      FUN_016cabd4(&local_2f8,piVar33);
      puVar31 = puVar19;
      if (iVar21 != 1) {
        piVar29 = piVar5 + 2;
        piVar7 = piVar5 + iVar21 * 2;
        puVar19 = (uint *)0x1;
LAB_01692120:
        piVar25 = local_2d8;
        piVar5 = local_2dc;
        if (local_2f0 <= piVar33) {
          local_4a4 = &DAT_01d098b8;
          piVar25 = local_2f0;
          goto LAB_01693814;
        }
        piVar26 = local_2f4 + (int)piVar33 * 2;
        if (piVar26[1] + 2U < 0x7fffffff) {
          iVar21 = *piVar29;
          piVar26[1] = piVar26[1] + 2U;
          if (iVar21 != 0) {
            lVar36 = FUN_016bc0ec(*piVar29 + 8,piVar29[1]);
            puVar15 = (uint *)((ulonglong)lVar36 >> 0x20);
            piVar5 = (int *)lVar36;
            if (piVar33 < local_2e4) {
              piVar25 = piVar5 + 2;
              piVar22 = (int *)(local_2e8 + (int)piVar33 * 0x20);
              if (piVar22[3] != 0) {
                uVar23 = FUN_01a9c24c(piVar22[4],piVar22[5],piVar22[6],piVar22[7],piVar25,puVar15);
                uVar30 = uVar23 >> 0x19;
                uVar24 = piVar22[1];
                iVar21 = *piVar22;
                local_4b0 = 0;
                do {
                  uVar23 = uVar24 & uVar23;
                  uVar8 = *(uint *)(iVar21 + uVar23);
                  uVar9 = uVar8 ^ uVar30 * 0x1010101;
                  uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
                  while (uVar9 != 0) {
                    uVar12 = uVar9 >> 8;
                    uVar1 = uVar9 >> 0x10;
                    uVar2 = uVar9 >> 0x18;
                    uVar3 = uVar9 << 0x18;
                    uVar9 = uVar9 - 1 & uVar9;
                    piVar10 = (int *)(iVar21 + -0xc +
                                     (uVar23 + ((uint)LZCOUNT(uVar3 | (uVar12 & 0xff) << 0x10 |
                                                              (uVar1 & 0xff) << 8 | uVar2) >> 3) &
                                     uVar24) * -0xc);
                    if ((puVar15 == (uint *)piVar10[1]) &&
                       (iVar11 = thunk_FUN_01bed842(piVar25,*piVar10 + 8,puVar15), iVar11 == 0)) {
                      puVar31 = (uint *)0x0;
                      if (lVar36 < 0) {
LAB_0169261c:
                    /* WARNING: Subroutine does not return */
                        FUN_00664620(puVar31,puVar15);
                      }
                      if (puVar15 == (uint *)0x0) {
                        puVar28 = (uint *)&DAT_00000001;
                      }
                      else {
                        puVar31 = (uint *)0x1;
                        puVar28 = (uint *)FUN_01298504(puVar15,1);
                        if (puVar28 == (uint *)0x0) goto LAB_0169261c;
                        puVar31 = puVar15;
                      }
                      FUN_01bed4e2(puVar28,piVar25,puVar15);
                      DataMemoryBarrier(0xb);
                      do {
                        iVar18 = *piVar5;
                        bVar34 = (bool)hasExclusiveAccess(piVar5);
                      } while (!bVar34);
                      *piVar5 = iVar18 + -1;
                      if (iVar18 == 1) {
                        DataMemoryBarrier(0xb);
                        FUN_0070451c(piVar5,puVar15);
                      }
                      puVar19 = puVar15;
                      piVar5 = piVar33;
                      goto LAB_01692e4c;
                    }
                  }
                  if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
                  local_4b0 = local_4b0 + 4;
                  uVar23 = uVar23 + local_4b0;
                } while( true );
              }
              do {
                iVar21 = *piVar5;
                bVar34 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar34);
              *piVar5 = iVar21 + 1;
              if (iVar21 < 0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)software_udf(0xfdee,0x1693950);
                (*pcVar14)();
              }
              uVar30 = FUN_016c8b40(piVar22[4],piVar22[5],piVar22[6],piVar22[7],lVar36);
              if (piVar22[2] == 0) {
                FUN_016c9ddc(piVar22,piVar22 + 4);
              }
              puVar31 = (uint *)*piVar22;
              uVar24 = piVar22[1];
              bVar34 = false;
              local_4b0 = 0;
              uVar23 = uVar30;
              do {
                uVar23 = uVar24 & uVar23;
                uVar9 = *(uint *)((int)puVar31 + uVar23);
                uVar8 = uVar9 ^ (uVar30 >> 0x19) * 0x1010101;
                uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
LAB_0169233c:
                if (uVar8 != 0) {
                  uVar12 = uVar23 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                   (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3
                                    ) & uVar24;
                  if ((puVar15 != (uint *)puVar31[uVar12 * -3 + -2]) ||
                     (iVar21 = thunk_FUN_01bed842(piVar25,puVar31[uVar12 * -3 + -3] + 8),
                     iVar21 != 0)) goto LAB_01692398;
                  puVar31[uVar12 * -3 + -1] = (uint)puVar19;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar21 = *piVar5;
                    bVar34 = (bool)hasExclusiveAccess(piVar5);
                  } while (!bVar34);
                  *piVar5 = iVar21 + -1;
                  if (iVar21 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0070451c(piVar5,puVar15);
                  }
                  goto LAB_016924bc;
                }
                uVar12 = uVar9 & 0x80808080;
                uVar8 = local_4c4;
                if (bVar34) {
LAB_016923e4:
                  if ((uVar12 & uVar9 << 1) != 0) goto LAB_01692574;
                  bVar34 = true;
                  local_4c4 = uVar8;
                }
                else {
                  if (uVar12 != 0) {
                    uVar8 = uVar23 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 |
                                                    (uVar12 >> 8 & 0xff) << 0x10 |
                                                    (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18)
                                     >> 3) & uVar24;
                    goto LAB_016923e4;
                  }
                  bVar34 = false;
                }
                local_4b0 = local_4b0 + 4;
                uVar23 = local_4b0 + uVar23;
              } while( true );
            }
            local_4a8 = &DAT_01d098c8;
            piVar25 = local_2e4;
            goto LAB_016937f4;
          }
          if (local_2d8 <= piVar33) goto LAB_01693818;
          piVar22 = local_2dc + (int)piVar33 * 3;
          iVar21 = piVar22[2];
          if (iVar21 == *piVar22) {
            FUN_015f5ab8(piVar22);
          }
          *(undefined4 *)(piVar22[1] + iVar21 * 8) = 0;
          local_2d4 = local_2d4 + 8;
          piVar22[2] = iVar21 + 1;
          goto LAB_01692510;
        }
        piVar5 = (int *)0x0;
        puVar31 = (uint *)0x80000001;
        goto LAB_01692e4c;
      }
LAB_016920f0:
      piVar33 = (int *)((int)piVar33 + 1);
      iVar18 = iVar18 + 0xc;
      puVar19 = puVar31;
    } while (iVar18 != iVar6);
  }
  FUN_016cae14(local_188,local_2f4,local_2f0);
  if (local_188[0] != (uint *)&DAT_80000004) {
    puVar19 = (uint *)local_180;
    puVar28 = local_188[1];
    piVar5 = local_17c;
    puVar31 = local_188[0];
LAB_01692e4c:
    FUN_016cb1b4(&local_2f8);
    *param_1 = 0x23;
    param_1[2] = puVar31;
    param_1[3] = puVar28;
    param_1[4] = puVar19;
    param_1[5] = piVar5;
    FUN_0134aee0(local_310,local_30c,4,4);
    FUN_0134aee0(local_31c,local_318,4,8);
    FUN_01693d10(auStack_478);
    return;
  }
  local_180 = local_2f8;
  local_17c = local_2f4;
  local_178 = (uint *)local_2f0;
  local_174 = (code *)local_2ec;
  local_170 = local_2e8;
  local_16c = local_2e4;
  uStack_168 = local_2e0;
  piStack_164 = local_2dc;
  piStack_160 = local_2d8;
  iStack_15c = local_2d4;
  local_188[1] = (uint *)0x1;
  local_188[0] = (uint *)0x1;
  puVar13 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  *puVar13 = local_188[0];
  puVar13[1] = local_188[1];
  puVar13[2] = local_180;
  puVar13[3] = local_17c;
  puVar13[4] = local_178;
  puVar13[5] = local_174;
  puVar13[6] = local_170;
  puVar13[7] = local_16c;
  puVar13[8] = uStack_168;
  puVar13[9] = piStack_164;
  puVar13[10] = piStack_160;
  puVar13[0xb] = iStack_15c;
  DataMemoryBarrier(0xb);
  do {
    iVar18 = *local_344;
    bVar34 = (bool)hasExclusiveAccess(local_344);
  } while (!bVar34);
  *local_344 = iVar18 + -1;
  if (iVar18 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9834(local_344);
  }
  piVar5 = (int *)param_2[5];
  local_344 = puVar13;
  if (piVar5 != piVar5 + uVar20 * 4) {
                    /* WARNING: Could not recover jumptable at 0x016927cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_016927d0 + *(int *)(&DAT_016927d0 + *piVar5 * 4)))();
    return;
  }
  FUN_018a7af8(&local_304,uVar20);
  iVar6 = local_300;
  uVar30 = local_308;
  iVar18 = local_30c;
  if (local_314 != 0) {
    puVar19 = local_318 + local_314 * 2;
    puVar28 = local_318;
    do {
      uVar23 = *puVar28;
      if (local_2fc <= uVar23) {
        puVar27 = &DAT_01d07a6c;
        goto LAB_0169371c;
      }
      if (*(char *)(iVar6 + uVar23) != '\x01') {
        uVar24 = puVar28[1];
        if (uVar20 <= uVar24) {
LAB_016936e8:
          puVar27 = &DAT_01d07a7c;
          local_2fc = uVar20;
          uVar23 = uVar24;
          goto LAB_0169371c;
        }
        uVar8 = uVar24;
        while( true ) {
          uVar37 = FUN_01693ccc(piVar5 + uVar8 * 4);
          uVar9 = (uint)(uVar37 >> 0x20);
          if ((uVar37 & 1) == 0) break;
          uVar8 = uVar9;
          if (uVar20 <= uVar9) {
            uVar24 = uVar9;
            goto LAB_016936e8;
          }
        }
        if (uVar30 <= uVar8) {
          puVar27 = &DAT_01d07a8c;
          local_2fc = uVar30;
          uVar23 = uVar8;
          goto LAB_0169371c;
        }
        if (uVar30 <= uVar23) {
          puVar27 = &DAT_01d07a9c;
          local_2fc = uVar30;
          goto LAB_0169371c;
        }
        *(undefined4 *)(iVar18 + uVar23 * 4) = *(undefined4 *)(iVar18 + uVar8 * 4);
        *(undefined1 *)(iVar6 + uVar23) = 1;
        while( true ) {
          uVar37 = FUN_01693ccc(piVar5 + uVar24 * 4);
          uVar23 = (uint)(uVar37 >> 0x20);
          if ((uVar37 & 1) == 0) break;
          if (uVar30 <= uVar24) {
            puVar27 = &DAT_01d07abc;
            local_2fc = uVar30;
            uVar23 = uVar24;
            goto LAB_0169371c;
          }
          *(undefined4 *)(iVar18 + uVar24 * 4) = *(undefined4 *)(iVar18 + uVar8 * 4);
          if (local_2fc <= uVar24) {
            puVar27 = &DAT_01d07acc;
            uVar23 = uVar24;
            goto LAB_0169371c;
          }
          *(undefined1 *)(iVar6 + uVar24) = 1;
          uVar24 = uVar23;
          if (uVar20 <= uVar23) {
            puVar27 = &DAT_01d07aac;
            local_2fc = uVar20;
            goto LAB_0169371c;
          }
        }
      }
      puVar28 = puVar28 + 2;
    } while (puVar28 != puVar19);
  }
  if (local_338 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01693028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0169302c + *(int *)(&DAT_0169302c + *local_33c * 4)))
              (&UNK_01d0778c,uVar30,*(int *)(&DAT_0169302c + *local_33c * 4),local_33c + 5);
    return;
  }
  if (local_358 < uVar30) {
    local_358 = *(uint *)(iVar18 + local_358 * 4);
    if (local_354 < uVar30) {
      local_354 = *(uint *)(iVar18 + local_354 * 4);
      if (local_32c != (uint *)0x0) {
        iVar6 = (int)local_32c << 2;
        puVar27 = &DAT_01d0770c;
        puVar28 = local_330;
        do {
          uVar23 = *puVar28;
          local_2fc = uVar30;
          if (uVar30 <= uVar23) goto LAB_0169371c;
          iVar6 = iVar6 + -4;
          *puVar28 = *(uint *)(iVar18 + uVar23 * 4);
          puVar28 = puVar28 + 1;
        } while (iVar6 != 0);
      }
      FUN_01bed4e2(&local_2f8,auStack_478,0x158);
      FUN_016c2edc(local_188,auStack_1f8);
      FUN_01bed4e2(&local_2f8,local_188,0x100);
      local_198 = 0;
      local_19c = (uint *)&SUB_00000004;
      local_1a0 = (uint *)0x0;
      local_170 = 0;
      local_174 = (code *)0x0;
      local_178 = (uint *)0x4;
      local_17c = (int *)0x0;
      local_180 = 0;
      local_188[1] = (uint *)&SUB_00000004;
      local_188[0] = (uint *)0x0;
      pcVar14 = (code *)local_1b8;
      if (local_1b8 == 0) {
        local_180 = local_1b8;
      }
      else {
        FUN_016c1078(local_188,local_1b8);
        if (local_174 < local_1b8) {
          FUN_016c1078(&local_17c,local_1b8 - (int)local_174);
          pcVar14 = local_174;
        }
      }
      puVar31 = local_178;
      piVar5 = local_17c;
      uVar20 = local_180;
      puVar19 = local_188[1];
      puVar28 = local_188[0];
      if (local_1ac == 0) {
        FUN_01bed4e2(&local_180,&local_2f8,0x158);
        local_188[1] = (uint *)0x1;
        local_188[0] = (uint *)0x1;
        iVar18 = thunk_FUN_01be5118(0x160);
        if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x160);
        }
        FUN_01bed4e2(iVar18,local_188,0x160);
        FUN_0134aee0(puVar28,puVar19,4,4);
        FUN_0134aee0(piVar5,puVar31,4,4);
        FUN_0134aee0(local_1a0,local_19c,4,4);
        *param_1 = 0x2a;
        param_1[1] = iVar18;
        FUN_019bb7e0(local_304,local_300);
        FUN_0134aee0(local_310,local_30c,4,4);
        FUN_0134aee0(local_31c,local_318,4,8);
        return;
      }
      uVar30 = *local_1b0;
      if (local_1a0 == (uint *)0x0) {
        FUN_01a54b48(&local_1a0);
        *local_19c = uVar30;
      }
      else {
        _SUB_00000004 = uVar30;
      }
      local_194[0] = *local_19c;
      local_198 = 0;
      if (local_194[0] < pcVar14) {
        local_194[1] = 0;
        if (uVar20 == 0) {
          local_17c = (int *)&LAB_01a6a304;
          local_188[1] = (uint *)&LAB_01a6a304;
          local_188[0] = local_194 + 1;
          local_174 = FUN_016cbc48;
          local_178 = local_194;
          local_180 = (uint)(local_194 + 2);
          local_18c = (uint *)uVar20;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0058fcf7,local_188,&DAT_01d08ae8);
        }
        *puVar19 = local_194[0];
        *(undefined4 *)((int)puVar31 + local_194[0] * 4) = 0;
        if (local_194[0] < local_1b8) {
                    /* WARNING: Could not recover jumptable at 0x0169338c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_01693390 +
                    *(int *)(&DAT_01693390 + *(int *)(local_1bc + local_194[0] * 0x14) * 4)))();
          return;
        }
        puVar27 = &DAT_01d0771c;
        pcVar14 = (code *)local_1b8;
      }
      else {
        puVar27 = &DAT_01d08af8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_194[0],pcVar14,puVar27);
    }
    puVar27 = &DAT_01d076fc;
    local_2fc = uVar30;
    uVar23 = local_354;
  }
  else {
    puVar27 = &DAT_01d076ec;
    local_2fc = uVar30;
    uVar23 = local_358;
  }
LAB_0169371c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar23,local_2fc,puVar27);
LAB_01692398:
  uVar8 = uVar8 - 1 & uVar8;
  goto LAB_0169233c;
LAB_01692574:
  uVar23 = (uint)*(char *)((int)puVar31 + uVar8);
  if (-1 < (int)uVar23) {
    uVar23 = *puVar31 & 0x80808080;
    uVar8 = LZCOUNT((*puVar31 & 0x80) << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                    (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18);
    uVar23 = (uint)*(byte *)((int)puVar31 + (uVar8 >> 3));
    uVar8 = uVar8 >> 3;
  }
  iVar21 = piVar22[3];
  iVar11 = piVar22[2];
  bVar4 = (byte)(uVar30 >> 0x19);
  *(byte *)((int)puVar31 + uVar8) = bVar4;
  piVar22[2] = iVar11 - (uVar23 & 1);
  piVar22[3] = iVar21 + 1;
  *(byte *)((int)puVar31 + (uVar24 & uVar8 - 4) + 4) = bVar4;
  *(longlong *)(puVar31 + uVar8 * -3 + -3) = lVar36;
  puVar31[uVar8 * -3 + -1] = (uint)puVar19;
LAB_016924bc:
  piVar25 = local_2d8;
  piVar5 = local_2dc;
  if (local_2d8 <= piVar33) {
LAB_016937f4:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(piVar33,piVar25,local_4a8);
  }
  piVar22 = local_2dc + (int)piVar33 * 3;
  iVar21 = piVar22[2];
  if (iVar21 == *piVar22) {
    FUN_015f5ab8(piVar22);
  }
  *(longlong *)(piVar22[1] + iVar21 * 8) = lVar36;
  piVar22[2] = iVar21 + 1;
  local_2d4 = local_2d4 + (int)puVar15 * 2 + 0x14;
LAB_01692510:
  puVar31 = (uint *)((int)puVar19 + 1);
  local_304 = (uint *)(((uint)(piVar26[1] - *piVar26) >> 1) + 1);
  local_18c = puVar31;
  if (puVar19 == (uint *)((uint)(piVar26[1] - *piVar26) >> 1)) {
    local_1a0 = puVar31;
    if (piVar25 <= piVar33) {
      local_4a4 = &DAT_01d09908;
LAB_01693814:
LAB_01693818:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(piVar33,piVar25,local_4a4);
    }
    local_188[0] = (uint *)piVar5[(int)piVar33 * 3 + 2];
    if (puVar31 == local_188[0]) {
      piVar29 = piVar29 + 2;
      puVar19 = puVar31;
      if (piVar29 == piVar7) goto LAB_016920f0;
      goto LAB_01692120;
    }
    ppuVar16 = &local_1a0;
    ppuVar17 = local_188;
  }
  else {
    ppuVar17 = &local_304;
    ppuVar16 = (uint **)(local_194 + 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01304210(0,ppuVar16,ppuVar17,0);
}

