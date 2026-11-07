// FUN_01700f78 @ 01700f78 size=5280 calls_out=49 calls_in=0
// strings: reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client

void FUN_01700f78(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  int extraout_r2;
  undefined *puVar13;
  uint extraout_r3;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  char cVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  uint *puVar20;
  char cVar21;
  bool bVar22;
  bool bVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong lVar28;
  undefined1 local_a64;
  undefined4 **local_a48;
  undefined4 **local_a44;
  undefined4 **local_a40;
  undefined4 *puStack_a3c;
  undefined *puStack_a38;
  int local_a34;
  uint local_a30;
  int *local_a2c;
  undefined4 uStack_a28;
  uint uStack_a24;
  undefined1 auStack_a20 [656];
  undefined4 local_790;
  undefined4 local_78c;
  undefined1 local_774;
  undefined1 auStack_76c [12];
  undefined4 **local_760;
  undefined4 **local_75c;
  undefined4 **local_758;
  undefined4 *local_754;
  undefined *local_750;
  int local_74c;
  uint uStack_748;
  int *piStack_744;
  undefined4 uStack_740;
  uint uStack_73c;
  undefined2 local_6e3;
  undefined4 local_4d0;
  undefined4 local_4cc;
  int *local_4c8;
  undefined4 local_4c4;
  undefined4 *local_4c0;
  undefined4 *local_4bc;
  undefined1 local_4b8;
  undefined1 local_4b4;
  ushort local_4b3;
  undefined4 **local_4b0;
  undefined4 **ppuStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 **local_49c;
  undefined4 **ppuStack_498;
  undefined4 **ppuStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  uint local_488;
  int local_484;
  int local_480;
  int local_47c;
  uint local_478;
  undefined4 local_474;
  undefined4 local_470;
  int local_46c;
  undefined4 **local_468;
  uint local_460;
  int local_45c;
  int local_458;
  int local_454;
  uint local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  int local_444;
  undefined4 **ppuStack_440;
  undefined *local_438;
  int local_434;
  undefined8 local_430;
  undefined4 **local_428;
  undefined4 *local_424;
  undefined *local_420;
  int iStack_41c;
  uint local_418;
  int *local_414;
  undefined4 uStack_410;
  uint local_40c;
  undefined4 **local_378;
  undefined8 local_1a0;
  undefined8 local_f0;
  undefined4 *puStack_e8;
  undefined *puStack_e4;
  int local_38;
  int local_34;
  int *local_2c;
  code *local_28;
  
  FUN_019e2844(&local_760,0);
  local_6e3 = 0x101;
  puVar19 = &local_430;
  FUN_019e29f0(puVar19,&local_760);
  if ((undefined4 **)(char *)local_430 == (undefined4 **)0x2) {
    local_1a0._0_4_ = *(int ***)((uint)puVar19 | 4);
    local_1a0._4_4_ = (code *)((int *)((uint)puVar19 | 4))[1];
    local_f0._0_4_ = (undefined4 **)((uint)(undefined4 **)local_f0 & 0xffff0000);
    uVar5 = FUN_016f86d4(&local_f0,&local_1a0);
    uVar24 = FUN_01712b44(*(undefined4 *)(param_1 + 0x294),uVar5);
    iVar7 = (int)(uVar24 >> 0x20);
    if ((uVar24 & 1) != 0) {
      local_1a0._0_4_ = (int **)iVar7;
      if (DAT_01d51b00 != 0) {
        local_f0._4_4_ = FUN_01702fbc;
        local_420 = &DAT_01d19060;
        local_424 = (undefined4 *)&DAT_00000019;
        local_428 = (undefined4 **)0x50c15b;
        local_430._4_4_ = (code *)&DAT_00000019;
        local_430._0_4_ = "reqwest::blocking::client";
        local_f0._0_4_ = (undefined4 **)&local_1a0;
        FUN_0193b350(&DAT_005ae244,&local_f0,1,&local_430);
      }
      if ((int **)local_1a0 != (int **)0x0) {
        FUN_01702f28((int **)local_1a0);
      }
    }
    FUN_01702b38(&local_760);
    FUN_01703244(param_1);
    FUN_01703470(param_1 + 0x290);
    return;
  }
  local_a40 = local_428;
  puStack_a3c = local_424;
  puStack_a38 = local_420;
  local_a34 = iStack_41c;
  local_a30 = local_418;
  local_a2c = local_414;
  uStack_a28 = uStack_410;
  uStack_a24 = local_40c;
  local_a44 = (undefined4 **)local_430._4_4_;
  local_a48 = (undefined4 **)(char *)local_430;
  FUN_01702b38(&local_760);
  FUN_01bed4e2(auStack_a20,param_1,0x290);
  local_790 = *(undefined4 *)(param_1 + 0x290);
  local_78c = *(undefined4 *)(param_1 + 0x294);
  local_774 = 0;
  if (4 < DAT_01d51b00) {
    uVar25 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
    uVar3 = CONCAT44(uStack_490,uStack_48c);
    uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
    uVar26 = CONCAT44(puStack_e8,puStack_e4);
    uVar27 = CONCAT44(local_424,local_420);
    uVar6 = *(uint *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
    if (uVar6 < 3) {
      piVar14 = (int *)FUN_019b03e8();
    }
    else {
      piVar14 = (int *)(uVar6 - 8);
      do {
        iVar7 = *piVar14;
        bVar23 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar23);
      *piVar14 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_017024bc;
    }
    local_f0._0_4_ = (undefined4 **)piVar14[2];
    local_f0._4_4_ = (code *)piVar14[3];
    local_430._4_4_ = FUN_01203168;
    local_430._0_4_ = (char *)&local_f0;
    local_750 = &DAT_01d19020;
    local_754 = (undefined4 *)&DAT_00000019;
    local_758 = (undefined4 **)0x50c15b;
    local_75c = (undefined4 **)&DAT_00000019;
    local_760 = (undefined4 **)0x50c15b;
    FUN_0193b350(&DAT_005ba56c,&local_430,5,&local_760);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar14;
      bVar23 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar23);
    *piVar14 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar14);
    }
  }
  FUN_019f5fcc(auStack_76c,local_a30,local_a2c);
  piVar14 = local_a2c;
  uVar6 = local_a30;
  if (((uint)local_a48 & 1) == 0) {
    uVar5 = FUN_01bed4e2(&local_760,auStack_a20,0x2b0);
    uVar26 = thunk_FUN_01bee35a(uVar5,0x20);
    piVar14 = local_a2c;
    uVar6 = local_a30;
    uVar27 = CONCAT44(local_424,local_420);
    iVar7 = (int)uVar26 + (int)((ulonglong)uVar26 >> 0x20);
    if (*(char *)(iVar7 + 0x38) != '\x01') {
      uVar26 = CONCAT44(puStack_e8,puStack_e4);
      if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_01701284;
      FUN_019a2bcc(iVar7,&LAB_019efb68);
      *(undefined1 *)(iVar7 + 0x38) = 1;
    }
    uVar27 = CONCAT44(local_424,local_420);
    uVar26 = CONCAT44(puStack_e8,puStack_e4);
    uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
    if (*(char *)(iVar7 + 0x32) == '\x02') {
      *(undefined1 *)(iVar7 + 0x32) = 0;
      iVar8 = 0x1f0;
      if ((uVar6 & 1) != 0) {
        iVar8 = 0x128;
      }
      uVar26 = FUN_019f7c78((int)piVar14 + iVar8);
      if ((*(uint *)(iVar7 + 0x24) & 1) == 0) {
        uVar27 = FUN_019e9e08();
        if ((uint)uVar27 < 2) {
          uVar27 = CONCAT44((int)((ulonglong)uVar27 >> 0x20),&DAT_00000001);
        }
      }
      else {
        uVar27 = CONCAT44(*(undefined4 *)(iVar7 + 0x28),*(undefined4 *)(iVar7 + 0x2c));
      }
      *(undefined4 *)(iVar7 + 0x24) = 1;
      *(undefined8 *)(iVar7 + 0x28) = uVar26;
      FUN_019ec774(&local_430,iVar7,uVar6,piVar14);
      local_f0._0_4_ = (undefined4 **)local_430._4_4_;
      local_f0._4_4_ = (code *)local_428;
      lVar28 = CONCAT44(local_428,local_430._4_4_);
      uVar26 = uVar27;
      if ((char *)local_430 == &SUB_00000004) {
LAB_01701284:
        puStack_e8 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
        puStack_e4 = (undefined *)uVar26;
        local_424 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
        local_420 = (undefined *)uVar27;
                    /* WARNING: Subroutine does not return */
        FUN_019b0950(&DAT_01d301c0);
      }
      local_4b0 = (undefined4 **)local_430._4_4_;
      ppuStack_4ac = local_428;
      uVar2 = uVar27;
      if ((char *)local_430 != &DAT_00000003) {
        local_49c = (undefined4 **)(char *)local_430;
        ppuStack_498 = (undefined4 **)local_430._4_4_;
        ppuStack_494 = local_428;
        if ((local_a30 & 1) == 0) {
          cVar17 = '\0';
          local_f0 = CONCAT44(local_428,local_430._4_4_);
          uVar3 = uVar27;
LAB_0170159c:
          piVar14 = local_a2c;
          iVar8 = local_a34;
          uStack_490 = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_48c = (undefined4)uVar3;
          uStack_4a8 = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_4a4 = (undefined4)uVar2;
          puStack_e8 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
          puStack_e4 = (undefined *)uVar26;
          local_424 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
          local_420 = (undefined *)uVar27;
          DataMemoryBarrier(0xb);
          do {
            bVar23 = (bool)hasExclusiveAccess(&local_a34);
          } while (!bVar23);
          local_a34 = 0;
          DataMemoryBarrier(0xb);
          if (iVar8 == 0) {
            DataMemoryBarrier(0xb);
            local_414 = (int *)((uint)local_414 & 0xffffff00);
            local_430._4_4_ = (code *)((uint)local_a44 >> 2);
            local_418 = 0;
            local_420 = (undefined *)0x0;
            local_424 = (undefined4 *)0x0;
            local_428 = (undefined4 **)0x0;
            local_430._0_4_ = (char *)((uint)&local_a48 | 4);
            lVar28 = FUN_019ee710();
            if ((int)lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc("Failed to `Enter::block_on`",0x1b,&local_1a0,&DAT_01d29600,&DAT_01d1cb8c
                          );
            }
            local_f0 = lVar28;
            do {
              cVar21 = *(char *)(iVar7 + 0x38);
              if (cVar21 == '\x01') {
LAB_01701638:
                cVar21 = *(char *)(iVar7 + 0x30);
                puVar19 = (undefined8 *)(uint)*(byte *)(iVar7 + 0x31);
                *(undefined2 *)(iVar7 + 0x30) = 0x8001;
              }
              else if (cVar21 != '\x02') {
                FUN_019a2bcc(iVar7,&LAB_019efb68);
                *(undefined1 *)(iVar7 + 0x38) = 1;
                goto LAB_01701638;
              }
              iVar8 = FUN_019e0cbc(&local_430,&local_f0);
              uVar6 = 0;
              if (iVar8 != 0) {
                iVar8 = FUN_01706210(&local_760,&local_f0);
                uVar6 = 1;
                if (iVar8 != 0) {
                  uVar6 = 2;
                }
              }
              if (cVar21 != '\x02') {
                if (*(char *)(iVar7 + 0x38) != '\x01') {
                  if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_017016b8;
                  FUN_019a2bcc(iVar7,&LAB_019efb68);
                  *(undefined1 *)(iVar7 + 0x38) = 1;
                }
                *(char *)(iVar7 + 0x31) = (char)puVar19;
                *(char *)(iVar7 + 0x30) = cVar21;
              }
LAB_017016b8:
              if (uVar6 != 2) goto LAB_017016c8;
              FUN_019ee698();
            } while( true );
          }
          do {
            iVar9 = *local_a2c;
            bVar23 = (bool)hasExclusiveAccess(local_a2c);
          } while (!bVar23);
          *local_a2c = iVar9 + 1;
          if (iVar9 < 0) goto LAB_017024bc;
          local_46c = 0;
          local_470 = 4;
          local_474 = 0;
          local_478 = 0;
          local_47c = iVar8;
          local_480 = 0;
          local_468 = (undefined4 **)((uint)&local_a48 | 4);
          uVar25 = thunk_FUN_01bee35a(iVar8,local_a2c,0x240);
          uVar3 = CONCAT44(uStack_490,uStack_48c);
          uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
          uVar26 = CONCAT44(puStack_e8,puStack_e4);
          uVar27 = CONCAT44(local_424,local_420);
          local_484 = (int)((ulonglong)uVar25 >> 0x20);
          puVar20 = (uint *)((int)uVar25 + extraout_r2);
          uVar6 = *puVar20;
          local_488 = extraout_r3;
          if (uVar6 < 3) {
            uVar25 = FUN_019b03e8();
          }
          else {
            piVar15 = (int *)(uVar6 - 8);
            do {
              iVar8 = *piVar15;
              iVar9 = iVar8 + 1;
              uVar25 = CONCAT44(iVar9,piVar15);
              bVar23 = (bool)hasExclusiveAccess(piVar15);
            } while (!bVar23);
            *piVar15 = iVar9;
            if (iVar8 < 0) goto LAB_017024bc;
          }
          piVar15 = (int *)uVar25;
          FUN_019f8618(piVar14 + 0x20,(int)((ulonglong)uVar25 >> 0x20),piVar15[2],piVar15[3]);
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar15;
            bVar23 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar23);
          *piVar15 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019a2ffc(piVar15);
          }
          iVar8 = local_47c;
          local_460 = local_488;
          local_45c = local_484;
          local_458 = local_480;
          local_454 = local_47c;
          local_450 = local_478;
          uStack_44c = local_474;
          uStack_448 = local_470;
          local_444 = local_46c;
          ppuStack_440 = local_468;
          if ((local_488 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("expected `CurrentThread::Context`",0x43,&DAT_01d291d4);
          }
          if (local_480 != 0) {
            FUN_01306fc8(&DAT_01d291e4);
            uVar3 = CONCAT44(uStack_490,uStack_48c);
            uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
            uVar26 = CONCAT44(puStack_e8,puStack_e4);
            uVar27 = CONCAT44(local_424,local_420);
            goto LAB_017024bc;
          }
          local_458 = 0xffffffff;
          local_454 = 0;
          if (local_47c == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("core missing",0xc,&DAT_01d291f4);
          }
          local_458 = 0;
          if (*(char *)(iVar7 + 0x38) != '\x01') {
            if (*(char *)(iVar7 + 0x38) == '\x02') {
              FUN_016fb24c(local_47c);
                    /* WARNING: Subroutine does not return */
              FUN_019b0950(&DAT_01d301c0);
            }
            FUN_019a2bcc(iVar7,&LAB_019efb68);
            *(undefined1 *)(iVar7 + 0x38) = 1;
          }
          uVar5 = *(undefined4 *)(iVar7 + 0x20);
          *(uint **)(iVar7 + 0x20) = &local_460;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(local_45c + 0x17c) = 1;
          local_434 = local_45c + 0x80;
          local_438 = &DAT_01d292e4;
          FUN_019ac130(&local_430,1);
          uVar6 = (uint)&local_460 | 4;
          *(char **)(iVar8 + 0x28) = (char *)local_430;
          *(code **)(iVar8 + 0x2c) = local_430._4_4_;
          *(undefined4 ***)(iVar8 + 0x30) = local_428;
LAB_01701958:
          DataMemoryBarrier(0xb);
          pcVar12 = (char *)(local_45c + 0x17c);
          do {
            cVar21 = *pcVar12;
            bVar23 = (bool)hasExclusiveAccess(pcVar12);
          } while (!bVar23);
          *pcVar12 = '\0';
          DataMemoryBarrier(0xb);
          if (cVar21 != '\0') {
            if (local_458 != 0) {
              FUN_01306fc8(&DAT_01d291a4);
              uVar3 = CONCAT44(uStack_490,uStack_48c);
              uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
              uVar26 = CONCAT44(puStack_e8,puStack_e4);
              uVar27 = CONCAT44(local_424,local_420);
              goto LAB_017024bc;
            }
            local_458 = -1;
            if (local_454 == 0) {
              local_458 = 0;
            }
            else {
              FUN_016fb24c();
              local_458 = local_458 + 1;
            }
            cVar17 = *(char *)(iVar7 + 0x38);
            local_454 = iVar8;
            if (cVar17 == '\x01') {
LAB_017019f0:
              cVar17 = *(char *)(iVar7 + 0x30);
              local_a64 = *(undefined1 *)(iVar7 + 0x31);
              *(undefined2 *)(iVar7 + 0x30) = 0x8001;
            }
            else if (cVar17 != '\x02') {
              FUN_019a2bcc(iVar7,&LAB_019efb68);
              *(undefined1 *)(iVar7 + 0x38) = 1;
              goto LAB_017019f0;
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(local_4b4) {
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01d1940c);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01d1940c);
            case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(local_4b8) {
              case 0:
                goto LAB_01701c18;
              case 1:
                    /* WARNING: Subroutine does not return */
                FUN_013079f0(&DAT_01d1f140);
              case 2:
                    /* WARNING: Subroutine does not return */
                FUN_01307a10(&DAT_01d1f140);
              case 3:
                goto LAB_01701c1c;
              }
            }
            local_4b3 = 0x101;
            FUN_01bed4e2(&local_430,&local_760,0x290);
            uVar24 = FUN_017367e8(&local_430);
            if ((uVar24 & 1) == 0) {
              local_4b3 = local_4b3 & 0xff;
              local_4c8 = (int *)(uVar24 >> 0x20);
              uVar24 = FUN_01712b44(local_4cc,0);
              piVar14 = (int *)(uVar24 >> 0x20);
              if ((uVar24 & 1) == 0) {
                local_4b3 = local_4b3 & 0xff00;
                local_4c4 = local_4d0;
LAB_01702064:
                do {
                  local_4b8 = 0;
                  local_4c0 = &local_4c4;
LAB_01701c18:
                  local_4bc = local_4c0;
LAB_01701c1c:
                  FUN_017445a8(&local_430,*local_4bc,&local_438);
                  lVar28 = local_430;
                  local_4b8 = 1;
                  if (local_430 == 4) {
                    local_4b8 = 3;
                    bVar23 = true;
                    uVar18 = 3;
                    goto LAB_01701c54;
                  }
                  FUN_01bed4e2(&local_1a0,&local_428,0xb0);
                  ppuVar4 = local_378;
                  uVar3 = CONCAT44(uStack_490,uStack_48c);
                  uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
                  uVar26 = CONCAT44(puStack_e8,puStack_e4);
                  uVar27 = CONCAT44(local_424,local_420);
                  if (lVar28 == 3) goto code_r0x01701e4c;
                  local_f0 = lVar28;
                  FUN_01bed4e2(&puStack_e8,&local_1a0,0xb0);
                  lVar28 = FUN_0173a7d0(local_4c8,&local_f0);
                  local_40c = local_40c & 0xffffff00;
                  local_428 = ppuVar4;
                  local_430 = lVar28;
                  piVar14 = (int *)FUN_01705b4c(&local_430,&DAT_01d1941c);
                  if (*piVar14 == 0xcc) {
                    DataMemoryBarrier(0xb);
                    bVar23 = (bool)hasExclusiveAccess(piVar14);
                    if (bVar23) {
                      *piVar14 = 0x84;
                      goto LAB_01702064;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  (**(code **)(piVar14[2] + 0x10))();
                } while( true );
              }
              local_2c = piVar14;
              if (DAT_01d51b00 != 0) {
                local_1a0._0_4_ = &local_2c;
                local_1a0._4_4_ = FUN_01702fbc;
                local_424 = (undefined4 *)&DAT_00000019;
                local_420 = &DAT_01d193ec;
                local_430._4_4_ = (code *)&DAT_00000019;
                local_428 = (undefined4 **)0x50c15b;
                local_430._0_4_ = "reqwest::blocking::client";
                FUN_0193b350(&DAT_005b5343,&local_1a0,1,&local_430);
              }
              if (local_2c != (int *)0x0) {
                FUN_017109f8(local_2c);
              }
              DataMemoryBarrier(0xb);
              do {
                iVar8 = *local_4c8;
                bVar23 = (bool)hasExclusiveAccess(local_4c8);
              } while (!bVar23);
              *local_4c8 = iVar8 + -1;
              if (iVar8 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01703cd8(local_4c8);
              }
            }
            else {
              local_4b3 = local_4b3 & 0xff;
              uVar24 = FUN_01712b44(local_4cc);
              piVar14 = (int *)(uVar24 >> 0x20);
              if ((uVar24 & 1) != 0) {
                local_2c = piVar14;
                if (DAT_01d51b00 != 0) {
                  local_1a0._0_4_ = &local_2c;
                  local_1a0._4_4_ = FUN_01702fbc;
                  local_424 = (undefined4 *)&DAT_00000019;
                  local_420 = &DAT_01d193fc;
                  local_430._4_4_ = (code *)&DAT_00000019;
                  local_428 = (undefined4 **)0x50c15b;
                  local_430._0_4_ = "reqwest::blocking::client";
                  FUN_0193b350(&DAT_00596e89,&local_1a0,1,&local_430);
                }
                if (local_2c != (int *)0x0) {
                  FUN_017109f8(local_2c);
                }
              }
            }
            FUN_01703470(&local_4d0);
            bVar23 = false;
            uVar18 = 1;
            goto LAB_01701c54;
          }
          goto LAB_01701cc8;
        }
        uVar5 = 0x35;
        puVar13 = &DAT_01d297b0;
        pcVar12 = "not a CurrentThre";
        uVar3 = uVar27;
        goto LAB_01701844;
      }
    }
    uStack_4a8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_4a4 = (undefined4)uVar2;
    puStack_e8 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
    puStack_e4 = (undefined *)uVar26;
    local_424 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
    local_420 = (undefined *)uVar27;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                 ,0x183,&DAT_01d19030);
  }
  uVar26 = thunk_FUN_01bee35a(local_a48,0x20);
  uVar27 = CONCAT44(local_754,local_750);
  iVar7 = (int)uVar26 + (int)((ulonglong)uVar26 >> 0x20);
  if (*(char *)(iVar7 + 0x38) != '\x01') {
    uVar26 = CONCAT44(local_428,local_424);
    if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_0170123c;
    FUN_019a2bcc(iVar7,&LAB_019efb68);
    *(undefined1 *)(iVar7 + 0x38) = 1;
  }
  uVar27 = CONCAT44(local_754,local_750);
  uVar26 = CONCAT44(local_428,local_424);
  uVar2 = CONCAT44(puStack_e8,puStack_e4);
  if (*(char *)(iVar7 + 0x32) == '\x02') {
    *(undefined1 *)(iVar7 + 0x32) = 1;
    iVar8 = 0x1f0;
    if ((uVar6 & 1) != 0) {
      iVar8 = 0x128;
    }
    uVar26 = FUN_019f7c78((int)piVar14 + iVar8);
    if ((*(uint *)(iVar7 + 0x24) & 1) == 0) {
      uVar27 = FUN_019e9e08();
      if ((uint)uVar27 < 2) {
        uVar27 = CONCAT44((int)((ulonglong)uVar27 >> 0x20),&DAT_00000001);
      }
    }
    else {
      uVar27 = CONCAT44(*(undefined4 *)(iVar7 + 0x28),*(undefined4 *)(iVar7 + 0x2c));
    }
    puVar16 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
    puVar13 = (undefined *)uVar27;
    *(undefined4 *)(iVar7 + 0x24) = 1;
    *(undefined8 *)(iVar7 + 0x28) = uVar26;
    FUN_019ec774(&local_760,iVar7,uVar6,piVar14);
    local_430._0_4_ = (char *)local_75c;
    local_430._4_4_ = (code *)local_758;
    uVar26 = uVar27;
    if (local_760 == (undefined4 **)&SUB_00000004) {
LAB_0170123c:
      local_428 = (undefined4 **)((ulonglong)uVar26 >> 0x20);
      local_424 = (undefined4 *)uVar26;
      local_754 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
      local_750 = (undefined *)uVar27;
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    local_f0._0_4_ = local_75c;
    local_f0._4_4_ = (code *)local_758;
    uVar2 = uVar27;
    if (local_760 != (undefined4 **)&DAT_00000003) {
      local_430._0_4_ = (char *)local_760;
      local_430._4_4_ = (code *)local_75c;
      local_428 = local_758;
      local_754 = puVar16;
      local_750 = puVar13;
      local_424 = puVar16;
      local_420 = puVar13;
      puStack_e8 = puVar16;
      puStack_e4 = puVar13;
      local_1a0 = FUN_019ee710();
      uVar24 = (ulonglong)local_1a0 >> 0x20;
      iVar8 = (int)local_1a0;
      if (iVar8 == 0) {
        FUN_01702e50(auStack_a20);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("failed to park thread",0x15,&local_1a0,&DAT_01d29600,&DAT_01d1cb6c);
      }
      FUN_01bed4e2(&local_760,auStack_a20,0x2b0);
      do {
        cVar17 = *(char *)(iVar7 + 0x38);
        if (cVar17 == '\x01') {
LAB_017013f4:
          cVar17 = *(char *)(iVar7 + 0x30);
          puVar16 = (undefined4 *)(uint)*(byte *)(iVar7 + 0x31);
          *(undefined2 *)(iVar7 + 0x30) = 0x8001;
        }
        else if (cVar17 != '\x02') {
          FUN_019a2bcc(iVar7,&LAB_019efb68);
          *(undefined1 *)(iVar7 + 0x38) = 1;
          goto LAB_017013f4;
        }
        iVar9 = FUN_01706210(&local_760,&local_1a0);
        if (cVar17 != '\x02') {
          if (*(char *)(iVar7 + 0x38) != '\x01') {
            if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_0170144c;
            FUN_019a2bcc(iVar7,&LAB_019efb68);
            *(undefined1 *)(iVar7 + 0x38) = 1;
          }
          *(char *)(iVar7 + 0x31) = (char)puVar16;
          *(char *)(iVar7 + 0x30) = cVar17;
        }
LAB_0170144c:
        if (iVar9 == 0) goto LAB_0170145c;
        FUN_019ee698();
      } while( true );
    }
  }
  puStack_e8 = (undefined4 *)((ulonglong)uVar2 >> 0x20);
  puStack_e4 = (undefined *)uVar2;
  local_428 = (undefined4 **)((ulonglong)uVar26 >> 0x20);
  local_424 = (undefined4 *)uVar26;
  local_754 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
  local_750 = (undefined *)uVar27;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
               ,0x183,&DAT_01d1dbac);
