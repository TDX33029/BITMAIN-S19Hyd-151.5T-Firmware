// FUN_00a39010 @ 00a39010 size=2484 calls_out=28 calls_in=0
// strings: boser::advanced_settings::bosminer_provideropen/boser/boser/src/advanced_settings/bosminer_provider.rsevent open/boser/boser/src/advanced_settings/bosminer_provider.rs:107struct Configstruct MdnsConfigstruct CgminerConfigstruct FormatSection | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::advanced_settings::bosminer_provideropen/boser/boser/src/advanced_settings/bosminer_provider.rsevent open/boser/boser/src/advanced_settings/bosminer_provider.rs:107struct Configstruct MdnsConfigstruct CgminerConfigstruct FormatSection | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::advanced_settings::bosminer_provideropen/boser/boser/src/advanced_settings/bosminer_provider.rsevent open/boser/boser/src/advanced_settings/bosminer_provider.rs:107struct Configstruct MdnsConfigstruct CgminerConfigstruct FormatSection

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00a39010(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined **extraout_r1;
  undefined **extraout_r1_00;
  undefined **ppuVar16;
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint *puVar17;
  uint *puVar18;
  undefined4 **ppuVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined4 *puVar22;
  undefined4 ***pppuVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  double dVar26;
  undefined1 auStack_158 [48];
  undefined4 **local_128;
  undefined4 *local_124;
  undefined4 *puStack_120;
  undefined4 ***pppuStack_11c;
  undefined **local_118;
  uint *puStack_114;
  uint local_110;
  uint uStack_10c;
  undefined4 **local_108;
  undefined **local_104;
  uint *local_100;
  undefined4 ***local_fc;
  undefined **local_f8;
  uint *local_f4;
  uint local_f0;
  uint local_ec;
  undefined4 **local_e8;
  undefined4 *local_e4;
  undefined4 *puStack_e0;
  undefined4 ***local_dc;
  undefined **local_d8;
  uint *puStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c4;
  undefined4 **local_c0;
  undefined4 *puStack_bc;
  undefined4 local_b8;
  undefined **local_b4;
  uint *local_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  undefined4 ***local_a0;
  undefined **local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 ***local_88;
  undefined **local_84;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_6c;
  undefined4 ***local_68;
  undefined **local_64;
  undefined4 *local_60;
  uint **local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined *local_50;
  uint **local_4c;
  uint *local_48;
  undefined1 *local_44;
  
  FUN_00a35560(auStack_158,param_1);
  FUN_00b32cc8(&local_e8,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  if (local_e8 == (undefined4 **)0x0) {
    local_6c = (uint)&local_e8 | 4;
    if ((DAT_01d50f88 < 4) &&
       (((DAT_01d4b8dc - 1 < 2 ||
         ((DAT_01d4b8dc != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b8d4), cVar6 != '\0')))) &&
        (iVar7 = FUN_01aaa278(DAT_01d4b8d4), iVar7 != 0)))) {
      local_104 = *(undefined ***)(DAT_01d4b8d4 + 0x20);
      if (local_104 == (undefined **)0x0) {
LAB_00a399ac:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e304);
      }
      local_100 = *(uint **)(DAT_01d4b8d4 + 0x24);
      local_fc = *(undefined4 ****)(DAT_01d4b8d4 + 0x28);
      local_58 = &local_50;
      local_60 = (undefined4 *)(DAT_01d4b8d4 + 0x1c);
      local_108 = (undefined4 **)*local_60;
      local_5c = (uint **)&local_108;
      local_64 = (undefined **)&DAT_00000001;
      local_4c = &local_48;
      local_68 = &local_5c;
      local_48 = &local_6c;
      local_f8 = (undefined **)0x0;
      local_54 = (undefined4 *)&DAT_01d2ea4c;
      local_50 = &DAT_005806c7;
      local_44 = &LAB_0125f734;
      FUN_01aaaecc(DAT_01d4b8d4,&local_68);
      iVar7 = DAT_01d4b8d4;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_b4 = *(undefined ***)(DAT_01d4b8d4 + 0x14);
        local_b0 = *(uint **)(DAT_01d4b8d4 + 0x18);
        local_b8 = (undefined4 ***)0x2;
        DataMemoryBarrier(0xb);
        puVar9 = DAT_01d4edc8;
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar9 = &DAT_01cfc5e0;
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar9[3])(pcVar5,&local_b8);
        if (iVar8 != 0) {
          local_88 = local_b8;
          local_84 = local_b4;
          local_80 = (double)CONCAT44(local_80._4_4_,local_b0);
          FUN_01aaa328(iVar7,pcVar5,puVar9[4],&local_88,&local_68);
        }
      }
    }
    else {
      iVar7 = DAT_01d4b8d4;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_64 = *(undefined ***)(DAT_01d4b8d4 + 0x14);
        local_60 = *(undefined4 **)(DAT_01d4b8d4 + 0x18);
        local_68 = (undefined4 ***)0x2;
        DataMemoryBarrier(0xb);
        puVar9 = DAT_01d4edc8;
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar9 = &DAT_01cfc5e0;
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar9[3])(pcVar5,&local_68);
        if (iVar8 != 0) {
          local_54 = (undefined4 *)(DAT_01d4b8d4 + 0x1c);
          local_108 = (undefined4 **)*local_54;
          local_104 = *(undefined ***)(DAT_01d4b8d4 + 0x20);
          if (local_104 == (undefined **)0x0) goto LAB_00a399ac;
          local_b8 = &local_108;
          local_100 = *(uint **)(DAT_01d4b8d4 + 0x24);
          local_fc = *(undefined4 ****)(DAT_01d4b8d4 + 0x28);
          local_b4 = &local_50;
          local_5c = (uint **)&local_b8;
          local_58 = (undefined **)&DAT_00000001;
          local_4c = &local_48;
          local_f8 = (undefined **)0x0;
          local_b0 = (uint *)&DAT_01d2ea4c;
          local_50 = &DAT_005806c7;
          local_44 = &LAB_0125f734;
          local_48 = &local_6c;
          local_88 = local_68;
          local_84 = local_64;
          local_80 = (double)CONCAT44(local_80._4_4_,local_60);
          FUN_01aaa328(iVar7,pcVar5,puVar9[4],&local_88,&local_5c);
        }
      }
    }
  }
  local_108 = local_e8;
  local_104 = (undefined **)local_e4;
  local_100 = puStack_e0;
  local_fc = local_dc;
  local_f8 = local_d8;
  local_f4 = puStack_d4;
  local_f0 = uStack_d0;
  local_ec = uStack_cc;
  if (local_e8 == (undefined4 **)0x0) {
    uVar25 = thunk_FUN_01bee35a(0,0x2c0);
    puVar9 = (undefined4 *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
    if (*(char *)(puVar9 + 4) == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar9 = local_e8;
      puVar9[1] = local_e4;
      puVar9[2] = puStack_e0;
      puVar9[3] = local_dc;
      *(undefined1 *)(puVar9 + 4) = 1;
    }
    local_118 = (undefined **)*puVar9;
    puStack_114 = (uint *)puVar9[1];
    local_110 = puVar9[2];
    uStack_10c = puVar9[3];
    *puVar9 = (undefined1 *)((int)local_118 + 1);
    puVar9[1] = (undefined1 *)((int)puStack_114 + (uint)((undefined **)0xfffffffe < local_118));
    local_128 = (undefined4 **)&DAT_0056d238;
    local_124 = (undefined4 *)0x0;
    puStack_120 = (undefined4 *)0x0;
    pppuStack_11c = (undefined4 ***)0x0;
    (**(code **)*local_104)();
    ppuVar16 = extraout_r1;
    puVar17 = extraout_r2;
  }
  else {
    local_128 = local_e8;
    local_124 = local_e4;
    puStack_120 = puStack_e0;
    pppuStack_11c = local_dc;
    local_118 = local_d8;
    puStack_114 = puStack_d4;
    local_110 = uStack_d0;
    uStack_10c = uStack_cc;
    ppuVar16 = local_d8;
    puVar17 = puStack_d4;
  }
  if (param_3 != 0) {
    iVar7 = param_2 + param_3 * 0xc;
    puVar9 = (undefined4 *)((uint)&local_e8 | 4);
    do {
      uVar24 = *(undefined4 *)(param_2 + 4);
      puVar22 = *(undefined4 **)(param_2 + 8);
      uVar10 = FUN_01930380(local_118,puStack_114,local_110,uStack_10c,uVar24,puVar22);
      puVar20 = local_124;
      ppuVar19 = local_128;
      uVar15 = uVar10 >> 0x19;
      iVar8 = 0;
      param_2 = param_2 + 0xc;
      while( true ) {
        uVar10 = (uint)puVar20 & uVar10;
        uVar11 = *(uint *)((int)ppuVar19 + uVar10);
        uVar12 = uVar11 ^ uVar15 * 0x1010101;
        uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
        while (uVar12 != 0) {
          uVar13 = uVar12 >> 8;
          uVar1 = uVar12 >> 0x10;
          uVar2 = uVar12 >> 0x18;
          uVar3 = uVar12 << 0x18;
          uVar12 = uVar12 - 1 & uVar12;
          uVar13 = uVar10 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                           uVar2) >> 3) & (uint)puVar20;
          if ((puVar22 == ppuVar19[uVar13 * -10 + -8]) &&
             (iVar14 = thunk_FUN_01bed842(uVar24,ppuVar19[uVar13 * -10 + -9],puVar22), iVar14 == 0))
          {
            ppuVar19 = ppuVar19 + uVar13 * -10;
            FUN_0126f444(&local_128,ppuVar19);
            local_e8 = (undefined4 **)ppuVar19[-6];
            puVar20 = ppuVar19[-10];
            puVar22 = ppuVar19[-9];
            local_108 = (undefined4 **)ppuVar19[-5];
            local_104 = (undefined **)ppuVar19[-4];
            local_100 = ppuVar19[-3];
            local_fc = (undefined4 ***)ppuVar19[-2];
            local_f8 = (undefined **)ppuVar19[-1];
            if (local_e8 == (undefined4 **)0x9) goto LAB_00a3958c;
            *puVar9 = local_108;
            puVar9[1] = local_104;
            puVar9[2] = local_100;
            puVar9[3] = local_fc;
            puVar9[4] = local_f8;
            FUN_019bb7e0(puVar20,puVar22);
            goto LAB_00a395b8;
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        iVar8 = iVar8 + 4;
        uVar10 = uVar10 + iVar8;
      }
LAB_00a3958c:
      local_e8 = (undefined4 **)0x9;
LAB_00a395b8:
      FUN_0126e3b0(&local_e8);
      ppuVar16 = extraout_r1_00;
      puVar17 = extraout_r2_00;
    } while (param_2 != iVar7);
  }
  puVar18 = (uint *)*param_4;
  iVar7 = param_4[1];
  iVar8 = param_4[3];
  if (iVar7 == 0) {
    local_108 = (undefined4 **)0x0;
  }
  else {
    local_108 = (undefined4 **)0x8;
    puVar17 = puVar18 + iVar7 * -10 + -10;
    ppuVar16 = (undefined **)(iVar7 * 0x29 + 0x2d);
  }
  local_f0 = (int)puVar18 + iVar7 + 1;
  uVar15 = ~*puVar18 & 0x80808080;
  puVar21 = puVar18 + 1;
  local_104 = ppuVar16;
  local_100 = puVar17;
  local_fc = (undefined4 ***)puVar18;
  local_f8 = (undefined **)uVar15;
  local_f4 = puVar21;
  local_ec = iVar8;
  do {
    if (iVar8 == 0) {
      iVar8 = 0;
LAB_00a398a4:
      local_ec = iVar8;
      FUN_01ada55c(&local_108);
      iVar7 = FUN_00b3297c(&local_128,*(undefined4 *)(param_1 + 0x3c),
                           *(undefined4 *)(param_1 + 0x40));
      if (iVar7 == 0) {
        DataMemoryBarrier(0xb);
        if (DAT_01d4cdc8 == 0) {
          FUN_019e0044(&DAT_01d4cdb8);
        }
        FUN_0126f310(&local_128);
        iVar7 = 0;
      }
      else {
LAB_00a398d4:
        FUN_0126f310(&local_128);
      }
      FUN_01270b08(auStack_158);
      return iVar7;
    }
    uVar10 = uVar15;
    puVar17 = puVar21;
    if (uVar15 == 0) {
      do {
        puVar21 = puVar17 + 1;
        uVar15 = *puVar17;
        puVar18 = puVar18 + -0x28;
        puVar17 = puVar21;
      } while ((uVar15 & 0x80808080) == 0x80808080);
      uVar10 = uVar15 & 0x80808080 ^ 0x80808080;
      local_fc = (undefined4 ***)puVar18;
      local_f4 = puVar21;
    }
    iVar8 = iVar8 + -1;
    uVar15 = uVar10 - 1 & uVar10;
    uVar10 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
    uVar11 = puVar18[uVar10 * -10 + -10];
    local_e8 = (undefined4 **)puVar18[uVar10 * -10 + -9];
    local_e4 = (undefined4 *)puVar18[uVar10 * -10 + -8];
    puStack_e0 = (undefined4 *)puVar18[uVar10 * -10 + -7];
    local_dc = (undefined4 ***)puVar18[uVar10 * -10 + -6];
    local_d8 = (undefined **)puVar18[uVar10 * -10 + -5];
    puStack_d4 = (uint *)puVar18[uVar10 * -10 + -4];
    uStack_d0 = puVar18[uVar10 * -10 + -3];
    uStack_cc = puVar18[uVar10 * -10 + -2];
    uStack_c8 = puVar18[uVar10 * -10 + -1];
    local_f8 = (undefined **)uVar15;
    if (uVar11 == 0x80000000) goto LAB_00a398a4;
    local_c4 = uVar11;
    local_c0 = local_e8;
    local_b8 = local_dc;
    local_b4 = local_d8;
    local_b0 = puStack_d4;
    local_ac = uStack_d0;
    local_a8 = uStack_cc;
    uStack_a4 = uStack_c8;
    puStack_bc = local_e4;
    iVar7 = FUN_01277390(auStack_158,&local_c4);
    if (iVar7 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)(iVar7 + 0xc4) == '\x01';
    }
    uVar10 = (uint)local_b8 & 0xff;
    if (uVar10 == 1) {
      pppuVar23 = (undefined4 ***)&DAT_00000005;
      local_84 = (undefined **)CONCAT31(local_84._1_3_,local_b8._1_1_);
LAB_00a39848:
      local_88 = pppuVar23;
    }
    else {
      if (uVar10 == 2) {
        if (local_b0 == (uint *)0x0) {
          dVar26 = (double)FUN_01bf0e80(local_a8,uStack_a4);
        }
        else if (local_b0 == (uint *)&DAT_00000001) {
          dVar26 = (double)FUN_01bf0cac(local_a8,uStack_a4);
        }
        else {
          dVar26 = (double)CONCAT44(uStack_a4,local_a8);
        }
        if (bVar4) {
          uVar24 = FUN_01bf0bf8(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20));
          pppuVar23 = (undefined4 ***)&DAT_00000003;
          if (dVar26 < -9.223372036854776e+18) {
            uVar24 = 0;
          }
          if (9.223372036854775e+18 < dVar26) {
            uVar24 = 0xffffffff;
          }
          if (NAN(dVar26)) {
            uVar24 = 0;
          }
          local_80 = (double)CONCAT44(local_80._4_4_,uVar24);
        }
        else {
          pppuVar23 = (undefined4 ***)&SUB_00000004;
          local_80 = dVar26;
        }
        goto LAB_00a39848;
      }
      if (uVar10 != 3) {
        local_ec = iVar8;
        iVar7 = FUN_00667978("Unsupported value type for TOML conversion",0x2a);
        FUN_00db4764(&local_b8);
        FUN_019bb7e0(uVar11,local_c0);
        FUN_01ada55c(&local_108);
        goto LAB_00a398d4;
      }
      pppuVar23 = (undefined4 ***)0x2;
      FUN_006666fc((uint)&local_88 | 4,local_b0,local_ac);
    }
    local_98 = (undefined4)local_80;
    uStack_94 = local_80._4_4_;
    uStack_90 = uStack_78;
    uStack_8c = uStack_74;
    local_9c = local_84;
    local_a0 = pppuVar23;
    FUN_01274dcc(&local_88,&local_128,&local_c4,&local_a0);
    FUN_0126e3b0(&local_88);
    FUN_00db4764(&local_b8);
  } while( true );
}

