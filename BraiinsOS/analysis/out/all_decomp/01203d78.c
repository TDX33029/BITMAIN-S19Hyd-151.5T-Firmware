// FUN_01203d78 @ 01203d78 size=1424 calls_out=15 calls_in=1
// strings: else | else

undefined8 FUN_01203d78(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  int local_584;
  undefined1 auStack_580 [136];
  undefined1 local_4f8;
  int local_4f0;
  undefined4 local_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  int local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  char *local_4c0 [38];
  int local_428;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  char *local_418;
  undefined4 uStack_414;
  undefined4 local_410;
  int local_380;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined1 auStack_360 [152];
  undefined1 auStack_2c8 [144];
  char *local_238;
  char *local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int local_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  char *local_190;
  undefined1 auStack_18c [148];
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 auStack_e8 [168];
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  iVar10 = *param_2;
  if (iVar10 != 0) {
    local_584 = param_2[1];
    iVar6 = local_584;
    iVar11 = iVar10;
    while( true ) {
      uVar1 = *(ushort *)(iVar11 + 0x192);
      iVar13 = iVar11 + 0x10c;
      uVar9 = 0xffffffff;
      iVar15 = (uint)uVar1 * 0xc;
      do {
        if (iVar15 == 0) {
          uVar9 = (uint)uVar1;
          goto LAB_01203e2c;
        }
        uVar8 = *(uint *)(iVar13 + 8);
        uVar5 = uVar8;
        if (1 < uVar8) {
          uVar5 = 2;
        }
        iVar4 = FUN_016dd50a("if",*(undefined4 *)(iVar13 + 4),uVar5);
        if (iVar4 == 0) {
          iVar4 = 2 - uVar8;
        }
        iVar15 = iVar15 + -0xc;
        uVar9 = uVar9 + 1;
        iVar13 = iVar13 + 0xc;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) break;
LAB_01203e2c:
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = iVar6 + -1;
      iVar11 = *(int *)(iVar11 + uVar9 * 4 + 0x198);
    }
    pcVar12 = (char *)(iVar11 + uVar9 * 0x18);
    if (*pcVar12 == '\x05') {
      FUN_0119d4b4(auStack_580,param_1,"if",2);
      if (*(int *)(pcVar12 + 0xc) == 0) {
        local_410 = 0;
        local_418 = (char *)0x0;
      }
      else {
        iVar6 = *(int *)(pcVar12 + 4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac52c);
        }
        FUN_011f809c(&local_418,iVar6,*(undefined4 *)(pcVar12 + 8));
      }
      local_234 = local_418;
      uStack_230 = uStack_414;
      uStack_22c = local_410;
      local_238 = (char *)CONCAT31(local_238._1_3_,5);
      uVar3 = FUN_01352d48(local_4f8,&local_238);
      FUN_0125acb4(&local_4d8,auStack_580,&local_238,uVar3);
      if (local_4d8 == 0) {
        pcVar12 = (char *)FUN_011f0ab8();
        FUN_011f6c30(&local_238);
        uVar7 = 1;
      }
      else {
        local_4f0 = local_4d8;
        local_4ec = local_4d4;
        uStack_4e8 = local_4d0;
        uStack_4e4 = uStack_4cc;
        uStack_4e0 = uStack_4c8;
        FUN_011f6c30(&local_238);
        FUN_011fa954(&local_238,auStack_580,pcVar12 + 4);
        iVar6 = local_1a0;
        pcVar12 = local_238;
        if (local_1a0 == -0x80000000) {
LAB_01204210:
          uVar7 = 1;
          FUN_0115ccf0(&local_4f0);
        }
        else {
          FUN_016dd1aa((uint)local_4c0 | 4,(uint)&local_238 | 4,0x94);
          local_428 = iVar6;
          local_4c0[0] = pcVar12;
          local_424 = local_19c;
          uStack_420 = uStack_198;
          uStack_41c = uStack_194;
          iVar6 = iVar10;
          iVar11 = local_584;
          while( true ) {
            uVar1 = *(ushort *)(iVar6 + 0x192);
            iVar13 = iVar6 + 0x10c;
            uVar9 = 0xffffffff;
            iVar15 = (uint)uVar1 * 0xc;
            do {
              if (iVar15 == 0) {
                uVar9 = (uint)uVar1;
                goto LAB_01204014;
              }
              uVar8 = *(uint *)(iVar13 + 8);
              uVar5 = uVar8;
              if (3 < uVar8) {
                uVar5 = 4;
              }
              iVar4 = FUN_016dd50a(&DAT_00566d80,*(undefined4 *)(iVar13 + 4),uVar5);
              if (iVar4 == 0) {
                iVar4 = 4 - uVar8;
              }
              iVar15 = iVar15 + -0xc;
              uVar9 = uVar9 + 1;
              iVar13 = iVar13 + 0xc;
            } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
            if (0 < iVar4 == iVar4 < 0) break;
LAB_01204014:
            if (iVar11 == 0) goto LAB_012040a0;
            iVar11 = iVar11 + -1;
            iVar6 = *(int *)(iVar6 + uVar9 * 4 + 0x198);
          }
          pcVar12 = (char *)(iVar6 + uVar9 * 0x18);
          if (*pcVar12 == '\x05') {
            FUN_0119d4b4(auStack_2c8,param_1,&DAT_00566d80,4);
            FUN_011fa954(&local_238,auStack_2c8,pcVar12 + 4);
            iVar6 = local_1a0;
            pcVar12 = local_238;
            if (local_1a0 != -0x80000000) {
              FUN_016dd1aa((uint)&local_418 | 4,(uint)&local_238 | 4,0x94);
              local_380 = iVar6;
              local_418 = pcVar12;
              local_37c = local_19c;
              uStack_378 = uStack_198;
              uStack_374 = uStack_194;
              FUN_01161600(auStack_2c8);
              bVar2 = false;
              goto LAB_012040e8;
            }
            FUN_01161600(auStack_2c8);
            goto LAB_01204208;
          }
LAB_012040a0:
          local_380 = -0x80000000;
          bVar2 = true;
LAB_012040e8:
          pcVar12 = "else";
          while( true ) {
            uVar1 = *(ushort *)(iVar10 + 0x192);
            iVar11 = iVar10 + 0x10c;
            uVar9 = 0xffffffff;
            iVar6 = (uint)uVar1 * 0xc;
            do {
              if (iVar6 == 0) {
                uVar9 = (uint)uVar1;
                goto LAB_01204180;
              }
              uVar8 = *(uint *)(iVar11 + 8);
              uVar5 = uVar8;
              if (3 < uVar8) {
                uVar5 = 4;
              }
              iVar15 = FUN_016dd50a("else",*(undefined4 *)(iVar11 + 4),uVar5);
              if (iVar15 == 0) {
                iVar15 = 4 - uVar8;
              }
              iVar6 = iVar6 + -0xc;
              uVar9 = uVar9 + 1;
              iVar11 = iVar11 + 0xc;
            } while ((char)((0 < iVar15) - (iVar15 < 0)) == '\x01');
            if (0 < iVar15 == iVar15 < 0) break;
LAB_01204180:
            if (local_584 == 0) goto LAB_01204220;
            local_584 = local_584 + -1;
            iVar10 = *(int *)(iVar10 + uVar9 * 4 + 0x198);
          }
          pcVar14 = (char *)(iVar10 + uVar9 * 0x18);
          if (*pcVar14 == '\x05') {
            FUN_0119d4b4(auStack_2c8,param_1,"else",4);
            FUN_011fa954(&local_238,auStack_2c8,pcVar14 + 4);
            pcVar12 = local_238;
            if (local_1a0 == -0x80000000) {
              FUN_01161600(auStack_2c8);
              if (!bVar2) {
                FUN_0120010c(&local_418);
              }
LAB_01204208:
              FUN_0120010c(local_4c0);
              goto LAB_01204210;
            }
            FUN_016dd1aa(auStack_360,(uint)&local_238 | 4,0x94);
            local_370 = local_19c;
            uStack_36c = uStack_198;
            uStack_368 = uStack_194;
            FUN_01161600(auStack_2c8);
            local_f8 = local_1a0;
            goto LAB_01204250;
          }
LAB_01204220:
          local_f8 = -0x80000000;
LAB_01204250:
          local_40 = local_4f0;
          uStack_3c = local_4ec;
          uStack_38 = uStack_4e8;
          uStack_34 = uStack_4e4;
          uStack_30 = uStack_4e0;
          FUN_016dd1aa(auStack_e8,local_4c0,0xa8);
          FUN_016dd1aa(&local_238,&local_418,0xa8);
          local_190 = pcVar12;
          FUN_016dd1aa(auStack_18c,auStack_360,0x94);
          local_f4 = local_370;
          local_f0 = uStack_36c;
          local_ec = uStack_368;
          pcVar12 = (char *)thunk_FUN_016d4a50(0x210);
          if (pcVar12 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x210);
          }
          FUN_016dd1aa(pcVar12,&local_238,0x210);
          uVar7 = 0;
        }
      }
      FUN_01161600(auStack_580);
      return CONCAT44(pcVar12,uVar7);
    }
  }
  return 0;
}

