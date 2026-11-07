// FUN_0175cc30 @ 0175cc30 size=5308 calls_out=12 calls_in=2
// strings: 

undefined4
FUN_0175cc30(uint *param_1,int param_2,uint *param_3,int param_4,undefined4 param_5,int param_6,
            uint *param_7,int param_8)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  int *piVar4;
  byte *pbVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  int iVar19;
  int *piVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint *puVar25;
  undefined1 *local_99c8;
  uint *local_99c0;
  uint *local_99bc;
  int *local_99b8;
  undefined1 *local_99b4;
  uint *local_99b0;
  uint *local_99a8;
  uint *local_99a4;
  uint *local_99a0;
  int *local_9998;
  int *local_9984;
  int iStack_9964;
  undefined1 local_9960 [2364];
  undefined4 auStack_9024 [3504];
  int aiStack_5964 [256];
  uint auStack_5564 [768];
  undefined4 uStack_4964;
  int local_4960 [255];
  uint auStack_4564 [768];
  int aiStack_3964 [256];
  uint auStack_3564 [768];
  uint uStack_2964;
  undefined1 local_2960 [4096];
  uint local_1960 [255];
  uint uStack_1564;
  uint local_1560 [767];
  uint auStack_964 [256];
  uint uStack_564;
  uint auStack_560 [192];
  uint local_260 [16];
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
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
  
  puVar16 = (undefined4 *)(auStack_1b0 + 0x18c);
  do {
    puVar16 = puVar16 + -0x400;
    *puVar16 = param_1;
  } while (puVar16 != auStack_9024);
  local_2c = DAT_018ddaf8;
  if (param_2 == 0x974) {
    if ((param_7 < auStack_1c0 && &local_1e0 < param_7) ||
       ((param_7 < &local_1e0 && (&local_1e0 < param_7 + 8)))) {
LAB_0175d054:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0,0x175d054);
      (*pcVar2)();
    }
    local_1e0 = *param_7;
    uStack_1dc = param_7[1];
    uStack_1d8 = param_7[2];
    uStack_1d4 = param_7[3];
    piVar7 = aiStack_5964 + 1;
    uStack_1c8 = param_7[6];
    local_1d0 = param_7[4];
    uStack_1cc = param_7[5];
    uStack_1c4 = param_7[7];
    puVar10 = param_7 + 8;
    piVar24 = piVar7;
    do {
      puVar6 = puVar10 + 0x50;
      FUN_017027d0(piVar24,puVar10);
      piVar24 = piVar24 + 0x100;
      puVar10 = puVar6;
    } while (param_7 + 0x148 != puVar6);
    if ((param_1 < &local_1e0 && &local_200 < param_1) ||
       ((param_1 < &local_200 && (&local_200 < param_1 + 8)))) goto LAB_0175d054;
    local_200 = *param_1;
    local_1fc = param_1[1];
    local_1f8 = param_1[2];
    local_1f4 = param_1[3];
    local_1e8 = param_1[6];
    local_1f0 = param_1[4];
    local_1ec = param_1[5];
    local_1e4 = param_1[7];
    puVar10 = param_1 + 8;
    puVar6 = local_1960;
    do {
      puVar25 = puVar10 + 0x90;
      FUN_01702c9c(puVar6,puVar10);
      puVar6 = puVar6 + 0x100;
      puVar10 = puVar25;
    } while (param_1 + 0x248 != puVar25);
    FUN_016dd606(aiStack_3964 + 1,0,0x1000);
    pcVar12 = (char *)((int)param_1 + 0x96f);
    uVar22 = 0;
    while( true ) {
      uVar23 = (uint)(byte)pcVar12[1];
      if (uVar23 < uVar22 || 0x50 < uVar23) break;
      if (uVar22 < uVar23) {
        pbVar5 = (byte *)((int)param_1 + uVar22 + 0x91f);
        uVar9 = uVar22;
        do {
          uVar11 = (uint)pbVar5[1];
          if ((uVar22 < uVar9) && (uVar11 <= *pbVar5)) goto LAB_0175d0b0;
          uVar9 = uVar9 + 1;
          (aiStack_3964 + 1)[(int)(pcVar12 + (-0x96f - (int)param_1)) * 0x100 + uVar11] = 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar23 != uVar9);
      }
      if ((char *)((int)param_1 + 0x973) == pcVar12 + 1) {
        if (uVar23 == 0x50) goto LAB_0175d0fc;
        pcVar12 = (char *)((int)param_1 + uVar23 + 0x91f);
        goto LAB_0175d0a0;
      }
      pcVar12 = pcVar12 + 1;
      uVar22 = uVar23;
    }
  }
  goto LAB_0175d0b0;
  while (puVar10 = (uint *)(pcVar12 + -0x96e), pcVar12 = pcVar12 + 1, puVar10 != param_1) {
LAB_0175d0a0:
    if (pcVar12[1] != '\0') goto LAB_0175d0b0;
  }
