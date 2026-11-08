// FUN_0143ff80 @ 0143ff80 size=2408 calls_out=28 calls_in=1
// strings: socks4 | socks5 | socks4a | socks5h | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0143ff80(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  undefined1 uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  ulonglong uVar19;
  byte local_554;
  byte local_553;
  undefined4 *local_550;
  undefined4 *local_54c;
  int local_548;
  uint local_544;
  undefined1 auStack_540 [24];
  undefined4 local_528;
  undefined4 *local_524;
  undefined4 *local_520;
  undefined4 *puStack_51c;
  undefined4 *puStack_518;
  undefined4 *local_514;
  undefined4 local_510;
  int iStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 *local_4f8;
  undefined4 *puStack_4f4;
  undefined4 *puStack_4f0;
  undefined4 *puStack_4ec;
  undefined4 *puStack_4e8;
  undefined4 local_4e4;
  int local_4e0;
  undefined4 local_4dc;
  undefined4 uStack_4d8;
  int local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 *local_4c8;
  undefined4 local_4c4;
  undefined4 *local_4c0;
  undefined4 *puStack_4bc;
  undefined4 *puStack_4b8;
  undefined4 *local_4b4;
  undefined4 uStack_4b0;
  int iStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 *local_498;
  undefined4 *local_494;
  undefined4 *local_490;
  int iStack_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 *puStack_47c;
  undefined4 *local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 *local_46c;
  undefined4 uStack_468;
  int iStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 **local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined *local_74;
  undefined2 uStack_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [48];
  undefined2 local_30;
  undefined1 local_2e;
  int local_2c;
  
  FUN_012834b0(&local_4c8);
  FUN_01414f00(&local_480,&local_4c8);
  uVar18 = (uint)local_480 & 0xff;
  if (uVar18 == 3) {
    *param_1 = -0x7ffffffe;
    return;
  }
  FUN_01bed4e2((uint)&local_554 | 1,(uint)&local_480 | 1,0x2b);
  piVar17 = (int *)0x0;
  local_528 = (undefined4 *)0x3;
  local_4f8 = (undefined4 *)0x80000000;
  local_554 = (byte)local_480;
  local_524 = (undefined4 *)0x0;
  local_510 = 0;
  local_520 = (undefined4 *)0x0;
  local_480 = (undefined4 *)0x3;
  puStack_47c = (undefined4 *)0x0;
  local_478 = (undefined4 *)0x0;
  local_474 = puStack_51c;
  local_470 = puStack_518;
  local_46c = local_514;
  uStack_468 = 0;
  iStack_464 = iStack_50c;
  uStack_460 = uStack_508;
  uStack_45c = uStack_504;
  uStack_458 = uStack_500;
  bVar12 = true;
  if (uVar18 == 0) {
    uVar4 = 1;
LAB_014400b4:
    FUN_01444d9c(&local_4c8,&local_480,uVar4,piVar17);
    iVar3 = iStack_4ac;
    local_528 = local_4c8;
    local_524 = local_4c4;
    local_520 = local_4c0;
    puStack_51c = puStack_4bc;
    puStack_518 = puStack_4b8;
    local_514 = local_4b4;
    local_510 = uStack_4b0;
    iStack_50c = iStack_4ac;
    uStack_508 = uStack_4a8;
    uStack_504 = uStack_4a4;
    uStack_500 = uStack_4a0;
    if (local_544 == 0) {
      *param_1 = -0x7ffffffe;
      FUN_01440d48(&local_4f8);
      FUN_01440d98(&local_528);
      goto LAB_01440714;
    }
    uVar18 = 0;
    do {
      uVar4 = local_544 - uVar18;
      if (uVar4 < 8) {
        uVar5 = 0;
        if (uVar4 == 0) {
          uVar19 = 0;
        }
        else {
          do {
            if (*(char *)(local_548 + uVar18 + uVar5) == '@') {
              uVar19 = CONCAT44(uVar5,1);
              goto LAB_0144015c;
            }
            uVar5 = uVar5 + 1;
          } while (uVar4 != uVar5);
          uVar19 = (ulonglong)uVar4 << 0x20;
        }
      }
      else {
        uVar19 = FUN_01307168(0x40,local_548 + uVar18);
      }
LAB_0144015c:
      if ((uVar19 & 1) == 0) break;
      uVar4 = (int)(uVar19 >> 0x20) + uVar18;
      uVar18 = uVar4 + 1;
      if ((uVar4 < local_544) && (*(char *)(local_548 + uVar4) == '@')) {
        iVar16 = local_544 - uVar18;
        uVar5 = 0;
        iVar14 = 0;
        goto LAB_0144032c;
      }
    } while (uVar18 <= local_544);
    local_480 = local_528;
    puStack_47c = local_524;
    local_478 = local_520;
    local_474 = puStack_51c;
    local_470 = puStack_518;
    local_46c = local_514;
    uStack_468 = local_510;
    iStack_464 = iStack_50c;
    uStack_460 = uStack_508;
    uStack_45c = uStack_504;
    uStack_458 = uStack_500;
    (*(code *)*local_54c)(&local_498,auStack_540,local_548,local_544);
    FUN_01444e9c(&local_4c8,&local_480,&local_498);
    local_528 = local_4c8;
    local_524 = local_4c4;
    local_520 = local_4c0;
    puStack_51c = puStack_4bc;
    puStack_518 = puStack_4b8;
    local_514 = local_4b4;
    local_510 = uStack_4b0;
    iStack_50c = iStack_4ac;
    uStack_508 = uStack_4a8;
    uStack_504 = uStack_4a4;
    uStack_500 = uStack_4a0;
    goto LAB_014401f0;
  }
  iVar3 = FUN_014146a0(&local_554,&DAT_00570850);
  if ((iVar3 != 0) || (iVar3 = FUN_014146a0(&local_554,&DAT_00570360), iVar3 != 0)) {
    uVar18 = (uint)local_554;
    if (uVar18 == 0) {
      uVar4 = 0;
    }
    else if (uVar18 == 2) {
      piVar17 = (int *)FUN_014333b0();
      (**(code **)*local_550)(&local_498,local_550 + 3,local_550[1],local_550[2]);
      *piVar17 = (int)local_498;
      piVar17[1] = (int)local_494;
      piVar17[2] = (int)local_490;
      piVar17[3] = iStack_48c;
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)local_553 << 8;
    }
    uVar4 = uVar4 | uVar18;
    goto LAB_014400b4;
  }
  if (local_554 != 1) {
    if (local_554 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf838c);
    }
    uVar11 = local_550[1];
    if (local_550[2] == 7) {
      iVar3 = thunk_FUN_01bed842(uVar11,"socks4a",7);
      if (iVar3 != 0) {
        uVar8 = 7;
        pcVar6 = "socks5h";
LAB_014406ec:
        iVar3 = thunk_FUN_01bed842(uVar11,pcVar6,uVar8);
        if (iVar3 != 0) goto LAB_014406f8;
      }
    }
    else {
      if (local_550[2] != 6) goto LAB_014406f8;
      iVar3 = thunk_FUN_01bed842(uVar11,"socks4",6);
      if (iVar3 != 0) {
        uVar8 = 6;
        pcVar6 = "socks5";
        goto LAB_014406ec;
      }
    }
    piVar17 = (int *)FUN_014333b0();
    (**(code **)*local_550)(&local_498,local_550 + 3,local_550[1],local_550[2]);
    bVar12 = false;
    *piVar17 = (int)local_498;
    piVar17[1] = (int)local_494;
    piVar17[2] = (int)local_490;
    piVar17[3] = iStack_48c;
    uVar4 = 2;
    goto LAB_014400b4;
  }
