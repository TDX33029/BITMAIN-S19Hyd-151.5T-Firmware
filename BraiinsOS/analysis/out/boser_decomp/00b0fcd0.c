// FUN_00b0fcd0 @ 00b0fcd0 size=4804 calls_out=52 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_00b0fcd0(int *param_1,int *param_2)

{
  code *pcVar1;
  int *****pppppiVar2;
  undefined1 uVar3;
  byte bVar4;
  int *****pppppiVar5;
  int *****pppppiVar6;
  char cVar7;
  undefined4 *puVar8;
  int *****pppppiVar9;
  int ****ppppiVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int *****pppppiVar16;
  int iVar17;
  undefined2 uVar18;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 extraout_r1;
  int *****extraout_r1_00;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  int *****pppppiVar24;
  int ****ppppiVar25;
  int *****unaff_r5;
  int *piVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int iVar30;
  int *piVar31;
  bool bVar32;
  undefined8 uVar33;
  int *****local_680;
  undefined4 local_67c;
  undefined4 *local_678;
  int *****local_5e8;
  int *****pppppiStack_5e4;
  int *****pppppiStack_5e0;
  int *****local_5d8;
  code *local_5d4;
  int local_550;
  int iStack_54c;
  int *****pppppiStack_548;
  int iStack_544;
  int *****local_540;
  int *****local_53c;
  int *****local_538;
  int local_530;
  int local_52c;
  int *****local_528;
  int iStack_524;
  undefined1 auStack_520 [108];
  byte local_4b4;
  int local_4a0 [2];
  int *****local_498;
  int *****pppppiStack_494;
  int *****pppppiStack_490;
  int *****pppppiStack_48c;
  undefined2 local_488;
  undefined1 local_486;
  int *****local_480;
  int *****pppppiStack_47c;
  int *****pppppiStack_478;
  int *****local_470;
  int *****pppppiStack_46c;
  int *****pppppiStack_468;
  undefined1 local_464;
  undefined1 auStack_463 [11];
  int *****local_458;
  int *****pppppiStack_454;
  int *****pppppiStack_450;
  int *****pppppiStack_44c;
  int *****pppppiStack_448;
  int *****pppppiStack_444;
  undefined4 local_440;
  int *****local_43c;
  int *****local_438;
  undefined4 local_434;
  byte local_42c;
  undefined4 local_428;
  int *****pppppiStack_424;
  int *****pppppiStack_420;
  int *****pppppiStack_41c;
  int *local_418;
  int local_414;
  int *****local_410 [27];
  char local_3a4;
  int local_390;
  int local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  int *****local_378;
  int *****local_374;
  int *****local_370;
  int *****local_36c;
  int *****pppppiStack_368;
  int *****local_364;
  int *local_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  int local_350;
  int local_34c;
  int local_348;
  int *****local_344;
  int iStack_340;
  undefined4 local_33c;
  undefined4 local_2a4;
  int *****local_280;
  int *****local_27c;
  int *****local_278;
  int *****pppppiStack_274;
  int *****pppppiStack_270;
  int *****pppppiStack_26c;
  int *piStack_268;
  int iStack_264;
  undefined1 auStack_260 [144];
  int *****local_1d0;
  int *****pppppiStack_1cc;
  int *****pppppiStack_1c8;
  int *****pppppiStack_1c4;
  int *piStack_1c0;
  int iStack_1bc;
  int *****local_1b8;
  int *****local_1b4;
  int *****local_1b0;
  int local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *****local_120;
  int *****local_11c;
  int *****local_118;
  int *****local_114;
  undefined4 local_110;
  int *****local_10c;
  int *local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int local_f4;
  int iStack_f0;
  int *****pppppiStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined4 local_88;
  
  if (*param_1 == 4 || *param_1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  puVar8 = (undefined4 *)((uint)&local_440 | 4);
  puVar19 = (undefined4 *)((uint)&local_428 | 4);
  iVar23 = *param_2;
  piVar20 = param_1 + 0x18;
  pppppiVar16 = (int *****)&local_370;
LAB_00b0fe34:
  FUN_01a881f8(&local_280,param_1 + 0x16,iVar23);
  if (((uint)local_280 & 0xff) == 5) {
    pppppiVar9 = (int *****)*param_1;
    *param_1 = 2;
    if (pppppiVar9 == (int *****)0x2) {
      FUN_009d55a4(&local_680,param_1[0x1b],param_1[0x1c],iVar23);
      if (((uint)local_680 & 7) == 3) {
        uVar21 = 0;
        goto LAB_00b10a88;
      }
      if (local_680 == (int *****)&SUB_00000004) {
        iVar23 = param_1[0x13];
        DataMemoryBarrier(0xb);
        if (*(char *)(iVar23 + 0x20) == '\0') {
          uVar33 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
          pcVar15 = (char *)(iVar23 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            cVar7 = *pcVar15;
            bVar32 = (bool)hasExclusiveAccess(pcVar15);
          } while (!bVar32);
          *pcVar15 = '\x01';
          unaff_r5 = (int *****)(iVar23 + 8);
          if (cVar7 != '\0') {
            unaff_r5 = (int *****)0x0;
          }
          DataMemoryBarrier(0xb);
          if (cVar7 == '\0') {
            ppppiVar10 = *(int *****)(iVar23 + 8);
            if (ppppiVar10 != (int ****)0x0) {
              (*(code *)ppppiVar10[3])(unaff_r5[1]);
            }
            *(undefined8 *)(iVar23 + 8) = uVar33;
            DataMemoryBarrier(0xb);
            *(undefined1 *)(unaff_r5 + 2) = 0;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            if (*(char *)(iVar23 + 0x20) != '\0') goto LAB_00b10a50;
            goto LAB_00b108e8;
          }
          (**(code **)((int)uVar33 + 0xc))((int)((ulonglong)uVar33 >> 0x20));
        }
LAB_00b10a50:
        pcVar15 = (char *)(iVar23 + 0x21);
        DataMemoryBarrier(0xb);
        do {
          cVar7 = *pcVar15;
          bVar32 = (bool)hasExclusiveAccess(pcVar15);
        } while (!bVar32);
        *pcVar15 = '\x01';
        uVar21 = 0;
        DataMemoryBarrier(0xb);
        if (cVar7 == '\0') {
          DataMemoryBarrier(0xb);
          *pcVar15 = '\0';
          DataMemoryBarrier(0xb);
        }
        goto LAB_00b10a88;
      }
      FUN_01bed4e2(&local_5d8,&local_680,0x98);
      local_540 = local_5e8;
      local_53c = pppppiStack_5e4;
      local_538 = pppppiStack_5e0;
      if (((uint)local_5e8 & 1) == 0) {
        if (pppppiStack_5e4 == (int *****)0x0) goto LAB_00b10e68;
        if (pppppiStack_5e0 == (int *****)0x0) goto LAB_00b10e84;
        ppppiVar10 = pppppiStack_5e0[0x2e];
      }
      else {
        if (pppppiStack_5e4 == (int *****)0x0) {
LAB_00b10e68:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d1f0e0);
        }
        if (pppppiStack_5e0 == (int *****)0x0) {
LAB_00b10e84:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2ce28);
        }
        ppppiVar10 = pppppiStack_5e0[0x20];
      }
      DataMemoryBarrier(0xb);
      if (((uint)ppppiVar10 & 4) != 0) goto LAB_00b0ffa0;
      FUN_01bed4e2(auStack_520,&local_5d8,0x88);
      local_530 = local_550;
      local_52c = iStack_54c;
      local_528 = pppppiStack_548;
      iStack_524 = iStack_544;
      FUN_01428cf8(auStack_520,1);
      pppppiVar9 = local_528;
      if (local_530 == 0) {
        pppppiVar9 = (int *****)0x0;
      }
      uVar22 = extraout_r1;
      if (((pppppiVar9 != (int *****)0x0) || (uVar21 = (uint)local_4b4, 7 < uVar21)) ||
         (uVar22 = 0xb2, (1 << uVar21 & 0xb2U) == 0)) {
        FUN_01429d5c(auStack_520,uVar22,pppppiVar9,0);
        uVar21 = (uint)local_4b4;
      }
      iVar17 = local_530;
      if (uVar21 == 7) {
        FUN_01429b04(&local_120,auStack_520);
        bVar32 = ((uint)local_120 & 1) != 0;
        pppppiVar9 = local_120;
        pppppiVar2 = extraout_r1_00;
        if (bVar32) {
          pppppiVar9 = local_118;
          pppppiVar2 = local_114;
        }
        if (!bVar32 || pppppiVar9 == (int *****)0x0 && pppppiVar2 == (int *****)0x0)
        goto LAB_00b10000;
        local_378 = local_540;
        local_374 = local_53c;
        local_370 = local_538;
        local_88 = FUN_01427b74(1,2);
        local_11c = (int *****)0x0;
        local_120 = (int *****)&DAT_00000003;
        FUN_009d5e40(&local_378,&local_120);
        FUN_009d5814(auStack_520);
      }
      else {
LAB_00b10000:
        if (local_4a0[0] != 0) {
          uVar33 = FUN_0070bdb8(local_4a0[0],&DAT_0056a398);
          if ((int)uVar33 != 0) {
            uVar33 = (**(code **)((int)((ulonglong)uVar33 >> 0x20) + 0x1c))();
            iVar14 = (int)((ulonglong)uVar33 >> 0x20);
            puVar11 = (undefined4 *)uVar33;
            (**(code **)(iVar14 + 0xc))(&local_120,puVar11);
            if ((local_120 == (int *****)0xf32ad625 && local_118 == (int *****)0xaba474e5) &&
                (local_11c == (int *****)0xc1a5b328 && local_114 == (int *****)0xb8feb6d3)) {
              pppppiVar9 = (int *****)*puVar11;
              local_280 = (int *****)puVar11[1];
              local_27c = (int *****)puVar11[2];
              local_278 = (int *****)puVar11[3];
              thunk_FUN_01be4678(puVar11);
              if (pppppiVar9 != (int *****)0x0) {
                local_11c = local_280;
                local_118 = local_27c;
                local_114 = local_278;
                local_120 = pppppiVar9;
                FUN_01386d3c(&local_378,local_4a0,&local_120);
                if (local_378 != (int *****)0x0) {
                  (*(code *)local_378[4])(&local_36c,local_374,local_370);
                }
              }
            }
            else {
              FUN_01443048(puVar11,iVar14);
            }
          }
        }
        FUN_01bed4e2(local_410,auStack_520,0x88);
        iVar14 = local_390;
        piVar26 = (int *)param_1[0x16];
        piVar31 = (int *)param_1[0x17];
        iVar30 = param_1[0x18];
        FUN_01a7fd20(&local_388,local_390);
        if (iVar14 != 0) {
          FUN_01a6915c(iVar14);
        }
        FUN_01933ff0(&local_120,piVar26 + 2);
        pppppiVar9 = local_11c;
        if (local_120 == (int *****)&DAT_00000001) {
          local_374 = (int *****)CONCAT31(local_374._1_3_,local_118._0_1_);
          local_378 = local_11c;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_378,&DAT_01d2cac8,&DAT_01d2c8b8);
        }
        uVar12 = (uint)local_118 & 0xff;
        FUN_01656cb0(&local_120,piVar31 + 2);
        pppppiVar2 = local_11c;
        if (local_120 == (int *****)&DAT_00000001) {
          local_374 = (int *****)CONCAT31(local_374._1_3_,local_118._0_1_);
          local_378 = local_11c;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_378,&DAT_01d2cab8,&DAT_01d2c8c8);
        }
        uVar13 = (uint)local_118 & 0xff;
        FUN_01383464(&local_120,pppppiVar9 + 0xe);
        cVar7 = (char)local_120;
        if ((char)local_120 == '\x03') {
          pppppiVar24 = pppppiVar9 + 0x3a;
          if (*pppppiVar24 != (int ****)0x0) {
LAB_00b10228:
            uVar18 = 0x503;
LAB_00b102a0:
            local_428 = (int *****)CONCAT22(local_428._2_2_,uVar18);
            goto LAB_00b102a8;
          }
          if ((iVar30 != 0) &&
             (iVar14 = FUN_01367c40(pppppiVar9[99],pppppiVar9[100],param_1[0x19],param_1[0x1a]),
             *(char *)(iVar14 + 0xec) == '\x01')) {
            uVar18 = 0x303;
            goto LAB_00b102a0;
          }
          if (*(char *)(pppppiVar9 + 0xd) != '\0') {
            uVar18 = 0x103;
            goto LAB_00b102a0;
          }
          if (*pppppiVar24 != (int ****)0x0) goto LAB_00b10228;
          ppppiVar10 = pppppiVar9[0x3b];
          pppppiVar9[0x3a] = (int ****)((int)ppppiVar10 + 2U >> 0x1f);
          pppppiVar9[0x3b] = (int ****)((int)ppppiVar10 + 2U);
          FUN_013850f0(&local_378,ppppiVar10,pppppiVar9[0x53],pppppiVar9[0x2c]);
          if (local_3a4 == '\x05') {
            local_374 = (int *****)0x0;
            local_378 = (int *****)&DAT_00000001;
          }
          FUN_01bed4e2(&local_1b8,local_410,0x88);
          local_130 = local_388;
          uStack_12c = local_384;
          uStack_128 = local_380;
          uStack_124 = uStack_37c;
          FUN_01389900(&local_120,ppppiVar10,&local_1b8,&local_130,iVar17 == 0 && uVar21 != 7);
          pppppiVar6 = local_11c;
          pppppiVar5 = local_120;
          local_1d0 = local_118;
          pppppiStack_1cc = local_114;
          pppppiStack_1c8 = local_110;
          pppppiStack_1c4 = local_10c;
          piStack_1c0 = local_108;
          iStack_1bc = iStack_104;
          if (local_120 == (int *****)&DAT_00000003 && local_11c == (int *****)0x0) {
            local_428 = local_1d0;
            pppppiStack_424 = pppppiStack_1cc;
            pppppiStack_420 = pppppiStack_1c8;
            pppppiStack_41c = pppppiStack_1c4;
            local_418 = piStack_1c0;
            local_414 = iStack_1bc;
            FUN_01383b68(&local_378);
          }
          else {
            FUN_01bed4e2(auStack_260,&iStack_100,0x90);
            uVar22 = local_2a4;
            local_278 = local_1d0;
            pppppiStack_274 = pppppiStack_1cc;
            pppppiStack_270 = pppppiStack_1c8;
            pppppiStack_26c = pppppiStack_1c4;
            piStack_268 = piStack_1c0;
            iStack_264 = iStack_1bc;
            local_27c = pppppiVar6;
            local_280 = pppppiVar5;
            FUN_01bed4e2(&local_120,&local_378,0xf8);
            FUN_0136a88c(&local_1b8,pppppiVar9 + 0x56,uVar22,&local_120);
            FUN_01bed4e2(&local_120,&local_280,0xb0);
            cVar7 = FUN_01a85dac(pppppiVar24,&local_120,pppppiVar2 + 2,&local_1b8,pppppiVar9 + 2,
                                 pppppiVar9 + 0x38);
            if (cVar7 == '\f') {
              ppppiVar10 = pppppiVar9[5];
              ppppiVar25 = pppppiVar9[4];
              pppppiVar9[0x68] = (int ****)((int)pppppiVar9[0x68] + 1);
              do {
                iVar14 = *piVar26;
                bVar32 = (bool)hasExclusiveAccess(piVar26);
              } while (!bVar32);
              *piVar26 = iVar14 + 1;
              if (iVar14 < 0) {
LAB_00b10fb4:
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0xb10fb4);
                (*pcVar1)();
              }
              FUN_01381984(&local_120,piVar26,&local_1b8);
              do {
                iVar14 = *piVar31;
                bVar32 = (bool)hasExclusiveAccess(piVar31);
              } while (!bVar32);
              *piVar31 = iVar14 + 1;
              if (iVar14 < 0) goto LAB_00b10fb4;
              *puVar19 = local_120;
              puVar19[1] = local_11c;
              puVar19[2] = local_118;
              local_428 = (int *****)CONCAT31(local_428._1_3_,4);
              local_414 = CONCAT31(local_414._1_3_,ppppiVar25 <= (int ****)((int)ppppiVar10 + 1U));
              local_418 = piVar31;
            }
            else {
              FUN_0136a2e8(local_1b8,local_1b0);
              local_120 = local_1b8;
              local_11c = local_1b4;
              local_118 = local_1b0;
              FUN_0136a0c0();
              local_428 = (int *****)CONCAT31(CONCAT21(local_428._2_2_,cVar7),3);
            }
          }
          FUN_00a97e8c(pppppiVar2,uVar13);
          FUN_00a97e8c(pppppiVar9,uVar12);
        }
        else {
          FUN_01bed4e2((uint)&local_428 | 1,(uint)&local_120 | 1,0x17);
          local_428 = (int *****)CONCAT31(local_428._1_3_,cVar7);
LAB_00b102a8:
          FUN_00a97e8c(pppppiVar2,uVar13);
          FUN_00a97e8c(pppppiVar9,uVar12);
          if (local_388 != 0) {
            (**(code **)(local_388 + 0x10))(&uStack_37c,local_384,local_380);
          }
          FUN_01354a94(local_410);
        }
        if (((uint)local_428 & 0xff) == 4) {
          uVar22 = puVar19[1];
          uVar27 = puVar19[2];
          uVar28 = puVar19[3];
          uVar29 = puVar19[4];
          *puVar8 = *puVar19;
          puVar8[1] = uVar22;
          puVar8[2] = uVar27;
          puVar8[3] = uVar28;
          puVar8[4] = uVar29;
LAB_00b10314:
          bVar4 = local_42c;
          uVar22 = local_434;
          pppppiVar9 = local_438;
          FUN_01933ff0(&local_378,local_43c + 2);
          pppppiVar2 = local_374;
          if (local_378 == (int *****)&DAT_00000001) {
            local_27c = (int *****)CONCAT31(local_27c._1_3_,local_370._0_1_);
            local_280 = local_374;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_280,&DAT_01d2cac8,&DAT_01d2c7a8);
          }
          uVar12 = (uint)local_370 & 0xff;
          iVar14 = FUN_01367c40(local_374[99],local_374[100],pppppiVar9,uVar22);
          cVar7 = *(char *)(iVar14 + 0xec);
          FUN_00a97e8c(pppppiVar2,uVar12);
          if ((cVar7 == '\x01') && ((bVar4 & 1) != 0)) {
            FUN_01383dd8(&local_378,puVar8);
            local_280 = local_378;
            local_27c = local_374;
            local_278 = local_370;
            if (*piVar20 != 0) {
              FUN_008e0f4c(piVar20);
            }
            *piVar20 = (int)local_280;
            param_1[0x19] = (int)local_27c;
            param_1[0x1a] = (int)local_278;
          }
          FUN_01383dd8(&local_378,puVar8);
          local_480 = local_378;
          pppppiStack_47c = local_374;
          pppppiStack_478 = local_370;
          FUN_01bed4e2((uint)&local_120 | 3,puVar8,0x10);
          local_498 = local_120;
          pppppiStack_494 = local_11c;
          pppppiStack_490 = local_118;
          pppppiStack_48c = local_114;
          local_486 = local_110._2_1_;
          local_488 = (undefined2)local_110;
          local_36c = local_480;
          pppppiStack_368 = pppppiStack_47c;
          local_364 = pppppiStack_478;
          local_360 = (int *)((uint)local_360 & 0xffffff00);
          FUN_01bed4e2(&iStack_35c,(uint)&local_498 | 3,0x10);
          local_34c = local_530;
          local_348 = local_52c;
          local_344 = local_528;
          iStack_340 = iStack_524;
          local_378 = local_540;
          local_374 = local_53c;
          local_370 = local_538;
          local_33c = CONCAT31(CONCAT21(local_33c._2_2_,iVar17 == 0),uVar21 == 7);
          FUN_01a881f8(&local_280,param_1 + 0x16,iVar23);
          unaff_r5 = pppppiStack_274;
          if (((uint)local_280 & 0xff) == 5) {
            local_120 = local_378;
            local_11c = local_374;
            local_118 = local_370;
            local_114 = local_36c;
            local_110 = pppppiStack_368;
            local_10c = local_364;
            local_108 = local_360;
            iStack_104 = iStack_35c;
            iStack_100 = iStack_358;
            iStack_fc = iStack_354;
            local_f8 = local_350;
            local_f4 = local_34c;
            iStack_f0 = local_348;
            pppppiStack_ec = local_344;
            iStack_e8 = iStack_340;
            iStack_e4 = local_33c;
            goto LAB_00b0ff08;
          }
          if (((uint)local_280 & 0xff) == 6) {
            local_120 = local_378;
            local_11c = local_374;
            local_118 = local_370;
            local_114 = local_36c;
            local_110 = pppppiStack_368;
            local_10c = local_364;
            local_108 = local_360;
            iStack_104 = iStack_35c;
            iStack_100 = iStack_358;
            iStack_fc = iStack_354;
            local_f8 = local_350;
            local_f4 = local_34c;
            iStack_f0 = local_348;
            pppppiStack_ec = local_344;
            iStack_e8 = iStack_340;
            iStack_e4 = local_33c;
            if (*param_1 != 2) {
              FUN_009d7894(param_1);
            }
            *param_1 = (int)local_120;
            param_1[1] = (int)local_11c;
            param_1[2] = (int)local_118;
            param_1[3] = (int)local_114;
            param_1[4] = (int)local_110;
            param_1[5] = (int)local_10c;
            param_1[6] = (int)local_108;
            param_1[7] = iStack_104;
            param_1[8] = iStack_100;
            param_1[9] = iStack_fc;
            param_1[10] = local_f8;
            param_1[0xb] = local_f4;
            param_1[0xc] = iStack_f0;
            param_1[0xd] = (int)pppppiStack_ec;
            param_1[0xe] = iStack_e8;
            param_1[0xf] = iStack_e4;
            unaff_r5 = pppppiStack_ec;
            goto LAB_00b108e8;
          }
          local_458 = local_280;
          pppppiStack_454 = local_27c;
          pppppiStack_450 = local_278;
          pppppiStack_44c = pppppiStack_274;
          pppppiStack_448 = pppppiStack_270;
          pppppiStack_444 = pppppiStack_26c;
          local_1b8 = local_378;
          local_1b4 = local_374;
          local_1b0 = local_370;
          local_88 = FUN_01427dc4(&local_458);
          local_11c = (int *****)0x0;
          local_120 = (int *****)&DAT_00000003;
          FUN_009d5e40(&local_1b8,&local_120);
          FUN_008e0f4c(&local_36c);
          FUN_01a697b8(&iStack_35c);
          if (local_34c != 0) {
            (**(code **)(local_34c + 0x10))(&iStack_340,local_348,local_344);
          }
          goto LAB_00b0fe34;
        }
        if (((uint)local_428 & 0xff) == 3) {
          local_440 = (int *****)CONCAT31(CONCAT21(local_440._2_2_,local_428._1_1_),3);
        }
        else {
          FUN_013b8db0(&local_440,&local_428);
          if ((char)local_440 == '\x05') goto LAB_00b10314;
        }
        unaff_r5 = (int *****)&local_498;
        local_480 = local_440;
        pppppiStack_47c = local_43c;
        pppppiStack_478 = local_438;
        uVar3 = (undefined1)local_434;
        FUN_01bed4e2(unaff_r5,(int)&local_434 + 1,0xb);
        local_470 = local_480;
        pppppiStack_46c = pppppiStack_47c;
        pppppiStack_468 = pppppiStack_478;
        local_464 = uVar3;
        FUN_01bed4e2(auStack_463,unaff_r5,0xb);
        local_378 = local_540;
        local_374 = local_53c;
        local_370 = local_538;
        local_88 = FUN_01427dc4(&local_470);
        local_11c = (int *****)0x0;
        local_120 = (int *****)&DAT_00000003;
        FUN_009d5e40(&local_378,&local_120);
      }
      if (local_530 != 0) {
        (**(code **)(local_530 + 0x10))(&iStack_524,local_52c,local_528);
      }
      goto LAB_00b0fe34;
    }
    local_11c = (int *****)param_1[1];
    local_118 = (int *****)param_1[2];
    local_114 = (int *****)param_1[3];
    local_110 = (int *****)param_1[4];
    local_10c = (int *****)param_1[5];
    local_108 = (int *)param_1[6];
    iStack_104 = param_1[7];
    iStack_100 = param_1[8];
    iStack_fc = param_1[9];
    local_f8 = param_1[10];
    local_f4 = param_1[0xb];
    iStack_f0 = param_1[0xc];
    pppppiStack_ec = (int *****)param_1[0xd];
    iStack_e8 = param_1[0xe];
    iStack_e4 = param_1[0xf];
    local_120 = pppppiVar9;
