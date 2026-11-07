// FUN_00ecb47c @ 00ecb47c size=5104 calls_out=38 calls_in=0
// strings: BUG: CGMiner does not use tower middleware.ServerReflectionRequestmessage_request | response to CONNECT with nonempty body | api_logging::middleware::middleware_layeropen/utils-rs/api-logging/src/middleware/middleware_layer.rsevent open/utils-rs/api-logging/src/middleware/middleware_layer.rs:166event open/utils-rs/api-logging/src/middleware/middleware_layer.rs:201event open/utils-rs/api-logging/src/manager.rs:159 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: CGMiner does not use tower middleware.ServerReflectionRequestmessage_request

void FUN_00ecb47c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int ****ppppiVar18;
  int ****ppppiVar19;
  int *piVar20;
  int iVar21;
  int ****ppppiVar22;
  int ****ppppiVar23;
  int ****ppppiVar24;
  int ****local_480;
  int ****local_47c;
  int ****local_478;
  int ****ppppiStack_474;
  int *piStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  int ***local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  uint local_43c;
  undefined8 local_438;
  int ****local_430;
  int ****local_42c;
  undefined1 *local_428;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  int ****local_370;
  int ****local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 local_328;
  undefined4 local_324;
  int ****local_2b0;
  int ****local_2ac;
  int *local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 local_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  int ***local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  uint uStack_274;
  undefined4 local_228;
  undefined4 local_224;
  int ****local_220;
  int ****local_21c;
  int *local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int ***local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  undefined1 auStack_1e0 [80];
  int local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int ****local_110;
  int ****ppppiStack_10c;
  int ****ppppiStack_108;
  int ****local_104;
  int ****local_100;
  int ****ppppiStack_fc;
  int ****ppppiStack_f8;
  undefined4 local_f4;
  int ****local_f0;
  int ****local_ec;
  int ****local_e8;
  int ****local_e4;
  int ****local_e0;
  ushort local_ac;
  undefined4 local_a8;
  undefined *local_a4;
  undefined4 local_68;
  undefined *local_64;
  int ****local_60;
  int ****local_5c;
  undefined4 *local_58;
  int ****local_54;
  code *local_50;
  int *local_4c;
  int ****local_48;
  int ****local_44;
  int *local_40;
  int ****local_38;
  undefined4 local_34;
  int ****local_30;
  int ****local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1b0)) {
  case 0:
    piVar8 = (int *)0x0;
    *(undefined4 *)(param_2 + 0x1b2) = 0x1010100;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1b1)) {
    case 0:
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d4c500 - 1 < 2 ||
           ((DAT_01d4c500 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c4f8), cVar6 != '\0')))) &&
          (iVar7 = FUN_01aaa278(DAT_01d4c4f8), iVar7 != 0)))) {
        local_e8 = (int ****)(DAT_01d4c4f8 + 0x1c);
        local_370 = (int ****)*local_e8;
        local_36c = *(int *****)(DAT_01d4c4f8 + 0x20);
        if (local_36c == (int ****)0x0) {
LAB_00ecc864:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c18708);
        }
        local_42c = (int ****)&local_2b0;
        local_368 = *(int *)(DAT_01d4c4f8 + 0x24);
        local_364 = *(int *)(DAT_01d4c4f8 + 0x28);
        local_430 = (int ****)&local_370;
        local_f0 = (int ****)&local_430;
        piVar8 = (int *)0x0;
        local_ec = (int ****)&DAT_00000001;
        local_360 = 0;
        local_428 = &DAT_01d2ea4c;
        local_2ac = (int ****)0x57;
        local_2b0 = (int ****)0x3f2353;
        FUN_00eccf94(&local_f0);
      }
      else {
        iVar7 = DAT_01d4c4f8;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_47c = *(int *****)(DAT_01d4c4f8 + 0x14);
          local_478 = *(int *****)(DAT_01d4c4f8 + 0x18);
          local_480 = (int ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar13[3])(pcVar4,&local_480);
          if (iVar9 != 0) {
            local_2a8 = (int *)(DAT_01d4c4f8 + 0x1c);
            local_370 = (int ****)*local_2a8;
            local_36c = *(int *****)(DAT_01d4c4f8 + 0x20);
            if (local_36c == (int ****)0x0) goto LAB_00ecc864;
            local_ec = (int ****)&local_220;
            local_368 = *(int *)(DAT_01d4c4f8 + 0x24);
            local_364 = *(int *)(DAT_01d4c4f8 + 0x28);
            local_f0 = (int ****)&local_370;
            local_2b0 = (int ****)&local_f0;
            piVar8 = (int *)0x0;
            local_2ac = (int ****)&DAT_00000001;
            local_21c = (int ****)0x57;
            local_360 = 0;
            local_e8 = (int ****)&DAT_01d2ea4c;
            local_220 = (int ****)0x3f2353;
            local_430 = local_480;
            local_42c = local_47c;
            local_428 = (undefined1 *)local_478;
            FUN_01aaa328(iVar7,pcVar4,puVar13[4],&local_430,&local_2b0);
          }
        }
      }
      break;
    case 1:
      break;
    case 2:
      FUN_00ecce24(&local_370,param_2 + 0x150);
      FUN_011de718(&local_430,param_2 + 0x80,&local_370);
      if (local_430 != (int ****)&DAT_80000000) {
        FUN_00ecb43c(&local_430);
      }
      break;
    default:
      local_358 = 3;
      local_36c = (int ****)0x1;
      local_370 = (int ****)0x1;
      piVar8 = (int *)thunk_FUN_01be5118(0x1c);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x1c);
      }
      *piVar8 = (int)local_370;
      piVar8[1] = (int)local_36c;
      piVar8[2] = local_368;
      piVar8[3] = local_364;
      piVar8[4] = local_360;
      piVar8[5] = local_35c;
      piVar8[6] = local_358;
      do {
        iVar7 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar7 + 1;
      if (iVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0xecc8b4);
        (*pcVar2)();
      }
      piVar20 = (int *)FUN_00a5284c(param_2 + 0x80,piVar8);
      if (piVar20 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar20;
          bVar3 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar3);
        *piVar20 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a934a0();
        }
      }
    }
    *(undefined1 *)(param_2 + 0x1b2) = 1;
    *(undefined1 *)(param_2 + 0x1b5) = 0;
    *(int **)(param_2 + 0x1ac) = piVar8;
    FUN_01bed4e2(&local_2b0,param_2,0x90);
    uVar17 = *(undefined4 *)(param_2 + 0x18c);
    uVar10 = FUN_01a6bf28(local_228,local_224);
    FUN_01bed4e2(&local_f0,&local_2b0,0x88);
    local_64 = &DAT_01d2d874;
    local_68 = uVar10;
    FUN_00ff5838(&local_370,uVar17,&local_f0);
    FUN_01bed4e2(&local_430,&local_370,0xc0);
    FUN_01bed4e2(param_2 + 0x90,&local_430,0xc0);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c18858);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c18858);
  }
  FUN_00712ff0(&local_370,param_2 + 0x90,param_3);
  if (!(local_370 != (int ****)0x3 || local_36c != (int ****)0x0)) {
LAB_00ecbac0:
    uVar5 = 3;
    *param_1 = 3;
    param_1[1] = 0;
    goto LAB_00ecc780;
  }
  FUN_01bed4e2(&local_f0,&local_370,0x50);
  if ((*(char *)(param_2 + 0x138) == '\a') && (local_ac - 200 < 100)) {
    iVar7 = FUN_0070b374(&local_f0,&DAT_0056aa58);
    if ((iVar7 != 0) ||
       ((iVar7 = FUN_0070b374(&local_f0,&DAT_00569468), iVar7 != 0 ||
        ((**(code **)(local_a4 + 0x14))(&local_370,local_a8), local_360 != 0 || local_35c != 0)))) {
      if (((DAT_01d50f88 < 5) &&
          ((DAT_01d50ce4 - 1 < 2 ||
           ((DAT_01d50ce4 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d50cdc), cVar6 != '\0')))))) &&
         (iVar7 = FUN_01aaa278(DAT_01d50cdc), iVar7 != 0)) {
        local_40 = (int *)(DAT_01d50cdc + 0x1c);
        if (*(int *)(DAT_01d50cdc + 0x20) == 0) {
LAB_00ecc840:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2e05c);
        }
        local_2c = (int ****)&local_54;
        local_368 = *(int *)(DAT_01d50cdc + 0x24);
        local_364 = *(int *)(DAT_01d50cdc + 0x28);
        local_48 = (int ****)&local_30;
        local_360 = 0;
        local_44 = (int ****)&DAT_00000001;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_50 = (code *)0x4d;
        local_54 = (int ****)0x52fd17;
        local_370 = (int ****)*local_40;
        local_36c = (int ****)*(int *)(DAT_01d50cdc + 0x20);
        local_30 = (int ****)&local_370;
        FUN_01a8ceac(&local_48);
      }
      else {
        iVar7 = DAT_01d50cdc;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_5c = *(int *****)(DAT_01d50cdc + 0x14);
          local_58 = *(undefined4 **)(DAT_01d50cdc + 0x18);
          local_60 = (int ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar13[3])(pcVar4);
          if (iVar9 != 0) {
            local_4c = (int *)(DAT_01d50cdc + 0x1c);
            if (*(int *)(DAT_01d50cdc + 0x20) == 0) goto LAB_00ecc840;
            local_368 = *(int *)(DAT_01d50cdc + 0x24);
            local_44 = (int ****)&local_38;
            local_364 = *(int *)(DAT_01d50cdc + 0x28);
            local_54 = (int ****)&local_48;
            local_360 = 0;
            local_50 = (code *)0x1;
            local_40 = (int *)&DAT_01d2ea4c;
            local_34 = 0x4d;
            local_38 = (int ****)0x52fd17;
            local_30 = local_60;
            local_2c = local_5c;
            local_28 = local_58;
            local_370 = (int ****)*local_4c;
            local_36c = (int ****)*(int *)(DAT_01d50cdc + 0x20);
            local_48 = (int ****)&local_370;
            FUN_01aaa328(iVar7,pcVar4,puVar13[4],&local_30,&local_54);
          }
        }
      }
      FUN_00b19860(local_a8,local_a4);
