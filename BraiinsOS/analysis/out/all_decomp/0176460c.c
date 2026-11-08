// FUN_0176460c @ 0176460c size=8328 calls_out=12 calls_in=2
// strings: 

undefined4
FUN_0176460c(uint *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  code *pcVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  byte *pbVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  short sVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 *puVar24;
  uint uVar25;
  int *piVar26;
  uint *puVar27;
  uint *puVar28;
  int *piVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  int *piStack_1e40c;
  int *piStack_1e370;
  undefined1 *puStack_1e33c;
  int *piStack_1e330;
  uint *puStack_1e328;
  int *piStack_1e318;
  int *piStack_1e314;
  undefined1 auStack_1e300 [732];
  uint auStack_1e024 [840];
  int aiStack_1d304 [13312];
  uint uStack_10304;
  undefined4 auStack_10300 [1023];
  int aiStack_f304 [1025];
  int local_e300 [1023];
  int aiStack_d304 [256];
  int aiStack_cf04 [512];
  int iStack_c704;
  int local_c700 [256];
  undefined1 auStack_c300 [1024];
  undefined1 auStack_bf00 [1024];
  undefined1 auStack_bb00 [1024];
  undefined1 auStack_b700 [1024];
  undefined1 auStack_b300 [1024];
  undefined1 auStack_af00 [1020];
  uint uStack_ab04;
  uint local_ab00 [255];
  uint auStack_a704 [1792];
  undefined4 uStack_8b04;
  uint local_8b00 [255];
  uint auStack_8704 [1792];
  int iStack_6b04;
  uint local_6b00 [255];
  uint auStack_6704 [1792];
  int iStack_4b04;
  uint local_4b00 [2047];
  int iStack_2b04;
  uint local_2b00 [1791];
  uint uStack_f04;
  uint local_f00 [255];
  uint auStack_b04 [256];
  uint uStack_704;
  undefined1 auStack_700 [1024];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [32];
  undefined4 local_280 [16];
  undefined4 auStack_240 [16];
  uint local_200 [16];
  uint auStack_1c0 [4];
  undefined1 auStack_1b0 [388];
  int local_2c;
  uint uStack_28;
  
  puVar8 = (uint *)(auStack_1b0 + 0x18c);
  do {
    puVar8 = puVar8 + -0x400;
    *puVar8 = (uint)param_1;
  } while (puVar8 != auStack_1e024);
  local_2c = DAT_018ddaf8;
  FUN_0170a928(auStack_300,auStack_2e0,auStack_2a0,local_4b00,local_2b00,local_6b00,param_8);
  if (param_9 == 0) {
    FUN_01757774(auStack_1b0,0x88);
    FUN_01757884(auStack_1b0,auStack_2e0,0x40);
    if (param_6 != 0) {
      FUN_01757884(auStack_1b0,param_5,param_6);
    }
    if (param_4 != 0) {
      FUN_01757884(auStack_1b0,param_3,param_4);
    }
    FUN_01757d10(local_280,auStack_1b0,0x40);
    FUN_0177aaa0(auStack_1b0,0x180);
  }
  else {
    if ((param_3 < auStack_240 && local_280 < param_3) ||
       ((param_3 < local_280 && (local_280 < param_3 + 0x10)))) {
LAB_017666b0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x17666b0);
      (*pcVar1)();
    }
    puVar20 = local_280;
    puVar18 = param_3;
    do {
      uVar22 = puVar18[1];
      puVar24 = puVar18 + 4;
      uVar13 = puVar18[2];
      uVar16 = puVar18[3];
      *puVar20 = *puVar18;
      puVar20[1] = uVar22;
      puVar20[2] = uVar13;
      puVar20[3] = uVar16;
      puVar20 = puVar20 + 4;
      puVar18 = puVar24;
    } while (puVar24 != param_3 + 0x10);
  }
  puStack_1e33c = auStack_1b0;
  FUN_01757774(puStack_1e33c,0x88);
  FUN_01757884(puStack_1e33c,auStack_2a0,0x20);
  FUN_01757884(puStack_1e33c,param_7,0x20);
  FUN_01757884(puStack_1e33c,local_280,0x40);
  FUN_01757d10(auStack_240,puStack_1e33c,0x40);
  FUN_0177aaa0(puStack_1e33c,0x180);
  FUN_01764448(auStack_1e300,auStack_300);
  puVar8 = local_2b00;
  do {
    uVar15 = 1;
    iVar23 = 0x64f7;
    while( true ) {
      uVar25 = 0x100 >> (uVar15 & 0xff);
      piVar26 = (int *)(&DAT_00429040 + (4 << (uVar15 - 1 & 0xff)));
      uVar31 = 0;
      iVar17 = uVar25 * 2;
      while( true ) {
        puVar6 = puVar8 + (uVar25 - 1);
        puVar3 = puVar8 + uVar31;
        uVar19 = uVar31;
        do {
          puVar6 = puVar6 + 1;
          uVar19 = uVar19 + 1;
          uVar32 = (uint)((longlong)iVar23 * (longlong)(int)*puVar6);
          lVar2 = (longlong)(int)(uVar32 * 0x3802001) * -0x7fe001;
          iVar12 = (int)((ulonglong)((longlong)iVar23 * (longlong)(int)*puVar6) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar32);
          *puVar6 = *puVar3 - iVar12;
          *puVar3 = *puVar3 + iVar12;
          puVar3 = puVar3 + 1;
        } while (uVar19 < uVar25);
        uVar31 = uVar31 + iVar17;
        if (0xff < uVar31) break;
        piVar26 = piVar26 + 1;
        iVar23 = *piVar26;
        uVar25 = uVar25 + iVar17;
      }
      if (uVar15 == 8) break;
      uVar25 = uVar15 & 0xff;
      uVar15 = uVar15 + 1;
      iVar23 = *(int *)(&DAT_00429040 + (1 << uVar25) * 4);
    }
    puVar8 = puVar8 + 0x100;
  } while (local_f00 != puVar8);
  puVar8 = local_6b00;
  do {
    iVar23 = 0x64f7;
    uVar15 = 1;
    while( true ) {
      uVar25 = 0x100 >> (uVar15 & 0xff);
      iVar17 = uVar25 * 2;
      piVar26 = (int *)(&DAT_00429040 + (4 << (uVar15 - 1 & 0xff)));
      uVar31 = 0;
      while( true ) {
        puVar6 = puVar8 + (uVar25 - 1);
        puVar3 = puVar8 + uVar31;
        uVar19 = uVar31;
        do {
          puVar6 = puVar6 + 1;
          uVar19 = uVar19 + 1;
          uVar32 = (uint)((longlong)iVar23 * (longlong)(int)*puVar6);
          lVar2 = (longlong)(int)(uVar32 * 0x3802001) * -0x7fe001;
          iVar12 = (int)((ulonglong)((longlong)iVar23 * (longlong)(int)*puVar6) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar32);
          *puVar6 = *puVar3 - iVar12;
          *puVar3 = *puVar3 + iVar12;
          puVar3 = puVar3 + 1;
        } while (uVar19 < uVar25);
        uVar31 = uVar31 + iVar17;
        if (0xff < uVar31) break;
        piVar26 = piVar26 + 1;
        iVar23 = *piVar26;
        uVar25 = uVar25 + iVar17;
      }
      if (uVar15 == 8) break;
      uVar25 = uVar15 & 0xff;
      uVar15 = uVar15 + 1;
      iVar23 = *(int *)(&DAT_00429040 + (1 << uVar25) * 4);
    }
    puVar8 = puVar8 + 0x100;
  } while (local_4b00 != puVar8);
  puVar8 = local_4b00;
  do {
    iVar23 = 0x64f7;
    uVar15 = 1;
    while( true ) {
      uVar25 = 0x100 >> (uVar15 & 0xff);
      iVar17 = uVar25 * 2;
      piVar26 = (int *)(&DAT_00429040 + (4 << (uVar15 - 1 & 0xff)));
      uVar31 = 0;
      while( true ) {
        puVar6 = puVar8 + (uVar25 - 1);
        puVar3 = puVar8 + uVar31;
        uVar19 = uVar31;
        do {
          puVar6 = puVar6 + 1;
          uVar19 = uVar19 + 1;
          uVar32 = (uint)((longlong)iVar23 * (longlong)(int)*puVar6);
          lVar2 = (longlong)(int)(uVar32 * 0x3802001) * -0x7fe001;
          iVar12 = (int)((ulonglong)((longlong)iVar23 * (longlong)(int)*puVar6) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar32);
          *puVar6 = *puVar3 - iVar12;
          *puVar3 = *puVar3 + iVar12;
          puVar3 = puVar3 + 1;
        } while (uVar19 < uVar25);
        uVar31 = uVar31 + iVar17;
        if (0xff < uVar31) break;
        piVar26 = piVar26 + 1;
        iVar23 = *piVar26;
        uVar25 = uVar25 + iVar17;
      }
      if (uVar15 == 8) break;
      uVar25 = uVar15 & 0xff;
      uVar15 = uVar15 + 1;
      iVar23 = *(int *)(&DAT_00429040 + (1 << uVar25) * 4);
    }
    puVar8 = puVar8 + 0x100;
  } while (local_2b00 != puVar8);
  sVar14 = 0;
  puVar8 = auStack_b04 + 1;
  puVar3 = param_1 + 0x470;
