// FUN_00ee899c @ 00ee899c size=3428 calls_out=22 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ee899c(int *param_1,int *param_2,undefined4 param_3)

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
  undefined1 auStack_5f0 [260];
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 ********local_4e0;
  undefined4 ********local_4dc;
  undefined1 auStack_4d8 [248];
  undefined4 ************local_3e0;
  undefined4 *************local_3dc;
  undefined4 ************local_3d8;
  undefined4 ************local_3d0;
  undefined4 *********local_3cc;
  int local_3c8;
  undefined4 ************local_3c0;
  undefined4 *************local_3bc;
  undefined4 ************local_3b8;
  undefined4 ************local_3b0;
  undefined4 *local_3ac;
  undefined4 ***********local_2c0;
  undefined4 ************local_2bc;
  undefined4 *local_2b8;
  undefined4 *************local_2b4;
  undefined4 *************local_2b0;
  undefined *local_2ac;
  undefined4 **********local_2a8;
  undefined4 *********local_2a4;
  undefined4 ************local_2a0;
  undefined4 *********local_29c;
  undefined4 local_298;
  undefined4 ************local_290;
  undefined4 *************local_28c;
  undefined4 ************local_288;
  undefined4 ************local_280;
  undefined4 *************local_27c;
  undefined4 ************local_278;
  undefined4 ************local_270;
  undefined4 *************local_26c;
  undefined1 auStack_268 [248];
  undefined4 ************local_170;
  undefined4 *************local_16c;
  undefined4 ************local_168;
  undefined4 ************local_164;
  undefined4 *************local_160;
  undefined4 ************local_15c;
  undefined4 ************local_158;
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
  
  uVar4 = FUN_016dd1aa(auStack_5f0,param_3,0x100);
  local_4e8 = 0;
  uVar23 = thunk_FUN_016de0ee(uVar4,8);
  piVar5 = (int *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  local_4ec = 4;
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
  FUN_016dd1aa(&local_4e0,auStack_5f0,0x110);
  DataMemoryBarrier(0xb);
  if (DAT_018d914c != 0) {
    local_280 = &local_170;
    local_170 = (undefined4 ************)&DAT_018d914c;
    FUN_015eedc4(&DAT_018d914c,1,&local_280,&DAT_0187c2e0,&DAT_018ac9b8);
  }
  if (DAT_018d9150 == '\0') {
    FUN_016dd1aa(&local_3c0,&local_4e0,0x100);
    pppppppppppppuVar20 = local_3bc;
    ppppppppppppuVar10 = local_3c0;
    local_3c0 = (undefined4 ************)&SUB_00000002;
    local_3bc = (undefined4 *************)0x0;
    local_290 = local_3e0;
    local_28c = local_3dc;
    local_288 = local_3d8;
    if (ppppppppppppuVar10 != (undefined4 ************)&SUB_00000002 ||
        pppppppppppppuVar20 != (undefined4 *************)0x0) {
      FUN_016dd1aa(&local_168,auStack_4d8,0xf8);
      local_26c = pppppppppppppuVar20;
      local_280 = local_3e0;
      local_27c = local_3dc;
      local_278 = local_3d8;
      local_270 = ppppppppppppuVar10;
      FUN_016dd1aa(auStack_268,auStack_4d8,0xf8);
      local_16c = pppppppppppppuVar20;
      local_170 = ppppppppppppuVar10;
      FUN_00ee99c4(&local_40,&local_170);
      pppppppppppppuVar20 = local_3c;
      ppppppppppppuVar16 = local_40;
      ppppppppppppuVar10 = local_38;
      if (local_40 == (undefined4 ************)&DAT_80000000) {
        local_44 = local_3c;
        if (DAT_018d9130 < 4) {
          puVar12 = &DAT_018da884;
          uVar8 = (uint)DAT_018da8b0;
          if (uVar8 - 1 < 2) {
LAB_00ee8c58:
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
              if (iVar14 == 0) goto LAB_00ee948c;
            }
            local_64 = DAT_018da8a8 + 7;
            local_60 = (undefined4 ***********)*local_64;
            local_5c = DAT_018da8a8[8];
            if (local_5c != 0) {
              local_2a0 = (undefined4 ************)DAT_018da8a8[9];
              local_29c = (undefined4 *********)DAT_018da8a8[10];
              local_2a8 = (undefined4 **********)*local_64;
              local_2a4 = (undefined4 *********)DAT_018da8a8[8];
              puVar12 = (undefined4 *)DAT_018da8a8[9];
              ppppppppppppuVar10 = (undefined4 ************)DAT_018da8a8[10];
              local_298 = 0;
              local_3cc = (undefined4 *********)0x4b;
              local_3d0 = (undefined4 ************)0x35ab6b;
            }
            if (local_5c < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_2b0 = &local_4c;
            local_2b4 = (undefined4 *************)&local_60;
            local_2bc = &local_3d0;
            local_68 = 2;
            local_2c0 = &local_2a8;
            local_4c = &local_44;
            local_6c = &local_2c0;
            pppppppppppppuVar20 = (undefined4 *************)&DAT_018dd940;
            local_3c = (undefined4 *************)0x0;
            local_30 = &local_6c;
            local_50 = 1;
            local_40 = (undefined4 ************)&DAT_00000001;
            local_2ac = &DAT_0187c2b0;
            local_2b8 = (undefined4 *)&DAT_018abb78;
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
            if (uVar8 != 0) goto LAB_00ee8c58;
          }
        }
LAB_00ee948c:
        pppppppppppppuVar7 = local_44;
        FUN_005c3974(local_44);
        thunk_FUN_016d3fb4(pppppppppppppuVar7);
        ppppppppppppuVar10 = &local_280;
      }
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      if (local_94 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      FUN_00eea200(&local_170);
      local_38 = local_278;
      if (ppppppppppppuVar16 == (undefined4 ************)&DAT_80000000) {
        local_3c = local_27c;
        local_40 = local_280;
      }
      else {
        local_16c = local_27c;
        local_168 = local_278;
        local_170 = local_280;
        local_158 = (undefined4 ************)0x0;
        local_164 = ppppppppppppuVar16;
        local_160 = pppppppppppppuVar20;
        local_15c = ppppppppppppuVar10;
        if (local_278 == local_280) {
          FUN_01351a98(&local_170);
        }
        pppppppppppppuVar20 = local_16c + (int)local_38 * 4;
        *pppppppppppppuVar20 = local_164;
        pppppppppppppuVar20[3] = local_158;
        local_38 = (undefined4 ************)((int)local_38 + 1);
        pppppppppppppuVar20[1] = local_160;
        pppppppppppppuVar20[2] = local_15c;
        local_40 = local_170;
        local_3c = local_16c;
      }
      local_290 = local_40;
      local_28c = local_3c;
      local_288 = local_38;
    }
    local_280 = local_290;
    local_27c = local_28c;
    local_278 = local_288;
    goto LAB_00ee941c;
  }
  local_27c = (undefined4 *************)0x8;
  ppppppppppppuVar10 = (undefined4 ************)0x0;
  if (local_4e0 != (undefined4 ********)0x2 || local_4dc != (undefined4 ********)0x0) {
    ppppppppppppuVar10 = (undefined4 ************)&DAT_00000001;
    local_27c = (undefined4 *************)thunk_FUN_016d4a50(0x100);
    if (local_27c == (undefined4 *************)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x100);
    }
  }
  local_278 = (undefined4 ************)0x0;
  local_280 = ppppppppppppuVar10;
  if ((ppppppppppppuVar10 == (undefined4 ************)0x0) &&
     (((uint)local_4e0 ^ 2) != 0 || local_4dc != (undefined4 ********)0x0)) {
    FUN_00edff4c(&local_280,0,1,8,0x100);
LAB_00ee8aa8:
    ppppppppppppuVar10 = local_278;
    pppppppppuVar6 = local_27c + (int)local_278 * 0x40;
    *pppppppppuVar6 = local_4e0;
    pppppppppuVar6[1] = local_4dc;
    FUN_016dd1aa(pppppppppuVar6 + 2,auStack_4d8,0xf8);
    iVar14 = (int)ppppppppppppuVar10 + 1;
  }
  else {
    iVar14 = 0;
    if (((uint)local_4e0 ^ 2) != 0 || local_4dc != (undefined4 ********)0x0) goto LAB_00ee8aa8;
  }
  pppppppppppppuVar20 = local_27c;
  local_3d0 = local_280;
  local_3cc = local_27c;
  DataMemoryBarrier(0xb);
  local_3c8 = iVar14;
  if (DAT_018dad90 != 0) {
    local_280 = &local_170;
    local_170 = (undefined4 ************)&DAT_018dad90;
    FUN_015eedc4(&DAT_018dad90,1,&local_280,&DAT_0187c308,&DAT_018ac9b8);
  }
  do {
    if (DAT_018dad94 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dad94);
      goto LAB_00ee8b14;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dad94);
  } while (!bVar1);
  DAT_018dad94 = 1;
  DataMemoryBarrier(0xb);
