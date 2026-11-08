// FUN_009dbb30 @ 009dbb30 size=7084 calls_out=31 calls_in=0
// strings: stderr | lock poisonedPatternIDError | lock poisonedPatternIDError | Span not found; this is a bugnewtime.busytime.idleenter

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009dbb30(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,uint param_5,
                 uint param_6,uint ******param_7)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  uint ******ppppppuVar10;
  uint *****pppppuVar11;
  uint *******pppppppuVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *****pppppuVar17;
  uint *****pppppuVar18;
  uint *****pppppuVar19;
  uint *****pppppuVar20;
  uint uVar21;
  int extraout_r2;
  uint uVar22;
  int iVar23;
  uint *****pppppuVar24;
  uint *****pppppuVar25;
  uint *****pppppuVar26;
  uint *****pppppuVar27;
  uint *****pppppuVar28;
  uint *****pppppuVar29;
  uint *****pppppuVar30;
  uint *****pppppuVar31;
  uint *****pppppuVar32;
  undefined1 *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint ******ppppppuVar37;
  uint uVar38;
  uint ******ppppppuVar39;
  uint *****pppppuVar40;
  int iVar41;
  uint uVar42;
  uint ******ppppppuVar43;
  int *piVar44;
  uint uVar45;
  uint *****pppppuVar46;
  uint ***pppuVar47;
  uint uVar48;
  uint *puVar49;
  uint ******ppppppuVar50;
  uint ****ppppuVar51;
  uint *puVar52;
  uint uVar53;
  int iVar54;
  uint uVar55;
  bool bVar56;
  bool bVar57;
  undefined8 uVar58;
  ulonglong uVar59;
  uint *****local_5d4;
  uint *****local_5d0;
  uint *****local_5cc;
  uint *****local_5b4;
  undefined4 local_5b0;
  uint *****local_5ac;
  uint *****local_58c;
  undefined4 local_588;
  uint *****local_578;
  uint *****local_574;
  uint *****local_56c;
  uint *****local_568;
  uint *****local_558;
  uint *****local_52c;
  int local_514;
  int local_500;
  uint ******local_4fc;
  uint ******local_4f8;
  uint *******local_4d8;
  uint ******local_4d4;
  uint *******local_4d0;
  uint ******local_4cc;
  uint *******local_4c8;
  uint ******ppppppuStack_4c4;
  uint *******local_4c0;
  uint ******local_4bc;
  uint *******local_4b8;
  uint *****local_4b4;
  uint ******local_4b0;
  uint *****pppppuStack_4ac;
  uint *****pppppuStack_4a8;
  uint *****local_4a4;
  uint *****pppppuStack_4a0;
  uint *****pppppuStack_49c;
  uint *****pppppuStack_498;
  uint *****pppppuStack_494;
  uint *****local_490;
  uint *****pppppuStack_48c;
  uint *****pppppuStack_488;
  uint *****pppppuStack_484;
  uint *****pppppuStack_480;
  uint *****pppppuStack_47c;
  undefined4 local_478;
  uint *****local_474;
  uint *****pppppuStack_470;
  uint *****pppppuStack_46c;
  undefined4 local_468;
  uint *******local_378;
  uint ******local_374;
  uint *******local_370;
  uint ******local_36c;
  uint *******local_368;
  uint ******local_364;
  uint ******local_278;
  uint *****local_274;
  uint *****pppppuStack_270;
  uint *****pppppuStack_26c;
  uint *****local_268;
  uint *****local_264;
  uint *****pppppuStack_260;
  uint *****pppppuStack_25c;
  uint *****local_258;
  uint *****pppppuStack_254;
  uint *****local_250;
  uint *****pppppuStack_24c;
  uint *****local_248;
  uint *****pppppuStack_244;
  uint *****pppppuStack_240;
  uint *****pppppuStack_23c;
  uint *******local_238;
  uint ******local_234;
  uint *******local_230;
  uint ******local_22c;
  uint *******local_228;
  uint ******local_224;
  uint *******pppppppuStack_220;
  uint ******ppppppuStack_21c;
  uint *******pppppppuStack_218;
  uint ******ppppppuStack_214;
  uint *******local_138;
  uint ******local_134;
  uint *******local_130;
  uint ******local_12c;
  uint *******local_128;
  uint ******local_124;
  uint *******local_120;
  uint ******local_11c;
  uint *******local_118;
  uint ******local_114;
  uint ******local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar58 = thunk_FUN_016de0ee(param_1,param_2,0x80);
  ppppppuVar43 = (uint ******)((ulonglong)uVar58 >> 0x20);
  puVar5 = (uint *)((int)uVar58 + extraout_r2);
  ppppppuVar37 = *(uint *******)(param_1 + 0x118);
  uVar35 = *(uint *)(param_1 + 0x11c);
  uVar22 = 0xffffffff;
  if ((*puVar5 & (uint)ppppppuVar37) != 0 || (puVar5[1] & uVar35) != 0) {
    uVar45 = 0xffffffff;
    if (ppppppuVar37 != (uint ******)0xffffffff || uVar35 != 0xffffffff) {
      uVar22 = ~(uint)ppppppuVar37;
      uVar45 = ~uVar35;
    }
    *puVar5 = uVar22 & *puVar5;
    puVar5[1] = uVar45 & puVar5[1];
    return;
  }
  uVar22 = *(uint *)(param_1 + 0x60);
  if (param_5 != 0xffffffff || param_6 != 0xffffffff) {
    uVar35 = uVar35 | param_6;
    ppppppuVar37 = (uint ******)((uint)ppppppuVar37 | param_5);
  }
  puVar5 = (uint *)(param_1 + 0x60);
  if (uVar22 < 0x3ffffffe) {
    if (*puVar5 != uVar22) {
      ClearExclusiveLocal();
      goto LAB_009dd39c;
    }
    bVar56 = (bool)hasExclusiveAccess(puVar5);
    if (!bVar56) goto LAB_009dd39c;
    *puVar5 = uVar22 + 1;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009dd39c:
    FUN_015bebb8(puVar5);
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    if (*(int *)(param_1 + 0x7c) != 0) {
      ppppuVar51 = ppppppuVar43[4][9];
      uVar45 = FUN_009ee0ac(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                            *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                            ppppuVar51,ppppppuVar43[4][10]);
      uVar22 = uVar45 >> 0x19;
      iVar23 = *(int *)(param_1 + 0x70);
      iVar54 = 0;
      while( true ) {
        uVar45 = *(uint *)(param_1 + 0x74) & uVar45;
        uVar38 = *(uint *)(iVar23 + uVar45);
        uVar14 = uVar38 ^ uVar22 * 0x1010101;
        uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
        while (uVar14 != 0) {
          uVar15 = uVar14 >> 8;
          uVar42 = uVar14 >> 0x10;
          uVar53 = uVar14 >> 0x18;
          uVar36 = uVar14 << 0x18;
          uVar14 = uVar14 - 1 & uVar14;
          uVar15 = uVar45 + ((uint)LZCOUNT(uVar36 | (uVar15 & 0xff) << 0x10 | (uVar42 & 0xff) << 8 |
                                           uVar53) >> 3) & *(uint *)(param_1 + 0x74);
          if (ppppuVar51 == *(uint *****)(iVar23 + -0x18 + uVar15 * -0x18)) {
            iVar23 = iVar23 + uVar15 * -0x18;
            uVar22 = *(uint *)(iVar23 + -4);
            if (uVar22 == 0) {
              uVar45 = 8;
              uVar22 = 0;
              goto LAB_009dc874;
            }
            iVar54 = *(int *)(iVar23 + -8);
            uVar45 = thunk_FUN_016d4a50(uVar22 * 0x28);
            if (uVar45 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(8,uVar22 * 0x28);
            }
            uVar58 = thunk_FUN_016de0ee(uVar45,0x2c0);
            piVar44 = (int *)((int)uVar58 + (int)((ulonglong)uVar58 >> 0x20));
            pppppuVar24 = ppppppuVar43[5];
            uVar14 = 0;
            goto LAB_009dbd98;
          }
        }
        if ((uVar38 & 0x80808080 & uVar38 << 1) != 0) break;
        iVar54 = iVar54 + 4;
        uVar45 = uVar45 + iVar54;
      }
    }
    goto LAB_009dca80;
  }
  if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar23 = FUN_015bf3f8(), iVar23 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("lock poisonedPatternIDError",0xd,&DAT_0186b7ec);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar22 = *puVar5 - 1;
    bVar56 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar56);
  *puVar5 = uVar22;
