// FUN_00eea608 @ 00eea608 size=3604 calls_out=22 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | SetGloba | SetGloba

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eea608(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 **********ppppppppppuVar2;
  undefined4 *************pppppppppppppuVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 **********ppppppppppuVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *************pppppppppppppuVar9;
  undefined4 ***********pppppppppppuVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *************pppppppppppppuVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *************pppppppppppppuVar17;
  int iVar18;
  undefined4 *******pppppppuVar19;
  undefined4 *************pppppppppppppuVar20;
  undefined4 *************unaff_r9;
  undefined4 ************ppppppppppppuVar21;
  undefined4 ************ppppppppppppuVar22;
  undefined8 uVar23;
  undefined4 local_b48;
  undefined1 auStack_b40 [532];
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 *********local_920;
  undefined4 *********local_91c;
  undefined1 auStack_918 [520];
  undefined4 *************local_710;
  undefined4 *************local_70c;
  undefined4 *************local_708;
  undefined4 *************local_700;
  undefined4 **********local_6fc;
  int local_6f8;
  undefined4 *************local_6f0;
  undefined4 *************local_6ec;
  undefined4 *************local_6e8;
  undefined4 *************local_6e0;
  undefined *local_6dc;
  undefined4 ***********local_4e0;
  undefined4 *************local_4dc;
  undefined4 *************local_4d8;
  undefined4 *************local_4d4;
  undefined4 *************local_4d0;
  undefined *local_4cc;
  undefined4 **********local_4c8;
  undefined4 **********local_4c4;
  undefined4 *************local_4c0;
  undefined4 **********local_4bc;
  undefined4 local_4b8;
  undefined4 *************local_4b0;
  undefined4 *************local_4ac;
  undefined4 *************local_4a8;
  undefined4 *************local_4a0;
  undefined4 *************local_49c;
  undefined4 *************local_498;
  undefined4 *************local_490;
  undefined4 *************local_48c;
  undefined1 auStack_488 [520];
  undefined4 *************local_280;
  undefined4 *************local_27c;
  undefined4 *************local_278;
  undefined4 *************local_274;
  undefined4 *************local_270;
  undefined4 *************local_26c;
  undefined4 ************local_268;
  int local_a0;
  undefined4 local_9c;
  int local_94;
  undefined4 local_90;
  undefined4 *************local_70;
  undefined4 *************local_6c;
  undefined4 local_68;
  int *local_64;
  undefined4 ************local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 *************local_54;
  undefined4 local_50;
  undefined4 *************local_4c;
  undefined4 local_48;
  undefined4 *************local_44;
  undefined4 *************local_40;
  undefined4 *************local_3c;
  undefined4 *************local_38;
  undefined4 ************local_34;
  undefined4 *************local_30;
  undefined *local_2c;
  
  uVar4 = FUN_016dd1aa(auStack_b40,param_3,0x210);
  local_928 = 0;
  uVar23 = thunk_FUN_016de0ee(uVar4,8);
  piVar5 = (int *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  local_92c = 4;
  if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb88);
  }
  iVar12 = param_2[1];
  iVar14 = param_2[2];
  iVar15 = param_2[3];
  iVar16 = param_2[4];
  iVar18 = param_2[5];
  piVar5[2] = *param_2;
  piVar5[3] = iVar12;
  piVar5[4] = iVar14;
  piVar5[5] = iVar15;
  piVar5[6] = iVar16;
  piVar5[7] = iVar18;
  FUN_016dd1aa(&local_920,auStack_b40,0x220);
  DataMemoryBarrier(0xb);
  if (DAT_018d914c != 0) {
    local_4a0 = &local_280;
    local_280 = (undefined4 *************)&DAT_018d914c;
    FUN_015eedc4(&DAT_018d914c,1,&local_4a0,&DAT_0187c2e0,&DAT_018ac9b8);
  }
  if (DAT_018d9150 == '\0') {
    FUN_016dd1aa(&local_6f0,&local_920,0x210);
    pppppppppppppuVar17 = local_6ec;
    pppppppppppppuVar9 = local_6f0;
    local_6f0 = (undefined4 *************)&SUB_00000002;
    local_4b0 = local_710;
    bVar1 = local_6ec != (undefined4 *************)0x0;
    local_6ec = (undefined4 *************)0x0;
    local_4a8 = local_708;
    local_4ac = local_70c;
    if (pppppppppppppuVar9 != (undefined4 *************)&SUB_00000002 || bVar1) {
      FUN_016dd1aa(&local_278,auStack_918,0x208);
      local_4a0 = local_710;
      local_498 = local_708;
      local_49c = local_70c;
      local_48c = pppppppppppppuVar17;
      local_490 = pppppppppppppuVar9;
      FUN_016dd1aa(auStack_488,auStack_918,0x208);
      local_27c = pppppppppppppuVar17;
      local_280 = pppppppppppppuVar9;
      FUN_00eeb71c(&local_40,&local_280);
      pppppppppppppuVar20 = local_40;
      pppppppppppppuVar17 = local_3c;
      pppppppppppppuVar3 = local_38;
      if (local_40 == (undefined4 *************)&DAT_80000000) {
        local_44 = local_3c;
        if (DAT_018d9130 < 4) {
          pppppppppppppuVar9 = (undefined4 *************)&DAT_018da884;
          uVar7 = (uint)DAT_018da8b0;
          if (uVar7 - 1 < 2) {
LAB_00eea8d8:
            pppppppuVar19 = (undefined4 *******)&DAT_018ae394;
            pcVar11 = s_SetGloba_00414c05;
            if (uVar7 != 2) {
              DataMemoryBarrier(0xb);
              if (DAT_018dd984 == 2) {
                pcVar11 = DAT_018daa74;
                pppppppuVar19 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar11 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
                }
              }
              iVar12 = (*(code *)pppppppuVar19[5])(pcVar11);
              if (iVar12 == 0) goto LAB_00eeb1a4;
            }
            local_64 = (int *)(DAT_018da8a8 + 0x1c);
            local_60 = (undefined4 ************)*local_64;
            local_5c = *(uint *)(DAT_018da8a8 + 0x20);
            local_54 = pppppppppppppuVar9;
            if (local_5c != 0) {
              local_b48 = *(undefined4 *)(DAT_018da8a8 + 0x24);
              local_4c0 = *(undefined4 **************)(DAT_018da8a8 + 0x24);
              local_4bc = *(undefined4 ***********)(DAT_018da8a8 + 0x28);
              local_4c8 = (undefined4 **********)*local_64;
              local_4c4 = *(undefined4 ***********)(DAT_018da8a8 + 0x20);
              local_54 = *(undefined4 **************)(DAT_018da8a8 + 0x28);
              local_4b8 = 0;
              local_6fc = (undefined4 **********)0x4b;
              local_700 = (undefined4 *************)0x35ab6b;
            }
            if (local_5c < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_4d0 = &local_4c;
            local_4d4 = &local_60;
            local_4dc = &local_700;
            local_4e0 = &local_4c8;
            local_4cc = &DAT_0187c2b0;
            local_6c = (undefined4 *************)&local_4e0;
            local_68 = 2;
            local_4c = &local_44;
            local_3c = (undefined4 *************)0x0;
            local_30 = &local_6c;
            local_50 = 1;
            local_58 = local_b48;
            local_4d8 = (undefined4 *************)&DAT_018abb78;
            local_40 = (undefined4 *************)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar11 = s_SetGloba_00414c05;
            pppppppppppppuVar9 = (undefined4 *************)&DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar11 = DAT_018daa74;
              pppppppppppppuVar9 = (undefined4 *************)DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar11 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_2c = DAT_018da8a8;
            iVar12 = (*(code *)pppppppppppppuVar9[10])(pcVar11,&local_40);
            if (iVar12 != 0) {
              (*(code *)pppppppppppppuVar9[0xb])(pcVar11,&local_40);
            }
          }
          else if (uVar7 != 0) {
            uVar7 = FUN_0169ac90(&DAT_018da8a8);
            uVar7 = uVar7 & 0xff;
            if (uVar7 != 0) goto LAB_00eea8d8;
          }
        }
LAB_00eeb1a4:
        pppppppppppppuVar17 = local_44;
        FUN_005c3974(local_44);
        thunk_FUN_016d3fb4(pppppppppppppuVar17);
        pppppppppppppuVar3 = pppppppppppppuVar9;
      }
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      if (local_94 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      FUN_00db3c14(&local_280);
      local_38 = local_498;
      if (pppppppppppppuVar20 == (undefined4 *************)&DAT_80000000) {
        local_3c = local_49c;
        local_40 = local_4a0;
      }
      else {
        local_27c = local_49c;
        local_278 = local_498;
        local_280 = local_4a0;
        local_268 = (undefined4 ************)0x0;
        local_274 = pppppppppppppuVar20;
        local_270 = pppppppppppppuVar17;
        local_26c = pppppppppppppuVar3;
        if (local_498 == local_4a0) {
          FUN_01351a98(&local_280);
        }
        pppppppppppppuVar9 = local_27c + (int)local_38 * 4;
        *pppppppppppppuVar9 = local_274;
        pppppppppppppuVar9[3] = local_268;
        local_38 = (undefined4 *************)((int)local_38 + 1);
        pppppppppppppuVar9[1] = local_270;
        pppppppppppppuVar9[2] = local_26c;
        local_40 = local_280;
        local_3c = local_27c;
      }
      local_4b0 = local_40;
      local_4ac = local_3c;
      local_4a8 = local_38;
    }
    local_498 = local_4a8;
    local_49c = local_4ac;
    local_4a0 = local_4b0;
    goto LAB_00eeb130;
  }
  local_49c = (undefined4 *************)0x8;
  pppppppppppppuVar9 = (undefined4 *************)0x0;
  if (local_920 != (undefined4 *********)0x2 || local_91c != (undefined4 *********)0x0) {
    pppppppppppppuVar9 = (undefined4 *************)&DAT_00000001;
    local_49c = (undefined4 *************)thunk_FUN_016d4a50(0x210);
    if (local_49c == (undefined4 *************)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,0x210);
    }
  }
  local_498 = (undefined4 *************)0x0;
  local_4a0 = pppppppppppppuVar9;
  if ((pppppppppppppuVar9 == (undefined4 *************)0x0) &&
     (((uint)local_920 ^ 2) != 0 || local_91c != (undefined4 *********)0x0)) {
    FUN_00edff4c(&local_4a0,0,1,8,0x210);
LAB_00eea714:
    pppppppppppppuVar9 = local_498;
    ppppppppppuVar6 = local_49c + (int)local_498 * 0x84;
    *ppppppppppuVar6 = local_920;
    ppppppppppuVar6[1] = local_91c;
    FUN_016dd1aa(ppppppppppuVar6 + 2,auStack_918,0x208);
    iVar12 = (int)pppppppppppppuVar9 + 1;
  }
  else {
    iVar12 = 0;
    if (((uint)local_920 ^ 2) != 0 || local_91c != (undefined4 *********)0x0) goto LAB_00eea714;
  }
  pppppppppppppuVar9 = local_49c;
  local_700 = local_4a0;
  local_6fc = local_49c;
  DataMemoryBarrier(0xb);
  local_6f8 = iVar12;
  if (DAT_018dad90 != 0) {
    local_4a0 = &local_280;
    local_280 = (undefined4 *************)&DAT_018dad90;
    FUN_015eedc4(&DAT_018dad90,1,&local_4a0,&DAT_0187c308,&DAT_018ac9b8);
  }
  do {
    if (DAT_018dad94 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dad94);
      goto LAB_00eea788;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dad94);
  } while (!bVar1);
  DAT_018dad94 = 1;
  DataMemoryBarrier(0xb);
