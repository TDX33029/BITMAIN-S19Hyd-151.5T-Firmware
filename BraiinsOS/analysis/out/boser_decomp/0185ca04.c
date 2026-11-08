// FUN_0185ca04 @ 0185ca04 size=4668 calls_out=40 calls_in=4
// strings: Pending error polled more than once

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0185ca04(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  undefined *puVar16;
  int *piVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  bool bVar25;
  undefined8 uVar26;
  int local_694;
  undefined1 auStack_690 [64];
  int *local_650;
  int *local_648;
  undefined *local_644;
  undefined1 auStack_640 [60];
  int *local_604;
  undefined *puStack_600;
  uint uStack_5fc;
  uint uStack_5f8;
  uint local_5f4;
  uint uStack_5f0;
  int iStack_5ec;
  int iStack_5e8;
  undefined **local_5e0;
  int *local_5dc;
  int *local_5d8;
  undefined1 auStack_5d4 [12];
  int local_5c8;
  uint local_5c4;
  int local_5bc;
  uint local_5b8;
  ushort local_5a8;
  undefined4 *local_5a0;
  ushort local_59c;
  undefined1 auStack_578 [96];
  undefined **local_518;
  int *local_514;
  int *local_510;
  uint uStack_50c;
  uint uStack_508;
  uint local_504;
  uint uStack_500;
  uint uStack_4fc;
  uint uStack_4f8;
  uint uStack_4f4;
  uint uStack_4f0;
  undefined **ppuStack_4b0;
  uint uStack_4ac;
  int *piStack_4a8;
  uint local_4a4;
  undefined ***local_49c;
  uint *local_498;
  ushort local_494;
  undefined **local_490;
  int *local_48c;
  int *local_488;
  undefined1 auStack_484 [260];
  undefined *local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined2 local_2e4;
  undefined1 local_2e2;
  undefined4 local_2e0;
  int *local_2dc;
  int *local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint uStack_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  undefined1 local_29c;
  int *local_298;
  undefined *local_294;
  uint local_290;
  uint local_28c;
  undefined1 *local_288;
  int *local_280;
  undefined *local_27c;
  uint local_278;
  undefined **local_128;
  int *local_124;
  int *local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint uStack_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined **ppuStack_e8;
  uint local_e4;
  int *piStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  byte local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined8 local_b8;
  uint local_b0;
  uint *local_ac;
  undefined1 local_a4;
  undefined **local_90;
  int *local_8c;
  int *local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  
  puVar24 = (uint *)param_2[1];
  if (*param_2 == 1) {
    param_2[1] = 0;
    if (puVar24 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Pending error polled more than once",0x23,&DAT_01d20614);
    }
    param_1[1] = 0;
    param_1[2] = puVar24;
    *param_1 = 3;
    return;
  }
  puVar23 = puVar24 + 2;
  if ((puVar24[0x10c] != 0) && (iVar6 = FUN_019e84a0(puVar24[0x10c],*param_3), iVar6 == 0)) {
    local_2e0 = (undefined **)CONCAT22(local_2e0._2_2_,1);
    piVar14 = (int *)FUN_0183ba50(&local_2e0);
    FUN_006666fc(&local_2d0,puVar24[0xf5],puVar24[0xf6]);
LAB_0185cbfc:
    local_2c0 = puVar24[0xf8];
    local_2bc = puVar24[0xf9];
    local_2b8 = puVar24[0xfa];
    local_2b4 = puVar24[0xfb];
    local_2ac = puVar24[0xfd];
    uStack_2a8 = puVar24[0xfe];
    uStack_2a4 = puVar24[0xff];
    uStack_2a0 = puVar24[0x100];
    local_29c = (undefined1)puVar24[0x101];
    local_2c4 = puVar24[0xf7];
    local_2e0 = (undefined **)puVar24[0xf0];
    iVar6 = *piVar14;
    bVar25 = iVar6 != 2;
    uVar8 = local_2c4;
    if (bVar25) {
      iVar6 = piVar14[4];
      uVar8 = piVar14[5];
    }
    local_2dc = (int *)puVar24[0xf1];
    local_2d8 = (int *)puVar24[0xf2];
    local_2d4 = puVar24[0xf3];
    local_2b0 = puVar24[0xfc];
    if (bVar25) {
      FUN_019bb7e0(iVar6,uVar8);
    }
    FUN_01bed4e2(piVar14,&local_2e0,0x48);
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = piVar14;
    return;
  }
  if ((puVar24[0x10d] != 0) && (iVar6 = FUN_019e84a0(puVar24[0x10d],*param_3), iVar6 == 0)) {
    local_2e0 = (undefined **)CONCAT22(local_2e0._2_2_,1);
    piVar14 = (int *)FUN_0183ba50(&local_2e0);
    FUN_006666fc(&local_2d0,puVar24[0xf5],puVar24[0xf6]);
    goto LAB_0185cbfc;
  }
  puVar13 = puVar24 + 0x70;
  if ((*puVar24 & 1) == 0) {
    FUN_01852cf8(&local_518,puVar23,param_3);
  }
  else {
    while( true ) {
      iVar6 = 1;
      if ((uint)(*puVar23 < 4) <= -puVar24[3]) {
        iVar6 = *puVar23 - 4;
      }
      if (iVar6 != 0) break;
      ppuVar7 = (undefined **)puVar24[4];
      piVar14 = (int *)puVar24[5];
      puVar24[4] = 3;
      puVar24[5] = 0;
      if (ppuVar7 == (undefined **)0x3 && piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_0050d999,0xe,&DAT_01d1f160);
      }
      local_128 = ppuVar7;
      local_124 = piVar14;
      FUN_01bed4e2(&local_120,puVar24 + 6,0x90);
      FUN_0185e980(&local_2e0,puVar24 + 0x2a,&local_128);
      FUN_01855610(puVar23);
      FUN_01bed4e2(puVar23,&local_2e0,0x1b8);
    }
    if (iVar6 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_0050d9a7,0x15,&DAT_01d1f170);
    }
    FUN_01852cf8(&local_128,puVar23,param_3);
    piVar17 = local_120;
    piVar14 = local_124;
    ppuVar7 = local_128;
    if (local_128 == (undefined **)0x4 && local_124 == (int *)0x0) {
      local_514 = (int *)0x0;
      local_518 = (undefined **)0x4;
    }
    else if (local_128 == (undefined **)0x3 && local_124 == (int *)0x0) {
      local_510 = local_120;
      local_514 = (int *)0x0;
      local_518 = (undefined **)0x3;
    }
    else {
      FUN_01bed4e2(&uStack_84,&local_11c,0x5c);
      local_8c = piVar14;
      local_90 = ppuVar7;
      local_88 = piVar17;
      FUN_01855610(puVar23);
      *puVar23 = 6;
      puVar24[3] = 0;
      FUN_01bed4e2(&local_518,&local_90,0x68);
    }
  }
  piVar17 = local_510;
  piVar14 = local_514;
  ppuVar7 = local_518;
  uVar8 = (uint)local_518 & 7;
  if (uVar8 == 3) goto LAB_0185d23c;
  if (local_518 == (undefined **)0x4) goto LAB_0185d228;
  puVar21 = puVar24 + 0xce;
  FUN_01bed4e2(auStack_578,&uStack_50c,0x5c);
  FUN_01bed4e2(auStack_5d4,auStack_578,0x5c);
  local_5dc = piVar14;
  local_5e0 = ppuVar7;
  local_5d8 = piVar17;
  FUN_017970c4(&local_2e0,puVar21);
  local_128 = local_2e0;
  local_124 = local_2dc;
  local_120 = local_2d8;
  local_11c = local_2d4;
  local_118 = local_2d0;
  local_114 = local_2cc;
  uStack_110 = uStack_2c8;
  local_10c = local_2c4;
  local_108 = local_2c0;
  local_104 = local_2bc;
  local_100 = local_2b8;
  if (local_5a0 == (undefined4 *)0x0) {
    local_5a0 = (undefined4 *)FUN_014333b0();
    *local_5a0 = &DAT_0056d238;
    local_5a0[1] = 0;
    local_5a0[2] = 0;
    local_5a0[3] = 0;
  }
  puVar3 = local_5a0;
  local_2e0 = local_128;
  local_2dc = local_124;
  local_2d8 = local_120;
  local_2d4 = local_11c;
  local_2d0 = local_118;
  local_2cc = local_114;
  uStack_2c8 = uStack_110;
  local_2c4 = local_10c;
  local_2c0 = local_108;
  local_2bc = local_104;
  local_2b8 = local_100;
  puVar9 = (uint *)thunk_FUN_01be5118(0x2c);
  if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *puVar9 = (uint)local_128;
  puVar9[1] = (uint)local_124;
  puVar9[2] = (uint)local_120;
  puVar9[3] = local_11c;
  puVar9[4] = local_118;
  puVar9[5] = local_114;
  puVar9[6] = uStack_110;
  puVar9[7] = local_10c;
  puVar9[8] = local_108;
  puVar9[9] = local_104;
  puVar9[10] = local_100;
  uVar26 = FUN_01415d14(puVar3,&DAT_00569028,puVar9,&DAT_01d1ddf4);
  if ((int)uVar26 != 0) {
    uVar26 = (**(code **)((int)((ulonglong)uVar26 >> 0x20) + 0x1c))();
    iVar6 = (int)((ulonglong)uVar26 >> 0x20);
    puVar9 = (uint *)uVar26;
    (**(code **)(iVar6 + 0xc))(&local_2e0,puVar9);
    if ((local_2e0 == (undefined **)0x695ba26f && local_2d8 == (int *)0x88bfa356) &&
        (local_2dc == (int *)0xf32f2a95 && local_2d4 == 0x786c8fd9)) {
      local_2e0 = (undefined **)*puVar9;
      local_2dc = (int *)puVar9[1];
      local_2d8 = (int *)puVar9[2];
      local_2d4 = puVar9[3];
      local_2d0 = puVar9[4];
      local_2cc = puVar9[5];
      uStack_2c8 = puVar9[6];
      local_2c4 = puVar9[7];
      local_2c0 = puVar9[8];
      local_2bc = puVar9[9];
      local_2b8 = puVar9[10];
      thunk_FUN_01be4678(puVar9);
      if ((char)local_2e0 != '\x03') {
        FUN_01435814(&local_2e0);
      }
    }
    else {
      FUN_01443048(puVar9,iVar6);
    }
  }
  puVar9 = puVar24 + 0xd9;
  uVar15 = (uint)local_59c;
  if (uVar15 - 0x12d < 2) {
    if ((byte)*puVar9 == 2) {
      FUN_01bed93e(puVar9,1,0x14);
      if (puVar24[0xc4] == 0) {
        FUN_0181eb40(puVar24 + 0xc5);
      }
      puVar24[0xc4] = 1;
      iVar6 = 0;
      do {
        FUN_0141d7f4(&local_2e0,puVar13,&DAT_0051ca38 + iVar6);
        if ((char)local_2d0 != '\x02') {
          (*(code *)local_2e0[4])(&local_2d4,local_2dc,local_2d8);
        }
        iVar6 = iVar6 + 0x10;
      } while (iVar6 != 0x40);
    }
LAB_0185d08c:
    uVar15 = puVar24[0xc4];
    puVar24[0xc4] = 2;
    if (uVar15 == 0) {
      local_4a4 = puVar24[200];
      ppuStack_4b0 = (undefined **)puVar24[0xc5];
      uStack_4ac = puVar24[0xc6];
      piStack_4a8 = (int *)puVar24[199];
    }
    else {
      if (uVar15 != 1) goto LAB_0185d0cc;
      uStack_4ac = 1;
      local_4a4 = 0;
      piStack_4a8 = (int *)0x0;
      ppuStack_4b0 = &PTR_FUN_01d1f218;
      puVar24[0xc4] = 1;
    }
    if (local_5b8 != 0) {
      uVar10 = FUN_0137e53c(&local_5e0,&DAT_005695b8);
      uVar22 = 0;
      uVar15 = (uint)local_5a8 & uVar10 & 0xffff;
LAB_0185d154:
      do {
        uVar20 = uVar15;
        uVar15 = 0;
      } while (local_5c4 <= uVar20);
      puVar19 = (ushort *)(local_5c8 + uVar20 * 4);
      uVar15 = (uint)*puVar19;
      if ((uVar15 == 0xffff) ||
         (uVar2 = puVar19[1], (uVar20 - (uVar2 & local_5a8) & (uint)local_5a8) < uVar22))
      goto LAB_0185d1f4;
      if ((uint)uVar2 == (uVar10 & 0xffff)) {
        if (local_5b8 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar15,local_5b8,&DAT_01d2f55c);
        }
        iVar6 = uVar15 * 0x34 + local_5bc;
        uVar18 = *(uint *)(iVar6 + 0x20);
        bVar25 = uVar18 == 0;
        if (bVar25) {
          uVar18 = (uint)*(byte *)(iVar6 + 0x24);
        }
        if (bVar25 && uVar18 == 0x2e) goto LAB_0185d1c4;
      }
      uVar22 = uVar22 + 1;
      uVar15 = uVar20 + 1;
      goto LAB_0185d154;
    }
    goto LAB_0185d1f4;
  }
  if (uVar15 - 0x133 < 2) goto LAB_0185d08c;
  if (uVar15 == 0x12f) {
    if ((byte)*puVar9 != 5) {
      if ((9 < (byte)*puVar9) && (puVar24[0xdb] != 0)) {
        thunk_FUN_01be4678(puVar24[0xda]);
      }
      FUN_01bed93e(puVar9,1,0x14);
    }
    if (puVar24[0xc4] == 0) {
      FUN_0181eb40(puVar24 + 0xc5);
    }
    iVar6 = 0;
    puVar24[0xc4] = 1;
    do {
      FUN_0141d7f4(&local_2e0,puVar13,&DAT_0051ca38 + iVar6);
      if ((char)local_2d0 != '\x02') {
        (*(code *)local_2e0[4])(&local_2d4,local_2dc,local_2d8);
      }
      iVar6 = iVar6 + 0x10;
    } while (iVar6 != 0x40);
    goto LAB_0185d08c;
  }