joined_r0x009dd57c:
  if ((uVar22 & 0xbfffffff) == 0x80000000) {
    FUN_015e9814(puVar5);
  }
LAB_009dcaa8:
  uVar45 = *param_3;
  uVar22 = param_3[1];
  local_34 = ppppppuVar43;
  if (param_7 == (uint ******)0x0) {
LAB_009dd688:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b52c);
  }
  FUN_016a4f80(&local_238,param_7,uVar45 - 1);
  pppppppuVar12 = local_238;
  if (local_238 == (uint *******)0x0) goto LAB_009dd688;
  local_12c = local_234;
  local_128 = local_230;
  local_134 = (uint ******)0x0;
  local_138 = (uint *******)0x0;
  local_124 = param_7;
  local_130 = local_238;
  if (((uint)*local_238 & (uint)ppppppuVar37) != 0 || ((uint)local_238[1] & uVar35) != 0) {
    FUN_009ee6c0();
    goto LAB_009dd688;
  }
  local_368 = local_230;
  local_36c = local_234;
  local_364 = param_7;
  local_370 = local_238;
  local_378 = (uint *******)ppppppuVar37;
  local_374 = (uint ******)uVar35;
  uVar59 = FUN_016a11a4(local_238);
  puVar5 = (uint *)uVar59;
  if (puVar5[6] != 0) {
    uVar14 = puVar5[3];
    uVar38 = puVar5[4];
    uVar15 = uVar38 & 0xb36486b9;
    local_500 = 0;
    while( true ) {
      uVar42 = *(uint *)(uVar14 + uVar15);
      uVar53 = (uVar42 & 0x80808080 ^ 0x80808080) & (uVar42 ^ 0x59595959) + 0xfefefeff;
      while (uVar53 != 0) {
        uVar36 = uVar15 + ((uint)LZCOUNT(uVar53 << 0x18 | (uVar53 >> 8 & 0xff) << 0x10 |
                                         (uVar53 >> 0x10 & 0xff) << 8 | uVar53 >> 0x18) >> 3) &
                 uVar38;
        piVar44 = (int *)((uVar14 - 0x18) + uVar36 * -0x18);
        uVar53 = uVar53 - 1 & uVar53;
        if ((*piVar44 == -0xa1a2068 && piVar44[2] == -0x4c9b7947) &&
            (piVar44[1] == 0x66389fa0 && piVar44[3] == 0x2259fa41)) {
          iVar23 = uVar14 + uVar36 * -0x18;
          (**(code **)(*(int *)(iVar23 + -4) + 0xc))(&local_138,*(undefined4 *)(iVar23 + -8));
          if (!((local_138 != (uint *******)0xf5e5df98 || local_130 != (uint *******)0xb36486b9) ||
               (local_134 != (uint ******)0x66389fa0 || local_12c != (uint ******)0x2259fa41)))
          goto LAB_009dce64;
          goto LAB_009dccec;
        }
      }
      if ((uVar42 & 0x80808080 & uVar42 << 1) != 0) break;
      local_500 = local_500 + 4;
      uVar15 = uVar15 + local_500 & uVar38;
    }
  }
LAB_009dccec:
  local_230 = (uint *******)0x0;
  local_234 = (uint ******)&DAT_00000001;
  local_238 = (uint *******)0x0;
  local_22c = (uint ******)((uint)local_22c & 0xffffff00);
  uVar3 = *(undefined1 *)(param_1 + 0x13a);
  pppppuVar24 = ppppppuVar43[5];
  local_12c = (uint ******)CONCAT22(local_12c._2_2_,1);
  local_138 = (uint *******)&local_238;
  local_130 = (uint *******)CONCAT31(local_130._1_3_,uVar3);
  local_134 = (uint ******)&DAT_0186b53c;
  if (pppppuVar24[1] != (uint ****)0x0) {
    pppuVar47 = pppppuVar24[2][2];
    ppppuVar51 = *pppppuVar24 + 1;
    iVar23 = (int)pppppuVar24[1] * 0xc;
    do {
      if (((uint ***)ppppuVar51[-1][2] == pppuVar47) && (*ppppuVar51 != (uint ***)0x0)) {
        (*(code *)ppppuVar51[1][3])(*ppppuVar51,ppppuVar51[-1],&local_138,&DAT_0186b4f8);
      }
      ppppuVar51 = ppppuVar51 + 3;
      iVar23 = iVar23 + -0xc;
    } while (iVar23 != 0);
    if (((uint)local_12c & 0x100) != 0) {
      local_4d8 = &local_34;
      local_4d4 = (uint ******)FUN_00a037ac;
      local_4b4 = (uint *****)0x6;
      local_4b8 = (uint *******)0x40ff20;
      FUN_015ee5cc(&local_278,&DAT_018dd9d8,&DAT_0057b54c,&local_4d8);
      if ((char)local_278 != '\x04') {
        local_12c = (uint ******)FUN_015ef5b4;
        local_130 = (uint *******)&local_478;
        local_138 = (uint *******)&local_4b8;
        local_474 = local_274;
        local_478 = local_278;
        local_134 = (uint ******)&DAT_015bee04;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0056faa6,&local_138,&DAT_018aab78);
      }
      if (local_238 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(local_234);
      }
      goto LAB_009dce64;
    }
  }
  local_22c = (uint ******)CONCAT31(local_22c._1_3_,uVar3);
  local_12c = local_22c;
  local_130 = local_230;
  local_134 = local_234;
  local_138 = local_238;
  FUN_009fdcf8(puVar5,&local_138);
