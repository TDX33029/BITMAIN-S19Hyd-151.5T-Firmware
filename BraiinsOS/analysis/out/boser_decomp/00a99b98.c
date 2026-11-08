// FUN_00a99b98 @ 00a99b98 size=8456 calls_out=39 calls_in=0
// strings: tracing::span::active | tracing::span::active | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a99b98(undefined4 *param_1,int param_2,int *param_3)

{
  char *****pppppcVar1;
  char *****pppppcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *****pppppcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char ****ppppcVar11;
  char *****pppppcVar12;
  char *****pppppcVar13;
  char *****pppppcVar14;
  undefined1 *puVar15;
  char *****pppppcVar16;
  char *pcVar17;
  char *****pppppcVar18;
  char *****pppppcVar19;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  char *****extraout_r3_00;
  undefined *puVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint uVar25;
  char ****ppppcVar26;
  int *piVar27;
  char *****pppppcVar28;
  int *piVar29;
  undefined *puVar30;
  undefined1 uVar31;
  undefined4 uVar32;
  uint uVar33;
  bool bVar34;
  undefined8 uVar35;
  uint local_3e0;
  uint local_3dc;
  undefined *local_3c8;
  undefined *local_3c4;
  char local_38c;
  undefined1 local_38b;
  undefined *local_388;
  char *****pppppcStack_384;
  char *****pppppcStack_380;
  undefined4 *puStack_37c;
  undefined4 uStack_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  char *****local_368;
  char *****local_364;
  undefined4 *local_360;
  char *****local_35c;
  char *****local_358;
  undefined *puStack_354;
  int local_350;
  char *****local_348;
  char *****local_344;
  int *local_340;
  char *****local_33c;
  char *****local_338;
  undefined *puStack_334;
  uint local_330;
  undefined4 uStack_32c;
  char *****local_328;
  char *****local_324;
  undefined4 *local_320;
  char *****local_318;
  char *****local_314;
  undefined4 *local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  char *****local_300;
  char *****local_2fc;
  undefined4 *local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  char *****local_2e8;
  char *****local_2e4;
  undefined4 *local_2e0;
  char *****local_2d8;
  char *****local_2d4;
  undefined4 *local_2d0;
  int local_2cc [3];
  char *****local_2c0;
  char *****local_2bc;
  undefined4 *local_2b8;
  undefined4 auStack_2b4 [43];
  char *****local_208;
  char *****local_204;
  undefined4 *local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  char ****local_1e0;
  char ****local_1dc;
  char *****local_150;
  undefined4 local_14c;
  undefined4 *local_148;
  char *****local_144;
  undefined4 local_140;
  char *****local_13c;
  char *****local_138;
  char *****local_134;
  int *local_130;
  char *****local_128;
  char *****local_124;
  undefined4 *local_120;
  char *****pppppcStack_11c;
  undefined4 local_118;
  char *****local_114;
  char *****local_110;
  undefined4 *local_10c;
  char *****pppppcStack_108;
  undefined4 local_104;
  char *****local_100;
  char *****local_fc;
  int *local_f8;
  char *****local_f0;
  char *****local_ec;
  int *local_e8;
  char *****local_e0;
  char *****local_dc;
  int *local_d8;
  char *****local_d4;
  char *****local_d0;
  undefined *local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  
  iVar21 = *(int *)(param_2 + 0x310);
  iVar4 = FUN_01a63db8(iVar21);
  if (iVar4 == 0) {
    local_d0 = (char *****)FUN_01a63640(iVar21 + 8);
    local_cc = (undefined *)0x0;
    local_dc = (char *****)&DAT_00000001;
    local_d4 = (char *****)0x0;
    local_d8 = (undefined4 *)0x0;
    local_e0 = (char *****)&PTR_FUN_01cebf70;
    FUN_01386f04(param_2 + 0x228,&local_e0);
  }
  if (*(int *)(param_2 + 0x2d8) == 2) {
    local_d8 = (undefined4 *)0x2;
  }
  else {
    FUN_01aaa204(&local_e0,param_2 + 0x2d0);
  }
  local_350 = *(int *)(param_2 + 0x2e8);
  local_368 = local_e0;
  local_364 = local_dc;
  local_360 = local_d8;
  local_35c = local_d4;
  local_358 = local_d0;
  puStack_354 = local_cc;
  if (local_d8 != (undefined4 *)0x2) {
    if (((uint)local_d8 & 1) == 0) {
      pppppcVar7 = local_d4;
    }
    else {
      pppppcVar7 = (char *****)((int)local_d4 + ((int)local_d0[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_d0[0xc])(pppppcVar7,&local_368);
  }
  if ((DAT_01d51ae9 == '\0') && (local_350 != 0)) {
    local_204 = *(char ******)(local_350 + 0x10);
    local_208 = *(char ******)(local_350 + 0xc);
    local_e0 = (char *****)&local_208;
    local_dc = (char *****)&DAT_0132b6a0;
    FUN_006404a8(&local_368,"tracing::span::active",0x15,&DAT_00594cdd,&local_e0);
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50a68 - 1 < 2 ||
       ((DAT_01d50a68 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50a60), cVar3 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d50a60), iVar4 != 0)))) {
    local_d8 = (int *)(DAT_01d50a60 + 0x1c);
    local_dc = (char *****)0x0;
    local_e0 = (char *****)&SUB_00000004;
    FUN_01aaa548(&local_348,DAT_01d50a60,&local_e0);
  }
  else {
    local_c8 = DAT_01d50a60;
    local_d8 = (int *)0x2;
    if (DAT_01d51ae9 == '\0') {
      local_200 = (undefined4 *)(DAT_01d50a60 + 0x1c);
      local_204 = (char *****)0x0;
      local_208 = (char *****)&SUB_00000004;
      FUN_01aaa3e0(&local_e0,&local_208);
    }
    local_348 = local_e0;
    local_344 = local_dc;
    local_340 = local_d8;
    local_33c = local_d4;
    local_338 = local_d0;
    puStack_334 = local_cc;
    local_330 = local_c8;
    uStack_32c = uStack_c4;
  }
  if (local_340 != (int *)0x2) {
    if (((uint)local_340 & 1) == 0) {
      pppppcVar7 = local_33c;
    }
    else {
      pppppcVar7 = (char *****)((int)local_33c + ((int)local_338[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_338[0xc])(pppppcVar7,&local_348);
  }
  if ((DAT_01d51ae9 == '\0') && (local_330 != 0)) {
    local_204 = *(char ******)(local_330 + 0x10);
    local_208 = *(char ******)(local_330 + 0xc);
    local_e0 = (char *****)&local_208;
    local_dc = (char *****)&DAT_0132b6a0;
    FUN_006404a8(&local_348,"tracing::span::active",0x15,&DAT_00594cdd,&local_e0);
  }
  puVar5 = (undefined4 *)*param_3;
  iVar4 = param_2 + 0xe0;
  piVar6 = (int *)(param_2 + 0x318);
  pppppcVar7 = (char *****)(param_2 + 0x308);
  local_3c4 = &DAT_01d208a4;
  local_3c8 = &DAT_01d20a88;
LAB_00a99ec8:
  do {
    while( true ) {
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d50a74 - 1 < 2 ||
           ((DAT_01d50a74 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50a6c), cVar3 != '\0')))))) &&
         (iVar21 = FUN_01aaa278(DAT_01d50a6c), iVar21 != 0)) {
        if (*(char ******)(DAT_01d50a6c + 0x20) == (char *****)0x0) goto LAB_00a9be10;
        local_318 = (char *****)&local_300;
        local_310 = (undefined4 *)(DAT_01d50a6c + 0x1c);
        local_e0 = (char *****)*local_310;
        local_2fc = (char *****)&local_114;
        local_d8 = *(int **)(DAT_01d50a6c + 0x24);
        local_d4 = *(char ******)(DAT_01d50a6c + 0x28);
        local_d0 = (char *****)0x0;
        local_300 = (char *****)&local_e0;
        local_314 = (char *****)&DAT_00000001;
        local_2f8 = (undefined4 *)&DAT_01c173fc;
        local_114 = pppppcVar7;
        local_dc = *(char ******)(DAT_01d50a6c + 0x20);
        FUN_01aaaecc(DAT_01d50a6c,&local_318);
        iVar21 = DAT_01d50a6c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2bc = *(char ******)(DAT_01d50a6c + 0x14);
          local_2b8 = *(undefined4 **)(DAT_01d50a6c + 0x18);
          local_2c0 = (char *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar17 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar24 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar24 = &DAT_01cfc5e0;
          }
          iVar8 = (*(code *)puVar24[3])(pcVar17,&local_2c0);
          if (iVar8 != 0) {
            local_208 = local_2c0;
            local_204 = local_2bc;
            local_200 = local_2b8;
            FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_318);
          }
        }
      }
      else {
        iVar21 = DAT_01d50a6c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_324 = *(char ******)(DAT_01d50a6c + 0x14);
          local_320 = *(undefined4 **)(DAT_01d50a6c + 0x18);
          local_328 = (char *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar17 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar24 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar24 = &DAT_01cfc5e0;
          }
          iVar8 = (*(code *)puVar24[3])(pcVar17,&local_328);
          if (iVar8 != 0) {
            if (*(char ******)(DAT_01d50a6c + 0x20) == (char *****)0x0) goto LAB_00a9be10;
            local_d4 = *(char ******)(DAT_01d50a6c + 0x28);
            local_2bc = (char *****)&local_318;
            local_300 = (char *****)&local_2c0;
            local_d8 = *(int **)(DAT_01d50a6c + 0x24);
            local_d0 = (char *****)0x0;
            local_2fc = (char *****)&DAT_00000001;
            local_2b8 = (undefined4 *)&DAT_01c173fc;
            local_208 = local_328;
            local_204 = local_324;
            local_200 = local_320;
            local_318 = pppppcVar7;
            local_2f8 = (undefined4 *)(DAT_01d50a6c + 0x1c);
            local_2c0 = (char *****)&local_e0;
            local_e0 = *(char ******)(DAT_01d50a6c + 0x1c);
            local_dc = *(char ******)(DAT_01d50a6c + 0x20);
            FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_300);
          }
        }
      }
      if (*(char *)pppppcVar7 == '\0') break;
      if (*(char *)pppppcVar7 != '\x01') {
        uVar31 = *(undefined1 *)(param_2 + 0x309);
        puVar30 = *(undefined **)(param_2 + 0x30c);
        local_e0 = (char *****)*piVar6;
        local_dc = *(char ******)(param_2 + 0x31c);
        local_d8 = *(int **)(param_2 + 800);
        local_d4 = *(char ******)(param_2 + 0x324);
        local_d0 = *(char ******)(param_2 + 0x328);
        local_cc = *(undefined **)(param_2 + 0x32c);
        *(undefined4 *)(param_2 + 0x318) = 0;
        if (local_e0 == (char *****)0x0) {
          local_1fc = 0;
          local_200 = (undefined4 *)0x0;
          local_208 = (char *****)&DAT_01c0f0c0;
          local_204 = (char *****)&DAT_00000001;
          local_2c0 = (char *****)&DAT_01c0f0c0;
          local_2bc = (char *****)&DAT_00000001;
          local_2b8 = (undefined4 *)0x0;
          auStack_2b4[0] = 0;
          if (puVar30 == (undefined *)0x0) {
LAB_00a9b81c:
            cVar3 = '\x03';
          }
          else {
LAB_00a9b7b0:
            cVar3 = '\x01';
          }
          (*(code *)local_2c0[4])(auStack_2b4,local_2bc,local_2b8);
          puStack_37c = (undefined4 *)0x0;
          pppppcStack_380 = (char *****)&DAT_00000001;
          pppppcStack_384 = (char *****)&DAT_01c0f0c0;
          uStack_378 = 0;
        }
        else {
          (*(code *)*local_e0)(&local_208,&local_d4,local_dc,local_d8);
          puVar20 = local_cc;
          local_2c0 = local_208;
          local_2bc = local_204;
          local_2b8 = local_200;
          auStack_2b4[0] = local_1fc;
          if (local_e0 != (char *****)0x0) {
            (*(code *)local_e0[4])(&local_d4,local_dc,local_d8);
          }
          if (puVar30 == (undefined *)0x0) {
            if (puVar20 == (undefined *)0x0) goto LAB_00a9b81c;
          }
          else if (puVar20 == (undefined *)0x0) goto LAB_00a9b7b0;
          uVar31 = 2;
          cVar3 = '\x01';
          pppppcStack_384 = local_2c0;
          pppppcStack_380 = local_2bc;
          puStack_37c = local_2b8;
          uStack_378 = auStack_2b4[0];
          puVar30 = puVar20;
        }
        local_38c = cVar3;
        local_38b = uVar31;
        local_388 = puVar30;
        goto LAB_00a9b864;
      }
      uVar31 = *(undefined1 *)(param_2 + 0x309);
      uVar32 = *(undefined4 *)(param_2 + 0x30c);
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d50a80 - 1 < 2 ||
           ((DAT_01d50a80 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50a78), cVar3 != '\0')))))) &&
         (iVar21 = FUN_01aaa278(DAT_01d50a78), iVar21 != 0)) {
        if (*(char ******)(DAT_01d50a78 + 0x20) == (char *****)0x0) {
LAB_00a9be04:
          local_3c4 = &DAT_01d208c4;
LAB_00a9be10:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,local_3c4);
        }
        local_2fc = (char *****)&local_114;
        local_318 = (char *****)&local_300;
        local_310 = (undefined4 *)(DAT_01d50a78 + 0x1c);
        local_e0 = (char *****)*local_310;
        local_d8 = *(int **)(DAT_01d50a78 + 0x24);
        local_d4 = *(char ******)(DAT_01d50a78 + 0x28);
        local_d0 = (char *****)0x0;
        local_314 = (char *****)&DAT_00000001;
        local_2f8 = (undefined4 *)&DAT_01d2ea4c;
        local_110 = (char *****)&DAT_0000003d;
        local_114 = (char *****)0x51cb2f;
        local_300 = (char *****)&local_e0;
        local_dc = *(char ******)(DAT_01d50a78 + 0x20);
        FUN_01aaaecc(DAT_01d50a78,&local_318);
        iVar21 = DAT_01d50a78;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2bc = *(char ******)(DAT_01d50a78 + 0x14);
          local_2b8 = *(undefined4 **)(DAT_01d50a78 + 0x18);
          local_2c0 = (char *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar17 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar24 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar24 = &DAT_01cfc5e0;
          }
          iVar8 = (*(code *)puVar24[3])(pcVar17,&local_2c0);
          if (iVar8 != 0) {
            local_208 = local_2c0;
            local_204 = local_2bc;
            local_200 = local_2b8;
            FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_318);
          }
        }
      }
      else {
        iVar21 = DAT_01d50a78;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2e4 = *(char ******)(DAT_01d50a78 + 0x14);
          local_2e0 = *(undefined4 **)(DAT_01d50a78 + 0x18);
          local_2e8 = (char *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar17 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar24 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar24 = &DAT_01cfc5e0;
          }
          iVar8 = (*(code *)puVar24[3])(pcVar17,&local_2e8);
          if (iVar8 != 0) {
            if (*(char ******)(DAT_01d50a78 + 0x20) == (char *****)0x0) goto LAB_00a9be04;
            local_d4 = *(char ******)(DAT_01d50a78 + 0x28);
            local_2bc = (char *****)&local_318;
            local_300 = (char *****)&local_2c0;
            local_d8 = *(int **)(DAT_01d50a78 + 0x24);
            local_d0 = (char *****)0x0;
            local_2fc = (char *****)&DAT_00000001;
            local_2b8 = (undefined4 *)&DAT_01d2ea4c;
            local_314 = (char *****)&DAT_0000003d;
            local_318 = (char *****)0x51cb2f;
            local_208 = local_2e8;
            local_204 = local_2e4;
            local_200 = local_2e0;
            local_2f8 = (undefined4 *)(DAT_01d50a78 + 0x1c);
            local_2c0 = (char *****)&local_e0;
            local_e0 = *(char ******)(DAT_01d50a78 + 0x1c);
            local_dc = *(char ******)(DAT_01d50a78 + 0x20);
            FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_300);
          }
        }
      }
      FUN_0093ea04(&local_e0,param_2 + 0xd0,param_3);
      if ((char)local_e0 == '\x05') {
        uVar9 = 5;
        local_208 = (char *****)CONCAT31(local_208._1_3_,5);
      }
      else {
        uVar9 = (uint)local_e0 & 0xff;
        if (uVar9 == 4) {
          FUN_019dfbc4(&local_208,*(undefined4 *)(param_2 + 0xdc));
          uVar9 = (uint)local_208 & 0xff;
        }
        else {
          local_208 = local_e0;
          local_204 = local_dc;
        }
      }
      if (uVar9 == 5) goto LAB_00a9b7e4;
      if (((uint)local_208 & 0xff) != 4) {
        local_e0 = local_208;
        local_dc = local_204;
        FUN_01386464(&local_38c,&local_e0);
        goto LAB_00a9b864;
      }
      *(undefined4 *)(param_2 + 0x30c) = uVar32;
      *(undefined1 *)(param_2 + 0x309) = uVar31;
      *(undefined1 *)(param_2 + 0x308) = 2;
    }
    FUN_00a4e920(&local_300,param_2,param_3);
    if ((char)local_300 == '\x04') {
      iVar21 = *(int *)(param_2 + 0x314);
      FUN_01933ff0(&local_e0,*(int *)(param_2 + 0x310) + 8);
      pppppcVar1 = local_dc;
      if (local_e0 == (char *****)&DAT_00000001) {
        local_204 = (char *****)CONCAT31(local_204._1_3_,local_d8._0_1_);
        local_208 = local_dc;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_208,&DAT_01c0ce28,&DAT_01d206cc);
      }
      uVar9 = (uint)local_d8 & 0xff;
      FUN_01656cb0(&local_e0,iVar21 + 8);
      pppppcVar2 = local_dc;
      if (local_e0 == (char *****)&DAT_00000001) {
        local_204 = (char *****)CONCAT31(local_204._1_3_,local_d8._0_1_);
        local_208 = local_dc;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_208,&DAT_01c0ce88,&DAT_01d206ec);
      }
      uVar10 = (uint)local_d8 & 0xff;
      ppppcVar11 = pppppcVar1[0x16];
      if (((int)ppppcVar11 < (int)pppppcVar1[0x17]) &&
         (piVar29 = (int *)((int)pppppcVar1[0x17] - (int)ppppcVar11),
         (int)ppppcVar11 / 2 <= (int)piVar29)) {
        FUN_009dbe80(&local_e0,param_2,param_3);
        if ((char)local_e0 == '\x05') {
LAB_00a9b7cc:
          FUN_00a97e8c(pppppcVar2,uVar10);
          FUN_00a97e8c(pppppcVar1,uVar9);
          goto LAB_00a9b7e4;
        }
        uVar22 = (uint)local_e0 & 0xff;
        if (uVar22 == 4) {
          local_dc = (char *****)0x0;
          local_e0 = (char *****)CONCAT31(local_e0._1_3_,7);
          local_d8 = piVar29;
          cVar3 = FUN_01a8053c(iVar4,&local_e0);
          if (cVar3 != '\f') {
            puVar30 = &DAT_01d208f4;
            puVar20 = &DAT_01c0e9b0;
LAB_00a9bc78:
            local_e0 = (char *****)CONCAT31(local_e0._1_3_,cVar3);
            uVar32 = 0x1b;
            pcVar17 = "invalid WINDOW_UPDATE frame";
LAB_00a9bcb4:
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(pcVar17,uVar32,&local_e0,puVar20,puVar30);
          }
          iVar21 = FUN_013808d0(pppppcVar1 + 0x16,piVar29);
          if (iVar21 != 0) {
            puVar30 = &DAT_01d20904;
            local_e0 = (char *****)0x3;
            puVar20 = &DAT_01d20ac8;
            pcVar17 = "unexpected flow control state";
            uVar32 = 0x1d;
            goto LAB_00a9bcb4;
          }
          goto LAB_00a9a6ac;
        }
LAB_00a9ab90:
        if (uVar22 == 5) goto LAB_00a9b7cc;
        uVar25 = (uint)local_dc >> 8;
        uVar33 = (uint)local_e0 >> 8 | (int)local_dc << 0x18;
LAB_00a9abac:
        FUN_00a97e8c(pppppcVar2,uVar10);
        FUN_00a97e8c(pppppcVar1,uVar9);
        if (uVar22 != 4) {
          if (uVar22 == 5) goto LAB_00a9b7e4;
          local_e0 = (char *****)(uVar22 | uVar33 << 8);
          local_dc = (char *****)(uVar25 << 8 | uVar33 >> 0x18);
          FUN_01386464(&local_38c,&local_e0);
          goto LAB_00a9b864;
        }
      }
      else {
LAB_00a9a6ac:
        pppppcVar12 = pppppcVar1 + 2;
        pppppcVar13 = pppppcVar2 + 2;
        pppppcVar14 = pppppcVar1 + 0x56;
        while( true ) {
          FUN_009dbe80(&local_e0,param_2,param_3);
          if ((char)local_e0 == '\x05') goto LAB_00a9b7cc;
          uVar22 = (uint)local_e0 & 0xff;
          if (uVar22 != 4) goto LAB_00a9ab90;
          FUN_01368148(&local_e0,pppppcVar1 + 0x18,pppppcVar14);
          piVar29 = local_d8;
          pppppcVar28 = local_dc;
          pppppcVar16 = local_e0;
          if (local_e0 == (char *****)0x0) break;
          local_f0 = local_e0;
          local_ec = local_dc;
          local_e8 = local_d8;
          iVar21 = FUN_01367c40(local_e0[0xd],local_e0[0xe],local_dc,local_d8);
          puVar15 = *(undefined1 **)(iVar21 + 0x18);
          if (((DAT_01d50f88 == 0) &&
              ((DAT_01d50be8 - 1 < 2 ||
               ((DAT_01d50be8 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50be0), cVar3 != '\0')))))) &&
             (iVar21 = FUN_01aaa278(DAT_01d50be0), iVar21 != 0)) {
            puVar24 = (undefined4 *)(DAT_01d50be0 + 0x1c);
            if (*(char ******)(DAT_01d50be0 + 0x20) == (char *****)0x0) goto LAB_00a9be58;
            local_d4 = *(char ******)(DAT_01d50be0 + 0x28);
            local_d0 = (char *****)0x0;
            local_d8 = *(int **)(DAT_01d50be0 + 0x24);
            local_e0 = (char *****)*puVar24;
            local_dc = *(char ******)(DAT_01d50be0 + 0x20);
            iVar21 = FUN_01367c40(pppppcVar16[0xd],pppppcVar16[0xe],pppppcVar28,piVar29);
            local_134 = (char *****)&local_100;
            local_110 = (char *****)&local_138;
            local_100 = (char *****)(iVar21 + 0xd4);
            local_114 = (char *****)&local_e0;
            local_128 = (char *****)&local_114;
            local_124 = (char *****)&DAT_00000001;
            local_fc = (char *****)FUN_00b1c384;
            local_138 = (char *****)&DAT_005a20b2;
            local_10c = (undefined4 *)&DAT_01d2ea4c;
            local_120 = puVar24;
            FUN_01aaaecc(DAT_01d50be0,&local_128);
            iVar21 = DAT_01d50be0;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_2bc = *(char ******)(DAT_01d50be0 + 0x14);
              local_2b8 = *(undefined4 **)(DAT_01d50be0 + 0x18);
              local_2c0 = (char *****)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pcVar17 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar24 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar24 = &DAT_01cfc5e0;
              }
              iVar8 = (*(code *)puVar24[3])(pcVar17,&local_2c0);
              if (iVar8 != 0) {
                local_208 = local_2c0;
                local_204 = local_2bc;
                local_200 = local_2b8;
                FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_128);
              }
            }
          }
          else {
            iVar21 = DAT_01d50be0;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_124 = *(char ******)(DAT_01d50be0 + 0x14);
              local_120 = *(undefined4 **)(DAT_01d50be0 + 0x18);
              local_128 = (char *****)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pcVar17 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar24 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar24 = &DAT_01cfc5e0;
              }
              iVar8 = (*(code *)puVar24[3])(pcVar17,&local_128);
              if (iVar8 != 0) {
                puVar23 = (undefined4 *)(DAT_01d50be0 + 0x1c);
                if (*(char ******)(DAT_01d50be0 + 0x20) == (char *****)0x0) goto LAB_00a9be58;
                local_d0 = (char *****)0x0;
                local_d8 = *(int **)(DAT_01d50be0 + 0x24);
                local_d4 = *(char ******)(DAT_01d50be0 + 0x28);
                local_e0 = (char *****)*puVar23;
                local_dc = *(char ******)(DAT_01d50be0 + 0x20);
                iVar8 = FUN_01367c40(local_f0[0xd],local_f0[0xe],local_ec,local_e8);
                local_134 = (char *****)&local_100;
                local_2bc = (char *****)&local_138;
                local_100 = (char *****)(iVar8 + 0xd4);
                local_2c0 = (char *****)&local_e0;
                local_114 = (char *****)&local_2c0;
                local_110 = (char *****)&DAT_00000001;
                local_fc = (char *****)FUN_00b1c384;
                local_138 = (char *****)&DAT_005a20b2;
                local_2b8 = (undefined4 *)&DAT_01d2ea4c;
                local_208 = local_128;
                local_204 = local_124;
                local_200 = local_120;
                local_10c = puVar23;
                FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_114);
              }
            }
          }
          piVar29 = local_e8;
          pppppcVar28 = local_ec;
          pppppcVar16 = local_f0;
          iVar21 = FUN_01367c40(local_f0[0xd],local_f0[0xe],local_ec,local_e8);
          cVar3 = *(byte *)(iVar21 + 0x20) - 6;
          if (*(byte *)(iVar21 + 0x20) < 6) {
            cVar3 = '\x06';
          }
          if (cVar3 == '\x04') {
            cVar3 = *(char *)(iVar21 + 0x21);
LAB_00a9aaa8:
            if (cVar3 != '\0') {
              iVar21 = FUN_01367c40(pppppcVar16[0xd],pppppcVar16[0xe],pppppcVar28,piVar29);
              iVar8 = *(int *)(iVar21 + 0x48);
              piVar27 = (int *)(*(int *)(iVar21 + 0x4c) - iVar8);
              if ((piVar27 != (int *)0x0 && iVar8 <= *(int *)(iVar21 + 0x4c)) &&
                 (iVar8 / 2 <= (int)piVar27)) {
                iVar21 = FUN_01367c40(pppppcVar16[0xd],pppppcVar16[0xe],pppppcVar28,piVar29);
                local_dc = *(char ******)(iVar21 + 0xd4);
                local_e0 = (char *****)CONCAT31(local_e0._1_3_,7);
                local_d8 = piVar27;
                cVar3 = FUN_01a8053c(iVar4,&local_e0);
                if (cVar3 != '\f') {
                  puVar30 = &DAT_01d20a98;
                  puVar20 = &DAT_01c11a18;
                  goto LAB_00a9bc78;
                }
                iVar21 = FUN_01367cb8(pppppcVar16[0xd],pppppcVar16[0xe],pppppcVar28,piVar29);
                iVar21 = FUN_013808d0(iVar21 + 0x48,piVar27);
                if (iVar21 != 0) {
                  puVar30 = &DAT_01d20aa8;
                  local_e0 = (char *****)0x3;
                  puVar20 = &DAT_01d20ac8;
                  pcVar17 = "unexpected flow control state";
                  uVar32 = 0x1d;
                  goto LAB_00a9bcb4;
                }
              }
            }
          }
          else if (cVar3 == '\x03') {
            cVar3 = *(char *)(iVar21 + 0x22);
            goto LAB_00a9aaa8;
          }
          FUN_01387ff4(pppppcVar12,&local_f0,puVar15 != &DAT_3b9aca00);
        }
        FUN_009dbe80(&local_e0,param_2,param_3);
        uVar22 = 5;
        if ((char)local_e0 != '\x05') {
          uVar22 = (uint)local_e0 & 0xff;
          if (uVar22 == 4) {
            pppppcVar16 = pppppcVar1 + 0x3c;
            FUN_00a51cdc(pppppcVar16,pppppcVar13,pppppcVar14,param_2);
            uVar32 = *(undefined4 *)(param_2 + 0x1a0);
            puVar24 = (undefined4 *)&SUB_00000004;
            if (((DAT_01d50f88 == 0) &&
                ((DAT_01d50864 - 1 < 2 ||
                 ((DAT_01d50864 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d5085c), cVar3 != '\0')))))) &&
               (iVar21 = FUN_01aaa278(DAT_01d5085c), iVar21 != 0)) {
              if (*(char ******)(DAT_01d5085c + 0x20) == (char *****)0x0) {
LAB_00a9be4c:
                local_3c8 = &DAT_01d1e510;
LAB_00a9be58:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,local_3c8);
              }
              local_110 = (char *****)&local_f0;
              local_114 = (char *****)&local_e0;
              local_128 = (char *****)&local_114;
              local_120 = (undefined4 *)(DAT_01d5085c + 0x1c);
              local_e0 = (char *****)*local_120;
              local_d8 = *(int **)(DAT_01d5085c + 0x24);
              local_d4 = *(char ******)(DAT_01d5085c + 0x28);
              local_d0 = (char *****)0x0;
              local_124 = (char *****)&DAT_00000001;
              local_10c = (undefined4 *)&DAT_01d2ea4c;
              local_ec = (char *****)&DAT_0000001b;
              local_f0 = (char *****)0x50c8f8;
              local_dc = *(char ******)(DAT_01d5085c + 0x20);
              FUN_01aaaecc(DAT_01d5085c,&local_128);
              iVar21 = DAT_01d5085c;
              if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
                local_2bc = *(char ******)(DAT_01d5085c + 0x14);
                local_2b8 = *(undefined4 **)(DAT_01d5085c + 0x18);
                local_2c0 = (char *****)&DAT_00000005;
                DataMemoryBarrier(0xb);
                pcVar17 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar24 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar24 = &DAT_01cfc5e0;
                }
                iVar8 = (*(code *)puVar24[3])(pcVar17,&local_2c0);
                if (iVar8 != 0) {
                  local_208 = local_2c0;
                  local_204 = local_2bc;
                  local_200 = local_2b8;
                  FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_128);
                }
              }
            }
            else {
              iVar21 = DAT_01d5085c;
              if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
                local_2d4 = *(char ******)(DAT_01d5085c + 0x14);
                local_2d0 = *(undefined4 **)(DAT_01d5085c + 0x18);
                local_2d8 = (char *****)&DAT_00000005;
                DataMemoryBarrier(0xb);
                pcVar17 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                puVar24 = DAT_01d4edc8;
                if (DAT_01d51174 != 2) {
                  puVar24 = &DAT_01cfc5e0;
                }
                iVar8 = (*(code *)puVar24[3])(pcVar17,&local_2d8);
                if (iVar8 != 0) {
                  if (*(char ******)(DAT_01d5085c + 0x20) == (char *****)0x0) goto LAB_00a9be4c;
                  local_2bc = (char *****)&local_128;
                  local_2c0 = (char *****)&local_e0;
                  local_114 = (char *****)&local_2c0;
                  local_d4 = *(char ******)(DAT_01d5085c + 0x28);
                  local_d0 = (char *****)0x0;
                  local_d8 = *(int **)(DAT_01d5085c + 0x24);
                  local_110 = (char *****)&DAT_00000001;
                  local_2b8 = (undefined4 *)&DAT_01d2ea4c;
                  local_124 = (char *****)&DAT_0000001b;
                  local_128 = (char *****)0x50c8f8;
                  local_208 = local_2d8;
                  local_204 = local_2d4;
                  local_200 = local_2d0;
                  local_10c = (undefined4 *)(DAT_01d5085c + 0x1c);
                  local_e0 = *(char ******)(DAT_01d5085c + 0x1c);
                  local_dc = *(char ******)(DAT_01d5085c + 0x20);
                  FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_208,&local_114);
                }
              }
            }
            do {
              while( true ) {
                pppppcVar28 = (char *****)&local_e0;
                FUN_0136c568(local_2cc,pppppcVar16,pppppcVar14,pppppcVar12);
                if (local_2cc[0] != 0) {
                  FUN_01a83c70(pppppcVar16,local_2cc);
                  FUN_0136d86c(pppppcVar16,local_2cc);
                }
                FUN_01a6cb00(&local_2c0,pppppcVar16,pppppcVar13,pppppcVar14,uVar32,pppppcVar12);
                if ((char)local_2c0 == '\t') break;
                FUN_01bed4e2(&local_208,&local_2c0,0xb8);
                if ((DAT_01d50f88 == 0) &&
                   (((DAT_01d50870 - 1 < 2 ||
                     ((DAT_01d50870 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50868), cVar3 != '\0'))))
                    && (iVar21 = FUN_01aaa278(DAT_01d50868), iVar21 != 0)))) {
                  pppppcVar19 = *(char ******)(DAT_01d50868 + 0x20);
                  puVar23 = extraout_r2;
                  pppppcVar28 = extraout_r3_00;
                  pppppcVar18 = pppppcVar16;
                  if (pppppcVar19 != (char *****)0x0) {
                    puVar24 = *(undefined4 **)(DAT_01d50868 + 0x24);
                    pppppcVar18 = *(char ******)(DAT_01d50868 + 0x28);
                    puVar23 = (undefined4 *)(DAT_01d50868 + 0x1c);
                    pppppcVar28 = (char *****)*puVar23;
                    local_118 = 0;
                    local_140 = 0xf;
                    local_144 = (char *****)0x50c905;
                    local_128 = pppppcVar28;
                    local_124 = pppppcVar19;
                    local_120 = puVar24;
                    pppppcStack_11c = pppppcVar18;
                  }
                  if (pppppcVar19 < (char *****)0x2) {
LAB_00a9bc4c:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1e520);
                  }
                  local_d0 = (char *****)&local_13c;
                  local_d4 = (char *****)&local_114;
                  local_dc = (char *****)&local_144;
                  local_e0 = (char *****)&local_128;
                  local_104 = 1;
                  local_150 = (char *****)&local_e0;
                  local_14c = 2;
                  local_cc = &DAT_01d2dccc;
                  local_d8 = (int *)&DAT_01d2ea4c;
                  local_13c = (char *****)&local_208;
                  local_148 = puVar23;
                  local_114 = pppppcVar28;
                  local_110 = pppppcVar19;
                  local_10c = puVar24;
                  pppppcStack_108 = pppppcVar18;
                  FUN_01aaaecc(DAT_01d50868,&local_150);
                  iVar21 = DAT_01d50868;
                  if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
                    local_fc = *(char ******)(DAT_01d50868 + 0x14);
                    local_f8 = *(int **)(DAT_01d50868 + 0x18);
                    local_100 = (char *****)&DAT_00000005;
                    DataMemoryBarrier(0xb);
                    pcVar17 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    puVar24 = DAT_01d4edc8;
                    if (DAT_01d51174 != 2) {
                      puVar24 = &DAT_01cfc5e0;
                    }
                    iVar8 = (*(code *)puVar24[3])(pcVar17,&local_100);
                    if (iVar8 != 0) {
                      local_f0 = local_100;
                      local_ec = local_fc;
                      local_e8 = local_f8;
                      FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_f0,&local_150);
                    }
                  }
                }
                else {
                  iVar21 = DAT_01d50868;
                  if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
                    local_134 = *(char ******)(DAT_01d50868 + 0x14);
                    local_130 = *(int **)(DAT_01d50868 + 0x18);
                    local_138 = (char *****)&DAT_00000005;
                    DataMemoryBarrier(0xb);
                    pcVar17 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    puVar24 = DAT_01d4edc8;
                    if (DAT_01d51174 != 2) {
                      puVar24 = &DAT_01cfc5e0;
                    }
                    iVar8 = (*(code *)puVar24[3])(pcVar17,&local_138);
                    if (iVar8 != 0) {
                      pppppcVar18 = *(char ******)(DAT_01d50868 + 0x1c);
                      pppppcVar19 = *(char ******)(DAT_01d50868 + 0x20);
                      puVar23 = extraout_r3;
                      if (pppppcVar19 != (char *****)0x0) {
                        local_118 = 0;
                        puVar23 = *(undefined4 **)(DAT_01d50868 + 0x24);
                        pppppcVar28 = *(char ******)(DAT_01d50868 + 0x28);
                        local_14c = 0xf;
                        local_150 = (char *****)0x50c905;
                        local_128 = pppppcVar18;
                        local_124 = pppppcVar19;
                        local_120 = puVar23;
                        pppppcStack_11c = pppppcVar28;
                      }
                      if (pppppcVar19 < (char *****)0x2) goto LAB_00a9bc4c;
                      local_d0 = (char *****)&local_144;
                      local_d4 = (char *****)&local_114;
                      local_dc = (char *****)&local_150;
                      local_e0 = (char *****)&local_128;
                      local_100 = (char *****)&local_e0;
                      local_104 = 1;
                      local_fc = (char *****)0x2;
                      local_cc = &DAT_01d2dccc;
                      local_d8 = (int *)&DAT_01d2ea4c;
                      local_144 = (char *****)&local_208;
                      local_f0 = local_138;
                      local_ec = local_134;
                      local_e8 = local_130;
                      local_114 = pppppcVar18;
                      local_110 = pppppcVar19;
                      local_10c = puVar23;
                      pppppcStack_108 = pppppcVar28;
                      local_f8 = (int *)(DAT_01d50868 + 0x1c);
                      FUN_01aaa328(iVar21,pcVar17,puVar24[4],&local_f0,&local_100);
                    }
                  }
                }
                if ((char)local_208 == '\0') {
                  pppppcVar1[0x4b] = (char ****)0x1;
                  pppppcVar1[0x4c] = local_1e0;
                  pppppcVar1[0x4d] = local_1dc;
                }
                FUN_01bed4e2(&local_e0,&local_208,0xb8);
                cVar3 = FUN_01a8053c(iVar4,&local_e0);
                if (cVar3 != '\f') {
                  puVar30 = &DAT_01d1e530;
                  local_e0 = (char *****)CONCAT31(local_e0._1_3_,cVar3);
                  puVar20 = &DAT_01c0e9b0;
                  pcVar17 = "invalid frame";
                  uVar32 = 0xd;
                  goto LAB_00a9bcb4;
                }
                FUN_009dbe80(&local_e0,param_2,param_3);
                if ((char)local_e0 == '\x05') {
LAB_00a9b624:
                  uVar22 = 5;
                  goto LAB_00a9ae8c;
                }
                uVar22 = (uint)local_e0 & 0xff;
                if (uVar22 != 4) {
LAB_00a9b62c:
                  local_3e0 = (uint)local_e0 >> 8 | (int)local_dc << 0x18;
                  local_3dc = (uint)local_dc >> 8;
                  goto LAB_00a9ae8c;
                }
                FUN_00a51cdc(pppppcVar16,pppppcVar13,pppppcVar14,param_2);
                puVar24 = (undefined4 *)&SUB_00000004;
              }
              FUN_0093ea04(pppppcVar28,param_2 + 0xd0,param_3);
              if ((char)local_e0 == '\x05') goto LAB_00a9b624;
              uVar22 = (uint)local_e0 & 0xff;
              if (uVar22 != 4) goto LAB_00a9b62c;
              iVar21 = FUN_00a51cdc(pppppcVar16,pppppcVar13,pppppcVar14,param_2);
              puVar24 = (undefined4 *)&SUB_00000004;
            } while (iVar21 != 0);
            uVar22 = 4;
          }
          else {
            local_3e0 = (uint)local_e0 >> 8 | (int)local_dc << 0x18;
            local_3dc = (uint)local_dc >> 8;
          }
        }
