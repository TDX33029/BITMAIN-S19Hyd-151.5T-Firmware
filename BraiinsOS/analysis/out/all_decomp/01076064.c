// FUN_01076064 @ 01076064 size=5948 calls_out=28 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01076064(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 uVar17;
  bool bVar18;
  ushort uVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  char *pcVar23;
  byte *pbVar24;
  bool bVar25;
  int iVar26;
  undefined *puVar27;
  uint *puVar28;
  uint uVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  byte *pbVar35;
  byte *pbVar36;
  undefined4 *puVar37;
  int iVar38;
  byte *pbVar39;
  uint uVar40;
  undefined4 *puVar41;
  undefined8 uVar42;
  undefined4 *local_5b8;
  undefined4 *local_5b4;
  byte *local_5a8;
  byte *local_59c;
  uint local_598;
  int local_594;
  uint local_590;
  uint local_58c;
  undefined4 *local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 local_574;
  uint local_570;
  uint uStack_56c;
  uint uStack_568;
  uint local_564;
  int local_55c;
  undefined4 local_558;
  uint local_554;
  uint local_550;
  uint local_54c;
  undefined4 local_548;
  int local_544;
  ushort local_540;
  undefined4 local_53e;
  byte *local_4a4;
  undefined **local_4a0;
  int local_49c;
  undefined4 local_498;
  undefined4 local_494;
  byte **local_490;
  undefined1 *local_48c;
  uint local_488;
  uint local_484;
  byte ***local_480;
  int iStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  short local_46c;
  byte *local_46a;
  undefined2 uStack_466;
  undefined4 local_464;
  undefined4 local_460;
  undefined *local_45c;
  byte ***local_458;
  undefined4 local_454;
  undefined1 local_450;
  undefined4 local_448;
  byte *local_444;
  undefined4 *local_440;
  undefined4 local_43c;
  undefined4 local_438;
  byte **local_360;
  undefined1 *local_35c;
  int *local_358;
  uint uStack_354;
  byte ***local_350;
  int iStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  ushort local_33c;
  byte *local_33a;
  undefined **local_336;
  undefined *local_332;
  undefined2 local_32e;
  undefined *local_32c;
  byte ***pppbStack_328;
  undefined4 local_324;
  undefined1 local_320;
  byte *local_238;
  undefined **local_234;
  undefined *local_230;
  undefined2 local_22c;
  char local_1e8;
  undefined1 uStack_1e7;
  undefined2 uStack_1e6;
  undefined1 *local_1e4;
  uint local_1e0;
  uint local_1dc;
  byte ***pppbStack_1d8;
  int local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined *local_d0;
  byte ***local_cc;
  undefined4 local_c8;
  
  local_1e4 = (undefined1 *)0x1b6;
  local_1dc = local_1dc & 0xffff0000;
  local_1e0 = 1;
  local_1e8 = '\0';
  uStack_1e7 = 0;
  uStack_1e6 = 0;
  FUN_015ec1bc(&local_448,&local_1e8,&DAT_00384dea,10);
  pbVar3 = local_444;
  uVar5 = local_460;
  uVar4 = local_464;
  if ((local_448 & 0xff) != 4) {
    *(undefined1 *)((int)param_1 + 7) = local_448._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_448._1_2_;
    param_1[2] = local_444;
    *(byte *)(param_1 + 1) = (byte)local_448;
    *param_1 = 0;
    return;
  }
  uVar42 = thunk_FUN_016de0ee(4,0x2c0);
  local_460 = uVar5;
  local_464 = uVar4;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  puVar28 = (uint *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
  if ((char)puVar28[4] == '\0') {
    uVar4 = local_464;
    local_464._2_2_ = uVar6;
    uVar5 = local_460;
    local_460._2_2_ = uVar7;
    FUN_015f62e4(&local_1e8);
    uVar7 = local_460._2_2_;
    uVar6 = local_464._2_2_;
    *puVar28 = CONCAT22(uStack_1e6,CONCAT11(uStack_1e7,local_1e8));
    puVar28[1] = (uint)local_1e4;
    puVar28[2] = local_1e0;
    puVar28[3] = local_1dc;
    *(undefined1 *)(puVar28 + 4) = 1;
  }
  local_460._2_2_ = uVar7;
  local_464._2_2_ = uVar6;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  local_570 = *puVar28;
  uStack_56c = puVar28[1];
  uStack_568 = puVar28[2];
  local_564 = puVar28[3];
  *puVar28 = local_570 + 1;
  puVar28[1] = uStack_56c + (0xfffffffe < local_570);
  uStack_57c = 0;
  uStack_578 = 0;
  local_580 = &DAT_005674cc;
  local_574 = 0;
  uVar4 = local_464;
  local_464._2_2_ = uVar6;
  uVar5 = local_460;
  local_460._2_2_ = uVar7;
  iVar9 = thunk_FUN_016d4a50(0x2000);
  uVar5 = local_460;
  uVar4 = local_464;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  uVar10 = (uint)&local_1e8 | 4;
  local_548 = local_444;
  local_558 = 0x2000;
  uVar33 = 0;
  uVar40 = 0;
  puVar11 = (undefined4 *)((uint)&local_238 | 2);
  local_598 = 0;
  piVar12 = (int *)((uint)&local_540 | 6);
  local_544 = 0;
  local_54c = 0;
  local_550 = 0;
  local_554 = 0;
  local_590 = 0;
  local_594 = 0;
  local_58c = 0;
  local_55c = iVar9;
LAB_010763e4:
  local_460 = uVar5;
  local_464 = uVar4;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
LAB_010763e8:
  local_460._2_2_ = uVar7;
  local_464._2_2_ = uVar6;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  local_440 = (undefined4 *)0x0;
  local_59c = &DAT_00000001;
  local_444 = &DAT_00000001;
  local_448 = 0;
  puVar41 = (undefined4 *)0x0;
  uVar4 = local_464;
  uVar5 = local_460;
  local_464._2_2_ = uVar6;
  local_460._2_2_ = uVar7;
  do {
    local_460 = uVar5;
    local_464 = uVar4;
    puVar37 = local_440;
    uVar7 = local_460._2_2_;
    uVar6 = local_464._2_2_;
    while (local_460._2_2_ = uVar7, local_464._2_2_ = uVar6, uVar7 = local_460._2_2_,
          uVar6 = local_464._2_2_, local_58c <= uVar33) {
      uVar4 = local_464;
      local_464._2_2_ = uVar6;
      uVar5 = local_460;
      local_460._2_2_ = uVar7;
      local_58c = FUN_016e0250(pbVar3,iVar9,0x2000);
      uVar7 = local_460._2_2_;
      uVar6 = local_464._2_2_;
      if (local_58c != 0xffffffff) {
        uVar33 = 0;
        if (local_598 < local_58c) {
          local_598 = local_58c;
        }
        uVar40 = local_58c;
        local_590 = local_598;
        goto LAB_01076480;
      }
      uVar4 = local_464;
      local_464._2_2_ = uVar6;
      uVar5 = local_460;
      local_460._2_2_ = uVar7;
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar7 = local_460._2_2_;
      uVar6 = local_464._2_2_;
      puVar13 = (undefined4 *)*puVar13;
      pbVar35 = (byte *)0x0;
      uVar40 = 0;
      uVar33 = 0;
      local_58c = 0;
      local_590 = local_598;
      if (puVar13 != (undefined4 *)0x4) {
        local_550 = 0;
        local_554 = 0;
        local_58c = 0;
        local_54c = local_598;
        uVar4 = local_464;
        uVar5 = local_460;
        local_464._2_2_ = uVar6;
        local_460._2_2_ = uVar7;
        goto LAB_0107676c;
      }
    }
LAB_01076480:
    local_460._2_2_ = uVar7;
    local_464._2_2_ = uVar6;
    uVar7 = local_460._2_2_;
    uVar6 = local_464._2_2_;
    pcVar23 = (char *)(iVar9 + uVar33);
    uVar34 = local_58c - uVar33;
    local_464._2_2_ = uVar6;
    local_460._2_2_ = uVar7;
    if (uVar34 < 8) {
      if (uVar34 != 0) {
        if (*pcVar23 == '\n') {
          uVar14 = 0;
        }
        else {
          if (uVar34 == 1) goto LAB_010765f8;
          if (pcVar23[1] == '\n') {
            uVar14 = 1;
          }
          else {
            if (uVar34 == 2) goto LAB_010765f8;
            if (pcVar23[2] == '\n') {
              uVar14 = 2;
            }
            else {
              if (uVar34 == 3) goto LAB_010765f8;
              if (pcVar23[3] == '\n') {
                uVar14 = 3;
              }
              else {
                if (uVar34 == 4) goto LAB_010765f8;
                if (pcVar23[4] == '\n') {
                  uVar14 = 4;
                }
                else {
                  if (uVar34 == 5) goto LAB_010765f8;
                  if (pcVar23[5] == '\n') {
                    uVar14 = 5;
                  }
                  else {
                    if ((uVar34 == 6) || (pcVar23[6] != '\n')) goto LAB_010765f8;
                    uVar14 = 6;
                  }
                }
              }
            }
          }
        }
LAB_01076708:
        local_54c = local_590;
        local_554 = uVar33;
        if (uVar34 <= uVar14) {
          local_550 = uVar40;
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar14,uVar34,&DAT_0188bbe0);
        }
        iVar20 = uVar14 + 1;
        if (uVar14 < local_448 - (int)puVar37) {
          local_550 = uVar40;
        }
        else {
          local_550 = uVar40;
          uVar4 = local_464;
          uVar5 = local_460;
          FUN_01098228(&local_448,puVar37,iVar20,1,1);
          uVar7 = local_460._2_2_;
          uVar6 = local_464._2_2_;
          local_59c = local_444;
          puVar37 = local_440;
        }
        local_460._2_2_ = uVar7;
        local_464._2_2_ = uVar6;
        uVar7 = local_460._2_2_;
        uVar6 = local_464._2_2_;
        uVar4 = local_464;
        local_464._2_2_ = uVar6;
        uVar5 = local_460;
        local_460._2_2_ = uVar7;
        FUN_016dd1aa(local_59c + (int)puVar37,pcVar23,iVar20);
        uVar5 = local_460;
        uVar4 = local_464;
        puVar37 = (undefined4 *)((int)puVar37 + iVar20);
        pbVar35 = &DAT_00000004;
        local_554 = uVar33 + iVar20;
        if (local_58c < uVar33 + iVar20) {
          local_554 = local_58c;
        }
        puVar13 = (undefined4 *)(iVar20 + (int)puVar41);
        goto LAB_0107676c;
      }
    }
    else {
      uVar32 = ((uint)(pcVar23 + 3) & 0xfffffffc) - (int)pcVar23;
      if (uVar32 == 0) {
        uVar32 = 0;
        goto LAB_01076574;
      }
      uVar14 = 0;
      do {
        if (pcVar23[uVar14] == '\n') goto LAB_01076708;
        uVar14 = uVar14 + 1;
      } while (uVar32 != uVar14);
      for (; uVar32 <= uVar34 - 8; uVar32 = uVar32 + 8) {
LAB_01076574:
        uVar29 = *(uint *)(pcVar23 + uVar32);
        uVar14 = *(uint *)((int)(pcVar23 + uVar32) + 4) ^ 0xa0a0a0a;
        if (((0x1010100 - (uVar29 ^ 0xa0a0a0a) | uVar29) & 0x80808080 &
            (0x1010100 - uVar14 | uVar14)) != 0x80808080) break;
      }
      if (uVar34 != uVar32) {
        iVar20 = 0;
        do {
          if (pcVar23[iVar20 + uVar32] == '\n') {
            uVar14 = iVar20 + uVar32;
            goto LAB_01076708;
          }
          iVar20 = iVar20 + 1;
        } while ((local_58c - uVar32) - uVar33 != iVar20);
      }
    }
LAB_010765f8:
    if (local_448 - (int)puVar37 < uVar34) {
      uVar4 = local_464;
      uVar5 = local_460;
      FUN_01098228(&local_448,puVar37,uVar34,1,1);
      uVar7 = local_460._2_2_;
      uVar6 = local_464._2_2_;
      local_59c = local_444;
      puVar37 = local_440;
    }
    else {
    }
    local_460._2_2_ = uVar7;
    local_464._2_2_ = uVar6;
    uVar7 = local_460._2_2_;
    uVar6 = local_464._2_2_;
    uVar4 = local_464;
    local_464._2_2_ = uVar6;
    uVar5 = local_460;
    local_460._2_2_ = uVar7;
    FUN_016dd1aa(local_59c + (int)puVar37,pcVar23,uVar34);
    uVar5 = local_460;
    uVar4 = local_464;
    uVar33 = uVar33 + uVar34;
    puVar37 = (undefined4 *)((int)puVar37 + uVar34);
    if (local_58c < uVar33) {
      uVar33 = local_58c;
    }
    puVar13 = (undefined4 *)(uVar34 + (int)puVar41);
    puVar41 = puVar13;
    local_440 = puVar37;
  } while (uVar34 != 0);
  local_54c = local_590;
  pbVar35 = &DAT_00000004;
  local_554 = uVar33;
  local_550 = uVar40;