LAB_0185d0cc:
  FUN_01bed4e2(auStack_640,auStack_5d4,0x5c);
LAB_0185d20c:
  if (uVar8 != 3) {
    if (ppuVar7 != (undefined **)0x4) {
      local_490 = ppuVar7;
      local_488 = piVar17;
      local_48c = piVar14;
      FUN_01bed4e2(auStack_484,auStack_640,0x5c);
      local_2e0 = (undefined **)local_604;
      local_2dc = (int *)puStack_600;
      local_2d8 = (int *)uStack_5fc;
      local_2d4 = uStack_5f8;
      local_2d0 = local_5f4;
      local_2cc = uStack_5f0;
      uStack_2c8 = iStack_5ec;
      local_2c4 = iStack_5e8;
      piVar14 = (int *)thunk_FUN_01be5118(0x20);
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x20);
      }
      *piVar14 = (int)local_604;
      piVar14[1] = (int)puStack_600;
      piVar14[2] = uStack_5fc;
      piVar14[3] = uStack_5f8;
      piVar14[4] = local_5f4;
      piVar14[5] = uStack_5f0;
      piVar14[6] = iStack_5ec;
      piVar14[7] = iStack_5e8;
      FUN_01bed4e2(auStack_690,&local_490,0x48);
      puVar16 = &DAT_01d1df94;
      local_644 = &DAT_01d1df94;
      if (local_650 != (int *)0x0) {
        puVar16 = (undefined *)local_650[3];
      }
      local_648 = piVar14;
      if (local_650 != (int *)0x0 && puVar16 != (undefined *)0x0) {
        iVar6 = *local_650;
        uVar15 = local_650[1];
        uVar8 = uVar15 & 0x88bfa356;
        local_694 = 0;
        while( true ) {
          uVar10 = *(uint *)(iVar6 + uVar8);
          uVar22 = (uVar10 & 0x80808080 ^ 0x80808080) & (uVar10 ^ 0x44444444) + 0xfefefeff;
          while (uVar22 != 0) {
            uVar20 = uVar8 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                            (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                     uVar15;
            piVar17 = (int *)(iVar6 + -0x18 + uVar20 * -0x18);
            uVar22 = uVar22 - 1 & uVar22;
            if ((*piVar17 == 0x695ba26f && piVar17[2] == -0x77405caa) &&
                (piVar17[1] == -0xcd0d56b && piVar17[3] == 0x786c8fd9)) {
              iVar6 = iVar6 + uVar20 * -0x18;
              uVar26 = (**(code **)(*(int *)(iVar6 + -4) + 0x14))(*(undefined4 *)(iVar6 + -8));
              (**(code **)((int)((ulonglong)uVar26 >> 0x20) + 0xc))(&local_2e0,(int)uVar26);
              if ((local_2e0 == (undefined **)0x695ba26f && local_2d8 == (int *)0x88bfa356) &&
                  (local_2dc == (int *)0xf32f2a95 && local_2d4 == 0x786c8fd9)) {
                local_378 = 0;
                local_124 = (int *)&DAT_01d1f1c0;
                local_128 = &local_380;
                local_380 = (undefined *)0x0;
                local_11c = 0;
                local_37c = 1;
                local_120 = (int *)0x60000020;
                iVar6 = FUN_01415570((int)uVar26,&local_128);
                uVar4 = local_37c;
                puVar16 = local_380;
                if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_013073dc(&DAT_00533383,0x37,&local_90,&DAT_01d1f208,&DAT_01d30334);
                }
                local_120 = (int *)0x0;
                local_128 = (undefined **)0x0;
                local_118 = 0;
                FUN_01ac814c(&local_2e0,&local_128,local_37c,local_378);
                if (local_2e0 == (undefined **)0x2) {
                  local_128 = (undefined **)CONCAT22(local_128._2_2_,5);
                  uVar11 = FUN_0183badc(&local_128,(uint)local_2dc & 0xff);
                  param_1[1] = 0;
                  param_1[2] = uVar11;
                  *param_1 = 3;
                  FUN_019bb7e0(puVar16,uVar4);
                  FUN_0173ca60(auStack_690);
                  return;
                }
                FUN_019bb7e0(puVar24[0xf4],puVar24[0xf5]);
                FUN_01bed4e2(puVar24 + 0xf0,&local_2e0,0x48);
                FUN_019bb7e0(puVar16,uVar4);
              }
              goto LAB_0185d60c;
            }
          }
          if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
          local_694 = local_694 + 4;
          uVar8 = uVar8 + local_694 & uVar15;
        }
      }