LAB_0175d0fc:
  uVar22 = 0;
  puVar10 = &uStack_1564;
  do {
    puVar6 = puVar10 + -0x100;
    uVar23 = 0;
    do {
      puVar6 = puVar6 + 1;
      uVar9 = *puVar6;
      uVar9 = 0x1ffb1 - ((-uVar9 ^ uVar9) & (uVar9 >> 0x1f | ((int)uVar9 >> 0x1f) << 1) ^ uVar9);
      uVar23 = uVar23 | uVar9 >> 0x1f | ((int)uVar9 >> 0x1f) << 1;
    } while (puVar10 != puVar6);
    puVar10 = puVar10 + 0x100;
    uVar22 = uVar22 | uVar23;
  } while (&uStack_564 != puVar10);
  if (uVar22 == 0) {
    if (param_8 == 0) {
      FUN_01757774(auStack_1b0,0x88);
      FUN_01757884(auStack_1b0,param_7,0x520);
      FUN_01757d10(auStack_560,auStack_1b0,0x40);
      FUN_0177aaa0(auStack_1b0,0x180);
      FUN_01757774(auStack_1b0,0x88);
      FUN_01757884(auStack_1b0,auStack_560,0x40);
      if (param_6 != 0) {
        FUN_01757884(auStack_1b0,param_5,param_6);
      }
      if (param_4 != 0) {
        FUN_01757884(auStack_1b0,param_3,param_4);
      }
      FUN_01757d10(local_260,auStack_1b0,0x40);
      FUN_0177aaa0(auStack_1b0,0x180);
      FUN_0177aaa0(auStack_560,0x40);
    }
    else {
      if ((param_3 < &local_220 && local_260 < param_3) ||
         ((param_3 < local_260 && (local_260 < param_3 + 0x10)))) goto LAB_0175d054;
      puVar10 = local_260;
      puVar6 = param_3;
      do {
        uVar22 = puVar6[1];
        puVar25 = puVar6 + 4;
        uVar23 = puVar6[2];
        uVar9 = puVar6[3];
        *puVar10 = *puVar6;
        puVar10[1] = uVar22;
        puVar10[2] = uVar23;
        puVar10[3] = uVar9;
        puVar10 = puVar10 + 4;
        puVar6 = puVar25;
      } while (puVar25 != param_3 + 0x10);
    }
    local_99a0 = local_260;
    local_99b0 = auStack_560;
    local_99b4 = auStack_1b0;
    iVar19 = 0x64f7;
    FUN_0175800c(auStack_964 + 1,&local_200);
    uVar22 = 1;
    while( true ) {
      uVar23 = 0x100 >> (uVar22 & 0xff);
      local_9984 = (int *)(&DAT_00429040 + (4 << (uVar22 - 1 & 0xff)));
      uVar9 = 0;
      iVar1 = uVar23 * 2;
      while( true ) {
        puVar6 = auStack_964 + uVar23;
        puVar10 = auStack_964 + uVar9;
        uVar11 = uVar9;
        do {
          puVar6 = puVar6 + 1;
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 1;
          uVar15 = (uint)((longlong)iVar19 * (longlong)(int)*puVar6);
          lVar3 = (longlong)(int)(uVar15 * 0x3802001) * -0x7fe001;
          iVar13 = (int)((ulonglong)((longlong)iVar19 * (longlong)(int)*puVar6) >> 0x20) +
                   (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar15);
          *puVar6 = *puVar10 - iVar13;
          *puVar10 = *puVar10 + iVar13;
        } while (uVar11 < uVar23);
        uVar9 = uVar9 + iVar1;
        if (0xff < uVar9) break;
        uVar23 = uVar23 + iVar1;
        local_9984 = local_9984 + 1;
        iVar19 = *local_9984;
      }
      if (uVar22 == 8) break;
      uVar23 = uVar22 & 0xff;
      uVar22 = uVar22 + 1;
      iVar19 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
    }
    puVar10 = auStack_5564;
    puVar6 = auStack_4564;
    do {
      puVar25 = puVar10 + -0x100;
      do {
        puVar25 = puVar25 + 1;
        *puVar25 = *puVar25 << 0xd;
      } while (puVar10 != puVar25);
      puVar10 = puVar10 + 0x100;
    } while (puVar6 != puVar10);
    do {
      uVar22 = 1;
      iVar19 = 0x64f7;
      while( true ) {
        uVar23 = 0x100 >> (uVar22 & 0xff);
        iVar1 = uVar23 * 2;
        piVar24 = (int *)(&DAT_00429040 + (4 << (uVar22 - 1 & 0xff)));
        uVar9 = 0;
        while( true ) {
          piVar20 = piVar7 + (uVar23 - 1);
          piVar4 = piVar7 + uVar9;
          uVar11 = uVar9;
          do {
            piVar20 = piVar20 + 1;
            uVar11 = uVar11 + 1;
            uVar15 = (uint)((longlong)iVar19 * (longlong)*piVar20);
            lVar3 = (longlong)(int)(uVar15 * 0x3802001) * -0x7fe001;
            iVar13 = (int)((ulonglong)((longlong)iVar19 * (longlong)*piVar20) >> 0x20) +
                     (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar15);
            *piVar20 = *piVar4 - iVar13;
            *piVar4 = *piVar4 + iVar13;
            piVar4 = piVar4 + 1;
          } while (uVar11 < uVar23);
          uVar9 = uVar9 + iVar1;
          if (0xff < uVar9) break;
          piVar24 = piVar24 + 1;
          iVar19 = *piVar24;
          uVar23 = uVar23 + iVar1;
        }
        if (uVar22 == 8) break;
        uVar23 = uVar22 & 0xff;
        uVar22 = uVar22 + 1;
        iVar19 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
      }
      piVar7 = piVar7 + 0x100;
    } while (local_4960 != piVar7);
    iVar19 = 0;
    puVar17 = local_2960;
    do {
      piVar24 = (int *)((int)auStack_9024 + iVar19 + 0x36c0);
      puVar16 = (undefined4 *)(iVar19 + (int)&uStack_2964);
      puVar10 = auStack_964;
      do {
        puVar10 = puVar10 + 1;
        piVar24 = piVar24 + 1;
        lVar3 = (longlong)(int)*puVar10 * (longlong)*piVar24 +
                (longlong)((int)((longlong)(int)*puVar10 * (longlong)*piVar24) * 0x3802001) *
                -0x7fe001;
        puVar16 = puVar16 + 1;
        *puVar16 = (int)((ulonglong)lVar3 >> 0x20);
      } while (&uStack_564 != puVar10);
      iVar19 = iVar19 + 0x400;
    } while (iVar19 != 0x1000);
    FUN_0175a500(local_9960,&local_1e0,(int)lVar3);
    puVar10 = local_1960;
    do {
      uVar22 = 1;
      iVar19 = 0x64f7;
      while( true ) {
        uVar23 = 0x100 >> (uVar22 & 0xff);
        iVar1 = uVar23 * 2;
        piVar24 = (int *)(&DAT_00429040 + (4 << (uVar22 - 1 & 0xff)));
        uVar9 = 0;
        while( true ) {
          puVar8 = puVar10 + (uVar23 - 1);
          puVar25 = puVar10 + uVar9;
          uVar11 = uVar9;
          do {
            puVar8 = puVar8 + 1;
            uVar11 = uVar11 + 1;
            uVar15 = (uint)((longlong)iVar19 * (longlong)(int)*puVar8);
            lVar3 = (longlong)(int)(uVar15 * 0x3802001) * -0x7fe001;
            iVar13 = (int)((ulonglong)((longlong)iVar19 * (longlong)(int)*puVar8) >> 0x20) +
                     (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar15);
            *puVar8 = *puVar25 - iVar13;
            *puVar25 = *puVar25 + iVar13;
            puVar25 = puVar25 + 1;
          } while (uVar11 < uVar23);
          uVar9 = uVar9 + iVar1;
          if (0xff < uVar9) break;
          piVar24 = piVar24 + 1;
          iVar19 = *piVar24;
          uVar23 = uVar23 + iVar1;
        }
        if (uVar22 == 8) break;
        uVar23 = uVar22 & 0xff;
        uVar22 = uVar22 + 1;
        iVar19 = *(int *)(&DAT_00429040 + (1 << uVar23) * 4);
      }
      puVar10 = puVar10 + 0x100;
    } while (auStack_964 + 1 != puVar10);
    piVar24 = &iStack_9964;
    puVar16 = &uStack_4964;
    do {
      piVar7 = piVar24;
      puVar21 = puVar16;
      puVar10 = local_1960;
      do {
        puVar25 = puVar10 + 1;
        lVar3 = (longlong)piVar7[0x301] * (longlong)(int)puVar10[0x300] +
                (longlong)(int)*puVar10 * (longlong)piVar7[1] +
                (longlong)piVar7[0x101] * (longlong)(int)puVar10[0x100] +
                (longlong)(int)puVar10[0x200] * (longlong)piVar7[0x201];
        puVar21 = puVar21 + 1;
        *puVar21 = (int)((ulonglong)((longlong)((int)lVar3 * 0x3802001) * -0x7fe001 + lVar3) >> 0x20
                        );
        piVar7 = piVar7 + 1;
        puVar10 = puVar25;
      } while (local_1560 != puVar25);
      piVar24 = piVar24 + 0x400;
      puVar16 = puVar16 + 0x100;
    } while (aiStack_5964 != piVar24);
    puVar10 = puVar6;
    puVar25 = &uStack_2964;
    do {
      puVar14 = puVar10 + -0x100;
      puVar8 = puVar25;
      do {
        puVar14 = puVar14 + 1;
        puVar8 = puVar8 + 1;
        *puVar14 = *puVar14 - *puVar8;
      } while (puVar10 != puVar14);
      puVar10 = puVar10 + 0x100;
      puVar25 = puVar25 + 0x100;
    } while (auStack_3564 != puVar10);
    puVar10 = puVar6;
    do {
      puVar25 = puVar10 + -0x100;
      do {
        puVar25 = puVar25 + 1;
        *puVar25 = ((int)(*puVar25 + 0x400000) >> 0x17) * -0x7fe001 + *puVar25;
      } while (puVar10 != puVar25);
      puVar10 = puVar10 + 0x100;
    } while (auStack_3564 != puVar10);
    piVar24 = local_4960;
    do {
      piVar7 = piVar24 + 0x100;
      FUN_01702600(piVar24);
      piVar24 = piVar7;
    } while (aiStack_3964 + 1 != piVar7);
    puVar10 = puVar6;
    do {
      puVar25 = puVar10 + -0x100;
      do {
        puVar8 = puVar25;
        puVar25 = puVar8 + 1;
        uVar22 = *puVar25;
        *puVar25 = ((uint)(&LAB_007fe000_1 + uVar22) ^ uVar22) &
                   (uVar22 >> 0x1f | ((int)uVar22 >> 0x1f) << 1) ^ uVar22;
      } while (puVar25 != puVar10);
      puVar10 = puVar8 + 0x101;
    } while (auStack_3564 != puVar10);
    iVar19 = 0;
    do {
      puVar10 = puVar6 + -0x100;
      piVar24 = (int *)((int)auStack_4564 + iVar19 + 0xc00);
      puVar25 = (uint *)(iVar19 + (int)&uStack_2964);
      do {
        while( true ) {
          puVar10 = puVar10 + 1;
          uVar22 = ((int)(*puVar10 + 0x7f) >> 7) * 0x2c0b + 0x800000 >> 0x18;
          uVar23 = 0x2b - uVar22;
          uVar22 = uVar22 & ~(uVar23 >> 0x1f | ((int)uVar23 >> 0x1f) << 1);
          uVar23 = uVar22 * -0x2e800 + *puVar10;
          piVar24 = piVar24 + 1;
          if (*piVar24 != 0) break;
LAB_0175db8c:
          puVar25 = puVar25 + 1;
          *puVar25 = uVar22;
          if (puVar6 == puVar10) goto LAB_0175dc78;
        }
        if (0 < (int)((uVar23 - 0x7fe001 ^ uVar23) &
                      (0x3ff000 - uVar23 >> 0x1f | ((int)(0x3ff000 - uVar23) >> 0x1f) << 1) ^ uVar23
                     )) {
          if (uVar22 == 0x2b) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar22 + 1;
          }
          goto LAB_0175db8c;
        }
        if (uVar22 != 0) {
          uVar22 = uVar22 - 1;
          goto LAB_0175db8c;
        }
        puVar25 = puVar25 + 1;
        *puVar25 = 0x2b;
      } while (puVar6 != puVar10);
LAB_0175dc78:
      puVar6 = puVar6 + 0x100;
      iVar19 = iVar19 + 0x400;
    } while (iVar19 != 0x1000);
    puVar10 = local_99b0;
    do {
      FUN_01702d84(puVar10,puVar17);
      puVar10 = puVar10 + 0x30;
      puVar17 = puVar17 + 0x400;
    } while (local_99a0 != puVar10);
    FUN_01757774(local_99b4,0x88);
    FUN_01757884(local_99b4,local_99a0,0x40);
    FUN_01757884(local_99b4,local_99b0,0x300);
    FUN_01757d10(&local_220,local_99b4,0x20);
    FUN_0177aaa0(local_99b4,0x180);
    uVar22 = local_1fc ^ local_21c | local_200 ^ local_220 | local_218 ^ local_1f8 |
             local_214 ^ local_1f4 | local_210 ^ local_1f0 | local_1ec ^ local_20c |
             local_1e8 ^ local_208 | local_1e4 ^ local_204;
    uVar23 = local_1fc ^ local_21c ^ local_200 ^ local_220 ^ local_218 ^ local_1f8 ^
             local_214 ^ local_1f4 ^ local_210 ^ local_1f0 ^ local_1ec ^ local_20c ^
             local_1e8 ^ local_208 ^ local_1e4 ^ local_204;
    uVar23 = ((uVar23 & 0xffff) >> 8 ^ uVar23 ^ (uVar23 & 0xffffff) >> 0x10 ^ uVar23 >> 0x18) & 0xff
    ;
    uVar18 = 0;
    if (((uVar23 ^ -(uint)((((uVar22 & 0xff) != 0 || (uVar22 & 0xffff) >> 8 != 0) ||
                           (uVar22 & 0xffffff) >> 0x10 != 0) || uVar22 >> 0x18 != 0)) & 0xff) !=
        uVar23) {
      uVar18 = 0xffffffff;
    }
    goto LAB_0175de44;
  }
LAB_0175d0b0:
  uVar18 = 0xffffffff;
LAB_0175de44:
  local_9998 = aiStack_5964 + 1;
  local_99a0 = local_260;
  local_99a4 = local_1960;
  local_99a8 = auStack_964 + 1;
  local_99b0 = auStack_560;
  local_99b8 = aiStack_3964 + 1;
  local_99bc = &local_1e0;
  local_99c0 = &local_200;
  local_99c8 = local_2960;
  FUN_0177aaa0(local_99b8,0x1000);
  FUN_0177aaa0(local_99c8,0x1000);
  FUN_0177aaa0(local_9998,0x2000);
  FUN_0177aaa0(local_99a4,0x1000);
  FUN_0177aaa0(local_9960,0x4000);
  FUN_0177aaa0(local_99a8,0x400);
  FUN_0177aaa0(&local_220,0x20);
  FUN_0177aaa0(local_99c0,0x20);
  FUN_0177aaa0(local_99a0,0x40);
  FUN_0177aaa0(local_99bc,0x20);
  FUN_0177aaa0(local_99b0,0x300);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar18;
}