LAB_0107676c:
  local_460 = uVar5;
  local_464 = uVar4;
  pbVar36 = local_444;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  uVar33 = local_554;
  uVar4 = local_464;
  local_464._2_2_ = uVar6;
  uVar5 = local_460;
  local_460._2_2_ = uVar7;
  FUN_00fab1e0(&local_1e8,local_444,puVar37);
  uVar5 = local_460;
  uVar4 = local_464;
  if ((CONCAT22(uStack_1e6,CONCAT11(uStack_1e7,local_1e8)) != 0) &&
     (puVar37 = (undefined4 *)0x0, pbVar35 == &DAT_00000004)) {
    pbVar35 = &SUB_00000002;
    puVar13 = &DAT_018aaa9c;
  }
  local_440 = puVar37;
  if (pbVar35 == &DAT_00000004) {
    if (puVar13 == (undefined4 *)0x0) {
      iVar20 = -0x7fffffff;
      goto joined_r0x01076824;
    }
    if ((((puVar37 != (undefined4 *)0x0) && (pbVar36[(int)puVar37 + -1] == 10)) &&
        (local_440 = (undefined4 *)((int)puVar37 + -1), local_440 != (undefined4 *)0x0)) &&
       (pbVar36[(int)puVar37 + -2] == 0xd)) {
      local_440 = (undefined4 *)((int)puVar37 + -2);
    }
    local_5a8 = local_444;
    iVar20 = local_448;
    local_5b4 = local_440;
  }
  else {
    iVar20 = -0x80000000;
    local_5a8 = pbVar35;
    local_5b4 = puVar13;
joined_r0x01076824:
    if (local_448 != 0) {
      thunk_FUN_016d3fb4(pbVar36);
      local_460 = uVar5;
      local_464 = uVar4;
      uVar5 = local_460;
      uVar4 = local_464;
    }
  }
  local_460 = uVar5;
  local_464 = uVar4;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  local_464._2_2_ = uVar6;
  local_460._2_2_ = uVar7;
  if (iVar20 == -0x7fffffff) {
    thunk_FUN_016d3fb4(iVar9);
    FUN_016dffb2(pbVar3);
LAB_01079e5c:
    *param_1 = local_580;
    param_1[1] = uStack_57c;
    param_1[2] = uStack_578;
    param_1[3] = local_574;
    param_1[4] = local_570;
    param_1[5] = uStack_56c;
    param_1[6] = uStack_568;
    param_1[7] = local_564;
    return;
  }
  iVar38 = local_594 + 1;
  local_544 = iVar38;
  if (iVar20 == -0x80000000) {
    thunk_FUN_016d3fb4(iVar9);
    FUN_016dffb2(pbVar3);
    if (((uint)local_5a8 & 0xff) != 4) {
      *param_1 = 0;
      param_1[1] = local_5a8;
      param_1[2] = local_5b4;
      FUN_010982a8(&local_580);
      return;
    }
    goto LAB_01079e5c;
  }
  pbVar35 = local_5a8;
  puVar41 = local_5b4;
  if (local_594 == 0) {
    local_1e8 = -0x11;
    uStack_1e7 = 0xbb;
    uStack_1e6 = 0xbf;
    if (&SUB_00000002 < local_5b4) {
      uVar4 = local_464;
      uVar5 = local_460;
      iVar26 = thunk_FUN_016dd50a(&local_1e8,local_5a8,3);
      uVar5 = local_460;
      uVar4 = local_464;
      if (iVar26 == 0) {
        pbVar35 = local_5a8 + 3;
        if ((undefined4 *)((int)local_5b4 + -3) == (undefined4 *)0x0) {
          puVar41 = (undefined4 *)0x0;
        }
        else {
          puVar41 = (undefined4 *)((int)local_5b4 + -3);
          if ((char)local_5a8[3] < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_5a8,local_5b4,3,local_5b4,&DAT_01883c58);
          }
        }
      }
      else {
      }
      goto LAB_01076884;
    }
  }
  uVar4 = local_464;
  uVar5 = local_460;