LAB_0185d60c:
      FUN_006666fc(&local_118,puVar24[0xf5],puVar24[0xf6]);
      local_108 = puVar24[0xf8];
      local_104 = puVar24[0xf9];
      local_100 = puVar24[0xfa];
      local_fc = puVar24[0xfb];
      local_f4 = puVar24[0xfd];
      uStack_f0 = puVar24[0xfe];
      uStack_ec = puVar24[0xff];
      ppuStack_e8 = (undefined **)puVar24[0x100];
      local_e4 = CONCAT31(local_e4._1_3_,(char)puVar24[0x101]);
      local_10c = puVar24[0xf7];
      local_128 = (undefined **)puVar24[0xf0];
      local_124 = (int *)puVar24[0xf1];
      local_120 = (int *)puVar24[0xf2];
      local_f8 = puVar24[0xfc];
      local_11c = puVar24[0xf3];
      uVar8 = puVar24[0x10c];
      puVar12 = (undefined1 *)puVar24[0x104];
      puVar24[0x10c] = 0;
      if (uVar8 == 0) {
        if (puVar12 == &DAT_3b9aca00) {
          piVar17 = (int *)thunk_FUN_01be5118(8);
          if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,8);
          }
          puVar16 = &UNK_01d1df4c;
          *piVar17 = (int)piVar14;
          piVar17[1] = (int)&DAT_01d1df94;
        }
        else {
          local_2dc = (int *)0x0;
          local_2e0 = (undefined **)0x2;
          local_27c = &DAT_01d1df94;
          local_290 = puVar24[0x102];
          local_28c = puVar24[0x103];
          local_288 = puVar12;
          local_280 = piVar14;
          piVar17 = (int *)thunk_FUN_01be5118(0x68);
          if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x68);
          }
          FUN_01bed4e2(piVar17,&local_2e0,0x68);
          puVar16 = &UNK_01d1df34;
        }
      }
      else if (puVar12 == &DAT_3b9aca00) {
        local_2dc = (int *)&DAT_01d1df94;
        local_2e0 = (undefined **)piVar14;
        local_2d8 = (int *)uVar8;
        piVar17 = (int *)thunk_FUN_01be5118(0xc);
        if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        puVar16 = &DAT_01d1df7c;
        *piVar17 = (int)local_2e0;
        piVar17[1] = (int)local_2dc;
        piVar17[2] = (int)local_2d8;
      }
      else {
        local_2dc = (int *)0x0;
        local_2e0 = (undefined **)0x2;
        local_27c = &DAT_01d1df94;
        local_290 = puVar24[0x102];
        local_28c = puVar24[0x103];
        local_288 = puVar12;
        local_280 = piVar14;
        local_278 = uVar8;
        piVar17 = (int *)thunk_FUN_01be5118(0x70);
        if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x70);
        }
        FUN_01bed4e2(piVar17,&local_2e0,0x70);
        puVar16 = &UNK_01d1df64;
      }
      FUN_01bed4e2(&local_2e0,auStack_690,0x48);
      local_298 = piVar17;
      local_294 = puVar16;
      iVar6 = thunk_FUN_01be5118(0x48);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x48);
      }
      FUN_01bed4e2(iVar6,&local_128,0x48);
      FUN_01bed4e2(param_1,&local_2e0,0x50);
      param_1[0x14] = iVar6;
      return;
    }
