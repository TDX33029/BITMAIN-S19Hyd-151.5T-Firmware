// FUN_00eee768 @ 00eee768 size=3420 calls_out=20 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eee768(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *******pppppppuVar1;
  undefined4 ************ppppppppppppuVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 ************ppppppppppppuVar6;
  uint uVar7;
  undefined4 ************ppppppppppppuVar8;
  undefined4 ***********pppppppppppuVar9;
  undefined4 ********ppppppppuVar10;
  undefined4 *puVar11;
  undefined4 **********ppppppppppuVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 ************ppppppppppppuVar17;
  undefined4 ************ppppppppppppuVar18;
  undefined4 ************ppppppppppppuVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 ************unaff_r9;
  undefined4 *********pppppppppuVar23;
  undefined4 *******pppppppuVar24;
  undefined4 *********pppppppppuVar25;
  undefined4 ************extraout_r12;
  undefined4 ************extraout_r12_00;
  undefined4 ************ppppppppppppuVar26;
  undefined4 ************extraout_r12_01;
  bool bVar27;
  undefined8 uVar28;
  undefined1 auStack_488 [228];
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 ************local_398 [56];
  undefined4 ************local_2b8;
  undefined4 **********ppppppppppuStack_2b4;
  undefined4 ************ppppppppppppuStack_2b0;
  undefined4 ***********local_2a8;
  undefined4 ************local_2a4;
  int local_2a0;
  undefined4 ************local_298;
  undefined4 **********local_294;
  undefined4 ************ppppppppppppuStack_290;
  undefined4 ************local_288;
  undefined4 ************local_284;
  undefined4 ***********local_280;
  undefined4 ************local_27c;
  undefined4 ***********local_278;
  undefined4 ************local_274;
  undefined4 ************local_270;
  undefined4 ************local_268;
  undefined1 auStack_264 [220];
  undefined4 ************local_188;
  undefined4 **********local_184;
  undefined4 ************ppppppppppppuStack_180;
  undefined4 ************local_17c;
  undefined4 **********local_178;
  undefined4 ************local_174;
  undefined4 *********local_170;
  int local_d8;
  undefined4 local_d4;
  int local_cc;
  undefined4 local_c8;
  undefined4 **********local_a4;
  undefined4 ************local_a0;
  undefined4 **********local_9c;
  undefined4 ************local_98;
  undefined4 ************local_90;
  undefined4 ***********local_8c;
  undefined *local_88;
  undefined4 ************local_84;
  undefined4 ************local_80;
  undefined *local_7c;
  undefined4 ***********local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 ************local_6c;
  undefined4 local_68;
  undefined4 **********local_60;
  undefined4 local_5c;
  undefined4 ***********local_58;
  uint local_54;
  undefined4 *local_50;
  undefined4 ************local_4c;
  undefined4 local_48;
  undefined4 ***********local_44;
  undefined4 ************local_40;
  undefined4 **********local_3c;
  undefined4 ************local_38;
  undefined4 *************local_30;
  undefined4 *local_2c;
  
  uVar3 = FUN_016dd1aa(auStack_488,param_3,0xe0);
  local_3a0 = 0;
  uVar28 = thunk_FUN_016de0ee(uVar3,8);
  piVar4 = (int *)((int)uVar28 + (int)((ulonglong)uVar28 >> 0x20));
  local_3a4 = 4;
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb88);
  }
  iVar14 = param_2[1];
  iVar15 = param_2[2];
  iVar16 = param_2[3];
  iVar20 = param_2[4];
  iVar22 = param_2[5];
  piVar4[2] = *param_2;
  piVar4[3] = iVar14;
  piVar4[4] = iVar15;
  piVar4[5] = iVar16;
  piVar4[6] = iVar20;
  piVar4[7] = iVar22;
  FUN_016dd1aa(local_398,auStack_488,0xf0);
  DataMemoryBarrier(0xb);
  if (DAT_018d914c != 0) {
    local_278 = &local_188;
    local_188 = (undefined4 ************)&DAT_018d914c;
    FUN_015eedc4(&DAT_018d914c,1,&local_278,&DAT_0187c2e0,&DAT_018ac9b8);
  }
  if (DAT_018d9150 == '\0') {
    local_98 = ppppppppppppuStack_2b0;
    local_9c = ppppppppppuStack_2b4;
    local_a0 = local_2b8;
    if (local_398[0] != (undefined4 ************)&SUB_00000002) {
      uVar7 = (uint)local_398 | 4;
      FUN_016dd1aa((uint)&local_188 | 4,uVar7,0xdc);
      local_268 = local_398[0];
      local_278 = local_2b8;
      local_274 = (undefined4 ************)ppppppppppuStack_2b4;
      local_270 = ppppppppppppuStack_2b0;
      FUN_016dd1aa(auStack_264,uVar7,0xdc);
      local_188 = local_398[0];
      FUN_00eef780(&local_40,&local_188);
      ppppppppppppuVar6 = local_40;
      ppppppppppuVar12 = local_3c;
      ppppppppppppuVar19 = local_38;
      if (local_40 == (undefined4 ************)&DAT_80000000) {
        local_60 = local_3c;
        ppppppppppppuVar19 = local_398[0];
        if (DAT_018d9130 < 4) {
          puVar11 = &DAT_018da884;
          uVar7 = (uint)DAT_018da8b0;
          ppppppppppppuVar26 = extraout_r12;
          if (uVar7 - 1 < 2) {
LAB_00eee9e8:
            pppppppuVar24 = (undefined4 *******)&DAT_018ae394;
            pcVar13 = s_SetGloba_00414c05;
            if (uVar7 != 2) {
              DataMemoryBarrier(0xb);
              pcVar5 = pcVar13;
              pppppppuVar1 = pppppppuVar24;
              if (DAT_018dd984 == 2) {
                pcVar5 = DAT_018daa74;
                pppppppuVar1 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar5 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
                }
              }
              iVar14 = (*(code *)pppppppuVar1[5])(pcVar5);
              ppppppppppppuVar19 = (undefined4 ************)&DAT_018daa64;
              ppppppppppppuVar26 = extraout_r12_00;
              if (iVar14 == 0) goto LAB_00eef270;
            }
            local_280 = (undefined4 ***********)(DAT_018da8a8 + 7);
            local_58 = (undefined4 ***********)*local_280;
            local_54 = DAT_018da8a8[8];
            if (local_54 != 0) {
              local_70 = DAT_018da8a8[9];
              local_6c = (undefined4 ************)DAT_018da8a8[10];
              local_78 = (undefined4 ***********)*local_280;
              local_74 = DAT_018da8a8[8];
              puVar11 = (undefined4 *)DAT_018da8a8[9];
              ppppppppppppuVar26 = (undefined4 ************)DAT_018da8a8[10];
              local_68 = 0;
              local_294 = (undefined4 **********)&DAT_0000004b;
              local_298 = (undefined4 ************)0x35ab6b;
            }
            if (local_54 < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_80 = &local_2a8;
            local_84 = &local_58;
            local_8c = &local_298;
            local_90 = &local_78;
            local_288 = &local_90;
            local_284 = (undefined4 ************)&SUB_00000002;
            local_2a8 = &local_60;
            ppppppppppppuVar19 = (undefined4 ************)&DAT_00000001;
            local_3c = (undefined4 **********)0x0;
            local_30 = &local_288;
            local_48 = 1;
            local_7c = &DAT_0187c2b0;
            local_88 = &DAT_018abb78;
            local_40 = (undefined4 ************)&DAT_00000001;
            DataMemoryBarrier(0xb);
            if (DAT_018dd984 == 2) {
              pcVar13 = DAT_018daa74;
              pppppppuVar24 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar13 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_50 = puVar11;
            local_4c = ppppppppppppuVar26;
            local_2c = DAT_018da8a8;
            iVar14 = (*(code *)pppppppuVar24[10])(pcVar13,&local_40);
            if (iVar14 != 0) {
              (*(code *)pppppppuVar24[0xb])(pcVar13,&local_40);
            }
          }
          else if (uVar7 != 0) {
            uVar7 = FUN_0169ac90(&DAT_018da8a8);
            uVar7 = uVar7 & 0xff;
            ppppppppppppuVar26 = extraout_r12_01;
            if (uVar7 != 0) goto LAB_00eee9e8;
          }
        }
LAB_00eef270:
        ppppppppppuVar12 = local_60;
        FUN_005c3974(local_60);
        thunk_FUN_016d3fb4(ppppppppppuVar12);
      }
      if (local_d8 != 0) {
        thunk_FUN_016d3fb4(local_d4);
      }
      if (local_cc != 0) {
        thunk_FUN_016d3fb4(local_c8);
      }
      ppppppppppppuVar26 = local_270;
      if (ppppppppppppuVar6 == (undefined4 ************)&DAT_80000000) {
        local_38 = local_270;
        local_3c = local_274;
        local_40 = (undefined4 ************)local_278;
      }
      else {
        local_188 = (undefined4 ************)local_278;
        local_184 = local_274;
        ppppppppppppuStack_180 = local_270;
        local_170 = (undefined4 *********)0x0;
        local_17c = ppppppppppppuVar6;
        local_178 = ppppppppppuVar12;
        local_174 = ppppppppppppuVar19;
        if (local_270 == (undefined4 ************)local_278) {
          FUN_01351a98(&local_188);
        }
        ppppppppppuVar12 = local_184 + (int)ppppppppppppuVar26 * 4;
        *ppppppppppuVar12 = local_17c;
        ppppppppppuVar12[3] = local_170;
        local_38 = (undefined4 ************)((int)ppppppppppppuVar26 + 1);
        ppppppppppuVar12[1] = local_178;
        ppppppppppuVar12[2] = local_174;
        local_40 = local_188;
        local_3c = local_184;
      }
      local_a0 = local_40;
      local_9c = local_3c;
      local_98 = local_38;
    }
    local_278 = local_a0;
    local_274 = (undefined4 ************)local_9c;
    local_270 = local_98;
    goto LAB_00eef200;
  }
  local_274 = (undefined4 ************)&DAT_00000008;
  bVar27 = local_398[0] != (undefined4 ************)&SUB_00000002;
  uVar3 = 0;
  if (bVar27) {
    uVar3 = 0xe0;
  }
  pppppppppppuVar9 = (undefined4 ***********)0x0;
  if (local_398[0] != (undefined4 ************)&SUB_00000002) {
    local_274 = (undefined4 ************)thunk_FUN_016d4a50(uVar3);
    pppppppppppuVar9 = (undefined4 ***********)(uint)bVar27;
    if (local_274 == (undefined4 ************)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar3);
    }
  }
  local_270 = (undefined4 ************)0x0;
  local_278 = pppppppppppuVar9;
  if ((pppppppppppuVar9 == (undefined4 ***********)0x0) &&
     (local_398[0] != (undefined4 ************)&SUB_00000002)) {
    FUN_00edff4c(&local_278,0,1,8,0xe0);
LAB_00eee86c:
    ppppppppppppuVar19 = local_270;
    local_274[(int)local_270 * 0x38] = local_398[0];
    FUN_016dd1aa(local_274 + (int)local_270 * 0x38 + 1,(uint)local_398 | 4,0xdc);
    iVar14 = (int)ppppppppppppuVar19 + 1;
  }
  else {
    iVar14 = 0;
    if (local_398[0] != (undefined4 ************)&SUB_00000002) goto LAB_00eee86c;
  }
  ppppppppppppuVar19 = local_274;
  local_2a8 = local_278;
  local_2a4 = local_274;
  DataMemoryBarrier(0xb);
  local_2a0 = iVar14;
  if (DAT_018dad90 != 0) {
    local_278 = &local_188;
    local_188 = (undefined4 ************)&DAT_018dad90;
    FUN_015eedc4(&DAT_018dad90,1,&local_278,&DAT_0187c308,&DAT_018ac9b8);
  }
  do {
    if (DAT_018dad94 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dad94);
      goto LAB_00eee8d4;
    }
    bVar27 = (bool)hasExclusiveAccess(0x18dad94);
  } while (!bVar27);
  DAT_018dad94 = 1;
  DataMemoryBarrier(0xb);