LAB_01076884:
  local_460 = uVar5;
  local_464 = uVar4;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  puVar37 = (undefined4 *)0x0;
LAB_01076898:
  do {
    uVar34 = (int)puVar41 - (int)puVar37;
    pbVar36 = pbVar35 + (int)puVar37;
    if (uVar34 < 8) {
      if (puVar41 == puVar37) {
LAB_01076a08:
        pbVar36 = (byte *)0x0;
        goto LAB_01076a20;
      }
      uVar14 = 0;
      while (pbVar36[uVar14] != 0x23) {
        uVar14 = uVar14 + 1;
        if (uVar34 == uVar14) goto LAB_01076a08;
      }
    }
    else {
      uVar32 = ((uint)(pbVar36 + 3) & 0xfffffffc) - (int)pbVar36;
      if (uVar32 == 0) {
        uVar32 = 0;
        do {
          uVar29 = *(uint *)(pbVar36 + uVar32);
          uVar14 = *(uint *)((int)(pbVar36 + uVar32) + 4) ^ 0x23232323;
          if (((0x1010100 - (uVar29 ^ 0x23232323) | uVar29) & 0x80808080 &
              (0x1010100 - uVar14 | uVar14)) != 0x80808080) break;
          uVar32 = uVar32 + 8;
LAB_0107691c:
        } while (uVar32 <= uVar34 - 8);
        if (uVar34 == uVar32) {
          pbVar36 = (byte *)0x0;
          goto LAB_01076a20;
        }
        iVar26 = 0;
        while (pbVar36[iVar26 + uVar32] != 0x23) {
          iVar26 = iVar26 + 1;
          if ((int)puVar41 + (-(int)puVar37 - uVar32) == iVar26) {
            pbVar36 = (byte *)0x0;
            goto LAB_01076a20;
          }
        }
        uVar14 = iVar26 + uVar32;
      }
      else {
        uVar14 = 0;
        while (pbVar36[uVar14] != 0x23) {
          uVar14 = uVar14 + 1;
          if (uVar32 == uVar14) goto LAB_0107691c;
        }
      }
    }
    puVar13 = (undefined4 *)(uVar14 + (int)puVar37);
    puVar37 = (undefined4 *)((int)puVar13 + 1);
    if (puVar41 <= puVar13) {
      if (puVar41 < puVar37) {
        pbVar36 = (byte *)0x0;
        goto LAB_01076a20;
      }
      goto LAB_01076898;
    }
    if ((puVar41 < puVar37) || (pbVar35[(int)puVar13] == 0x23)) break;
  } while( true );
  pbVar36 = (byte *)0x0;
  if (pbVar35[(int)puVar13] == 0x23) {
    pbVar36 = pbVar35;
    local_5b8 = puVar13;
  }
