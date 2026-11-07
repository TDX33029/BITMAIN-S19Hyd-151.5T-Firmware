// FUN_01890ee8 @ 01890ee8 size=1612 calls_out=15 calls_in=2
// strings: InconsistentComponents | InvalidEncoding | WrongAlgorithm | VersionNotSupported | RNG failed

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01890ee8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,code *param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  code *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined4 **local_388;
  char *pcStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 local_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 auStack_360 [108];
  undefined4 *local_2f4;
  undefined8 local_2f0;
  undefined4 **local_2e8;
  char *pcStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  uint local_2c0;
  undefined4 **ppuStack_2bc;
  char *pcStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined4 **ppuStack_288;
  char *pcStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_25c [12];
  undefined4 **local_250;
  char *pcStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_218 [64];
  undefined4 **local_1d8;
  char *local_1d4;
  char *local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 **local_f8;
  char *pcStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint local_cc;
  undefined1 auStack_c8 [164];
  
  puVar6 = (undefined4 *)*param_2;
  iVar10 = param_2[4];
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  local_25c._0_8_ = FUN_01897c88(iVar10);
  local_1d4 = (char *)CONCAT22(local_1d4._2_2_,0x100);
  local_1d8 = (undefined4 **)local_25c;
  FUN_01898524(&local_100,param_3,param_4,&local_1d8);
  if ((undefined4 **)local_100 == (undefined4 **)0x0) {
    ppuVar7 = local_f8;
    pcVar11 = (char *)local_100._4_4_;
    goto LAB_0189110c;
  }
  local_1d8 = (undefined4 **)local_100;
  local_1d4 = (char *)local_100._4_4_;
  local_1d0 = (char *)0x0;
  local_100 = FUN_01898838(&local_1d8,0x30);
  if ((int)local_100 == 0) {
    ppuVar7 = (undefined4 **)0xf;
    pcVar11 = "InvalidEncoding";
    goto LAB_0189110c;
  }
  local_f8 = (undefined4 **)0x0;
  uVar13 = FUN_01899080(&local_100);
  if (((char *)uVar13 != (char *)0x0) && ((int)((ulonglong)uVar13 >> 0x20) == 1)) {
    if (*(char *)uVar13 != '\x01') {
      ppuVar7 = (undefined4 **)0x13;
      pcVar11 = "VersionNotSupported";
      goto LAB_0189110c;
    }
    uVar14 = FUN_01898838(&local_100,4);
    iVar4 = (int)(uVar14 >> 0x20);
    iVar2 = (int)uVar14;
    if (iVar2 != 0) {
      if ((local_f8 < local_100._4_4_) &&
         (*(char *)((int)(undefined4 **)local_100 + (int)local_f8) == -0x60)) {
        uVar13 = FUN_01898838(&local_100,0xa0);
        if ((int)uVar13 == 0) goto LAB_018910e4;
        uVar15 = FUN_01897c88(iVar10);
        uVar5 = (uint)((ulonglong)uVar15 >> 0x20);
        uVar3 = *(uint *)(iVar10 + 0x10);
        if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar3,uVar5,uVar5,&DAT_01d21b5c);
        }
        ppuVar7 = (undefined4 **)0xe;
        pcVar11 = "WrongAlgorithm";
        if ((int)((ulonglong)uVar13 >> 0x20) != uVar5 - uVar3) goto LAB_0189110c;
        iVar10 = thunk_FUN_01bed842((int)uVar13,(int)uVar15 + uVar3);
        if (iVar10 != 0) goto LAB_0189110c;
      }
      uVar13 = FUN_01899124(&local_100);
      if ((int)uVar13 != 0) {
        ppuVar7 = (undefined4 **)0xf;
        pcVar11 = "InvalidEncoding";
        if (local_f8 == local_100._4_4_) {
          if (local_1d0 == local_1d4) {
            if (puVar6[4] == iVar4) {
              iVar10 = (*(code *)*puVar6)(iVar2,iVar4);
              if (iVar10 == 0) {
                FUN_01bed93e(&local_100,0,0x30);
                if (0x30ffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(0,iVar4,0x30,&DAT_01d2135c);
                }
                FUN_01bed4e2(&local_100,iVar2,iVar4);
                uVar15 = local_100;
                local_1d8 = local_f8;
                local_1d4 = pcStack_f4;
                local_1d0 = (char *)uStack_f0;
                uStack_1cc = uStack_ec;
                uStack_1c8 = local_e8;
                local_1c4 = local_e4;
                uStack_1c0 = uStack_e0;
                uStack_1bc = uStack_dc;
                uStack_1b8 = uStack_d8;
                uStack_1b4 = uStack_d4;
                local_250 = local_f8;
                pcStack_24c = pcStack_f4;
                uStack_248 = uStack_f0;
                uStack_244 = uStack_ec;
                local_240 = local_e8;
                local_23c = local_e4;
                uStack_238 = uStack_e0;
                uStack_234 = uStack_dc;
                uStack_230 = uStack_d8;
                local_22c = uStack_d4;
                local_25c._0_4_ = puVar6;
                local_25c._4_8_ = local_100;
                FUN_018906c4(&local_1d8,local_25c);
                if (local_1d8 == (undefined4 **)0x0) {
                  FUN_01bed4e2(auStack_360,&local_1d4,0x68);
                  local_388 = local_250;
                  pcStack_384 = pcStack_24c;
                  uStack_380 = uStack_248;
                  uStack_37c = uStack_244;
                  uStack_378 = local_240;
                  local_374 = local_23c;
                  uStack_370 = uStack_238;
                  uStack_36c = uStack_234;
                  uStack_368 = uStack_230;
                  uStack_364 = local_22c;
                  FUN_01bed4e2(&pcStack_f4,&local_388,0x90);
                  if (0x61 < local_cc) {
                    /* WARNING: Subroutine does not return */
                    FUN_012faff4(0,local_cc,0x61,&DAT_01d2150c);
                  }
                  ppuVar7 = (undefined4 **)0x16;
                  pcVar11 = "InconsistentComponents";
                  if ((uint)((ulonglong)uVar13 >> 0x20) == local_cc) {
                    iVar10 = thunk_FUN_01bed842((int)uVar13,auStack_c8);
                    if (iVar10 == 0) {
                      local_2e8 = local_388;
                      pcStack_2e4 = pcStack_384;
                      uStack_2e0 = uStack_380;
                      uStack_2dc = uStack_37c;
                      uStack_2d8 = uStack_378;
                      local_2d4 = local_374;
                      uStack_2d0 = uStack_370;
                      uStack_2cc = uStack_36c;
                      uStack_2c8 = uStack_368;
                      uStack_2c4 = uStack_364;
                      local_2f4 = puVar6;
                      local_2f0 = uVar15;
                      if (0x30 < (uint)puVar6[4]) {
                    /* WARNING: Subroutine does not return */
                        FUN_012faff4(0,puVar6[4],0x30,&DAT_01d2136c);
                      }
                      FUN_01896374(&local_100,*(undefined4 *)param_2[2]);
                      if ((undefined4 **)local_100 == (undefined4 **)0x1) {
                    /* WARNING: Subroutine does not return */
                        FUN_013073dc(&DAT_00533467,0x2b,&local_1d8,&DAT_01d2151c,&DAT_01d218cc);
                      }
                      local_2c0 = (uint)local_100._4_4_;
                      ppuStack_2bc = local_f8;
                      pcStack_2b8 = pcStack_f4;
                      uStack_2b4 = uStack_f0;
                      uStack_2b0 = uStack_ec;
                      uStack_2ac = local_e8;
                      local_2a8 = local_e4;
                      uStack_2a4 = uStack_e0;
                      uStack_2a0 = uStack_dc;
                      uStack_29c = uStack_d8;
                      uStack_298 = uStack_d4;
                      uStack_294 = uStack_d0;
                      piVar12 = (int *)param_2[1];
                      pcVar8 = *(code **)(*piVar12 + 4);
                      FUN_01bed93e(&local_100,0,0x30);
                      (*pcVar8)(&local_100,&local_2c0,piVar12 + 2);
                      ppuStack_288 = local_f8;
                      pcStack_284 = pcStack_f4;
                      uStack_280 = uStack_f0;
                      uStack_27c = uStack_ec;
                      local_278 = local_e8;
                      uStack_274 = local_e4;
                      uStack_270 = uStack_e0;
                      uStack_26c = uStack_dc;
                      uStack_268 = uStack_d8;
                      uStack_264 = uStack_d4;
                      local_290 = local_100;
                      FUN_01bed93e(auStack_218,0,0x40);
                      uVar3 = *(uint *)(*param_2 + 0x10);
                      if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
                        FUN_012faff4(0,uVar3,0x40,&DAT_01d2152c);
                      }
                      iVar10 = (*param_6)(param_5,auStack_218,uVar3);
                      if (iVar10 == 0) {
                        puVar9 = (undefined4 *)param_2[3];
                        FUN_01bed93e(&local_1d8,0,0x80);
                        local_158 = *puVar9;
                        uStack_154 = puVar9[1];
                        uStack_150 = puVar9[2];
                        uStack_14c = puVar9[3];
                        uStack_148 = puVar9[4];
                        local_144 = puVar9[5];
                        uStack_140 = puVar9[6];
                        uStack_13c = puVar9[7];
                        uStack_138 = puVar9[8];
                        uStack_134 = puVar9[9];
                        local_130 = puVar9[10];
                        uStack_12c = puVar9[0xb];
                        uStack_128 = puVar9[0xc];
                        uStack_124 = puVar9[0xd];
                        uStack_120 = puVar9[0xe];
                        uStack_11c = puVar9[0xf];
                        local_114 = 0;
                        local_118 = 0;
                        local_108 = 0;
                        local_110 = puVar9;
                        FUN_018900dc(&local_1d8,auStack_218,uVar3);
                        if (0x30 < (uint)puVar6[4]) {
                    /* WARNING: Subroutine does not return */
                          FUN_012faff4(0,puVar6[4],0x30,&DAT_01d2136c);
                        }
                        FUN_018900dc(&local_1d8,&local_2f0);
                        FUN_01bed4e2(&local_100,&local_1d8,0xd8);
                        FUN_0189039c(local_25c,&local_100);
                        uVar13 = local_25c._4_8_;
                        uVar1 = local_25c._0_4_;
                        if ((undefined4 *)local_25c._0_4_ != (undefined4 *)0x0) {
                          param_1[3] = local_250;
                          param_1[4] = pcStack_24c;
                          param_1[5] = uStack_248;
                          param_1[6] = uStack_244;
                          param_1[7] = local_240;
                          param_1[8] = local_23c;
                          param_1[9] = uStack_238;
                          param_1[10] = uStack_234;
                          param_1[0xb] = uStack_230;
                          param_1[0xc] = local_22c;
                          param_1[0xd] = uStack_228;
                          param_1[0xe] = uStack_224;
                          param_1[0xf] = uStack_220;
                          param_1[0x10] = uStack_21c;
                          FUN_01bed4e2(param_1 + 0x1e,auStack_360,0x68);
                          *(undefined8 *)(param_1 + 0x12) = local_290;
                          param_1[0x14] = ppuStack_288;
                          param_1[0x15] = pcStack_284;
                          param_1[0x16] = uStack_280;
                          param_1[0x17] = uStack_27c;
                          param_1[0x18] = local_278;
                          param_1[0x19] = uStack_274;
                          param_1[0x1a] = uStack_270;
                          param_1[0x1b] = uStack_26c;
                          param_1[0x1c] = uStack_268;
                          param_1[0x1d] = uStack_264;
                          param_1[0x11] = param_2;
                          *param_1 = uVar1;
                          *(undefined8 *)(param_1 + 1) = uVar13;
                          return;
                        }
                      }
                      else {
                        local_25c._4_8_ = 0xa0051d453;
                      }
                      param_1[2] = (int)((ulonglong)local_25c._4_8_ >> 0x20);
                      *param_1 = 0;
                      param_1[1] = (int)local_25c._4_8_;
                      return;
                    }
                  }
                }
                else {
                  ppuVar7 = (undefined4 **)0xf;
                  pcVar11 = &DAT_0051d665;
                }
                goto LAB_0189110c;
              }
            }
            ppuVar7 = (undefined4 **)0x10;
            pcVar11 = &DAT_00569538;
          }
          else {
            pcVar11 = "InvalidEncoding";
          }
        }
        goto LAB_0189110c;
      }
    }
  }
LAB_018910e4:
  ppuVar7 = (undefined4 **)0xf;
  pcVar11 = "InvalidEncoding";
LAB_0189110c:
  param_1[2] = ppuVar7;
  *param_1 = 0;
  param_1[1] = pcVar11;
  return;
}

