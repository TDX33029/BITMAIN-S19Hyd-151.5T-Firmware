// FUN_01761a60 @ 01761a60 size=5440 calls_out=11 calls_in=2
// strings: 

undefined4
FUN_01761a60(uint *param_1,int param_2,uint *param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 *param_7,int param_8)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  uint *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  int *piVar26;
  int *piVar27;
  undefined4 *local_f604;
  int *local_f600;
  int *local_f5fc;
  uint *local_f5f8;
  int *local_f5f4;
  uint local_f5f0;
  undefined4 *local_f5ec;
  undefined1 *local_f5e8;
  int *local_f5e4;
  uint *local_f5e0;
  undefined1 *local_f5d8;
  int *local_f5d4;
  int *local_f5b8;
  int aiStack_f5a0 [351];
  undefined4 auStack_f024 [7328];
  int iStack_7da4;
  int local_7da0 [255];
  uint auStack_79a4 [1280];
  int iStack_65a4;
  int local_65a0 [255];
  uint auStack_61a4 [1280];
  int iStack_4da4;
  int local_4da0 [255];
  uint auStack_49a4 [1280];
  uint uStack_35a4;
  undefined4 local_35a0 [1536];
  int local_1da0 [255];
  uint uStack_19a4;
  int local_19a0 [1023];
  int aiStack_9a4 [256];
  undefined4 uStack_5a4;
  undefined1 auStack_5a0 [768];
  uint local_2a0 [16];
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
  uint auStack_1f0 [4];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 auStack_1c0 [4];
  undefined1 auStack_1b0 [388];
  int local_2c;
  undefined4 uStack_28;
  
  puVar9 = (undefined4 *)(auStack_1b0 + 0x18c);
  do {
    puVar9 = puVar9 + -0x400;
    *puVar9 = param_1;
  } while (puVar9 != auStack_f024);
  local_2c = DAT_018ddaf8;
  if (param_2 == 0xced) {
    if ((param_7 < auStack_1c0 && &local_1e0 < param_7) ||
       ((puVar9 = param_7 + 8, param_7 < &local_1e0 && (&local_1e0 < puVar9)))) {
LAB_01761ed8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0,0x1761ed8);
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
    piVar4 = local_7da0;
    do {
      FUN_017027d0(piVar4);
      puVar9 = puVar9 + 0x50;
      piVar4 = piVar4 + 0x100;
    } while (param_7 + 0x1e8 != puVar9);
    if ((param_1 < auStack_1f0 && &local_220 < param_1) ||
       ((param_1 < &local_220 && (&local_220 < param_1 + 0xc)))) goto LAB_01761ed8;
    puVar14 = &local_220;
    puVar11 = param_1;
    do {
      uVar10 = puVar11[1];
      puVar15 = puVar11 + 4;
      uVar13 = puVar11[2];
      uVar16 = puVar11[3];
      *puVar14 = *puVar11;
      puVar14[1] = uVar10;
      puVar14[2] = uVar13;
      puVar14[3] = uVar16;
      puVar14 = puVar14 + 4;
      puVar11 = puVar15;
    } while (puVar15 != param_1 + 0xc);
    piVar4 = local_1da0;
    do {
      puVar14 = puVar15 + 0xa0;
      FUN_01702e04(piVar4,puVar15);
      piVar4 = piVar4 + 0x100;
      puVar15 = puVar14;
    } while (param_1 + 0x32c != puVar14);
    FUN_016dd606(local_4da0,0,0x1800);
    puVar14 = (uint *)((int)param_1 + 0xce6);
    uVar10 = 0;
    while( true ) {
      uVar13 = (uint)*(byte *)((int)puVar14 + 1);
      if (uVar13 < uVar10 || 0x37 < uVar13) break;
      if (uVar10 < uVar13) {
        pbVar12 = (byte *)((int)param_1 + uVar10 + 0xcaf);
        uVar16 = uVar10;
        do {
          uVar17 = (uint)pbVar12[1];
          if ((uVar10 < uVar16) && (uVar17 <= *pbVar12)) goto LAB_01761f30;
          uVar16 = uVar16 + 1;
          local_4da0[(int)((int)puVar14 + (-0xce6 - (int)param_1)) * 0x100 + uVar17] = 1;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != uVar16);
      }
      if (param_1 + 0x33b == (uint *)((int)puVar14 + 1)) {
        if (uVar13 == 0x37) goto LAB_01761f78;
        pcVar18 = (char *)((int)param_1 + uVar13 + 0xcaf);
        goto LAB_01761f20;
      }
      puVar14 = (uint *)((int)puVar14 + 1);
      uVar10 = uVar13;
    }
  }
  goto LAB_01761f30;
  while (puVar14 = (uint *)(pcVar18 + -0xce5), pcVar18 = pcVar18 + 1, puVar14 != param_1) {
LAB_01761f20:
    if (pcVar18[1] != '\0') goto LAB_01761f30;
  }