LAB_01076a20:
  if (pbVar36 != (byte *)0x0) {
    puVar41 = local_5b8;
    pbVar35 = pbVar36;
  }
  pbVar21 = pbVar35 + (int)puVar41;
  pbVar36 = (byte *)0x0;
  pbVar16 = pbVar35;
  pbVar31 = pbVar36;
  if (puVar41 == (undefined4 *)0x0) {
    pbVar31 = (byte *)0x0;
    pbVar15 = pbVar35;
joined_r0x01076b7c:
    do {
      do {
        pbVar16 = pbVar21;
        if (pbVar15 == pbVar16) goto LAB_01076cb8;
        pbVar21 = pbVar16 + -1;
        uVar34 = (uint)(char)*pbVar21;
        if (0x7fffffff < uVar34) {
          pbVar21 = pbVar16 + -2;
          bVar1 = *pbVar21;
          if ((char)bVar1 < -0x40) {
            pbVar21 = pbVar16 + -3;
            bVar2 = *pbVar21;
            if ((char)bVar2 < -0x40) {
              pbVar21 = pbVar16 + -4;
              uVar32 = (int)(char)bVar2 & 0x3fU | (*pbVar21 & 7) << 6;
            }
            else {
              uVar32 = bVar2 & 0xf;
            }
            uVar32 = (int)(char)bVar1 & 0x3fU | uVar32 << 6;
          }
          else {
            uVar32 = bVar1 & 0x1f;
          }
          uVar34 = uVar34 & 0x3f | uVar32 << 6;
        }
      } while ((uVar34 - 9 < 5) || (uVar34 == 0x20));
      if (uVar34 < 0x80) goto LAB_01076c98;
      uVar32 = uVar34 >> 8;
      if (0x1f < uVar32) {
        if (uVar32 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 2;
joined_r0x01076c74:
          if (bVar1 == 0) goto LAB_01076c98;
        }
        else if (uVar32 != 0x30 || uVar34 != 0x3000) goto LAB_01076c98;
        goto joined_r0x01076b7c;
      }
      if (uVar32 == 0) {
        bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 1;
        goto joined_r0x01076c74;
      }
      if ((uVar32 != 0x16) || (uVar34 != 0x1680)) goto LAB_01076c98;
    } while( true );
  }
  do {
    pbVar15 = pbVar16 + 1;
    uVar34 = (uint)*pbVar16;
    if (0x7fffffff < (uint)(int)(char)*pbVar16) {
      if (uVar34 < 0xe0) {
        uVar34 = pbVar16[1] & 0x3f | (uVar34 & 0x1f) << 6;
        pbVar15 = pbVar16 + 2;
      }
      else {
        uVar32 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
        if (uVar34 < 0xf0) {
          uVar34 = uVar32 | (uVar34 & 0x1f) << 0xc;
          pbVar15 = pbVar16 + 3;
        }
        else {
          uVar34 = pbVar16[3] & 0x3f | uVar32 << 6 | (uVar34 & 7) << 0x12;
          pbVar15 = pbVar16 + 4;
        }
      }
    }
    pbVar36 = pbVar31 + ((int)pbVar15 - (int)pbVar16);
    if ((4 < uVar34 - 9) && (uVar34 != 0x20)) {
      if (uVar34 < 0x80) goto joined_r0x01076b7c;
      uVar32 = uVar34 >> 8;
      if (uVar32 < 0x20) {
        if (uVar32 == 0) {
          bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 1;
joined_r0x01076b70:
          if (bVar1 == 0) goto joined_r0x01076b7c;
        }
        else if ((uVar32 != 0x16) || (uVar34 != 0x1680)) goto joined_r0x01076b7c;
      }
      else {
        if (uVar32 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 2;
          goto joined_r0x01076b70;
        }
        if ((uVar32 != 0x30) || (uVar34 != 0x3000)) goto joined_r0x01076b7c;
      }
    }
    pbVar16 = pbVar15;
    pbVar31 = pbVar36;
  } while (pbVar15 != pbVar21);
  pbVar31 = (byte *)0x0;
  pbVar36 = (byte *)0x0;
