// FUN_013bec5c @ 013bec5c size=2084 calls_out=20 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013bec5c(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int unaff_r9;
  bool bVar21;
  bool bVar22;
  int local_3e8 [3];
  undefined4 *local_3dc;
  int local_3d8;
  uint local_3d4;
  int local_3d0;
  uint local_3cc;
  int local_3c8;
  undefined4 *local_3c4;
  int *local_3c0;
  int *piStack_3bc;
  int *piStack_3b8;
  int *piStack_3b4;
  int *piStack_3b0;
  int *local_3a8;
  int *piStack_3a4;
  int *piStack_3a0;
  int *piStack_39c;
  int *piStack_398;
  int *local_390;
  int *local_38c;
  uint *local_388;
  int local_384;
  undefined4 local_380;
  undefined2 local_37c;
  undefined1 local_37a;
  undefined1 local_379;
  int *local_378;
  int *local_374;
  int *local_370;
  int *local_36c;
  int *piStack_368;
  int *local_364;
  int *local_360;
  int local_35c;
  int local_358;
  int local_354;
  int *local_350;
  int *local_34c;
  int iStack_348;
  int local_344;
  undefined4 local_340;
  int local_33c;
  undefined1 uStack_338;
  undefined2 local_337;
  int *local_330;
  int *local_32c;
  int *local_328;
  int *local_324;
  int *local_320;
  int *local_31c;
  int *local_318;
  int *local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined1 local_2cb;
  undefined1 local_2ca;
  undefined1 local_2c9;
  
  local_2d0 = param_2[0x13];
  local_2cc = *(undefined1 *)(param_2 + 0x14);
  local_2cb = *(undefined1 *)((int)param_2 + 0x51);
  local_2c9 = *(undefined1 *)((int)param_2 + 0x52);
  local_3d8 = 0;
  local_3dc = (undefined4 *)&DAT_00000004;
  local_3e8[2] = 0;
  local_3cc = 0;
  local_3d0 = 4;
  local_3d4 = 0;
  local_2d4 = 0;
  local_2d8 = 1;
  local_2dc = 1;
  local_2e8 = 1;
  local_2e0 = 0;
  local_2e4 = 0;
  local_2ec = 0;
  local_2f0 = 0;
  local_2f4 = 0;
  local_2f8 = 4;
  local_2fc = 0;
  local_300 = 0;
  local_304 = 0;
  local_308 = 4;
  local_30c = 0;
  local_310 = 0;
  local_314 = (int *)0x0;
  local_318 = (int *)&DAT_00000004;
  local_31c = (int *)0x0;
  local_320 = (int *)0x0;
  local_324 = (int *)0x0;
  local_328 = (int *)&DAT_00000004;
  local_32c = (int *)0x0;
  local_330 = (int *)0x0;
  local_3e8[0] = param_3;
  local_3e8[1] = param_4;
  local_2ca = local_2cc;
  FUN_013dec94(&local_378,&local_330,param_3,param_4);
  piVar20 = local_370;
  piVar11 = local_374;
  if (local_378 == (int *)&DAT_00000022) {
    local_38c = local_370;
    local_390 = local_374;
    FUN_013c0148(&local_330);
    local_32c = piVar20;
    local_330 = piVar11;
    puVar13 = (undefined4 *)&DAT_00000004;
    if (local_3e8[2] == 0) {
      FUN_01401514(local_3e8 + 2);
      puVar13 = local_3dc;
    }
    puVar14 = local_3dc;
    *puVar13 = piVar11;
    puVar13[1] = piVar20;
    local_3d8 = 1;
    uVar2 = *(undefined1 *)(param_2 + 0x11);
    bVar21 = false;
    uVar3 = *(undefined1 *)((int)param_2 + 0x4b);
    iVar16 = 0;
    piVar11 = (int *)0x0;
    piVar20 = param_1;
LAB_013bee18:
    uVar7 = local_3cc;
    iVar19 = local_3d0;
    if (piVar11 == (int *)&DAT_00000008) {
      piVar18 = (int *)&DAT_00000008;
    }
    else {
      if (bVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893d70);
      }
      piVar18 = piVar11 + 2;
      if (iVar16 != 8) {
        local_3c4 = (undefined4 *)((int)local_3e8 + (int)piVar11);
        local_3c8 = (int)puVar14 + iVar16;
        iVar16 = iVar16 + 8;
        if (local_3c4 != (undefined4 *)0x0) {
          bVar21 = true;
          local_380 = *(undefined4 *)((int)param_2 + 0x45);
          local_388 = (uint *)&DAT_00000004;
          local_37c = *(undefined2 *)((int)param_2 + 0x49);
          local_384 = 0;
          local_38c = (int *)0x0;
          local_390 = (int *)0x0;
          local_37a = uVar3;
          local_379 = uVar2;
          FUN_013eb018(&local_330,&local_390,*local_3c4,
                       *(undefined4 *)((int)(local_3e8 + 1) + (int)piVar11),local_3c8);
          unaff_r9 = local_384;
          if (local_330 == (int *)&DAT_80000000) goto code_r0x013beefc;
          local_3a8 = local_330;
          piStack_3a4 = local_32c;
          piStack_3a0 = local_328;
          piStack_39c = local_324;
          piStack_398 = local_320;
          param_1[8] = (int)local_31c;
          param_1[9] = (int)local_318;
          param_1[10] = (int)local_314;
          param_1[0xb] = local_310;
          param_1[0xc] = local_30c;
          local_3c0 = local_330;
          piStack_3bc = local_32c;
          piStack_3b8 = local_328;
          piStack_3b4 = local_324;
          piStack_3b0 = local_320;
          param_1[3] = (int)local_330;
          param_1[4] = (int)local_32c;
          param_1[5] = (int)local_328;
          param_1[6] = (int)local_324;
          param_1[7] = (int)local_320;
          iVar16 = local_384 + 1;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0x22;
          puVar9 = local_388;
          while (iVar16 = iVar16 + -1, iVar16 != 0) {
            FUN_01362cb4(puVar9);
            puVar9 = puVar9 + 7;
          }
          if (local_38c != (int *)0x0) {
            thunk_FUN_016d3fb4(local_388);
          }
          iVar16 = 1;
          goto LAB_013bf128;
        }
        goto LAB_013bf060;
      }
    }
    local_3c4 = (undefined4 *)0x0;