LAB_00b0ff08:
    unaff_r5 = pppppiStack_ec;
    FUN_009d795c(param_1,&local_120,iVar23);
    goto LAB_00b0fe34;
  }
  if (((uint)local_280 & 0xff) == 6) {
LAB_00b108e8:
    uVar21 = 3;
  }
  else {
    local_378 = (int *****)CONCAT31(local_378._1_3_,local_280._0_1_);
    FUN_01bed4e2((uint)&local_378 | 1,(uint)&local_280 | 1,0x17);
    unaff_r5 = (int *****)FUN_01425c24(param_1[0x1d]);
    if (unaff_r5 == (int *****)0x0) {
      if (((uint)local_378 & 0xff) - 1 < 2) {
        pppppiVar16 = (int *****)((uint)&local_378 | 4);
LAB_00b109d4:
        if (*pppppiVar16 == (int ****)0x0) {
          uVar21 = 0;
          goto LAB_00b10920;
        }
      }
      else if (((uint)local_378 & 0xff) == 0) goto LAB_00b109d4;
      local_120 = local_378;
      local_11c = local_374;
      local_118 = local_370;
      local_114 = local_36c;
      local_110 = pppppiStack_368;
      local_10c = local_364;
      unaff_r5 = (int *****)FUN_01427dc4(&local_120);
      uVar21 = 2;
    }
    else {
      uVar21 = 2;
LAB_00b10920:
      FUN_009d7e14(&local_378);
    }
  }