LAB_017016c8:
  (**(code **)((int)lVar28 + 0xc))((int)((ulonglong)lVar28 >> 0x20));
  FUN_019ede44(&local_430);
  uVar3 = CONCAT44(uStack_490,uStack_48c);
  uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
  uVar26 = CONCAT44(puStack_e8,puStack_e4);
  uVar27 = CONCAT44(local_424,local_420);
  if ((uVar6 & 1) != 0) goto LAB_01702104;
  goto LAB_0170159c;
code_r0x01701e4c:
  if (4 < DAT_01d51b00) {
    uVar11 = *puVar20;
    if (uVar11 < 3) {
      piVar14 = (int *)FUN_019b03e8();
    }
    else {
      piVar14 = (int *)(uVar11 - 8);
      do {
        iVar8 = *piVar14;
        bVar23 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar23);
      *piVar14 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_017024bc;
    }
    local_38 = piVar14[2];
    local_34 = piVar14[3];
    local_28 = FUN_01203168;
    local_2c = &local_38;
    local_424 = (undefined4 *)&DAT_00000019;
    local_420 = &DAT_01d1942c;
    local_430._4_4_ = (code *)&DAT_00000019;
    local_428 = (undefined4 **)0x50c15b;
    local_430._0_4_ = "reqwest::blocking::client";
    FUN_0193b350(&DAT_005871b3,&local_2c,5,&local_430);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar14;
      bVar23 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar23);
    *piVar14 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar14);
    }
  }
  FUN_01703470(&local_4c4);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *local_4c8;
    bVar23 = (bool)hasExclusiveAccess(local_4c8);
  } while (!bVar23);
  *local_4c8 = iVar8 + -1;
  bVar23 = false;
  uVar18 = 1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01703cd8(local_4c8);
  }
