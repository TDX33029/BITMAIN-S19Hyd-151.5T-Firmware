// FUN_014c42e8 @ 014c42e8 size=2588 calls_out=23 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014c42e8(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *extraout_r1;
  int *piVar14;
  undefined1 *extraout_r1_00;
  undefined1 *extraout_r1_01;
  undefined1 *extraout_r1_02;
  undefined1 *extraout_r1_03;
  undefined1 *extraout_r1_04;
  undefined1 *extraout_r1_05;
  undefined1 *extraout_r1_06;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  uint *puVar21;
  undefined4 uVar22;
  int *piVar23;
  undefined4 *puVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  int *piVar30;
  uint uVar31;
  bool bVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  undefined4 *local_484;
  int local_480;
  int local_478;
  int *local_458;
  int *local_454;
  undefined4 *local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  uint local_440;
  uint uStack_43c;
  uint uStack_438;
  uint local_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  int local_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  int local_404;
  undefined1 *local_400;
  uint *local_3fc;
  undefined4 uStack_3f8;
  int local_3f4;
  undefined1 auStack_3f0 [224];
  int *local_310;
  int *local_30c;
  int *local_308;
  int *piStack_304;
  int *piStack_300;
  int *piStack_2fc;
  int *local_230;
  int *local_22c;
  int *local_228;
  int *local_220;
  int *local_218;
  int *local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  int local_fc;
  int local_f8 [3];
  int local_ec;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_bc;
  int aiStack_b8 [3];
  int local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  
  uVar33 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar21 = (uint *)((int)uVar33 + (int)((ulonglong)uVar33 >> 0x20));
  if ((char)puVar21[4] == '\0') {
    FUN_019ae6ac(&local_148);
    *puVar21 = (uint)local_148;
    puVar21[1] = uStack_144;
    puVar21[2] = uStack_140;
    puVar21[3] = uStack_13c;
    *(undefined1 *)(puVar21 + 4) = 1;
  }
  local_440 = *puVar21;
  uStack_43c = puVar21[1];
  uStack_438 = puVar21[2];
  local_434 = puVar21[3];
  *puVar21 = local_440 + 1;
  puVar21[1] = uStack_43c + (0xfffffffe < local_440);
  local_450 = &DAT_0056d238;
  uStack_44c = 0;
  uStack_448 = 0;
  uStack_444 = 0;
  local_430 = *param_2;
  uStack_42c = param_2[1];
  uStack_428 = param_2[2];
  uStack_424 = param_2[3];
  local_420 = param_2[4];
  uStack_41c = param_2[5];
  uStack_418 = param_2[6];
  local_414 = param_2[7];
  if (local_414 != 0) {
    FUN_014bfeac(&local_450);
  }
  local_410 = *param_2;
  uStack_40c = param_2[1];
  uStack_408 = param_2[2];
  local_404 = param_2[3];
  puVar12 = (undefined1 *)param_2[4];
  local_3fc = (uint *)param_2[5];
  uStack_3f8 = param_2[6];
  local_3f4 = param_2[7];
  local_400 = puVar12;