LAB_009dce64:
  bVar4 = *(byte *)(param_1 + 0x139);
  if ((*(char *)(param_1 + 0x138) == '\x01') && ((bVar4 & 8) != 0)) {
    if (puVar5[6] != 0) {
      uVar14 = puVar5[3];
      uVar38 = puVar5[4];
      local_514 = 0;
      uVar15 = uVar38 & 0x852d8214;
      while( true ) {
        uVar42 = *(uint *)(uVar14 + uVar15);
        uVar53 = (uVar42 & 0x80808080 ^ 0x80808080) & (uVar42 ^ 0x42424242) + 0xfefefeff;
        while (uVar53 != 0) {
          uVar36 = uVar15 + ((uint)LZCOUNT(uVar53 << 0x18 | (uVar53 >> 8 & 0xff) << 0x10 |
                                           (uVar53 >> 0x10 & 0xff) << 8 | uVar53 >> 0x18) >> 3) &
                   uVar38;
          piVar44 = (int *)((uVar14 - 0x18) + uVar36 * -0x18);
          uVar53 = uVar53 - 1 & uVar53;
          if ((*piVar44 == 0x51809c7c && piVar44[2] == -0x7ad27dec) &&
              (piVar44[1] == 0x4a853532 && piVar44[3] == 0x7af5abf6)) {
            iVar23 = uVar14 + uVar36 * -0x18;
            (**(code **)(*(int *)(iVar23 + -4) + 0xc))(&local_138,*(undefined4 *)(iVar23 + -8));
            if (!((local_138 != (uint *******)0x51809c7c || local_130 != (uint *******)0x852d8214)
                 || (local_134 != (uint ******)0x4a853532 || local_12c != (uint ******)0x7af5abf6)))
            goto LAB_009dd04c;
            goto LAB_009dcff8;
          }
        }
        if ((uVar42 & 0x80808080 & uVar42 << 1) != 0) break;
        local_514 = local_514 + 4;
        uVar15 = uVar15 + local_514 & uVar38;
      }
    }
LAB_009dcff8:
    FUN_015f3b0c(&local_238,1);
    local_128 = (uint *******)0x0;
    local_124 = (uint ******)0x0;
    local_120 = local_238;
    local_11c = local_234;
    local_138 = (uint *******)0x0;
    local_134 = (uint ******)0x0;
    local_130 = (uint *******)0x0;
    local_12c = (uint ******)0x0;
    local_118 = local_230;
    FUN_009fd860(puVar5,&local_138);
  }