LAB_01701c54:
  local_4b4 = uVar18;
  if (cVar17 != '\x02') {
    if (*(char *)(iVar7 + 0x38) != '\x01') {
      if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_01701c98;
      FUN_019a2bcc(iVar7,&LAB_019efb68);
      *(undefined1 *)(iVar7 + 0x38) = 1;
    }
    *(undefined1 *)(iVar7 + 0x31) = local_a64;
    *(char *)(iVar7 + 0x30) = cVar17;
  }
LAB_01701c98:
  iVar8 = local_454;
  if (local_458 != 0) {
    FUN_01306fc8(&DAT_01d291b4);
    uVar3 = CONCAT44(uStack_490,uStack_48c);
    uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
    uVar26 = CONCAT44(puStack_e8,puStack_e4);
    uVar27 = CONCAT44(local_424,local_420);
    goto LAB_017024bc;
  }
  local_458 = 0xffffffff;
  bVar22 = local_454 == 0;
  local_454 = 0;
  if (bVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("core missing",0xc,&DAT_01d291c4);
  }
  local_458 = 0;
  if (!bVar23) goto LAB_017022fc;
LAB_01701cc8:
  for (iVar9 = *(int *)(local_45c + 0x144); iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*(char *)(iVar8 + 100) != '\0') {
      bVar23 = false;
      *(undefined4 *)(iVar7 + 0x20) = uVar5;
      if (local_458 == 0) goto LAB_01702098;
      FUN_01306fc8(&DAT_01d29204);
      uVar3 = CONCAT44(uStack_490,uStack_48c);
      uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
      uVar26 = CONCAT44(puStack_e8,puStack_e4);
      uVar27 = CONCAT44(local_424,local_420);
      goto LAB_017024bc;
    }
    *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x38) + 1;
    iVar10 = FUN_019e61ac(iVar8,local_45c + 0x80);
    if (iVar10 == 0) {
      FUN_019f60ac(iVar8 + 0x10);
      if (0x7ffffffe < local_450) {
                    /* WARNING: Subroutine does not return */
        FUN_0130701c(&DAT_01d29b18);
      }
      if (local_444 == 0) {
        iVar8 = FUN_019e6558(uVar6,iVar8,local_45c + 0x80);
      }
      else {
        iVar8 = FUN_019e6284(uVar6,iVar8);
      }
      FUN_019ac130(&local_430,1);
      goto LAB_0170203c;
    }
    if (local_458 != 0) {
      FUN_01306fc8(&DAT_01d291a4);
      uVar3 = CONCAT44(uStack_490,uStack_48c);
      uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
      uVar26 = CONCAT44(puStack_e8,puStack_e4);
      uVar27 = CONCAT44(local_424,local_420);
      goto LAB_017024bc;
    }
    local_458 = -1;
    if (local_454 == 0) {
      local_458 = 0;
    }
    else {
      FUN_016fb24c();
      local_458 = local_458 + 1;
    }
    cVar21 = *(char *)(iVar7 + 0x38);
    local_454 = iVar8;
    if (cVar21 == '\x01') {
LAB_01701d74:
      cVar21 = *(char *)(iVar7 + 0x30);
      cVar17 = *(char *)(iVar7 + 0x31);
      *(undefined2 *)(iVar7 + 0x30) = 0x8001;
    }
    else if (cVar21 != '\x02') {
      FUN_019a2bcc(iVar7,&LAB_019efb68);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_01701d74;
    }
    (*(code *)**(undefined4 **)(iVar10 + 8))(iVar10);
    if (cVar21 != '\x02') {
      if (*(char *)(iVar7 + 0x38) != '\x01') {
        if (*(char *)(iVar7 + 0x38) == '\x02') goto LAB_01701dd0;
        FUN_019a2bcc(iVar7,&LAB_019efb68);
        *(undefined1 *)(iVar7 + 0x38) = 1;
      }
      *(char *)(iVar7 + 0x31) = cVar17;
      *(char *)(iVar7 + 0x30) = cVar21;
    }