LAB_014c43c4:
  if (local_3f4 != 0) {
    if (local_400 == (undefined1 *)0x0) {
      puVar21 = local_3fc;
      do {
        local_3fc = puVar21 + 1;
        uVar17 = *puVar21;
        local_404 = local_404 + -0x3a0;
        puVar21 = local_3fc;
      } while ((uVar17 & 0x80808080) == 0x80808080);
      local_400 = (undefined1 *)(uVar17 & 0x80808080 ^ 0x80808080);
    }
    local_3f4 = local_3f4 + -1;
    iVar13 = (short)-(short)((uint)LZCOUNT((int)local_400 << 0x18 |
                                           ((uint)local_400 >> 8 & 0xff) << 0x10 |
                                           ((uint)local_400 >> 0x10 & 0xff) << 8 |
                                           (uint)local_400 >> 0x18) >> 3) * 0xe8 + local_404;
    local_400 = (undefined1 *)((uint)(local_400 + -1) & (uint)local_400);
    uVar1 = *(undefined1 *)(iVar13 + -0xe8);
    uVar2 = *(undefined1 *)(iVar13 + -0xe7);
    piVar18 = *(int **)(iVar13 + -0xe4);
    FUN_01bed4e2(auStack_3f0,iVar13 + -0xe0,0xe0);
    puVar12 = extraout_r1;
    if (piVar18 != (int *)&DAT_00000005) {
      if (piVar18 < &DAT_00000003) {
        local_148 = piVar18;
        FUN_01bed4e2(&uStack_144,auStack_3f0,0xe0);
        iVar13 = 0x8c;
        if (piVar18 == (int *)0x2) {
          iVar13 = 0x4c;
        }
        iVar4 = 0x90;
        piVar14 = (int *)((int)local_f8 + iVar13 + -0x50);
        if (piVar18 == (int *)0x2) {
          iVar4 = 0x50;
        }
        iVar19 = 0;
        if (*(int *)((int)local_f8 + iVar13 + -0x50) == 1) {
          puVar5 = (undefined4 *)((int)local_f8 + iVar4 + -0x50);
          piVar23 = (int *)*puVar5;
          iVar13 = 0x98;
          if (piVar18 == (int *)0x2) {
            iVar13 = 0x58;
          }
          uVar22 = 0;
          piVar28 = *(int **)((int)local_f8 + iVar13 + -0x50);
          iVar13 = 0x94;
          if (piVar18 == (int *)0x2) {
            iVar13 = 0x54;
          }
          bVar32 = piVar23 != (int *)0x0;
          if (!bVar32) {
            piVar28 = (int *)0x0;
          }
          piVar30 = local_454;
          if ((int *)0xaaaaaaa < piVar28) {
LAB_014c4c40:
            local_454 = piVar30;
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar22,local_454);
          }
          uVar17 = *(uint *)((int)local_f8 + iVar13 + -0x50);
          piVar25 = (int *)0x0;
          piVar30 = (int *)((int)piVar28 * 0xc);
          if (piVar30 == (int *)0x0) {
            local_454 = (int *)&SUB_00000004;
            local_310 = (int *)0x0;
          }
          else {
            uVar22 = 4;
            local_454 = (int *)FUN_01298504(piVar30,4);
            if (local_454 == (int *)0x0) goto LAB_014c4c40;
            local_310 = piVar28;
          }
          iVar13 = 0;
          local_308 = (int *)0x0;
          local_30c = local_454;
          for (piVar30 = piVar28; piVar6 = local_30c, piVar30 != (int *)0x0;
              piVar30 = (int *)((int)piVar30 + -1)) {
            if (!bVar32) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2ffe0);
            }
            if (piVar25 == (int *)0x0) {
              piVar6 = (int *)0x0;
              for (; uVar17 != 0; uVar17 = uVar17 - 1) {
                piVar23 = (int *)piVar23[0x23];
              }
              uVar15 = 0;
            }
            else {
              piVar6 = piVar23;
              uVar15 = uVar17;
              piVar23 = piVar25;
            }
            piVar25 = piVar23;
            if (*(ushort *)((int)piVar23 + 0x8a) <= uVar15) {
              do {
                piVar23 = (int *)*piVar25;
                if (piVar23 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d2fff0);
                }
                uVar15 = (uint)*(ushort *)(piVar25 + 0x22);
                piVar6 = (int *)((int)piVar6 + 1);
                piVar25 = piVar23;
              } while (*(ushort *)((int)piVar23 + 0x8a) <= uVar15);
            }
            if (piVar6 == (int *)0x0) {
              uVar17 = uVar15 + 1;
              piVar25 = piVar23;
            }
            else {
              piVar26 = piVar23 + uVar15 + 0x24;
              do {
                piVar25 = (int *)*piVar26;
                piVar6 = (int *)((int)piVar6 + -1);
                piVar26 = piVar25 + 0x23;
              } while (piVar6 != (int *)0x0);
              uVar17 = 0;
            }
            FUN_00664bdc(&local_230,piVar23[uVar15 * 3 + 2],piVar23[uVar15 * 3 + 3]);
            piVar23 = local_454 + iVar13 * 3;
            iVar13 = iVar13 + 1;
            bVar32 = true;
            *piVar23 = (int)local_230;
            piVar23[1] = (int)local_22c;
            piVar23[2] = (int)local_228;
            piVar23 = (int *)0x0;
          }
          local_60 = local_310;
          local_5c = local_30c;
          local_308 = piVar28;
          local_58 = piVar28;
          if (piVar28 != (int *)0x0) {
            if (piVar28 != (int *)&DAT_00000001) {
              if (&DAT_00000014 < piVar28) {
                FUN_014c2214(local_30c,piVar28);
              }
              else {
                iVar13 = 0xc;
                do {
                  FUN_015388e0(piVar6,(undefined1 *)((int)piVar6 + iVar13));
                  iVar13 = iVar13 + 0xc;
                } while ((int)piVar28 * 0xc != iVar13);
              }
            }
            local_48 = local_60;
            local_4c = piVar6;
            local_44 = piVar6 + (int)piVar28 * 3;
            local_50 = piVar6;
            puVar7 = (undefined4 *)FUN_01961624();
            local_228 = local_22c;
            piVar23 = local_230;
            *(undefined2 *)((int)puVar7 + 0x8a) = 0;
            *puVar7 = 0;
            local_480 = 0;
            piVar28 = (int *)0x80000001;
            local_310 = local_230;
            local_30c = local_22c;
            local_308 = local_50;
            piStack_304 = local_4c;
            piStack_300 = local_48;
            piStack_2fc = local_44;
            local_230 = (int *)0x80000001;
            local_22c = piVar23;
            local_220 = local_4c;
            local_218 = local_44;
            local_478 = 0;
            local_484 = puVar7;
LAB_014c471c:
            piVar23 = local_218;
            local_458 = local_228;
            piVar30 = local_220;
            piVar25 = local_22c;
            piVar6 = local_228;
            piVar26 = piVar28;
            do {
              piVar9 = piVar30;
              if (piVar26 == (int *)0x80000001) {
                if (piVar30 != piVar23) {
                  piVar9 = piVar30 + 3;
                  piVar26 = (int *)*piVar30;
                  if (piVar26 != (int *)0x80000000) {
                    local_458 = (int *)piVar30[2];
                    piVar20 = (int *)piVar30[1];
                    goto LAB_014c4774;
                  }
                }
LAB_014c4904:
                local_230 = (int *)&DAT_80000001;
                local_22c = piVar25;
                local_228 = piVar6;
                local_220 = piVar9;
                FUN_014c2718(&local_230);
                if (local_480 == 0) goto LAB_014c4a94;
                puVar7 = local_484;
                iVar13 = local_480;
                goto LAB_014c4934;
              }
              piVar20 = piVar25;
              if (piVar26 == (int *)0x80000000) goto LAB_014c4904;
LAB_014c4774:
              piVar30 = piVar9;
              if (piVar9 == piVar23) {
LAB_014c47dc:
                piVar28 = (int *)0x80000000;
                local_22c = piVar25;
                local_228 = piVar6;
                local_220 = piVar30;
                goto LAB_014c47ec;
              }
              piVar30 = piVar9 + 3;
              piVar28 = (int *)*piVar9;
              if (piVar28 == (int *)0x80000000) goto LAB_014c47dc;
              piVar25 = (int *)piVar9[1];
              piVar6 = (int *)piVar9[2];
              if ((local_458 != piVar6) ||
                 (iVar13 = thunk_FUN_01bed842(piVar20,piVar25), iVar13 != 0)) goto LAB_014c47c8;
              FUN_019bb7e0(piVar26,piVar20);
              piVar26 = piVar28;
            } while( true );
          }
          FUN_006a41c0();
          local_478 = 0;
          local_484 = (undefined4 *)0x0;
          goto LAB_014c4a94;
        }
        goto LAB_014c4acc;
      }
      FUN_01bed4e2(&local_310,auStack_3f0,0xe0);
      goto LAB_014c4b28;
    }
  }
  FUN_014bfdec(&local_410,puVar12);
  *param_1 = local_450;
  param_1[1] = uStack_44c;
  param_1[2] = uStack_448;
  param_1[3] = uStack_444;
  param_1[4] = local_440;
  param_1[5] = uStack_43c;
  param_1[6] = uStack_438;
  param_1[7] = local_434;
  return;
  while (puVar7 = puVar8, iVar13 != 0) {
LAB_014c4934:
    uVar17 = (uint)*(ushort *)((int)puVar7 + 0x8a);
    if (uVar17 == 0) {
      uVar22 = 0x19;
      puVar11 = &DAT_00533a28;
      puVar16 = &DAT_01d305a8;
      goto LAB_014c4cc0;
    }
    iVar4 = uVar17 - 1;
    iVar13 = iVar13 + -1;
    puVar8 = (undefined4 *)puVar7[uVar17 + 0x23];
    uVar15 = (uint)*(ushort *)((int)puVar8 + 0x8a);
    if (uVar15 < 5) {
      iVar19 = puVar7[uVar17 + 0x22];
      uVar17 = -uVar15 + 5;
      uVar31 = (uint)*(ushort *)(iVar19 + 0x8a);
      if (uVar31 < uVar17) {
        uVar22 = 0x27;
        puVar11 = &DAT_00533acc;
        puVar16 = &DAT_01d30618;
LAB_014c4cc0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(puVar11,uVar22,puVar16);
      }
      iVar27 = uVar31 - uVar17;
      *(short *)(iVar19 + 0x8a) = (short)iVar27;
      *(undefined2 *)((int)puVar8 + 0x8a) = 5;
      puVar24 = puVar8 + 1;
      FUN_01bed864(puVar24 + uVar17 * 3,puVar24,uVar15 * 0xc);
      iVar29 = iVar27 + 1;
      iVar10 = uVar31 - iVar29;
      if (iVar10 != -uVar15 + 4) {
        uVar22 = 0x28;
        puVar11 = &DAT_00533a71;
        puVar16 = &DAT_01d305f8;
        goto LAB_014c4cc0;
      }
      FUN_01bed4e2(puVar24,iVar19 + 4 + iVar29 * 0xc,iVar10 * 0xc);
      local_230 = (int *)puVar7[iVar4 * 3 + 1];
      local_22c = (int *)puVar7[iVar4 * 3 + 2];
      local_228 = (int *)puVar7[iVar4 * 3 + 3];
      FUN_01bed864(puVar7 + iVar4 * 3 + 1,iVar19 + 4 + iVar27 * 0xc,0xc);
      puVar24 = puVar24 + iVar10 * 3;
      *puVar24 = local_230;
      puVar24[1] = local_22c;
      puVar24[2] = local_228;
      if (iVar13 == 0) break;
      puVar7 = puVar8 + 0x23;
      FUN_01bed864(puVar7 + uVar17,puVar7,uVar17 * -4 + 0x18);
      FUN_01bed4e2(puVar7,iVar19 + iVar29 * 4 + 0x8c,uVar17 * 4);
      iVar4 = 0;
      do {
        puVar7 = (undefined4 *)puVar8[iVar4 + 0x23];
        *(short *)(puVar7 + 0x22) = (short)iVar4;
        iVar4 = iVar4 + 1;
        *puVar7 = puVar8;
      } while (iVar4 != 6);
    }
  }