LAB_00a9ae8c:
        if (uVar22 != 4) {
          uVar25 = local_3dc;
          uVar33 = local_3e0;
          if (uVar22 == 5) goto LAB_00a9b7cc;
          goto LAB_00a9abac;
        }
        uVar35 = (**(code **)*puVar5)(puVar5[1]);
        if (pppppcVar1[0x38] != (char ****)0x0) {
          (*(code *)pppppcVar1[0x38][3])(pppppcVar1[0x39]);
        }
        *(undefined8 *)(pppppcVar1 + 0x38) = uVar35;
        FUN_00a97e8c(pppppcVar2,uVar10);
        FUN_00a97e8c(pppppcVar1,uVar9);
      }
      if (*piVar6 == 0) {
        if (*(char *)(param_2 + 0x24c) == '\0') {
          bVar34 = *(int *)(param_2 + 0x228) != 0;
          iVar21 = 0;
          if (bVar34) {
            iVar21 = *(int *)(param_2 + 0x22c);
          }
          if (bVar34 && iVar21 != 0x7fffffff) goto LAB_00a9abfc;
        }
      }
      else {
LAB_00a9abfc:
        FUN_01933ff0(&local_e0,*(int *)(param_2 + 0x310) + 8);
        if (local_e0 == (char *****)&DAT_00000001) {
          local_204 = (char *****)CONCAT31(local_204._1_3_,local_d8._0_1_);
          local_208 = local_dc;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_208,&DAT_01d2cac8,&DAT_01d2c8a8);
        }
        ppppcVar11 = local_dc[5];
        ppppcVar26 = local_dc[7];
        FUN_00a97e8c(local_dc,(uint)local_d8 & 0xff);
        if (ppppcVar11 == (char ****)0x0 && ppppcVar26 == (char ****)0x0) {
          local_d0 = (char *****)FUN_01a63640(*(int *)(param_2 + 0x310) + 8);
          local_cc = (undefined *)0x0;
          local_d4 = (char *****)0x0;
          local_d8 = (int *)0x0;
          local_dc = (char *****)&DAT_00000001;
          local_e0 = (char *****)&PTR_FUN_01cebf70;
          FUN_01386f04((char *****)(param_2 + 0x228),&local_e0);
          goto LAB_00a99ec8;
        }
      }