LAB_01761f78:
  puVar14 = &uStack_19a4;
  local_f5f0 = 0;
  do {
    puVar11 = puVar14 + -0x100;
    uVar10 = 0;
    do {
      puVar11 = puVar11 + 1;
      uVar13 = *puVar11;
      uVar13 = 0x7ff3b - ((-uVar13 ^ uVar13) & (uVar13 >> 0x1f | ((int)uVar13 >> 0x1f) << 1) ^
                         uVar13);
      uVar10 = uVar10 | uVar13 >> 0x1f | ((int)uVar13 >> 0x1f) << 1;
    } while (puVar14 != puVar11);
    puVar14 = puVar14 + 0x100;
    local_f5f0 = local_f5f0 | uVar10;
  } while (&uStack_5a4 != puVar14);
  if (local_f5f0 == 0) {
    if (param_8 == 0) {
      FUN_01757774(auStack_1b0,0x88);
      FUN_01757884(auStack_1b0,param_7,0x7a0);
      FUN_01757d10(auStack_5a0,auStack_1b0,0x40);
      FUN_0177aaa0(auStack_1b0,0x180);
      FUN_01757774(auStack_1b0,0x88);
      FUN_01757884(auStack_1b0,auStack_5a0,0x40);
      if (param_6 != 0) {
        FUN_01757884(auStack_1b0,param_5,param_6);
      }
      if (param_4 != 0) {
        FUN_01757884(auStack_1b0,param_3,param_4);
      }
      FUN_01757d10(local_2a0,auStack_1b0,0x40);
      FUN_0177aaa0(auStack_1b0,0x180);
      FUN_0177aaa0(auStack_5a0,0x40);
    }
    else {
      if ((local_2a0 < param_3 && param_3 < &local_260) ||
         ((param_3 < local_2a0 && (local_2a0 < param_3 + 0x10)))) goto LAB_01761ed8;
      puVar14 = local_2a0;
      puVar11 = param_3;
      do {
        uVar10 = puVar11[1];
        puVar15 = puVar11 + 4;
        uVar13 = puVar11[2];
        uVar16 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar10;
        puVar14[2] = uVar13;
        puVar14[3] = uVar16;
        puVar14 = puVar14 + 4;
        puVar11 = puVar15;
      } while (puVar15 != param_3 + 0x10);
    }
    local_f5e0 = local_2a0;
    local_f5e8 = auStack_1b0;
    iVar25 = 0x64f7;
    FUN_017581dc(aiStack_9a4 + 1,&local_220);
    uVar10 = 1;
    while( true ) {
      uVar13 = 0x100 >> (uVar10 & 0xff);
      local_f5b8 = (int *)(&DAT_00429040 + (4 << (uVar10 - 1 & 0xff)));
      uVar16 = 0;
      iVar1 = uVar13 * 2;
      while( true ) {
        piVar27 = aiStack_9a4 + uVar13;
        piVar4 = aiStack_9a4 + uVar16;
        uVar17 = uVar16;
        do {
          piVar27 = piVar27 + 1;
          uVar17 = uVar17 + 1;
          piVar4 = piVar4 + 1;
          uVar23 = (uint)((longlong)iVar25 * (longlong)*piVar27);
          lVar3 = (longlong)(int)(uVar23 * 0x3802001) * -0x7fe001;
          iVar19 = (int)((ulonglong)((longlong)iVar25 * (longlong)*piVar27) >> 0x20) +
                   (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar23);
          *piVar27 = *piVar4 - iVar19;
          *piVar4 = *piVar4 + iVar19;
        } while (uVar17 < uVar13);
        uVar16 = uVar16 + iVar1;
        if (0xff < uVar16) break;
        uVar13 = uVar13 + iVar1;
        local_f5b8 = local_f5b8 + 1;
        iVar25 = *local_f5b8;
      }
      if (uVar10 == 8) break;
      uVar13 = uVar10 & 0xff;
      uVar10 = uVar10 + 1;
      iVar25 = *(int *)(&DAT_00429040 + (1 << uVar13) * 4);
    }
    puVar14 = auStack_79a4;
    puVar11 = auStack_61a4;
    do {
      puVar15 = puVar14 + -0x100;
      do {
        puVar15 = puVar15 + 1;
        *puVar15 = *puVar15 << 0xd;
      } while (puVar14 != puVar15);
      puVar14 = puVar14 + 0x100;
    } while (puVar11 != puVar14);
    piVar4 = local_7da0;
    do {
      uVar10 = 1;
      iVar25 = 0x64f7;
      while( true ) {
        uVar13 = 0x100 >> (uVar10 & 0xff);
        iVar1 = uVar13 * 2;
        piVar27 = (int *)(&DAT_00429040 + (4 << (uVar10 - 1 & 0xff)));
        uVar16 = 0;
        while( true ) {
          piVar26 = piVar4 + (uVar13 - 1);
          piVar5 = piVar4 + uVar16;
          uVar17 = uVar16;
          do {
            piVar26 = piVar26 + 1;
            uVar17 = uVar17 + 1;
            uVar23 = (uint)((longlong)iVar25 * (longlong)*piVar26);
            lVar3 = (longlong)(int)(uVar23 * 0x3802001) * -0x7fe001;
            iVar19 = (int)((ulonglong)((longlong)iVar25 * (longlong)*piVar26) >> 0x20) +
                     (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar23);
            *piVar26 = *piVar5 - iVar19;
            *piVar5 = *piVar5 + iVar19;
            piVar5 = piVar5 + 1;
          } while (uVar17 < uVar13);
          uVar16 = uVar16 + iVar1;
          if (0xff < uVar16) break;
          piVar27 = piVar27 + 1;
          iVar25 = *piVar27;
          uVar13 = uVar13 + iVar1;
        }
        if (uVar10 == 8) break;
        uVar13 = uVar10 & 0xff;
        uVar10 = uVar10 + 1;
        iVar25 = *(int *)(&DAT_00429040 + (1 << uVar13) * 4);
      }
      piVar4 = piVar4 + 0x100;
    } while (local_65a0 != piVar4);
    local_f5f4 = &iStack_65a4;
    puVar15 = &uStack_35a4;
    piVar4 = &iStack_7da4;
    puVar14 = puVar15;
    do {
      piVar27 = aiStack_9a4;
      piVar5 = piVar4;
      puVar8 = puVar14;
      do {
        piVar27 = piVar27 + 1;
        piVar5 = piVar5 + 1;
        uVar10 = (uint)((longlong)*piVar27 * (longlong)*piVar5);
        lVar3 = (longlong)(int)(uVar10 * 0x3802001) * -0x7fe001;
        puVar8 = puVar8 + 1;
        *puVar8 = (int)((ulonglong)((longlong)*piVar27 * (longlong)*piVar5) >> 0x20) +
                  (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar10);
      } while (&uStack_5a4 != piVar27);
      puVar14 = puVar14 + 0x100;
      piVar4 = piVar4 + 0x100;
    } while (local_f5f4 != piVar4);
    FUN_0175f518(aiStack_f5a0,&local_1e0);
    piVar4 = local_1da0;
    do {
      uVar10 = 1;
      iVar25 = 0x64f7;
      while( true ) {
        uVar13 = 0x100 >> (uVar10 & 0xff);
        iVar1 = uVar13 * 2;
        piVar27 = (int *)(&DAT_00429040 + (4 << (uVar10 - 1 & 0xff)));
        uVar16 = 0;
        while( true ) {
          piVar26 = piVar4 + (uVar13 - 1);
          piVar5 = piVar4 + uVar16;
          uVar17 = uVar16;
          do {
            piVar26 = piVar26 + 1;
            uVar17 = uVar17 + 1;
            uVar23 = (uint)((longlong)iVar25 * (longlong)*piVar26);
            lVar3 = (longlong)(int)(uVar23 * 0x3802001) * -0x7fe001;
            iVar19 = (int)((ulonglong)((longlong)iVar25 * (longlong)*piVar26) >> 0x20) +
                     (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,uVar23);
            *piVar26 = *piVar5 - iVar19;
            *piVar5 = *piVar5 + iVar19;
            piVar5 = piVar5 + 1;
          } while (uVar17 < uVar13);
          uVar16 = uVar16 + iVar1;
          if (0xff < uVar16) break;
          piVar27 = piVar27 + 1;
          iVar25 = *piVar27;
          uVar13 = uVar13 + iVar1;
        }
        if (uVar10 == 8) break;
        uVar13 = uVar10 & 0xff;
        uVar10 = uVar10 + 1;
        iVar25 = *(int *)(&DAT_00429040 + (1 << uVar13) * 4);
      }
      piVar4 = piVar4 + 0x100;
    } while (aiStack_9a4 + 1 != piVar4);
    piVar4 = aiStack_f5a0;
    do {
      piVar27 = local_1da0;
      piVar5 = local_f5f4;
      piVar26 = piVar4;
      do {
        piVar6 = piVar27 + 1;
        lVar3 = (longlong)piVar27[0x400] * (longlong)piVar26[0x400] +
                (longlong)piVar26[0x300] * (longlong)piVar27[0x300] +
                (longlong)*piVar26 * (longlong)*piVar27 +
                (longlong)piVar26[0x100] * (longlong)piVar27[0x100] +
                (longlong)piVar27[0x200] * (longlong)piVar26[0x200];
        piVar5 = piVar5 + 1;
        *piVar5 = (int)((ulonglong)((longlong)((int)lVar3 * 0x3802001) * -0x7fe001 + lVar3) >> 0x20)
        ;
        piVar27 = piVar6;
        piVar26 = piVar26 + 1;
      } while (local_19a0 != piVar6);
      local_f5f4 = local_f5f4 + 0x100;
      piVar4 = piVar4 + 0x500;
    } while (local_7da0 != piVar4);
    puVar14 = puVar11;
    puVar8 = puVar15;
    do {
      puVar20 = puVar14 + -0x100;
      puVar7 = puVar8;
      do {
        puVar20 = puVar20 + 1;
        puVar7 = puVar7 + 1;
        *puVar20 = *puVar20 - *puVar7;
      } while (puVar14 != puVar20);
      puVar14 = puVar14 + 0x100;
      puVar8 = puVar8 + 0x100;
    } while (auStack_49a4 != puVar14);
    puVar14 = puVar11;
    do {
      puVar8 = puVar14 + -0x100;
      do {
        puVar8 = puVar8 + 1;
        *puVar8 = ((int)(*puVar8 + 0x400000) >> 0x17) * -0x7fe001 + *puVar8;
      } while (puVar14 != puVar8);
      puVar14 = puVar14 + 0x100;
    } while (auStack_49a4 != puVar14);
    piVar4 = local_65a0;
    do {
      piVar27 = piVar4 + 0x100;
      FUN_01702600(piVar4);
      piVar4 = piVar27;
    } while (piVar27 != local_4da0);
    puVar14 = puVar11;
    do {
      puVar8 = puVar14 + -0x100;
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + 1;
        uVar10 = *puVar8;
        *puVar8 = ((uint)(&LAB_007fe000_1 + uVar10) ^ uVar10) &
                  (uVar10 >> 0x1f | ((int)uVar10 >> 0x1f) << 1) ^ uVar10;
      } while (puVar8 != puVar14);
      puVar14 = puVar7 + 0x101;
    } while (auStack_49a4 != puVar14);
    piVar4 = &iStack_4da4;
    do {
      puVar8 = puVar11 + -0x100;
      piVar27 = piVar4;
      puVar14 = puVar15;
      do {
        puVar8 = puVar8 + 1;
        uVar13 = (((int)(*puVar8 + 0x7f) >> 7) * 0x401 + 0x200000U & 0x3ffffff) >> 0x16;
        uVar10 = *puVar8 + uVar13 * -0x7fe00;
        piVar27 = piVar27 + 1;
        if (*piVar27 != 0) {
          if ((int)((uVar10 - 0x7fe001 ^ uVar10) &
                    (0x3ff000 - uVar10 >> 0x1f | ((int)(0x3ff000 - uVar10) >> 0x1f) << 1) ^ uVar10)
              < 1) {
            uVar13 = uVar13 - 1;
          }
          else {
            uVar13 = uVar13 + 1;
          }
          uVar13 = uVar13 & 0xf;
        }
        puVar14 = puVar14 + 1;
        *puVar14 = uVar13;
      } while (puVar11 != puVar8);
      puVar11 = puVar11 + 0x100;
      piVar4 = piVar4 + 0x100;
      puVar15 = puVar15 + 0x100;
    } while (auStack_49a4 != puVar11);
    iVar25 = 0;
    puVar9 = local_35a0;
    do {
      pbVar12 = auStack_5a0 + iVar25 + -1;
      puVar21 = puVar9;
      do {
        puVar22 = puVar21 + 2;
        pbVar12 = pbVar12 + 1;
        *pbVar12 = (byte)*puVar21 | (byte)(puVar21[1] << 4);
        puVar21 = puVar22;
      } while (puVar9 + 0x100 != puVar22);
      iVar25 = iVar25 + 0x80;
      puVar9 = puVar9 + 0x100;
    } while (iVar25 != 0x300);
    FUN_01757774(local_f5e8,0x88);
    FUN_01757884(local_f5e8,local_f5e0,0x40);
    FUN_01757884(local_f5e8,auStack_5a0,0x300);
    FUN_01757d10(&local_260,local_f5e8,0x30);
    FUN_0177aaa0(local_f5e8,0x180);
    uVar10 = local_21c ^ local_25c | local_220 ^ local_260 | local_258 ^ local_218 |
             local_254 ^ local_214 | local_250 ^ local_210 | local_20c ^ local_24c |
             local_208 ^ local_248 | local_204 ^ local_244 | local_200 ^ local_240 |
             local_1fc ^ local_23c | local_1f8 ^ local_238 | local_1f4 ^ local_234;
    uVar13 = local_21c ^ local_25c ^ local_220 ^ local_260 ^ local_258 ^ local_218 ^
             local_254 ^ local_214 ^ local_250 ^ local_210 ^ local_20c ^ local_24c ^
             local_208 ^ local_248 ^ local_204 ^ local_244 ^ local_200 ^ local_240 ^
             local_1fc ^ local_23c ^ local_1f8 ^ local_238 ^ local_1f4 ^ local_234;
    uVar13 = ((uVar13 & 0xffff) >> 8 ^ uVar13 ^ (uVar13 & 0xffffff) >> 0x10 ^ uVar13 >> 0x18) & 0xff
    ;
    uVar24 = 0;
    if (((uVar13 ^ -(uint)((((uVar10 & 0xff) != 0 || (uVar10 & 0xffff) >> 8 != 0) ||
                           (uVar10 & 0xffffff) >> 0x10 != 0) || uVar10 >> 0x18 != 0)) & 0xff) !=
        uVar13) {
      uVar24 = 0xffffffff;
    }
    goto LAB_01762d48;
  }
LAB_01761f30:
  uVar24 = 0xffffffff;
LAB_01762d48:
  local_f5d4 = local_7da0;
  local_f5d8 = auStack_5a0;
  local_f5e0 = local_2a0;
  local_f5e4 = local_1da0;
  local_f5ec = &local_1e0;
  local_f5f8 = &local_220;
  local_f5fc = aiStack_9a4 + 1;
  local_f600 = local_4da0;
  local_f604 = local_35a0;
  FUN_0177aaa0(local_f600,0x1800);
  FUN_0177aaa0(local_f604,0x1800);
  FUN_0177aaa0(local_f5d4,0x3000);
  FUN_0177aaa0(local_f5e4,0x1400);
  FUN_0177aaa0(aiStack_f5a0,0x7800);
  FUN_0177aaa0(local_f5fc,0x400);
  FUN_0177aaa0(&local_260,0x30);
  FUN_0177aaa0(local_f5f8,0x30);
  FUN_0177aaa0(local_f5e0,0x40);
  FUN_0177aaa0(local_f5ec,0x20);
  FUN_0177aaa0(local_f5d8,0x300);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar24;
}

