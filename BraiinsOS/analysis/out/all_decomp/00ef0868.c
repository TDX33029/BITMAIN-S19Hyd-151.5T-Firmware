// FUN_00ef0868 @ 00ef0868 size=3432 calls_out=22 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ef0868(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *********pppppppppuVar2;
  undefined4 *************pppppppppppppuVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *********pppppppppuVar6;
  undefined4 *************pppppppppppppuVar7;
  uint uVar8;
  int *piVar9;
  undefined4 ************ppppppppppppuVar10;
  undefined4 ***********pppppppppppuVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *******pppppppuVar15;
  undefined4 ************ppppppppppppuVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 *************pppppppppppppuVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 ************unaff_r9;
  undefined8 uVar23;
  undefined1 auStack_7f8 [364];
  undefined4 local_68c;
  undefined4 local_688;
  undefined4 ********local_680;
  undefined4 ********local_67c;
  undefined1 auStack_678 [352];
  undefined4 ************local_518;
  undefined4 *************local_514;
  undefined4 ************local_510;
  undefined4 ************local_508;
  undefined4 *********local_504;
  int local_500;
  undefined4 ************local_4f8;
  undefined4 *************local_4f4;
  undefined4 ************local_4f0;
  undefined4 ************local_4e8;
  undefined4 *local_4e4;
  undefined4 ***********local_390;
  undefined4 ************local_38c;
  undefined4 *local_388;
  undefined4 *************local_384;
  undefined4 *************local_380;
  undefined *local_37c;
  undefined4 **********local_378;
  undefined4 *********local_374;
  undefined4 ************local_370;
  undefined4 *********local_36c;
  undefined4 local_368;
  undefined4 ************local_360;
  undefined4 *************local_35c;
  undefined4 ************local_358;
  undefined4 ************local_350;
  undefined4 *************local_34c;
  undefined4 ************local_348;
  undefined4 ************local_340;
  undefined4 *************local_33c;
  undefined1 auStack_338 [352];
  undefined4 ************local_1d8;
  undefined4 *************local_1d4;
  undefined4 ************local_1d0;
  undefined4 ************local_1cc;
  undefined4 *************local_1c8;
  undefined4 ************local_1c4;
  undefined4 ************local_1c0;
  int local_a0;
  undefined4 local_9c;
  int local_94;
  undefined4 local_90;
  undefined4 *************local_70;
  undefined4 ************local_6c;
  undefined4 local_68;
  int *local_64;
  undefined4 ***********local_60;
  uint local_5c;
  undefined4 *local_58;
  undefined4 ************local_54;
  undefined4 local_50;
  undefined4 *************local_4c;
  undefined4 local_48;
  undefined4 *************local_44;
  undefined4 ************local_40;
  undefined4 *************local_3c;
  undefined4 ************local_38;
  undefined4 ***********local_34;
  undefined4 *************local_30;
  undefined4 *local_2c;
  
  uVar4 = FUN_016dd1aa(auStack_7f8,param_3,0x168);
  local_688 = 0;
  uVar23 = thunk_FUN_016de0ee(uVar4,8);
  piVar5 = (int *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  local_68c = 4;
  if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb88);
  }
  iVar14 = param_2[1];
  iVar17 = param_2[2];
  iVar18 = param_2[3];
  iVar19 = param_2[4];
  iVar21 = param_2[5];
  piVar5[2] = *param_2;
  piVar5[3] = iVar14;
  piVar5[4] = iVar17;
  piVar5[5] = iVar18;
  piVar5[6] = iVar19;
  piVar5[7] = iVar21;
  FUN_016dd1aa(&local_680,auStack_7f8,0x178);
  DataMemoryBarrier(0xb);
  if (DAT_018d914c != 0) {
    local_350 = &local_1d8;
    local_1d8 = (undefined4 ************)&DAT_018d914c;
    FUN_015eedc4(&DAT_018d914c,1,&local_350,&DAT_0187c2e0,&DAT_018ac9b8);
  }
  if (DAT_018d9150 == '\0') {
    FUN_016dd1aa(&local_4f8,&local_680,0x168);
    pppppppppppppuVar20 = local_4f4;
    ppppppppppppuVar10 = local_4f8;
    local_4f8 = (undefined4 ************)&SUB_00000002;
    local_4f4 = (undefined4 *************)0x0;
    local_360 = local_518;
    local_35c = local_514;
    local_358 = local_510;
    if (ppppppppppppuVar10 != (undefined4 ************)&SUB_00000002 ||
        pppppppppppppuVar20 != (undefined4 *************)0x0) {
      FUN_016dd1aa(&local_1d0,auStack_678,0x160);
      local_33c = pppppppppppppuVar20;
      local_350 = local_518;
      local_34c = local_514;
      local_348 = local_510;
      local_340 = ppppppppppppuVar10;
      FUN_016dd1aa(auStack_338,auStack_678,0x160);
      local_1d4 = pppppppppppppuVar20;
      local_1d8 = ppppppppppppuVar10;
      FUN_00ef1898(&local_40,&local_1d8);
      pppppppppppppuVar20 = local_3c;
      ppppppppppppuVar16 = local_40;
      ppppppppppppuVar10 = local_38;
      if (local_40 == (undefined4 ************)&DAT_80000000) {
        local_44 = local_3c;
        if (DAT_018d9130 < 4) {
          puVar12 = &DAT_018da884;
          uVar8 = (uint)DAT_018da8b0;
          if (uVar8 - 1 < 2) {
LAB_00ef0b28:
            ppppppppppppuVar10 = (undefined4 ************)&DAT_018daa64;
            pppppppppppppuVar20 = (undefined4 *************)&DAT_018ae394;
            if (uVar8 != 2) {
              DataMemoryBarrier(0xb);
              pcVar13 = s_SetGloba_00414c05;
              pppppppppppppuVar7 = pppppppppppppuVar20;
              if (DAT_018dd984 == 2) {
                pcVar13 = DAT_018daa74;
                pppppppppppppuVar7 = (undefined4 *************)DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar13 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
                }
              }
              iVar14 = (*(code *)pppppppppppppuVar7[5])(pcVar13);
              if (iVar14 == 0) goto LAB_00ef1364;
            }
            local_64 = DAT_018da8a8 + 7;
            local_60 = (undefined4 ***********)*local_64;
            local_5c = DAT_018da8a8[8];
            if (local_5c != 0) {
              local_370 = (undefined4 ************)DAT_018da8a8[9];
              local_36c = (undefined4 *********)DAT_018da8a8[10];
              local_378 = (undefined4 **********)*local_64;
              local_374 = (undefined4 *********)DAT_018da8a8[8];
              puVar12 = (undefined4 *)DAT_018da8a8[9];
              ppppppppppppuVar10 = (undefined4 ************)DAT_018da8a8[10];
              local_368 = 0;
              local_504 = (undefined4 *********)0x4b;
              local_508 = (undefined4 ************)0x35ab6b;
            }
            if (local_5c < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_380 = &local_4c;
            local_384 = (undefined4 *************)&local_60;
            local_38c = &local_508;
            local_68 = 2;
            local_390 = &local_378;
            local_4c = &local_44;
            local_6c = &local_390;
            pppppppppppppuVar20 = (undefined4 *************)&DAT_018dd940;
            local_3c = (undefined4 *************)0x0;
            local_30 = &local_6c;
            local_50 = 1;
            local_40 = (undefined4 ************)&DAT_00000001;
            local_37c = &DAT_0187c2b0;
            local_388 = (undefined4 *)&DAT_018abb78;
            DataMemoryBarrier(0xb);
            pcVar13 = s_SetGloba_00414c05;
            pppppppuVar15 = (undefined4 *******)&DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar13 = DAT_018daa74;
              pppppppuVar15 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar13 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_58 = puVar12;
            local_54 = ppppppppppppuVar10;
            local_2c = DAT_018da8a8;
            iVar14 = (*(code *)pppppppuVar15[10])(pcVar13,&local_40);
            if (iVar14 != 0) {
              (*(code *)pppppppuVar15[0xb])(pcVar13,&local_40);
            }
          }
          else if (uVar8 != 0) {
            uVar8 = FUN_0169ac90(&DAT_018da8a8);
            uVar8 = uVar8 & 0xff;
            if (uVar8 != 0) goto LAB_00ef0b28;
          }
        }
LAB_00ef1364:
        pppppppppppppuVar7 = local_44;
        FUN_005c3974(local_44);
        thunk_FUN_016d3fb4(pppppppppppppuVar7);
        ppppppppppppuVar10 = &local_350;
      }
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      if (local_94 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      FUN_00db41bc(&local_1d8);
      local_38 = local_348;
      if (ppppppppppppuVar16 == (undefined4 ************)&DAT_80000000) {
        local_40 = local_350;
        local_3c = local_34c;
      }
      else {
        local_1d4 = local_34c;
        local_1d0 = local_348;
        local_1d8 = local_350;
        local_1c0 = (undefined4 ************)0x0;
        local_1cc = ppppppppppppuVar16;
        local_1c8 = pppppppppppppuVar20;
        local_1c4 = ppppppppppppuVar10;
        if (local_348 == local_350) {
          FUN_01351a98(&local_1d8);
        }
        pppppppppppppuVar20 = local_1d4 + (int)local_38 * 4;
        *pppppppppppppuVar20 = local_1cc;
        pppppppppppppuVar20[3] = local_1c0;
        local_38 = (undefined4 ************)((int)local_38 + 1);
        pppppppppppppuVar20[1] = local_1c8;
        pppppppppppppuVar20[2] = local_1c4;
        local_40 = local_1d8;
        local_3c = local_1d4;
      }
      local_360 = local_40;
      local_35c = local_3c;
      local_358 = local_38;
    }
    local_350 = local_360;
    local_34c = local_35c;
    local_348 = local_358;
    goto LAB_00ef12f4;
  }
  local_34c = (undefined4 *************)0x8;
  ppppppppppppuVar10 = (undefined4 ************)0x0;
  if (local_680 != (undefined4 ********)0x2 || local_67c != (undefined4 ********)0x0) {
    ppppppppppppuVar10 = (undefined4 ************)&DAT_00000001;
    local_34c = (undefined4 *************)thunk_FUN_016d4a50(0x168);
    if (local_34c == (undefined4 *************)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x168);
    }
  }
  local_348 = (undefined4 ************)0x0;
  local_350 = ppppppppppppuVar10;
  if ((ppppppppppppuVar10 == (undefined4 ************)0x0) &&
     (((uint)local_680 ^ 2) != 0 || local_67c != (undefined4 ********)0x0)) {
    FUN_00edff4c(&local_350,0,1,8,0x168);
LAB_00ef0974:
    ppppppppppppuVar10 = local_348;
    pppppppppuVar6 = local_34c + (int)local_348 * 0x5a;
    *pppppppppuVar6 = local_680;
    pppppppppuVar6[1] = local_67c;
    FUN_016dd1aa(pppppppppuVar6 + 2,auStack_678,0x160);
    iVar14 = (int)ppppppppppppuVar10 + 1;
  }
  else {
    iVar14 = 0;
    if (((uint)local_680 ^ 2) != 0 || local_67c != (undefined4 ********)0x0) goto LAB_00ef0974;
  }
  pppppppppppppuVar20 = local_34c;
  local_508 = local_350;
  local_504 = local_34c;
  DataMemoryBarrier(0xb);
  local_500 = iVar14;
  if (DAT_018dad90 != 0) {
    local_350 = &local_1d8;
    local_1d8 = (undefined4 ************)&DAT_018dad90;
    FUN_015eedc4(&DAT_018dad90,1,&local_350,&DAT_0187c308,&DAT_018ac9b8);
  }
  do {
    if (DAT_018dad94 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dad94);
      goto LAB_00ef09e8;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dad94);
  } while (!bVar1);
  DAT_018dad94 = 1;
  DataMemoryBarrier(0xb);
