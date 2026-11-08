// FUN_017669bc @ 017669bc size=5628 calls_out=11 calls_in=2
// strings: 

undefined4
FUN_017669bc(uint *param_1,int param_2,uint *param_3,int param_4,undefined4 param_5,int param_6,
            uint *param_7,int param_8)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 *puVar24;
  int *piVar25;
  undefined1 *puVar26;
  uint *puVar27;
  int *piVar28;
  undefined4 *puStack_18704;
  undefined1 *puStack_18700;
  uint *puStack_186fc;
  int *piStack_186f8;
  uint uStack_186f4;
  undefined1 *puStack_186f0;
  undefined1 *puStack_186ec;
  uint *puStack_186e8;
  uint *puStack_186e0;
  undefined4 *puStack_186dc;
  uint *puStack_186d8;
  undefined4 *puStack_186d4;
  undefined1 *puStack_186c0;
  undefined1 auStack_186a0 [1660];
  undefined4 auStack_18024 [608];
  int aiStack_176a4 [13312];
  int iStack_a6a4;
  undefined4 local_a6a0 [255];
  uint auStack_a2a4 [768];
  int aiStack_96a4 [1024];
  int iStack_86a4;
  undefined4 local_86a0 [255];
  uint auStack_82a4 [1792];
  int iStack_66a4;
  undefined4 local_66a0 [255];
  uint auStack_62a4 [1792];
  uint uStack_46a4;
  undefined4 local_46a0 [2048];
  undefined1 local_26a0 [1020];
  uint auStack_22a4 [768];
  int aiStack_16a4 [256];
  int aiStack_12a4 [512];
  int iStack_aa4;
  undefined1 local_aa0 [1020];
  undefined4 uStack_6a4;
  undefined1 auStack_6a0 [1024];
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  uint local_290;
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220 [16];
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint auStack_1c0 [4];
  undefined1 auStack_1b0 [388];
  int local_2c;
  undefined4 uStack_28;
  
  puVar24 = (undefined4 *)(auStack_1b0 + 0x18c);
  do {
    puVar24 = puVar24 + -0x400;
    *puVar24 = param_1;
  } while (puVar24 != auStack_18024);
  local_2c = DAT_018ddaf8;
  if (param_2 == 0x1213) {
    if ((param_7 < auStack_1c0 && &local_1e0 < param_7) ||
       ((puVar10 = param_7 + 8, param_7 < &local_1e0 && (&local_1e0 < puVar10)))) {
LAB_01766dfc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0,0x1766dfc);
      (*pcVar2)();
    }
    local_1e0 = *param_7;
    uStack_1dc = param_7[1];
    uStack_1d8 = param_7[2];
    uStack_1d4 = param_7[3];
    uStack_1cc = param_7[5];
    uStack_1c8 = param_7[6];
    local_1d0 = param_7[4];
    uStack_1c4 = param_7[7];
    puVar24 = local_a6a0;
    do {
      FUN_017027d0(puVar24);
      puVar10 = puVar10 + 0x50;
      puVar24 = puVar24 + 0x100;
    } while (param_7 + 0x288 != puVar10);
    if ((param_1 < local_220 && &local_260 < param_1) ||
       ((param_1 < &local_260 && (&local_260 < param_1 + 0x10)))) goto LAB_01766dfc;
    puVar10 = &local_260;
    puVar13 = param_1;
    do {
      uVar6 = puVar13[1];
      puVar16 = puVar13 + 4;
      uVar9 = puVar13[2];
      uVar11 = puVar13[3];
      *puVar10 = *puVar13;
      puVar10[1] = uVar6;
      puVar10[2] = uVar9;
      puVar10[3] = uVar11;
      puVar10 = puVar10 + 4;
      puVar13 = puVar16;
    } while (puVar16 != param_1 + 0x10);
    puVar26 = local_26a0;
    do {
      puVar10 = puVar16 + 0xa0;
      FUN_01702e04(puVar26,puVar16);
      puVar26 = puVar26 + 0x400;
      puVar16 = puVar10;
    } while (param_1 + 0x470 != puVar10);
    FUN_016dd606(local_66a0,0,0x2000);
    pcVar12 = (char *)((int)param_1 + 0x120a);
    uVar6 = 0;
    while( true ) {
      uVar9 = (uint)(byte)pcVar12[1];
      if (uVar9 < uVar6 || 0x4b < uVar9) break;
      if (uVar6 < uVar9) {
        uVar11 = uVar6;
        pbVar8 = (byte *)((int)param_1 + uVar6 + 0x11bf);
        do {
          uVar20 = (uint)pbVar8[1];
          if ((uVar6 < uVar11) && (uVar20 <= *pbVar8)) goto LAB_01766e1c;
          uVar11 = uVar11 + 1;
          local_66a0[(int)(pcVar12 + (-0x120a - (int)param_1)) * 0x100 + uVar20] = 1;
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != uVar11);
      }
      if ((char *)((int)param_1 + 0x1212) == pcVar12 + 1) {
        if (uVar9 == 0x4b) goto LAB_01766fa8;
        pcVar12 = (char *)((int)param_1 + uVar9 + 0x11bf);
        goto LAB_01766f88;
      }
      pcVar12 = pcVar12 + 1;
      uVar6 = uVar9;
    }
  }
  goto LAB_01766e1c;
  while (puVar10 = (uint *)(pcVar12 + -0x1209), pcVar12 = pcVar12 + 1, puVar10 != param_1) {
LAB_01766f88:
    if (pcVar12[1] != '\0') goto LAB_01766e1c;
  }