LAB_009dd04c:
  if ((bVar4 & 1) != 0) {
    local_224 = pppppppuVar12[0xc];
    local_4d0 = (uint *******)&DAT_0186b55c;
    local_4d8 = (uint *******)&local_478;
    pppppuStack_470 = local_224[9];
    pppppuStack_46c = local_224[10];
    local_478 = (uint ******)&DAT_018aeb80;
    local_474 = (uint *****)0x1;
    local_4b0 = (uint ******)&local_278;
    local_4b8 = (uint *******)&local_4d8;
    local_228 = (uint *******)&local_4b8;
    local_278 = (uint ******)&DAT_018aeb80;
    local_274 = (uint *****)0x1;
    local_468 = 0;
    local_234 = (uint ******)0x0;
    local_4d4 = (uint ******)&DAT_0186b554;
    local_4b4 = (uint *****)0x1;
    local_238 = (uint *******)0x2;
    pppppuStack_270 = pppppuStack_470;
    pppppuStack_26c = pppppuStack_46c;
    local_230 = (uint *******)uVar45;
    local_22c = (uint ******)uVar22;
    if ((((uVar59 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar23 = FUN_015bf3f8(), iVar23 == 0)) {
      *(undefined1 *)(puVar5 + 2) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar22 = *puVar5;
      bVar56 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar56);
    *puVar5 = uVar22 + 0xc0000001;
    if (0x3fffffff < uVar22 + 0xc0000001) {
      FUN_015e9814(puVar5);
    }
    ppppppuVar43 = local_370[0xe];
    pppppppuVar12 = local_370 + 0xe;
    DataMemoryBarrier(0xb);
    do {
      if (((uint)ppppppuVar43 & 3) == 2) {
        local_2c = (uint *******)0x2;
        local_134 = (uint ******)FUN_00facc48;
        local_138 = (uint *******)&local_2c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0041504f,&local_138,&DAT_018ae754);
      }
      uVar22 = ((uint)ppppppuVar43 & 0x3fffffff) >> 2;
      uVar14 = (uint)ppppppuVar43 & 3 ^ 1;
      ppppppuVar50 = (uint ******)((uint)ppppppuVar43 & 0xc0000000 | 3);
      uVar45 = uVar22 ^ 1;
      if (uVar14 != 0 || uVar45 != 0) {
        ppppppuVar50 = (uint ******)(uVar22 * 4 - 4 | (uint)ppppppuVar43 & 0xc0000003);
      }
      ppppppuVar10 = *pppppppuVar12;
      if (*pppppppuVar12 == ppppppuVar43) {
        DataMemoryBarrier(0xb);
        do {
          bVar56 = (bool)hasExclusiveAccess(pppppppuVar12);
          if (bVar56) {
            *pppppppuVar12 = ppppppuVar50;
            DataMemoryBarrier(0xb);
            if (uVar14 == 0 && uVar45 == 0) {
              FUN_009ebe80(local_36c,local_368);
            }
            local_2c = (uint *******)&local_238;
            local_124 = (uint ******)&local_2c;
            local_130 = (uint *******)param_7;
            local_128 = (uint *******)&local_30;
            local_138 = (uint *******)ppppppuVar37;
            local_134 = (uint ******)uVar35;
            local_30 = param_1 + 0x120;
            FUN_009e4aa0(&local_138);
            return;
          }
          ppppppuVar10 = *pppppppuVar12;
        } while (*pppppppuVar12 == ppppppuVar43);
      }
      ppppppuVar43 = ppppppuVar10;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    } while( true );
  }
  if ((((uVar59 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar23 = FUN_015bf3f8(), iVar23 == 0)) {
    *(undefined1 *)(puVar5 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar22 = *puVar5;
    bVar56 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar56);
  *puVar5 = uVar22 + 0xc0000001;
  if (0x3fffffff < uVar22 + 0xc0000001) {
    FUN_015e9814(puVar5);
  }
  ppppppuVar43 = local_370[0xe];
  pppppppuVar12 = local_370 + 0xe;
  DataMemoryBarrier(0xb);
  do {
    if (((uint)ppppppuVar43 & 3) == 2) {
      local_238 = (uint *******)0x2;
      local_134 = (uint ******)FUN_00facc48;
      local_138 = (uint *******)&local_238;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041504f,&local_138,&DAT_018ae754);
    }
    uVar22 = ((uint)ppppppuVar43 & 0x3fffffff) >> 2;
    uVar45 = (uint)ppppppuVar43 & 3 ^ 1;
    ppppppuVar37 = (uint ******)((uint)ppppppuVar43 & 0xc0000000 | 3);
    uVar35 = uVar22 ^ 1;
    if (uVar45 != 0 || uVar35 != 0) {
      ppppppuVar37 = (uint ******)(uVar22 * 4 - 4 | (uint)ppppppuVar43 & 0xc0000003);
    }
    ppppppuVar50 = *pppppppuVar12;
    if (*pppppppuVar12 == ppppppuVar43) {
      DataMemoryBarrier(0xb);
      do {
        bVar56 = (bool)hasExclusiveAccess(pppppppuVar12);
        if (bVar56) {
          *pppppppuVar12 = ppppppuVar37;
          DataMemoryBarrier(0xb);
          if (uVar45 == 0 && uVar35 == 0) {
            FUN_009ebe80(local_36c,local_368);
            return;
          }
          return;
        }
        ppppppuVar50 = *pppppppuVar12;
      } while (*pppppppuVar12 == ppppppuVar43);
    }
    ppppppuVar43 = ppppppuVar50;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
LAB_009dbd98:
  puVar16 = (undefined4 *)(iVar54 + uVar14 * 0x28);
  puVar49 = (uint *)*puVar16;
  ppppppuVar50 = (uint ******)puVar16[3];
  puVar13 = puVar49 + 1;
  uVar38 = *puVar49;
  if ((char)piVar44[4] == '\x01') {
    local_4bc = (uint ******)piVar44[3];
    local_4c8 = (uint *******)*piVar44;
    ppppppuStack_4c4 = (uint ******)piVar44[1];
    local_4c0 = (uint *******)piVar44[2];
  }
  else {
    FUN_015f62e4(&local_138);
    piVar44[2] = (int)local_130;
    piVar44[3] = (int)local_12c;
    *(undefined1 *)(piVar44 + 4) = 1;
    local_4bc = local_12c;
    local_4c8 = local_138;
    ppppppuStack_4c4 = local_134;
    local_4c0 = local_130;
  }
  *piVar44 = (int)local_4c8 + 1;
  piVar44[1] = (int)((int)ppppppuStack_4c4 + (uint)((uint *******)0xfffffffe < local_4c8));
  local_4d4 = (uint ******)0x0;
  local_4d0 = (uint *******)0x0;
  local_4cc = (uint ******)0x0;
  local_4d8 = (uint *******)&DAT_005674cc;
  if (ppppppuVar50 != (uint ******)0x0) {
    FUN_0169f398(&local_4d8,ppppppuVar50,&local_4c8);
  }
  uVar38 = ~uVar38 & 0x80808080;
  ppppppuVar10 = ppppppuVar50;
LAB_009dbf38:
  ppppppuVar39 = ppppppuVar10;
  uVar15 = uVar38;
  if (uVar38 == 0) {
    puVar52 = puVar13;
    if (ppppppuVar39 == (uint ******)0x0) goto LAB_009dc70c;
    do {
      puVar13 = puVar52 + 1;
      uVar38 = *puVar52;
      puVar49 = puVar49 + -0x28;
      puVar52 = puVar13;
    } while ((uVar38 & 0x80808080) == 0x80808080);
    uVar15 = uVar38 & 0x80808080 ^ 0x80808080;
  }
  uVar38 = uVar15 - 1 & uVar15;
  uVar15 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                         (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
  pppppppuVar12 = (uint *******)(uVar15 * -5);
  uVar42 = puVar49[uVar15 * -10 + -4];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)uVar42) {
  default:
    local_4fc = (uint ******)puVar49[uVar15 * -10 + -1];
    ppppppuVar50 = (uint ******)puVar49[uVar15 * -10 + -3];
    pppppppuVar12 = (uint *******)puVar49[uVar15 * -10 + -2];
    local_478 = (uint ******)
                CONCAT22(CONCAT11(local_478._3_1_,
                                  *(undefined1 *)((int)puVar49 + uVar15 * -0x28 + -0xd)),
                         *(undefined2 *)((int)puVar49 + uVar15 * -0x28 + -0xf));
    break;
  case '\x04':
    break;
  case '\x05':
    ppppppuVar50 = (uint ******)puVar49[uVar15 * -10 + -3];
    do {
      pppppuVar46 = *ppppppuVar50;
      bVar56 = (bool)hasExclusiveAccess(ppppppuVar50);
    } while (!bVar56);
    *ppppppuVar50 = (uint *****)((int)pppppuVar46 + 1);
    if ((int)pppppuVar46 < 0) {
LAB_009dd728:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x9dd728);
      (*pcVar1)();
    }
    pppppppuVar12 = (uint *******)puVar49[uVar15 * -10 + -2];
    break;
  case '\x06':
    pppppuVar46 = (uint *****)puVar49[uVar15 * -10 + -3];
    ppppppuVar50 = (uint ******)thunk_FUN_016d4a50(0x2c8);
    if (ppppppuVar50 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x2c8);
    }
    pppppuVar25 = (uint *****)pppppuVar46[0x1a];
    uVar7 = 0;
    if (pppppuVar25 < (uint *****)0x40000000) {
      pppppuVar11 = (uint *****)((int)pppppuVar25 * 4);
      if (pppppuVar11 < (uint *****)0x7ffffffd) {
        ppppuVar51 = pppppuVar46[0x19];
        local_568 = (uint *****)0x0;
        if (pppppuVar11 == (uint *****)0x0) {
          local_52c = (uint *****)0x4;
          local_558 = (uint *****)0x0;
        }
        else {
          local_52c = (uint *****)thunk_FUN_016d4a50(pppppuVar11,local_52c);
          if (local_52c == (uint *****)0x0) {
            uVar7 = 4;
            local_52c = pppppuVar11;
            goto LAB_009dd33c;
          }
          local_558 = pppppuVar25;
        }
        FUN_016dd1aa(local_52c,ppppuVar51,pppppuVar11);
        FUN_016dd1aa(&local_238,pppppuVar46 + 0x1b,0x100);
        pppppuVar8 = (uint *****)pppppuVar46[0x6e];
        bVar57 = (uint *****)0x3ffffffe < pppppuVar8;
        bVar56 = pppppuVar8 == (uint *****)0x3fffffff;
        pppppuVar11 = pppppuVar46;
        if (pppppuVar8 < (uint *****)0x40000000) {
          pppppuVar11 = (uint *****)((int)pppppuVar8 << 2);
          bVar57 = (uint *****)0x7ffffffb < pppppuVar11;
          bVar56 = pppppuVar11 == (uint *****)0x7ffffffc;
        }
        if (bVar57 && !bVar56) {
LAB_009dd6c8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_568,local_56c);
        }
        ppppuVar51 = pppppuVar46[0x6d];
        pppppuVar17 = (uint *****)pppppuVar46[0x5b];
        local_574 = (uint *****)0x0;
        if (pppppuVar11 == (uint *****)0x0) {
          local_56c = (uint *****)&DAT_00000004;
          local_568 = (uint *****)0x0;
        }
        else {
          local_56c = (uint *****)thunk_FUN_016d4a50(pppppuVar11);
          if (local_56c == (uint *****)0x0) {
            local_568 = (uint *****)0x4;
            local_56c = pppppuVar11;
            goto LAB_009dd6c8;
          }
          local_568 = pppppuVar8;
        }
        FUN_016dd1aa(local_56c,ppppuVar51,pppppuVar11);
        uVar3 = *(undefined1 *)(pppppuVar46 + 0xb0);
        FUN_016dd1aa(&local_138,pppppuVar46 + 0x6f,0x100);
        pppppuVar18 = (uint *****)pppppuVar46[0x5e];
        bVar57 = (uint *****)0x3ffffffe < pppppuVar18;
        bVar56 = pppppuVar18 == (uint *****)0x3fffffff;
        pppppuVar11 = pppppuVar46;
        if (pppppuVar18 < (uint *****)0x40000000) {
          pppppuVar11 = (uint *****)((int)pppppuVar18 << 2);
          bVar57 = (uint *****)0x7ffffffb < pppppuVar11;
          bVar56 = pppppuVar11 == (uint *****)0x7ffffffc;
        }
        if (bVar57 && !bVar56) {
LAB_009dd6e4:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_574,local_578);
        }
        pppppuVar26 = (uint *****)pppppuVar46[0x66];
        pppppuVar27 = (uint *****)pppppuVar46[0x67];
        pppppuVar28 = (uint *****)pppppuVar46[0x68];
        pppppuVar29 = (uint *****)pppppuVar46[0x69];
        pppppuVar30 = (uint *****)pppppuVar46[0x6a];
        ppppuVar51 = pppppuVar46[0x5d];
        pppppuVar31 = (uint *****)pppppuVar46[0x6b];
        pppppuVar32 = (uint *****)pppppuVar46[0xaf];
        local_588 = 0;
        if (pppppuVar11 == (uint *****)0x0) {
          local_578 = (uint *****)&DAT_00000004;
          local_574 = (uint *****)0x0;
        }
        else {
          local_578 = (uint *****)thunk_FUN_016d4a50(pppppuVar11);
          if (local_578 == (uint *****)0x0) {
            local_574 = (uint *****)0x4;
            local_578 = pppppuVar11;
            goto LAB_009dd6e4;
          }
          local_574 = pppppuVar18;
        }
        FUN_016dd1aa(local_578,ppppuVar51,pppppuVar11);
        pppppuVar9 = (uint *****)pppppuVar46[0x61];
        bVar57 = (uint *****)0x3ffffffe < pppppuVar9;
        bVar56 = pppppuVar9 == (uint *****)0x3fffffff;
        if (pppppuVar9 < (uint *****)0x40000000) {
          pppppuVar11 = (uint *****)((int)pppppuVar9 << 2);
          bVar57 = (uint *****)0x7ffffffb < pppppuVar11;
          bVar56 = pppppuVar11 == (uint *****)0x7ffffffc;
        }
        if (bVar57 && !bVar56) {
LAB_009dd700:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_588,local_58c);
        }
        ppppuVar51 = pppppuVar46[0x60];
        local_5b0 = 0;
        if (pppppuVar11 == (uint *****)0x0) {
          local_58c = (uint *****)&DAT_00000004;
          local_5ac = (uint *****)0x0;
        }
        else {
          local_58c = (uint *****)thunk_FUN_016d4a50(pppppuVar11);
          if (local_58c == (uint *****)0x0) {
            local_588 = 4;
            local_58c = pppppuVar11;
            goto LAB_009dd700;
          }
          local_5ac = pppppuVar9;
        }
        FUN_016dd1aa(local_58c,ppppuVar51,pppppuVar11);
        ppppppuVar10 = (uint ******)pppppuVar46[0x65];
        bVar57 = (uint ******)0x3ffffffe < ppppppuVar10;
        bVar56 = ppppppuVar10 == (uint ******)0x3fffffff;
        if (ppppppuVar10 < (uint ******)0x40000000) {
          pppppuVar11 = (uint *****)((int)ppppppuVar10 << 2);
          bVar57 = (uint *****)0x7ffffffb < pppppuVar11;
          bVar56 = pppppuVar11 == (uint *****)0x7ffffffc;
        }
        if (bVar57 && !bVar56) {
LAB_009dd71c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_5b0,local_5b4);
        }
        ppppuVar51 = pppppuVar46[100];
        pppppuVar19 = (uint *****)pppppuVar46[0x62];
        if (pppppuVar11 == (uint *****)0x0) {
          local_5b4 = (uint *****)&DAT_00000004;
          local_4fc = (uint ******)0x0;
        }
        else {
          local_5b4 = (uint *****)thunk_FUN_016d4a50(pppppuVar11);
          if (local_5b4 == (uint *****)0x0) {
            local_5b0 = 4;
            local_5b4 = pppppuVar11;
            goto LAB_009dd71c;
          }
          local_4fc = ppppppuVar10;
        }
        FUN_016dd1aa(local_5b4,ppppuVar51,pppppuVar11);
        cVar2 = *(char *)(pppppuVar46 + 0x17);
        if (cVar2 != '\x02') {
          local_5cc = (uint *****)pppppuVar46[0x14];
          do {
            ppppuVar51 = *local_5cc;
            bVar56 = (bool)hasExclusiveAccess(local_5cc);
          } while (!bVar56);
          *local_5cc = (uint ****)((int)ppppuVar51 + 1);
          if ((int)ppppuVar51 < 0) goto LAB_009dd728;
          local_5d0 = (uint *****)pppppuVar46[0x15];
          local_5d4 = (uint *****)pppppuVar46[0x16];
        }
        local_258 = (uint *****)pppppuVar46[0xc];
        pppppuStack_254 = (uint *****)pppppuVar46[0xd];
        local_250 = (uint *****)pppppuVar46[0xe];
        pppppuStack_24c = (uint *****)pppppuVar46[0xf];
        local_248 = (uint *****)pppppuVar46[0x10];
        pppppuStack_244 = (uint *****)pppppuVar46[0x11];
        pppppuStack_240 = (uint *****)pppppuVar46[0x12];
        pppppuStack_23c = (uint *****)pppppuVar46[0x13];
        local_2c = (uint *******)
                   CONCAT22(CONCAT11(local_2c._3_1_,*(undefined1 *)((int)pppppuVar46 + 0x2c6)),
                            *(undefined2 *)(pppppuVar46 + 0xb1));
        FUN_016dd1aa(&local_378,&local_238,0x100);
        FUN_016dd1aa(&local_478,&local_138,0x100);
        local_278 = (uint ******)pppppuVar46[4];
        local_274 = (uint *****)pppppuVar46[5];
        pppppuStack_270 = (uint *****)pppppuVar46[6];
        pppppuStack_26c = (uint *****)pppppuVar46[7];
        local_268 = (uint *****)pppppuVar46[8];
        local_264 = (uint *****)pppppuVar46[9];
        pppppuStack_260 = (uint *****)pppppuVar46[10];
        pppppuStack_25c = (uint *****)pppppuVar46[0xb];
        pppppuVar40 = (uint *****)*pppppuVar46;
        pppppuVar20 = (uint *****)pppppuVar46[2];
        pppppuVar11 = (uint *****)pppppuVar46[3];
        do {
          ppppuVar51 = *pppppuVar40;
          bVar56 = (bool)hasExclusiveAccess(pppppuVar40);
        } while (!bVar56);
        *pppppuVar40 = (uint ****)((int)ppppuVar51 + 1);
        if ((int)ppppuVar51 < 0) goto LAB_009dd728;
        pppppuVar46 = (uint *****)pppppuVar46[1];
        pppppuStack_498 = local_258;
        pppppuStack_494 = pppppuStack_254;
        local_490 = local_250;
        pppppuStack_48c = pppppuStack_24c;
        pppppuStack_488 = local_248;
        pppppuStack_484 = pppppuStack_244;
        pppppuStack_480 = pppppuStack_240;
        pppppuStack_47c = pppppuStack_23c;
        local_4b8 = (uint *******)local_278;
        local_4b4 = local_274;
        local_4b0 = (uint ******)pppppuStack_270;
        pppppuStack_4ac = pppppuStack_26c;
        pppppuStack_4a8 = local_268;
        local_4a4 = local_264;
        pppppuStack_4a0 = pppppuStack_260;
        pppppuStack_49c = pppppuStack_25c;
        FUN_016dd1aa(&local_138,&local_378,0x100);
        FUN_016dd1aa(&local_238,&local_478,0x100);
        local_30 = CONCAT22(CONCAT11(local_30._3_1_,local_2c._2_1_),(undefined2)local_2c);
        ppppppuVar50[1] = pppppuVar46;
        ppppppuVar50[2] = pppppuVar20;
        *ppppppuVar50 = pppppuVar40;
        ppppppuVar50[3] = pppppuVar11;
        ppppppuVar50[4] = (uint *****)local_4b8;
        ppppppuVar50[5] = local_4b4;
        ppppppuVar50[6] = (uint *****)local_4b0;
        ppppppuVar50[7] = pppppuStack_4ac;
        ppppppuVar50[8] = pppppuStack_4a8;
        ppppppuVar50[9] = local_4a4;
        ppppppuVar50[10] = pppppuStack_4a0;
        ppppppuVar50[0xb] = pppppuStack_49c;
        ppppppuVar50[0xc] = pppppuStack_498;
        ppppppuVar50[0xd] = pppppuStack_494;
        ppppppuVar50[0xe] = local_490;
        ppppppuVar50[0xf] = pppppuStack_48c;
        ppppppuVar50[0x10] = pppppuStack_488;
        ppppppuVar50[0x11] = pppppuStack_484;
        ppppppuVar50[0x12] = pppppuStack_480;
        ppppppuVar50[0x13] = pppppuStack_47c;
        ppppppuVar50[0x1a] = pppppuVar25;
        ppppppuVar50[0x19] = local_52c;
        ppppppuVar50[0x18] = local_558;
        *(char *)(ppppppuVar50 + 0x17) = cVar2;
        ppppppuVar50[0x14] = local_5cc;
        ppppppuVar50[0x15] = local_5d0;
        ppppppuVar50[0x16] = local_5d4;
        FUN_016dd1aa(ppppppuVar50 + 0x1b,&local_138,0x100);
        ppppppuVar50[0x6c] = local_568;
        ppppppuVar50[0x6d] = local_56c;
        ppppppuVar50[0x6e] = pppppuVar8;
        ppppppuVar50[100] = local_5b4;
        ppppppuVar50[0x65] = (uint *****)ppppppuVar10;
        ppppppuVar50[0x66] = pppppuVar26;
        ppppppuVar50[0x67] = pppppuVar27;
        ppppppuVar50[0x68] = pppppuVar28;
        ppppppuVar50[0x69] = pppppuVar29;
        ppppppuVar50[0x6a] = pppppuVar30;
        ppppppuVar50[0x6b] = pppppuVar31;
        ppppppuVar50[0x5c] = local_574;
        ppppppuVar50[0x5d] = local_578;
        ppppppuVar50[0x5e] = pppppuVar18;
        ppppppuVar50[0x5f] = local_5ac;
        ppppppuVar50[0x60] = local_58c;
        ppppppuVar50[0x61] = pppppuVar9;
        ppppppuVar50[0x62] = pppppuVar19;
        ppppppuVar50[99] = (uint *****)local_4fc;
        ppppppuVar50[0x5b] = pppppuVar17;
        FUN_016dd1aa(ppppppuVar50 + 0x6f,&local_238,0x100);
        *(undefined2 *)(ppppppuVar50 + 0xb1) = (undefined2)local_30;
        *(undefined1 *)(ppppppuVar50 + 0xb0) = uVar3;
        pppppppuVar12 = (uint *******)(uint)local_30._2_1_;
        *(byte *)((int)ppppppuVar50 + 0x2c6) = local_30._2_1_;
        ppppppuVar50[0xaf] = pppppuVar32;
        break;
      }
    }