LAB_00eea788:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018dad98 == '\0') {
      uVar7 = 0;
      goto LAB_00eea9d4;
    }
LAB_00eea7ac:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
      DAT_018dad98 = '\x01';
    }
LAB_00eea7c4:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar12 = DAT_018dad94;
    } while (!bVar1);
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    if (DAT_018dad98 != '\0') {
      if (uVar7 == 0) goto LAB_00eea7ac;
      goto LAB_00eea7c4;
    }
LAB_00eea9d4:
    if (iVar12 != 0) {
      iVar12 = iVar12 * 0x210;
      unaff_r9 = (undefined4 *************)&DAT_018dad9c;
      do {
        FUN_00eeb71c(&local_4a0,pppppppppppppuVar9);
        pppppppppppppuVar17 = local_49c;
        if (local_4a0 == (undefined4 *************)&DAT_80000000) {
          FUN_005c3974(local_49c);
LAB_00eeaa14:
          thunk_FUN_016d3fb4(pppppppppppppuVar17);
        }
        else {
          local_27c = (undefined4 *************)&DAT_006043a8;
          local_280 = &local_4a0;
          FUN_00e9d860(&local_6f0,&DAT_018dad9c,&DAT_00580c3b,&local_280);
          pppppppppppppuVar3 = local_6ec;
          if ((4 < ((uint)local_6f0 & 0xff)) ||
             (pppppppppppppuVar17 = local_49c, ((uint)local_6f0 & 0xff) == 3)) {
            ppppppppppppuVar21 = *local_6ec;
            ppppppppppppuVar22 = local_6ec[1];
            pppppppppppuVar10 = *ppppppppppppuVar22;
            if (pppppppppppuVar10 != (undefined4 ***********)0x0) {
              (*(code *)pppppppppppuVar10)(ppppppppppppuVar21);
            }
            if (ppppppppppppuVar22[1] != (undefined4 ***********)0x0) {
              thunk_FUN_016d3fb4(ppppppppppppuVar21);
            }
            thunk_FUN_016d3fb4(pppppppppppppuVar3);
            pppppppppppppuVar17 = local_49c;
          }
          local_49c = pppppppppppppuVar17;
          if (local_4a0 != (undefined4 *************)0x0) goto LAB_00eeaa14;
        }
        pppppppppppppuVar9 = pppppppppppppuVar9 + 0x84;
        iVar12 = iVar12 + -0x210;
      } while (iVar12 != 0);
    }
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
      DAT_018dad98 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar12 = DAT_018dad94;
    } while (!bVar1);
  }
  DAT_018dad94 = 0;
  if (iVar12 == 2) {
    FUN_016d6968(0xf0,&DAT_018dad94,0x81,1);
  }
  local_4c0 = local_700;
  local_4b0 = local_710;
  ppppppppppuVar6 = local_6fc + local_6f8 * 0x84;
  local_4a8 = local_708;
  local_4ac = local_70c;
  local_4c4 = local_6fc;
  local_4c8 = local_6fc;
  local_4bc = ppppppppppuVar6;
  if (local_6f8 != 0) {
    iVar12 = local_6f8 * 0x210;
    pppppppppppppuVar9 = local_70c;
    ppppppppppuVar2 = local_6fc;
    do {
      local_4a0 = local_4b0;
      local_498 = local_4a8;
      local_49c = local_4ac;
      FUN_016dd1aa(&local_490,ppppppppppuVar2,0x210);
      FUN_016dd1aa(&local_280,ppppppppppuVar2,0x210);
      FUN_00eeb71c(&local_6f0,&local_280);
      pppppppppppppuVar17 = local_6ec;
      pppppppppppppuVar3 = local_6f0;
      pppppppppppppuVar20 = local_6e8;
      if (local_6f0 == (undefined4 *************)&DAT_80000000) {
        local_70 = local_6ec;
        if (DAT_018d9130 < 4) {
          uVar7 = (uint)DAT_018da8b0;
          if (uVar7 - 1 < 2) {
LAB_00eeac84:
            if (uVar7 != 2) {
              DataMemoryBarrier(0xb);
              pppppppppppppuVar9 = (undefined4 *************)&DAT_018daa64;
              pppppppuVar19 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                pppppppuVar19 = (undefined4 *******)&DAT_018ae394;
              }
              pcVar11 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar11 = DAT_018daa74 + ((int)pppppppuVar19[2] - 1U & 0xfffffff8) + 8;
              }
              iVar14 = (*(code *)pppppppuVar19[5])(pcVar11);
              if (iVar14 == 0) goto LAB_00eeaf34;
            }
            piVar8 = (int *)(DAT_018da8a8 + 0x1c);
            pppppppppppppuVar13 = *(undefined4 **************)(DAT_018da8a8 + 0x20);
            pppppppppppppuVar20 = pppppppppppppuVar9;
            if (pppppppppppppuVar13 != (undefined4 *************)0x0) {
              local_58 = *(undefined4 *)(DAT_018da8a8 + 0x24);
              local_60 = (undefined4 ************)*piVar8;
              local_5c = *(uint *)(DAT_018da8a8 + 0x20);
              unaff_r9 = *(undefined4 **************)(DAT_018da8a8 + 0x28);
              pppppppppppppuVar20 = *(undefined4 **************)(DAT_018da8a8 + 0x24);
              pppppppppppppuVar17 = *(undefined4 **************)(DAT_018da8a8 + 0x28);
              local_50 = 0;
              local_48 = 0x4b;
              local_4c = (undefined4 *************)0x35ab6b;
              local_54 = unaff_r9;
            }
            if (pppppppppppppuVar13 < &SUB_00000002) {
              local_4c4 = ppppppppppuVar2 + 0x84;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_30 = &local_44;
            local_34 = &local_4e0;
            local_3c = &local_4c;
            local_40 = &local_60;
            local_6c = &local_40;
            local_4d0 = (undefined4 *************)&DAT_00000001;
            local_68 = 2;
            local_2c = &DAT_0187c2b0;
            local_6ec = (undefined4 *************)0x0;
            local_38 = (undefined4 *************)&DAT_018abb78;
            local_44 = &local_70;
            local_6e0 = &local_6c;
            local_6f0 = (undefined4 *************)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pppppppppppppuVar9 = (undefined4 *************)&DAT_018ae394;
            pcVar11 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar11 = DAT_018daa74;
              pppppppppppppuVar9 = (undefined4 *************)DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar11 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_6dc = DAT_018da8a8;
            local_4e0 = (undefined4 ***********)*piVar8;
            local_4dc = pppppppppppppuVar13;
            local_4d8 = pppppppppppppuVar20;
            local_4d4 = pppppppppppppuVar17;
            local_64 = piVar8;
            iVar14 = (*(code *)pppppppppppppuVar9[10])(pcVar11,&local_6f0);
            if (iVar14 != 0) {
              (*(code *)pppppppppppppuVar9[0xb])(pcVar11,&local_6f0);
            }
          }
          else if (uVar7 != 0) {
            uVar7 = FUN_0169ac90(&DAT_018da8a8);
            uVar7 = uVar7 & 0xff;
            if (uVar7 != 0) goto LAB_00eeac84;
          }
        }
LAB_00eeaf34:
        pppppppppppppuVar17 = local_70;
        FUN_005c3974(local_70);
        thunk_FUN_016d3fb4(pppppppppppppuVar17);
        pppppppppppppuVar20 = unaff_r9;
      }
      unaff_r9 = pppppppppppppuVar20;
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      if (local_94 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      FUN_00db3c14(&local_280);
      pppppppppppppuVar20 = local_498;
      if (pppppppppppppuVar3 == (undefined4 *************)&DAT_80000000) {
        local_6e8 = local_498;
        local_6ec = local_49c;
        local_6f0 = local_4a0;
      }
      else {
        local_27c = local_49c;
        local_278 = local_498;
        local_280 = local_4a0;
        local_268 = (undefined4 ************)0x0;
        local_274 = pppppppppppppuVar3;
        local_270 = pppppppppppppuVar17;
        local_26c = unaff_r9;
        if (local_498 == local_4a0) {
          FUN_01351a98(&local_280);
        }
        pppppppppppppuVar9 = local_27c + (int)pppppppppppppuVar20 * 4;
        *pppppppppppppuVar9 = local_274;
        pppppppppppppuVar9[1] = local_270;
        pppppppppppppuVar9[2] = local_26c;
        pppppppppppppuVar9[3] = local_268;
        local_6f0 = local_280;
        local_6e8 = (undefined4 *************)((int)pppppppppppppuVar20 + 1);
        local_6ec = local_27c;
        pppppppppppppuVar9 = pppppppppppppuVar20;
      }
      iVar12 = iVar12 + -0x210;
      local_4b0 = local_6f0;
      local_4ac = local_6ec;
      local_4a8 = local_6e8;
      ppppppppppuVar2 = ppppppppppuVar2 + 0x84;
    } while (iVar12 != 0);
    local_4c4 = ppppppppppuVar6;
  }
  local_4a0 = local_4b0;
  local_498 = local_4a8;
  local_49c = local_4ac;
  FUN_00eecb5c(&local_4c8);
LAB_00eeb130:
  if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb98);
  }
  piVar5[6] = (int)&DAT_3b9aca00;
  param_1[6] = (int)local_4a0;
  param_1[7] = (int)local_49c;
  param_1[8] = (int)local_498;
  iVar12 = param_2[1];
  iVar14 = param_2[2];
  iVar15 = param_2[3];
  iVar16 = param_2[4];
  iVar18 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = iVar12;
  param_1[2] = iVar14;
  param_1[3] = iVar15;
  param_1[4] = iVar16;
  param_1[5] = iVar18;
  return;
}