LAB_01766fa8:
  puVar10 = auStack_22a4;
  uStack_186f4 = 0;
  do {
    puVar13 = puVar10 + -0x100;
    uVar6 = 0;
    do {
      puVar13 = puVar13 + 1;
      uVar9 = *puVar13;
      uVar9 = 0x7ff87 - ((-uVar9 ^ uVar9) & (uVar9 >> 0x1f | ((int)uVar9 >> 0x1f) << 1) ^ uVar9);
      uVar6 = uVar6 | uVar9 >> 0x1f | ((int)uVar9 >> 0x1f) << 1;
    } while (puVar10 != puVar13);
    puVar10 = puVar10 + 0x100;
    uStack_186f4 = uStack_186f4 | uVar6;
  } while (&uStack_6a4 != puVar10);
  if (uStack_186f4 == 0) {
    if (param_8 == 0) {
      FUN_01757774(auStack_1b0,0x88);
      FUN_01757884(auStack_1b0,param_7,0xa20);
      FUN_01757d10(auStack_6a0,auStack_1b0,0x40);
      FUN_0177aaa0(auStack_1b0,0x180);
      FUN_01757774(auStack_1b0,0x88);
      FUN_01757884(auStack_1b0,auStack_6a0,0x40);
      if (param_6 != 0) {
        FUN_01757884(auStack_1b0,param_5,param_6);
      }
      if (param_4 != 0) {
        FUN_01757884(auStack_1b0,param_3,param_4);
      }
      puStack_186c0 = auStack_6a0;
      FUN_01757d10(local_220,auStack_1b0,0x40);
      FUN_0177aaa0(auStack_1b0,0x180);
      FUN_0177aaa0(puStack_186c0,0x40);
    }
    else {
      if ((local_220 < param_3 && param_3 < &local_1e0) ||
         ((param_3 < local_220 && (local_220 < param_3 + 0x10)))) goto LAB_01766dfc;
      puVar10 = local_220;
      puVar13 = param_3;
      do {
        uVar6 = puVar13[1];
        puVar16 = puVar13 + 4;
        uVar9 = puVar13[2];
        uVar11 = puVar13[3];
        *puVar10 = *puVar13;
        puVar10[1] = uVar6;
        puVar10[2] = uVar9;
        puVar10[3] = uVar11;
        puVar10 = puVar10 + 4;
        puVar13 = puVar16;
      } while (puVar16 != param_3 + 0x10);
    }
    puStack_186e8 = local_220;
    puStack_186f0 = auStack_1b0;
    puStack_186d4 = local_a6a0;
    puStack_186e0 = &local_1e0;
    puStack_186ec = local_26a0;
    puStack_186fc = &local_260;
    iVar23 = 0x64f7;
    FUN_017583ac(local_aa0,puStack_186fc);
    uVar6 = 1;
    while( true ) {
      uVar9 = 0x100 >> (uVar6 & 0xff);
      uVar11 = 0;
      piVar14 = (int *)(&DAT_00429040 + (4 << (uVar6 - 1 & 0xff)));
      iVar1 = uVar9 * 2;
      while( true ) {
        piVar25 = &iStack_aa4 + uVar9;
        piVar4 = &iStack_aa4 + uVar11;
        uVar20 = uVar11;
        do {
          piVar25 = piVar25 + 1;
          uVar20 = uVar20 + 1;
          piVar4 = piVar4 + 1;
          uVar21 = (uint)((longlong)iVar23 * (longlong)*piVar25);
          lVar3 = (longlong)(int)(uVar21 * 0x3802001) * -0x7fe001;
          iVar15 = (int)((ulonglong)((longlong)iVar23 * (longlong)*piVar25) >> 0x20) +
                   (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar21);
          *piVar25 = *piVar4 - iVar15;
          *piVar4 = *piVar4 + iVar15;
        } while (uVar20 < uVar9);
        uVar11 = uVar11 + iVar1;
        if (0xff < uVar11) break;
        piVar14 = piVar14 + 1;
        iVar23 = *piVar14;
        uVar9 = uVar9 + iVar1;
      }
      if (uVar6 == 8) break;
      uVar9 = uVar6 & 0xff;
      uVar6 = uVar6 + 1;
      iVar23 = *(int *)(&DAT_00429040 + (1 << uVar9) * 4);
    }
    puVar10 = auStack_a2a4;
    puVar13 = auStack_82a4;
    do {
      puVar16 = puVar10 + -0x100;
      do {
        puVar16 = puVar16 + 1;
        *puVar16 = *puVar16 << 0xd;
      } while (puVar10 != puVar16);
      puVar10 = puVar10 + 0x100;
    } while (puVar13 != puVar10);
    do {
      uVar6 = 1;
      iVar23 = 0x64f7;
      while( true ) {
        uVar9 = 0x100 >> (uVar6 & 0xff);
        iVar1 = uVar9 * 2;
        piVar14 = (int *)(&DAT_00429040 + (4 << (uVar6 - 1 & 0xff)));
        uVar11 = 0;
        while( true ) {
          piVar25 = puStack_186d4 + (uVar9 - 1);
          piVar4 = puStack_186d4 + uVar11;
          uVar20 = uVar11;
          do {
            piVar25 = piVar25 + 1;
            uVar20 = uVar20 + 1;
            uVar21 = (uint)((longlong)iVar23 * (longlong)*piVar25);
            lVar3 = (longlong)(int)(uVar21 * 0x3802001) * -0x7fe001;
            iVar15 = (int)((ulonglong)((longlong)iVar23 * (longlong)*piVar25) >> 0x20) +
                     (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar21);
            *piVar25 = *piVar4 - iVar15;
            *piVar4 = *piVar4 + iVar15;
            piVar4 = piVar4 + 1;
          } while (uVar20 < uVar9);
          uVar11 = uVar11 + iVar1;
          if (0xff < uVar11) break;
          piVar14 = piVar14 + 1;
          iVar23 = *piVar14;
          uVar9 = uVar9 + iVar1;
        }
        if (uVar6 == 8) break;
        uVar9 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        iVar23 = *(int *)(&DAT_00429040 + (1 << uVar9) * 4);
      }
      puStack_186d4 = puStack_186d4 + 0x100;
    } while (local_86a0 != puStack_186d4);
    piStack_186f8 = &iStack_86a4;
    puVar16 = &uStack_46a4;
    piVar14 = &iStack_a6a4;
    puVar10 = puVar16;
    do {
      piVar4 = &iStack_aa4;
      piVar25 = piVar14;
      puVar27 = puVar10;
      do {
        piVar4 = piVar4 + 1;
        piVar25 = piVar25 + 1;
        uVar6 = (uint)((longlong)*piVar4 * (longlong)*piVar25);
        lVar3 = (longlong)(int)(uVar6 * 0x3802001) * -0x7fe001;
        puVar27 = puVar27 + 1;
        *puVar27 = (int)((ulonglong)((longlong)*piVar4 * (longlong)*piVar25) >> 0x20) +
                   (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar6);
      } while (&uStack_6a4 != piVar4);
      puVar10 = puVar10 + 0x100;
      piVar14 = piVar14 + 0x100;
    } while (piStack_186f8 != piVar14);
    FUN_01764448(auStack_186a0,puStack_186e0);
    do {
      uVar6 = 1;
      iVar23 = 0x64f7;
      while( true ) {
        uVar9 = 0x100 >> (uVar6 & 0xff);
        iVar1 = uVar9 * 2;
        piVar14 = (int *)(&DAT_00429040 + (4 << (uVar6 - 1 & 0xff)));
        uVar11 = 0;
        while( true ) {
          piVar25 = (int *)(puStack_186ec + uVar9 * 4 + -4);
          piVar4 = (int *)(puStack_186ec + uVar11 * 4);
          uVar20 = uVar11;
          do {
            piVar25 = piVar25 + 1;
            uVar20 = uVar20 + 1;
            uVar21 = (uint)((longlong)iVar23 * (longlong)*piVar25);
            lVar3 = (longlong)(int)(uVar21 * 0x3802001) * -0x7fe001;
            iVar15 = (int)((ulonglong)((longlong)iVar23 * (longlong)*piVar25) >> 0x20) +
                     (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar21);
            *piVar25 = *piVar4 - iVar15;
            *piVar4 = *piVar4 + iVar15;
            piVar4 = piVar4 + 1;
          } while (uVar20 < uVar9);
          uVar11 = uVar11 + iVar1;
          if (0xff < uVar11) break;
          piVar14 = piVar14 + 1;
          iVar23 = *piVar14;
          uVar9 = uVar9 + iVar1;
        }
        if (uVar6 == 8) break;
        uVar9 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        iVar23 = *(int *)(&DAT_00429040 + (1 << uVar9) * 4);
      }
      puStack_186ec = puStack_186ec + 0x400;
    } while (local_aa0 != puStack_186ec);
    piVar14 = aiStack_176a4;
    do {
      piVar4 = aiStack_16a4;
      piVar25 = piStack_186f8;
      piVar28 = piVar14;
      do {
        piVar7 = piVar4 + 1;
        lVar3 = (longlong)piVar4[0x201] * (longlong)piVar28[0x201] +
                (longlong)piVar4[0x101] * (longlong)piVar28[0x101] +
                (longlong)*piVar7 * (longlong)piVar28[1] +
                (longlong)piVar28[-0xff] * (longlong)piVar4[-0xff] +
                (longlong)piVar28[-0x1ff] * (longlong)piVar4[-0x1ff] +
                (longlong)piVar28[-0x2ff] * (longlong)piVar4[-0x2ff] +
                (longlong)piVar4[-0x3ff] * (longlong)piVar28[-0x3ff];
        piVar25 = piVar25 + 1;
        *piVar25 = (int)((ulonglong)((longlong)((int)lVar3 * 0x3802001) * -0x7fe001 + lVar3) >> 0x20
                        );
        piVar4 = piVar7;
        piVar28 = piVar28 + 1;
      } while (aiStack_12a4 != piVar7);
      piStack_186f8 = piStack_186f8 + 0x100;
      piVar14 = piVar14 + 0x700;
    } while (aiStack_96a4 != piVar14);
    puVar10 = puVar13;
    puVar27 = puVar16;
    do {
      puVar17 = puVar10 + -0x100;
      puVar5 = puVar27;
      do {
        puVar17 = puVar17 + 1;
        puVar5 = puVar5 + 1;
        *puVar17 = *puVar17 - *puVar5;
      } while (puVar10 != puVar17);
      puVar10 = puVar10 + 0x100;
      puVar27 = puVar27 + 0x100;
    } while (auStack_62a4 != puVar10);
    puVar10 = puVar13;
    do {
      puVar27 = puVar10 + -0x100;
      do {
        puVar5 = puVar27;
        puVar27 = puVar5 + 1;
        *puVar27 = ((int)(*puVar27 + 0x400000) >> 0x17) * -0x7fe001 + *puVar27;
      } while (puVar27 != puVar10);
      puVar10 = puVar5 + 0x101;
    } while (auStack_62a4 != puVar10);
    puVar24 = local_86a0;
    do {
      puStack_186c0 = auStack_6a0;
      puStack_186d8 = &local_2a0;
      puVar18 = puVar24 + 0x100;
      FUN_01702600(puVar24);
      puVar24 = puVar18;
    } while (puVar18 != local_66a0);
    puVar10 = puVar13;
    do {
      puVar27 = puVar10 + -0x100;
      do {
        puVar5 = puVar27;
        puVar27 = puVar5 + 1;
        uVar6 = *puVar27;
        *puVar27 = ((uint)(&LAB_007fe000_1 + uVar6) ^ uVar6) &
                   (uVar6 >> 0x1f | ((int)uVar6 >> 0x1f) << 1) ^ uVar6;
      } while (puVar27 != puVar10);
      puVar10 = puVar5 + 0x101;
    } while (auStack_62a4 != puVar10);
    piVar14 = &iStack_66a4;
    do {
      puVar10 = puVar13 + -0x100;
      piVar4 = piVar14;
      puVar27 = puVar16;
      do {
        puVar5 = puVar10;
        puVar10 = puVar5 + 1;
        uVar9 = (((int)(*puVar10 + 0x7f) >> 7) * 0x401 + 0x200000U & 0x3ffffff) >> 0x16;
        uVar6 = *puVar10 + uVar9 * -0x7fe00;
        piVar4 = piVar4 + 1;
        if (*piVar4 != 0) {
          if ((int)((uVar6 - 0x7fe001 ^ uVar6) &
                    (0x3ff000 - uVar6 >> 0x1f | ((int)(0x3ff000 - uVar6) >> 0x1f) << 1) ^ uVar6) < 1
             ) {
            uVar9 = uVar9 - 1;
          }
          else {
            uVar9 = uVar9 + 1;
          }
          uVar9 = uVar9 & 0xf;
        }
        puVar27 = puVar27 + 1;
        *puVar27 = uVar9;
      } while (puVar10 != puVar13);
      puVar13 = puVar5 + 0x101;
      puVar16 = puVar16 + 0x100;
      piVar14 = piVar14 + 0x100;
    } while (auStack_62a4 != puVar13);
    iVar23 = 0;
    puVar24 = local_46a0;
    do {
      pbVar8 = auStack_6a0 + iVar23 + -1;
      puVar18 = puVar24;
      do {
        puVar19 = puVar18 + 2;
        pbVar8 = pbVar8 + 1;
        *pbVar8 = (byte)*puVar18 | (byte)(puVar18[1] << 4);
        puVar18 = puVar19;
      } while (puVar24 + 0x100 != puVar19);
      iVar23 = iVar23 + 0x80;
      puVar24 = puVar24 + 0x100;
    } while (iVar23 != 0x400);
    FUN_01757774(puStack_186f0,0x88);
    FUN_01757884(puStack_186f0,puStack_186e8,0x40);
    FUN_01757884(puStack_186f0,puStack_186c0,0x400);
    FUN_01757d10(puStack_186d8,puStack_186f0,0x40);
    FUN_0177aaa0(puStack_186f0,0x180);
    uVar6 = local_25c ^ local_29c | local_260 ^ local_2a0 | local_298 ^ local_258 |
            local_294 ^ local_254 | local_250 ^ local_290 | local_24c ^ local_28c |
            local_248 ^ local_288 | local_244 ^ local_284 | local_240 ^ local_280 |
            local_23c ^ local_27c | local_238 ^ local_278 | local_234 ^ local_274 |
            local_230 ^ local_270 | local_22c ^ local_26c | local_228 ^ local_268 |
            local_224 ^ local_264;
    uVar9 = local_25c ^ local_29c ^ local_260 ^ local_2a0 ^ local_298 ^ local_258 ^
            local_294 ^ local_254 ^ local_250 ^ local_290 ^ local_24c ^ local_28c ^
            local_248 ^ local_288 ^ local_244 ^ local_284 ^ local_240 ^ local_280 ^
            local_23c ^ local_27c ^ local_238 ^ local_278 ^ local_234 ^ local_274 ^
            local_230 ^ local_270 ^ local_22c ^ local_26c ^ local_228 ^ local_268 ^
            local_224 ^ local_264;
    uVar9 = ((uVar9 & 0xffff) >> 8 ^ uVar9 ^ (uVar9 & 0xffffff) >> 0x10 ^ uVar9 >> 0x18) & 0xff;
    uVar22 = 0;
    if (((uVar9 ^ -(uint)((((uVar6 & 0xff) != 0 || (uVar6 & 0xffff) >> 8 != 0) ||
                          (uVar6 & 0xffffff) >> 0x10 != 0) || uVar6 >> 0x18 != 0)) & 0xff) != uVar9)
    {
      uVar22 = 0xffffffff;
    }
    goto LAB_01766e54;
  }
LAB_01766e1c:
  uVar22 = 0xffffffff;
LAB_01766e54:
  puStack_186e8 = local_220;
  puStack_18700 = local_aa0;
  puStack_18704 = local_46a0;
  puStack_186c0 = auStack_6a0;
  puStack_186d4 = local_a6a0;
  puStack_186d8 = &local_2a0;
  puStack_186dc = local_66a0;
  puStack_186e0 = &local_1e0;
  puStack_186ec = local_26a0;
  puStack_186fc = &local_260;
  FUN_0177aaa0(puStack_186dc,0x2000);
  FUN_0177aaa0(puStack_18704,0x2000);
  FUN_0177aaa0(puStack_186d4,0x4000);
  FUN_0177aaa0(puStack_186ec,0x1c00);
  FUN_0177aaa0(auStack_186a0,0xe000);
  FUN_0177aaa0(puStack_18700,0x400);
  FUN_0177aaa0(puStack_186d8,0x40);
  FUN_0177aaa0(puStack_186fc,0x40);
  FUN_0177aaa0(puStack_186e8,0x40);
  FUN_0177aaa0(puStack_186e0,0x20);
  FUN_0177aaa0(puStack_186c0,0x400);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar22;
}