LAB_00ee8b14:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018dad98 == '\0') {
      uVar8 = 0;
      goto LAB_00ee8d4c;
    }
LAB_00ee8b38:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      DAT_018dad98 = '\x01';
    }
LAB_00ee8b50:
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
      if (uVar8 == 0) goto LAB_00ee8b38;
      goto LAB_00ee8b50;
    }
LAB_00ee8d4c:
    if (iVar14 != 0) {
      iVar14 = iVar14 << 8;
      unaff_r9 = (undefined4 ************)&DAT_018dad9c;
      do {
        FUN_00ee99c4(&local_280,pppppppppppppuVar20);
        pppppppppppppuVar7 = local_27c;
        if (local_280 == (undefined4 ************)&DAT_80000000) {
          FUN_005c3974(local_27c);
LAB_00ee8d84:
          thunk_FUN_016d3fb4(pppppppppppppuVar7);
        }
        else {
          local_16c = (undefined4 *************)&DAT_006043a8;
          local_170 = &local_280;
          FUN_00e9d860(&local_3c0,&DAT_018dad9c,&DAT_00580c3b,&local_170);
          pppppppppppppuVar3 = local_3bc;
          if ((4 < ((uint)local_3c0 & 0xff)) ||
             (pppppppppppppuVar7 = local_27c, ((uint)local_3c0 & 0xff) == 3)) {
            ppppppppppppuVar10 = *local_3bc;
            ppppppppppppuVar16 = local_3bc[1];
            pppppppppppuVar11 = *ppppppppppppuVar16;
            if (pppppppppppuVar11 != (undefined4 ***********)0x0) {
              (*(code *)pppppppppppuVar11)(ppppppppppppuVar10);
            }
            if (ppppppppppppuVar16[1] != (undefined4 ***********)0x0) {
              thunk_FUN_016d3fb4(ppppppppppppuVar10);
            }
            thunk_FUN_016d3fb4(pppppppppppppuVar3);
            pppppppppppppuVar7 = local_27c;
          }
          local_27c = pppppppppppppuVar7;
          if (local_280 != (undefined4 ************)0x0) goto LAB_00ee8d84;
        }
        pppppppppppppuVar20 = pppppppppppppuVar20 + 0x40;
        iVar14 = iVar14 + -0x100;
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
  local_290 = local_3e0;
  pppppppppuVar6 = local_3cc + local_3c8 * 0x40;
  local_288 = local_3d8;
  local_28c = local_3dc;
  local_2a4 = local_3cc;
  local_2a0 = local_3d0;
  local_2a8 = (undefined4 **********)local_3cc;
  local_29c = pppppppppuVar6;
  if (local_3c8 != 0) {
    iVar14 = local_3c8 << 8;
    pppppppppuVar2 = local_3cc;
    do {
      local_280 = local_290;
      local_27c = local_28c;
      local_278 = local_288;
      FUN_016dd1aa(&local_270,pppppppppuVar2,0x100);
      FUN_016dd1aa(&local_170,pppppppppuVar2,0x100);
      FUN_00ee99c4(&local_3c0,&local_170);
      pppppppppppppuVar20 = local_3bc;
      ppppppppppppuVar10 = local_3c0;
      ppppppppppppuVar16 = local_3b8;
      if (local_3c0 == (undefined4 ************)&DAT_80000000) {
        local_70 = local_3bc;
        if (DAT_018d9130 < 4) {
          uVar8 = (uint)DAT_018da8b0;
          if (uVar8 - 1 < 2) {
LAB_00ee8fc8:
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
              if ((int)uVar23 == 0) goto LAB_00ee9288;
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
              local_2a4 = pppppppppuVar2 + 0x40;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_30 = &local_44;
            local_34 = &local_2c0;
            local_3c = &local_4c;
            local_40 = &local_60;
            local_6c = &local_40;
            local_2b0 = (undefined4 *************)&DAT_00000001;
            local_68 = 2;
            local_2c = (undefined4 *)&DAT_0187c2b0;
            local_3c0 = (undefined4 ************)&DAT_00000001;
            local_38 = (undefined4 ************)&DAT_018abb78;
            local_44 = &local_70;
            local_3bc = (undefined4 *************)0x0;
            local_3b0 = &local_6c;
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
            local_3ac = puVar12;
            local_2c0 = (undefined4 ***********)*piVar9;
            local_2bc = ppppppppppppuVar16;
            local_2b8 = puVar22;
            local_2b4 = pppppppppppppuVar20;
            local_64 = piVar9;
            iVar17 = (*(code *)pppppppuVar15[10])(pcVar13,&local_3c0);
            if (iVar17 != 0) {
              (*(code *)pppppppuVar15[0xb])(pcVar13,&local_3c0);
            }
          }
          else if (uVar8 != 0) {
            uVar8 = FUN_0169ac90(&DAT_018da8a8);
            uVar8 = uVar8 & 0xff;
            if (uVar8 != 0) goto LAB_00ee8fc8;
          }
        }
LAB_00ee9288:
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
      FUN_00eea200(&local_170);
      ppppppppppppuVar16 = local_278;
      if (ppppppppppppuVar10 == (undefined4 ************)&DAT_80000000) {
        local_3c0 = local_280;
        local_3bc = local_27c;
        local_3b8 = local_278;
      }
      else {
        local_158 = (undefined4 ************)0x0;
        local_168 = local_278;
        local_16c = local_27c;
        local_170 = local_280;
        local_164 = ppppppppppppuVar10;
        local_160 = pppppppppppppuVar20;
        local_15c = unaff_r9;
        if (local_278 == local_280) {
          FUN_01351a98(&local_170);
        }
        pppppppppppppuVar20 = local_16c + (int)ppppppppppppuVar16 * 4;
        *pppppppppppppuVar20 = local_164;
        pppppppppppppuVar20[1] = local_160;
        pppppppppppppuVar20[2] = local_15c;
        pppppppppppppuVar20[3] = local_158;
        local_3c0 = local_170;
        local_3b8 = (undefined4 ************)((int)ppppppppppppuVar16 + 1);
        local_3bc = local_16c;
      }
      iVar14 = iVar14 + -0x100;
      local_290 = local_3c0;
      local_28c = local_3bc;
      local_288 = local_3b8;
      pppppppppuVar2 = pppppppppuVar2 + 0x40;
    } while (iVar14 != 0);
    local_2a4 = pppppppppuVar6;
  }
  local_280 = local_290;
  local_27c = local_28c;
  local_278 = local_288;
  FUN_00eea324(&local_2a8);
LAB_00ee941c:
  if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb98);
  }
  piVar5[6] = (int)&DAT_3b9aca00;
  param_1[6] = (int)local_280;
  param_1[7] = (int)local_27c;
  param_1[8] = (int)local_278;
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