LAB_01701dd0:
    iVar8 = local_454;
    if (local_458 != 0) {
      FUN_01306fc8(&DAT_01d291b4);
      uVar3 = CONCAT44(uStack_490,uStack_48c);
      uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
      uVar26 = CONCAT44(puStack_e8,puStack_e4);
      uVar27 = CONCAT44(local_424,local_420);
      goto LAB_017024bc;
    }
    local_458 = 0xffffffff;
    bVar23 = local_454 == 0;
    local_454 = 0;
    if (bVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("core missing",0xc,&DAT_01d291c4);
    }
    local_458 = 0;
  }
  FUN_019f60ac(iVar8 + 0x10);
  iVar8 = FUN_019e6284(uVar6,iVar8,local_45c + 0x80);
  FUN_019ac130(&local_430,1);
LAB_0170203c:
  *(longlong *)(iVar8 + 0x28) = local_430;
  *(undefined4 ***)(iVar8 + 0x30) = local_428;
  goto LAB_01701958;
LAB_0170145c:
  FUN_01702e50(&local_760);
  (**(code **)(iVar8 + 0xc))((int)uVar24);
  FUN_01704854(&local_430);
  goto LAB_01702118;
LAB_017022fc:
  bVar23 = true;
  *(undefined4 *)(iVar7 + 0x20) = uVar5;
