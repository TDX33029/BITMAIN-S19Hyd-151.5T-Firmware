// FUN_00c36400 @ 00c36400 size=2016 calls_out=14 calls_in=0
// strings: 

void FUN_00c36400(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int unaff_r8;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar17;
  undefined4 *puVar16;
  undefined8 uVar18;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  int local_4a0;
  undefined4 local_49c;
  int local_498;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  int local_480 [2];
  int local_478;
  int local_420;
  undefined4 uStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined8 local_408;
  int local_400;
  int local_3fc;
  int local_3f8;
  undefined4 uStack_3f4;
  int iStack_3f0;
  undefined4 uStack_3ec;
  undefined1 auStack_3e8 [96];
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  undefined4 local_318;
  int local_314;
  undefined4 uStack_310;
  int iStack_30c;
  undefined1 auStack_308 [264];
  undefined1 auStack_200 [264];
  uint local_f8 [3];
  undefined4 local_ec;
  uint local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 uStack_34;
  
  puVar7 = *(undefined4 **)(param_2 + 0x28);
  puVar16 = puVar7 + *(int *)(param_2 + 0x2c) * 0x42;
  local_4a8 = 0;
  local_4b0 = 0;
  local_4b8 = 8;
  local_4ac = 8;
  while( true ) {
    iVar2 = local_4a8;
    if (puVar7 == puVar16) {
      iVar2 = *(int *)(param_2 + 0x38);
      if (iVar2 == 0) {
        if (local_4a8 == 0) {
          uVar3 = *(undefined4 *)(param_2 + 0x18);
          FUN_008dfb20(auStack_200,uVar3);
          FUN_00c36e18(&local_40,param_2,uVar3);
          FUN_008dfc14(auStack_200,&local_40);
          if (local_40 == 0) {
            local_d8 = 0;
          }
          else {
            local_e0 = local_40;
            local_f8[2] = local_40;
            local_dc = local_3c;
            local_e4 = 0;
            local_ec = local_3c;
            local_f8[1] = 0;
            local_d8 = local_38;
          }
          local_f8[0] = (uint)(local_40 != 0);
          local_e8 = local_f8[0];
          while (FUN_00c4564c(local_480,local_f8), local_480[0] != 0) {
            iVar2 = local_480[0] + local_478 * 0xc;
            if (*(int *)(iVar2 + 4) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
            }
            if (*(int *)(iVar2 + 0x88) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x8c));
            }
          }
          FUN_00d47528(local_f8,auStack_200);
          if (local_4b0 == 0) {
            FUN_00d65388(&local_4b0);
            local_4b8 = local_4ac;
          }
          FUN_016dd1aa(local_4b8,local_f8,0x98);
          local_4a8 = 1;
        }
      }
      else {
        puVar7 = *(undefined4 **)(param_2 + 0x34);
        puVar16 = puVar7;
        do {
          iVar10 = local_4a8;
          puVar17 = puVar16 + 1;
          FUN_008dfb20(auStack_308,*puVar16);
          FUN_00c36e18(&local_40,param_2,*puVar16);
          FUN_008dfc14(auStack_308,&local_40);
          if (local_40 == 0) {
            local_d8 = 0;
          }
          else {
            local_e0 = local_40;
            local_f8[2] = local_40;
            local_dc = local_3c;
            local_e4 = 0;
            local_ec = local_3c;
            local_f8[1] = 0;
            local_d8 = local_38;
          }
          local_f8[0] = (uint)(local_40 != 0);
          local_e8 = local_f8[0];
          while (FUN_00c4564c(local_480,local_f8), local_480[0] != 0) {
            iVar14 = local_480[0] + local_478 * 0xc;
            if (*(int *)(iVar14 + 4) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 8));
            }
            if (*(int *)(iVar14 + 0x88) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x8c));
            }
          }
          FUN_00d47528(local_f8,auStack_308);
          if (iVar10 == local_4b0) {
            FUN_00d65388(&local_4b0);
            local_4b8 = local_4ac;
          }
          FUN_016dd1aa(iVar10 * 0x98 + local_4b8,local_f8,0x98);
          local_4a8 = iVar10 + 1;
          puVar16 = puVar17;
        } while (puVar17 != puVar7 + iVar2);
      }
      *param_1 = local_4b0;
      param_1[1] = local_4ac;
      param_1[2] = local_4a8;
      return;
    }
    iVar14 = -0x80000000;
    uVar3 = puVar7[0x3e];
    iVar10 = -0x80000000;
    if (puVar7[0x35] != -0x80000000) {
      uVar9 = puVar7[0x36];
      iVar10 = puVar7[0x37];
      if (iVar10 == 0) {
        unaff_r8 = 1;
      }
      else {
        unaff_r8 = thunk_FUN_016d4a50(iVar10);
        if (unaff_r8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar10);
        }
      }
      FUN_016dd1aa(unaff_r8,uVar9,iVar10);
      local_4f8 = iVar10;
    }
    if (puVar7[0x38] != -0x80000000) {
      iVar14 = puVar7[0x3a];
      uVar9 = puVar7[0x39];
      if (iVar14 == 0) {
        local_4f0 = 1;
      }
      else {
        local_4f0 = thunk_FUN_016d4a50(iVar14);
        if (local_4f0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar14);
        }
      }
      FUN_016dd1aa(local_4f0,uVar9,iVar14);
    }
    iVar5 = puVar7[0x2e];
    iVar1 = 1;
    uVar9 = puVar7[0x2d];
    local_4b4 = 1;
    if ((iVar5 != 0) && (iVar1 = thunk_FUN_016d4a50(iVar5), iVar1 == 0)) break;
    FUN_016dd1aa(iVar1,uVar9);
    iVar6 = puVar7[0x31];
    uVar9 = puVar7[0x30];
    if ((iVar6 != 0) && (local_4b4 = thunk_FUN_016d4a50(iVar6), local_4b4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
    FUN_016dd1aa(local_4b4,uVar9);
    FUN_00ccd72c(local_f8,puVar7 + 10);
    iVar8 = -0x80000000;
    if (puVar7[0x3b] != -0x80000000) {
      iVar8 = puVar7[0x3d];
      uVar9 = puVar7[0x3c];
      if (iVar8 == 0) {
        local_4f4 = 1;
      }
      else {
        local_4f4 = thunk_FUN_016d4a50(iVar8);
        if (local_4f4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar8);
        }
      }
      FUN_016dd1aa(local_4f4,uVar9,iVar8);
    }
    FUN_00cce57c(&local_60,puVar7[0x33],puVar7[0x34]);
    if (puVar7[0x41] == 0) {
      local_48 = 0;
      local_50 = 0;
    }
    else {
      if (puVar7[0x3f] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_00c45038(&local_50,puVar7[0x3f],puVar7[0x40]);
    }
    iVar12 = puVar7[4];
    iVar11 = puVar7[5];
    if (iVar12 != 5 || iVar11 != 0) {
      local_40 = puVar7[6];
      local_3c = puVar7[7];
      local_38 = puVar7[8];
      uStack_34 = puVar7[9];
    }
    uVar9 = puVar7[0x22];
    uVar4 = puVar7[0x23];
    uVar15 = *puVar7;
    uVar13 = puVar7[1];
    uVar18 = *(undefined8 *)(puVar7 + 2);
    FUN_016dd1aa(local_480,local_f8,0x60);
    local_4a0 = local_50;
    local_490 = local_60;
    uStack_48c = uStack_5c;
    uStack_488 = uStack_58;
    local_49c = local_4c;
    local_420 = local_40;
    uStack_41c = local_3c;
    iStack_418 = local_38;
    uStack_414 = uStack_34;
    local_498 = local_48;
    local_3f8 = local_40;
    uStack_3f4 = local_3c;
    iStack_3f0 = local_38;
    uStack_3ec = uStack_34;
    local_410 = uVar15;
    local_40c = uVar13;
    local_408 = uVar18;
    local_400 = iVar12;
    local_3fc = iVar11;
    FUN_016dd1aa(auStack_3e8,local_480,0x60);
    local_380 = puVar7[0x24];
    uStack_37c = puVar7[0x25];
    uStack_378 = puVar7[0x26];
    uStack_374 = puVar7[0x27];
    local_370 = puVar7[0x28];
    uStack_36c = puVar7[0x29];
    uStack_368 = puVar7[0x2a];
    uStack_364 = puVar7[0x2b];
    local_348 = local_490;
    uStack_344 = uStack_48c;
    uStack_340 = uStack_488;
    local_350 = local_4b4;
    local_320 = local_4f4;
    local_334 = local_4f8;
    local_32c = local_4f0;
    local_314 = local_4a0;
    uStack_310 = local_49c;
    iStack_30c = local_498;
    local_388 = uVar9;
    local_384 = uVar4;
    local_360 = iVar5;
    local_35c = iVar1;
    local_358 = iVar5;
    local_354 = iVar6;
    local_34c = iVar6;
    local_33c = iVar10;
    local_338 = unaff_r8;
    local_330 = iVar14;
    local_328 = iVar14;
    local_324 = iVar8;
    local_31c = iVar8;
    local_318 = uVar3;
    FUN_00c36e18(&local_50,param_2);
    FUN_008dfc14(&local_410,&local_50);
    if (local_50 == 0) {
      local_d8 = 0;
    }
    else {
      local_e0 = local_50;
      local_f8[2] = local_50;
      local_dc = local_4c;
      local_e4 = 0;
      local_ec = local_4c;
      local_f8[1] = 0;
      local_d8 = local_48;
    }
    local_f8[0] = (uint)(local_50 != 0);
    puVar7 = puVar7 + 0x42;
    local_e8 = local_f8[0];
    while (FUN_00c4564c(&local_40,local_f8), local_40 != 0) {
      iVar10 = local_40 + local_38 * 0xc;
      if (*(int *)(iVar10 + 4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 8));
      }
      if (*(int *)(iVar10 + 0x88) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 0x8c));
      }
    }
    FUN_00d47528(local_f8,&local_410);
    if (iVar2 == local_4b0) {
      FUN_00d65388(&local_4b0);
      local_4b8 = local_4ac;
    }
    FUN_016dd1aa(iVar2 * 0x98 + local_4b8,local_f8,0x98);
    local_4a8 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(1,iVar5);
}

