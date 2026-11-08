// FUN_0140693c @ 0140693c size=3204 calls_out=18 calls_in=1
// strings: Ready polled after completion | TryFlatten polled after completion

/* WARNING: Removing unreachable block (ram,0x0140714c) */
/* WARNING: Removing unreachable block (ram,0x01407158) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0140693c(int *param_1,int *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 *unaff_r10;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined1 local_6c0;
  undefined1 local_6bc;
  undefined1 local_6b8;
  undefined2 local_6b4;
  undefined1 local_65c;
  undefined4 *local_658;
  undefined4 *local_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 *local_640;
  undefined1 local_638;
  undefined3 uStack_637;
  undefined1 uStack_634;
  undefined3 local_633;
  undefined1 uStack_630;
  undefined3 local_62f;
  undefined1 auStack_620 [192];
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 *local_550;
  int local_54c;
  int local_548;
  undefined1 local_544;
  int *local_4f0;
  undefined4 local_4ec;
  int *local_4e8;
  undefined4 local_4e4;
  int *local_4e0;
  undefined4 local_4dc;
  undefined1 auStack_4b4 [28];
  int *local_498;
  undefined4 *local_490;
  undefined4 *local_48c;
  undefined4 local_488;
  int iStack_484;
  int iStack_480;
  undefined1 local_47c;
  undefined1 uStack_47b;
  ushort uStack_47a;
  uint local_478;
  undefined4 *local_474;
  undefined4 *puStack_470;
  int iStack_46c;
  int local_468;
  int iStack_464;
  int iStack_460;
  int iStack_45c;
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
  undefined4 *local_3f4;
  undefined4 *puStack_3f0;
  undefined4 *puStack_3ec;
  int local_3e8;
  int iStack_3e4;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  int *local_3d8;
  byte local_3d4;
  int local_3d0;
  undefined4 *local_3cc;
  int *local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 *puStack_3bc;
  undefined4 *puStack_3b8;
  int local_3b4;
  int iStack_3b0;
  undefined4 uStack_3ac;
  uint uStack_3a8;
  undefined4 local_3a0;
  undefined4 *local_39c;
  undefined4 *local_398;
  int local_394;
  int iStack_390;
  undefined4 uStack_38c;
  uint uStack_388;
  undefined4 *local_380;
  undefined4 *local_37c;
  undefined1 local_378;
  char cStack_377;
  undefined2 uStack_376;
  int iStack_374;
  int iStack_370;
  undefined1 uStack_36c;
  undefined1 local_36b;
  ushort uStack_36a;
  uint local_368;
  undefined4 *puStack_364;
  undefined4 *puStack_360;
  int local_35c;
  int local_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  undefined4 local_348;
  int local_310;
  undefined4 *puStack_30c;
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
  undefined4 *local_2d4;
  undefined4 *local_2d0;
  undefined1 local_2cc;
  undefined2 local_2cb;
  undefined1 local_2c9;
  undefined4 *local_2c8;
  undefined4 *puStack_2c4;
  undefined4 *puStack_2c0;
  int local_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  int *local_2ac;
  byte local_294;
  undefined1 local_293;
  
  piVar10 = (int *)*param_2;
  if (piVar10 == (int *)&DAT_00000005) {
    iVar12 = param_2[0xf];
    *(undefined1 *)(param_2 + 0xf) = 3;
    if ((char)iVar12 != '\x03') {
      iVar9 = param_2[2];
      iVar11 = param_2[3];
      iVar14 = param_2[4];
      *param_1 = param_2[1];
      param_1[1] = iVar9;
      param_1[2] = iVar11;
      param_1[3] = iVar14;
      iVar9 = param_2[6];
      iVar11 = param_2[7];
      iVar14 = param_2[8];
      iVar15 = param_2[9];
      param_1[4] = param_2[5];
      param_1[5] = iVar9;
      param_1[6] = iVar11;
      param_1[7] = iVar14;
      param_1[8] = iVar15;
      iVar9 = param_2[0xb];
      iVar11 = param_2[0xc];
      iVar14 = param_2[0xd];
      iVar15 = param_2[0xe];
      param_1[9] = param_2[10];
      param_1[10] = iVar9;
      param_1[0xb] = iVar11;
      param_1[0xc] = iVar14;
      param_1[0xd] = iVar15;
      uVar1 = *(undefined2 *)((int)param_2 + 0x3d);
      uVar16 = *(undefined1 *)((int)param_2 + 0x3f);
      *(char *)(param_1 + 0xe) = (char)iVar12;
      *(undefined1 *)((int)param_1 + 0x3b) = uVar16;
      *(undefined2 *)((int)param_1 + 0x39) = uVar1;
      return;
    }
    goto LAB_01406c5c;
  }
  piVar5 = param_2 + 0x30;
  puVar7 = (undefined1 *)((int)piVar10 + -2);
  if (piVar10 < &SUB_00000002) {
    puVar7 = (undefined1 *)0x0;
  }
  if (puVar7 == (undefined1 *)0x0) {
    iVar12 = 0;
    piVar13 = piVar10;
    if (piVar10 != (int *)&SUB_00000002) {
      iVar12 = *piVar5;
      piVar13 = piVar5;
    }
    if (piVar10 == (int *)&SUB_00000002 || iVar12 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00409033,0x36,&DAT_018a5c6c);
    }
    if (iVar12 == 0) {
      if (param_2[0x3e] != 0x3b9aca01) {
LAB_01406d3c:
        iVar12 = param_2[0x31];
        *(undefined1 *)(param_2 + 0x31) = 3;
        if ((char)iVar12 == '\x03') {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0040898e,0xe,&DAT_018a4d74);
        }
        local_490 = (undefined4 *)CONCAT31(local_490._1_3_,(char)iVar12);
        FUN_016dd1aa((uint)&local_490 | 1,(int)param_2 + 0xc5,0x2b);
        if (param_2[0x3e] == 0x3b9aca01) {
          local_380 = local_490;
          local_37c = local_48c;
          local_378 = (undefined1)local_488;
          cStack_377 = (char)((uint)local_488 >> 8);
          uStack_376 = (undefined2)((uint)local_488 >> 0x10);
          iStack_374 = iStack_484;
          iStack_370 = iStack_480;
          uStack_36c = local_47c;
          local_36b = uStack_47b;
          uStack_36a = uStack_47a;
          local_368 = local_478;
          puStack_364 = local_474;
          puStack_360 = puStack_470;
          local_35c = iStack_46c;
          local_358 = local_468;
          uVar17 = (**(code **)(param_2[0x3d] + 0x10))(param_2[0x3c],&local_380);
        }
        else {
          uVar17 = FUN_01411098(param_2 + 0x3c,&local_490);
        }
        FUN_0141155c(piVar5);
        param_2[0x32] = (int)((ulonglong)uVar17 >> 0x20);
        param_2[0x30] = 1;
        param_2[0x31] = (int)uVar17;
        piVar13 = piVar5;
        goto LAB_01406df0;
      }
      (**(code **)(param_2[0x3d] + 0xc))(&local_380,param_2[0x3c],param_3);
      if (local_380 == (undefined4 *)0x0) {
        if (local_37c == (undefined4 *)0x0) goto LAB_01406d3c;
        unaff_r10 = (undefined4 *)CONCAT22(uStack_376,CONCAT11(cStack_377,local_378));
        local_658 = local_37c;
        cVar4 = '\x02';
      }
      else {
        cVar4 = '\x03';
      }
LAB_01406e2c:
      cVar8 = cVar4;
      if (cVar8 == '\x03') goto LAB_01406abc;
      local_654 = unaff_r10;
      local_640 = local_658;
      uVar1 = local_6b4;
      uVar16 = local_6b8;
    }
    else {
      if (iVar12 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0040899c,0x2b,&DAT_018a4d84);
      }
LAB_01406df0:
      (**(code **)(param_2[0x32] + 0xc))(&local_380,param_2[0x31],param_3);
      uVar1 = uStack_376;
      cVar8 = cStack_377;
      uVar16 = local_378;
      local_654 = local_37c;
      local_640 = local_380;
      cVar4 = '\x03';
      if ((cStack_377 == '\x03') ||
         (unaff_r10 = local_37c, local_658 = local_380, cVar4 = '\x02', cStack_377 == '\x02'))
      goto LAB_01406e2c;
      FUN_0141155c(piVar13);
      *piVar13 = 2;
    }
    local_398 = (undefined4 *)CONCAT31(CONCAT21(uVar1,cVar8),uVar16);
    local_3a0 = local_640;
    local_39c = local_654;
    if (*piVar13 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
    }
    FUN_01420524(piVar13);
    *piVar13 = 3;
    if (cVar8 == '\x02') {
      bVar2 = false;
      uVar16 = 2;
    }
    else {
      local_550 = local_398;
      if (cVar8 == '\x03') goto LAB_01406abc;
      bVar2 = true;
      uVar16 = 3;
    }
    puVar6 = local_550;
    if (*param_2 == 2) {
LAB_014075c0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
    }
    FUN_016dd1aa(&local_380,param_2,0xc0);
    if (param_2[0x30] != 3) {
      FUN_01420524(piVar5);
    }
    puVar3 = local_380;
    FUN_016dd1aa(auStack_620,(uint)&local_380 | 4,0xbc);
    local_638 = SUB41(puVar6,0);
    *param_2 = 2;
    if (puVar3 == (undefined4 *)&SUB_00000002) goto LAB_014075c0;
    uStack_637 = (undefined3)((uint)puVar6 >> 8);
    uStack_634 = (undefined1)local_54c;
    local_560 = CONCAT13(uStack_634,uStack_637);
    local_633 = (undefined3)((uint)local_54c >> 8);
    uStack_630 = (undefined1)local_548;
    uStack_55c = CONCAT13(uStack_630,local_633);
    local_62f = (undefined3)((uint)local_548 >> 8);
    uStack_558 = CONCAT13(local_544,local_62f);
    local_550 = puVar3;
    FUN_016dd1aa((uint)&local_550 | 4,auStack_620,0xbc);
    if (!bVar2) {
      FUN_01421e88(auStack_4b4);
      if (local_498 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *local_498;
          bVar2 = (bool)hasExclusiveAccess(local_498);
        } while (!bVar2);
        *local_498 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143db38(local_498);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *local_4f0;
        bVar2 = (bool)hasExclusiveAccess(local_4f0);
      } while (!bVar2);
      *local_4f0 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_4f0,local_4ec);
      }
      if (local_4e8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *local_4e8;
          bVar2 = (bool)hasExclusiveAccess(local_4e8);
        } while (!bVar2);
        *local_4e8 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(local_4e8,local_4e4);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *local_4e0;
        bVar2 = (bool)hasExclusiveAccess(local_4e0);
      } while (!bVar2);
      *local_4e0 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_4e0,local_4dc);
      }
      local_378 = local_638;
      cStack_377 = (char)((uint)puVar6 >> 8);
      uStack_376 = (undefined2)((uint)puVar6 >> 0x10);
      iStack_374 = local_54c;
      iStack_370 = local_548;
      uStack_36c = local_544;
      local_368 = CONCAT31(local_368._1_3_,2);
      local_380 = local_640;
      local_37c = local_654;
      local_36b = uVar16;
      FUN_014209b0(param_2);
      *param_2 = 4;
      local_478._0_1_ = 2;
      local_65c = 2;
      local_488._0_1_ = local_638;
      local_658 = local_640;
      local_550 = (undefined4 *)CONCAT13(uStack_634,uStack_637);
      local_54c = CONCAT13(uStack_630,local_633);
      local_548 = CONCAT13(local_544,local_62f);
      goto LAB_01406bdc;
    }
    local_490 = puVar3;
    FUN_016dd1aa((uint)&local_490 | 4,auStack_620,0xbc);
    (*(code *)local_654[10])(&local_3d0,local_640);
    local_3c4._0_2_ = CONCAT11(local_638,(byte)local_3c4);
    if ((byte)local_3c4 == 0 && local_3d4 == 0) {
      local_380 = local_3f4;
      local_37c = puStack_3f0;
      local_378 = SUB41(puStack_3ec,0);
      cStack_377 = (char)((uint)puStack_3ec >> 8);
      uStack_376 = (undefined2)((uint)puStack_3ec >> 0x10);
      iStack_374 = local_3e8;
      iStack_370 = iStack_3e4;
      local_368 = uStack_3dc;
      uStack_36c = (undefined1)uStack_3e0;
      local_36b = (undefined1)((uint)uStack_3e0 >> 8);
      uStack_36a = (ushort)((uint)uStack_3e0 >> 0x10);
      FUN_014496bc(&local_3a0,&local_3d8,&local_380,1);
      FUN_01421e88(&local_380);
      if ((char)local_3a0 != '\x03') {
        local_380 = local_3a0;
        local_37c = local_39c;
        local_378 = SUB41(local_398,0);
        cStack_377 = (char)((uint)local_398 >> 8);
        uStack_376 = (undefined2)((uint)local_398 >> 0x10);
        iStack_374 = local_394;
        iStack_370 = iStack_390;
        uStack_36c = (undefined1)uStack_38c;
        local_36b = (undefined1)((uint)uStack_38c >> 8);
        uStack_36a = (ushort)((uint)uStack_38c >> 0x10);
        local_368 = uStack_388;
        local_3c0 = local_3a0;
        puStack_3bc = local_39c;
        puStack_3b8 = local_398;
        local_294 = 1;
        local_3b4 = local_394;
        iStack_3b0 = iStack_390;
        uStack_3ac = uStack_38c;
        uStack_3a8 = uStack_388;
        goto LAB_01407034;
      }
      iVar12 = thunk_FUN_016d4a50(0x17,&local_490);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x17);
      }
      FUN_016dd1aa(iVar12,&DAT_00408820,0x17);
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar6 = 0x17;
      puVar6[1] = iVar12;
      puVar6[2] = 0x17;
      if (local_3d0 != 0) {
        if ((code *)*local_3cc != (code *)0x0) {
          (*(code *)*local_3cc)(local_3d0);
        }
        if (local_3cc[1] != 0) {
          thunk_FUN_016d3fb4(local_3d0);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *local_3c8;
        bVar2 = (bool)hasExclusiveAccess(local_3c8);
      } while (!bVar2);
      *local_3c8 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(local_3c8);
      }
      if ((code *)*local_654 != (code *)0x0) {
        (*(code *)*local_654)(local_640);
      }
      if (local_654[1] != 0) {
        thunk_FUN_016d3fb4(local_640);
      }
      if (local_3d8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *local_3d8;
          bVar2 = (bool)hasExclusiveAccess(local_3d8);
        } while (!bVar2);
        *local_3d8 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143db38(local_3d8);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *local_430;
        bVar2 = (bool)hasExclusiveAccess(local_430);
      } while (!bVar2);
      *local_430 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_430,local_42c);
      }
      if (local_428 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *local_428;
          bVar2 = (bool)hasExclusiveAccess(local_428);
        } while (!bVar2);
        *local_428 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(local_428,local_424);
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *local_420;
        bVar2 = (bool)hasExclusiveAccess(local_420);
      } while (!bVar2);
      *local_420 = iVar12 + -1;
      local_6c0 = 0;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_420,local_41c);
      }
      local_6bc = 2;
      uVar16 = 2;
    }
    else {
      local_294 = local_3d4 | (byte)local_3c4 ^ 1;
      local_3c0 = local_3f4;
      puStack_3bc = puStack_3f0;
      puStack_3b8 = puStack_3ec;
      local_3b4 = local_3e8;
      iStack_3b0 = iStack_3e4;
      uStack_3ac = uStack_3e0;
      uStack_3a8 = uStack_3dc;
LAB_01407034:
      FUN_016dd1aa(&local_380,&local_490,0x70);
      local_2c9 = local_560._2_1_;
      local_300 = local_420;
      local_2cb = (undefined2)local_560;
      local_2cc = local_638;
      local_2fc = local_41c;
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
      puStack_2c4 = puStack_3bc;
      puStack_2c0 = puStack_3b8;
      local_2bc = local_3b4;
      iStack_2b8 = iStack_3b0;
      uStack_2b4 = uStack_3ac;
      uStack_2b0 = uStack_3a8;
      local_310 = local_3d0;
      puStack_30c = local_3cc;
      piStack_308 = local_3c8;
      uStack_304 = local_3c4;
      local_293 = 0;
      local_2d4 = local_640;
      local_2d0 = local_654;
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x358);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x358);
      }
      FUN_016dd1aa(puVar6,&local_380,0x358);
      uVar16 = 4;
    }
    FUN_014209b0(param_2);
    param_2[2] = (int)&DAT_018a3c30;
    *(undefined4 *)((int)param_2 + 0xd) = local_650;
    *(undefined4 *)((int)param_2 + 0x11) = uStack_64c;
    *(undefined4 *)((int)param_2 + 0x15) = uStack_648;
    *(undefined1 *)(param_2 + 7) = local_6c0;
    *param_2 = 3;
    param_2[1] = (int)puVar6;
    *(undefined1 *)((int)param_2 + 0x19) = local_6bc;
    *(undefined1 *)(param_2 + 0xf) = uVar16;
    puVar7 = (undefined1 *)0x1;
  }
  if (puVar7 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("TryFlatten polled after completion",0x22,&DAT_018a5568);
  }
  cVar4 = (char)param_2[0xf];
  if (cVar4 == '\x04') {
    FUN_01434fbc(&local_380,param_2[1],param_3);
    if ((char)local_348 == '\x03') {
LAB_01406abc:
      *(undefined1 *)(param_1 + 0xe) = 3;
      return;
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xf) = 3;
    if (cVar4 == '\x03') {
LAB_01406c5c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("Ready polled after completion",0x1d,&DAT_018a4fc0);
    }
    local_380 = (undefined4 *)param_2[1];
    local_37c = (undefined4 *)param_2[2];
    iVar12 = param_2[3];
    iStack_374 = param_2[4];
    local_378 = (undefined1)iVar12;
    cStack_377 = (char)((uint)iVar12 >> 8);
    uStack_376 = (undefined2)((uint)iVar12 >> 0x10);
    iStack_370 = param_2[5];
    iVar12 = param_2[6];
    local_368 = param_2[7];
    puStack_364 = (undefined4 *)param_2[8];
    puStack_360 = (undefined4 *)param_2[9];
    uStack_36c = (undefined1)iVar12;
    local_36b = (undefined1)((uint)iVar12 >> 8);
    uStack_36a = (ushort)((uint)iVar12 >> 0x10);
    local_35c = param_2[10];
    local_358 = param_2[0xb];
    iStack_354 = param_2[0xc];
    iStack_350 = param_2[0xd];
    iStack_34c = param_2[0xe];
    local_348 = CONCAT13(*(undefined1 *)((int)param_2 + 0x3f),
                         CONCAT21(*(undefined2 *)((int)param_2 + 0x3d),cVar4));
  }
  local_488 = CONCAT22(uStack_376,CONCAT11(cStack_377,local_378));
  local_490 = local_380;
  local_48c = local_37c;
  iStack_484 = iStack_374;
  iStack_480 = iStack_370;
  local_47c = uStack_36c;
  uStack_47b = local_36b;
  uStack_47a = uStack_36a;
  local_478 = local_368;
  local_474 = puStack_364;
  puStack_470 = puStack_360;
  iStack_46c = local_35c;
  local_468 = local_358;
  iStack_464 = iStack_354;
  iStack_460 = iStack_350;
  iStack_45c = iStack_34c;
  local_458 = local_348;
  FUN_014209b0(param_2);
  local_658 = local_490;
  *param_2 = 4;
  local_654 = local_48c;
  local_640 = (undefined4 *)(uint)uStack_47a;
  local_3a0 = (undefined4 *)(local_478 >> 8);
  local_380 = local_474;
  local_37c = puStack_470;
  local_378 = (undefined1)iStack_46c;
  cStack_377 = (char)((uint)iStack_46c >> 8);
  uStack_376 = (undefined2)((uint)iStack_46c >> 0x10);
  iStack_374 = local_468;
  iStack_370 = iStack_464;
  uStack_36c = (undefined1)iStack_460;
  local_36b = (undefined1)((uint)iStack_460 >> 8);
  uStack_36a = (ushort)((uint)iStack_460 >> 0x10);
  local_368 = iStack_45c;
  local_65c = (undefined1)local_458;
  local_3c0 = (undefined4 *)(local_458 >> 8);
  uVar16 = uStack_47b;
  local_550 = (undefined4 *)CONCAT13((undefined1)iStack_484,local_488._1_3_);
  local_54c = CONCAT13((undefined1)iStack_480,iStack_484._1_3_);
  local_548 = CONCAT13(local_47c,iStack_480._1_3_);
LAB_01406bdc:
  *(undefined4 **)((int)param_1 + 9) = local_550;
  *(undefined1 *)(param_1 + 2) = (undefined1)local_488;
  *param_1 = (int)local_658;
  param_1[1] = (int)local_654;
  *(int *)((int)param_1 + 0xd) = local_54c;
  *(int *)((int)param_1 + 0x11) = local_548;
  *(undefined1 *)((int)param_1 + 0x15) = uVar16;
  *(undefined1 *)(param_1 + 6) = (undefined1)local_478;
  *(undefined2 *)((int)param_1 + 0x16) = local_640._0_2_;
  *(undefined2 *)((int)param_1 + 0x19) = (undefined2)local_3a0;
  *(undefined1 *)((int)param_1 + 0x1b) = local_3a0._2_1_;
  param_1[7] = (int)local_380;
  param_1[8] = (int)local_37c;
  param_1[9] = CONCAT22(uStack_376,CONCAT11(cStack_377,local_378));
  param_1[10] = iStack_374;
  param_1[0xb] = iStack_370;
  param_1[0xc] = CONCAT22(uStack_36a,CONCAT11(local_36b,uStack_36c));
  param_1[0xd] = local_368;
  *(undefined1 *)(param_1 + 0xe) = local_65c;
  *(undefined2 *)((int)param_1 + 0x39) = (undefined2)local_3c0;
  *(undefined1 *)((int)param_1 + 0x3b) = local_3c0._2_1_;
  return;
}