LAB_0185d228:
    *param_1 = 4;
    param_1[1] = 0;
    return;
  }
LAB_0185d23c:
  if (*piVar17 == 2) {
    FUN_006666fc(&local_2d0,puVar24[0xf5],puVar24[0xf6]);
    local_2c0 = puVar24[0xf8];
    local_2bc = puVar24[0xf9];
    local_2b8 = puVar24[0xfa];
    local_2b4 = puVar24[0xfb];
    local_2ac = puVar24[0xfd];
    uStack_2a8 = puVar24[0xfe];
    uStack_2a4 = puVar24[0xff];
    uStack_2a0 = puVar24[0x100];
    local_29c = (undefined1)puVar24[0x101];
    local_2c4 = puVar24[0xf7];
    local_2e0 = (undefined **)puVar24[0xf0];
    local_2dc = (int *)puVar24[0xf1];
    local_2d8 = (int *)puVar24[0xf2];
    local_2d4 = puVar24[0xf3];
    local_2b0 = puVar24[0xfc];
    FUN_01bed4e2(&local_490,&local_2e0,0x48);
    if (*piVar17 != 2) {
      FUN_019bb7e0(piVar17[4],piVar17[5]);
    }
    FUN_01bed4e2(piVar17,&local_490,0x48);
  }
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = piVar17;
  return;