LAB_014406f8:
  *param_1 = -0x7ffffffe;
  FUN_01440d98(&local_480);
  goto LAB_0144070c;
  while( true ) {
    uVar9 = (int)(uVar19 >> 0x20) + uVar5;
    uVar5 = uVar9 + 1;
    if ((uVar9 < uVar4) && (*(char *)(local_548 + uVar9) == ':')) {
      iVar14 = local_548 + uVar5;
      iVar3 = uVar4 - uVar5;
      goto LAB_014403b8;
    }
    if (uVar4 < uVar5) break;
LAB_0144032c:
    uVar9 = uVar4 - uVar5;
    if (uVar9 < 8) {
      uVar7 = 0;
      if (uVar9 == 0) {
        uVar19 = 0;
      }
      else {
        do {
          if (*(char *)(local_548 + uVar5 + uVar7) == ':') {
            uVar19 = CONCAT44(uVar7,1);
            goto LAB_01440388;
          }
          uVar7 = uVar7 + 1;
        } while (uVar9 != uVar7);
        uVar19 = (ulonglong)uVar9 << 0x20;
      }
    }
    else {
      uVar19 = FUN_01307168(0x3a,local_548 + uVar5);
    }
LAB_01440388:
    if ((uVar19 & 1) == 0) break;
  }
  uVar9 = uVar4;