LAB_00ecba84:
      local_a8 = 1;
      local_a4 = &DAT_01c07674;
    }
  }
  else if (*(char *)(param_2 + 0x14c) != '\0') {
    FUN_0070a404(&local_f0,param_2 + 0x128);
    (**(code **)(local_a4 + 0x14))(&local_370,local_a8);
    FUN_0070a550(&local_370,&local_f0);
    if (*(char *)(param_2 + 0x138) == '\x05') {
      FUN_00b19860(local_a8,local_a4);
      goto LAB_00ecba84;
    }
  }
  ppppiVar18 = local_ec;
  ppppiVar24 = local_f0;
  FUN_01bed4e2(&local_2b0,&local_e8,0x48);
  if (!(ppppiVar24 != (int ****)&DAT_00000003 || ppppiVar18 != (int ****)0x0)) goto LAB_00ecbac0;
  local_370 = ppppiVar24;
  local_36c = ppppiVar18;
  FUN_01bed4e2(&local_368,&local_2b0,0x48);
  local_438 = FUN_01a7ebb4(local_328,local_324);
  local_220 = local_2b0;
  local_21c = local_2ac;
  local_218 = local_2a8;
  uStack_214 = uStack_2a4;
  uStack_210 = uStack_2a0;
  local_20c = local_29c;
  uStack_208 = uStack_298;
  uStack_204 = uStack_294;
  uStack_200 = uStack_290;
  uStack_1fc = uStack_28c;
  local_1f8 = local_288;
  uStack_1f4 = uStack_284;
  uStack_1f0 = uStack_280;
  uStack_1ec = uStack_27c;
  uStack_1e8 = uStack_278;
  uStack_1e4 = uStack_274;
  local_480 = ppppiVar24;
  local_47c = ppppiVar18;
  local_478 = local_2b0;
  ppppiStack_474 = local_2ac;
  piStack_470 = local_2a8;
  uStack_46c = uStack_2a4;
  uStack_468 = uStack_2a0;
  ppppiVar24 = &local_1f8;
  local_464 = local_29c;
  uStack_460 = uStack_298;
  uStack_45c = uStack_294;
  uStack_458 = uStack_290;
  uStack_454 = uStack_28c;
  local_450 = local_288;
  uStack_44c = uStack_284;
  uStack_448 = uStack_280;
  uStack_444 = uStack_27c;
  local_440 = uStack_278;
  local_43c = uStack_274;
  FUN_00ebaa80(param_2 + 0x90);
  *(undefined1 *)(param_2 + 0x1b4) = 0;
  local_430 = *(int *****)(param_2 + 400);
  local_42c = *(int *****)(param_2 + 0x194);
  local_428 = *(undefined1 **)(param_2 + 0x198);
  local_424 = *(undefined4 *)(param_2 + 0x19c);
  uStack_420 = *(undefined4 *)(param_2 + 0x1a0);
  uStack_41c = *(undefined4 *)(param_2 + 0x1a4);
  uStack_418 = *(undefined4 *)(param_2 + 0x1a8);
  piVar8 = (int *)(param_2 + 0x150);
  *(undefined1 *)(param_2 + 0x1b3) = 0;
  uVar5 = *(undefined1 *)(param_2 + 0x1b1);
  local_370 = (int ****)*piVar8;
  local_36c = *(int *****)(param_2 + 0x154);
  local_368 = *(int *)(param_2 + 0x158);
  local_364 = *(undefined4 *)(param_2 + 0x15c);
  local_360 = *(undefined4 *)(param_2 + 0x160);
  local_35c = *(undefined4 *)(param_2 + 0x164);
  local_358 = *(undefined4 *)(param_2 + 0x168);
  uStack_354 = *(undefined4 *)(param_2 + 0x16c);
  uStack_350 = *(undefined4 *)(param_2 + 0x170);
  uStack_34c = *(undefined4 *)(param_2 + 0x174);
  local_348 = *(undefined4 *)(param_2 + 0x178);
  uStack_344 = *(undefined4 *)(param_2 + 0x17c);
  uStack_340 = *(undefined4 *)(param_2 + 0x180);
  uStack_33c = *(undefined4 *)(param_2 + 0x184);
  uStack_338 = *(undefined4 *)(param_2 + 0x188);
  piVar20 = *(int **)(param_2 + 0x1ac);
  *(undefined1 *)(param_2 + 0x1b2) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar5) {
  case 0:
    if (DAT_01d50f88 < 5) {
      if (DAT_01d4c50c - 1 < 2) {
LAB_00ecbc84:
        iVar7 = FUN_01aaa278(DAT_01d4c504);
        if (iVar7 != 0) {
          if (*(int *****)(DAT_01d4c504 + 0x20) == (int ****)0x0) goto LAB_00ecc880;
          local_2c = (int ****)&local_54;
          local_e8 = *(int *****)(DAT_01d4c504 + 0x24);
          local_e4 = *(int *****)(DAT_01d4c504 + 0x28);
          local_40 = (int *)(DAT_01d4c504 + 0x1c);
          local_f0 = (int ****)*local_40;
          local_30 = (int ****)&local_f0;
          local_48 = (int ****)&local_30;
          local_e0 = (int ****)0x0;
          local_44 = (int ****)&DAT_00000001;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_50 = (code *)0x57;
          local_54 = (int ****)0x3f2353;
          local_ec = *(int *****)(DAT_01d4c504 + 0x20);
          FUN_01aaaecc(DAT_01d4c504,&local_48);
          iVar7 = DAT_01d4c504;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_21c = *(int *****)(DAT_01d4c504 + 0x14);
            local_218 = *(int **)(DAT_01d4c504 + 0x18);
            local_220 = (int ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar13 = DAT_01d4edc8;
            pcVar4 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar13 = &DAT_01cfc5e0;
              pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)puVar13[3])(pcVar4,&local_220);
            if (iVar9 != 0) {
              local_2b0 = local_220;
              local_2ac = local_21c;
              local_2a8 = local_218;
              FUN_01aaa328(iVar7,pcVar4,puVar13[4],&local_2b0,&local_48);
            }
          }
          goto switchD_00ecbbb8_caseD_2;
        }
      }
      else if (DAT_01d4c50c != 0) {
        cVar6 = FUN_01aaafa8(&DAT_01d4c504);
        if (cVar6 != '\0') goto LAB_00ecbc84;
      }
    }
    iVar7 = DAT_01d4c504;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_44 = *(int *****)(DAT_01d4c504 + 0x14);
      local_40 = *(int **)(DAT_01d4c504 + 0x18);
      local_48 = (int ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar13[3])(pcVar4,&local_48);
      if (iVar9 != 0) {
        if (*(int *****)(DAT_01d4c504 + 0x20) == (int ****)0x0) {
LAB_00ecc880:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c18718);
        }
        local_21c = (int ****)&local_54;
        local_e8 = *(int *****)(DAT_01d4c504 + 0x24);
        local_e4 = *(int *****)(DAT_01d4c504 + 0x28);
        local_220 = (int ****)&local_f0;
        local_e0 = (int ****)0x0;
        local_2c = (int ****)&DAT_00000001;
        local_50 = (code *)0x57;
        local_218 = (int *)&DAT_01d2ea4c;
        local_54 = (int ****)0x3f2353;
        local_2b0 = local_48;
        local_2ac = local_44;
        local_2a8 = local_40;
        local_f0 = *(int *****)(DAT_01d4c504 + 0x1c);
        local_ec = *(int *****)(DAT_01d4c504 + 0x20);
        local_30 = (int ****)&local_220;
        local_28 = (undefined4 *)(DAT_01d4c504 + 0x1c);
        FUN_01aaa328(iVar7,pcVar4,puVar13[4],&local_2b0,&local_30);
      }
    }
  case 2:
switchD_00ecbbb8_caseD_2:
    if (piVar20 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar20;
        bVar3 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar3);
      *piVar20 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a934a0(piVar20);
      }
    }
    FUN_00ecb43c(&local_370);
    break;
  default:
    local_150 = *piVar8;
    uStack_14c = *(undefined4 *)(param_2 + 0x154);
    uStack_148 = *(undefined4 *)(param_2 + 0x158);
    uStack_144 = *(undefined4 *)(param_2 + 0x15c);
    uStack_140 = *(undefined4 *)(param_2 + 0x160);
    local_13c = *(undefined4 *)(param_2 + 0x164);
    uStack_138 = *(undefined4 *)(param_2 + 0x168);
    uStack_134 = *(undefined4 *)(param_2 + 0x16c);
    uStack_130 = *(undefined4 *)(param_2 + 0x170);
    uStack_12c = *(undefined4 *)(param_2 + 0x174);
    local_128 = *(undefined4 *)(param_2 + 0x178);
    uStack_124 = *(undefined4 *)(param_2 + 0x17c);
    uStack_120 = *(undefined4 *)(param_2 + 0x180);
    uStack_11c = *(undefined4 *)(param_2 + 0x184);
    uStack_118 = *(undefined4 *)(param_2 + 0x188);
    if ((piVar20 == (int *)0x0) || (DataMemoryBarrier(0xb), piVar20[6] != 0)) {
      local_104 = (int ****)CONCAT31(local_104._1_3_,2);
    }
    else {
      FUN_0067e188(&local_f0,piVar20 + 2);
      local_e4 = (int ****)CONCAT31(local_e4._1_3_,(char)piVar20[5]);
      local_110 = local_f0;
      ppppiStack_10c = local_ec;
      ppppiStack_108 = local_e8;
      local_104 = local_e4;
    }
    FUN_011dee18(&local_f0,local_440);
    ppppiVar18 = local_ec;
    ppppiVar24 = local_f0;
    ppppiVar23 = (int ****)(local_43c & 0xffff);
    local_38 = ppppiVar23;
    if (ppppiVar23 + -0x19 < (int ****)0x12c) {
      bVar14 = 1;
      uVar10 = 2;
      local_ec = (int ****)&DAT_00000001;
      local_f0 = (int ****)0x2;
      local_e8 = ppppiVar23;
    }
    else if (ppppiVar23 + -100 < (int ****)0xc8) {
      local_e0 = local_e8;
      local_f0 = (int ****)&DAT_00000001;
      uVar10 = 3;
      local_e4 = local_ec;
      bVar14 = 0;
      local_e8 = ppppiVar24;
      local_ec = ppppiVar23;
    }
    else {
      if (DAT_01d50f88 < 4) {
        if (1 < DAT_01d4c4f4 - 1) {
          if (DAT_01d4c4f4 != 0) {
            cVar6 = FUN_01aaafa8(&DAT_01d4c4ec);
            if (cVar6 != '\0') goto LAB_00ecbffc;
          }
          goto LAB_00ecc520;
        }
LAB_00ecbffc:
        iVar7 = FUN_01aaa278(DAT_01d4c4ec);
        if (iVar7 == 0) goto LAB_00ecc520;
        if (*(int *)(DAT_01d4c4ec + 0x20) == 0) goto LAB_00ecc89c;
        local_e8 = *(int *****)(DAT_01d4c4ec + 0x24);
        local_2ac = (int ****)&local_48;
        local_e4 = *(int *****)(DAT_01d4c4ec + 0x28);
        local_220 = (int ****)&local_2b0;
        local_21c = (int ****)&DAT_00000001;
        local_44 = (int ****)&local_30;
        local_e0 = (int ****)0x0;
        local_2a8 = (int *)&DAT_01d2ea4c;
        local_2c = (int ****)FUN_012fd02c;
        local_48 = (int ****)&DAT_0058180b;
        local_30 = (int ****)&local_38;
        local_2b0 = (int ****)&local_f0;
        local_218 = (int *)(DAT_01d4c4ec + 0x1c);
        local_f0 = (int ****)*(int ****)(DAT_01d4c4ec + 0x1c);
        local_ec = (int ****)*(int *)(DAT_01d4c4ec + 0x20);
        FUN_00ecd090(&local_220);
      }
      else {
LAB_00ecc520:
        iVar7 = DAT_01d4c4ec;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_44 = *(int *****)(DAT_01d4c4ec + 0x14);
          local_40 = *(int **)(DAT_01d4c4ec + 0x18);
          local_48 = (int ****)0x2;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar13[3])(pcVar4,&local_48);
          if (iVar9 != 0) {
            if (*(int *)(DAT_01d4c4ec + 0x20) == 0) {
LAB_00ecc89c:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c186f8);
            }
            local_21c = (int ****)&local_60;
            local_e8 = *(int *****)(DAT_01d4c4ec + 0x24);
            local_e4 = *(int *****)(DAT_01d4c4ec + 0x28);
            local_e0 = (int ****)0x0;
            local_2c = (int ****)&DAT_00000001;
            local_218 = (int *)&DAT_01d2ea4c;
            local_5c = (int ****)&local_54;
            local_60 = (int ****)&DAT_0058180b;
            local_50 = FUN_012fd02c;
            local_54 = (int ****)&local_38;
            local_2b0 = local_48;
            local_2ac = local_44;
            local_2a8 = local_40;
            local_220 = (int ****)&local_f0;
            local_f0 = (int ****)*(int ****)(DAT_01d4c4ec + 0x1c);
            local_ec = (int ****)*(int *)(DAT_01d4c4ec + 0x20);
            local_30 = (int ****)&local_220;
            local_28 = (undefined4 *)(DAT_01d4c4ec + 0x1c);
            FUN_01aaa328(iVar7,pcVar4,puVar13[4],&local_2b0,&local_30);
          }
        }
      }
      bVar14 = 1;
      local_e8 = (int ****)&DAT_80000000;
      uVar10 = 3;
      local_f0 = (int ****)&DAT_00000001;
      local_ec = ppppiVar23;
    }
    FUN_00680730(&local_430,uVar5,&local_150,&local_110,uVar10,&local_f0);
    if ((bool)(bVar14 & ppppiVar24 != (int ****)&DAT_80000000)) {
      FUN_019bb7e0(ppppiVar24,ppppiVar18);
    }
    if (piVar20 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar20;
        bVar3 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar3);
      *piVar20 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a934a0(piVar20);
      }
    }
    break;
  case 3:
  case 4:
    local_190 = *piVar8;
    uStack_18c = *(undefined4 *)(param_2 + 0x154);
    uStack_188 = *(undefined4 *)(param_2 + 0x158);
    uStack_184 = *(undefined4 *)(param_2 + 0x15c);
    uStack_180 = *(undefined4 *)(param_2 + 0x160);
    local_17c = *(undefined4 *)(param_2 + 0x164);
    uStack_178 = *(undefined4 *)(param_2 + 0x168);
    uStack_174 = *(undefined4 *)(param_2 + 0x16c);
    uStack_170 = *(undefined4 *)(param_2 + 0x170);
    uStack_16c = *(undefined4 *)(param_2 + 0x174);
    local_168 = *(undefined4 *)(param_2 + 0x178);
    uStack_164 = *(undefined4 *)(param_2 + 0x17c);
    uStack_160 = *(undefined4 *)(param_2 + 0x180);
    uStack_15c = *(undefined4 *)(param_2 + 0x184);
    uStack_158 = *(undefined4 *)(param_2 + 0x188);
    if ((piVar20 == (int *)0x0) || (DataMemoryBarrier(0xb), piVar20[6] != 0)) {
      local_f4 = CONCAT31(local_f4._1_3_,2);
    }
    else {
      FUN_0067e188(&local_f0,piVar20 + 2);
      local_e4 = (int ****)CONCAT31(local_e4._1_3_,(char)piVar20[5]);
      local_100 = local_f0;
      ppppiStack_fc = local_ec;
      ppppiStack_f8 = local_e8;
      local_f4 = local_e4;
    }
    local_f0 = (int ****)&PTR_FUN_01c186c0;
    local_ec = (int ****)0x52eda2;
    local_e8 = (int ****)&DAT_0000000c;
    local_e4 = (int ****)0x0;
    iVar7 = FUN_0160ab20(&local_480,&local_f0);
    ppppiVar18 = (int ****)&DAT_80000000;
    if (iVar7 != 0) {
      iVar21 = *(int *)(iVar7 + 4);
      iVar9 = 0;
      do {
        if (*(int *)(iVar7 + 8) == iVar9) {
          FUN_01655afc(&local_f0,iVar21,iVar21 + *(int *)(iVar7 + 8));
          ppppiVar19 = local_e8;
          ppppiVar22 = local_ec;
          ppppiVar23 = local_f0;
          if (local_f0 == (int ****)0x80000002) break;
          if (local_f0 == (int ****)0x80000001) {
            ppppiVar23 = (int ****)0x0;
            ppppiVar24 = (int ****)&DAT_00000001;
            ppppiVar22 = (int ****)0x1;
            ppppiVar19 = (int ****)0x0;
          }
          else {
            if ((int)local_e8 < 0) {
              uVar10 = 0;
LAB_00ecc218:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar10,ppppiVar19);
            }
            if (local_e8 == (int ****)0x0) {
              ppppiVar24 = (int ****)&DAT_00000001;
              ppppiVar19 = (int ****)0x0;
            }
            else {
              uVar10 = 1;
              ppppiVar24 = (int ****)FUN_01298504(local_e8,1);
              if (ppppiVar24 == (int ****)0x0) goto LAB_00ecc218;
            }
            FUN_01bed4e2(ppppiVar24,ppppiVar22,ppppiVar19);
            ppppiVar18 = ppppiVar19;
            if (ppppiVar23 == (int ****)0x80000000) break;
          }
          FUN_019bb7e0(ppppiVar23,ppppiVar22);
          ppppiVar18 = ppppiVar19;
          break;
        }
        pbVar11 = (byte *)(iVar21 + iVar9);
        iVar9 = iVar9 + 1;
      } while ((*pbVar11 == 9) || (*pbVar11 - 0x20 < 0x5f));
    }
    local_f0 = (int ****)&PTR_FUN_01c186c0;
    local_ec = (int ****)0x52ed97;
    local_e8 = (int ****)0xb;
    local_e4 = (int ****)0x0;
    iVar7 = FUN_0160ab20(&local_480,&local_f0);
    if (iVar7 != 0) {
      pbVar11 = *(byte **)(iVar7 + 4);
      uVar12 = *(uint *)(iVar7 + 8);
      uVar15 = 0;
      do {
        if (uVar12 == uVar15) {
          if (uVar12 == 0) break;
          if (uVar12 == 1) {
            bVar14 = *pbVar11;
            if ((bVar14 == 0x2b) || (bVar14 == 0x2d)) break;
          }
          else {
            bVar14 = *pbVar11;
          }
          if (bVar14 == 0x2b) {
            pbVar11 = pbVar11 + 1;
            uVar12 = uVar12 - 1;
          }
          if (8 < uVar12) {
            local_ec = (int ****)0x0;
            goto LAB_00ecc434;
          }
          if (uVar12 != 0) {
            local_ec = (int ****)0x0;
            goto LAB_00ecc24c;
          }
          break;
        }
        pbVar1 = pbVar11 + uVar15;
        uVar15 = uVar15 + 1;
      } while ((*pbVar1 == 9) || (*pbVar1 - 0x20 < 0x5f));
    }
    goto LAB_00ecc470;
  }
  goto LAB_00ecc70c;
  while( true ) {
    uVar16 = *pbVar11 - 0x30;
    local_ec = (int ****)(uVar16 + uVar15);
    if (9 < uVar16) break;
    uVar12 = uVar12 - 1;
    pbVar11 = pbVar11 + 1;
    if (CARRY4(uVar16,uVar15)) break;
LAB_00ecc434:
    if (uVar12 == 0) goto LAB_00ecc270;
    uVar15 = (uint)(ZEXT48(local_ec) * 10);
    if ((int)(ZEXT48(local_ec) * 10 >> 0x20) != 0) break;
  }
