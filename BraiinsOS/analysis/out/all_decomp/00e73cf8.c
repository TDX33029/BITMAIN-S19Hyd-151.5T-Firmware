// FUN_00e73cf8 @ 00e73cf8 size=9260 calls_out=32 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e73cf8(undefined4 *param_1,uint *****param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *****pppppuVar3;
  uint *****pppppuVar4;
  uint *****pppppuVar5;
  uint *****pppppuVar6;
  uint *****pppppuVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  undefined4 *puVar13;
  uint *****pppppuVar14;
  uint *****pppppuVar15;
  undefined4 uVar16;
  uint ****ppppuVar17;
  uint *****extraout_r2;
  uint *****extraout_r2_00;
  uint *****extraout_r2_01;
  uint *****extraout_r2_02;
  uint ****ppppuVar18;
  undefined1 extraout_r3;
  undefined1 extraout_r3_00;
  undefined1 uVar19;
  undefined1 unaff_r4;
  uint *****pppppuVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *****unaff_r8;
  uint *****unaff_r9;
  uint *****pppppuVar23;
  uint *****pppppuVar24;
  uint *****extraout_r12;
  uint *****extraout_r12_00;
  uint *****extraout_r12_01;
  uint *****extraout_r12_02;
  uint *****extraout_r12_03;
  uint *****extraout_r12_04;
  uint *****extraout_r12_05;
  uint *****extraout_r12_06;
  uint *****extraout_r12_07;
  undefined2 uVar25;
  uint in_fpscr;
  double dVar26;
  uint ***local_964;
  uint ***local_960;
  uint *****local_95c;
  uint *****local_944;
  uint *****local_940;
  uint *****local_93c;
  uint *****local_938;
  uint *****local_934;
  uint *****local_930;
  uint *****local_92c;
  undefined4 local_920;
  undefined4 uStack_91c;
  undefined4 local_918;
  undefined4 uStack_914;
  uint *****local_900;
  uint *****local_8fc;
  uint *****local_8f8;
  uint *****local_8f4 [21];
  int local_8a0;
  undefined4 local_89c;
  int local_878;
  undefined4 local_874;
  int local_850;
  undefined4 local_84c;
  int local_828;
  undefined4 local_824;
  uint *****local_628;
  uint *****local_624;
  uint *****local_620;
  uint *****local_458;
  uint *****local_454;
  uint ***local_450;
  uint ***local_44c;
  uint *****local_448;
  uint *****local_444;
  uint *****local_440;
  uint *****local_43c;
  uint *****local_438;
  uint *****local_434;
  undefined4 local_378;
  uint *****local_374;
  uint *****local_370;
  uint *****local_36c;
  uint *****pppppuStack_368;
  uint *****pppppuStack_364;
  uint *****local_360;
  uint *****local_35c;
  byte local_94 [4];
  uint *****local_90;
  uint *****local_8c;
  uint *****local_88;
  uint *****local_84;
  uint *****local_80;
  uint *****local_7c;
  uint *****local_78;
  uint ***local_70 [2];
  uint ****local_68;
  code *local_64;
  
  pppppuVar12 = (uint *****)&local_378;
  FUN_00efbe38(pppppuVar12);
  if (local_378 == (uint *****)&DAT_00000001) {
LAB_00e73ecc:
    uVar16 = 0x1d;
LAB_00e73ed4:
    *param_1 = uVar16;
    param_1[1] = 0;
    param_1[2] = local_374;
    return;
  }
  local_454 = local_36c;
  local_458 = local_370;
  if (local_36c != (uint *****)0x0) {
    local_624 = (uint *****)FUN_00fac4cc;
    local_628 = (uint *****)&local_458;
    FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
    local_374 = (uint *****)thunk_FUN_016d4a50(0xc);
    if (local_374 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00e73d88:
    *local_374 = (uint ****)local_900;
    local_374[1] = (uint ****)local_8fc;
    local_374[2] = (uint ****)local_8f8;
    goto LAB_00e73ecc;
  }
  if (&DAT_00000018 < local_370) {
    local_628 = (uint *****)&DAT_0187a9fc;
LAB_00e73e74:
    local_624 = (uint *****)&DAT_018ab990;
    local_900 = (uint *****)CONCAT31(local_900._1_3_,1);
    local_370 = (uint *****)&local_628;
    local_378 = (uint *****)&local_900;
    local_36c = (uint *****)&LAB_0115452c;
    local_374 = (uint *****)&LAB_01579e10;
    local_374 = (uint *****)FUN_00e94644(&DAT_0058e458,&local_378);
    goto LAB_00e73ecc;
  }
  puVar13 = param_1 + 2;
  switch(local_370) {
  case (uint *****)0x0:
    FUN_00f16f58(&local_378,param_2);
    if (local_378 != (uint *****)&DAT_80000000) {
      param_1[2] = local_378;
      param_1[3] = local_374;
      param_1[4] = local_370;
      uVar16 = 4;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0x1:
    FUN_00f1457c(&local_378,param_2);
    if (local_370 != (uint *****)&DAT_3b9aca00) {
      param_1[4] = local_370;
      uVar16 = 5;
      *puVar13 = local_378;
      param_1[3] = local_374;
      goto LAB_00e75dc8;
    }
    *puVar13 = local_378;
    goto LAB_00e75dc0;
  case (uint *****)0x2:
    FUN_00efbe38(&local_900,param_2);
    pppppuVar14 = local_8f8;
    if (local_900 == (uint *****)&DAT_00000001) {
      param_1[2] = local_8fc;
    }
    else {
      local_454 = local_8f4[0];
      local_458 = local_8f8;
      if (local_8f4[0] != (uint *****)0x0) {
        local_370 = (uint *****)&DAT_005674cc;
        local_378 = (uint *****)&local_458;
        local_374 = (uint *****)FUN_00fac4cc;
        local_36c = (uint *****)&LAB_00fac484;
        FUN_00600d2c(&local_628,&DAT_0056c1eb,&local_378);
        pppppuVar23 = (uint *****)thunk_FUN_016d4a50(0xc);
        if (pppppuVar23 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *pppppuVar23 = (uint ****)local_628;
        pppppuVar23[1] = (uint ****)local_624;
        pppppuVar23[2] = (uint ****)local_620;
        goto LAB_00e75270;
      }
      pppppuVar23 = (uint *****)0x6666;
      if (local_8f8 < (uint *****)0x6666) {
        pppppuVar23 = local_8f8;
      }
      if (local_8f8 == (uint *****)0x0) {
        local_88 = (uint *****)0x8;
        pppppuVar23 = (uint *****)0x0;
      }
      else {
        iVar21 = (int)pppppuVar23 * 0x28;
        local_88 = (uint *****)thunk_FUN_016d4a50(iVar21);
        if (local_88 == (uint *****)0x0) {
LAB_00e7488c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,iVar21);
        }
      }
      local_84 = (uint *****)0x0;
      local_8c = pppppuVar23;
      while (pppppuVar14 != (uint *****)0x0) {
        FUN_00f16f58(pppppuVar12,param_2);
        pppppuVar9 = local_370;
        pppppuVar7 = local_374;
        pppppuVar4 = local_378;
        pppppuVar23 = local_374;
        if (local_378 == (uint *****)&DAT_80000000) goto LAB_00e75234;
        FUN_00efbe38(pppppuVar12,param_2);
        pppppuVar20 = local_370;
        if (local_378 == (uint *****)&DAT_00000001) {
LAB_00e7588c:
          pppppuVar23 = local_374;
          goto LAB_00e75220;
        }
        local_7c = local_36c;
        local_80 = pppppuVar20;
        if (local_36c != (uint *****)0x0) {
          local_624 = (uint *****)FUN_00fac4cc;
          local_628 = (uint *****)&local_80;
          FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
          pppppuVar15 = (uint *****)thunk_FUN_016d4a50(0xc);
          if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
LAB_00e75c38:
          pppppuVar12 = (uint *****)&local_900;
LAB_00e75c40:
          pppppuVar14 = (uint *****)*pppppuVar12;
          pppppuVar23 = (uint *****)pppppuVar12[1];
          pppppuVar12 = (uint *****)pppppuVar12[2];
LAB_00e75c44:
          *pppppuVar15 = (uint ****)pppppuVar14;
          pppppuVar15[1] = (uint ****)pppppuVar23;
          pppppuVar15[2] = (uint ****)pppppuVar12;
LAB_00e75c50:
          pppppuVar23 = pppppuVar15;
          goto LAB_00e75220;
        }
        if (local_370 == (uint *****)0x0) {
          FUN_00efbe38(pppppuVar12,param_2);
          if (local_378 == (uint *****)&DAT_00000001) goto LAB_00e7588c;
          local_95c = local_370;
          local_7c = local_36c;
          if (local_36c == (uint *****)0x0) goto LAB_00e74fa8;
          local_624 = (uint *****)FUN_00fac4cc;
          local_628 = (uint *****)&local_80;
          local_80 = local_95c;
          FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
          pppppuVar15 = (uint *****)thunk_FUN_016d4a50(0xc);
          if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          goto LAB_00e75c38;
        }
        if (local_370 != (uint *****)&DAT_00000001) {
          local_624 = (uint *****)&DAT_018ab990;
          local_628 = (uint *****)&DAT_0187d078;
          local_8f8 = local_370;
          local_900 = (uint *****)CONCAT31(local_900._1_3_,1);
          local_370 = (uint *****)&local_628;
          local_378 = (uint *****)&local_900;
          local_36c = (uint *****)&LAB_0115452c;
          local_374 = (uint *****)&LAB_01579e10;
          pppppuVar23 = (uint *****)FUN_00e94644(&DAT_0058e458,&local_378);
          goto LAB_00e75220;
        }
        if (param_2[1] < (uint ****)0x8) {
          *(undefined4 *)((uint)pppppuVar12 | 4) = 0x2501;
          ((undefined4 *)((uint)pppppuVar12 | 4))[1] = 8;
          local_378 = (uint *****)&DAT_80000000;
          pppppuVar15 = (uint *****)thunk_FUN_016d4a50(0xc);
          if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          pppppuVar14 = local_378;
          pppppuVar23 = local_374;
          pppppuVar12 = local_370;
          goto LAB_00e75c44;
        }
        ppppuVar17 = *param_2;
        param_2[1] = param_2[1] + -2;
        local_960 = *ppppuVar17;
        local_964 = ppppuVar17[1];
        *param_2 = ppppuVar17 + 2;
LAB_00e74fa8:
        local_80 = local_370;
        local_7c = local_36c;
        FUN_00efbe38(&local_900,param_2);
        pppppuVar5 = local_8f8;
        if (local_900 == (uint *****)&DAT_00000001) {
          pppppuVar23 = local_8fc;
          goto LAB_00e75220;
        }
        local_80 = local_8f8;
        local_7c = local_8f4[0];
        if (local_8f4[0] != (uint *****)0x0) {
          local_370 = (uint *****)&DAT_005674cc;
          local_378 = (uint *****)&local_80;
          local_36c = (uint *****)&LAB_00fac484;
          local_374 = (uint *****)FUN_00fac4cc;
          FUN_00600d2c(&local_628,&DAT_0056c1eb,&local_378);
          pppppuVar15 = (uint *****)thunk_FUN_016d4a50(0xc);
          if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          pppppuVar12 = (uint *****)&local_628;
          goto LAB_00e75c40;
        }
        iVar21 = 0;
        pppppuVar23 = (uint *****)0x8ad;
        if (local_8f8 < (uint *****)0x8ad) {
          pppppuVar23 = local_8f8;
        }
        if (local_8f8 == (uint *****)0x0) {
          pppppuVar15 = (uint *****)&DAT_00000008;
          pppppuVar23 = (uint *****)0x0;
        }
        else {
          pppppuVar15 = (uint *****)thunk_FUN_016d4a50((int)pppppuVar23 * 0x1d8);
          if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(8,(int)pppppuVar23 * 0x1d8);
          }
        }
        pppppuVar14 = (uint *****)((int)pppppuVar14 + -1);
        local_78 = (uint *****)0x0;
        local_80 = pppppuVar23;
        local_7c = pppppuVar15;
        while (pppppuVar24 = local_78, pppppuVar5 != local_78) {
          FUN_00e73678(pppppuVar12,param_2);
          pppppuVar23 = local_370;
          pppppuVar8 = local_374;
          pppppuVar6 = local_378;
          pppppuVar3 = pppppuVar15;
          if (local_378 == (uint *****)&SUB_00000002 && local_374 == (uint *****)0x0)
          goto joined_r0x00e751e4;
          FUN_016dd1aa(&local_628,&local_36c,0x1cc);
          if (((uint)pppppuVar6 & 3) == 2) break;
          if (pppppuVar6 == (uint *****)0x3) goto joined_r0x00e751e4;
          local_8f8 = pppppuVar23;
          local_900 = pppppuVar6;
          local_8fc = pppppuVar8;
          FUN_016dd1aa(local_8f4,&local_628,0x1cc);
          if (pppppuVar24 == local_80) {
            FUN_00edfb88(&local_80);
            pppppuVar15 = local_7c;
          }
          FUN_016dd1aa((int)pppppuVar15 + iVar21,&local_900,0x1d8);
          iVar21 = iVar21 + 0x1d8;
          local_78 = (uint *****)((int)pppppuVar24 + 1);
        }
        pppppuVar23 = local_84;
        if (local_80 == (uint *****)&DAT_80000000) goto LAB_00e75c50;
        if (((uint)pppppuVar20 & 0xfffffffe) == 2) {
          pppppuVar23 = local_95c;
          goto LAB_00e75234;
        }
        local_43c = local_80;
        local_440 = pppppuVar9;
        local_450 = local_960;
        local_44c = local_964;
        local_444 = pppppuVar7;
        local_454 = local_95c;
        local_448 = pppppuVar4;
        local_458 = pppppuVar20;
        local_438 = pppppuVar15;
        local_434 = pppppuVar24;
        if (local_84 == local_8c) {
          FUN_00edfbec(&local_8c);
        }
        local_84 = (uint *****)((int)pppppuVar23 + 1);
        puVar13 = (undefined4 *)((int)local_88 + (int)pppppuVar23 * 0x28);
        *puVar13 = local_458;
        puVar13[1] = local_454;
        puVar13[2] = local_450;
        puVar13[3] = local_44c;
        puVar13[4] = local_448;
        puVar13[5] = local_444;
        puVar13[6] = local_440;
        puVar13[7] = local_43c;
        puVar13[8] = local_438;
        puVar13[9] = local_434;
      }
      if (local_8c != (uint *****)&DAT_80000000) {
        param_1[2] = local_8c;
        param_1[3] = local_88;
        uVar16 = 6;
        param_1[4] = local_84;
        goto LAB_00e75dc8;
      }
      param_1[2] = local_88;
    }
    goto LAB_00e75dc0;
  case (uint *****)0x3:
    if (param_2[1] == (uint ****)0x0) {
      local_370 = (uint *****)&DAT_00000001;
      local_374 = (uint *****)0x2501;
      local_378 = (uint *****)0x80000000;
      pppppuVar12 = (uint *****)thunk_FUN_016d4a50(0xc);
      if (pppppuVar12 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
LAB_00e74aa8:
      *pppppuVar12 = (uint ****)local_378;
      pppppuVar12[1] = (uint ****)local_374;
      pppppuVar12[2] = (uint ****)local_370;
    }
    else {
      param_2[1] = (uint ****)((int)param_2[1] + -1);
      ppppuVar17 = (uint ****)(uint)*(byte *)*param_2;
      *param_2 = (uint ****)((int)*param_2 + 1);
      if (ppppuVar17 == (uint ****)0x0) {
        pppppuVar14 = (uint *****)&SUB_00000002;
        pppppuVar23 = (uint *****)0x0;
LAB_00e74a20:
        FUN_016dd1aa(&local_378,&local_458,0xdc);
        *puVar13 = pppppuVar14;
        param_1[3] = pppppuVar23;
        param_1[4] = pppppuVar12;
        FUN_016dd1aa(param_1 + 5,&local_378,0xdc);
        param_1[0x3e] = local_938;
        param_1[0x3f] = local_93c;
        param_1[0x40] = local_92c;
        param_1[0x41] = local_940;
        uVar16 = 7;
        param_1[0x3c] = unaff_r8;
        param_1[0x3d] = local_934;
        param_1[0x42] = local_930;
        goto LAB_00e74ad0;
      }
      if (ppppuVar17 != (uint ****)0x1) {
        local_378 = (uint *****)&DAT_80000004;
        local_374 = (uint *****)ppppuVar17;
        pppppuVar12 = (uint *****)thunk_FUN_016d4a50(0xc);
        if (pppppuVar12 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00e74aa8;
      }
      FUN_00e72308(&local_378,param_2);
      pppppuVar12 = local_370;
      pppppuVar23 = local_374;
      pppppuVar14 = local_378;
      if (local_378 == (uint *****)&SUB_00000002 && local_374 == (uint *****)0x0) goto LAB_00e74ac4;
      FUN_016dd1aa(local_8f4,&local_36c,0xdc);
      local_8fc = pppppuVar23;
      local_900 = pppppuVar14;
      local_8f8 = pppppuVar12;
      FUN_00eaa488(&local_378,param_2);
      local_940 = local_374;
      if (local_370 == (uint *****)0x3b9aca01) {
        pppppuVar12 = local_378;
      }
      else {
        local_930 = local_370;
        local_92c = local_378;
        FUN_00efbe38(&local_378,param_2);
        unaff_r8 = local_370;
        if (local_378 != (uint *****)&DAT_00000001) {
          local_934 = local_36c;
          FUN_00efbe38(&local_378,param_2);
          if (local_378 != (uint *****)&DAT_00000001) {
            local_938 = local_370;
            local_93c = local_36c;
            FUN_016dd1aa(&local_628,local_8f4,0xdc);
            FUN_016dd1aa(&local_458,&local_628,0xdc);
            goto LAB_00e74a20;
          }
        }
        pppppuVar12 = local_374;
      }
      if (local_8a0 == -0x80000000 || local_8a0 == 0) {
        if (!(local_878 == -0x80000000 || local_878 == 0)) goto LAB_00e75858;
LAB_00e75330:
        if (!(local_850 == -0x80000000 || local_850 == 0)) goto LAB_00e75870;
LAB_00e75340:
        if (local_828 == -0x80000000 || local_828 == 0) goto LAB_00e74ac4;
      }
      else {
        thunk_FUN_016d3fb4(local_89c);
        if (!(local_878 != -0x80000000 && local_878 != 0)) goto LAB_00e75330;
LAB_00e75858:
        thunk_FUN_016d3fb4(local_874);
        if (!(local_850 != -0x80000000 && local_850 != 0)) goto LAB_00e75340;
LAB_00e75870:
        thunk_FUN_016d3fb4(local_84c);
        if (local_828 == -0x80000000 || local_828 == 0) goto LAB_00e74ac4;
      }
      thunk_FUN_016d3fb4(local_824);
    }
LAB_00e74ac4:
    uVar16 = 0x1d;
    param_1[2] = pppppuVar12;
LAB_00e74ad0:
    *param_1 = uVar16;
    param_1[1] = 0;
    return;
  case (uint *****)0x4:
    if (param_2[1] == (uint ****)0x0) {
      local_370 = (uint *****)&DAT_00000001;
      local_374 = (uint *****)0x2501;
      local_378 = (uint *****)0x80000000;
      pppppuVar12 = (uint *****)thunk_FUN_016d4a50(0xc);
      if (pppppuVar12 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
    }
    else {
      param_2[1] = (uint ****)((int)param_2[1] + -1);
      ppppuVar17 = (uint ****)(uint)*(byte *)*param_2;
      *param_2 = (uint ****)((int)*param_2 + 1);
      if (ppppuVar17 == (uint ****)0x0) {
        local_374 = (uint *****)0x0;
        local_378 = (uint *****)0x3;
        local_370 = (uint *****)0x0;
LAB_00e74af0:
        param_1[2] = local_370;
        *param_1 = local_378;
        param_1[1] = local_374;
        FUN_016dd1aa(param_1 + 3,&local_900,0x2d4);
        return;
      }
      if (ppppuVar17 == (uint ****)0x1) {
        FUN_00e6f3c8(&local_378,param_2);
        pppppuVar12 = local_370;
        if (local_378 != (uint *****)0x3 || local_374 != (uint *****)0x0) {
          FUN_016dd1aa(&local_900,&local_36c,0x2d4);
          goto LAB_00e74af0;
        }
        goto LAB_00e74b50;
      }
      local_378 = (uint *****)&DAT_80000004;
      local_374 = (uint *****)ppppuVar17;
      pppppuVar12 = (uint *****)thunk_FUN_016d4a50(0xc);
      if (pppppuVar12 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
    }
    *pppppuVar12 = (uint ****)local_378;
    pppppuVar12[1] = (uint ****)local_374;
    pppppuVar12[2] = (uint ****)local_370;
LAB_00e74b50:
    *param_1 = 0x1d;
    param_1[1] = 0;
    param_1[2] = pppppuVar12;
    return;
  case (uint *****)0x5:
    FUN_00efc730(&local_378,param_2);
    if (local_378 != (uint *****)0x80000002) {
      param_1[2] = local_378;
      param_1[3] = local_374;
      param_1[4] = local_370;
      uVar16 = 9;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0x6:
    FUN_00efc730(&local_378,param_2);
    if (local_378 != (uint *****)0x80000002) {
      param_1[2] = local_378;
      param_1[3] = local_374;
      param_1[4] = local_370;
      uVar16 = 10;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0x7:
    FUN_00e76970(&local_378,param_2);
    if ((char)local_378 == '\0') {
      *(undefined1 *)(param_1 + 2) = local_378._1_1_;
      uVar16 = 0xb;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0x8:
    FUN_00e76970(&local_378,param_2);
    if ((char)local_378 == '\0') {
      *(undefined1 *)(param_1 + 2) = local_378._1_1_;
      uVar16 = 0xc;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0x9:
    FUN_00f128c4(&local_900,param_2);
    pppppuVar12 = (uint *****)((uint)local_900 & 0xff);
    if (pppppuVar12 == (uint *****)&SUB_00000002) goto LAB_00e744ec;
    if (((uint)local_900 & 1) == 0) {
      local_378 = (uint *****)&DAT_80000000;
      local_370 = extraout_r2_01;
LAB_00e749cc:
      param_1[2] = local_378;
      param_1[3] = pppppuVar12;
      uVar16 = 0xd;
      param_1[4] = local_370;
      goto LAB_00e75dc8;
    }
    FUN_00efd95c(&local_378,local_8fc);
    if (local_378 != (uint *****)&DAT_80000000) {
      pppppuVar12 = local_374;
      goto LAB_00e749cc;
    }
    goto LAB_00e744f0;
  case (uint *****)0xa:
    FUN_00efd068(&local_378,param_2);
    if (local_378 != (uint *****)&SUB_00000002) {
      param_1[2] = local_378;
      param_1[3] = local_374;
      param_1[4] = local_370;
      param_1[5] = local_36c;
      uVar16 = 0xe;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0xb:
    FUN_00efd068(&local_378,param_2);
    if (local_378 != (uint *****)&SUB_00000002) {
      param_1[2] = local_378;
      param_1[3] = local_374;
      param_1[4] = local_370;
      param_1[5] = local_36c;
      uVar16 = 0xf;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0xc:
    FUN_00f128c4(local_94,param_2);
    if (local_94[0] == 2) {
      pppppuVar14 = local_90;
    }
    else {
      if ((local_94[0] & 1) != 0) {
        FUN_00efd95c(&local_378,local_90);
        if (local_378 != (uint *****)&DAT_80000000) {
          uVar16 = 1;
          pppppuVar23 = local_370;
LAB_00e7465c:
          param_1[2] = uVar16;
          param_1[3] = local_378;
          param_1[4] = local_374;
          param_1[5] = pppppuVar23;
          uVar16 = 0x10;
          goto LAB_00e75dc8;
        }
        goto LAB_00e740f0;
      }
      FUN_00efbe38(&local_900,local_90);
      pppppuVar4 = local_8f8;
      if (local_900 == (uint *****)&DAT_00000001) {
        pppppuVar14 = local_8fc;
      }
      else {
        local_454 = local_8f4[0];
        local_458 = local_8f8;
        if (local_8f4[0] != (uint *****)0x0) {
          local_370 = (uint *****)&DAT_005674cc;
          local_378 = (uint *****)&local_458;
          local_374 = (uint *****)FUN_00fac4cc;
          local_36c = (uint *****)&LAB_00fac484;
          FUN_00600d2c(&local_628,&DAT_0056c1eb,&local_378);
          pppppuVar14 = (uint *****)thunk_FUN_016d4a50(0xc);
          if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          pppppuVar12 = (uint *****)&local_628;
          goto LAB_00e74578;
        }
        pppppuVar14 = (uint *****)0x3333;
        if (local_8f8 < (uint *****)0x3333) {
          pppppuVar14 = local_8f8;
        }
        if (local_8f8 == (uint *****)0x0) {
          local_934 = (uint *****)&DAT_00000008;
          pppppuVar14 = (uint *****)0x0;
        }
        else {
          iVar21 = (int)pppppuVar14 * 0x50;
          local_934 = (uint *****)thunk_FUN_016d4a50(iVar21);
          if (local_934 == (uint *****)0x0) goto LAB_00e7488c;
        }
        puVar13 = (undefined4 *)((uint)pppppuVar12 | 4);
        local_84 = (uint *****)0x0;
        iVar21 = 0x48;
        local_8c = pppppuVar14;
        local_88 = local_934;
        while (pppppuVar23 = local_84, pppppuVar4 != local_84) {
          FUN_00efbe38(pppppuVar12,local_90);
          pppppuVar7 = local_370;
          pppppuVar14 = local_374;
          if (local_378 == (uint *****)&DAT_00000001) {
LAB_00e75dac:
            if (local_8c != (uint *****)0x0) {
              thunk_FUN_016d3fb4(local_934);
            }
            goto LAB_00e75dbc;
          }
          if (local_36c != (uint *****)0x0) {
            local_64 = (code *)&DAT_0187c504;
            local_36c = (uint *****)&LAB_0115452c;
            local_900 = (uint *****)CONCAT31(local_900._1_3_,1);
            local_68 = local_70;
            local_370 = &local_68;
            local_378 = (uint *****)&local_900;
            local_374 = (uint *****)&LAB_01579e10;
            pppppuVar14 = (uint *****)FUN_00e94644(&DAT_0058e458,&local_378);
            goto LAB_00e75dac;
          }
          ppppuVar17 = local_90[1];
          if (ppppuVar17 < (uint ****)0x8) {
            *puVar13 = 0x2501;
            puVar13[1] = 8;
            local_378 = (uint *****)&DAT_80000000;
            pppppuVar14 = (uint *****)thunk_FUN_016d4a50(0xc);
            if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
LAB_00e75cc4:
            pppppuVar12 = local_378;
            local_8fc = local_374;
            local_8f8 = local_370;
LAB_00e75d9c:
            *pppppuVar14 = (uint ****)pppppuVar12;
            pppppuVar14[1] = (uint ****)local_8fc;
            pppppuVar14[2] = (uint ****)local_8f8;
            goto LAB_00e75dac;
          }
          ppppuVar18 = *local_90;
          uVar1 = *(undefined8 *)ppppuVar18;
          local_90[1] = ppppuVar17 + -2;
          *local_90 = ppppuVar18 + 2;
          if (ppppuVar17 + -2 < (uint ****)0x8) {
            *puVar13 = 0x2501;
            puVar13[1] = 8;
            local_378 = (uint *****)&DAT_80000000;
            pppppuVar14 = (uint *****)thunk_FUN_016d4a50(0xc);
            if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            goto LAB_00e75cc4;
          }
          uVar2 = *(undefined8 *)(ppppuVar18 + 2);
          local_90[1] = ppppuVar17 + -4;
          *local_90 = ppppuVar18 + 4;
          FUN_00efbe38(pppppuVar12,local_90);
          pppppuVar9 = local_370;
          pppppuVar14 = local_374;
          if (local_378 == (uint *****)&DAT_00000001) goto LAB_00e75dac;
          if (local_36c != (uint *****)0x0) {
            local_64 = (code *)&DAT_0187c504;
            local_900 = (uint *****)CONCAT31(local_900._1_3_,1);
            local_68 = local_70;
            local_370 = &local_68;
            local_378 = (uint *****)&local_900;
            local_36c = (uint *****)&LAB_0115452c;
            local_374 = (uint *****)&LAB_01579e10;
            pppppuVar14 = (uint *****)FUN_00e94644(&DAT_0058e458,&local_378);
            goto LAB_00e75dac;
          }
          FUN_00eaa5dc(pppppuVar12,local_90);
          pppppuVar15 = local_374;
          pppppuVar20 = local_378;
          pppppuVar14 = local_374;
          if (local_378 == (uint *****)&SUB_00000002) goto LAB_00e75dac;
          FUN_00eaa5dc(pppppuVar12,local_90);
          pppppuVar24 = local_374;
          pppppuVar5 = local_378;
          pppppuVar14 = local_374;
          if (local_378 == (uint *****)&SUB_00000002) goto LAB_00e75dac;
          FUN_00efc920(pppppuVar12,local_90);
          pppppuVar8 = local_370;
          pppppuVar6 = local_374;
          pppppuVar3 = local_378;
          pppppuVar14 = pppppuVar8;
          if (local_378 == (uint *****)&DAT_00000005 && local_374 == (uint *****)0x0)
          goto LAB_00e75dac;
          local_628 = local_36c;
          local_624 = pppppuStack_368;
          local_620 = pppppuStack_364;
          FUN_00efbe38(pppppuVar12,local_90);
          pppppuVar10 = local_370;
          pppppuVar14 = local_374;
          if (local_378 == (uint *****)&DAT_00000001) goto LAB_00e75dac;
          if (local_36c != (uint *****)0x0) {
            local_64 = FUN_00fac4cc;
            local_68 = local_70;
            FUN_00600d2c(&local_900,&DAT_00584bb4,&local_68);
            pppppuVar14 = (uint *****)thunk_FUN_016d4a50(0xc);
            if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
LAB_00e75d90:
            pppppuVar12 = local_900;
            goto LAB_00e75d9c;
          }
          FUN_00efbe38(pppppuVar12,local_90);
          pppppuVar11 = local_370;
          pppppuVar14 = local_374;
          if (local_378 == (uint *****)&DAT_00000001) goto LAB_00e75dac;
          if (local_36c != (uint *****)0x0) {
            local_64 = FUN_00fac4cc;
            local_68 = local_70;
            FUN_00600d2c(&local_900,&DAT_00584bb4,&local_68);
            pppppuVar14 = (uint *****)thunk_FUN_016d4a50(0xc);
            if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            goto LAB_00e75d90;
          }
          local_80 = local_628;
          local_7c = local_624;
          local_78 = local_620;
          if (((uint)pppppuVar3 & 7) == 5) break;
          pppppuVar14 = pppppuVar8;
          if (pppppuVar3 == (uint *****)&DAT_00000006) goto LAB_00e75dac;
          if (pppppuVar23 == local_8c) {
            FUN_00edfd7c(&local_8c);
            local_934 = local_88;
          }
          dVar26 = (double)VectorUnsignedToFloat(pppppuVar11,(byte)(in_fpscr >> 0x16) & 3);
          *(uint ******)((int)local_934 + iVar21 + -0x48) = pppppuVar3;
          *(uint ******)((int)local_934 + iVar21 + -0x40) = pppppuVar8;
          *(uint ******)((int)local_934 + iVar21 + -0x44) = pppppuVar6;
          *(uint ******)((int)local_934 + iVar21) = pppppuVar10;
          *(uint ******)((int)local_934 + iVar21 + -0x3c) = local_80;
          local_920 = (undefined4)uVar2;
          uStack_91c = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(uint ******)((int)local_934 + iVar21 + -0x38) = local_7c;
          *(uint ******)((int)local_934 + iVar21 + -4) = pppppuVar9;
          *(uint ******)((int)local_934 + iVar21 + -8) = pppppuVar7;
          *(uint ******)((int)local_934 + iVar21 + -0x28) = pppppuVar5;
          *(uint ******)((int)local_934 + iVar21 + -0x34) = local_78;
          *(uint ******)((int)local_934 + iVar21 + -0x30) = pppppuVar20;
          local_918 = (undefined4)uVar1;
          uStack_914 = (undefined4)((ulonglong)uVar1 >> 0x20);
          *(undefined4 *)((int)local_934 + iVar21 + -0x14) = uStack_91c;
          *(double *)((int)local_934 + iVar21 + -0x10) = dVar26 / 1000.0;
          *(uint ******)((int)local_934 + iVar21 + -0x24) = pppppuVar24;
          *(uint ******)((int)local_934 + iVar21 + -0x2c) = pppppuVar15;
          local_84 = (uint *****)((int)pppppuVar23 + 1);
          *(undefined4 *)((int)local_934 + iVar21 + -0x18) = local_920;
          *(undefined4 *)((int)local_934 + iVar21 + -0x1c) = uStack_914;
          *(undefined4 *)((int)local_934 + iVar21 + -0x20) = local_918;
          iVar21 = iVar21 + 0x50;
        }
        if (local_8c != (uint *****)&DAT_80000000) {
          uVar16 = 0;
          local_378 = local_8c;
          local_374 = local_934;
          goto LAB_00e7465c;
        }
        pppppuVar14 = local_934;
      }
    }
    goto LAB_00e75dbc;
  case (uint *****)0xd:
    FUN_00f128c4(&local_900,param_2);
    pppppuVar12 = (uint *****)((uint)local_900 & 0xff);
    if (pppppuVar12 != (uint *****)&SUB_00000002) {
      if (((uint)local_900 & 1) == 0) {
        local_378 = (uint *****)&DAT_80000000;
        local_370 = extraout_r2;
      }
      else {
        FUN_00efd95c(&local_378,local_8fc);
        if (local_378 == (uint *****)&DAT_80000000) goto LAB_00e744f0;
        pppppuVar12 = local_374;
      }
      param_1[2] = local_378;
      param_1[3] = pppppuVar12;
      uVar16 = 0x11;
      param_1[4] = local_370;
      goto LAB_00e75dc8;
    }
    goto LAB_00e744ec;
  case (uint *****)0xe:
    FUN_00f128c4(&local_628,param_2);
    if ((char)local_628 != '\x02') {
      if (((uint)local_628 & 1) == 0) {
        FUN_00e73678(&local_378,local_624);
        local_624 = local_370;
        if (local_378 == (uint *****)&SUB_00000002 && local_374 == (uint *****)0x0) {
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          FUN_016dd1aa(&local_900,&local_36c,0x1cc);
        }
      }
      else {
        FUN_00efd76c(&local_378);
        if (local_378 == (uint *****)0x80000005) {
          local_624 = local_374;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          local_8fc = local_370;
          local_900 = local_374;
          local_624 = local_378;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)&SUB_00000002;
        }
      }
      if (local_378 != (uint *****)0x3 || local_374 != (uint *****)0x0) {
        *puVar13 = local_378;
        param_1[4] = local_624;
        param_1[3] = local_374;
        FUN_016dd1aa(param_1 + 5,&local_900,0x1cc);
        uVar16 = 0x12;
        goto LAB_00e75dc8;
      }
    }
    goto LAB_00e743d8;
  case (uint *****)0xf:
    FUN_00f128c4(&local_628,param_2);
    if ((char)local_628 != '\x02') {
      if (((uint)local_628 & 1) == 0) {
        FUN_00e73678(&local_378,local_624);
        local_624 = local_370;
        if (local_378 == (uint *****)&SUB_00000002 && local_374 == (uint *****)0x0) {
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          FUN_016dd1aa(&local_900,&local_36c,0x1cc);
        }
      }
      else {
        FUN_00efd76c(&local_378);
        if (local_378 == (uint *****)0x80000005) {
          local_624 = local_374;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          local_8fc = local_370;
          local_900 = local_374;
          local_624 = local_378;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)&SUB_00000002;
        }
      }
      if (local_378 != (uint *****)0x3 || local_374 != (uint *****)0x0) {
        *puVar13 = local_378;
        param_1[4] = local_624;
        param_1[3] = local_374;
        FUN_016dd1aa(param_1 + 5,&local_900,0x1cc);
        uVar16 = 0x13;
        goto LAB_00e75dc8;
      }
    }
    goto LAB_00e743d8;
  case (uint *****)0x10:
    FUN_00f128c4(&local_628,param_2);
    if ((char)local_628 != '\x02') {
      if (((uint)local_628 & 1) == 0) {
        FUN_00e73678(&local_378,local_624);
        local_624 = local_370;
        if (local_378 == (uint *****)&SUB_00000002 && local_374 == (uint *****)0x0) {
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          FUN_016dd1aa(&local_900,&local_36c,0x1cc);
        }
      }
      else {
        FUN_00efd76c(&local_378);
        if (local_378 == (uint *****)0x80000005) {
          local_624 = local_374;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          local_8fc = local_370;
          local_900 = local_374;
          local_624 = local_378;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)&SUB_00000002;
        }
      }
      if (local_378 != (uint *****)0x3 || local_374 != (uint *****)0x0) {
        *puVar13 = local_378;
        param_1[4] = local_624;
        param_1[3] = local_374;
        FUN_016dd1aa(param_1 + 5,&local_900,0x1cc);
        uVar16 = 0x14;
        goto LAB_00e75dc8;
      }
    }
    goto LAB_00e743d8;
  case (uint *****)0x11:
    FUN_00f128c4(&local_628,param_2);
    if ((char)local_628 != '\x02') {
      if (((uint)local_628 & 1) == 0) {
        FUN_00e73678(&local_378,local_624);
        local_624 = local_370;
        if (local_378 == (uint *****)&SUB_00000002 && local_374 == (uint *****)0x0) {
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          FUN_016dd1aa(&local_900,&local_36c,0x1cc);
        }
      }
      else {
        FUN_00efd76c(&local_378);
        if (local_378 == (uint *****)0x80000005) {
          local_624 = local_374;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)0x3;
        }
        else {
          local_8fc = local_370;
          local_900 = local_374;
          local_624 = local_378;
          local_374 = (uint *****)0x0;
          local_378 = (uint *****)&SUB_00000002;
        }
      }
      if (local_378 != (uint *****)0x3 || local_374 != (uint *****)0x0) {
        *puVar13 = local_378;
        param_1[4] = local_624;
        param_1[3] = local_374;
        FUN_016dd1aa(param_1 + 5,&local_900,0x1cc);
        uVar16 = 0x15;
        goto LAB_00e75dc8;
      }
    }
LAB_00e743d8:
    param_1[2] = local_624;
    goto LAB_00e75dc0;
  case (uint *****)0x12:
    FUN_00f128c4(&local_900,param_2);
    pppppuVar12 = (uint *****)((uint)local_900 & 0xff);
    if (pppppuVar12 != (uint *****)&SUB_00000002) {
      if (((uint)local_900 & 1) == 0) {
        local_378 = (uint *****)0x80000005;
        local_370 = extraout_r2_02;
      }
      else {
        FUN_00efd76c(&local_378,local_8fc);
        if (local_378 == (uint *****)0x80000005) goto LAB_00e744f0;
        pppppuVar12 = local_374;
      }
      param_1[2] = local_378;
      param_1[3] = pppppuVar12;
      uVar16 = 0x16;
      param_1[4] = local_370;
      goto LAB_00e75dc8;
    }
    goto LAB_00e744ec;
  case (uint *****)0x13:
    FUN_00f128c4(&local_900,param_2);
    pppppuVar12 = (uint *****)((uint)local_900 & 0xff);
    if (pppppuVar12 != (uint *****)&SUB_00000002) {
      if (((uint)local_900 & 1) == 0) {
        local_378 = (uint *****)0x80000005;
        local_370 = extraout_r2_00;
      }
      else {
        FUN_00efd76c(&local_378,local_8fc);
        if (local_378 == (uint *****)0x80000005) goto LAB_00e744f0;
        pppppuVar12 = local_374;
      }
      param_1[2] = local_378;
      param_1[3] = pppppuVar12;
      uVar16 = 0x17;
      param_1[4] = local_370;
      goto LAB_00e75dc8;
    }
LAB_00e744ec:
    local_374 = local_8fc;
LAB_00e744f0:
    param_1[2] = local_374;
    goto LAB_00e75dc0;
  case (uint *****)0x14:
    uVar25 = 0x42f0;
    FUN_00efbe38(&local_378,param_2);
    if (local_378 == (uint *****)&DAT_00000001) goto LAB_00e73ecc;
    local_454 = local_36c;
    local_458 = local_370;
    if (local_36c != (uint *****)0x0) {
      local_624 = (uint *****)FUN_00fac4cc;
      local_628 = (uint *****)&local_458;
      FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
      local_374 = (uint *****)thunk_FUN_016d4a50(0xc);
      if (local_374 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e73d88;
    }
    pppppuVar14 = (uint *****)0x3b9aca01;
    uVar19 = extraout_r3;
    switch(local_370) {
    case (uint *****)0x0:
      FUN_00ed279c(&local_378,param_2);
      pppppuVar23 = local_370;
      local_934 = local_378;
      if (local_378 != (uint *****)0x0) {
        local_938 = local_374;
        FUN_00f1457c(&local_378,param_2);
        local_930 = local_370;
        if (local_370 != (uint *****)&DAT_3b9aca00) {
          local_92c = local_378;
          uVar19 = (undefined1)((uint)pppppuVar23 >> 0x18);
          unaff_r8 = (uint *****)((uint)pppppuVar23 >> 0x10);
          local_93c = local_374;
          pppppuVar12 = (uint *****)((uint)local_370 >> 0x18);
          unaff_r4 = (undefined1)((uint)local_370 >> 0x10);
          pppppuVar14 = (uint *****)&DAT_3b9aca00;
LAB_00e75e6c:
          uVar25 = SUB42(pppppuVar23,0);
          goto switchD_00e74904_caseD_1;
        }
        local_374 = local_378;
      }
      break;
    case (uint *****)0x1:
switchD_00e74904_caseD_1:
      param_1[4] = pppppuVar14;
      param_1[6] = local_92c;
      *(short *)(param_1 + 8) = (short)local_930;
      param_1[7] = local_93c;
      param_1[10] = local_934;
      param_1[3] = local_944;
      uVar16 = 0x18;
      param_1[0xb] = local_938;
      param_1[9] = local_940;
      *(char *)((int)param_1 + 0x23) = (char)pppppuVar12;
      *(undefined1 *)((int)param_1 + 0x22) = unaff_r4;
      param_1[5] = unaff_r9;
      *(undefined1 *)((int)param_1 + 0x33) = uVar19;
      *(char *)((int)param_1 + 0x32) = (char)unaff_r8;
      *(undefined2 *)(param_1 + 0xc) = uVar25;
      local_374 = param_2;
      goto LAB_00e73ed4;
    case (uint *****)0x2:
      FUN_00e96e84(&local_378,param_2);
      if ((short)local_378 != 1) {
        uVar25 = local_378._2_2_;
        FUN_00f16f58(&local_378,param_2);
        pppppuVar14 = local_370;
        local_93c = local_374;
        pppppuVar12 = local_378;
        local_92c = local_378;
        if (local_378 != (uint *****)&DAT_80000000) {
          local_930 = local_370;
          FUN_00e72188(&local_378,param_2);
          if ((char)local_378 == '\0') {
            unaff_r8 = (uint *****)((uint)local_378 >> 8 & 0xff);
            FUN_00ed279c(&local_378,param_2);
            local_934 = local_374;
            local_940 = local_378;
            if (local_378 != (uint *****)0x0) {
              local_938 = local_370;
              FUN_00f1457c(&local_378,param_2);
              if (local_370 != (uint *****)&DAT_3b9aca00) {
                local_944 = local_374;
                pppppuVar12 = (uint *****)((uint)pppppuVar14 >> 0x18);
                unaff_r4 = (undefined1)((uint)pppppuVar14 >> 0x10);
                local_374 = local_378;
                if (local_370 != (uint *****)&DAT_3b9aca00) {
                  uVar19 = SUB41(pppppuVar14,0);
                  pppppuVar14 = local_370;
                  param_2 = local_378;
                  goto switchD_00e74904_caseD_1;
                }
                break;
              }
              local_374 = local_378;
              goto LAB_00e75ed0;
            }
          }
          else {
LAB_00e75ed0:
            local_934 = local_374;
          }
          if (pppppuVar12 != (uint *****)0x0) {
            thunk_FUN_016d3fb4(local_93c);
          }
          local_374 = local_934;
        }
      }
      break;
    case (uint *****)0x3:
      FUN_00e96e84(&local_378,param_2);
      if ((short)local_378 != 1) {
        local_930 = (uint *****)((uint)local_378 >> 0x10);
        FUN_00f16f58(&local_378,param_2);
        pppppuVar14 = local_374;
        unaff_r9 = local_378;
        local_92c = local_374;
        if (local_378 != (uint *****)&DAT_80000000) {
          local_93c = local_370;
          pppppuVar23 = (uint *****)0xe75b48;
          FUN_00e72188(&local_378,param_2);
          if ((char)local_378 == '\0') {
            unaff_r4 = (undefined1)((uint)local_378 >> 8);
            pppppuVar14 = (uint *****)0x3b9aca03;
            uVar19 = extraout_r3_00;
            goto LAB_00e75e6c;
          }
          if (unaff_r9 != (uint *****)0x0) {
            thunk_FUN_016d3fb4(pppppuVar14);
          }
        }
      }
      break;
    default:
      local_628 = (uint *****)&DAT_0187d098;
      goto LAB_00e73e74;
    }
    goto LAB_00e73ecc;
  case (uint *****)0x15:
    FUN_00efbe38(&local_378,param_2);
    if (local_378 == (uint *****)&DAT_00000001) break;
    local_454 = local_36c;
    local_458 = local_370;
    if (local_36c == (uint *****)0x0) {
      if (local_370 < (uint *****)0x3) {
        *(char *)(param_1 + 2) = (char)local_370;
        uVar16 = 0x19;
        goto LAB_00e75dc8;
      }
      local_8f4[0] = local_36c;
      local_378 = (uint *****)&local_900;
      local_8f8 = local_370;
      local_900 = (uint *****)CONCAT31(local_900._1_3_,1);
      local_624 = (uint *****)&DAT_018ab990;
      local_628 = (uint *****)&DAT_0187d080;
      local_36c = (uint *****)&LAB_0115452c;
      local_374 = (uint *****)&LAB_01579e10;
      local_370 = (uint *****)&local_628;
      uVar16 = FUN_00e94644(&DAT_0058e458,&local_378);
      param_1[2] = uVar16;
    }
    else {
      local_624 = (uint *****)FUN_00fac4cc;
      local_628 = (uint *****)&local_458;
      FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
      puVar13 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      param_1[2] = puVar13;
      *puVar13 = local_900;
      puVar13[1] = local_8fc;
      puVar13[2] = local_8f8;
    }
    goto LAB_00e75dc0;
  case (uint *****)0x16:
    FUN_00e96e84(&local_378,param_2);
    if ((short)local_378 == 0) {
      *(undefined2 *)(param_1 + 2) = local_378._2_2_;
      uVar16 = 0x1a;
      goto LAB_00e75dc8;
    }
    break;
  case (uint *****)0x17:
    uVar16 = 0x1b;
    goto LAB_00e75dc8;
  case (uint *****)0x18:
    FUN_00efbe38(&local_378,param_2);
    if (local_378 == (uint *****)&DAT_00000001) {
LAB_00e740f0:
      pppppuVar14 = local_374;
      goto LAB_00e75dbc;
    }
    local_454 = local_36c;
    local_458 = local_370;
    if (local_36c != (uint *****)0x0) {
      local_624 = (uint *****)FUN_00fac4cc;
      local_628 = (uint *****)&local_458;
      FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
      pppppuVar14 = (uint *****)thunk_FUN_016d4a50(0xc);
      if (pppppuVar14 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      pppppuVar12 = (uint *****)&local_900;
LAB_00e74578:
      ppppuVar17 = pppppuVar12[1];
      ppppuVar18 = pppppuVar12[2];
      *pppppuVar14 = *pppppuVar12;
      pppppuVar14[1] = ppppuVar17;
      pppppuVar14[2] = ppppuVar18;
      goto LAB_00e75dbc;
    }
    switch(local_370) {
    case (uint *****)0x0:
      FUN_00efc190(&local_378,param_2);
      pppppuVar12 = extraout_r12;
      if ((char)local_378 == '\t') goto LAB_00e75464;
      local_8fc = local_360;
      iVar21 = 0;
      local_628 = local_370;
      local_624 = local_36c;
      local_620 = pppppuStack_368;
      local_900 = pppppuStack_364;
      local_8f8 = local_35c;
      pppppuVar14 = local_378;
      pppppuVar12 = local_374;
      break;
    case (uint *****)0x1:
      FUN_00efbe38(&local_378,param_2);
      pppppuVar12 = extraout_r12_01;
      if (local_378 == (uint *****)&DAT_00000001) {
LAB_00e75464:
        iVar21 = 4;
        pppppuVar14 = local_374;
        break;
      }
      local_454 = local_36c;
      local_458 = local_370;
      if (local_36c != (uint *****)0x0) {
        local_624 = (uint *****)FUN_00fac4cc;
        local_628 = (uint *****)&local_458;
        FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
        local_374 = (uint *****)thunk_FUN_016d4a50(0xc);
        pppppuVar12 = extraout_r12_02;
        if (local_374 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
LAB_00e75930:
        *local_374 = (uint ****)local_900;
        local_374[1] = (uint ****)local_8fc;
        local_374[2] = (uint ****)local_8f8;
        goto LAB_00e75464;
      }
      iVar21 = 4;
      switch(local_370) {
      case (uint *****)0x0:
        break;
      case (uint *****)0x1:
        FUN_00f182ac(&local_378,param_2);
        pppppuVar12 = extraout_r12_05;
        if (local_378 == (uint *****)0x3) {
LAB_00e76000:
          local_370 = (uint *****)&DAT_00000005;
          pppppuVar14 = local_374;
        }
        else {
          local_900 = local_374;
          local_8fc = local_370;
          local_8f8 = local_36c;
          local_370 = (uint *****)&DAT_00000001;
          pppppuVar14 = local_378;
        }
        goto LAB_00e76024;
      case (uint *****)0x2:
        local_370 = (uint *****)&SUB_00000002;
        break;
      case (uint *****)0x3:
        local_370 = (uint *****)0x3;
        break;
      case (uint *****)0x4:
        FUN_00f182ac(&local_378,param_2);
        pppppuVar12 = extraout_r12_07;
        if (local_378 == (uint *****)0x3) goto LAB_00e76000;
        local_900 = local_374;
        local_8fc = local_370;
        local_8f8 = local_36c;
        local_370 = (uint *****)&DAT_00000004;
        pppppuVar14 = local_378;
LAB_00e76024:
        param_2 = pppppuVar14;
        if (local_370 == (uint *****)&DAT_00000005) goto LAB_00e75468;
        break;
      default:
        local_628 = (uint *****)&DAT_0187d088;
LAB_00e75e28:
        local_900 = (uint *****)CONCAT31(local_900._1_3_,1);
        local_36c = (uint *****)&LAB_0115452c;
        local_374 = (uint *****)&LAB_01579e10;
        local_624 = (uint *****)&DAT_018ab990;
        local_378 = (uint *****)&local_900;
        local_8f8 = local_370;
        local_370 = (uint *****)&local_628;
        local_374 = (uint *****)FUN_00e94644(&DAT_0058e458,&local_378);
        pppppuVar12 = extraout_r12_06;
        goto LAB_00e75464;
      }
      iVar21 = 1;
      local_628 = local_900;
      local_624 = local_8fc;
      local_620 = local_8f8;
      pppppuVar14 = local_370;
      pppppuVar12 = param_2;
      break;
    case (uint *****)0x2:
      FUN_00efbe38(&local_378,param_2);
      pppppuVar12 = extraout_r12_03;
      if (local_378 == (uint *****)&DAT_00000001) goto LAB_00e75464;
      local_454 = local_36c;
      local_458 = local_370;
      if (local_36c != (uint *****)0x0) {
        local_624 = (uint *****)FUN_00fac4cc;
        local_628 = (uint *****)&local_458;
        FUN_00600d2c(&local_900,&DAT_00584bb4,&local_628);
        local_374 = (uint *****)thunk_FUN_016d4a50(0xc);
        pppppuVar12 = extraout_r12_04;
        if (local_374 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        goto LAB_00e75930;
      }
      if (local_370 == (uint *****)0x0) {
        local_378 = (uint *****)0x3;
        local_374 = extraout_r12_03;
      }
      else {
        if (local_370 != (uint *****)&DAT_00000001) {
          local_628 = (uint *****)&DAT_0187d078;
          goto LAB_00e75e28;
        }
        FUN_00f182ac(&local_378,param_2);
        if (local_378 == (uint *****)0x3) {
          iVar21 = 4;
          pppppuVar14 = local_374;
          pppppuVar12 = local_374;
          break;
        }
        local_7c = local_36c;
        local_80 = local_370;
      }
      iVar21 = 2;
      local_624 = local_7c;
      local_628 = local_80;
      pppppuVar14 = local_378;
      pppppuVar12 = local_374;
      break;
    case (uint *****)0x3:
      FUN_00efc190(&local_378,param_2);
      pppppuVar12 = extraout_r12_00;
      if ((char)local_378 == '\t') goto LAB_00e75464;
      local_8fc = local_360;
      iVar21 = 3;
      local_628 = local_370;
      local_624 = local_36c;
      local_620 = pppppuStack_368;
      local_900 = pppppuStack_364;
      local_8f8 = local_35c;
      pppppuVar14 = local_378;
      pppppuVar12 = local_374;
      break;
    default:
      local_8f8 = local_370;
      local_900 = (uint *****)CONCAT31(local_900._1_3_,1);
      local_370 = (uint *****)&local_628;
      local_378 = (uint *****)&local_900;
      local_8f4[0] = local_36c;
      local_624 = (uint *****)&DAT_018ab990;
      local_628 = (uint *****)&DAT_0187d098;
      local_36c = (uint *****)&LAB_0115452c;
      local_374 = (uint *****)&LAB_01579e10;
      pppppuVar14 = (uint *****)FUN_00e94644(&DAT_0058e458,&local_378);
      goto LAB_00e75dbc;
    }
LAB_00e75468:
    if (iVar21 != 4) {
      param_1[4] = pppppuVar12;
      param_1[7] = local_620;
      param_1[8] = local_900;
      param_1[9] = local_8fc;
      param_1[10] = local_8f8;
      uVar16 = 0x1c;
      param_1[2] = iVar21;
      param_1[3] = pppppuVar14;
      param_1[5] = local_628;
      param_1[6] = local_624;
      goto LAB_00e75dc8;
    }
LAB_00e75dbc:
    param_1[2] = pppppuVar14;
    goto LAB_00e75dc0;
  }
  param_1[2] = local_374;
LAB_00e75dc0:
  uVar16 = 0x1d;
LAB_00e75dc8:
  *param_1 = uVar16;
  param_1[1] = 0;
  return;
joined_r0x00e751e4:
  for (; pppppuVar24 != (uint *****)0x0; pppppuVar24 = (uint *****)((int)pppppuVar24 + -1)) {
    FUN_00e7a910(pppppuVar3);
    pppppuVar3 = pppppuVar3 + 0x76;
  }
  if (local_80 != (uint *****)0x0) {
    thunk_FUN_016d3fb4(pppppuVar15);
  }
LAB_00e75220:
  if (pppppuVar4 != (uint *****)0x0) {
    thunk_FUN_016d3fb4(pppppuVar7);
  }
LAB_00e75234:
  pppppuVar12 = local_88;
  puVar22 = (undefined1 *)((int)local_84 + 1);
  pppppuVar14 = local_88;
  while (puVar22 = puVar22 + -1, puVar22 != (undefined1 *)0x0) {
    FUN_00f244b0(pppppuVar14);
    pppppuVar14 = (uint *****)((int)pppppuVar14 + 0x28);
  }
  if (local_8c != (uint *****)0x0) {
    thunk_FUN_016d3fb4(pppppuVar12);
  }
LAB_00e75270:
  param_1[2] = pppppuVar23;
  goto LAB_00e75dc0;
}