LAB_014403b8:
  FUN_01655be8(&local_4e0,local_548,local_548 + uVar9);
  if (iVar14 == 0) {
    local_4d4 = -0x7fffffff;
  }
  else {
    FUN_01655be8(&local_4d4,iVar14,iVar14 + iVar3);
  }
  iVar3 = local_4d4;
  if (bVar12) {
    uVar11 = 0;
    if (local_4d4 != -0x7fffffff) {
      uVar11 = local_4d0;
    }
    local_484 = uStack_4d8;
    local_488 = local_4dc;
    local_494 = (undefined4 *)thunk_FUN_01be5118(6);
    if (local_494 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    *local_494 = 0x69736142;
    *(undefined2 *)(local_494 + 1) = 0x2063;
    local_498 = (undefined4 *)0x6;
    local_490 = (undefined4 *)0x6;
    uStack_70 = 0;
    local_6e = 0;
    FUN_01bed93e(&local_480,0,0x400);
    local_74 = &DAT_0051cfcc;
    local_80 = &local_498;
    local_4c8 = &local_488;
    local_6d = 0;
    local_78 = 0;
    local_7c = 0;
    local_4c4 = (undefined4 *)&DAT_0132b6a0;
    FUN_014453d8(&local_30,&local_480,&DAT_005888c1,&local_4c8);
    FUN_012c3098((char)local_30,local_2c);
    if (iVar3 != -0x7fffffff) {
      local_4c8 = &local_68;
      local_64 = local_4cc;
      local_4c4 = (undefined4 *)&DAT_0132b6a0;
      local_68 = uVar11;
      FUN_014453d8(&local_30,&local_480,&DAT_00590e5f,&local_4c8);
      FUN_012c3098((char)local_30,local_2c);
    }
    FUN_01445844(&local_480);
    FUN_01ac6204(&local_480,local_494,local_490);
    if ((char)local_470 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_0051d10f,0x22,&local_4c8,&DAT_01d210e8,&DAT_01cf833c);
    }
    local_4c8 = local_480;
    local_4c4 = puStack_47c;
    local_4c0 = local_478;
    puStack_4bc = local_474;
    local_2e = local_470._3_1_;
    local_30 = local_470._1_2_;
    FUN_019bb7e0(local_498,local_494);
    FUN_01440d48(&local_4f8);
    local_4f8 = (undefined4 *)0x80000001;
    piVar17 = (int *)((uint)&local_4f8 | 4);
    *piVar17 = (int)local_4c8;
    piVar17[1] = (int)local_4c4;
    piVar17[2] = (int)local_4c0;
    piVar17[3] = (int)puStack_4bc;
    local_4e4 = (undefined4 *)CONCAT13(local_2e,CONCAT21(local_30,1));
  }
  else {
    FUN_0160ec7c(&local_498,&local_4e0);
    if (local_4d4 == -0x7fffffff) {
      local_4c0 = (undefined4 *)0x0;
      local_4c4 = (undefined4 *)&DAT_00000001;
      local_4c8 = (undefined4 *)0x0;
    }
    else {
      FUN_0160ec7c(&local_4c8,&local_4d4);
    }
    local_480 = local_498;
    puStack_47c = local_494;
    local_478 = local_490;
    local_474 = local_4c8;
    local_470 = local_4c4;
    local_46c = local_4c0;
    FUN_01440d48(&local_4f8);
    local_4f8 = local_480;
    puStack_4f4 = puStack_47c;
    puStack_4f0 = local_478;
    puStack_4ec = local_474;
    puStack_4e8 = local_470;
    local_4e4 = local_46c;
  }
  uVar10 = 4;
  uVar15 = local_528._1_1_;
  uVar13 = local_528._2_1_;
  if ((char)local_528 != '\x04') {
    local_480 = (undefined4 *)CONCAT22(CONCAT11(local_480._3_1_,local_528._2_1_),(short)local_528);
    FUN_01bed4e2((uint)&local_480 | 3,(uint)&local_528 | 3,0x29);
    uVar13 = 9;
    if (local_544 != uVar18) {
      FUN_0140ce9c(&local_30,local_548 + uVar18,iVar16);
      if ((char)local_30 == '\x01') {
        uVar13 = local_30._1_1_;
      }
      else {
        uVar13 = 0;
        if (local_2c == iVar16) {
          FUN_012834b0(&local_4c8,local_548 + uVar18,iVar16);
          puVar2 = local_4c8;
          uVar10 = local_4c4._1_1_;
          uVar13 = (undefined1)local_4c4;
          FUN_01bed4e2(&local_498,(int)&local_4c4 + 2,10);
          if (puVar2 != (undefined4 *)0x0) {
            local_4c8 = local_498;
            local_4c4 = local_494;
            local_4c0 = (undefined4 *)CONCAT22(local_4c0._2_2_,local_490._0_2_);
            if (local_478 != (undefined4 *)0x0) {
              (*(code *)local_478[4])(&local_46c,local_474,local_470);
            }
            local_474 = (undefined4 *)CONCAT31(CONCAT21(local_474._2_2_,uVar10),uVar13);
            local_478 = puVar2;
            FUN_01bed4e2((int)&local_474 + 2,&local_4c8,10);
            uVar10 = (byte)local_480;
            uVar15 = local_480._1_1_;
            uVar13 = local_480._2_1_;
            FUN_01bed4e2(auStack_60,(uint)&local_480 | 3,0x29);
            goto LAB_01440840;
          }
        }
      }
    }
    FUN_0143bfe8(&local_480);
    uVar10 = 4;
    uVar15 = 2;
  }