LAB_00ecc470:
  bVar14 = 1;
  uVar10 = 2;
  local_e8 = (int ****)0x0;
  local_ec = (int ****)&DAT_00000001;
  local_f0 = (int ****)0x2;
  goto LAB_00ecc488;
  while( true ) {
    pbVar11 = pbVar11 + 1;
    uVar12 = uVar12 - 1;
    local_ec = (int ****)((bVar14 - 0x30) + (int)local_ec * 10);
    if (uVar12 == 0) break;
LAB_00ecc24c:
    bVar14 = *pbVar11;
    if (9 < bVar14 - 0x30) goto LAB_00ecc470;
  }
LAB_00ecc270:
  if (local_ec == (int ****)0x0) goto LAB_00ecc470;
  bVar14 = 0;
  uVar10 = 3;
  local_f0 = (int ****)&DAT_00000001;
  local_e8 = ppppiVar18;
  local_e4 = ppppiVar24;
  local_e0 = ppppiVar18;
LAB_00ecc488:
  FUN_00680730(&local_430,uVar5,&local_190,&local_100,uVar10,&local_f0);
  if ((bool)(bVar14 & ppppiVar18 != (int ****)&DAT_80000000)) {
    FUN_019bb7e0(ppppiVar18,ppppiVar24);
  }
  if (piVar20 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar20;
      bVar3 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar3);
    *piVar20 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(piVar20);
    }
  }
LAB_00ecc70c:
  FUN_006763fc(&local_430);
  FUN_01bed4e2(auStack_1e0,&local_480,0x50);
  piVar8 = *(int **)(param_2 + 0x18c);
  *(undefined1 *)(param_2 + 0x1b2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00711acc(*(undefined4 *)(param_2 + 0x18c));
  }
  FUN_01bed4e2(param_1,auStack_1e0,0x50);
  uVar5 = 1;
LAB_00ecc780:
  *(undefined1 *)(param_2 + 0x1b0) = uVar5;
  return;
}