LAB_009dd33c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,local_52c);
  }
  local_378 = (uint *******)puVar49[uVar15 * -10 + -10];
  local_374 = (uint ******)puVar49[uVar15 * -10 + -9];
  local_370 = (uint *******)puVar49[uVar15 * -10 + -8];
  local_36c = (uint ******)puVar49[uVar15 * -10 + -7];
  local_368 = (uint *******)puVar49[uVar15 * -10 + -6];
  *(undefined1 *)((undefined2 *)((uint)&local_238 | 1) + 1) = local_478._2_1_;
  *(undefined2 *)((uint)&local_238 | 1) = (undefined2)local_478;
  local_228 = (uint *******)((uint)local_228 & 0xffffff00);
  local_22c = local_4fc;
  local_238 = (uint *******)CONCAT31(local_238._1_3_,(char)uVar42);
  local_234 = ppppppuVar50;
  local_230 = pppppppuVar12;
  puVar6 = (undefined1 *)FUN_016a7780(local_4c8,ppppppuStack_4c4,local_4c0,local_4bc,&local_378);
  if (local_4d0 == (uint *******)0x0) {
    FUN_0169f398(&local_4d8,1,&local_4c8);
  }
  ppppppuVar50 = local_4d4;
  local_4fc = (uint ******)0x0;
  bVar56 = false;
  puVar33 = puVar6;
  do {
    uVar42 = (uint)local_4d4 & (uint)puVar33;
    uVar53 = *(uint *)((int)local_4d8 + uVar42);
    uVar15 = uVar53 ^ ((uint)puVar6 >> 0x19) * 0x1010101;
    uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
    while (uVar15 != 0) {
      uVar36 = uVar42 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                       (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
               (uint)local_4d4;
      pppppppuVar12 = (uint *******)(uVar15 - 1);
      uVar15 = (uint)pppppppuVar12 & uVar15;
      if (local_370 == (uint *******)local_4d8[uVar36 * -0xc + -10]) {
        pppppppuVar12 = (uint *******)local_4d8[uVar36 * -0xc + -8];
      }
      if (local_370 == (uint *******)local_4d8[uVar36 * -0xc + -10] && local_368 == pppppppuVar12) {
        local_138 = (uint *******)local_4d8[uVar36 * -0xc + -6];
        local_134 = local_4d8[uVar36 * -0xc + -5];
        local_130 = (uint *******)local_4d8[uVar36 * -0xc + -4];
        local_12c = local_4d8[uVar36 * -0xc + -3];
        local_128 = (uint *******)local_4d8[uVar36 * -0xc + -2];
        local_124 = local_4d8[uVar36 * -0xc + -1];
        local_4d8[uVar36 * -0xc + -6] = (uint ******)local_238;
        local_4d8[uVar36 * -0xc + -5] = local_234;
        local_4d8[uVar36 * -0xc + -4] = (uint ******)local_230;
        local_4d8[uVar36 * -0xc + -3] = local_22c;
        local_4d8[uVar36 * -0xc + -2] = (uint ******)local_228;
        local_4d8[uVar36 * -0xc + -1] = local_224;
        if ((char)local_138 != '\a') {
          FUN_0169d780(&local_138);
        }
        goto LAB_009dbf2c;
      }
    }
    uVar15 = uVar53 & 0x80808080;
    pppppuVar46 = local_558;
    if (bVar56) {
LAB_009dbec4:
      if ((uVar15 & uVar53 << 1) != 0) goto LAB_009dc128;
      bVar56 = true;
      local_558 = pppppuVar46;
    }
    else {
      if (uVar15 != 0) {
        pppppuVar46 = (uint *****)
                      (uVar42 + ((uint)LZCOUNT((uVar53 & 0x80) << 0x18 |
                                               (uVar15 >> 8 & 0xff) << 0x10 |
                                               (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3)
                      & (uint)local_4d4);
        goto LAB_009dbec4;
      }
      bVar56 = false;
    }
    local_4fc = local_4fc + 1;
    puVar33 = (undefined1 *)((int)local_4fc + uVar42);
  } while( true );
LAB_009dc70c:
  local_238 = (uint *******)&local_138;
  local_138 = local_4d8;
  local_134 = local_4d4;
  local_130 = local_4d0;
  local_12c = local_4cc;
  local_128 = local_4c8;
  local_124 = ppppppuStack_4c4;
  local_120 = local_4c0;
  local_11c = local_4bc;
  local_118 = (uint *******)puVar16[8];
  local_114 = (uint ******)((uint)local_114 & 0xffffff00);
  if (pppppuVar24[1] != (uint ****)0x0) {
    pppuVar47 = pppppuVar24[2][2];
    iVar41 = (int)pppppuVar24[1] * 0xc;
    ppppuVar51 = *pppppuVar24 + 1;
    do {
      if (((uint ***)ppppuVar51[-1][2] == pppuVar47) && (*ppppuVar51 != (uint ***)0x0)) {
        (*(code *)ppppuVar51[1][3])(*ppppuVar51,ppppuVar51[-1],&local_238,&DAT_018ae7fc);
      }
      ppppuVar51 = ppppuVar51 + 3;
      iVar41 = iVar41 + -0xc;
    } while (iVar41 != 0);
  }
  local_238 = local_138;
  local_234 = local_134;
  local_230 = local_130;
  local_22c = local_12c;
  local_228 = local_128;
  local_224 = local_124;
  pppppppuStack_220 = local_120;
  ppppppuStack_21c = local_11c;
  pppppppuStack_218 = local_118;
  ppppppuStack_214 = local_114;
  puVar16 = (undefined4 *)(uVar45 + uVar14 * 0x28);
  *puVar16 = local_138;
  puVar16[1] = local_134;
  puVar16[2] = local_130;
  puVar16[3] = local_12c;
  puVar16[4] = local_128;
  puVar16[5] = local_124;
  puVar16[6] = local_120;
  puVar16[7] = local_11c;
  puVar16[8] = local_118;
  puVar16[9] = local_114;
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar22) goto LAB_009dc874;
  goto LAB_009dbd98;
LAB_009dc874:
  uVar14 = *(uint *)(iVar23 + -0x10);
  puVar49 = (uint *)(param_1 + 0x30);
  if (*puVar49 == 0) {
    bVar56 = (bool)hasExclusiveAccess(puVar49);
    if (!bVar56) goto LAB_009dd3ac;
    *puVar49 = 0x3fffffff;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_009dd3ac:
    FUN_015f5ff4(puVar49);
  }
  uVar38 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(param_1 + 0x38);
  }
  else {
    uVar38 = FUN_015bf3f8();
    uVar38 = uVar38 ^ 1;
    cVar2 = *(char *)(param_1 + 0x38);
  }
  if (cVar2 == '\0') {
    uVar53 = *param_3;
    uVar42 = param_3[1];
    uVar15 = FUN_009ee3b8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                          *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),uVar53,
                          uVar42);
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_0169e998(param_1 + 0x40,(undefined4 *)(param_1 + 0x50));
    }
    uVar34 = *(uint *)(param_1 + 0x44);
    puVar13 = *(uint **)(param_1 + 0x40);
    iVar23 = 0;
    bVar56 = false;
    uVar36 = uVar15;
    do {
      uVar36 = uVar34 & uVar36;
      uVar55 = *(uint *)((int)puVar13 + uVar36);
      uVar48 = uVar55 ^ (uVar15 >> 0x19) * 0x1010101;
      uVar48 = ~uVar48 & 0x80808080 & uVar48 + 0xfefefeff;
      while (uVar48 != 0) {
        uVar21 = uVar36 + ((uint)LZCOUNT(uVar48 << 0x18 | (uVar48 >> 8 & 0xff) << 0x10 |
                                         (uVar48 >> 0x10 & 0xff) << 8 | uVar48 >> 0x18) >> 3) &
                 uVar34;
        uVar48 = uVar48 - 1 & uVar48;
        if (uVar53 == puVar13[uVar21 * -6 + -6] && uVar42 == puVar13[uVar21 * -6 + -5]) {
          uVar42 = puVar13[uVar21 * -6 + -4];
          uVar36 = puVar13[uVar21 * -6 + -3];
          uVar53 = puVar13[uVar21 * -6 + -2];
          uVar15 = puVar13[uVar21 * -6 + -1];
          puVar13[uVar21 * -6 + -1] = uVar22;
          puVar13[uVar21 * -6 + -2] = uVar45;
          puVar13[uVar21 * -6 + -3] = uVar22;
          puVar13[uVar21 * -6 + -4] = uVar14;
          if ((uVar42 != 6) && (FUN_00a05464(uVar53,uVar15), uVar36 != 0)) {
            thunk_FUN_016d3fb4(uVar53);
          }
          goto joined_r0x009dca44;
        }
      }
      uVar48 = uVar55 & 0x80808080;
      if (bVar56) {
LAB_009dc9cc:
        if ((uVar48 & uVar55 << 1) != 0) goto LAB_009dd3b8;
        bVar56 = true;
      }
      else {
        if (uVar48 != 0) {
          local_4f8 = (uint ******)
                      (uVar36 + ((uint)LZCOUNT((uVar55 & 0x80) << 0x18 |
                                               (uVar48 >> 8 & 0xff) << 0x10 |
                                               (uVar48 >> 0x10 & 0xff) << 8 | uVar48 >> 0x18) >> 3)
                      & uVar34);
          goto LAB_009dc9cc;
        }
        bVar56 = false;
      }
      iVar23 = iVar23 + 4;
      uVar36 = iVar23 + uVar36;
    } while( true );
  }
  if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar23 = FUN_015bf3f8(), iVar23 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("lock poisonedPatternIDError",0xd,&DAT_0186b7dc);
  }
  FUN_016a6218(puVar49,uVar38);
  FUN_00a05464(uVar45,uVar22);
  if (uVar22 != 0) {
    thunk_FUN_016d3fb4(uVar45);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar22 = *puVar5 - 1;
    bVar56 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar56);
  *puVar5 = uVar22;
  goto joined_r0x009dd57c;