LAB_00b10a88:
  if (uVar21 != 3) {
    if (uVar21 != 2) {
      unaff_r5 = (int *****)0x0;
    }
    if (uVar21 != 2 && (uVar21 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0050c652,0x7d,&DAT_01d1de54);
    }
    if (*param_1 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    FUN_009d7750(param_1);
    *param_1 = 3;
    if (unaff_r5 != (int *****)0x0) {
      local_410[0] = unaff_r5;
      if ((DAT_01d50f88 < 2) &&
         (((DAT_01d4fbd4 - 1 < 2 ||
           ((DAT_01d4fbd4 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4fbcc), cVar7 != '\0')))) &&
          (iVar23 = FUN_01aaa278(DAT_01d4fbcc), iVar23 != 0)))) {
        if (*(int ******)(DAT_01d4fbcc + 0x20) == (int *****)0x0) {
LAB_00b10f9c:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d21028);
        }
        local_118 = *(int ******)(DAT_01d4fbcc + 0x24);
        local_114 = *(int ******)(DAT_01d4fbcc + 0x28);
        local_678 = (undefined4 *)(DAT_01d4fbcc + 0x1c);
        local_120 = (int *****)*local_678;
        local_27c = (int *****)&local_1b8;
        local_67c = 1;
        local_1b4 = (int *****)&local_5d8;
        local_5d8 = (int *****)local_410;
        local_110 = (int *****)0x0;
        local_278 = (int *****)&DAT_01d2ea4c;
        local_1b8 = (int *****)&DAT_005a5635;
        local_5d4 = FUN_01427888;
        local_680 = (int *****)&local_280;
        local_280 = (int *****)&local_120;
        local_11c = *(int ******)(DAT_01d4fbcc + 0x20);
        FUN_01aaaecc(DAT_01d4fbcc,&local_680);
        iVar23 = DAT_01d4fbcc;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_374 = *(int ******)(DAT_01d4fbcc + 0x14);
          local_370 = *(int ******)(DAT_01d4fbcc + 0x18);
          local_378 = (int *****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar17 = (*(code *)puVar8[3])(pcVar15,&local_378);
          if (iVar17 != 0) {
            FUN_01aaa328(iVar23,pcVar15,puVar8[4],&local_378,&local_680);
          }
        }
      }
      else {
        iVar23 = DAT_01d4fbcc;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_67c = *(undefined4 *)(DAT_01d4fbcc + 0x14);
          local_678 = *(undefined4 **)(DAT_01d4fbcc + 0x18);
          local_680 = (int *****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          pcVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
            pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar17 = (*(code *)puVar8[3])(pcVar15,&local_680);
          if (iVar17 != 0) {
            if (*(int ******)(DAT_01d4fbcc + 0x20) == (int *****)0x0) goto LAB_00b10f9c;
            local_118 = *(int ******)(DAT_01d4fbcc + 0x24);
            local_114 = *(int ******)(DAT_01d4fbcc + 0x28);
            local_374 = (int *****)&local_1b8;
            local_280 = (int *****)&local_378;
            local_110 = (int *****)0x0;
            local_27c = (int *****)&DAT_00000001;
            local_1b4 = (int *****)&local_5d8;
            local_370 = (int *****)&DAT_01d2ea4c;
            local_1b8 = (int *****)&DAT_005a5635;
            local_5d4 = FUN_01427888;
            local_5d8 = (int *****)local_410;
            local_378 = (int *****)&local_120;
            local_278 = (int *****)(DAT_01d4fbcc + 0x1c);
            local_120 = *(int ******)(DAT_01d4fbcc + 0x1c);
            local_11c = *(int ******)(DAT_01d4fbcc + 0x20);
            FUN_01aaa328(iVar23,pcVar15,puVar8[4],&local_680,&local_280);
          }
        }
      }
      FUN_01a69838(local_410[0]);
      iVar23 = *param_1;
      if (iVar23 - 3U < 2) {
        *param_1 = 4;
        if (iVar23 == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
        }
        goto LAB_00b10df8;
      }
      FUN_009d7750(param_1);
    }
    *param_1 = 4;
  }
LAB_00b10df8:
  return uVar21 == 3;
LAB_00b0ffa0:
  FUN_009d5724(&local_540);
  FUN_009d57a8(&local_5d8);
  goto LAB_00b0fe34;
}