LAB_0185d1c4:
  local_5bc = uVar15 * 0x34 + local_5bc;
  FUN_012fbd94(&local_2e0,*(undefined4 *)(local_5bc + 0x10),*(undefined4 *)(local_5bc + 0x14));
  if (local_2e0 == (undefined **)0x0) {
    FUN_01aa7a58(&local_518,local_2dc,local_2d8,puVar21);
    if ((char)local_518 == '\x03') goto LAB_0185d1f4;
    local_49c = &local_90;
    local_90 = local_518;
    local_8c = local_514;
    local_88 = local_510;
    uStack_84 = uStack_50c;
    uStack_80 = uStack_508;
    local_7c = local_504;
    uStack_78 = uStack_500;
    uStack_74 = uStack_4fc;
    uStack_70 = uStack_4f8;
    uStack_6c = uStack_4f4;
    uStack_68 = uStack_4f0;
    local_494 = local_59c;
    local_498 = puVar21;
    FUN_01857490(&local_2e0,puVar24 + 0xc9,&local_49c);
    piVar5 = local_2dc;
    if ((char)local_2e0 != '\0') {
      FUN_01435814(&local_90);
      FUN_0181eb40(&ppuStack_4b0);
      FUN_0185e43c(&local_5e0);
      piVar17 = piVar5;
      goto LAB_0185d23c;
    }
    if (local_2e0._1_1_ != '\x01') {
      local_2e0 = local_90;
      local_2dc = local_8c;
      local_2d8 = local_88;
      local_2d4 = uStack_84;
      local_2d0 = uStack_80;
      local_2cc = local_7c;
      uStack_2c8 = uStack_78;
      local_2c4 = uStack_74;
      local_2c0 = uStack_70;
      local_2bc = uStack_6c;
      local_2b8 = uStack_68;
      FUN_01435814(puVar21);
      *puVar21 = (uint)local_2e0;
      puVar24[0xcf] = (uint)local_2dc;
      puVar24[0xd0] = (uint)local_2d8;
      puVar24[0xd1] = local_2d4;
      puVar24[0xd2] = local_2d0;
      puVar24[0xd3] = local_2cc;
      puVar24[0xd4] = uStack_2c8;
      puVar24[0xd5] = local_2c4;
      puVar24[0xd6] = local_2c0;
      puVar24[0xd7] = local_2bc;
      puVar24[0xd8] = local_2b8;
      if ((1 < puVar24[0xc4]) &&
         (FUN_0185e0e8(&local_2e0,&ppuStack_4b0), local_2e0 != (undefined **)0x0)) {
        puVar24[0xc4] = 0;
        puVar24[0xc5] = (uint)local_2dc;
        puVar24[0xc6] = (uint)local_2d8;
        puVar24[199] = local_2d4;
        puVar24[200] = local_2d0;
      }
      local_2e0 = ppuStack_4b0;
      local_2dc = (int *)uStack_4ac;
      local_2d8 = piStack_4a8;
      local_2d4 = local_4a4;
      FUN_0185e258(&local_128);
      FUN_017970c4(&local_2e0,puVar21);
      FUN_01435814(&ppuStack_e8);
      uVar8 = local_2b8;
      uVar26 = CONCAT44(local_2bc,&local_2cc);
      ppuStack_e8 = local_2e0;
      local_e4 = (uint)local_2dc;
      piStack_e0 = local_2d8;
      uStack_dc = local_2d4;
      uStack_d8 = local_2d0;
      local_d4 = local_2cc;
      uStack_d0 = uStack_2c8;
      uStack_cc = local_2c4;
      uStack_c8 = local_2c0;
      uStack_c4 = local_2bc;
      uStack_c0 = local_2b8;
      bVar1 = (byte)*puVar9;
      if (8 < bVar1) {
        if (bVar1 == 9) {
          local_2e2 = *(undefined1 *)((int)puVar24 + 0x367);
          local_2e4 = *(undefined2 *)((int)puVar24 + 0x365);
          puVar9 = (uint *)(uint)(byte)puVar24[0xdd];
          uVar8 = puVar24[0xdc];
          uVar26 = *(undefined8 *)(puVar24 + 0xda);
        }
        else {
          uVar26 = FUN_013d4df8(puVar24[0xda],puVar24[0xdb]);
        }
      }
      if ((9 < local_bc) && (local_b8._4_4_ != 0)) {
        thunk_FUN_01be4678((undefined4)local_b8);
      }
      local_b9 = local_2e2;
      local_a4 = (undefined1)puVar24[0xde];
      local_bb = local_2e4;
      local_bc = bVar1;
      local_b0 = uVar8;
      local_ac = puVar9;
      local_b8 = uVar26;
      FUN_01731558(&local_2e0,puVar13);
      FUN_017793c0(&local_128);
      local_128 = local_2e0;
      local_124 = local_2dc;
      local_120 = local_2d8;
      local_11c = local_2d4;
      local_118 = local_2d0;
      local_114 = local_2cc;
      uStack_110 = uStack_2c8;
      local_10c = local_2c4;
      local_108 = local_2c0;
      local_104 = local_2bc;
      local_100 = local_2b8;
      local_fc = local_2b4;
      local_f8 = local_2b0;
      local_f4 = local_2ac;
      uStack_f0 = uStack_2a8;
      uStack_ec = uStack_2a4;
      FUN_01856e08(puVar24 + 0xc9,&local_128);
      FUN_0185e298(&local_2e0,puVar24 + 0x80);
      FUN_01bed4e2(&local_380,&local_128,0x98);
      FUN_01bed4e2(&local_490,&local_2e0,0x110);
      FUN_0185e3a0(puVar24);
      *puVar23 = 4;
      puVar24[3] = 0;
      *puVar24 = 1;
      puVar24[1] = 0;
      FUN_01bed4e2(puVar24 + 4,&local_380,0x98);
      FUN_01bed4e2(puVar24 + 0x2a,&local_490,0x110);
      (**(code **)(*(int *)*param_3 + 8))(((int *)*param_3)[1]);
      FUN_0185e43c(&local_5e0);
      goto LAB_0185d228;
    }
    FUN_01bed4e2(auStack_640,auStack_5d4,0x5c);
    FUN_01435814(&local_90);
  }
  else {
LAB_0185d1f4:
    FUN_01bed4e2(auStack_640,auStack_5d4,0x5c);
  }
  FUN_0181eb40(&ppuStack_4b0);
  goto LAB_0185d20c;
}