LAB_014c4a94:
  iVar19 = 1;
  if (*piVar14 != 0) {
    FUN_01960c70(puVar5);
  }
LAB_014c4acc:
  piVar23 = local_148;
  *piVar14 = iVar19;
  bVar32 = piVar18 == (int *)0x2;
  iVar13 = 0x90;
  if (bVar32) {
    iVar13 = 0x50;
  }
  *(undefined4 **)((int)local_f8 + iVar13 + -0x50) = local_484;
  iVar13 = 0x94;
  if (bVar32) {
    iVar13 = 0x54;
  }
  *(int *)((int)local_f8 + iVar13 + -0x50) = local_480;
  iVar13 = 0x98;
  if (bVar32) {
    iVar13 = 0x58;
  }
  *(int *)((int)local_f8 + iVar13 + -0x50) = local_478;
  FUN_01bed4e2(&local_310,&uStack_144,0xe0);
  piVar18 = piVar23;
LAB_014c4b28:
  local_230 = piVar18;
  FUN_01bed4e2(&local_22c,&local_310,0xe0);
  FUN_014c2324(&local_148,&local_450,uVar1,uVar2,&local_230);
  puVar12 = (undefined1 *)((int)local_148 + -3);
  if ((undefined1 *)0x2 < puVar12) {
    if (local_148 == (int *)0x2) {
      FUN_019bb7e0(local_134,local_130);
      piVar18 = local_f8;
      puVar12 = extraout_r1_00;
      iVar13 = local_fc;
      if (local_ec != 2) {
        FUN_019bb7e0(local_dc,local_d8);
        puVar12 = extraout_r1_01;
        iVar13 = local_fc;
      }
    }
    else {
      FUN_019bb7e0(local_138,local_134);
      puVar12 = extraout_r1_02;
      if (local_ac != 2) {
        FUN_019bb7e0(local_9c,local_98);
        puVar12 = extraout_r1_03;
      }
      if (local_f8[0] != -0x80000000) {
        FUN_019bb7e0();
        puVar12 = extraout_r1_04;
      }
      piVar18 = aiStack_b8;
      iVar13 = local_bc;
      if (local_ec != -0x80000000) {
        FUN_019bb7e0();
        puVar12 = extraout_r1_05;
        iVar13 = local_bc;
      }
    }
    if (iVar13 != 0) {
      FUN_01960c70(piVar18);
      puVar12 = extraout_r1_06;
    }
  }
  goto LAB_014c43c4;