LAB_01764f64:
  piStack_1e330 = local_c700;
  piStack_1e370 = local_e300;
  FUN_01758ff8(piStack_1e330,auStack_c300,auStack_bf00,auStack_bb00,auStack_240,sVar14,sVar14 + 1,
               sVar14 + 2,0xff);
  FUN_01758ff8(auStack_bb00,auStack_b700,auStack_b300,auStack_af00,auStack_240,sVar14 + 3,sVar14 + 4
               ,sVar14 + 5,sVar14 + 6);
  FUN_016dd1aa(piStack_1e370,piStack_1e330,0x1c00);
  piVar26 = local_e300;
  do {
    uVar15 = 1;
    iVar23 = 0x64f7;
    while( true ) {
      uVar25 = 0x100 >> (uVar15 & 0xff);
      piVar29 = (int *)(&DAT_00429040 + (4 << (uVar15 - 1 & 0xff)));
      uVar31 = 0;
      piVar4 = piVar26;
      while( true ) {
        uVar19 = uVar25 + uVar31;
        piStack_1e40c = piVar4 + (uVar25 - 1);
        piVar33 = piVar4;
        do {
          uVar31 = uVar31 + 1;
          piStack_1e40c = piStack_1e40c + 1;
          uVar32 = (uint)((longlong)iVar23 * (longlong)*piStack_1e40c);
          lVar2 = (longlong)(int)(uVar32 * 0x3802001) * -0x7fe001;
          iVar17 = (int)((ulonglong)((longlong)iVar23 * (longlong)*piStack_1e40c) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar32);
          *piStack_1e40c = *piVar33 - iVar17;
          *piVar33 = *piVar33 + iVar17;
          piVar33 = piVar33 + 1;
        } while (uVar31 < uVar19);
        uVar31 = uVar25 + uVar19;
        if (0xff < uVar31) break;
        piVar29 = piVar29 + 1;
        iVar23 = *piVar29;
        piVar4 = piVar4 + uVar25 * 2;
      }
      if (uVar15 == 8) break;
      uVar25 = uVar15 & 0xff;
      uVar15 = uVar15 + 1;
      iVar23 = *(int *)(&DAT_00429040 + (1 << uVar25) * 4);
    }
    piVar26 = piVar26 + 0x100;
  } while (local_c700 != piVar26);
  puVar20 = &uStack_8b04;
  piVar26 = aiStack_1d304;
  do {
    piVar4 = piVar26;
    piVar29 = aiStack_d304;
    puVar18 = puVar20;
    do {
      piVar33 = piVar29 + 1;
      lVar2 = (longlong)piVar29[0x201] * (longlong)piVar4[0x201] +
              (longlong)piVar29[0x101] * (longlong)piVar4[0x101] +
              (longlong)*piVar33 * (longlong)piVar4[1] +
              (longlong)piVar4[-0xff] * (longlong)piVar29[-0xff] +
              (longlong)piVar4[-0x1ff] * (longlong)piVar29[-0x1ff] +
              (longlong)piVar4[-0x2ff] * (longlong)piVar29[-0x2ff] +
              (longlong)piVar4[-0x3ff] * (longlong)piVar29[-0x3ff];
      puVar18 = puVar18 + 1;
      *puVar18 = (int)((ulonglong)((longlong)((int)lVar2 * 0x3802001) * -0x7fe001 + lVar2) >> 0x20);
      piVar4 = piVar4 + 1;
      piVar29 = piVar33;
    } while (aiStack_cf04 != piVar33);
    puVar20 = puVar20 + 0x100;
    piVar26 = piVar26 + 0x700;
  } while (aiStack_f304 != piVar26);
  puVar6 = local_8b00;
  do {
    puVar21 = puVar6 + 0x100;
    FUN_01702600(puVar6);
    puVar6 = puVar21;
  } while (local_6b00 != puVar21);
  puVar21 = auStack_8704;
  puVar6 = puVar21;
  do {
    puVar27 = puVar6 + -0x100;
    do {
      puVar27 = puVar27 + 1;
      uVar15 = *puVar27;
      *puVar27 = ((uint)(&LAB_007fe000_1 + uVar15) ^ uVar15) &
                 (uVar15 >> 0x1f | ((int)uVar15 >> 0x1f) << 1) ^ uVar15;
    } while (puVar6 != puVar27);
    puVar6 = puVar6 + 0x100;
  } while (auStack_6704 != puVar6);
  puVar28 = &uStack_10304;
  puVar6 = puVar28;
  puVar27 = puVar21;
  do {
    puVar10 = puVar27 + -0x100;
    puVar11 = puVar6;
    do {
      puVar10 = puVar10 + 1;
      uVar15 = *puVar10;
      uVar25 = (((int)(uVar15 + 0x7f) >> 7) * 0x401 + 0x200000U & 0x3ffffff) >> 0x16;
      puVar11 = puVar11 + 1;
      *puVar11 = uVar25;
      uVar15 = uVar15 + uVar25 * -0x7fe00;
      *puVar10 = uVar15 ^ (uVar15 - 0x7fe001 ^ uVar15) &
                          (0x3ff000 - uVar15 >> 0x1f | ((int)(0x3ff000 - uVar15) >> 0x1f) << 1);
    } while (puVar27 != puVar10);
    puVar6 = puVar6 + 0x100;
    puVar27 = puVar27 + 0x100;
  } while (auStack_6704 != puVar27);
  pbVar5 = (byte *)((int)param_1 - 1);
  puVar20 = auStack_10300;
  do {
    pbVar9 = pbVar5;
    puVar18 = puVar20;
    do {
      puVar24 = puVar18 + 2;
      pbVar9 = pbVar9 + 1;
      *pbVar9 = (byte)*puVar18 | (byte)(puVar18[1] << 4);
      puVar18 = puVar24;
    } while (puVar20 + 0x100 != puVar24);
    pbVar5 = pbVar5 + 0x80;
    puVar20 = puVar20 + 0x100;
  } while ((byte *)((int)param_1 + 0x3ffU) != pbVar5);
  FUN_01757774(puStack_1e33c,0x88);
  FUN_01757884(puStack_1e33c,local_280,0x40);
  FUN_01757884(puStack_1e33c,param_1,0x400);
  FUN_01757d10(local_200,puStack_1e33c,0x40);
  FUN_0177aaa0(puStack_1e33c,0x180);
  iVar23 = 0x64f7;
  FUN_017583ac(puVar8,local_200);
  uVar15 = 1;
  while( true ) {
    uVar25 = 0x100 >> (uVar15 & 0xff);
    piStack_1e318 = (int *)(&DAT_00429040 + (4 << (uVar15 - 1 & 0xff)));
    uVar31 = 0;
    iVar17 = uVar25 * 2;
    while( true ) {
      puVar27 = auStack_b04 + uVar25;
      puVar6 = auStack_b04 + uVar31;
      uVar19 = uVar31;
      do {
        puVar27 = puVar27 + 1;
        uVar19 = uVar19 + 1;
        puVar6 = puVar6 + 1;
        uVar32 = (uint)((longlong)iVar23 * (longlong)(int)*puVar27);
        lVar2 = (longlong)(int)(uVar32 * 0x3802001) * -0x7fe001;
        iVar12 = (int)((ulonglong)((longlong)iVar23 * (longlong)(int)*puVar27) >> 0x20) +
                 (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar32);
        *puVar27 = *puVar6 - iVar12;
        *puVar6 = *puVar6 + iVar12;
      } while (uVar19 < uVar25);
      uVar31 = uVar31 + iVar17;
      if (0xff < uVar31) break;
      uVar25 = uVar25 + iVar17;
      piStack_1e318 = piStack_1e318 + 1;
      iVar23 = *piStack_1e318;
    }
    if (uVar15 == 8) break;
    uVar25 = uVar15 & 0xff;
    uVar15 = uVar15 + 1;
    iVar23 = *(int *)(&DAT_00429040 + (1 << uVar25) * 4);
  }
  piStack_1e318 = &iStack_c704;
  puStack_1e328 = param_1 + 0x10;
  piStack_1e314 = &iStack_2b04;
  do {
    puVar11 = &uStack_f04;
    puVar6 = auStack_b04;
    piVar26 = piStack_1e314;
    puVar27 = puVar11;
    do {
      puVar6 = puVar6 + 1;
      piVar26 = piVar26 + 1;
      uVar15 = (uint)((longlong)(int)*puVar6 * (longlong)*piVar26);
      lVar2 = (longlong)(int)(uVar15 * 0x3802001) * -0x7fe001;
      puVar27 = puVar27 + 1;
      *puVar27 = (int)((ulonglong)((longlong)(int)*puVar6 * (longlong)*piVar26) >> 0x20) +
                 (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar15);
    } while (&uStack_704 != puVar6);
    FUN_01702600(local_f00);
    piVar26 = piStack_1e318;
    puVar6 = puVar11;
    do {
      puVar6 = puVar6 + 1;
      piVar26 = piVar26 + 1;
      *puVar6 = *puVar6 + *piVar26;
    } while (auStack_b04 != puVar6);
    puVar6 = puVar11;
    do {
      puVar6 = puVar6 + 1;
      *puVar6 = ((int)(*puVar6 + 0x400000) >> 0x17) * -0x7fe001 + *puVar6;
    } while (auStack_b04 != puVar6);
    uVar15 = 0;
    do {
      puVar11 = puVar11 + 1;
      uVar25 = *puVar11;
      uVar25 = 0x7ff87 - ((-uVar25 ^ uVar25) & (uVar25 >> 0x1f | ((int)uVar25 >> 0x1f) << 1) ^
                         uVar25);
      uVar15 = uVar15 | uVar25 >> 0x1f | ((int)uVar25 >> 0x1f) << 1;
    } while (auStack_b04 != puVar11);
    if (uVar15 != 0) goto LAB_01766578;
    puVar6 = puStack_1e328;
    puVar27 = local_f00;
    do {
      uVar15 = *puVar27;
      puVar11 = puVar27 + 1;
      puVar27 = puVar27 + 2;
      uVar15 = 0x80000 - uVar15;
      uVar25 = 0x80000 - *puVar11;
      *(char *)(puVar6 + 1) = (char)(uVar25 >> 0xc);
      *puVar6 = uVar15 & 0xff | (uVar15 >> 8 & 0xff) << 8 |
                ((uVar25 * 0x10 | uVar15 >> 0x10) & 0xff) << 0x10 | (uVar25 >> 4) << 0x18;
      puVar6 = (uint *)((int)puVar6 + 5);
    } while (auStack_b04 + 1 != puVar27);
    puStack_1e328 = puStack_1e328 + 0xa0;
    piStack_1e318 = piStack_1e318 + 0x100;
    piStack_1e314 = piStack_1e314 + 0x100;
  } while (puVar3 != puStack_1e328);
  puVar27 = &uStack_ab04;
  piVar26 = &iStack_6b04;
  puVar6 = puVar27;
  do {
    puVar11 = auStack_b04;
    piVar4 = piVar26;
    puVar10 = puVar6;
    do {
      puVar11 = puVar11 + 1;
      piVar4 = piVar4 + 1;
      uVar15 = (uint)((longlong)(int)*puVar11 * (longlong)*piVar4);
      lVar2 = (longlong)(int)(uVar15 * 0x3802001) * -0x7fe001;
      puVar10 = puVar10 + 1;
      *puVar10 = (int)((ulonglong)((longlong)(int)*puVar11 * (longlong)*piVar4) >> 0x20) +
                 (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar15);
    } while (&uStack_704 != puVar11);
    piVar26 = piVar26 + 0x100;
    puVar6 = puVar6 + 0x100;
  } while (&iStack_4b04 != piVar26);
  puVar6 = local_ab00;
  do {
    puVar11 = puVar6 + 0x100;
    FUN_01702600(puVar6);
    puVar6 = puVar11;
  } while (local_8b00 != puVar11);
  puVar6 = puVar21;
  puVar11 = puVar27;
  do {
    puVar7 = puVar6 + -0x100;
    puVar10 = puVar11;
    do {
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
      *puVar7 = *puVar7 - *puVar10;
    } while (puVar6 != puVar7);
    puVar6 = puVar6 + 0x100;
    puVar11 = puVar11 + 0x100;
  } while (auStack_6704 != puVar6);
  puVar6 = puVar21;
  do {
    puVar11 = puVar6 + -0x100;
    do {
      puVar11 = puVar11 + 1;
      *puVar11 = ((int)(*puVar11 + 0x400000) >> 0x17) * -0x7fe001 + *puVar11;
    } while (puVar6 != puVar11);
    puVar6 = puVar6 + 0x100;
  } while (auStack_6704 != puVar6);
  uVar15 = 0;
  puVar6 = puVar21;
  do {
    puVar11 = puVar6 + -0x100;
    uVar25 = 0;
    do {
      puVar11 = puVar11 + 1;
      uVar31 = *puVar11;
      uVar31 = 0x3fe87 - ((-uVar31 ^ uVar31) & (uVar31 >> 0x1f | ((int)uVar31 >> 0x1f) << 1) ^
                         uVar31);
      uVar25 = uVar25 | uVar31 >> 0x1f | ((int)uVar31 >> 0x1f) << 1;
    } while (puVar6 != puVar11);
    puVar6 = puVar6 + 0x100;
    uVar15 = uVar15 | uVar25;
  } while (auStack_6704 != puVar6);
  if (uVar15 == 0) {
    piVar26 = &iStack_4b04;
    puVar6 = puVar27;
    do {
      puVar11 = auStack_b04;
      piVar4 = piVar26;
      puVar10 = puVar6;
      do {
        puVar11 = puVar11 + 1;
        piVar4 = piVar4 + 1;
        uVar15 = (uint)((longlong)(int)*puVar11 * (longlong)*piVar4);
        lVar2 = (longlong)(int)(uVar15 * 0x3802001) * -0x7fe001;
        puVar10 = puVar10 + 1;
        *puVar10 = (int)((ulonglong)((longlong)(int)*puVar11 * (longlong)*piVar4) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar15);
      } while (&uStack_704 != puVar11);
      puVar6 = puVar6 + 0x100;
      piVar26 = piVar26 + 0x100;
    } while (&iStack_2b04 != piVar26);
    puVar6 = local_ab00;
    do {
      puVar11 = puVar6 + 0x100;
      FUN_01702600(puVar6);
      puVar6 = puVar11;
    } while (local_8b00 != puVar11);
    puVar11 = auStack_a704;
    puVar6 = puVar11;
    do {
      puVar10 = puVar6 + -0x100;
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = ((int)(*puVar10 + 0x400000) >> 0x17) * -0x7fe001 + *puVar10;
      } while (puVar6 != puVar10);
      puVar6 = puVar6 + 0x100;
    } while (auStack_8704 != puVar6);
    uVar15 = 0;
    do {
      puVar6 = puVar11 + -0x100;
      uVar25 = 0;
      do {
        puVar6 = puVar6 + 1;
        uVar31 = *puVar6;
        uVar31 = 0x3feff - ((-uVar31 ^ uVar31) & (uVar31 >> 0x1f | ((int)uVar31 >> 0x1f) << 1) ^
                           uVar31);
        uVar25 = uVar25 | uVar31 >> 0x1f | ((int)uVar31 >> 0x1f) << 1;
      } while (puVar11 != puVar6);
      puVar11 = puVar11 + 0x100;
      uVar15 = uVar15 | uVar25;
    } while (auStack_8704 != puVar11);
    if (uVar15 == 0) {
      puVar6 = puVar21;
      puVar11 = puVar27;
      do {
        puVar7 = puVar6 + -0x100;
        puVar10 = puVar11;
        do {
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
          *puVar7 = *puVar7 + *puVar10;
        } while (puVar6 != puVar7);
        puVar6 = puVar6 + 0x100;
        puVar11 = puVar11 + 0x100;
      } while (auStack_6704 != puVar6);
      uVar15 = 0;
      puVar6 = puVar27;
      do {
        puVar7 = puVar21 + -0x100;
        iVar23 = 0;
        puVar11 = puVar6;
        puVar10 = puVar28;
        do {
          while( true ) {
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
            if (0x7fe00 < *puVar7 + 0x3ff00) break;
            uVar25 = (uint)(*puVar10 != 0);
            if (*puVar7 != 0xfffc0100) {
              uVar25 = 0;
            }
            iVar23 = iVar23 + uVar25;
            puVar11 = puVar11 + 1;
            *puVar11 = uVar25;
            if (puVar21 == puVar7) goto LAB_017662b4;
          }
          iVar23 = iVar23 + 1;
          puVar11 = puVar11 + 1;
          *puVar11 = 1;
        } while (puVar21 != puVar7);
LAB_017662b4:
        puVar21 = puVar21 + 0x100;
        puVar28 = puVar28 + 0x100;
        puVar6 = puVar6 + 0x100;
        uVar15 = uVar15 + iVar23;
      } while (auStack_6704 != puVar21);
      if (uVar15 < 0x4c) {
        if (((param_1 < local_200) && (local_200 < param_1 + 0x10)) ||
           (puVar6 = local_200, puVar21 = param_1, param_1 < auStack_1c0 && local_200 < param_1))
        goto LAB_017666b0;
        do {
          uVar25 = puVar6[1];
          uVar31 = puVar6[2];
          uVar19 = puVar6[3];
          puVar28 = puVar6 + 4;
          *puVar21 = *puVar6;
          puVar21[1] = uVar25;
          puVar21[2] = uVar31;
          puVar21[3] = uVar19;
          puVar6 = puVar6 + 4;
          puVar21 = puVar21 + 4;
        } while (puVar28 != auStack_1c0);
        FUN_016dd606(puVar3,0,0x53);
        puVar30 = (undefined1 *)((int)param_1 + 0x120a);
        uVar25 = 0;
        do {
          iVar23 = 0;
          puVar6 = puVar27;
          do {
            puVar6 = puVar6 + 1;
            if (*puVar6 != 0 && uVar25 < uVar15) {
              *(char *)((int)puVar3 + uVar25) = (char)iVar23;
              uVar25 = uVar25 + 1;
            }
            iVar23 = iVar23 + 1;
          } while (iVar23 != 0x100);
          puVar30 = puVar30 + 1;
          *puVar30 = (char)uVar25;
          puVar27 = puVar27 + 0x100;
        } while (puVar30 != (undefined1 *)((int)param_1 + 0x1212U));
        uVar22 = 0;
        FUN_0177aaa0(local_f00,0x400);
        FUN_0177aaa0(puVar8,0x400);
        FUN_0177aaa0(local_8b00,0x2000);
        FUN_0177aaa0(auStack_10300,0x3c00);
        FUN_0177aaa0(auStack_700,0x400);
        FUN_0177aaa0(local_c700,0x3c00);
        FUN_0177aaa0(local_200,0x40);
        *param_2 = 0x1213;
        goto LAB_017664bc;
      }
    }
  }
LAB_01766578:
  FUN_0177aaa0(local_f00,0x400);
  FUN_0177aaa0(puVar8,0x400);
  FUN_0177aaa0(local_8b00,0x2000);
  FUN_0177aaa0(auStack_10300,0x3c00);
  FUN_0177aaa0(auStack_700,0x400);
  FUN_0177aaa0(local_c700,0x3c00);
  FUN_0177aaa0(local_200,0x40);
  sVar14 = sVar14 + 7;
  if (sVar14 == -9) goto code_r0x01766634;
  goto LAB_01764f64;
code_r0x01766634:
  uVar22 = 0xffffffff;
  *param_2 = 0;
  FUN_016dd606(param_1,0,0x1213);
LAB_017664bc:
  FUN_0177aaa0(local_6b00,0x2000);
  FUN_0177aaa0(local_4b00,0x2000);
  FUN_0177aaa0(local_2b00,0x1c00);
  FUN_0177aaa0(auStack_1e300,0xe000);
  FUN_0177aaa0(auStack_300,0x100);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar22;
}