LAB_00ef09e8:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018dad98 == '\0') {
      uVar8 = 0;
      goto LAB_00ef0c1c;
    }
LAB_00ef0a0c:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      DAT_018dad98 = '\x01';
    }
LAB_00ef0a24:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar14 = DAT_018dad94;
    } while (!bVar1);
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    if (DAT_018dad98 != '\0') {
      if (uVar8 == 0) goto LAB_00ef0a0c;
      goto LAB_00ef0a24;
    }
LAB_00ef0c1c:
    if (iVar14 != 0) {
      iVar14 = iVar14 * 0x168;
      unaff_r9 = (undefined4 ************)&DAT_018dad9c;
      do {
        FUN_00ef1898(&local_350,pppppppppppppuVar20);
        pppppppppppppuVar7 = local_34c;
        if (local_350 == (undefined4 ************)&DAT_80000000) {
          FUN_005c3974(local_34c);
LAB_00ef0c58:
          thunk_FUN_016d3fb4(pppppppppppppuVar7);
        }
        else {
          local_1d4 = (undefined4 *************)&DAT_006043a8;
          local_1d8 = &local_350;
          FUN_00e9d860(&local_4f8,&DAT_018dad9c,&DAT_00580c3b,&local_1d8);
          pppppppppppppuVar3 = local_4f4;
          if ((4 < ((uint)local_4f8 & 0xff)) ||
             (pppppppppppppuVar7 = local_34c, ((uint)local_4f8 & 0xff) == 3)) {
            ppppppppppppuVar10 = *local_4f4;
            ppppppppppppuVar16 = local_4f4[1];
            pppppppppppuVar11 = *ppppppppppppuVar16;
            if (pppppppppppuVar11 != (undefined4 ***********)0x0) {
              (*(code *)pppppppppppuVar11)(ppppppppppppuVar10);
            }
            if (ppppppppppppuVar16[1] != (undefined4 ***********)0x0) {
              thunk_FUN_016d3fb4(ppppppppppppuVar10);
            }
            thunk_FUN_016d3fb4(pppppppppppppuVar3);
            pppppppppppppuVar7 = local_34c;
          }
          local_34c = pppppppppppppuVar7;
          if (local_350 != (undefined4 ************)0x0) goto LAB_00ef0c58;
        }
        pppppppppppppuVar20 = pppppppppppppuVar20 + 0x5a;
        iVar14 = iVar14 + -0x168;
      } while (iVar14 != 0);
    }
    if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      DAT_018dad98 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar14 = DAT_018dad94;
    } while (!bVar1);
  }
  DAT_018dad94 = 0;
  if (iVar14 == 2) {
    FUN_016d6968(0xf0,&DAT_018dad94,0x81,1);
  }
  local_35c = local_514;
  local_358 = local_510;
  pppppppppuVar6 = local_504 + local_500 * 0x5a;
  local_360 = local_518;
  local_370 = local_508;
  local_374 = local_504;
  local_378 = (undefined4 **********)local_504;
  local_36c = pppppppppuVar6;
  if (local_500 != 0) {
    iVar14 = local_500 * 0x168;
    pppppppppuVar2 = local_504;
    do {
      local_350 = local_360;
      local_34c = local_35c;
      local_348 = local_358;
      FUN_016dd1aa(&local_340,pppppppppuVar2,0x168);
      FUN_016dd1aa(&local_1d8,pppppppppuVar2,0x168);
      FUN_00ef1898(&local_4f8,&local_1d8);
      pppppppppppppuVar20 = local_4f4;
      ppppppppppppuVar10 = local_4f8;
      ppppppppppppuVar16 = local_4f0;
      if (local_4f8 == (undefined4 ************)&DAT_80000000) {
        local_70 = local_4f4;
        if (DAT_018d9130 < 4) {
          uVar8 = (uint)DAT_018da8b0;
          if (uVar8 - 1 < 2) {
LAB_00ef0ea4:
            puVar12 = &DAT_018da884;
            if (uVar8 != 2) {
              DataMemoryBarrier(0xb);
              pppppppuVar15 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                pppppppuVar15 = (undefined4 *******)&DAT_018ae394;
              }
              pcVar13 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar13 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar13 = DAT_018daa74 + ((int)pppppppuVar15[2] - 1U & 0xfffffff8) + 8;
              }
              uVar23 = (*(code *)pppppppuVar15[5])(pcVar13,DAT_018da8a8);
              puVar12 = (undefined4 *)((ulonglong)uVar23 >> 0x20);
              if ((int)uVar23 == 0) goto LAB_00ef1164;
            }
            piVar9 = DAT_018da8a8 + 7;
            ppppppppppppuVar16 = (undefined4 ************)DAT_018da8a8[8];
            puVar22 = DAT_018da8a8;
            if (ppppppppppppuVar16 != (undefined4 ************)0x0) {
              local_60 = (undefined4 ***********)*piVar9;
              local_58 = (undefined4 *)DAT_018da8a8[9];
              local_5c = DAT_018da8a8[8];
              unaff_r9 = (undefined4 ************)DAT_018da8a8[10];
              puVar22 = (undefined4 *)DAT_018da8a8[9];
              pppppppppppppuVar20 = (undefined4 *************)DAT_018da8a8[10];
              local_50 = 0;
              local_48 = 0x4b;
              local_4c = (undefined4 *************)0x35ab6b;
              puVar12 = DAT_018da8a8;
              local_54 = unaff_r9;
            }
            if (ppppppppppppuVar16 < &SUB_00000002) {
              local_374 = pppppppppuVar2 + 0x5a;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_30 = &local_44;
            local_34 = &local_390;
            local_3c = &local_4c;
            local_40 = &local_60;
            local_6c = &local_40;
            local_380 = (undefined4 *************)&DAT_00000001;
            local_68 = 2;
            local_2c = (undefined4 *)&DAT_0187c2b0;
            local_4f8 = (undefined4 ************)&DAT_00000001;
            local_38 = (undefined4 ************)&DAT_018abb78;
            local_44 = &local_70;
            local_4f4 = (undefined4 *************)0x0;
            local_4e8 = &local_6c;
            DataMemoryBarrier(0xb);
            pcVar13 = s_SetGloba_00414c05;
            pppppppuVar15 = (undefined4 *******)&DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar13 = DAT_018daa74;
              pppppppuVar15 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar13 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_4e4 = puVar12;
            local_390 = (undefined4 ***********)*piVar9;
            local_38c = ppppppppppppuVar16;
            local_388 = puVar22;
            local_384 = pppppppppppppuVar20;
            local_64 = piVar9;
            iVar17 = (*(code *)pppppppuVar15[10])(pcVar13,&local_4f8);
            if (iVar17 != 0) {
              (*(code *)pppppppuVar15[0xb])(pcVar13,&local_4f8);
            }
          }
          else if (uVar8 != 0) {
            uVar8 = FUN_0169ac90(&DAT_018da8a8);
            uVar8 = uVar8 & 0xff;
            if (uVar8 != 0) goto LAB_00ef0ea4;
          }
        }
LAB_00ef1164:
        pppppppppppppuVar20 = local_70;
        FUN_005c3974(local_70);
        thunk_FUN_016d3fb4(pppppppppppppuVar20);
        ppppppppppppuVar16 = unaff_r9;
      }
      unaff_r9 = ppppppppppppuVar16;
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      if (local_94 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      FUN_00db41bc(&local_1d8);
      ppppppppppppuVar16 = local_348;
      if (ppppppppppppuVar10 == (undefined4 ************)&DAT_80000000) {
        local_4f8 = local_350;
        local_4f4 = local_34c;
        local_4f0 = local_348;
      }
      else {
        local_1c0 = (undefined4 ************)0x0;
        local_1d0 = local_348;
        local_1d4 = local_34c;
        local_1d8 = local_350;
        local_1cc = ppppppppppppuVar10;
        local_1c8 = pppppppppppppuVar20;
        local_1c4 = unaff_r9;
        if (local_348 == local_350) {
          FUN_01351a98(&local_1d8);
        }
        pppppppppppppuVar20 = local_1d4 + (int)ppppppppppppuVar16 * 4;
        *pppppppppppppuVar20 = local_1cc;
        pppppppppppppuVar20[1] = local_1c8;
        pppppppppppppuVar20[2] = local_1c4;
        pppppppppppppuVar20[3] = local_1c0;
        local_4f8 = local_1d8;
        local_4f0 = (undefined4 ************)((int)ppppppppppppuVar16 + 1);
        local_4f4 = local_1d4;
      }
      iVar14 = iVar14 + -0x168;
      local_360 = local_4f8;
      local_35c = local_4f4;
      local_358 = local_4f0;
      pppppppppuVar2 = pppppppppuVar2 + 0x5a;
    } while (iVar14 != 0);
    local_374 = pppppppppuVar6;
  }
  local_350 = local_360;
  local_34c = local_35c;
  local_348 = local_358;
  FUN_00ef2258(&local_378);
LAB_00ef12f4:
  if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb98);
  }
  piVar5[6] = (int)&DAT_3b9aca00;
  param_1[6] = (int)local_350;
  param_1[7] = (int)local_34c;
  param_1[8] = (int)local_348;
  iVar14 = param_2[1];
  iVar17 = param_2[2];
  iVar18 = param_2[3];
  iVar19 = param_2[4];
  iVar21 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = iVar14;
  param_1[2] = iVar17;
  param_1[3] = iVar18;
  param_1[4] = iVar19;
  param_1[5] = iVar21;
  return;
}

