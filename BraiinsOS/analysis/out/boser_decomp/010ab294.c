// FUN_010ab294 @ 010ab294 size=2232 calls_out=16 calls_in=0
// strings: 

undefined8 FUN_010ab294(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_7a4;
  undefined4 local_79c;
  undefined4 local_798;
  int local_794;
  undefined4 local_788;
  undefined8 local_784;
  undefined *local_77c;
  uint local_778;
  undefined1 auStack_720 [64];
  undefined1 auStack_6e0 [44];
  byte local_6b4;
  undefined2 local_6b3;
  undefined1 local_6b1;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  byte local_6a4;
  undefined1 local_69c;
  undefined8 local_698;
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 local_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 local_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  int local_610;
  int local_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 local_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5c8;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 local_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined1 auStack_558 [64];
  byte local_518;
  undefined1 *local_4fc;
  uint local_4f8;
  ushort local_4f0;
  undefined2 local_4c4;
  undefined1 local_4c2;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 local_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  int *local_30;
  undefined1 local_2c;
  
  uVar7 = CONCAT44(local_794,local_798);
  FUN_01bed4e2(&local_4c0,param_2,0x90);
  uVar6 = FUN_01a7ebb4(local_438,local_434);
  FUN_01bed4e2(auStack_720,param_2,0x88);
  local_698 = uVar6;
  FUN_017970c4(&local_690,auStack_6e0);
  if (8 < local_6b4) {
    if (local_6b4 == 9) {
      local_7a4 = (uint)local_6a4;
      local_79c = local_6a8;
      uVar7 = CONCAT44(local_6ac,local_6b0);
      local_4c2 = local_6b1;
      local_4c4 = local_6b3;
    }
    else {
      uVar7 = FUN_013d4df8(local_6b0,local_6ac);
    }
  }
  local_794 = (int)((ulonglong)uVar7 >> 0x20);
  local_798 = (undefined4)uVar7;
  FUN_01bed4e2(&local_4c0,auStack_720,0x90);
  FUN_00f08050(&local_660,&local_4c0);
  local_4c0 = local_660;
  uStack_4bc = uStack_65c;
  uStack_4b8 = uStack_658;
  uStack_4b4 = uStack_654;
  uStack_4b0 = uStack_650;
  local_4ac = local_64c;
  uStack_4a8 = uStack_648;
  uStack_4a4 = uStack_644;
  uStack_4a0 = uStack_640;
  uStack_49c = uStack_63c;
  local_498 = local_638;
  uStack_494 = uStack_634;
  uStack_490 = uStack_630;
  uStack_48c = uStack_62c;
  uStack_488 = uStack_628;
  uStack_484 = uStack_624;
  local_480 = local_618;
  FUN_00f08154(&local_610,&local_4c0);
  if (local_610 != 3 || local_60c != 0) {
    FUN_01bed4e2(&local_788,&local_610,0x68);
    FUN_005f6438(local_620,local_61c);
    if ((9 < local_6b4) && (local_794 != 0)) {
      thunk_FUN_01be4678(local_798);
    }
    FUN_01435814(&local_690);
    goto LAB_010ab9dc;
  }
  local_5a8 = local_608;
  uStack_5a4 = uStack_604;
  uStack_5a0 = uStack_600;
  uStack_59c = uStack_5fc;
  uStack_598 = uStack_5f8;
  local_594 = local_5f4;
  uStack_590 = uStack_5f0;
  uStack_58c = uStack_5ec;
  uStack_588 = uStack_5e8;
  uStack_584 = uStack_5e4;
  local_580 = local_5e0;
  uStack_57c = uStack_5dc;
  uStack_578 = uStack_5d8;
  uStack_574 = uStack_5d4;
  uStack_570 = uStack_5d0;
  uStack_56c = uStack_5cc;
  local_560 = local_5c8;
  local_564 = local_61c;
  local_568 = local_620;
  local_4c0 = local_690;
  uStack_4bc = uStack_68c;
  uStack_4b8 = uStack_688;
  uStack_4b4 = uStack_684;
  uStack_4b0 = uStack_680;
  local_4ac = local_67c;
  uStack_4a8 = uStack_678;
  uStack_4a4 = uStack_674;
  uStack_4a0 = uStack_670;
  uStack_49c = uStack_66c;
  local_498 = uStack_668;
  local_778 = local_7a4;
  local_788 = CONCAT13(local_4c2,CONCAT21(local_4c4,local_6b4));
  local_77c = (undefined *)local_79c;
  local_784 = uVar7;
  uVar3 = FUN_01a6bbe0(auStack_558,&local_5a8,&local_4c0,&local_788,local_69c);
  if (local_4f8 == 0) {
    uVar3 = (uint)local_518;
  }
  if (local_4f8 == 0 && uVar3 == 0) {
LAB_010ab998:
    puVar5 = (undefined1 *)thunk_FUN_01be5118(1);
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(1,1);
    }
    *puVar5 = 0;
    FUN_005f9b88(auStack_558);
    local_77c = &DAT_01c022b8;
  }
  else {
    uVar3 = (uint)local_4f0;
    if (uVar3 != 0xffff) {
      if (uVar3 == 0) goto LAB_010ab998;
      if (uVar3 < local_4f8) {
        if ((char)local_4fc[uVar3] < -0x40) {
LAB_010abb6c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_4fc,local_4f8,0,uVar3,&DAT_01d2e584);
        }
        local_4f8 = uVar3;
      }
      else if (local_4f8 != uVar3) goto LAB_010abb6c;
    }
    puVar5 = &DAT_005327c4;
    if (local_4f8 != 0) {
      puVar5 = local_4fc;
    }
    uVar3 = local_4f8;
    if (local_4f8 < 2) {
      uVar3 = 1;
    }
    switch(local_4f8) {
    case 0x23:
      iVar4 = thunk_FUN_01bed842(local_4fc,&DAT_003adfd5);
      if (iVar4 != 0) goto LAB_010ab998;
      local_430 = *param_1;
      uStack_42c = param_1[1];
      uStack_428 = param_1[2];
      uStack_424 = param_1[3];
      local_30 = (int *)param_1[4];
      do {
        iVar4 = *local_30;
        bVar2 = (bool)hasExclusiveAccess(local_30);
      } while (!bVar2);
      *local_30 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_010abb88;
      FUN_01bed4e2(&local_4c0,auStack_558,0x90);
      local_2c = 0;
      puVar5 = (undefined1 *)thunk_FUN_01be5118(0x498);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x498);
      }
      FUN_01bed4e2(puVar5,&local_4c0,0x498);
      local_77c = &DAT_01c02338;
      break;
    case 0x24:
      iVar4 = thunk_FUN_01bed842(local_4fc,&DAT_003adfb1);
      if (iVar4 != 0) goto LAB_010ab998;
      local_430 = *param_1;
      uStack_42c = param_1[1];
      uStack_428 = param_1[2];
      uStack_424 = param_1[3];
      local_30 = (int *)param_1[4];
      do {
        iVar4 = *local_30;
        bVar2 = (bool)hasExclusiveAccess(local_30);
      } while (!bVar2);
      *local_30 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_010abb88;
      FUN_01bed4e2(&local_4c0,auStack_558,0x90);
      local_2c = 0;
      puVar5 = (undefined1 *)thunk_FUN_01be5118(0x498);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x498);
      }
      FUN_01bed4e2(puVar5,&local_4c0,0x498);
      local_77c = &DAT_01c02348;
      break;
    default:
      if (uVar3 == 0x25) {
        iVar4 = thunk_FUN_01bed842(puVar5,&DAT_003ae073,0x25);
        if (iVar4 != 0) goto LAB_010ab998;
        local_430 = *param_1;
        uStack_42c = param_1[1];
        uStack_428 = param_1[2];
        uStack_424 = param_1[3];
        local_30 = (int *)param_1[4];
        do {
          iVar4 = *local_30;
          bVar2 = (bool)hasExclusiveAccess(local_30);
        } while (!bVar2);
        *local_30 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_010abb88;
        FUN_01bed4e2(&local_4c0,auStack_558,0x90);
        local_2c = 0;
        puVar5 = (undefined1 *)FUN_005fdd9c(0x498,8);
        FUN_01bed4e2(puVar5,&local_4c0,0x498);
        local_77c = &DAT_01c022f8;
      }
      else {
        if (uVar3 != 0x34) goto LAB_010ab998;
        iVar4 = thunk_FUN_01bed842(puVar5,&DAT_003ae0c3,0x34);
        if (iVar4 == 0) {
          local_430 = *param_1;
          uStack_42c = param_1[1];
          uStack_428 = param_1[2];
          uStack_424 = param_1[3];
          local_30 = (int *)param_1[4];
          do {
            iVar4 = *local_30;
            bVar2 = (bool)hasExclusiveAccess(local_30);
          } while (!bVar2);
          *local_30 = iVar4 + 1;
          if (iVar4 < 0) goto LAB_010abb88;
          FUN_01bed4e2(&local_4c0,auStack_558,0x90);
          local_2c = 0;
          puVar5 = (undefined1 *)FUN_005fdd9c(0x498,8);
          FUN_01bed4e2(puVar5,&local_4c0,0x498);
          local_77c = &DAT_01c022d8;
        }
        else {
          iVar4 = thunk_FUN_01bed842(puVar5,&DAT_003ae0f7,0x34);
          if (iVar4 != 0) goto LAB_010ab998;
          local_430 = *param_1;
          uStack_42c = param_1[1];
          uStack_428 = param_1[2];
          uStack_424 = param_1[3];
          local_30 = (int *)param_1[4];
          do {
            iVar4 = *local_30;
            bVar2 = (bool)hasExclusiveAccess(local_30);
          } while (!bVar2);
          *local_30 = iVar4 + 1;
          if (iVar4 < 0) goto LAB_010abb88;
          FUN_01bed4e2(&local_4c0,auStack_558,0x90);
          local_2c = 0;
          puVar5 = (undefined1 *)FUN_005fdd9c(0x498,8);
          FUN_01bed4e2(puVar5,&local_4c0,0x498);
          local_77c = &DAT_01c022c8;
        }
      }
      break;
    case 0x26:
      iVar4 = thunk_FUN_01bed842(local_4fc,&DAT_003ae04d);
      if (iVar4 != 0) goto LAB_010ab998;
      local_430 = *param_1;
      uStack_42c = param_1[1];
      uStack_428 = param_1[2];
      uStack_424 = param_1[3];
      local_30 = (int *)param_1[4];
      do {
        iVar4 = *local_30;
        bVar2 = (bool)hasExclusiveAccess(local_30);
      } while (!bVar2);
      *local_30 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_010abb88;
      FUN_01bed4e2(&local_4c0,auStack_558,0x90);
      local_2c = 0;
      puVar5 = (undefined1 *)thunk_FUN_01be5118(0x498);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x498);
      }
      FUN_01bed4e2(puVar5,&local_4c0,0x498);
      local_77c = &DAT_01c02308;
      break;
    case 0x2a:
      iVar4 = thunk_FUN_01bed842(local_4fc,&DAT_003adff8);
      if (iVar4 != 0) goto LAB_010ab998;
      local_430 = *param_1;
      uStack_42c = param_1[1];
      uStack_428 = param_1[2];
      uStack_424 = param_1[3];
      local_30 = (int *)param_1[4];
      do {
        iVar4 = *local_30;
        bVar2 = (bool)hasExclusiveAccess(local_30);
      } while (!bVar2);
      *local_30 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_010abb88;
      FUN_01bed4e2(&local_4c0,auStack_558,0x90);
      local_2c = 0;
      puVar5 = (undefined1 *)thunk_FUN_01be5118(0x498);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x498);
      }
      FUN_01bed4e2(puVar5,&local_4c0,0x498);
      local_77c = &DAT_01c02328;
      break;
    case 0x2b:
      iVar4 = thunk_FUN_01bed842(local_4fc,&DAT_003ae022);
      if (iVar4 == 0) {
        local_430 = *param_1;
        uStack_42c = param_1[1];
        uStack_428 = param_1[2];
        uStack_424 = param_1[3];
        local_30 = (int *)param_1[4];
        do {
          iVar4 = *local_30;
          bVar2 = (bool)hasExclusiveAccess(local_30);
        } while (!bVar2);
        *local_30 = iVar4 + 1;
        if (iVar4 < 0) {
LAB_010abb88:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x10abb88);
          (*pcVar1)();
        }
        FUN_01bed4e2(&local_4c0,auStack_558,0x90);
        local_2c = 0;
        puVar5 = (undefined1 *)thunk_FUN_01be5118(0x498);
        if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x498);
        }
        FUN_01bed4e2(puVar5,&local_4c0,0x498);
        local_77c = &DAT_01c02318;
      }
      else {
        iVar4 = thunk_FUN_01bed842(local_4fc,&DAT_003ae098,0x2b);
        if (iVar4 != 0) goto LAB_010ab998;
        local_430 = *param_1;
        uStack_42c = param_1[1];
        uStack_428 = param_1[2];
        uStack_424 = param_1[3];
        local_30 = (int *)param_1[4];
        do {
          iVar4 = *local_30;
          bVar2 = (bool)hasExclusiveAccess(local_30);
        } while (!bVar2);
        *local_30 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_010abb88;
        FUN_01bed4e2(&local_4c0,auStack_558,0x90);
        local_2c = 0;
        puVar5 = (undefined1 *)FUN_005fdd9c(0x498,8);
        FUN_01bed4e2(puVar5,&local_4c0,0x498);
        local_77c = &DAT_01c022e8;
      }
    }
  }
  local_784._0_4_ = 0;
  local_788 = 4;
  local_784._4_4_ = puVar5;
LAB_010ab9dc:
  iVar4 = thunk_FUN_01be5118(0x68);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  FUN_01bed4e2(iVar4,&local_788,0x68);
  return CONCAT44(&UNK_01c1e218,iVar4);
}