LAB_00a9b7e4:
      local_38c = '\x04';
      goto LAB_00a9b864;
    }
    local_318 = local_300;
    local_314 = local_2fc;
    local_310 = local_2f8;
    uStack_30c = uStack_2f4;
    uStack_308 = uStack_2f0;
    uStack_304 = uStack_2ec;
    local_c8 = local_c8 & 0xffffff00;
    local_d0 = (char *****)(*(int *)(param_2 + 0x310) + 8);
    local_cc = (undefined *)(*(int *)(param_2 + 0x314) + 8);
    local_e0 = pppppcVar7;
    local_dc = (char *****)(param_2 + 0x228);
    local_d8 = piVar6;
    local_d4 = (char *****)(param_2 + 0x2f0);
    FUN_01a7cf2c(&local_208,&local_e0,&local_318);
    cVar3 = (char)local_208;
  } while ((char)local_208 == '\x03');
  FUN_01bed4e2((uint)&local_38c | 1,(uint)&local_208 | 1,0x17);
  local_38c = cVar3;
LAB_00a9b864:
  FUN_0134c39c(&local_348);
  FUN_01834abc(&local_348);
  FUN_0134c39c(&local_368);
  FUN_01834abc(&local_368);
  if (local_38c == '\x03') {
    local_e0 = (char *****)CONCAT31(local_e0._1_3_,5);
  }
  else {
    if (local_38c == '\x04') {
      local_e0 = (char *****)CONCAT31(local_e0._1_3_,6);
    }
    else {
      FUN_013b8db0(&local_e0,&local_38c);
      if ((char)local_e0 != '\x06') goto LAB_00a9bbe4;
    }
    iVar4 = FUN_01a63db8(*(undefined4 *)(param_2 + 0x310));
    if (iVar4 == 0) {
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d50c9c - 1 < 2 ||
           ((DAT_01d50c9c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50c94), cVar3 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d50c94), iVar4 != 0)))) {
        if (*(char ******)(DAT_01d50c94 + 0x20) == (char *****)0x0) {
LAB_00a9be30:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20c1c);
        }
        local_344 = (char *****)&local_300;
        local_200 = *(undefined4 **)(DAT_01d50c94 + 0x24);
        local_1fc = *(undefined4 *)(DAT_01d50c94 + 0x28);
        local_360 = (undefined4 *)(DAT_01d50c94 + 0x1c);
        local_208 = (char *****)*local_360;
        local_348 = (char *****)&local_208;
        local_1f8 = 0;
        local_364 = (char *****)&DAT_00000001;
        local_300 = (char *****)0x51ce12;
        local_340 = (int *)&DAT_01d2ea4c;
        local_2fc = (char *****)&DAT_00000055;
        local_368 = (char *****)&local_348;
        local_204 = *(char ******)(DAT_01d50c94 + 0x20);
        FUN_01aaaecc(DAT_01d50c94,&local_368);
        iVar4 = DAT_01d50c94;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2bc = *(char ******)(DAT_01d50c94 + 0x14);
          local_2b8 = *(undefined4 **)(DAT_01d50c94 + 0x18);
          local_2c0 = (char *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          if (DAT_01d51174 == 2) {
            pcVar17 = DAT_01d4edc4;
          }
          puVar5 = &DAT_01cfc5e0;
          if (DAT_01d51174 == 2) {
            puVar5 = DAT_01d4edc8;
          }
          iVar21 = (*(code *)puVar5[3])(pcVar17,&local_2c0);
          if (iVar21 != 0) {
            FUN_01aaa328(iVar4,pcVar17,puVar5[4],&local_2c0,&local_368);
          }
        }
      }
      else {
        iVar4 = DAT_01d50c94;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_370 = *(undefined4 *)(DAT_01d50c94 + 0x14);
          local_36c = *(undefined4 *)(DAT_01d50c94 + 0x18);
          local_374 = 5;
          DataMemoryBarrier(0xb);
          pcVar17 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          if (DAT_01d51174 == 2) {
            pcVar17 = DAT_01d4edc4;
          }
          puVar5 = &DAT_01cfc5e0;
          if (DAT_01d51174 == 2) {
            puVar5 = DAT_01d4edc8;
          }
          iVar21 = (*(code *)puVar5[3])(pcVar17,&local_374);
          if (iVar21 != 0) {
            if (*(char ******)(DAT_01d50c94 + 0x20) == (char *****)0x0) goto LAB_00a9be30;
            local_200 = *(undefined4 **)(DAT_01d50c94 + 0x24);
            local_1fc = *(undefined4 *)(DAT_01d50c94 + 0x28);
            local_2c0 = (char *****)&local_208;
            local_348 = (char *****)&local_2c0;
            local_1f8 = 0;
            local_344 = (char *****)&DAT_00000001;
            local_368 = (char *****)0x51ce12;
            local_2b8 = (undefined4 *)&DAT_01d2ea4c;
            local_364 = (char *****)&DAT_00000055;
            local_340 = (int *)(DAT_01d50c94 + 0x1c);
            local_2bc = (char *****)&local_368;
            local_208 = *(char ******)(DAT_01d50c94 + 0x1c);
            local_204 = *(char ******)(DAT_01d50c94 + 0x20);
            FUN_01aaa328(iVar4,pcVar17,puVar5[4],&local_374,&local_348);
          }
        }
      }
      (**(code **)(*(int *)*param_3 + 8))(((int *)*param_3)[1]);
    }
  }
LAB_00a9bbe4:
  *param_1 = local_e0;
  param_1[1] = local_dc;
  param_1[2] = local_d8;
  param_1[3] = local_d4;
  param_1[4] = local_d0;
  param_1[5] = local_cc;
  return;
}

