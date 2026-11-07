// FUN_00eecdd4 @ 00eecdd4 size=3492 calls_out=21 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eecdd4(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 ****ppppuVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 ****ppppuVar4;
  undefined4 *******pppppppuVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *****pppppuVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *******pppppppuVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *******pppppppuVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  undefined4 *******pppppppuVar20;
  undefined4 ******ppppppuVar21;
  undefined4 ******ppppppuVar22;
  undefined4 *******extraout_r12;
  undefined4 *******extraout_r12_00;
  undefined4 *******extraout_r12_01;
  bool bVar23;
  undefined8 uVar24;
  undefined1 auStack_578 [236];
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 ***local_480;
  undefined4 ***pppuStack_47c;
  undefined4 *******local_478;
  undefined1 auStack_474 [220];
  undefined4 *******local_398;
  undefined4 *******local_394;
  undefined4 *******local_390;
  undefined4 *******local_388;
  undefined4 ****local_384;
  int local_380;
  undefined4 *******local_378;
  undefined4 *******local_374;
  undefined4 *******local_370;
  undefined4 *******local_368;
  undefined4 *local_364;
  undefined4 ******local_290;
  undefined4 *******local_28c;
  undefined4 *local_288;
  undefined4 *******local_284;
  undefined4 *******local_280;
  undefined *local_27c;
  undefined4 *****local_278;
  undefined4 ****local_274;
  undefined4 *******local_270;
  undefined4 ****local_26c;
  undefined4 local_268;
  undefined4 *******local_260;
  undefined4 *******local_25c;
  undefined4 *******local_258;
  undefined4 *******local_250;
  undefined4 *******local_24c;
  undefined4 *******local_248;
  undefined4 *******local_240;
  undefined4 *******local_23c;
  undefined4 *******local_238;
  undefined1 auStack_234 [220];
  undefined4 *******local_158;
  undefined4 *******local_154;
  undefined4 *******local_150;
  undefined4 *******local_14c;
  undefined4 *******local_148;
  undefined4 *******local_144;
  undefined4 ******local_140;
  int local_118;
  undefined4 local_114;
  int local_10c;
  undefined4 local_108;
  int local_90;
  undefined4 local_8c;
  int local_84;
  undefined4 local_80;
  undefined4 *******local_70;
  undefined4 *******local_6c;
  undefined4 local_68;
  int *local_64;
  undefined4 ******local_60;
  uint local_5c;
  undefined4 *local_58;
  undefined4 *******local_54;
  undefined4 local_50;
  undefined4 *******local_4c;
  undefined4 local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined4 *******local_38;
  undefined4 ******local_34;
  undefined4 *******local_30;
  undefined4 *local_2c;
  
  uVar2 = FUN_016dd1aa(auStack_578,param_3,0xe8);
  local_488 = 0;
  uVar24 = thunk_FUN_016de0ee(uVar2,8);
  piVar3 = (int *)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
  local_48c = 4;
  if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb88);
  }
  iVar11 = param_2[1];
  iVar13 = param_2[2];
  iVar14 = param_2[3];
  iVar15 = param_2[4];
  iVar17 = param_2[5];
  piVar3[2] = *param_2;
  piVar3[3] = iVar11;
  piVar3[4] = iVar13;
  piVar3[5] = iVar14;
  piVar3[6] = iVar15;
  piVar3[7] = iVar17;
  FUN_016dd1aa(&local_480,auStack_578,0xf8);
  DataMemoryBarrier(0xb);
  if (DAT_018d914c != 0) {
    local_250 = &local_158;
    local_158 = (undefined4 *******)&DAT_018d914c;
    FUN_015eedc4(&DAT_018d914c,1,&local_250,&DAT_0187c2e0,&DAT_018ac9b8);
  }
  if (DAT_018d9150 == '\0') {
    FUN_016dd1aa(&local_378,&local_480,0xe8);
    pppppppuVar5 = local_370;
    pppppppuVar20 = local_374;
    pppppppuVar16 = local_378;
    local_260 = local_398;
    local_25c = local_394;
    local_258 = local_390;
    local_370 = (undefined4 *******)&DAT_3b9aca00;
    if (pppppppuVar5 != (undefined4 *******)&DAT_3b9aca00) {
      FUN_016dd1aa(&local_14c,auStack_474,0xdc);
      local_23c = pppppppuVar20;
      local_250 = local_398;
      local_24c = local_394;
      local_248 = local_390;
      local_240 = pppppppuVar16;
      local_238 = pppppppuVar5;
      FUN_016dd1aa(auStack_234,auStack_474,0xdc);
      local_154 = pppppppuVar20;
      local_158 = pppppppuVar16;
      local_150 = pppppppuVar5;
      FUN_00eede20(&local_40,&local_158);
      pppppppuVar16 = local_3c;
      pppppppuVar5 = local_40;
      pppppppuVar20 = local_38;
      if (local_40 == (undefined4 *******)&DAT_80000000) {
        local_44 = local_3c;
        if (DAT_018d9130 < 4) {
          puVar9 = &DAT_018da884;
          uVar6 = (uint)DAT_018da8b0;
          pppppppuVar20 = extraout_r12;
          if (uVar6 - 1 < 2) {
LAB_00eed0a0:
            pppppppuVar16 = (undefined4 *******)&DAT_018daa64;
            if (uVar6 != 2) {
              DataMemoryBarrier(0xb);
              pcVar10 = s_SetGloba_00414c05;
              puVar19 = &DAT_018ae394;
              if (DAT_018dd984 == 2) {
                pcVar10 = DAT_018daa74;
                puVar19 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
              }
              iVar11 = (**(code **)(puVar19 + 0x14))(pcVar10);
              pppppppuVar20 = extraout_r12_00;
              if (iVar11 == 0) goto LAB_00eed928;
            }
            local_64 = DAT_018da8a8 + 7;
            local_60 = (undefined4 ******)*local_64;
            local_5c = DAT_018da8a8[8];
            if (local_5c != 0) {
              local_270 = (undefined4 *******)DAT_018da8a8[9];
              local_26c = (undefined4 ****)DAT_018da8a8[10];
              local_278 = (undefined4 *****)*local_64;
              local_274 = (undefined4 ****)DAT_018da8a8[8];
              puVar9 = (undefined4 *)DAT_018da8a8[9];
              pppppppuVar20 = (undefined4 *******)DAT_018da8a8[10];
              local_268 = 0;
              local_384 = (undefined4 ****)0x4b;
              local_388 = (undefined4 *******)0x35ab6b;
            }
            if (local_5c < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_280 = &local_4c;
            local_284 = &local_60;
            local_28c = &local_388;
            local_290 = &local_278;
            local_6c = &local_290;
            local_68 = 2;
            local_4c = &local_44;
            pppppppuVar16 = (undefined4 *******)&DAT_00000001;
            local_3c = (undefined4 *******)0x0;
            local_30 = &local_6c;
            local_50 = 1;
            local_27c = &DAT_0187c2b0;
            local_288 = (undefined4 *)&DAT_018abb78;
            local_40 = (undefined4 *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar10 = s_SetGloba_00414c05;
            puVar19 = &DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar10 = DAT_018daa74;
              puVar19 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            local_58 = puVar9;
            local_54 = pppppppuVar20;
            local_2c = DAT_018da8a8;
            iVar11 = (**(code **)(puVar19 + 0x28))(pcVar10,&local_40);
            if (iVar11 != 0) {
              (**(code **)(puVar19 + 0x2c))(pcVar10,&local_40);
            }
          }
          else if (uVar6 != 0) {
            uVar6 = FUN_0169ac90(&DAT_018da8a8);
            uVar6 = uVar6 & 0xff;
            pppppppuVar20 = extraout_r12_01;
            if (uVar6 != 0) goto LAB_00eed0a0;
          }
        }
LAB_00eed928:
        pppppppuVar20 = local_44;
        FUN_005c3974(local_44);
        thunk_FUN_016d3fb4(pppppppuVar20);
      }
      if (local_118 != 0) {
        thunk_FUN_016d3fb4(local_114);
      }
      if (local_10c != 0) {
        thunk_FUN_016d3fb4(local_108);
      }
      if (local_90 == -0x80000000 || local_90 == 0) {
        if (!(local_84 == -0x80000000 || local_84 == 0)) goto LAB_00eed814;
LAB_00eed7b4:
        if (pppppppuVar5 != (undefined4 *******)&DAT_80000000) goto LAB_00eed824;
LAB_00eed7bc:
        local_38 = local_248;
        local_3c = local_24c;
        local_40 = local_250;
      }
      else {
        thunk_FUN_016d3fb4(local_8c);
        if (!(local_84 != -0x80000000 && local_84 != 0)) goto LAB_00eed7b4;
LAB_00eed814:
        thunk_FUN_016d3fb4(local_80);
        if (pppppppuVar5 == (undefined4 *******)&DAT_80000000) goto LAB_00eed7bc;
LAB_00eed824:
        pppppppuVar12 = local_248;
        local_158 = local_250;
        local_154 = local_24c;
        local_150 = local_248;
        local_140 = (undefined4 ******)0x0;
        local_14c = pppppppuVar5;
        local_148 = pppppppuVar16;
        local_144 = pppppppuVar20;
        if (local_248 == local_250) {
          FUN_01351a98(&local_158);
        }
        pppppppuVar16 = local_154 + (int)pppppppuVar12 * 4;
        *pppppppuVar16 = local_14c;
        pppppppuVar16[1] = local_148;
        pppppppuVar16[2] = local_144;
        pppppppuVar16[3] = local_140;
        local_40 = local_158;
        local_38 = (undefined4 *******)((int)pppppppuVar12 + 1);
        local_3c = local_154;
      }
      local_260 = local_40;
      local_25c = local_3c;
      local_258 = local_38;
    }
    local_250 = local_260;
    local_24c = local_25c;
    local_248 = local_258;
    goto LAB_00eed8b4;
  }
  local_24c = (undefined4 *******)0x8;
  bVar23 = local_478 != (undefined4 *******)&DAT_3b9aca00;
  uVar2 = 0;
  if (bVar23) {
    uVar2 = 0xe8;
  }
  pppppppuVar16 = (undefined4 *******)0x0;
  if (local_478 != (undefined4 *******)&DAT_3b9aca00) {
    local_24c = (undefined4 *******)thunk_FUN_016d4a50(uVar2);
    pppppppuVar16 = (undefined4 *******)(uint)bVar23;
    if (local_24c == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar2);
    }
  }
  local_248 = (undefined4 *******)0x0;
  local_250 = pppppppuVar16;
  if ((pppppppuVar16 == (undefined4 *******)0x0) && (local_478 != (undefined4 *******)&DAT_3b9aca00)
     ) {
    FUN_00edff4c(&local_250,0,1,8,0xe8);
LAB_00eecef4:
    pppppppuVar16 = local_248;
    ppppuVar4 = local_24c + (int)local_248 * 0x3a;
    *ppppuVar4 = local_480;
    ppppuVar4[1] = pppuStack_47c;
    ppppuVar4[2] = local_478;
    FUN_016dd1aa(ppppuVar4 + 3,auStack_474,0xdc);
    iVar11 = (int)pppppppuVar16 + 1;
  }
  else {
    iVar11 = 0;
    if (local_478 != (undefined4 *******)&DAT_3b9aca00) goto LAB_00eecef4;
  }
  pppppppuVar16 = local_24c;
  local_388 = local_250;
  local_384 = local_24c;
  DataMemoryBarrier(0xb);
  local_380 = iVar11;
  if (DAT_018dad90 != 0) {
    local_250 = &local_158;
    local_158 = (undefined4 *******)&DAT_018dad90;
    FUN_015eedc4(&DAT_018dad90,1,&local_250,&DAT_0187c308,&DAT_018ac9b8);
  }
  do {
    if (DAT_018dad94 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dad94);
      goto LAB_00eecf64;
    }
    bVar23 = (bool)hasExclusiveAccess(0x18dad94);
  } while (!bVar23);
  DAT_018dad94 = 1;
  DataMemoryBarrier(0xb);