LAB_013bf060:
    cVar4 = *(char *)(param_2 + 0xd);
    uVar2 = *(undefined1 *)((int)param_2 + 0x3a);
    uVar3 = *(undefined1 *)((int)param_2 + 0x3b);
    uVar5 = *(undefined1 *)(param_2 + 0xf);
    if (cVar4 != '\x03' && cVar4 != '\x02') {
      piVar18 = (int *)param_2[10];
      do {
        iVar16 = *piVar18;
        bVar21 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar21);
      *piVar18 = iVar16 + 1;
      if (iVar16 < 0) goto LAB_013bf490;
      piVar20 = (int *)param_2[0xb];
      unaff_r9 = param_2[0xc];
    }
    local_344 = CONCAT31(local_344._1_3_,cVar4);
    local_358 = param_2[8];
    local_354 = param_2[9];
    local_378 = (int *)*param_2;
    local_374 = (int *)param_2[1];
    local_370 = (int *)param_2[2];
    local_36c = (int *)param_2[3];
    piStack_368 = (int *)param_2[4];
    local_364 = (int *)param_2[5];
    local_360 = (int *)param_2[6];
    local_35c = param_2[7];
    local_33c = CONCAT31((int3)*(undefined4 *)((int)param_2 + 0x3d),uVar5);
    uStack_338 = (undefined1)((uint)*(undefined4 *)((int)param_2 + 0x3d) >> 0x18);
    local_337 = *(undefined2 *)((int)param_2 + 0x41);
    bVar22 = 0x3ffffffe < local_3cc;
    bVar21 = local_3cc == 0x3fffffff;
    uVar10 = 0;
    uVar15 = local_3cc * 4;
    if (local_3cc < 0x40000000) {
      bVar22 = 0x7ffffffb < uVar15;
      bVar21 = uVar15 == 0x7ffffffc;
    }
    local_340 = CONCAT13(uVar3,CONCAT12(uVar2,*(undefined2 *)(param_2 + 0xe)));
    local_350 = piVar18;
    local_34c = piVar20;
    iStack_348 = unaff_r9;
    if (bVar22 && !bVar21) {
LAB_013bf218:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar10,uVar15);
    }
    uVar17 = 0;
    if (uVar15 == 0) {
      piVar11 = (int *)&DAT_00000004;
      uVar6 = 0;
    }
    else {
      piVar11 = (int *)thunk_FUN_016d4a50(uVar15);
      uVar6 = uVar7;
      if (piVar11 == (int *)0x0) {
        uVar10 = 4;
        goto LAB_013bf218;
      }
    }
    if (uVar7 != 0) {
      piVar20 = piVar11;
      uVar15 = uVar7;
      do {
        *piVar20 = iVar19;
        iVar19 = iVar19 + 0x1c;
        uVar15 = uVar15 - 1;
        piVar20 = piVar20 + 1;
      } while (uVar15 != 0);
      uVar17 = uVar7;
    }
    piVar12 = (int *)FUN_013bf768(&local_378,piVar11,uVar17);
    FUN_013949cc(&local_330,piVar12,piVar11,uVar17);
    piVar18 = local_328;
    piVar20 = local_32c;
    if (local_330 == (int *)&SUB_00000002) {
      do {
        iVar16 = *local_32c;
        bVar21 = (bool)hasExclusiveAccess(local_32c);
      } while (!bVar21);
      *local_32c = iVar16 + 1;
      if (iVar16 < 0) {
LAB_013bf490:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13bf490);
        (*pcVar1)();
      }
      puVar13 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      *puVar13 = piVar20;
      puVar13[1] = piVar18;
      FUN_013bfd28(&local_330,puVar13,&DAT_01893e90);
      iVar16 = thunk_FUN_016d4a50(0x308);
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x308);
      }
      FUN_016dd1aa(iVar16,&local_330,0x308);
      local_32c = (int *)&DAT_00000001;
      local_330 = (int *)&DAT_00000001;
      local_324 = piVar18;
      local_328 = piVar20;
      local_320 = piVar12;
      puVar13 = (undefined4 *)thunk_FUN_016d4a50(0x14);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x14);
      }
      *puVar13 = local_330;
      puVar13[1] = local_32c;
      puVar13[2] = local_328;
      puVar13[3] = local_324;
      puVar13[4] = local_320;
      param_1[1] = (int)puVar13;
      param_1[2] = iVar16;
      *param_1 = 2;
    }
    else {
      param_1[3] = (int)local_324;
      param_1[4] = (int)local_320;
      param_1[5] = (int)local_31c;
      param_1[6] = (int)local_318;
      param_1[7] = (int)local_314;
      param_1[8] = local_310;
      param_1[9] = local_30c;
      param_1[10] = local_308;
      param_1[0xb] = local_304;
      param_1[0xc] = local_300;
      param_1[0xd] = local_2fc;
      param_1[0xe] = local_2f8;
      param_1[0xf] = local_2f4;
      param_1[0x10] = local_2f0;
      param_1[0x11] = local_2ec;
      *param_1 = (int)local_330;
      param_1[1] = (int)local_32c;
      param_1[2] = (int)local_328;
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar12;
        bVar21 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar21);
      *piVar12 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013bfc94(piVar12);
      }
    }
    if (uVar6 != 0) {
      thunk_FUN_016d3fb4(piVar11);
    }
    iVar16 = local_3d0;
    FUN_0135fa60(local_3d0,local_3cc);
    if (local_3d4 != 0) {
      thunk_FUN_016d3fb4(iVar16);
    }
    puVar13 = local_3dc;
    iVar16 = local_3d8 + 1;
    puVar14 = local_3dc;
    while (iVar16 = iVar16 + -1, iVar16 != 0) {
      FUN_013623c8(puVar14);
      puVar14 = puVar14 + 2;
    }
  }
  else {
    param_1[3] = (int)local_374;
    param_1[4] = (int)local_370;
    param_1[5] = (int)local_36c;
    param_1[6] = (int)piStack_368;
    param_1[7] = (int)local_364;
    param_1[8] = (int)local_360;
    param_1[9] = local_35c;
    param_1[10] = local_358;
    param_1[0xb] = local_354;
    param_1[0xc] = (int)local_350;
    param_1[0xd] = (int)local_34c;
    param_1[0xe] = iStack_348;
    param_1[0xf] = local_344;
    param_1[0x10] = local_340;
    param_1[0x11] = local_33c;
    iVar16 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = (int)local_378;
    FUN_013c0148(&local_330);
LAB_013bf128:
    iVar19 = local_3d0;
    FUN_0135fa60(local_3d0,local_3cc);
    if (local_3d4 != 0) {
      thunk_FUN_016d3fb4(iVar19);
    }
    puVar13 = local_3dc;
    iVar16 = iVar16 + 1;
    puVar14 = local_3dc;
    while (iVar16 = iVar16 + -1, iVar16 != 0) {
      FUN_013623c8(puVar14);
      puVar14 = puVar14 + 2;
    }
  }
  if (local_3e8[2] != 0) {
    thunk_FUN_016d3fb4(puVar13);
  }
  return;