LAB_01440840:
  local_528 = (undefined4 *)CONCAT31(CONCAT21(CONCAT11(local_528._3_1_,uVar13),uVar15),uVar10);
  FUN_01bed4e2((uint)&local_528 | 3,auStack_60,0x29);
  if (bVar12) {
    if (-0x7fffffff < local_4d4) {
      FUN_019bb7e0(local_4d4,local_4d0);
    }
    if (local_4e0 != -0x80000000) {
      FUN_019bb7e0(local_4e0,local_4dc);
    }
  }
LAB_014401f0:
  local_480 = local_528;
  puStack_47c = local_524;
  local_478 = local_520;
  local_474 = puStack_51c;
  local_470 = puStack_518;
  local_46c = local_514;
  uStack_468 = local_510;
  iStack_464 = iStack_50c;
  uStack_460 = uStack_508;
  uStack_45c = uStack_504;
  uStack_458 = uStack_500;
  FUN_01444c4c(&local_4c8,&local_480,&DAT_005327c4);
  local_528 = local_4c8;
  local_524 = local_4c4;
  local_520 = local_4c0;
  puStack_51c = puStack_4bc;
  puStack_518 = puStack_4b8;
  local_514 = local_4b4;
  local_510 = uStack_4b0;
  iStack_50c = iStack_4ac;
  uStack_508 = uStack_4a8;
  uStack_504 = uStack_4a4;
  uStack_500 = uStack_4a0;
  local_480 = local_4c8;
  puStack_47c = local_4c4;
  local_478 = local_4c0;
  local_474 = puStack_4bc;
  local_470 = puStack_4b8;
  local_46c = local_4b4;
  uStack_468 = uStack_4b0;
  iStack_464 = iStack_4ac;
  uStack_460 = uStack_4a8;
  uStack_45c = uStack_4a4;
  uStack_458 = uStack_4a0;
  FUN_0141240c(&local_4c8,&local_480);
  cVar1 = (char)local_4c8;
  if ((char)local_4c8 != '\x03') {
    FUN_01bed4e2((int)param_1 + 0x19,(uint)&local_4c8 | 1,0x2b);
    *param_1 = (int)local_4f8;
    param_1[1] = (int)puStack_4f4;
    param_1[2] = (int)puStack_4f0;
    param_1[3] = (int)puStack_4ec;
    param_1[4] = (int)puStack_4e8;
    param_1[5] = (int)local_4e4;
    *(char *)(param_1 + 6) = cVar1;
    goto LAB_01440714;
  }
  *param_1 = -0x7ffffffe;
LAB_0144070c:
  FUN_01440d48(&local_4f8);
LAB_01440714:
  FUN_01435814(&local_554);
  return;
}