LAB_00eecf64:
  pppppppuVar20 = local_478;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018dad98 == '\0') {
      uVar6 = 0;
      goto LAB_00eed194;
    }
LAB_00eecf88:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      DAT_018dad98 = '\x01';
    }
LAB_00eecfa0:
    DataMemoryBarrier(0xb);
    do {
      bVar23 = (bool)hasExclusiveAccess(0x18dad94);
      iVar11 = DAT_018dad94;
    } while (!bVar23);
  }
  else {
    uVar6 = FUN_015bf3f8();
    uVar6 = uVar6 ^ 1;
    if (DAT_018dad98 != '\0') {
      if (uVar6 == 0) goto LAB_00eecf88;
      goto LAB_00eecfa0;
    }
LAB_00eed194:
    if (iVar11 != 0) {
      iVar11 = iVar11 * 0xe8;
      pppppppuVar20 = (undefined4 *******)&DAT_018dad9c;
      do {
        FUN_00eede20(&local_250,pppppppuVar16);
        pppppppuVar5 = local_24c;
        if (local_250 == (undefined4 *******)&DAT_80000000) {
          FUN_005c3974(local_24c);
LAB_00eed1cc:
          thunk_FUN_016d3fb4(pppppppuVar5);
        }
        else {
          local_154 = (undefined4 *******)&DAT_006043a8;
          local_158 = &local_250;
          FUN_00e9d860(&local_378,&DAT_018dad9c,&DAT_00580c3b,&local_158);
          pppppppuVar12 = local_374;
          if ((4 < ((uint)local_378 & 0xff)) ||
             (pppppppuVar5 = local_24c, ((uint)local_378 & 0xff) == 3)) {
            ppppppuVar21 = *local_374;
            ppppppuVar22 = local_374[1];
            pppppuVar8 = *ppppppuVar22;
            if (pppppuVar8 != (undefined4 *****)0x0) {
              (*(code *)pppppuVar8)(ppppppuVar21);
            }
            if (ppppppuVar22[1] != (undefined4 *****)0x0) {
              thunk_FUN_016d3fb4(ppppppuVar21);
            }
            thunk_FUN_016d3fb4(pppppppuVar12);
            pppppppuVar5 = local_24c;
          }
          local_24c = pppppppuVar5;
          if (local_250 != (undefined4 *******)0x0) goto LAB_00eed1cc;
        }
        pppppppuVar16 = pppppppuVar16 + 0x3a;
        iVar11 = iVar11 + -0xe8;
      } while (iVar11 != 0);
    }
    if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      DAT_018dad98 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar23 = (bool)hasExclusiveAccess(0x18dad94);
      iVar11 = DAT_018dad94;
    } while (!bVar23);
  }
  DAT_018dad94 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,&DAT_018dad94,0x81,1);
  }
  local_25c = local_394;
  local_258 = local_390;
  ppppuVar4 = local_384 + local_380 * 0x3a;
  local_260 = local_398;
  local_278 = (undefined4 *****)local_384;
  local_274 = local_384;
  local_270 = local_388;
  local_26c = ppppuVar4;
  if (local_380 != 0) {
    iVar11 = local_380 * 0xe8;
    ppppuVar1 = local_384;
    do {
      local_250 = local_260;
      local_24c = local_25c;
      local_248 = local_258;
      FUN_016dd1aa(&local_240,ppppuVar1,0xe8);
      FUN_016dd1aa(&local_158,ppppuVar1,0xe8);
      FUN_00eede20(&local_378,&local_158);
      pppppppuVar16 = local_374;
      pppppppuVar5 = local_378;
      pppppppuVar12 = local_370;
      if (local_378 == (undefined4 *******)&DAT_80000000) {
        local_70 = local_374;
        if (DAT_018d9130 < 4) {
          uVar6 = (uint)DAT_018da8b0;
          if (uVar6 - 1 < 2) {
LAB_00eed404:
            puVar9 = &DAT_018da884;
            if (uVar6 != 2) {
              DataMemoryBarrier(0xb);
              puVar19 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar19 = &DAT_018ae394;
              }
              pcVar10 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar10 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar10 = DAT_018daa74 + (*(int *)(puVar19 + 8) - 1U & 0xfffffff8) + 8;
              }
              uVar24 = (**(code **)(puVar19 + 0x14))(pcVar10,DAT_018da8a8);
              puVar9 = (undefined4 *)((ulonglong)uVar24 >> 0x20);
              if ((int)uVar24 == 0) goto LAB_00eed718;
            }
            piVar7 = DAT_018da8a8 + 7;
            pppppppuVar12 = (undefined4 *******)DAT_018da8a8[8];
            puVar18 = DAT_018da8a8;
            if (pppppppuVar12 != (undefined4 *******)0x0) {
              local_58 = (undefined4 *)DAT_018da8a8[9];
              local_60 = (undefined4 ******)*piVar7;
              local_5c = DAT_018da8a8[8];
              pppppppuVar20 = (undefined4 *******)DAT_018da8a8[10];
              puVar18 = (undefined4 *)DAT_018da8a8[9];
              pppppppuVar16 = (undefined4 *******)DAT_018da8a8[10];
              local_50 = 0;
              local_48 = 0x4b;
              local_4c = (undefined4 *******)0x35ab6b;
              puVar9 = DAT_018da8a8;
              local_54 = pppppppuVar20;
            }
            if (pppppppuVar12 < &SUB_00000002) {
              local_274 = ppppuVar1 + 0x3a;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_30 = &local_44;
            local_34 = &local_290;
            local_3c = &local_4c;
            local_40 = &local_60;
            local_6c = &local_40;
            local_280 = (undefined4 *******)&DAT_00000001;
            local_68 = 2;
            local_2c = (undefined4 *)&DAT_0187c2b0;
            local_378 = (undefined4 *******)&DAT_00000001;
            local_38 = (undefined4 *******)&DAT_018abb78;
            local_44 = &local_70;
            local_374 = (undefined4 *******)0x0;
            local_368 = &local_6c;
            DataMemoryBarrier(0xb);
            puVar19 = &DAT_018ae394;
            pcVar10 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar10 = DAT_018daa74;
              puVar19 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            local_364 = puVar9;
            local_290 = (undefined4 ******)*piVar7;
            local_28c = pppppppuVar12;
            local_288 = puVar18;
            local_284 = pppppppuVar16;
            local_64 = piVar7;
            iVar13 = (**(code **)(puVar19 + 0x28))(pcVar10,&local_378);
            if (iVar13 != 0) {
              (**(code **)(puVar19 + 0x2c))(pcVar10,&local_378);
            }
          }
          else if (uVar6 != 0) {
            uVar6 = FUN_0169ac90(&DAT_018da8a8);
            uVar6 = uVar6 & 0xff;
            if (uVar6 != 0) goto LAB_00eed404;
          }
        }
LAB_00eed718:
        pppppppuVar16 = local_70;
        FUN_005c3974(local_70);
        thunk_FUN_016d3fb4(pppppppuVar16);
        pppppppuVar12 = pppppppuVar20;
      }
      pppppppuVar20 = pppppppuVar12;
      if (local_118 != 0) {
        thunk_FUN_016d3fb4(local_114);
      }
      if (local_10c != 0) {
        thunk_FUN_016d3fb4(local_108);
      }
      if (local_90 == -0x80000000 || local_90 == 0) {
        if (!(local_84 == -0x80000000 || local_84 == 0)) goto LAB_00eed6b0;
LAB_00eed624:
        if (pppppppuVar5 == (undefined4 *******)&DAT_80000000) goto LAB_00eed358;
LAB_00eed62c:
        pppppppuVar12 = local_248;
        local_140 = (undefined4 ******)0x0;
        local_158 = local_250;
        local_154 = local_24c;
        local_150 = local_248;
        local_14c = pppppppuVar5;
        local_148 = pppppppuVar16;
        local_144 = pppppppuVar20;
        if (local_248 == local_250) {
          FUN_01351a98(&local_158);
        }
        pppppppuVar16 = local_154 + (int)pppppppuVar12 * 4;
        *pppppppuVar16 = local_14c;
        pppppppuVar16[1] = local_148;
        pppppppuVar16[2] = local_144;
        pppppppuVar16[3] = local_140;
        local_378 = local_158;
        local_370 = (undefined4 *******)((int)pppppppuVar12 + 1);
        local_374 = local_154;
      }
      else {
        thunk_FUN_016d3fb4(local_8c);
        if (!(local_84 != -0x80000000 && local_84 != 0)) goto LAB_00eed624;
LAB_00eed6b0:
        thunk_FUN_016d3fb4(local_80);
        if (pppppppuVar5 != (undefined4 *******)&DAT_80000000) goto LAB_00eed62c;
LAB_00eed358:
        local_378 = local_250;
        local_374 = local_24c;
        local_370 = local_248;
      }
      iVar11 = iVar11 + -0xe8;
      local_260 = local_378;
      local_25c = local_374;
      local_258 = local_370;
      ppppuVar1 = ppppuVar1 + 0x3a;
    } while (iVar11 != 0);
    local_274 = ppppuVar4;
  }
  local_250 = local_260;
  local_24c = local_25c;
  local_248 = local_258;
  FUN_00eee488(&local_278);
LAB_00eed8b4:
  if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb98);
  }
  piVar3[6] = (int)&DAT_3b9aca00;
  param_1[6] = (int)local_250;
  param_1[7] = (int)local_24c;
  param_1[8] = (int)local_248;
  iVar11 = param_2[1];
  iVar13 = param_2[2];
  iVar14 = param_2[3];
  iVar15 = param_2[4];
  iVar17 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = iVar11;
  param_1[2] = iVar13;
  param_1[3] = iVar14;
  param_1[4] = iVar15;
  param_1[5] = iVar17;
  return;
}

