// FUN_017d1010 @ 017d1010 size=4036 calls_out=42 calls_in=0
// strings: reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client

void FUN_017d1010(int param_1)

{
  code *pcVar1;
  code cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 **extraout_r2;
  undefined *puVar13;
  int extraout_r3;
  uint uVar14;
  int *piVar15;
  undefined4 **ppuVar16;
  char cVar17;
  undefined4 *puVar18;
  undefined4 **ppuVar19;
  bool bVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined4 **local_480;
  undefined4 **local_47c;
  undefined4 **local_478;
  undefined4 **ppuStack_474;
  undefined4 **ppuStack_470;
  int local_46c;
  uint local_468;
  int *local_464;
  undefined4 **ppuStack_460;
  undefined4 uStack_45c;
  undefined4 **local_458;
  undefined4 **local_454;
  undefined4 **local_450;
  undefined4 **local_44c;
  undefined4 **local_448;
  int iStack_444;
  uint local_440;
  int *local_43c;
  undefined4 **ppuStack_438;
  undefined4 uStack_434;
  undefined1 auStack_430 [424];
  undefined4 local_288;
  undefined4 local_284;
  undefined1 local_26c;
  undefined1 auStack_264 [12];
  undefined4 **local_258;
  undefined4 **local_254;
  undefined4 **local_250;
  undefined4 **local_24c;
  undefined4 **local_248;
  int local_244;
  uint uStack_240;
  int *piStack_23c;
  undefined4 **ppuStack_238;
  undefined4 uStack_234;
  undefined2 local_1db;
  undefined4 **local_90;
  undefined4 **ppuStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 local_7c;
  undefined4 **ppuStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 **local_60;
  undefined4 **local_5c;
  undefined4 **local_58;
  int local_54;
  uint local_50;
  int *local_4c;
  undefined4 **local_48;
  undefined *local_40;
  undefined4 **local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  FUN_019e2844(&local_258,0);
  local_1db = 0x101;
  FUN_019e29f0(&local_458,&local_258);
  if (local_458 == (undefined4 **)0x2) {
    piVar6 = (int *)((uint)&local_458 | 4);
    local_68._0_4_ = (undefined4 **)*piVar6;
    local_68._4_4_ = (code *)piVar6[1];
    uVar7 = FUN_017f0948(0,&local_68);
    uVar21 = FUN_017cccc8(*(undefined4 *)(param_1 + 0x1ac),uVar7);
    iVar9 = (int)(uVar21 >> 0x20);
    if ((uVar21 & 1) != 0) {
      local_7c._0_4_ = (undefined4 **)iVar9;
      if (DAT_01d51b00 != 0) {
        local_68._0_4_ = (undefined4 **)&local_7c;
        local_68._4_4_ = FUN_017d26c0;
        local_448 = (undefined4 **)&DAT_01d1ca3c;
        local_44c = (undefined4 **)&DAT_00000019;
        local_450 = (undefined4 **)0x50c15b;
        local_454 = (undefined4 **)&DAT_00000019;
        local_458 = (undefined4 **)0x50c15b;
        FUN_0193b350(&DAT_005ae244,&local_68,1,&local_458);
      }
      if ((undefined4 **)local_7c != (undefined4 **)0x0) {
        FUN_017c21dc((undefined4 **)local_7c);
      }
    }
    FUN_01702b38(&local_258);
    FUN_017cbc54(param_1);
    FUN_017cbd88(param_1 + 0x1a8);
    return;
  }
  local_478 = local_450;
  ppuStack_474 = local_44c;
  ppuStack_470 = local_448;
  local_46c = iStack_444;
  local_468 = local_440;
  local_464 = local_43c;
  ppuStack_460 = ppuStack_438;
  uStack_45c = uStack_434;
  local_47c = local_454;
  local_480 = local_458;
  FUN_01702b38(&local_258);
  FUN_01bed4e2(auStack_430,param_1,0x1a8);
  local_288 = *(undefined4 *)(param_1 + 0x1a8);
  local_284 = *(undefined4 *)(param_1 + 0x1ac);
  local_26c = 0;
  if (4 < DAT_01d51b00) {
    uVar22 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
    uVar5 = CONCAT44(uStack_88,uStack_6c);
    uVar4 = CONCAT44(local_60,uStack_84);
    uVar21 = CONCAT44(local_44c,local_5c);
    uVar8 = *(uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
    if (uVar8 < 3) {
      piVar6 = (int *)FUN_019b03e8();
    }
    else {
      piVar6 = (int *)(uVar8 - 8);
      do {
        iVar9 = *piVar6;
        bVar20 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar20);
      *piVar6 = iVar9 + 1;
      lVar25 = CONCAT44(local_68._4_4_,(undefined4 **)local_68);
      if (iVar9 < 0) goto LAB_017d2000;
    }
    local_68._0_4_ = (undefined4 **)piVar6[2];
    local_68._4_4_ = (code *)piVar6[3];
    local_454 = (undefined4 **)FUN_01203168;
    local_458 = (undefined4 **)&local_68;
    local_248 = (undefined4 **)&DAT_01d1c9fc;
    local_24c = (undefined4 **)&DAT_00000019;
    local_250 = (undefined4 **)0x50c15b;
    local_254 = (undefined4 **)&DAT_00000019;
    local_258 = (undefined4 **)0x50c15b;
    FUN_0193b350(&DAT_005ba56c,&local_458,5,&local_258);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar6;
      bVar20 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar20);
    *piVar6 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar6);
    }
  }
  FUN_019f5fcc(auStack_264,local_468,local_464);
  piVar6 = local_464;
  uVar8 = local_468;
  if (((uint)local_480 & 1) == 0) {
    uVar7 = FUN_01bed4e2(&local_258,auStack_430,0x1c8);
    uVar22 = thunk_FUN_01bee35a(uVar7,0x20);
    piVar6 = local_464;
    uVar8 = local_468;
    uVar24 = CONCAT44(local_44c,local_448);
    iVar9 = (int)uVar22 + (int)((ulonglong)uVar22 >> 0x20);
    if (*(char *)(iVar9 + 0x38) != '\x01') {
      uVar21 = CONCAT44(local_60,local_5c);
      if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_017d12fc;
      FUN_019a2bcc(iVar9,&LAB_019efb68);
      *(undefined1 *)(iVar9 + 0x38) = 1;
    }
    uVar24 = CONCAT44(local_44c,local_448);
    uVar21 = CONCAT44(local_60,local_5c);
    uVar4 = CONCAT44(uStack_88,uStack_84);
    if (*(char *)(iVar9 + 0x32) == '\x02') {
      *(undefined1 *)(iVar9 + 0x32) = 0;
      iVar10 = 0x1f0;
      if ((uVar8 & 1) != 0) {
        iVar10 = 0x128;
      }
      uVar22 = FUN_019f7c78((int)piVar6 + iVar10);
      if ((*(uint *)(iVar9 + 0x24) & 1) == 0) {
        uVar24 = FUN_019e9e08();
        if ((uint)uVar24 < 2) {
          uVar24 = CONCAT44((int)(uVar24 >> 0x20),&DAT_00000001);
        }
      }
      else {
        uVar24 = CONCAT44(*(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x2c));
      }
      *(undefined4 *)(iVar9 + 0x24) = 1;
      *(undefined8 *)(iVar9 + 0x28) = uVar22;
      FUN_019ec774(&local_458,iVar9,uVar8,piVar6);
      local_68._0_4_ = local_454;
      local_68._4_4_ = (code *)local_450;
      uVar21 = uVar24;
      if (local_458 == (undefined4 **)&SUB_00000004) {
LAB_017d12fc:
        local_60 = (undefined4 **)(uVar21 >> 0x20);
        local_5c = (undefined4 **)uVar21;
        local_44c = (undefined4 **)(uVar24 >> 0x20);
        local_448 = (undefined4 **)uVar24;
                    /* WARNING: Subroutine does not return */
        FUN_019b0950(&DAT_01d301c0);
      }
      local_90 = local_454;
      ppuStack_8c = local_450;
      uVar4 = uVar24;
      if (local_458 != (undefined4 **)&DAT_00000003) {
        local_7c._0_4_ = local_458;
        local_7c._4_4_ = local_454;
        ppuStack_74 = local_450;
        if ((local_468 & 1) != 0) {
          uVar7 = 0x35;
          puVar13 = &DAT_01d297b0;
          pcVar12 = "not a CurrentThre";
          uVar5 = uVar24;
LAB_017d18a0:
          uStack_70 = (undefined4)(uVar5 >> 0x20);
          uStack_6c = (undefined4)uVar5;
          uStack_88 = (undefined4)(uVar4 >> 0x20);
          uStack_84 = (uint)uVar4;
          local_60 = (undefined4 **)(uVar21 >> 0x20);
          local_5c = (undefined4 **)uVar21;
          local_44c = (undefined4 **)(uVar24 >> 0x20);
          local_448 = (undefined4 **)uVar24;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(pcVar12,uVar7,puVar13);
        }
        uStack_70 = (int)(uVar24 >> 0x20);
        local_68 = CONCAT44(local_450,local_454);
        uVar5 = uVar24;
LAB_017d1604:
        piVar6 = local_464;
        iVar10 = local_46c;
        uStack_88 = (undefined4)(uVar5 >> 0x20);
        uStack_6c = (undefined4)uVar5;
        local_60 = (undefined4 **)(uVar4 >> 0x20);
        uStack_84 = (uint)uVar4;
        local_44c = (undefined4 **)(uVar21 >> 0x20);
        local_5c = (undefined4 **)uVar21;
        uVar8 = (uint)(uVar24 >> 0x20);
        local_448 = (undefined4 **)uVar24;
        DataMemoryBarrier(0xb);
        do {
          bVar20 = (bool)hasExclusiveAccess(&local_46c);
        } while (!bVar20);
        local_46c = 0;
        DataMemoryBarrier(0xb);
        if (iVar10 == 0) {
          DataMemoryBarrier(0xb);
          local_43c = (int *)((uint)local_43c & 0xffffff00);
          local_454 = (undefined4 **)((uint)local_47c >> 2);
          local_440 = 0;
          local_448 = (undefined4 **)0x0;
          local_44c = (undefined4 **)0x0;
          local_450 = (undefined4 **)0x0;
          local_458 = (undefined4 **)((uint)&local_480 | 4);
          lVar25 = FUN_019ee710();
          if ((int)lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc("Failed to `Enter::block_on`",0x1b,&local_38,&DAT_01d29600,&DAT_01d1cb8c);
          }
          local_68 = lVar25;
          do {
            cVar17 = *(char *)(iVar9 + 0x38);
            if (cVar17 == '\x01') {
LAB_017d16a0:
              cVar17 = *(char *)(iVar9 + 0x30);
              uVar8 = (uint)*(byte *)(iVar9 + 0x31);
              *(undefined2 *)(iVar9 + 0x30) = 0x8001;
            }
            else if (cVar17 != '\x02') {
              FUN_019a2bcc(iVar9,&LAB_019efb68);
              *(undefined1 *)(iVar9 + 0x38) = 1;
              goto LAB_017d16a0;
            }
            iVar10 = FUN_019e0cbc(&local_458,&local_68);
            uVar14 = 0;
            if (iVar10 != 0) {
              iVar10 = FUN_017d2e4c(&local_258,&local_68);
              uVar14 = 1;
              if (iVar10 != 0) {
                uVar14 = 2;
              }
            }
            if (cVar17 != '\x02') {
              if (*(char *)(iVar9 + 0x38) != '\x01') {
                if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_017d171c;
                FUN_019a2bcc(iVar9,&LAB_019efb68);
                *(undefined1 *)(iVar9 + 0x38) = 1;
              }
              *(char *)(iVar9 + 0x31) = (char)uVar8;
              *(char *)(iVar9 + 0x30) = cVar17;
            }
LAB_017d171c:
            if (uVar14 != 2) goto LAB_017d172c;
            FUN_019ee698();
          } while( true );
        }
        do {
          iVar10 = *local_464;
          bVar20 = (bool)hasExclusiveAccess(local_464);
        } while (!bVar20);
        *local_464 = iVar10 + 1;
        lVar25 = local_68;
        if (iVar10 < 0) goto LAB_017d2000;
        local_4c = (int *)0x0;
        local_50 = 4;
        local_54 = 0;
        local_58 = (undefined4 **)0x0;
        local_48 = (undefined4 **)((uint)&local_480 | 4);
        uVar22 = thunk_FUN_01bee35a();
        uVar5 = CONCAT44(uStack_88,uStack_6c);
        uVar21 = CONCAT44(local_44c,extraout_r2);
        local_68._4_4_ = (code *)((ulonglong)uVar22 >> 0x20);
        uVar8 = *(uint *)((int)uVar22 + extraout_r3);
        local_60 = (undefined4 **)0x0;
        uVar4 = (ulonglong)uStack_84;
        local_68._0_4_ = (undefined4 **)0x0;
        lVar25 = ZEXT48(local_68._4_4_) << 0x20;
        local_5c = extraout_r2;
        if (uVar8 < 3) {
          uVar22 = FUN_019b03e8();
        }
        else {
          piVar15 = (int *)(uVar8 - 8);
          do {
            iVar10 = *piVar15;
            iVar11 = iVar10 + 1;
            uVar22 = CONCAT44(iVar11,piVar15);
            bVar20 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar20);
          *piVar15 = iVar11;
          if (iVar10 < 0) goto LAB_017d2000;
        }
        piVar15 = (int *)uVar22;
        FUN_019f8618(piVar6 + 0x20,(int)((ulonglong)uVar22 >> 0x20),piVar15[2],piVar15[3]);
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar15;
          bVar20 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar20);
        *piVar15 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019a2ffc(piVar15);
        }
        ppuVar16 = local_5c;
        local_458 = (undefined4 **)local_68;
        local_454 = (undefined4 **)local_68._4_4_;
        local_450 = local_60;
        local_44c = local_5c;
        local_448 = local_58;
        iStack_444 = local_54;
        local_440 = local_50;
        local_43c = local_4c;
        ppuStack_438 = local_48;
        if (((uint)(undefined4 **)local_68 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("expected `CurrentThread::Context`",0x43,&DAT_01d291d4);
        }
        if (local_60 != (undefined4 **)0x0) {
          FUN_01306fc8(&DAT_01d291e4);
          uVar5 = CONCAT44(uStack_88,uStack_6c);
          uVar4 = CONCAT44(local_60,uStack_84);
          uVar21 = CONCAT44(local_44c,local_5c);
          lVar25 = CONCAT44(local_68._4_4_,(undefined4 **)local_68);
          goto LAB_017d2000;
        }
        local_450 = (undefined4 **)0xffffffff;
        local_44c = (undefined4 **)0x0;
        if (local_5c == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("core missing",0xc,&DAT_01d291f4);
        }
        local_450 = (undefined4 **)0x0;
        if (*(char *)(iVar9 + 0x38) != '\x01') {
          if (*(char *)(iVar9 + 0x38) == '\x02') {
            FUN_016fb24c(local_5c);
                    /* WARNING: Subroutine does not return */
            FUN_019b0950(&DAT_01d301c0);
          }
          FUN_019a2bcc(iVar9,&LAB_019efb68);
          *(undefined1 *)(iVar9 + 0x38) = 1;
        }
        uVar7 = *(undefined4 *)(iVar9 + 0x20);
        *(undefined4 ****)(iVar9 + 0x20) = &local_458;
        DataMemoryBarrier(0xb);
        *(code *)(local_454 + 0x5f) = (code)0x1;
        local_3c = local_454 + 0x20;
        local_40 = &DAT_01d292e4;
        FUN_019ac130(&local_38,1);
        uVar8 = (uint)&local_458 | 4;
        ppuVar16[10] = local_38;
        ppuVar16[0xb] = local_34;
        ppuVar16[0xc] = local_30;
        while( true ) {
          DataMemoryBarrier(0xb);
          ppuVar19 = local_454 + 0x5f;
          do {
            cVar2 = *(code *)ppuVar19;
            bVar20 = (bool)hasExclusiveAccess(ppuVar19);
          } while (!bVar20);
          *(code *)ppuVar19 = (code)0x0;
          DataMemoryBarrier(0xb);
          if (cVar2 != (code)0x0) break;
LAB_017d1a8c:
          for (puVar18 = local_454[0x51]; puVar18 != (undefined4 *)0x0;
              puVar18 = (undefined4 *)((int)puVar18 + -1)) {
            if (*(code *)(ppuVar16 + 0x19) != (code)0x0) {
              bVar20 = false;
              *(undefined4 *)(iVar9 + 0x20) = uVar7;
              if (local_450 == (undefined4 **)0x0) goto LAB_017d1c6c;
              FUN_01306fc8(&DAT_01d29204);
              uVar5 = CONCAT44(uStack_88,uStack_6c);
              uVar4 = CONCAT44(local_60,uStack_84);
              uVar21 = CONCAT44(local_44c,local_5c);
              lVar25 = CONCAT44(local_68._4_4_,(undefined4 **)local_68);
              goto LAB_017d2000;
            }
            ppuVar16[0xe] = (undefined4 *)((int)ppuVar16[0xe] + 1);
            iVar10 = FUN_019e61ac(ppuVar16,local_454 + 0x20);
            if (iVar10 == 0) {
              FUN_019f60ac(ppuVar16 + 4);
              if ((undefined4 **)0x7ffffffe < local_448) {
                    /* WARNING: Subroutine does not return */
                FUN_0130701c(&DAT_01d29b18);
              }
              if (local_43c == (int *)0x0) {
                ppuVar16 = (undefined4 **)FUN_019e6558(uVar8,ppuVar16,local_454 + 0x20);
              }
              else {
                ppuVar16 = (undefined4 **)FUN_019e6284(uVar8,ppuVar16);
              }
              FUN_019ac130(&local_38,1);
              goto LAB_017d1c3c;
            }
            if (local_450 != (undefined4 **)0x0) {
              FUN_01306fc8(&DAT_01d291a4);
              uVar5 = CONCAT44(uStack_88,uStack_6c);
              uVar4 = CONCAT44(local_60,uStack_84);
              uVar21 = CONCAT44(local_44c,local_5c);
              lVar25 = CONCAT44(local_68._4_4_,(undefined4 **)local_68);
              goto LAB_017d2000;
            }
            local_450 = (undefined4 **)0xffffffff;
            if (local_44c == (undefined4 **)0x0) {
              local_450 = (undefined4 **)0x0;
            }
            else {
              FUN_016fb24c();
              local_450 = (undefined4 **)((int)local_450 + 1);
            }
            cVar17 = *(char *)(iVar9 + 0x38);
            local_44c = ppuVar16;
            if (cVar17 == '\x01') {
LAB_017d1b34:
              cVar17 = *(char *)(iVar9 + 0x30);
              ppuVar16 = (undefined4 **)(uint)*(byte *)(iVar9 + 0x31);
              *(undefined2 *)(iVar9 + 0x30) = 0x8001;
            }
            else if (cVar17 != '\x02') {
              FUN_019a2bcc(iVar9,&LAB_019efb68);
              *(undefined1 *)(iVar9 + 0x38) = 1;
              goto LAB_017d1b34;
            }
            (*(code *)**(undefined4 **)(iVar10 + 8))(iVar10);
            if (cVar17 != '\x02') {
              if (*(char *)(iVar9 + 0x38) != '\x01') {
                if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_017d1b8c;
                FUN_019a2bcc(iVar9,&LAB_019efb68);
                *(undefined1 *)(iVar9 + 0x38) = 1;
              }
              *(char *)(iVar9 + 0x31) = (char)ppuVar16;
              *(char *)(iVar9 + 0x30) = cVar17;
            }
LAB_017d1b8c:
            ppuVar16 = local_44c;
            if (local_450 != (undefined4 **)0x0) {
              FUN_01306fc8(&DAT_01d291b4);
              uVar5 = CONCAT44(uStack_88,uStack_6c);
              uVar4 = CONCAT44(local_60,uStack_84);
              uVar21 = CONCAT44(local_44c,local_5c);
              lVar25 = CONCAT44(local_68._4_4_,(undefined4 **)local_68);
              goto LAB_017d2000;
            }
            local_450 = (undefined4 **)0xffffffff;
            bVar20 = local_44c == (undefined4 **)0x0;
            local_44c = (undefined4 **)0x0;
            if (bVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("core missing",0xc,&DAT_01d291c4);
            }
            local_450 = (undefined4 **)0x0;
          }
          FUN_019f60ac(ppuVar16 + 4);
          ppuVar16 = (undefined4 **)FUN_019e6284(uVar8,ppuVar16,local_454 + 0x20);
          FUN_019ac130(&local_38,1);
LAB_017d1c3c:
          ppuVar16[10] = local_38;
          ppuVar16[0xb] = local_34;
          ppuVar16[0xc] = local_30;
        }
        if (local_450 != (undefined4 **)0x0) {
          FUN_01306fc8(&DAT_01d291a4);
          uVar5 = CONCAT44(uStack_88,uStack_6c);
          uVar4 = CONCAT44(local_60,uStack_84);
          uVar21 = CONCAT44(local_44c,local_5c);
          lVar25 = CONCAT44(local_68._4_4_,(undefined4 **)local_68);
          goto LAB_017d2000;
        }
        local_450 = (undefined4 **)0xffffffff;
        if (local_44c == (undefined4 **)0x0) {
          local_450 = (undefined4 **)0x0;
        }
        else {
          FUN_016fb24c();
          local_450 = (undefined4 **)((int)local_450 + 1);
        }
        cVar17 = *(char *)(iVar9 + 0x38);
        local_44c = ppuVar16;
        if (cVar17 == '\x01') {
LAB_017d1a04:
          cVar17 = *(char *)(iVar9 + 0x30);
          ppuVar16 = (undefined4 **)(uint)*(byte *)(iVar9 + 0x31);
          *(undefined2 *)(iVar9 + 0x30) = 0x8001;
        }
        else if (cVar17 != '\x02') {
          FUN_019a2bcc(iVar9,&LAB_019efb68);
          *(undefined1 *)(iVar9 + 0x38) = 1;
          goto LAB_017d1a04;
        }
        iVar10 = FUN_017d2e4c(&local_258,&local_40);
        if (cVar17 != '\x02') {
          if (*(char *)(iVar9 + 0x38) != '\x01') {
            if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_017d1a60;
            FUN_019a2bcc(iVar9,&LAB_019efb68);
            *(undefined1 *)(iVar9 + 0x38) = 1;
          }
          *(char *)(iVar9 + 0x31) = (char)ppuVar16;
          *(char *)(iVar9 + 0x30) = cVar17;
        }
LAB_017d1a60:
        ppuVar16 = local_44c;
        if (local_450 != (undefined4 **)0x0) {
          FUN_01306fc8(&DAT_01d291b4);
          uVar5 = CONCAT44(uStack_88,uStack_6c);
          uVar4 = CONCAT44(local_60,uStack_84);
          uVar21 = CONCAT44(local_44c,local_5c);
          lVar25 = CONCAT44(local_68._4_4_,(undefined4 **)local_68);
          goto LAB_017d2000;
        }
        local_450 = (undefined4 **)0xffffffff;
        bVar20 = local_44c == (undefined4 **)0x0;
        local_44c = (undefined4 **)0x0;
        if (bVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("core missing",0xc,&DAT_01d291c4);
        }
        local_450 = (undefined4 **)0x0;
        if (iVar10 != 0) goto LAB_017d1a8c;
        bVar20 = true;
        *(undefined4 *)(iVar9 + 0x20) = uVar7;
LAB_017d1c6c:
        local_450 = (undefined4 **)0xffffffff;
        if (local_44c == (undefined4 **)0x0) {
          local_450 = (undefined4 **)0x0;
        }
        else {
          FUN_016fb24c();
          local_450 = (undefined4 **)((int)local_450 + 1);
        }
        local_44c = ppuVar16;
        FUN_00772358(&local_458);
        uVar24 = CONCAT44(local_44c,local_448);
        if (!bVar20) {
          uVar7 = 0xab;
          puVar13 = &DAT_01d1cb7c;
          pcVar12 = 
          "a spawned task panicked and the runtime is configured to shut down on unhandled panic";
          uVar21 = CONCAT44(local_60,local_5c);
          uVar4 = CONCAT44(uStack_88,uStack_84);
          uVar5 = CONCAT44(uStack_70,uStack_6c);
          goto LAB_017d18a0;
        }
LAB_017d1cac:
        FUN_01704854(&local_7c);
        FUN_017dbbc0(&local_258);
        goto LAB_017d1cc0;
      }
    }
    uStack_88 = (undefined4)(uVar4 >> 0x20);
    uStack_84 = (uint)uVar4;
    local_60 = (undefined4 **)(uVar21 >> 0x20);
    local_5c = (undefined4 **)uVar21;
    local_44c = (undefined4 **)(uVar24 >> 0x20);
    local_448 = (undefined4 **)uVar24;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                 ,0x183,&DAT_01d1ca0c);
  }
  uVar23 = thunk_FUN_01bee35a(local_480,0x20);
  uVar22 = CONCAT44(local_24c,local_248);
  iVar9 = (int)uVar23 + (int)((ulonglong)uVar23 >> 0x20);
  if (*(char *)(iVar9 + 0x38) != '\x01') {
    uVar23 = CONCAT44(local_450,local_44c);
    if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_017d12b4;
    FUN_019a2bcc(iVar9,&LAB_019efb68);
    *(undefined1 *)(iVar9 + 0x38) = 1;
  }
  uVar22 = CONCAT44(local_24c,local_248);
  uVar23 = CONCAT44(local_450,local_44c);
  uVar3 = CONCAT44(local_60,local_5c);
  if (*(char *)(iVar9 + 0x32) == '\x02') {
    *(undefined1 *)(iVar9 + 0x32) = 1;
    iVar10 = 0x1f0;
    if ((uVar8 & 1) != 0) {
      iVar10 = 0x128;
    }
    uVar23 = FUN_019f7c78((int)piVar6 + iVar10);
    if ((*(uint *)(iVar9 + 0x24) & 1) == 0) {
      uVar22 = FUN_019e9e08();
      if ((uint)uVar22 < 2) {
        uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),&DAT_00000001);
      }
    }
    else {
      uVar22 = CONCAT44(*(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x2c));
    }
    ppuVar16 = (undefined4 **)((ulonglong)uVar22 >> 0x20);
    ppuVar19 = (undefined4 **)uVar22;
    *(undefined4 *)(iVar9 + 0x24) = 1;
    *(undefined8 *)(iVar9 + 0x28) = uVar23;
    FUN_019ec774(&local_258,iVar9,uVar8,piVar6);
    local_458 = local_254;
    local_454 = local_250;
    uVar23 = uVar22;
    if (local_258 == (undefined4 **)&SUB_00000004) {
LAB_017d12b4:
      local_450 = (undefined4 **)((ulonglong)uVar23 >> 0x20);
      local_44c = (undefined4 **)uVar23;
      local_24c = (undefined4 **)((ulonglong)uVar22 >> 0x20);
      local_248 = (undefined4 **)uVar22;
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    local_68._0_4_ = local_254;
    local_68._4_4_ = (code *)local_250;
    uVar3 = uVar22;
    if (local_258 != (undefined4 **)&DAT_00000003) {
      local_458 = local_258;
      local_454 = local_254;
      local_450 = local_250;
      local_44c = ppuVar16;
      local_448 = ppuVar19;
      local_24c = ppuVar16;
      local_248 = ppuVar19;
      local_60 = ppuVar16;
      local_5c = ppuVar19;
      local_7c = FUN_019ee710();
      uVar21 = (ulonglong)local_7c >> 0x20;
      iVar10 = (int)local_7c;
      if (iVar10 == 0) {
        FUN_017d25e8(auStack_430);
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("failed to park thread",0x15,&local_38,&DAT_01d29600,&DAT_01d1cb6c);
      }
      FUN_01bed4e2(&local_258,auStack_430,0x1c8);
      do {
        cVar17 = *(char *)(iVar9 + 0x38);
        if (cVar17 == '\x01') {
LAB_017d1468:
          cVar17 = *(char *)(iVar9 + 0x30);
          ppuVar16 = (undefined4 **)(uint)*(byte *)(iVar9 + 0x31);
          *(undefined2 *)(iVar9 + 0x30) = 0x8001;
        }
        else if (cVar17 != '\x02') {
          FUN_019a2bcc(iVar9,&LAB_019efb68);
          *(undefined1 *)(iVar9 + 0x38) = 1;
          goto LAB_017d1468;
        }
        iVar11 = FUN_017d2e4c(&local_258,&local_7c);
        if (cVar17 != '\x02') {
          if (*(char *)(iVar9 + 0x38) != '\x01') {
            if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_017d14c0;
            FUN_019a2bcc(iVar9,&LAB_019efb68);
            *(undefined1 *)(iVar9 + 0x38) = 1;
          }
          *(char *)(iVar9 + 0x31) = (char)ppuVar16;
          *(char *)(iVar9 + 0x30) = cVar17;
        }
LAB_017d14c0:
        if (iVar11 == 0) goto LAB_017d14d0;
        FUN_019ee698();
      } while( true );
    }
  }
  local_60 = (undefined4 **)((ulonglong)uVar3 >> 0x20);
  local_5c = (undefined4 **)uVar3;
  local_450 = (undefined4 **)((ulonglong)uVar23 >> 0x20);
  local_44c = (undefined4 **)uVar23;
  local_24c = (undefined4 **)((ulonglong)uVar22 >> 0x20);
  local_248 = (undefined4 **)uVar22;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
               ,0x183,&DAT_01d1dbac);