LAB_01076cb8:
  pbVar16 = pbVar36 + -(int)pbVar31;
  uVar4 = local_464;
  uVar5 = local_460;
  local_594 = iVar38;
  if (pbVar16 == (byte *)0x0) goto LAB_010771b4;
  pbVar31 = pbVar35 + (int)pbVar31;
  pbVar35 = pbVar35 + (int)pbVar36;
  pbVar39 = (byte *)0x0;
  bVar18 = false;
  pbVar21 = (byte *)0x0;
  bVar25 = false;
  pbVar36 = (byte *)0x0;
  pbVar15 = pbVar31;
  pbVar30 = pbVar31;
  do {
    while( true ) {
      pbVar24 = pbVar36;
      if (bVar25) goto LAB_010771b4;
      bVar25 = true;
      pbVar22 = pbVar39;
      pbVar36 = pbVar24;
      if (pbVar15 != pbVar35) break;
      bVar18 = true;
      pbVar15 = pbVar35;
      pbVar22 = pbVar16;
      if (pbVar16 != pbVar24) goto LAB_01076e94;
    }
    do {
      pbVar30 = pbVar15 + 1;
      uVar34 = (uint)*pbVar15;
      if (0x7fffffff < (uint)(int)(char)*pbVar15) {
        if (uVar34 < 0xe0) {
          uVar34 = pbVar15[1] & 0x3f | (uVar34 & 0x1f) << 6;
          pbVar30 = pbVar15 + 2;
        }
        else {
          uVar32 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
          if (uVar34 < 0xf0) {
            uVar34 = uVar32 | (uVar34 & 0x1f) << 0xc;
            pbVar30 = pbVar15 + 3;
          }
          else {
            uVar34 = pbVar15[3] & 0x3f | uVar32 << 6 | (uVar34 & 7) << 0x12;
            pbVar30 = pbVar15 + 4;
          }
        }
      }
      pbVar39 = pbVar30 + ((int)pbVar22 - (int)pbVar15);
      pbVar15 = pbVar30;
      if ((uVar34 - 9 < 0x18) && ((1 << (uVar34 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_01076cfc:
        bVar25 = false;
        pbVar36 = pbVar39;
        pbVar21 = pbVar39;
        goto joined_r0x01076d14;
      }
      if (0x7f < uVar34) {
        uVar32 = uVar34 >> 8;
        if (uVar32 < 0x20) {
          if (uVar32 == 0) {
            bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 1;
joined_r0x01076d64:
            if (bVar1 != 0) goto LAB_01076cfc;
          }
          else if ((uVar32 == 0x16) && (uVar34 == 0x1680)) goto LAB_01076cfc;
        }
        else {
          if (uVar32 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 2;
            goto joined_r0x01076d64;
          }
          if ((uVar32 == 0x30) && (uVar34 == 0x3000)) goto LAB_01076cfc;
        }
      }
      pbVar22 = pbVar39;
    } while (pbVar30 != pbVar35);
    bVar18 = true;
    pbVar15 = pbVar35;
    pbVar22 = pbVar16;
joined_r0x01076d14:
    pbVar30 = pbVar15;
  } while (pbVar22 == pbVar24);
LAB_01076e94:
  local_4a0 = (undefined **)(pbVar22 + -(int)pbVar24);
  local_4a4 = pbVar31 + (int)pbVar24;
  local_238 = local_4a4;
  local_234 = local_4a0;
  local_464._2_2_ = uVar6;
  local_460._2_2_ = uVar7;
  FUN_00fb3af4(&local_1e8,&local_238);
  uVar5 = local_460;
  uVar4 = local_464;
  if (local_1e8 == '\0') {
    FUN_00fb3f68(&local_1e8,&local_238);
    local_460 = uVar5;
    local_464 = uVar4;
    uVar7 = local_460._2_2_;
    uVar5 = local_460;
    uVar6 = local_464._2_2_;
    uVar4 = local_464;
    local_464._2_2_ = uVar6;
    local_460._2_2_ = uVar7;
    if (local_1e8 == '\x01') {
      local_448 = CONCAT13((undefined1)local_1e0,local_1e4._1_3_);
      local_444 = (byte *)CONCAT13((undefined1)local_1dc,local_1e0._1_3_);
      local_440 = (undefined4 *)CONCAT13(pppbStack_1d8._0_1_,local_1dc._1_3_);
      uVar17 = CONCAT13(local_1e4._0_1_,CONCAT21(uStack_1e6,uStack_1e7));
      if (local_234 == (undefined **)0x0) {
        *piVar12 = local_448;
        local_540 = 3;
        piVar12[2] = (int)local_440;
        piVar12[1] = (int)local_444;
        goto LAB_010772a0;
      }
    }
  }
  else if (local_234 == (undefined **)0x0) {
    uVar17 = CONCAT13(local_1e4._0_1_,CONCAT21(uStack_1e6,uStack_1e7));
    local_540 = 2;
LAB_010772a0:
    local_460 = uVar5;
    local_464 = uVar4;
    uVar7 = local_460._2_2_;
    uVar6 = local_464._2_2_;
    local_53e = uVar17;
    do {
      local_460._2_2_ = uVar7;
      local_464._2_2_ = uVar6;
      uVar7 = local_460._2_2_;
      uVar6 = local_464._2_2_;
      pbVar36 = pbVar21;
      bVar25 = bVar18;
      do {
        while( true ) {
          pbVar15 = pbVar36;
          local_464._2_2_ = uVar6;
          local_460._2_2_ = uVar7;
          if (bVar18) {
            uVar4 = local_464;
            uVar5 = local_460;
            FUN_0107a498(&local_540);
            uVar5 = local_460;
            uVar4 = local_464;
            if (iVar20 != 0) {
              thunk_FUN_016d3fb4(local_5a8);
              local_460 = uVar5;
              local_464 = uVar4;
              uVar7 = local_460._2_2_;
              uVar6 = local_464._2_2_;
              uVar4 = local_464;
              uVar5 = local_460;
              local_464._2_2_ = uVar6;
              local_460._2_2_ = uVar7;
            }
            goto LAB_010763e4;
          }
          bVar18 = true;
          pbVar22 = pbVar30;
          pbVar24 = pbVar39;
          pbVar36 = pbVar15;
          if (pbVar30 == pbVar35) break;
          do {
            pbVar30 = pbVar22 + 1;
            uVar34 = (uint)*pbVar22;
            if (0x7fffffff < (uint)(int)(char)*pbVar22) {
              if (uVar34 < 0xe0) {
                uVar34 = pbVar22[1] & 0x3f | (uVar34 & 0x1f) << 6;
                pbVar30 = pbVar22 + 2;
              }
              else {
                uVar32 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
                if (uVar34 < 0xf0) {
                  uVar34 = uVar32 | (uVar34 & 0x1f) << 0xc;
                  pbVar30 = pbVar22 + 3;
                }
                else {
                  pbVar30 = pbVar22 + 4;
                  uVar34 = pbVar22[3] & 0x3f | uVar32 << 6 | (uVar34 & 7) << 0x12;
                }
              }
            }
            pbVar39 = pbVar30 + ((int)pbVar24 - (int)pbVar22);
            if ((uVar34 - 9 < 0x18) && ((1 << (uVar34 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_01077410:
              bVar18 = false;
              pbVar36 = pbVar39;
              pbVar21 = pbVar39;
              goto joined_r0x01077428;
            }
            if (0x7f < uVar34) {
              uVar32 = uVar34 >> 8;
              if (uVar32 < 0x20) {
                if (uVar32 == 0) {
                  bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 1;
joined_r0x01077300:
                  if (bVar1 != 0) goto LAB_01077410;
                }
                else if ((uVar32 == 0x16) && (uVar34 == 0x1680)) goto LAB_01077410;
              }
              else {
                if (uVar32 == 0x20) {
                  bVar1 = (&DAT_0041951b)[uVar34 & 0xff] & 2;
                  goto joined_r0x01077300;
                }
                if ((uVar32 == 0x30) && (uVar34 == 0x3000)) goto LAB_01077410;
              }
            }
            pbVar22 = pbVar30;
            pbVar24 = pbVar39;
          } while (pbVar30 != pbVar35);
          bVar25 = true;
          pbVar24 = pbVar16;
joined_r0x01077428:
          if (pbVar24 != pbVar15) goto LAB_01077450;
        }
        bVar25 = true;
        pbVar24 = pbVar16;
      } while (pbVar16 == pbVar15);
LAB_01077450:
      bVar18 = bVar25;
      uVar4 = local_464;
      uVar5 = local_460;
      FUN_0060107c(&local_49c,pbVar31 + (int)pbVar15,(int)pbVar24 - (int)pbVar15);
      uVar7 = local_460._2_2_;
      uVar6 = local_464._2_2_;
      uVar4 = local_464;
      local_464._2_2_ = uVar6;
      uVar5 = local_460;
      local_460._2_2_ = uVar7;
      FUN_0103d3b8(&local_1e8,local_498,local_494);
      uVar7 = local_460._2_2_;
      uVar6 = local_464._2_2_;
      local_464._2_2_ = uVar6;
      local_460._2_2_ = uVar7;
      if (CONCAT11(uStack_1e7,local_1e8) != 2) {
        uVar4 = local_464;
        uVar5 = local_460;
        FUN_016dd1aa(&local_490,&local_1e8,0x44);
        uVar7 = local_460._2_2_;
        uVar6 = local_464._2_2_;
        local_450 = 1;
        if (((uint)local_490 & 1) == 0) {
          local_1e8 = (char)local_490;
          uStack_1e7 = (undefined1)((uint)local_490 >> 8);
          uStack_1e6 = (undefined2)((uint)local_490 >> 0x10);
          local_1e4 = local_48c;
          local_1e0 = local_488;
          local_1dc = local_484;
          pppbStack_1d8 = local_480;
          local_1d4 = iStack_47c;
          uStack_1d0 = uStack_478;
          uStack_1cc = uStack_474;
          uStack_1c8 = uStack_470;
        }
        else {
          uVar4 = local_464;
          local_464._2_2_ = uVar6;
          uVar5 = local_460;
          local_460._2_2_ = uVar7;
          FUN_015049b0(uVar10,local_488,local_484);
          uVar7 = local_460._2_2_;
          uVar6 = local_464._2_2_;
          local_1e8 = '\x01';
          uStack_1e7 = 0;
        }
        local_460._2_2_ = uVar7;
        local_464._2_2_ = uVar6;
        uVar7 = local_460._2_2_;
        uVar5 = local_460;
        uVar6 = local_464._2_2_;
        uVar4 = local_464;
        local_464._2_2_ = uVar6;
        local_460._2_2_ = uVar7;
        if (local_46c != 1) {
          local_238 = local_46a;
          local_234 = (undefined **)CONCAT42(local_464,uStack_466);
          local_230 = (undefined *)CONCAT42(local_460,uVar6);
          local_22c = uVar7;
          local_d0 = local_45c;
          local_cc = local_458;
          local_c8 = local_454;
        }
        else {
          FUN_015049b0(&local_d0,uVar4,uVar5);
          puVar11[2] = local_c8;
          puVar11[1] = local_cc;
          *puVar11 = local_d0;
        }
        local_320 = 1;
        local_360 = (byte **)CONCAT22(uStack_1e6,CONCAT11(uStack_1e7,local_1e8));
        local_35c = local_1e4;
        local_358 = (int *)local_1e0;
        uStack_354 = local_1dc;
        local_350 = pppbStack_1d8;
        iStack_34c = local_1d4;
        uStack_348 = uStack_1d0;
        uStack_344 = uStack_1cc;
        uStack_340 = uStack_1c8;
        local_33a = local_238;
        local_32e = local_22c;
        local_32c = local_d0;
        pppbStack_328 = local_cc;
        local_324 = local_c8;
        local_336 = local_234;
        uVar19 = 0x10;
        if (1 < local_540) {
          uVar19 = local_540 - 2;
        }
        local_332 = local_230;
        local_33c = (ushort)(local_46c == 1);
                    /* WARNING: Could not recover jumptable at 0x01077624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_01077628 + (&DAT_01077628)[uVar19]))();
        return;
      }
      uVar4 = local_464;
      uVar5 = local_460;
      FUN_006495dc(uVar10);
      uVar7 = local_460._2_2_;
      uVar6 = local_464._2_2_;
      if (local_49c != 0) {
        uVar4 = local_464;
        local_464._2_2_ = uVar6;
        uVar5 = local_460;
        local_460._2_2_ = uVar7;
        thunk_FUN_016d3fb4(local_498);
        uVar7 = local_460._2_2_;
        uVar6 = local_464._2_2_;
      }
    } while( true );
  }
  local_460 = uVar5;
  local_464 = uVar4;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  uVar4 = local_464;
  uVar5 = local_460;
  if ((3 < DAT_018d9130) || (DAT_018da4d8 == '\0')) goto LAB_010771b4;
  if (DAT_018da4d8 == '\x01') {
LAB_01076fe0:
    local_460._2_2_ = uVar7;
    local_464._2_2_ = uVar6;
    local_460 = uVar5;
    local_464 = uVar4;
    uVar7 = local_460._2_2_;
    uVar6 = local_464._2_2_;
    DataMemoryBarrier(0xb);
    puVar27 = DAT_018daa78;
    if (DAT_018dd984 != 2) {
      puVar27 = &DAT_018ae394;
    }
    pcVar23 = s_SetGloba_00414c05;
    if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, DAT_018daa70 != 0)) {
      pcVar23 = DAT_018daa74 + (*(int *)(puVar27 + 8) - 1U & 0xfffffff8) + 8;
    }
    uVar4 = local_464;
    local_464._2_2_ = uVar6;
    uVar5 = local_460;
    local_460._2_2_ = uVar7;
    iVar38 = (**(code **)(puVar27 + 0x14))(pcVar23,DAT_018da4d0);
    uVar5 = local_460;
    uVar4 = local_464;
    uVar6 = local_464._2_2_;
    uVar7 = local_460._2_2_;
    if (iVar38 == 0) goto LAB_010771b4;
  }
  else if (DAT_018da4d8 != '\x02') {
    local_464._2_2_ = uVar6;
    local_460._2_2_ = uVar7;
    cVar8 = FUN_0169ac90(&DAT_018da4d0);
    uVar5 = local_460;
    uVar4 = local_464;
    uVar6 = local_464._2_2_;
    uVar7 = local_460._2_2_;
    if (cVar8 == '\0') goto LAB_010771b4;
    if (cVar8 != '\x02') goto LAB_01076fe0;
  }
  local_460._2_2_ = uVar7;
  local_464._2_2_ = uVar6;
  local_460 = uVar5;
  local_464 = uVar4;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  local_464._2_2_ = uVar6;
  local_460._2_2_ = uVar7;
  if (*(int *)(DAT_018da4d0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01883c78);
  }
  local_444 = *(byte **)(DAT_018da4d0 + 0x20);
  local_440 = *(undefined4 **)(DAT_018da4d0 + 0x24);
  local_43c = *(undefined4 *)(DAT_018da4d0 + 0x28);
  local_238 = (byte *)&local_448;
  local_234 = &local_d0;
  local_358 = (int *)(DAT_018da4d0 + 0x1c);
  local_448 = *local_358;
  local_438 = 0;
  local_230 = &DAT_018abb78;
  local_d0 = &DAT_005791da;
  local_360 = &local_238;
  local_48c = &LAB_0157a210;
  local_490 = &local_4a4;
  pppbStack_1d8 = &local_360;
  local_35c = (undefined1 *)0x1;
  local_1e4 = (undefined1 *)0x0;
  local_1e8 = '\x01';
  uStack_1e7 = 0;
  uStack_1e6 = 0;
  DataMemoryBarrier(0xb);
  pcVar23 = s_SetGloba_00414c05;
  puVar27 = &DAT_018ae394;
  if ((DAT_018dd984 == 2) && (pcVar23 = DAT_018daa74, puVar27 = DAT_018daa78, DAT_018daa70 != 0)) {
    pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
  }
  local_1d4 = DAT_018da4d0;
  local_cc = &local_490;
  uVar4 = local_464;
  uVar5 = local_460;
  iVar38 = (**(code **)(puVar27 + 0x28))(pcVar23,&local_1e8);
  uVar5 = local_460;
  uVar4 = local_464;
  uVar6 = local_464._2_2_;
  uVar7 = local_460._2_2_;
  if (iVar38 != 0) {
    (**(code **)(puVar27 + 0x2c))(pcVar23,&local_1e8);
    local_460 = uVar5;
    local_464 = uVar4;
    uVar5 = local_460;
    uVar4 = local_464;
    uVar6 = local_464._2_2_;
    uVar7 = local_460._2_2_;
  }
LAB_010771b4:
  local_460._2_2_ = uVar7;
  local_464._2_2_ = uVar6;
  local_460 = uVar5;
  local_464 = uVar4;
  uVar7 = local_460._2_2_;
  uVar6 = local_464._2_2_;
  if (iVar20 != 0) {
    uVar4 = local_464;
    local_464._2_2_ = uVar6;
    uVar5 = local_460;
    local_460._2_2_ = uVar7;
    thunk_FUN_016d3fb4(local_5a8);
    uVar7 = local_460._2_2_;
    uVar6 = local_464._2_2_;
  }
  goto LAB_010763e8;
LAB_01076c98:
  pbVar36 = pbVar16 + ((int)pbVar36 - (int)pbVar15);
  goto LAB_01076cb8;
}