LAB_01702098:
  local_458 = -1;
  if (local_454 == 0) {
    local_458 = 0;
  }
  else {
    FUN_016fb24c();
    local_458 = local_458 + 1;
  }
  local_454 = iVar8;
  FUN_00772358(&local_460);
  uVar27 = CONCAT44(local_424,local_420);
  if (!bVar23) {
    uVar5 = 0xab;
    puVar13 = &DAT_01d1cb7c;
    pcVar12 = 
    "a spawned task panicked and the runtime is configured to shut down on unhandled panic";
    uVar26 = CONCAT44(puStack_e8,puStack_e4);
    lVar28 = local_f0;
    uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
    uVar3 = CONCAT44(uStack_490,uStack_48c);
LAB_01701844:
    uStack_490 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_48c = (undefined4)uVar3;
    uStack_4a8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_4a4 = (undefined4)uVar2;
    puStack_e8 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
    puStack_e4 = (undefined *)uVar26;
    local_424 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
    local_420 = (undefined *)uVar27;
    local_f0 = lVar28;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(pcVar12,uVar5,puVar13);
  }
LAB_01702104:
  FUN_01704854(&local_49c);
  FUN_01702e50(&local_760);
LAB_01702118:
  FUN_01704808(auStack_76c);
  if (4 < DAT_01d51b00) {
    uVar25 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
    uVar3 = CONCAT44(uStack_490,uStack_48c);
    uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
    uVar26 = CONCAT44(puStack_e8,puStack_e4);
    uVar27 = CONCAT44(local_424,local_420);
    uVar6 = *(uint *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
    if (uVar6 < 3) {
      piVar14 = (int *)FUN_019b03e8();
    }
    else {
      piVar14 = (int *)(uVar6 - 8);
      do {
        iVar7 = *piVar14;
        bVar23 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar23);
      *piVar14 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_017024bc;
    }
    local_f0._0_4_ = (undefined4 **)piVar14[2];
    local_f0._4_4_ = (code *)piVar14[3];
    local_430._4_4_ = FUN_01203168;
    local_430._0_4_ = (char *)&local_f0;
    local_750 = &DAT_01d19040;
    local_754 = (undefined4 *)0x19;
    local_758 = (undefined4 **)0x50c15b;
    local_75c = (undefined4 **)0x19;
    local_760 = (undefined4 **)0x50c15b;
    FUN_0193b350(&DAT_005a310c,&local_430,5,&local_760);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar14;
      bVar23 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar23);
    *piVar14 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar14);
    }
  }
  local_760 = local_a48;
  local_75c = local_a44;
  local_758 = local_a40;
  local_754 = puStack_a3c;
  local_750 = puStack_a38;
  local_74c = local_a34;
  uStack_748 = local_a30;
  piStack_744 = local_a2c;
  uStack_740 = uStack_a28;
  uStack_73c = uStack_a24;
  FUN_017d2538();
  if (4 < DAT_01d51b00) {
    uVar25 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
    uVar3 = CONCAT44(uStack_490,uStack_48c);
    uVar2 = CONCAT44(uStack_4a8,uStack_4a4);
    uVar26 = CONCAT44(puStack_e8,puStack_e4);
    uVar27 = CONCAT44(local_424,local_420);
    uVar6 = *(uint *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
    if (uVar6 < 3) {
      piVar14 = (int *)FUN_019b03e8();
    }
    else {
      piVar14 = (int *)(uVar6 - 8);
      do {
        iVar7 = *piVar14;
        bVar23 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar23);
      *piVar14 = iVar7 + 1;
      if (iVar7 < 0) {
LAB_017024bc:
        uStack_490 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_48c = (undefined4)uVar3;
        uStack_4a8 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_4a4 = (undefined4)uVar2;
        puStack_e8 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
        puStack_e4 = (undefined *)uVar26;
        local_424 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
        local_420 = (undefined *)uVar27;
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x17024bc);
        (*pcVar1)();
      }
    }
    local_f0._0_4_ = (undefined4 **)piVar14[2];
    local_f0._4_4_ = (code *)piVar14[3];
    local_430._4_4_ = FUN_01203168;
    local_430._0_4_ = (char *)&local_f0;
    local_750 = &DAT_01d19050;
    local_754 = (undefined4 *)0x19;
    local_758 = (undefined4 **)0x50c15b;
    local_75c = (undefined4 **)0x19;
    local_760 = (undefined4 **)0x50c15b;
    FUN_0193b350(&DAT_005a7ed8,&local_430,5,&local_760);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar14;
      bVar23 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar23);
    *piVar14 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar14);
    }
  }
  return;
}