LAB_014c47c8:
  local_22c = piVar25;
  local_228 = piVar6;
  local_220 = piVar30;
LAB_014c47ec:
  local_230 = piVar28;
  if (*(ushort *)((int)puVar7 + 0x8a) < 0xb) {
    local_34 = local_458;
    local_3c = piVar26;
    local_38 = piVar20;
    FUN_0196081c(&local_30,puVar7,&local_3c);
  }
  else {
    iVar13 = 0;
    do {
      puVar7 = (undefined4 *)*puVar7;
      uVar33 = CONCAT44(local_480,puVar7);
      if (puVar7 == (undefined4 *)0x0) {
        uVar33 = FUN_01960938(local_484,local_480);
        uVar3 = uVar33;
        break;
      }
      iVar13 = iVar13 + 1;
      uVar3 = CONCAT44(iVar13,local_484);
    } while (10 < *(ushort *)((int)puVar7 + 0x8a));
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    local_484 = (undefined4 *)uVar3;
    local_480 = (int)((ulonglong)uVar33 >> 0x20);
    puVar7 = (undefined4 *)uVar33;
    puVar8 = (undefined4 *)FUN_01961624();
    uVar34 = ZEXT48(puVar8);
    *(undefined2 *)((int)puVar8 + 0x8a) = 0;
    *puVar8 = 0;
    iVar13 = iVar4;
    while( true ) {
      iVar13 = iVar13 + -1;
      if (iVar13 == 0) break;
      uVar34 = FUN_01960938((int)uVar34);
    }
    local_28 = local_458;
    local_30 = piVar26;
    local_2c = piVar20;
    FUN_01960890(puVar7,iVar4,&local_30,(int)uVar34,(int)(uVar34 >> 0x20));
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar7 = (undefined4 *)puVar7[*(ushort *)((int)puVar7 + 0x8a) + 0x23];
    }
  }
  local_478 = local_478 + 1;
  goto LAB_014c471c;
}

