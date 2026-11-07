// FUN_0175f830 @ 0175f830 size=7944 calls_out=13 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0175f830(uint *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  code *pcVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  short sVar15;
  undefined4 uVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  byte *pbVar29;
  uint uVar30;
  uint *puVar31;
  uint *puStack_13e1c;
  undefined1 *puStack_13dfc;
  uint *puStack_13de4;
  int *piStack_13de0;
  int *piStack_13ddc;
  int iStack_13dd8;
  int aiStack_13dc0 [871];
  uint auStack_13024 [6808];
  uint uStack_c5c4;
  int local_c5c0 [1536];
  int local_adc0 [256];
  int local_a9c0 [1023];
  int iStack_99c4;
  int local_99c0 [256];
  undefined1 auStack_95c0 [1024];
  undefined1 auStack_91c0 [1024];
  undefined1 auStack_8dc0 [1024];
  undefined1 auStack_89c0 [1020];
  uint uStack_85c4;
  int local_85c0 [255];
  uint auStack_81c4 [1280];
  undefined4 uStack_6dc4;
  int local_6dc0 [255];
  uint auStack_69c4 [1280];
  int iStack_55c4;
  int local_55c0 [255];
  uint auStack_51c4 [1280];
  int iStack_3dc4;
  int local_3dc0 [1535];
  int iStack_25c4;
  int local_25c0 [1279];
  uint uStack_11c4;
  int local_11c0 [255];
  uint uStack_dc4;
  int local_dc0 [255];
  uint uStack_9c4;
  undefined1 auStack_9c0 [1024];
  uint local_5c0 [12];
  uint auStack_590 [164];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [32];
  undefined4 local_280 [16];
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  short local_1c0 [8];
  undefined1 auStack_1b0 [388];
  int local_2c;
  uint uStack_28;
  
  puVar5 = (uint *)(auStack_1b0 + 0x18c);
  do {
    puVar5 = puVar5 + -0x400;
    *puVar5 = (uint)param_1;
  } while (puVar5 != auStack_13024);
  local_2c = DAT_018ddaf8;
  FUN_0170aec8(auStack_300,auStack_2e0,auStack_2a0,local_3dc0,local_25c0,local_55c0,param_8);
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
    if ((param_3 < &local_240 && local_280 < param_3) ||
       ((param_3 < local_280 && (local_280 < param_3 + 0x10)))) goto LAB_01761754;
    puVar4 = local_280;
    puVar21 = param_3;
    do {
      uVar19 = puVar21[1];
      puVar22 = puVar21 + 4;
      uVar13 = puVar21[2];
      uVar16 = puVar21[3];
      *puVar4 = *puVar21;
      puVar4[1] = uVar19;
      puVar4[2] = uVar13;
      puVar4[3] = uVar16;
      puVar4 = puVar4 + 4;
      puVar21 = puVar22;
    } while (puVar22 != param_3 + 0x10);
  }
  puStack_13dfc = auStack_1b0;
  FUN_01757774(puStack_13dfc,0x88);
  FUN_01757884(puStack_13dfc,auStack_2a0,0x20);
  FUN_01757884(puStack_13dfc,param_7,0x20);
  FUN_01757884(puStack_13dfc,local_280,0x40);
  FUN_01757d10(&local_240,puStack_13dfc,0x40);
  FUN_0177aaa0(puStack_13dfc,0x180);
  FUN_0175f518(aiStack_13dc0,auStack_300);
  piVar27 = local_25c0;
  do {
    iVar20 = 0x64f7;
    uVar8 = 1;
    while( true ) {
      uVar23 = 0x100 >> (uVar8 & 0xff);
      iVar14 = uVar23 * 2;
      piVar24 = (int *)(&DAT_00429040 + (4 << (uVar8 - 1 & 0xff)));
      uVar28 = 0;
      while( true ) {
        piVar26 = piVar27 + (uVar23 - 1);
        piVar25 = piVar27 + uVar28;
        uVar18 = uVar28;
        do {
          piVar26 = piVar26 + 1;
          uVar18 = uVar18 + 1;
          uVar30 = (uint)((longlong)iVar20 * (longlong)*piVar26);
          lVar2 = (longlong)(int)(uVar30 * 0x3802001) * -0x7fe001;
          iVar12 = (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar26) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar30);
          *piVar26 = *piVar25 - iVar12;
          *piVar25 = *piVar25 + iVar12;
          piVar25 = piVar25 + 1;
        } while (uVar18 < uVar23);
        uVar28 = uVar28 + iVar14;
        if (0xff < uVar28) break;
        piVar24 = piVar24 + 1;
        iVar20 = *piVar24;
        uVar23 = uVar23 + iVar14;
      }
      if (uVar8 == 8) break;
      uVar23 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      iVar20 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
    }
    piVar27 = piVar27 + 0x100;
  } while (local_11c0 != piVar27);
  piVar27 = local_55c0;
  do {
    uVar8 = 1;
    iVar20 = 0x64f7;
    while( true ) {
      uVar23 = 0x100 >> (uVar8 & 0xff);
      iVar14 = uVar23 * 2;
      piVar24 = (int *)(&DAT_00429040 + (4 << (uVar8 - 1 & 0xff)));
      uVar28 = 0;
      while( true ) {
        piVar26 = piVar27 + (uVar23 - 1);
        piVar25 = piVar27 + uVar28;
        uVar18 = uVar28;
        do {
          piVar26 = piVar26 + 1;
          uVar18 = uVar18 + 1;
          uVar30 = (uint)((longlong)iVar20 * (longlong)*piVar26);
          lVar2 = (longlong)(int)(uVar30 * 0x3802001) * -0x7fe001;
          iVar12 = (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar26) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar30);
          *piVar26 = *piVar25 - iVar12;
          *piVar25 = *piVar25 + iVar12;
          piVar25 = piVar25 + 1;
        } while (uVar18 < uVar23);
        uVar28 = uVar28 + iVar14;
        if (0xff < uVar28) break;
        piVar24 = piVar24 + 1;
        iVar20 = *piVar24;
        uVar23 = uVar23 + iVar14;
      }
      if (uVar8 == 8) break;
      uVar23 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      iVar20 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
    }
    piVar27 = piVar27 + 0x100;
  } while (local_3dc0 != piVar27);
  piVar27 = local_3dc0;
  do {
    uVar8 = 1;
    iVar20 = 0x64f7;
    while( true ) {
      uVar23 = 0x100 >> (uVar8 & 0xff);
      iVar14 = uVar23 * 2;
      piVar24 = (int *)(&DAT_00429040 + (4 << (uVar8 - 1 & 0xff)));
      uVar28 = 0;
      while( true ) {
        piVar26 = piVar27 + (uVar23 - 1);
        piVar25 = piVar27 + uVar28;
        uVar18 = uVar28;
        do {
          piVar26 = piVar26 + 1;
          uVar18 = uVar18 + 1;
          uVar30 = (uint)((longlong)iVar20 * (longlong)*piVar26);
          lVar2 = (longlong)(int)(uVar30 * 0x3802001) * -0x7fe001;
          iVar12 = (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar26) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar30);
          *piVar26 = *piVar25 - iVar12;
          *piVar25 = *piVar25 + iVar12;
          piVar25 = piVar25 + 1;
        } while (uVar18 < uVar23);
        uVar28 = uVar28 + iVar14;
        if (0xff < uVar28) break;
        piVar24 = piVar24 + 1;
        iVar20 = *piVar24;
        uVar23 = uVar23 + iVar14;
      }
      if (uVar8 == 8) break;
      uVar23 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      iVar20 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
    }
    piVar27 = piVar27 + 0x100;
  } while (local_25c0 != piVar27);
  sVar15 = 4;
  while (FUN_01758ff8(local_99c0,auStack_95c0,auStack_91c0,auStack_8dc0,&local_240,sVar15 + -4,
                      sVar15 + -3,sVar15 + -2,sVar15 + -1),
        &local_240 <= &local_200 || local_1c0 <= &local_240) {
    local_200 = local_240;
    uStack_1fc = uStack_23c;
    uStack_1f8 = uStack_238;
    uStack_1f4 = uStack_234;
    local_1f0 = local_230;
    uStack_1ec = uStack_22c;
    uStack_1e8 = uStack_228;
    uStack_1e4 = uStack_224;
    local_1e0 = local_220;
    uStack_1dc = uStack_21c;
    uStack_1d8 = uStack_218;
    uStack_1d4 = uStack_214;
    local_1d0 = local_210;
    uStack_1cc = uStack_20c;
    uStack_1c8 = uStack_208;
    uStack_1c4 = uStack_204;
    local_1c0[0] = sVar15;
    FUN_01757774(puStack_13dfc,0x88);
    FUN_01757884(puStack_13dfc,&local_200,0x42);
    FUN_01757d10(local_5c0,puStack_13dfc,0x2a8);
    FUN_01702e04(auStack_89c0,local_5c0);
    FUN_0177aaa0(local_5c0,0x2a8);
    FUN_0177aaa0(&local_200,0x42);
    FUN_016dd1aa(local_adc0,local_99c0,0x1400);
    piVar27 = local_adc0;
    do {
      uVar8 = 1;
      iVar20 = 0x64f7;
      while( true ) {
        uVar23 = 0x100 >> (uVar8 & 0xff);
        piVar25 = (int *)(&DAT_00429040 + (4 << (uVar8 - 1 & 0xff)));
        uVar28 = 0;
        piVar24 = piVar27;
        while( true ) {
          uVar18 = uVar23 + uVar28;
          piVar3 = piVar24 + (uVar23 - 1);
          piVar26 = piVar24;
          do {
            piVar3 = piVar3 + 1;
            uVar28 = uVar28 + 1;
            uVar30 = (uint)((longlong)iVar20 * (longlong)*piVar3);
            lVar2 = (longlong)(int)(uVar30 * 0x3802001) * -0x7fe001;
            iVar14 = (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar3) >> 0x20) +
                     (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar30);
            *piVar3 = *piVar26 - iVar14;
            *piVar26 = *piVar26 + iVar14;
            piVar26 = piVar26 + 1;
          } while (uVar28 < uVar18);
          uVar28 = uVar23 + uVar18;
          if (0xff < uVar28) break;
          piVar25 = piVar25 + 1;
          iVar20 = *piVar25;
          piVar24 = piVar24 + uVar23 * 2;
        }
        if (uVar8 == 8) break;
        uVar23 = uVar8 & 0xff;
        uVar8 = uVar8 + 1;
        iVar20 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
      }
      piVar27 = piVar27 + 0x100;
    } while (local_99c0 != piVar27);
    puVar4 = &uStack_6dc4;
    piVar27 = aiStack_13dc0;
    do {
      piVar24 = local_adc0;
      puVar21 = puVar4;
      piVar25 = piVar27;
      do {
        piVar26 = piVar24 + 1;
        lVar2 = (longlong)piVar25[0x400] * (longlong)piVar24[0x400] +
                (longlong)piVar25[0x300] * (longlong)piVar24[0x300] +
                (longlong)*piVar24 * (longlong)*piVar25 +
                (longlong)piVar25[0x200] * (longlong)piVar24[0x200] +
                (longlong)piVar24[0x100] * (longlong)piVar25[0x100];
        puVar21 = puVar21 + 1;
        *puVar21 = (int)((ulonglong)((longlong)((int)lVar2 * 0x3802001) * -0x7fe001 + lVar2) >> 0x20
                        );
        piVar24 = piVar26;
        piVar25 = piVar25 + 1;
      } while (local_a9c0 != piVar26);
      puVar4 = puVar4 + 0x100;
      piVar27 = piVar27 + 0x500;
    } while (local_c5c0 != piVar27);
    piVar27 = local_6dc0;
    do {
      piVar24 = piVar27 + 0x100;
      FUN_01702600(piVar27);
      piVar27 = piVar24;
    } while (local_55c0 != piVar24);
    puVar31 = auStack_69c4;
    puVar5 = puVar31;
    do {
      puVar7 = puVar5 + -0x100;
      do {
        puVar7 = puVar7 + 1;
        uVar8 = *puVar7;
        *puVar7 = ((uint)(&LAB_007fe000_1 + uVar8) ^ uVar8) &
                  (uVar8 >> 0x1f | ((int)uVar8 >> 0x1f) << 1) ^ uVar8;
      } while (puVar5 != puVar7);
      puVar5 = puVar5 + 0x100;
    } while (auStack_51c4 != puVar5);
    puStack_13e1c = &uStack_c5c4;
    puVar5 = puStack_13e1c;
    puVar7 = puVar31;
    do {
      puVar11 = puVar7 + -0x100;
      puVar17 = puVar5;
      do {
        puVar11 = puVar11 + 1;
        uVar8 = *puVar11;
        uVar23 = (((int)(uVar8 + 0x7f) >> 7) * 0x401 + 0x200000U & 0x3ffffff) >> 0x16;
        puVar17 = puVar17 + 1;
        *puVar17 = uVar23;
        uVar8 = uVar8 + uVar23 * -0x7fe00;
        *puVar11 = uVar8 ^ (uVar8 - 0x7fe001 ^ uVar8) &
                           (0x3ff000 - uVar8 >> 0x1f | ((int)(0x3ff000 - uVar8) >> 0x1f) << 1);
      } while (puVar7 != puVar11);
      puVar5 = puVar5 + 0x100;
      puVar7 = puVar7 + 0x100;
    } while (auStack_51c4 != puVar7);
    pbVar29 = (byte *)((int)param_1 - 1);
    piVar27 = local_c5c0;
    do {
      pbVar9 = pbVar29;
      piVar24 = piVar27;
      do {
        piVar25 = piVar24 + 2;
        pbVar9 = pbVar9 + 1;
        *pbVar9 = (byte)*piVar24 | (byte)(piVar24[1] << 4);
        piVar24 = piVar25;
      } while (piVar27 + 0x100 != piVar25);
      pbVar29 = pbVar29 + 0x80;
      piVar27 = piVar27 + 0x100;
    } while ((byte *)((int)param_1 + 0x2ffU) != pbVar29);
    iStack_13dd8 = 0x64f7;
    FUN_01757774(puStack_13dfc,0x88);
    FUN_01757884(puStack_13dfc,local_280,0x40);
    FUN_01757884(puStack_13dfc,param_1,0x300);
    FUN_01757d10(local_5c0,puStack_13dfc,0x30);
    FUN_0177aaa0(puStack_13dfc,0x180);
    FUN_017581dc(local_dc0,local_5c0);
    uVar8 = 1;
    while( true ) {
      uVar23 = 0x100 >> (uVar8 & 0xff);
      piVar27 = (int *)(&DAT_00429040 + (4 << (uVar8 - 1 & 0xff)));
      uVar28 = 0;
      puVar5 = &uStack_dc4;
      while( true ) {
        puVar17 = puVar5 + uVar23;
        uVar18 = uVar23 + uVar28;
        puVar7 = puVar17;
        do {
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
          uVar28 = uVar28 + 1;
          uVar30 = (uint)((longlong)iStack_13dd8 * (longlong)(int)*puVar7);
          lVar2 = (longlong)(int)(uVar30 * 0x3802001) * -0x7fe001;
          iVar20 = (int)((ulonglong)((longlong)iStack_13dd8 * (longlong)(int)*puVar7) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar30);
          *puVar7 = *puVar5 - iVar20;
          *puVar5 = *puVar5 + iVar20;
        } while (uVar28 < uVar18);
        uVar28 = uVar23 + uVar18;
        if (0xff < uVar28) break;
        piVar27 = piVar27 + 1;
        iStack_13dd8 = *piVar27;
        puVar5 = puVar17 + uVar23;
      }
      if (uVar8 == 8) break;
      uVar23 = uVar8 & 0xff;
      uVar8 = uVar8 + 1;
      iStack_13dd8 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
    }
    piStack_13de0 = &iStack_99c4;
    piStack_13ddc = &iStack_25c4;
    puVar5 = param_1 + 0x32c;
    puStack_13de4 = param_1 + 0xc;
    do {
      puVar11 = &uStack_11c4;
      puVar7 = &uStack_dc4;
      piVar27 = piStack_13ddc;
      puVar17 = puVar11;
      do {
        puVar7 = puVar7 + 1;
        piVar27 = piVar27 + 1;
        uVar8 = (uint)((longlong)(int)*puVar7 * (longlong)*piVar27);
        lVar2 = (longlong)(int)(uVar8 * 0x3802001) * -0x7fe001;
        puVar17 = puVar17 + 1;
        *puVar17 = (int)((ulonglong)((longlong)(int)*puVar7 * (longlong)*piVar27) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar8);
      } while (&uStack_9c4 != puVar7);
      FUN_01702600(local_11c0);
      piVar27 = piStack_13de0;
      puVar7 = puVar11;
      do {
        puVar7 = puVar7 + 1;
        piVar27 = piVar27 + 1;
        *puVar7 = *puVar7 + *piVar27;
      } while (&uStack_dc4 != puVar7);
      puVar7 = puVar11;
      do {
        puVar7 = puVar7 + 1;
        *puVar7 = ((int)(*puVar7 + 0x400000) >> 0x17) * -0x7fe001 + *puVar7;
      } while (&uStack_dc4 != puVar7);
      uVar8 = 0;
      do {
        puVar11 = puVar11 + 1;
        uVar23 = *puVar11;
        uVar23 = 0x7ff3b - ((-uVar23 ^ uVar23) & (uVar23 >> 0x1f | ((int)uVar23 >> 0x1f) << 1) ^
                           uVar23);
        uVar8 = uVar8 | uVar23 >> 0x1f | ((int)uVar23 >> 0x1f) << 1;
      } while (&uStack_dc4 != puVar11);
      if (uVar8 != 0) goto LAB_01761628;
      puVar7 = puStack_13de4;
      piVar27 = local_11c0;
      do {
        iVar20 = *piVar27;
        piVar24 = piVar27 + 1;
        piVar27 = piVar27 + 2;
        uVar8 = 0x80000 - iVar20;
        uVar23 = 0x80000 - *piVar24;
        *(char *)(puVar7 + 1) = (char)(uVar23 >> 0xc);
        *puVar7 = uVar8 & 0xff | (uVar8 >> 8 & 0xff) << 8 |
                  ((uVar23 * 0x10 | uVar8 >> 0x10) & 0xff) << 0x10 | (uVar23 >> 4) << 0x18;
        puVar7 = (uint *)((int)puVar7 + 5);
      } while (local_dc0 != piVar27);
      puStack_13de4 = puStack_13de4 + 0xa0;
      piStack_13de0 = piStack_13de0 + 0x100;
      piStack_13ddc = piStack_13ddc + 0x100;
    } while (puVar5 != puStack_13de4);
    puVar17 = &uStack_85c4;
    piVar27 = &iStack_55c4;
    puVar7 = puVar17;
    do {
      puVar11 = &uStack_dc4;
      piVar24 = piVar27;
      puVar10 = puVar7;
      do {
        puVar11 = puVar11 + 1;
        piVar24 = piVar24 + 1;
        uVar8 = (uint)((longlong)(int)*puVar11 * (longlong)*piVar24);
        lVar2 = (longlong)(int)(uVar8 * 0x3802001) * -0x7fe001;
        puVar10 = puVar10 + 1;
        *puVar10 = (int)((ulonglong)((longlong)(int)*puVar11 * (longlong)*piVar24) >> 0x20) +
                   (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar8);
      } while (&uStack_9c4 != puVar11);
      piVar27 = piVar27 + 0x100;
      puVar7 = puVar7 + 0x100;
    } while (&iStack_3dc4 != piVar27);
    piVar27 = local_85c0;
    do {
      piVar24 = piVar27 + 0x100;
      FUN_01702600(piVar27);
      piVar27 = piVar24;
    } while (local_6dc0 != piVar24);
    puVar7 = puVar31;
    puVar11 = puVar17;
    do {
      puVar6 = puVar7 + -0x100;
      puVar10 = puVar11;
      do {
        puVar6 = puVar6 + 1;
        puVar10 = puVar10 + 1;
        *puVar6 = *puVar6 - *puVar10;
      } while (puVar7 != puVar6);
      puVar7 = puVar7 + 0x100;
      puVar11 = puVar11 + 0x100;
    } while (auStack_51c4 != puVar7);
    puVar7 = puVar31;
    do {
      puVar11 = puVar7 + -0x100;
      do {
        puVar11 = puVar11 + 1;
        *puVar11 = ((int)(*puVar11 + 0x400000) >> 0x17) * -0x7fe001 + *puVar11;
      } while (puVar7 != puVar11);
      puVar7 = puVar7 + 0x100;
    } while (auStack_51c4 != puVar7);
    uVar8 = 0;
    puVar7 = puVar31;
    do {
      puVar11 = puVar7 + -0x100;
      uVar23 = 0;
      do {
        puVar11 = puVar11 + 1;
        uVar28 = *puVar11;
        uVar28 = 0x3fe3b - ((-uVar28 ^ uVar28) & (uVar28 >> 0x1f | ((int)uVar28 >> 0x1f) << 1) ^
                           uVar28);
        uVar23 = uVar23 | uVar28 >> 0x1f | ((int)uVar28 >> 0x1f) << 1;
      } while (puVar7 != puVar11);
      puVar7 = puVar7 + 0x100;
      uVar8 = uVar8 | uVar23;
    } while (auStack_51c4 != puVar7);
    if (uVar8 == 0) {
      piVar27 = &iStack_3dc4;
      puVar7 = puVar17;
      do {
        puVar11 = &uStack_dc4;
        piVar24 = piVar27;
        puVar10 = puVar7;
        do {
          puVar11 = puVar11 + 1;
          piVar24 = piVar24 + 1;
          uVar8 = (uint)((longlong)(int)*puVar11 * (longlong)*piVar24);
          lVar2 = (longlong)(int)(uVar8 * 0x3802001) * -0x7fe001;
          puVar10 = puVar10 + 1;
          *puVar10 = (int)((ulonglong)((longlong)(int)*puVar11 * (longlong)*piVar24) >> 0x20) +
                     (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar8);
        } while (&uStack_9c4 != puVar11);
        puVar7 = puVar7 + 0x100;
        piVar27 = piVar27 + 0x100;
      } while (&iStack_25c4 != piVar27);
      piVar27 = local_85c0;
      do {
        piVar24 = piVar27 + 0x100;
        FUN_01702600(piVar27);
        piVar27 = piVar24;
      } while (local_6dc0 != piVar24);
      puVar11 = auStack_81c4;
      puVar7 = puVar11;
      do {
        puVar10 = puVar7 + -0x100;
        do {
          puVar10 = puVar10 + 1;
          *puVar10 = ((int)(*puVar10 + 0x400000) >> 0x17) * -0x7fe001 + *puVar10;
        } while (puVar7 != puVar10);
        puVar7 = puVar7 + 0x100;
      } while (auStack_69c4 != puVar7);
      uVar8 = 0;
      do {
        puVar7 = puVar11 + -0x100;
        uVar23 = 0;
        do {
          puVar7 = puVar7 + 1;
          uVar28 = *puVar7;
          uVar28 = 0x3feff - ((-uVar28 ^ uVar28) & (uVar28 >> 0x1f | ((int)uVar28 >> 0x1f) << 1) ^
                             uVar28);
          uVar23 = uVar23 | uVar28 >> 0x1f | ((int)uVar28 >> 0x1f) << 1;
        } while (puVar11 != puVar7);
        puVar11 = puVar11 + 0x100;
        uVar8 = uVar8 | uVar23;
      } while (auStack_69c4 != puVar11);
      if (uVar8 == 0) {
        puVar7 = puVar31;
        puVar11 = puVar17;
        do {
          puVar6 = puVar7 + -0x100;
          puVar10 = puVar11;
          do {
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
            *puVar6 = *puVar6 + *puVar10;
          } while (puVar7 != puVar6);
          puVar7 = puVar7 + 0x100;
          puVar11 = puVar11 + 0x100;
        } while (auStack_51c4 != puVar7);
        uVar8 = 0;
        puVar7 = puVar17;
        do {
          puVar6 = puVar31 + -0x100;
          iVar20 = 0;
          puVar11 = puVar7;
          puVar10 = puStack_13e1c;
          do {
            while( true ) {
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + 1;
              if (0x7fe00 < *puVar6 + 0x3ff00) break;
              uVar23 = (uint)(*puVar10 != 0);
              if (*puVar6 != 0xfffc0100) {
                uVar23 = 0;
              }
              iVar20 = iVar20 + uVar23;
              puVar11 = puVar11 + 1;
              *puVar11 = uVar23;
              if (puVar31 == puVar6) goto LAB_0176133c;
            }
            iVar20 = iVar20 + 1;
            puVar11 = puVar11 + 1;
            *puVar11 = 1;
          } while (puVar31 != puVar6);
LAB_0176133c:
          puVar31 = puVar31 + 0x100;
          puVar7 = puVar7 + 0x100;
          uVar8 = uVar8 + iVar20;
          puStack_13e1c = puStack_13e1c + 0x100;
        } while (auStack_51c4 != puVar31);
        if (uVar8 < 0x38) {
          if (((local_5c0 <= param_1) || (param_1 + 0xc <= local_5c0)) &&
             (param_1 <= local_5c0 || auStack_590 <= param_1)) {
            puVar31 = local_5c0;
            puVar7 = param_1;
            do {
              uVar23 = puVar31[1];
              uVar28 = puVar31[2];
              uVar18 = puVar31[3];
              puVar11 = puVar31 + 4;
              *puVar7 = *puVar31;
              puVar7[1] = uVar23;
              puVar7[2] = uVar28;
              puVar7[3] = uVar18;
              puVar31 = puVar31 + 4;
              puVar7 = puVar7 + 4;
            } while (puVar11 != auStack_590);
            FUN_016dd606(puVar5,0,0x3d);
            uVar23 = 0;
            puVar31 = (uint *)((int)param_1 + 0xce6);
            do {
              iVar20 = 0;
              puVar7 = puVar17;
              do {
                puVar7 = puVar7 + 1;
                if (*puVar7 != 0 && uVar23 < uVar8) {
                  *(char *)((int)puVar5 + uVar23) = (char)iVar20;
                  uVar23 = uVar23 + 1;
                }
                iVar20 = iVar20 + 1;
              } while (iVar20 != 0x100);
              puVar31 = (uint *)((int)puVar31 + 1);
              *(char *)puVar31 = (char)uVar23;
              puVar17 = puVar17 + 0x100;
            } while (puVar31 != param_1 + 0x33b);
            uVar19 = 0;
            FUN_0177aaa0(local_11c0,0x400);
            FUN_0177aaa0(local_dc0,0x400);
            FUN_0177aaa0(local_6dc0,0x1800);
            FUN_0177aaa0(local_c5c0,0x2c00);
            FUN_0177aaa0(auStack_9c0,0x400);
            FUN_0177aaa0(local_99c0,0x2c00);
            FUN_0177aaa0(local_5c0,0x30);
            *param_2 = 0xced;
            goto LAB_01761564;
          }
          break;
        }
      }
    }
LAB_01761628:
    FUN_0177aaa0(local_11c0,0x400);
    FUN_0177aaa0(local_dc0,0x400);
    FUN_0177aaa0(local_6dc0,0x1800);
    FUN_0177aaa0(local_c5c0,0x2c00);
    FUN_0177aaa0(auStack_9c0,0x400);
    FUN_0177aaa0(local_99c0,0x2c00);
    FUN_0177aaa0(local_5c0,0x30);
    sVar15 = sVar15 + 5;
    if (sVar15 == -2) {
      uVar19 = 0xffffffff;
      *param_2 = 0;
      FUN_016dd606(param_1,0,0xced);
LAB_01761564:
      FUN_0177aaa0(local_55c0,0x1800);
      FUN_0177aaa0(local_3dc0,0x1800);
      FUN_0177aaa0(local_25c0,0x1400);
      FUN_0177aaa0(aiStack_13dc0,0x7800);
      FUN_0177aaa0(auStack_300,0x100);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return uVar19;
    }
  }
LAB_01761754:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1761754);
  (*pcVar1)();
}

