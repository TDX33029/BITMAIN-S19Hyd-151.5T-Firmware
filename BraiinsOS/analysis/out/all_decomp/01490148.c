// FUN_01490148 @ 01490148 size=3540 calls_out=18 calls_in=1
// strings: Ready polled after completion | TryFlatten polled after completion

/* WARNING: Removing unreachable block (ram,0x01490a6c) */
/* WARNING: Removing unreachable block (ram,0x01490a78) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01490148(uint *param_1,uint *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *unaff_r9;
  uint *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined1 local_6c8;
  undefined1 local_6c4;
  undefined1 local_6c0;
  undefined2 local_6bc;
  undefined1 local_66c;
  uint *local_658;
  uint *local_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined3 uStack_648;
  undefined2 local_640;
  undefined1 local_638;
  char cStack_637;
  undefined2 uStack_636;
  undefined2 uStack_634;
  undefined2 local_632;
  undefined1 uStack_630;
  undefined1 uStack_62f;
  undefined2 uStack_62e;
  undefined1 auStack_620 [192];
  undefined4 local_560;
  undefined3 local_55c;
  undefined1 uStack_559;
  undefined3 uStack_558;
  uint *local_550;
  undefined4 local_54c;
  undefined4 uStack_548;
  undefined1 local_544;
  int *local_4f0;
  undefined4 local_4ec;
  int *local_4e8;
  undefined4 local_4e4;
  int *local_4e0;
  undefined4 local_4dc;
  undefined1 auStack_4b4 [28];
  int *local_498;
  uint *local_490;
  uint *local_48c;
  undefined1 local_488;
  char local_487;
  undefined2 local_486;
  undefined2 uStack_484;
  undefined2 local_482;
  undefined1 uStack_480;
  undefined1 uStack_47f;
  undefined2 uStack_47e;
  undefined1 local_47c;
  undefined1 uStack_47b;
  undefined2 uStack_47a;
  uint local_478;
  uint *local_474;
  uint *puStack_470;
  uint uStack_46c;
  uint local_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  uint local_458;
  int *local_430;
  undefined4 local_42c;
  int *local_428;
  undefined4 local_424;
  int *local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  uint *local_3f4;
  uint *puStack_3f0;
  int *piStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  int *local_3d8;
  byte local_3d4;
  uint *local_3d0;
  uint *local_3cc;
  int *local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  uint *local_3bc;
  int *piStack_3b8;
  undefined4 local_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  uint uStack_3a8;
  undefined4 local_3a0;
  uint *local_39c;
  uint *local_398;
  undefined4 local_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  uint uStack_388;
  uint *local_380;
  uint *local_37c;
  undefined1 local_378;
  char cStack_377;
  undefined2 uStack_376;
  undefined1 uStack_374;
  undefined1 uStack_373;
  undefined2 uStack_372;
  undefined1 uStack_370;
  undefined1 uStack_36f;
  undefined2 uStack_36e;
  undefined1 local_36c;
  undefined1 uStack_36b;
  undefined2 uStack_36a;
  uint local_368;
  uint *puStack_364;
  uint *puStack_360;
  uint local_35c;
  uint local_358;
  uint uStack_354;
  uint uStack_350;
  uint uStack_34c;
  undefined4 local_348;
  uint *local_310;
  uint *puStack_30c;
  int *piStack_308;
  undefined4 uStack_304;
  int *local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  uint *local_2d4;
  uint *local_2d0;
  undefined1 local_2cc;
  char local_2cb;
  undefined2 local_2ca;
  uint *local_2c8;
  uint *puStack_2c4;
  int *piStack_2c0;
  undefined4 local_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  int *local_2ac;
  byte local_294;
  undefined1 local_293;
  
  uVar6 = *param_2;
  if (uVar6 == 5) {
    uVar6 = param_2[0xf];
    *(undefined1 *)(param_2 + 0xf) = 3;
    if ((char)uVar6 != '\x03') {
      uVar9 = param_2[2];
      uVar11 = param_2[3];
      uVar13 = param_2[4];
      *param_1 = param_2[1];
      param_1[1] = uVar9;
      param_1[2] = uVar11;
      param_1[3] = uVar13;
      uVar9 = param_2[6];
      uVar11 = param_2[7];
      uVar13 = param_2[8];
      uVar14 = param_2[9];
      param_1[4] = param_2[5];
      param_1[5] = uVar9;
      param_1[6] = uVar11;
      param_1[7] = uVar13;
      param_1[8] = uVar14;
      uVar9 = param_2[0xb];
      uVar11 = param_2[0xc];
      uVar13 = param_2[0xd];
      uVar14 = param_2[0xe];
      param_1[9] = param_2[10];
      param_1[10] = uVar9;
      param_1[0xb] = uVar11;
      param_1[0xc] = uVar13;
      param_1[0xd] = uVar14;
      uVar1 = *(undefined2 *)((int)param_2 + 0x3d);
      uVar10 = *(undefined1 *)((int)param_2 + 0x3f);
      *(char *)(param_1 + 0xe) = (char)uVar6;
      *(undefined1 *)((int)param_1 + 0x3b) = uVar10;
      *(undefined2 *)((int)param_1 + 0x39) = uVar1;
      return;
    }
    goto LAB_0149047c;
  }
  puVar15 = param_2 + 0x30;
  iVar8 = uVar6 - 2;
  if (uVar6 < 2) {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    bVar16 = uVar6 == 2;
    if (!bVar16) {
      uVar6 = *puVar15;
    }
    if (bVar16 || uVar6 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00409033,0x36,&DAT_018a5c6c);
    }
    if (uVar6 == 0) {
      if (param_2[0x3e] != 0x3b9aca01) {
        local_37c = (uint *)0x0;
LAB_0149054c:
        uVar6 = param_2[0x31];
        *(undefined1 *)(param_2 + 0x31) = 3;
        if ((char)uVar6 == '\x03') {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0040898e,0xe,&DAT_018a4d74);
        }
        local_490 = (uint *)CONCAT31(local_490._1_3_,(char)uVar6);
        FUN_016dd1aa((uint)&local_490 | 1,(int)param_2 + 0xc5,0x2b);
        if (param_2[0x3e] == 0x3b9aca01) {
          local_380 = local_490;
          local_37c = local_48c;
          local_378 = local_488;
          cStack_377 = local_487;
          uStack_376 = local_486;
          uStack_374 = (undefined1)uStack_484;
          uStack_373 = (undefined1)((ushort)uStack_484 >> 8);
          uStack_372 = local_482;
          uStack_370 = uStack_480;
          uStack_36f = uStack_47f;
          uStack_36e = uStack_47e;
          local_36c = local_47c;
          uStack_36b = uStack_47b;
          uStack_36a = uStack_47a;
          local_368 = local_478;
          puStack_364 = local_474;
          puStack_360 = puStack_470;
          local_35c = uStack_46c;
          local_358 = local_468;
          uVar17 = (**(code **)(param_2[0x3d] + 0x10))(param_2[0x3c],&local_380);
        }
        else {
          uVar17 = FUN_014d9a70(param_2 + 0x3c,&local_490);
        }
        FUN_01483924(puVar15);
        param_2[0x30] = 1;
        *(undefined8 *)(param_2 + 0x31) = uVar17;
        goto LAB_014905f0;
      }
      (**(code **)(param_2[0x3d] + 0xc))(&local_380,param_2[0x3c],param_3);
      cVar5 = '\x03';
      if (local_380 == (uint *)0x0) {
        if (local_37c == (uint *)0x0) goto LAB_0149054c;
        unaff_r9 = (uint *)CONCAT22(uStack_376,CONCAT11(cStack_377,local_378));
        local_654 = local_37c;
        cVar5 = '\x02';
      }
LAB_01490630:
      cVar12 = cVar5;
      if (cVar12 == '\x03') goto LAB_014902bc;
      local_658 = unaff_r9;
      uVar1 = local_6bc;
      uVar10 = local_6c0;
    }
    else {
      if (uVar6 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0040899c,0x2b,&DAT_018a4d84);
      }
LAB_014905f0:
      (**(code **)(param_2[0x32] + 0xc))(&local_380,param_2[0x31],param_3);
      uVar1 = uStack_376;
      cVar12 = cStack_377;
      uVar10 = local_378;
      local_658 = local_37c;
      cVar5 = '\x03';
      if (cStack_377 == '\x03') goto LAB_01490630;
      local_654 = local_380;
      unaff_r9 = local_37c;
      cVar5 = '\x02';
      if (cStack_377 == '\x02') goto LAB_01490630;
      FUN_01483924(puVar15);
      *puVar15 = 2;
    }
    local_398 = (uint *)CONCAT31(CONCAT21(uVar1,cVar12),uVar10);
    local_3a0 = local_654;
    local_39c = local_658;
    if (*puVar15 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
    }
    FUN_0149e188(puVar15);
    *puVar15 = 3;
    if (cVar12 == '\x02') {
      bVar16 = false;
      uVar10 = 2;
    }
    else {
      local_550 = local_398;
      if (cVar12 == '\x03') goto LAB_014902bc;
      bVar16 = true;
      uVar10 = 3;
    }
    puVar4 = local_550;
    uStack_636 = (undefined2)((uint)local_550 >> 0x10);
    local_638 = SUB41(local_550,0);
    cStack_637 = (char)((uint)local_550 >> 8);
    uStack_634 = (undefined2)local_54c;
    local_632 = (undefined2)((uint)local_54c >> 0x10);
    uStack_630 = (undefined1)uStack_548;
    uStack_62f = (undefined1)((uint)uStack_548 >> 8);
    uStack_62e = (undefined2)((uint)uStack_548 >> 0x10);
    local_640 = SUB42(local_654,0);
    if (*param_2 == 2) {
LAB_01490f24:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
    }
    FUN_016dd1aa(&local_380,param_2,0xc0);
    if (param_2[0x30] != 3) {
      FUN_0149e188(puVar15);
    }
    puVar15 = local_380;
    FUN_016dd1aa(auStack_620,(uint)&local_380 | 4,0xbc);
    *param_2 = 2;
    if (puVar15 == (uint *)&SUB_00000002) goto LAB_01490f24;
    local_560 = CONCAT22(uStack_634,uStack_636);
    uVar3 = (undefined3)((uint)uStack_548 >> 8);
    _local_55c = CONCAT13(uStack_62f,CONCAT12(uStack_630,local_632));
    uStack_558 = (undefined3)(CONCAT13(local_544,uVar3) >> 8);
    local_550 = puVar15;
    FUN_016dd1aa((uint)&local_550 | 4,auStack_620,0xbc);
    if (!bVar16) {
      uVar2 = CONCAT13(local_544,uVar3);
      FUN_0147f1b4(auStack_4b4);
      if (local_498 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *local_498;
          bVar16 = (bool)hasExclusiveAccess(local_498);
        } while (!bVar16);
        *local_498 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0149f9e0(local_498);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *local_4f0;
        bVar16 = (bool)hasExclusiveAccess(local_4f0);
      } while (!bVar16);
      *local_4f0 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_4f0,local_4ec);
      }
      if (local_4e8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *local_4e8;
          bVar16 = (bool)hasExclusiveAccess(local_4e8);
        } while (!bVar16);
        *local_4e8 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(local_4e8,local_4e4);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *local_4e0;
        bVar16 = (bool)hasExclusiveAccess(local_4e0);
      } while (!bVar16);
      *local_4e0 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_4e0,local_4dc);
      }
      uStack_376 = uStack_636;
      uStack_374 = (undefined1)local_54c;
      uStack_373 = (undefined1)((uint)local_54c >> 8);
      local_368 = CONCAT31(local_368._1_3_,2);
      cStack_377 = cStack_637;
      uStack_372 = local_632;
      uStack_370 = uStack_630;
      local_378 = local_638;
      local_380 = local_654;
      uStack_36f = uStack_62f;
      local_36c = local_544;
      local_37c = local_658;
      uStack_36e = uStack_62e;
      uStack_36b = uVar10;
      FUN_0149eb98(param_2);
      *param_2 = 4;
      local_478._0_1_ = 2;
      local_66c = 2;
      local_487 = cStack_637;
      local_488 = local_638;
      local_550 = (uint *)CONCAT22(uStack_634,uStack_636);
      local_54c = CONCAT13(uStack_62f,CONCAT12(uStack_630,local_632));
      goto LAB_014903f0;
    }
    local_490 = puVar15;
    FUN_016dd1aa((uint)&local_490 | 4,auStack_620,0xbc);
    (*(code *)local_658[10])(&local_380,local_654);
    uStack_373 = local_638;
    local_3c8 = (int *)CONCAT22(uStack_376,CONCAT11(cStack_377,local_378));
    local_3c4 = CONCAT22(uStack_372,CONCAT11(local_638,uStack_374));
    local_3a0 = local_380;
    local_39c = local_37c;
    local_398 = (uint *)local_3c8;
    local_394 = local_3c4;
    if (((uint)puVar4 & 0x100) == 0) {
      local_3d0 = local_380;
      local_3cc = local_37c;
    }
    else {
      (*(code *)local_658[0xc])(&local_3c0,local_654);
      uVar2 = local_394;
      puVar15 = local_398;
      if (local_3c0 == (uint *)0x80000001) {
        local_3d0 = local_3a0;
        local_3cc = local_39c;
        local_3c8 = (int *)local_398;
        local_3c4 = local_394;
      }
      else {
        if (local_3a0 == (uint *)0x0) {
          local_3d0 = (uint *)thunk_FUN_016d4a50(0xc);
          if (local_3d0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          *local_3d0 = (uint)local_3c0;
          local_3d0[1] = (uint)local_3bc;
          local_3d0[2] = (uint)piStack_3b8;
          local_3cc = (uint *)&DAT_018a5864;
        }
        else {
          uStack_374 = SUB41(local_3a0,0);
          uStack_373 = (undefined1)((uint)local_3a0 >> 8);
          uStack_372 = (undefined2)((uint)local_3a0 >> 0x10);
          uStack_370 = SUB41(local_39c,0);
          uStack_36f = (undefined1)((uint)local_39c >> 8);
          uStack_36e = (undefined2)((uint)local_39c >> 0x10);
          local_380 = local_3c0;
          local_37c = local_3bc;
          local_378 = SUB41(piStack_3b8,0);
          cStack_377 = (char)((uint)piStack_3b8 >> 8);
          uStack_376 = (undefined2)((uint)piStack_3b8 >> 0x10);
          local_3d0 = (uint *)thunk_FUN_016d4a50(0x14);
          if (local_3d0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x14);
          }
          *local_3d0 = (uint)local_380;
          local_3d0[1] = (uint)local_37c;
          local_3d0[2] = CONCAT22(uStack_376,CONCAT11(cStack_377,local_378));
          local_3d0[3] = CONCAT22(uStack_372,CONCAT11(uStack_373,uStack_374));
          local_3d0[4] = CONCAT22(uStack_36e,CONCAT11(uStack_36f,uStack_370));
          local_3cc = (uint *)&DAT_018a5850;
        }
        local_3c8 = (int *)puVar15;
        local_3c4 = uVar2;
      }
    }
    if ((byte)local_3c4 == 0 && local_3d4 == 0) {
      local_380 = local_3f4;
      local_37c = puStack_3f0;
      local_378 = SUB41(piStack_3ec,0);
      cStack_377 = (char)((uint)piStack_3ec >> 8);
      uStack_376 = (undefined2)((uint)piStack_3ec >> 0x10);
      local_368 = uStack_3dc;
      uStack_374 = (undefined1)local_3e8;
      uStack_373 = (undefined1)((uint)local_3e8 >> 8);
      uStack_372 = (undefined2)((uint)local_3e8 >> 0x10);
      uStack_370 = (undefined1)uStack_3e4;
      uStack_36f = (undefined1)((uint)uStack_3e4 >> 8);
      uStack_36e = (undefined2)((uint)uStack_3e4 >> 0x10);
      local_36c = (undefined1)uStack_3e0;
      uStack_36b = (undefined1)((uint)uStack_3e0 >> 8);
      uStack_36a = (undefined2)((uint)uStack_3e0 >> 0x10);
      FUN_014b2cb8(&local_3a0,&local_3d8,&local_380,1);
      FUN_0147f1b4(&local_380);
      if ((char)local_3a0 != '\x03') {
        local_380 = local_3a0;
        local_37c = local_39c;
        local_378 = SUB41(local_398,0);
        cStack_377 = (char)((uint)local_398 >> 8);
        uStack_376 = (undefined2)((uint)local_398 >> 0x10);
        uStack_374 = (undefined1)local_394;
        uStack_373 = (undefined1)((uint)local_394 >> 8);
        uStack_372 = (undefined2)((uint)local_394 >> 0x10);
        uStack_370 = (undefined1)uStack_390;
        uStack_36f = (undefined1)((uint)uStack_390 >> 8);
        uStack_36e = (undefined2)((uint)uStack_390 >> 0x10);
        local_36c = (undefined1)uStack_38c;
        uStack_36b = (undefined1)((uint)uStack_38c >> 8);
        uStack_36a = (undefined2)((uint)uStack_38c >> 0x10);
        local_368 = uStack_388;
        local_3c0 = local_3a0;
        local_3bc = local_39c;
        piStack_3b8 = (int *)local_398;
        local_294 = 1;
        local_3b4 = local_394;
        uStack_3b0 = uStack_390;
        uStack_3ac = uStack_38c;
        uStack_3a8 = uStack_388;
        goto LAB_01490948;
      }
      iVar8 = thunk_FUN_016d4a50(0x17);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x17);
      }
      FUN_016dd1aa(iVar8,&DAT_00408820,0x17);
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      puVar4 = local_3cc;
      puVar15 = local_3d0;
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar7 = 0x17;
      puVar7[1] = iVar8;
      puVar7[2] = 0x17;
      if (local_3d0 != (uint *)0x0) {
        if ((code *)*local_3cc != (code *)0x0) {
          (*(code *)*local_3cc)(local_3d0);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_016d3fb4(puVar15);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *local_3c8;
        bVar16 = (bool)hasExclusiveAccess(local_3c8);
      } while (!bVar16);
      *local_3c8 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(local_3c8);
      }
      if ((code *)*local_658 != (code *)0x0) {
        (*(code *)*local_658)(local_654);
      }
      if (local_658[1] != 0) {
        thunk_FUN_016d3fb4(local_654);
      }
      if (local_3d8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *local_3d8;
          bVar16 = (bool)hasExclusiveAccess(local_3d8);
        } while (!bVar16);
        *local_3d8 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0149f9e0(local_3d8);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *local_430;
        bVar16 = (bool)hasExclusiveAccess(local_430);
      } while (!bVar16);
      *local_430 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_430,local_42c);
      }
      if (local_428 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *local_428;
          bVar16 = (bool)hasExclusiveAccess(local_428);
        } while (!bVar16);
        *local_428 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(local_428,local_424);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *local_420;
        bVar16 = (bool)hasExclusiveAccess(local_420);
      } while (!bVar16);
      *local_420 = iVar8 + -1;
      local_6c8 = 0;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_420,local_41c);
      }
      local_6c4 = 2;
      uVar10 = 2;
    }
    else {
      local_294 = local_3d4 | (byte)local_3c4 ^ 1;
      local_3c0 = local_3f4;
      local_3bc = puStack_3f0;
      piStack_3b8 = piStack_3ec;
      local_3b4 = local_3e8;
      uStack_3b0 = uStack_3e4;
      uStack_3ac = uStack_3e0;
      uStack_3a8 = uStack_3dc;
LAB_01490948:
      FUN_016dd1aa(&local_380,&local_490,0x70);
      local_2cb = cStack_637;
      local_2cc = local_638;
      local_300 = local_420;
      local_2fc = local_41c;
      local_2d4 = local_654;
      local_2ca = (undefined2)local_560;
      local_2f8 = local_418;
      uStack_2f4 = uStack_414;
      uStack_2f0 = uStack_410;
      uStack_2ec = uStack_40c;
      local_2e8 = local_408;
      uStack_2e4 = uStack_404;
      uStack_2e0 = uStack_400;
      uStack_2dc = uStack_3fc;
      uStack_2d8 = uStack_3f8;
      local_2ac = local_3d8;
      local_2c8 = local_3c0;
      puStack_2c4 = local_3bc;
      piStack_2c0 = piStack_3b8;
      local_2bc = local_3b4;
      uStack_2b8 = uStack_3b0;
      uStack_2b4 = uStack_3ac;
      uStack_2b0 = uStack_3a8;
      local_310 = local_3d0;
      puStack_30c = local_3cc;
      piStack_308 = local_3c8;
      uStack_304 = local_3c4;
      local_293 = 0;
      local_2d0 = local_658;
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x358);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x358);
      }
      FUN_016dd1aa(puVar7,&local_380,0x358);
      uVar10 = 4;
    }
    FUN_0149eb98(param_2);
    param_2[2] = (uint)&DAT_018a4a28;
    *(undefined4 *)((int)param_2 + 0xe) = local_650;
    *(undefined1 *)(param_2 + 7) = local_6c8;
    *(undefined4 *)((int)param_2 + 0x12) = uStack_64c;
    *param_2 = 3;
    param_2[1] = (uint)puVar7;
    *(undefined1 *)(param_2 + 0xf) = uVar10;
    *(uint *)((int)param_2 + 0x15) = CONCAT31(uStack_648,uStack_64c._3_1_);
    *(undefined1 *)((int)param_2 + 0x19) = local_6c4;
    iVar8 = 1;
  }
  if (iVar8 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("TryFlatten polled after completion",0x22,&DAT_018a5568);
  }
  cVar5 = (char)param_2[0xf];
  if (cVar5 == '\x04') {
    FUN_014870c0(&local_380,param_2[1],param_3);
    if ((char)local_348 == '\x03') {
LAB_014902bc:
      *(undefined1 *)(param_1 + 0xe) = 3;
      return;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xf) = 3;
    if (cVar5 == '\x03') {
LAB_0149047c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("Ready polled after completion",0x1d,&DAT_018a4fc0);
    }
    local_380 = (uint *)param_2[1];
    local_37c = (uint *)param_2[2];
    uVar6 = param_2[3];
    uVar9 = param_2[4];
    local_378 = (undefined1)uVar6;
    cStack_377 = (char)(uVar6 >> 8);
    uStack_376 = (undefined2)(uVar6 >> 0x10);
    uStack_374 = (undefined1)uVar9;
    uStack_373 = (undefined1)(uVar9 >> 8);
    uStack_372 = (undefined2)(uVar9 >> 0x10);
    uVar6 = param_2[5];
    uVar9 = param_2[6];
    local_368 = param_2[7];
    puStack_364 = (uint *)param_2[8];
    puStack_360 = (uint *)param_2[9];
    uStack_370 = (undefined1)uVar6;
    uStack_36f = (undefined1)(uVar6 >> 8);
    uStack_36e = (undefined2)(uVar6 >> 0x10);
    local_36c = (undefined1)uVar9;
    uStack_36b = (undefined1)(uVar9 >> 8);
    uStack_36a = (undefined2)(uVar9 >> 0x10);
    local_35c = param_2[10];
    local_358 = param_2[0xb];
    uStack_354 = param_2[0xc];
    uStack_350 = param_2[0xd];
    uStack_34c = param_2[0xe];
    local_348 = CONCAT13(*(undefined1 *)((int)param_2 + 0x3f),
                         CONCAT21(*(undefined2 *)((int)param_2 + 0x3d),cVar5));
  }
  uStack_484 = CONCAT11(uStack_373,uStack_374);
  local_490 = local_380;
  local_48c = local_37c;
  local_488 = local_378;
  local_487 = cStack_377;
  local_486 = uStack_376;
  local_482 = uStack_372;
  uStack_480 = uStack_370;
  uStack_47f = uStack_36f;
  uStack_47e = uStack_36e;
  local_47c = local_36c;
  uStack_47b = uStack_36b;
  uStack_47a = uStack_36a;
  local_478 = local_368;
  local_474 = puStack_364;
  puStack_470 = puStack_360;
  uStack_46c = local_35c;
  local_468 = local_358;
  uStack_464 = uStack_354;
  uStack_460 = uStack_350;
  uStack_45c = uStack_34c;
  local_458 = local_348;
  FUN_0149eb98(param_2);
  local_654 = local_490;
  local_658 = local_48c;
  uVar2 = CONCAT13(local_47c,CONCAT21(uStack_47e,uStack_47f));
  local_54c = CONCAT13(uStack_47f,CONCAT12(uStack_480,local_482));
  *param_2 = 4;
  local_640 = uStack_47a;
  local_3a0 = (uint *)(local_478 >> 8);
  local_380 = local_474;
  local_37c = puStack_470;
  local_378 = (undefined1)uStack_46c;
  cStack_377 = (char)(uStack_46c >> 8);
  uStack_376 = (undefined2)(uStack_46c >> 0x10);
  uStack_374 = (undefined1)local_468;
  uStack_373 = (undefined1)(local_468 >> 8);
  uStack_372 = (undefined2)(local_468 >> 0x10);
  uStack_370 = (undefined1)uStack_464;
  uStack_36f = (undefined1)(uStack_464 >> 8);
  uStack_36e = (undefined2)(uStack_464 >> 0x10);
  local_36c = (undefined1)uStack_460;
  uStack_36b = (undefined1)(uStack_460 >> 8);
  uStack_36a = (undefined2)(uStack_460 >> 0x10);
  local_368 = uStack_45c;
  local_66c = (undefined1)local_458;
  local_3c0 = (uint *)(local_458 >> 8);
  local_550 = (uint *)CONCAT22(uStack_484,local_486);
  uVar10 = uStack_47b;
LAB_014903f0:
  *(uint **)((int)param_1 + 10) = local_550;
  *(undefined4 *)((int)param_1 + 0xe) = local_54c;
  *(undefined1 *)((int)param_1 + 0x15) = uVar10;
  *(char *)((int)param_1 + 9) = local_487;
  *(undefined1 *)(param_1 + 2) = local_488;
  *param_1 = (uint)local_654;
  param_1[1] = (uint)local_658;
  *(uint *)((int)param_1 + 0x11) = CONCAT31((int3)((uint)uVar2 >> 8),local_54c._3_1_);
  *(undefined1 *)(param_1 + 6) = (undefined1)local_478;
  *(undefined2 *)((int)param_1 + 0x16) = local_640;
  *(undefined2 *)((int)param_1 + 0x19) = (undefined2)local_3a0;
  *(undefined1 *)((int)param_1 + 0x1b) = local_3a0._2_1_;
  param_1[7] = (uint)local_380;
  param_1[8] = (uint)local_37c;
  param_1[9] = CONCAT22(uStack_376,CONCAT11(cStack_377,local_378));
  param_1[10] = CONCAT22(uStack_372,CONCAT11(uStack_373,uStack_374));
  param_1[0xb] = CONCAT22(uStack_36e,CONCAT11(uStack_36f,uStack_370));
  param_1[0xc] = CONCAT22(uStack_36a,CONCAT11(uStack_36b,local_36c));
  param_1[0xd] = local_368;
  *(undefined1 *)(param_1 + 0xe) = local_66c;
  *(undefined2 *)((int)param_1 + 0x39) = (undefined2)local_3c0;
  *(undefined1 *)((int)param_1 + 0x3b) = local_3c0._2_1_;
  return;
}