LAB_017d172c:
  (**(code **)((int)lVar25 + 0xc))((int)((ulonglong)lVar25 >> 0x20));
  FUN_019ede44(&local_458);
  uVar5 = CONCAT44(uStack_88,uStack_6c);
  uVar4 = CONCAT44(local_60,uStack_84);
  uVar21 = CONCAT44(local_44c,local_5c);
  uVar24 = CONCAT44(uVar8,local_448);
  if ((uVar14 & 1) != 0) goto LAB_017d1cac;
  goto LAB_017d1604;
LAB_017d14d0:
  FUN_017d25e8(&local_258);
  (**(code **)(iVar10 + 0xc))((int)uVar21);
  FUN_01704854(&local_458);
LAB_017d1cc0:
  FUN_017d29cc(auStack_264);
  if (4 < DAT_01d51b00) {
    uVar22 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
    uVar5 = CONCAT44(uStack_88,uStack_6c);
    uVar4 = CONCAT44(local_60,uStack_84);
    uVar21 = CONCAT44(local_44c,local_5c);
    uVar8 = *(uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
    if (uVar8 < 3) {
      piVar6 = (int *)FUN_019b03e8();
    }
    else {
      piVar6 = (int *)(uVar8 - 8);
      do {
        iVar9 = *piVar6;
        bVar20 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar20);
      *piVar6 = iVar9 + 1;
      lVar25 = local_68;
      if (iVar9 < 0) goto LAB_017d2000;
    }
    local_68._0_4_ = (undefined4 **)piVar6[2];
    local_68._4_4_ = (code *)piVar6[3];
    local_454 = (undefined4 **)FUN_01203168;
    local_458 = (undefined4 **)&local_68;
    local_248 = (undefined4 **)&DAT_01d1ca1c;
    local_24c = (undefined4 **)0x19;
    local_250 = (undefined4 **)0x50c15b;
    local_254 = (undefined4 **)0x19;
    local_258 = (undefined4 **)0x50c15b;
    FUN_0193b350(&DAT_005a310c,&local_458,5,&local_258);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar6;
      bVar20 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar20);
    *piVar6 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar6);
    }
  }
  local_258 = local_480;
  local_254 = local_47c;
  local_250 = local_478;
  local_24c = ppuStack_474;
  local_248 = ppuStack_470;
  local_244 = local_46c;
  uStack_240 = local_468;
  piStack_23c = local_464;
  ppuStack_238 = ppuStack_460;
  uStack_234 = uStack_45c;
  FUN_017d2538();
  if (4 < DAT_01d51b00) {
    uVar22 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
    uVar5 = CONCAT44(uStack_88,uStack_6c);
    uVar4 = CONCAT44(local_60,uStack_84);
    uVar21 = CONCAT44(local_44c,local_5c);
    uVar8 = *(uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
    if (uVar8 < 3) {
      piVar6 = (int *)FUN_019b03e8();
    }
    else {
      piVar6 = (int *)(uVar8 - 8);
      do {
        iVar9 = *piVar6;
        bVar20 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar20);
      *piVar6 = iVar9 + 1;
      lVar25 = local_68;
      if (iVar9 < 0) {
LAB_017d2000:
        uStack_88 = (undefined4)(uVar5 >> 0x20);
        uStack_6c = (undefined4)uVar5;
        local_60 = (undefined4 **)(uVar4 >> 0x20);
        uStack_84 = (uint)uVar4;
        local_44c = (undefined4 **)(uVar21 >> 0x20);
        local_5c = (undefined4 **)uVar21;
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x17d2000);
        local_68 = lVar25;
        (*pcVar1)();
      }
    }
    local_68._0_4_ = (undefined4 **)piVar6[2];
    local_68._4_4_ = (code *)piVar6[3];
    local_454 = (undefined4 **)FUN_01203168;
    local_458 = (undefined4 **)&local_68;
    local_248 = (undefined4 **)&DAT_01d1ca2c;
    local_24c = (undefined4 **)0x19;
    local_250 = (undefined4 **)0x50c15b;
    local_254 = (undefined4 **)0x19;
    local_258 = (undefined4 **)0x50c15b;
    FUN_0193b350(&DAT_005a7ed8,&local_458,5,&local_258);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar6;
      bVar20 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar20);
    *piVar6 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(piVar6);
    }
  }
  return;
}