code_r0x013beefc:
  local_3c0 = local_324;
  piStack_3bc = local_320;
  piStack_3b8 = local_31c;
  piStack_3b4 = local_318;
  piStack_3b0 = local_314;
  local_370 = local_324;
  local_36c = local_320;
  piStack_368 = local_31c;
  local_364 = local_318;
  local_360 = local_314;
  iVar19 = 0;
  local_374 = local_328;
  local_378 = local_32c;
  puVar9 = local_388;
  piVar20 = local_328;
  local_3a8 = local_3c0;
  piStack_3a4 = piStack_3bc;
  piStack_3a0 = piStack_3b8;
  piStack_39c = piStack_3b4;
  piStack_398 = piStack_3b0;
  while (unaff_r9 != iVar19) {
    iVar19 = iVar19 + 1;
    iVar8 = *puVar9 - 7;
    if (*puVar9 < 7) {
      iVar8 = 0;
    }
    switch(iVar8) {
    case 0:
      FUN_013e0514(puVar9);
      piVar20 = (int *)&DAT_00000018;
      FUN_0135fafc(puVar9);
LAB_013bef64:
      thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar9 + (int)piVar20));
      break;
    case 1:
    case 2:
    case 3:
      piVar20 = (int *)&DAT_00000008;
      if (puVar9[1] != 0) goto LAB_013bef64;
    }
    puVar9 = puVar9 + 7;
  }
  if (local_38c != (int *)0x0) {
    thunk_FUN_016d3fb4(local_388);
  }
  uVar7 = local_3cc;
  local_330 = local_378;
  local_32c = local_374;
  local_328 = local_370;
  local_324 = local_36c;
  local_320 = piStack_368;
  local_31c = local_364;
  local_318 = local_360;
  if (local_3cc == local_3d4) {
    FUN_01401574(&local_3d4);
  }
  puVar13 = (undefined4 *)(local_3d0 + uVar7 * 0x1c);
  *puVar13 = local_378;
  puVar13[1] = local_374;
  puVar13[2] = local_370;
  puVar13[3] = local_36c;
  puVar13[4] = piStack_368;
  puVar13[5] = local_364;
  puVar13[6] = local_360;
  local_3cc = uVar7 + 1;
  piVar11 = piVar18;
  goto LAB_013bee18;
}