LAB_009dd3b8:
  uVar36 = (uint)*(char *)((int)puVar13 + (int)local_4f8);
  if (-1 < (int)uVar36) {
    uVar36 = *puVar13 & 0x80808080;
    uVar48 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 |
                     (uVar36 >> 0x10 & 0xff) << 8 | uVar36 >> 0x18);
    uVar36 = (uint)*(byte *)((int)puVar13 + (uVar48 >> 3));
    local_4f8 = (uint ******)(uVar48 >> 3);
  }
  *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - (uVar36 & 1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  bVar4 = (byte)(uVar15 >> 0x19);
  *(byte *)((int)puVar13 + (int)local_4f8) = bVar4;
  *(byte *)((int)puVar13 + (uVar34 & (uint)(local_4f8 + -1)) + 4) = bVar4;
  puVar13[(int)local_4f8 * -6 + -1] = uVar22;
  puVar13[(int)local_4f8 * -6 + -6] = uVar53;
  puVar13[(int)local_4f8 * -6 + -5] = uVar42;
  puVar13[(int)local_4f8 * -6 + -4] = uVar14;
  puVar13[(int)local_4f8 * -6 + -3] = uVar22;
  puVar13[(int)local_4f8 * -6 + -2] = uVar45;
joined_r0x009dca44:
  if (((uVar38 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar23 = FUN_015bf3f8(), iVar23 == 0)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar22 = *puVar49;
    bVar56 = (bool)hasExclusiveAccess(puVar49);
  } while (!bVar56);
  *puVar49 = uVar22 + 0xc0000001;
  if (0x3fffffff < uVar22 + 0xc0000001) {
    FUN_015e9814(puVar49);
  }
LAB_009dca80:
  DataMemoryBarrier(0xb);
  do {
    uVar22 = *puVar5;
    bVar56 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar56);
  *puVar5 = uVar22 - 1;
  if ((uVar22 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_015e9814();
  }
  goto LAB_009dcaa8;
LAB_009dc128:
  local_4fc = (uint ******)(int)*(char *)((int)local_4d8 + (int)pppppuVar46);
  if (-1 < (int)local_4fc) {
    uVar15 = (uint)*local_4d8 & 0x80808080;
    uVar15 = LZCOUNT(((uint)*local_4d8 & 0x80) << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                     (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
    local_4fc = (uint ******)(uint)*(byte *)((int)local_4d8 + (uVar15 >> 3));
    pppppuVar46 = (uint *****)(uVar15 >> 3);
  }
  local_120 = local_238;
  local_11c = local_234;
  local_118 = local_230;
  local_114 = local_22c;
  local_138 = local_378;
  local_134 = local_374;
  local_130 = local_370;
  local_12c = local_36c;
  local_128 = local_368;
  bVar4 = (byte)((uint)puVar6 >> 0x19);
  *(byte *)((int)local_4d8 + (int)pppppuVar46) = bVar4;
  *(byte *)((int)local_4d8 + ((uint)local_4d4 & (uint)(pppppuVar46 + -1)) + 4) = bVar4;
  local_4d0 = (uint *******)((int)local_4d0 - ((uint)local_4fc & 1));
  local_4cc = (uint ******)((int)local_4cc + 1);
  local_4d8[(int)pppppuVar46 * -0xc + -0xc] = (uint ******)local_378;
  local_4d8[(int)pppppuVar46 * -0xc + -0xb] = local_374;
  local_4d8[(int)pppppuVar46 * -0xc + -10] = (uint ******)local_370;
  local_4d8[(int)pppppuVar46 * -0xc + -9] = local_36c;
  local_4d8[(int)pppppuVar46 * -0xc + -8] = (uint ******)local_368;
  local_4d8[(int)pppppuVar46 * -0xc + -7] = local_124;
  local_4d8[(int)pppppuVar46 * -0xc + -6] = (uint ******)local_238;
  local_4d8[(int)pppppuVar46 * -0xc + -5] = local_234;
  local_4d8[(int)pppppuVar46 * -0xc + -4] = (uint ******)local_230;
  local_4d8[(int)pppppuVar46 * -0xc + -3] = local_22c;
  local_4d8[(int)pppppuVar46 * -0xc + -2] = (uint ******)local_228;
  local_4d8[(int)pppppuVar46 * -0xc + -1] = local_224;
LAB_009dbf2c:
  ppppppuVar10 = (uint ******)((int)ppppppuVar39 + -1);
  local_4f8 = ppppppuVar39;
  goto LAB_009dbf38;
}