LAB_00eee8d4:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018dad98 == '\0') {
      uVar7 = 0;
      goto LAB_00eeeadc;
    }
LAB_00eee8fc:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      DAT_018dad98 = '\x01';
    }
LAB_00eee914:
    DataMemoryBarrier(0xb);
    do {
      bVar27 = (bool)hasExclusiveAccess(0x18dad94);
      iVar14 = DAT_018dad94;
    } while (!bVar27);
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    if (DAT_018dad98 != '\0') {
      if (uVar7 == 0) goto LAB_00eee8fc;
      goto LAB_00eee914;
    }
LAB_00eeeadc:
    if (iVar14 != 0) {
      iVar14 = iVar14 * 0xe0;
      unaff_r9 = (undefined4 ************)&DAT_018dad9c;
      do {
        FUN_00eef780(&local_278,ppppppppppppuVar19);
        ppppppppppppuVar6 = local_274;
        if (local_278 == (undefined4 ***********)&DAT_80000000) {
          FUN_005c3974(local_274);
LAB_00eeeb10:
          thunk_FUN_016d3fb4(ppppppppppppuVar6);
        }
        else {
          local_184 = (undefined4 **********)&DAT_006043a8;
          local_188 = &local_278;
          FUN_00e9d860(&local_40,&DAT_018dad9c,&DAT_00580c3b,&local_188);
          ppppppppppuVar12 = local_3c;
          if ((4 < ((uint)local_40 & 0xff)) ||
             (ppppppppppppuVar6 = local_274, ((uint)local_40 & 0xff) == 3)) {
            pppppppppuVar23 = *local_3c;
            pppppppppuVar25 = local_3c[1];
            ppppppppuVar10 = *pppppppppuVar25;
            if (ppppppppuVar10 != (undefined4 ********)0x0) {
              (*(code *)ppppppppuVar10)(pppppppppuVar23);
            }
            if (pppppppppuVar25[1] != (undefined4 ********)0x0) {
              thunk_FUN_016d3fb4(pppppppppuVar23);
            }
            thunk_FUN_016d3fb4(ppppppppppuVar12);
            ppppppppppppuVar6 = local_274;
          }
          local_274 = ppppppppppppuVar6;
          if (local_278 != (undefined4 ***********)0x0) goto LAB_00eeeb10;
        }
        ppppppppppppuVar19 = ppppppppppppuVar19 + 0x38;
        iVar14 = iVar14 + -0xe0;
      } while (iVar14 != 0);
    }
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      DAT_018dad98 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar27 = (bool)hasExclusiveAccess(0x18dad94);
      iVar14 = DAT_018dad94;
    } while (!bVar27);
  }
  DAT_018dad94 = 0;
  if (iVar14 == 2) {
    FUN_016d6968(0xf0,&DAT_018dad94,0x81,1);
  }
  ppppppppppppuVar19 = local_2a4;
  pppppppppppuVar9 = local_2a8;
  local_298 = local_2b8;
  local_294 = ppppppppppuStack_2b4;
  ppppppppppppuStack_290 = ppppppppppppuStack_2b0;
  ppppppppppppuVar26 = local_2a4 + local_2a0 * 0x38;
  local_280 = local_2a8;
  local_284 = local_2a4;
  local_288 = local_2a4;
  ppppppppppppuVar6 = local_2a4;
  local_27c = ppppppppppppuVar26;
  if (local_2a0 != 0) {
    iVar14 = local_2a0 * 0xe0;
    ppppppppppppuVar18 = local_2a4;
    do {
      local_278 = local_298;
      local_274 = (undefined4 ************)local_294;
      local_270 = ppppppppppppuStack_290;
      FUN_016dd1aa(&local_268,ppppppppppppuVar18,0xe0);
      FUN_016dd1aa(&local_188,ppppppppppppuVar18,0xe0);
      FUN_00eef780(&local_40,&local_188);
      ppppppppppppuVar2 = local_40;
      ppppppppppuVar12 = local_3c;
      ppppppppppppuVar17 = local_38;
      if (local_40 == (undefined4 ************)&DAT_80000000) {
        local_a4 = local_3c;
        if (DAT_018d9130 < 4) {
          uVar7 = (uint)DAT_018da8b0;
          if (uVar7 - 1 < 2) {
LAB_00eeed60:
            puVar11 = &DAT_018da884;
            if (uVar7 != 2) {
              DataMemoryBarrier(0xb);
              pppppppuVar24 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                pppppppuVar24 = (undefined4 *******)&DAT_018ae394;
              }
              pcVar13 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar13 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar13 = DAT_018daa74 + ((int)pppppppuVar24[2] - 1U & 0xfffffff8) + 8;
              }
              uVar28 = (*(code *)pppppppuVar24[5])(pcVar13,DAT_018da8a8);
              puVar11 = (undefined4 *)((ulonglong)uVar28 >> 0x20);
              if ((int)uVar28 == 0) goto LAB_00eef010;
            }
            ppppppppppppuVar8 = (undefined4 ************)(DAT_018da8a8 + 7);
            uVar7 = DAT_018da8a8[8];
            ppppppppppppuVar17 = ppppppppppppuVar6;
            puVar21 = DAT_018da8a8;
            if (uVar7 != 0) {
              local_78 = *ppppppppppppuVar8;
              local_70 = DAT_018da8a8[9];
              local_74 = DAT_018da8a8[8];
              unaff_r9 = (undefined4 ************)DAT_018da8a8[10];
              puVar21 = (undefined4 *)DAT_018da8a8[9];
              ppppppppppppuVar17 = (undefined4 ************)DAT_018da8a8[10];
              local_68 = 0;
              local_5c = 0x4b;
              local_60 = (undefined4 **********)0x35ab6b;
              puVar11 = DAT_018da8a8;
              local_6c = unaff_r9;
            }
            if (uVar7 < 2) {
              local_284 = ppppppppppppuVar18 + 0x38;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_80 = &local_44;
            local_84 = &local_58;
            local_8c = &local_60;
            local_90 = &local_78;
            local_a0 = &local_90;
            local_48 = 1;
            local_9c = (undefined4 **********)&SUB_00000002;
            local_7c = &DAT_0187c2b0;
            local_40 = (undefined4 ************)&DAT_00000001;
            local_88 = &DAT_018abb78;
            local_44 = &local_a4;
            local_3c = (undefined4 **********)0x0;
            local_30 = &local_a0;
            DataMemoryBarrier(0xb);
            pcVar13 = s_SetGloba_00414c05;
            ppppppppppppuVar6 = (undefined4 ************)&DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar13 = DAT_018daa74;
              ppppppppppppuVar6 = (undefined4 ************)DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar13 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_98 = ppppppppppppuVar8;
            local_58 = *ppppppppppppuVar8;
            local_54 = uVar7;
            local_50 = puVar21;
            local_4c = ppppppppppppuVar17;
            local_2c = puVar11;
            iVar15 = (*(code *)ppppppppppppuVar6[10])(pcVar13,&local_40);
            if (iVar15 != 0) {
              (*(code *)ppppppppppppuVar6[0xb])(pcVar13,&local_40);
            }
          }
          else if (uVar7 != 0) {
            uVar7 = FUN_0169ac90(&DAT_018da8a8);
            uVar7 = uVar7 & 0xff;
            if (uVar7 != 0) goto LAB_00eeed60;
          }
        }
LAB_00eef010:
        ppppppppppuVar12 = local_a4;
        FUN_005c3974(local_a4);
        thunk_FUN_016d3fb4(ppppppppppuVar12);
        ppppppppppppuVar17 = unaff_r9;
      }
      unaff_r9 = ppppppppppppuVar17;
      if (local_d8 != 0) {
        thunk_FUN_016d3fb4(local_d4);
      }
      if (local_cc != 0) {
        thunk_FUN_016d3fb4(local_c8);
      }
      ppppppppppppuVar17 = local_270;
      if (ppppppppppppuVar2 == (undefined4 ************)&DAT_80000000) {
        local_38 = local_270;
        local_3c = local_274;
        local_40 = (undefined4 ************)local_278;
      }
      else {
        local_170 = (undefined4 *********)0x0;
        local_188 = (undefined4 ************)local_278;
        local_184 = local_274;
        ppppppppppppuStack_180 = local_270;
        local_17c = ppppppppppppuVar2;
        local_178 = ppppppppppuVar12;
        local_174 = unaff_r9;
        if (local_270 == (undefined4 ************)local_278) {
          FUN_01351a98(&local_188);
        }
        ppppppppppuVar12 = local_184 + (int)ppppppppppppuVar17 * 4;
        *ppppppppppuVar12 = local_17c;
        ppppppppppuVar12[1] = local_178;
        ppppppppppuVar12[2] = local_174;
        ppppppppppuVar12[3] = local_170;
        local_40 = local_188;
        local_38 = (undefined4 ************)((int)ppppppppppppuVar17 + 1);
        local_3c = local_184;
        ppppppppppppuVar6 = ppppppppppppuVar17;
      }
      iVar14 = iVar14 + -0xe0;
      local_298 = local_40;
      local_294 = local_3c;
      ppppppppppppuStack_290 = local_38;
      ppppppppppppuVar18 = ppppppppppppuVar18 + 0x38;
    } while (iVar14 != 0);
    ppppppppppppuVar6 = ppppppppppppuVar26;
  }
  ppppppppppppuVar18 = ppppppppppppuVar6 + 0x30;
  local_278 = local_298;
  local_274 = (undefined4 ************)local_294;
  local_270 = ppppppppppppuStack_290;
  for (iVar14 = ((uint)((int)ppppppppppppuVar26 - (int)ppppppppppppuVar6) >> 5) * -0x49249249;
      iVar14 != 0; iVar14 = iVar14 + -1) {
    if (ppppppppppppuVar18[-4] != (undefined4 ***********)0x0) {
      thunk_FUN_016d3fb4(ppppppppppppuVar18[-3]);
    }
    if (ppppppppppppuVar18[-1] != (undefined4 ***********)0x0) {
      thunk_FUN_016d3fb4(*ppppppppppppuVar18);
    }
    ppppppppppppuVar18 = ppppppppppppuVar18 + 0x38;
  }
  if (pppppppppppuVar9 != (undefined4 ***********)0x0) {
    thunk_FUN_016d3fb4(ppppppppppppuVar19);
  }
LAB_00eef200:
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb98);
  }
  piVar4[6] = (int)&DAT_3b9aca00;
  param_1[6] = (int)local_278;
  param_1[7] = (int)local_274;
  param_1[8] = (int)local_270;
  iVar14 = param_2[1];
  iVar15 = param_2[2];
  iVar16 = param_2[3];
  iVar20 = param_2[4];
  iVar22 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = iVar14;
  param_1[2] = iVar15;
  param_1[3] = iVar16;
  param_1[4] = iVar20;
  param_1[5] = iVar22;
  return;
}

