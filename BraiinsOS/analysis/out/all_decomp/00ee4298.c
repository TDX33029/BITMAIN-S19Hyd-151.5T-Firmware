// FUN_00ee4298 @ 00ee4298 size=3860 calls_out=23 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | json-unserializable item. skipping... | lDefaultError | SetGloba

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ee4298(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  uint *puVar2;
  uint ************ppppppppppppuVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint ************ppppppppppppuVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint **********ppppppppppuVar11;
  undefined4 *puVar12;
  uint ************extraout_r2;
  char *pcVar13;
  int extraout_r3;
  int iVar14;
  uint ************ppppppppppppuVar15;
  int iVar16;
  uint ************ppppppppppppuVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  uint ************ppppppppppppuVar21;
  int iVar22;
  uint *************pppppppppppppuVar23;
  int iVar24;
  undefined4 *puVar25;
  uint *******pppppppuVar26;
  uint ***********pppppppppppuVar27;
  int iVar28;
  uint ***********pppppppppppuVar29;
  undefined4 *puVar30;
  uint *puVar31;
  uint uVar32;
  uint *************pppppppppppppuVar33;
  undefined8 uVar34;
  uint local_4d4;
  uint local_4bc;
  int iStack_4b8;
  int local_4b4;
  uint *************pppppppppppppuStack_4b0;
  uint *puStack_4ac;
  undefined4 *puStack_4a8;
  uint ************local_4a0;
  uint ************local_49c;
  uint ************local_498;
  int local_494;
  int local_490;
  uint local_48c;
  int local_488;
  int local_484;
  uint *************local_480;
  uint *local_47c;
  undefined4 *local_478;
  uint ************local_470;
  uint ************local_46c;
  uint ************local_468;
  uint ************local_460;
  uint ************ppppppppppppuStack_45c;
  uint ************local_458;
  uint ************local_450;
  uint ************local_44c;
  uint ************local_448;
  uint *************local_440;
  undefined4 *local_43c;
  undefined1 auStack_390 [112];
  uint ************local_320;
  uint ************local_31c;
  undefined4 *local_318;
  uint ************local_314;
  uint *************local_310;
  undefined *local_30c;
  uint ************local_308;
  uint ************local_304;
  uint ************local_300;
  uint ************local_2fc;
  undefined4 local_2f8;
  uint ************local_2f0;
  uint ************local_2ec;
  uint ************local_2e8;
  uint ************local_2e0;
  uint ************local_2dc;
  uint ************local_2d8;
  uint ************ppppppppppppuStack_2d4;
  undefined1 auStack_2d0 [176];
  undefined1 auStack_220 [128];
  uint ************local_1a0;
  uint ************local_19c;
  uint ************ppppppppppppuStack_198;
  uint ************local_194;
  uint ************local_190;
  uint ************local_18c;
  uint ***********local_188;
  int local_a0;
  undefined4 local_9c;
  int local_94;
  undefined4 local_90;
  uint ************local_70;
  uint *************local_6c;
  undefined4 local_68;
  int *local_64;
  uint ***********local_60;
  uint local_5c;
  undefined4 *local_58;
  uint *************local_54;
  undefined4 local_50;
  uint ************local_4c;
  undefined4 local_48;
  uint ************local_44;
  uint ***********local_40;
  uint ************local_3c;
  uint ************local_38;
  uint *************local_34;
  uint *************local_30;
  undefined4 *local_2c;
  
  iVar16 = *param_3;
  iVar20 = param_3[1];
  local_4bc = param_3[2];
  iStack_4b8 = param_3[3];
  local_4b4 = param_3[4];
  pppppppppppppuStack_4b0 = (uint *************)param_3[5];
  puStack_4ac = (uint *)param_3[6];
  puStack_4a8 = (undefined4 *)param_3[7];
  ppppppppppppuVar17 = *(uint *************)(param_2 + 0x1c);
  ppppppppppppuVar21 = *(uint *************)(param_2 + 0x20);
  uVar34 = thunk_FUN_016de0ee(&local_4b4,param_2,*(undefined4 *)(param_2 + 0x18),8);
  piVar10 = (int *)((ulonglong)uVar34 >> 0x20);
  piVar4 = (int *)((int)uVar34 + extraout_r3);
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb88);
  }
  iVar14 = piVar10[1];
  iVar18 = piVar10[2];
  iVar22 = piVar10[3];
  iVar24 = piVar10[4];
  iVar28 = piVar10[5];
  piVar4[2] = *piVar10;
  piVar4[3] = iVar14;
  piVar4[4] = iVar18;
  piVar4[5] = iVar22;
  piVar4[6] = iVar24;
  piVar4[7] = iVar28;
  puVar31 = &local_4bc;
  local_48c = local_4bc;
  local_488 = iStack_4b8;
  local_484 = local_4b4;
  local_480 = pppppppppppppuStack_4b0;
  local_47c = puStack_4ac;
  local_478 = puStack_4a8;
  DataMemoryBarrier(0xb);
  local_4a0 = extraout_r2;
  local_49c = ppppppppppppuVar17;
  local_498 = ppppppppppppuVar21;
  local_494 = iVar16;
  local_490 = iVar20;
  if (DAT_018d914c != 0) {
    local_2e0 = (uint ************)&local_1a0;
    local_1a0 = (uint ************)&DAT_018d914c;
    FUN_015eedc4(&DAT_018d914c,1,&local_2e0,&DAT_0187c2e0,&DAT_018ac9b8);
  }
  puVar12 = local_478;
  puVar2 = local_47c;
  pppppppppppppuVar33 = local_480;
  iVar18 = local_484;
  iVar14 = local_488;
  uVar8 = local_48c;
  iVar20 = local_490;
  iVar16 = local_494;
  if (DAT_018d9150 == '\0') {
    local_2ec = local_49c;
    local_2e8 = local_498;
    local_2f0 = local_4a0;
    if (local_494 == local_490) {
      ppppppppppppuVar17 = (uint ************)&local_2f0;
    }
    else {
      local_460 = local_4a0;
      ppppppppppppuStack_45c = local_49c;
      local_458 = local_498;
      iVar20 = local_488 + 0x10;
      uVar8 = (uint)(local_490 - local_494) / 0x98;
      uVar32 = local_48c;
      do {
        local_2e0 = *pppppppppppppuVar33;
        local_2dc = pppppppppppppuVar33[1];
        local_2d8 = pppppppppppppuVar33[2];
        ppppppppppppuStack_2d4 = pppppppppppppuVar33[3];
        iVar22 = *puVar2 + uVar32;
        iVar24 = puVar2[1] + (uint)CARRY4(*puVar2,uVar32);
        pppppppppppppuVar23 = &local_2e0;
        FUN_00e76cac(&local_1a0,iVar14,iVar18,1,pppppppppppppuVar23);
        FUN_00a97b4c(pppppppppppppuVar23,extraout_r1,*puVar12,puVar12[1],iVar20,iVar16,iVar22,iVar24
                    );
        FUN_016dd1aa(auStack_390,&local_1a0,0x70);
        FUN_016dd1aa(&local_450,pppppppppppppuVar23,0xc0);
        local_2e0 = local_460;
        local_2dc = ppppppppppppuStack_45c;
        local_2d8 = local_458;
        FUN_016dd1aa(auStack_2d0,&local_450,0x130);
        FUN_016dd1aa(&local_1a0,&local_450,0x130);
        FUN_00ee54a0(&local_40,&local_450);
        ppppppppppppuVar17 = local_3c;
        pppppppppppuVar27 = local_40;
        ppppppppppppuVar21 = local_38;
        if (local_40 == (uint ***********)&DAT_80000000) {
          local_44 = local_3c;
          if (DAT_018d9130 < 4) {
            uVar6 = (uint)DAT_018da8b0;
            if (uVar6 - 1 < 2) {
LAB_00ee454c:
              puVar30 = &DAT_018da884;
              if (uVar6 != 2) {
                DataMemoryBarrier(0xb);
                pppppppuVar26 = DAT_018daa78;
                if (DAT_018dd984 != 2) {
                  pppppppuVar26 = (uint *******)&DAT_018ae394;
                }
                pcVar13 = s_SetGloba_00414c05;
                if ((DAT_018dd984 == 2) && (pcVar13 = DAT_018daa74, DAT_018daa70 != 0)) {
                  pcVar13 = DAT_018daa74 + ((int)pppppppuVar26[2] - 1U & 0xfffffff8) + 8;
                }
                uVar34 = (*(code *)pppppppuVar26[5])(pcVar13,DAT_018da8a8);
                puVar30 = (undefined4 *)((ulonglong)uVar34 >> 0x20);
                if ((int)uVar34 == 0) goto LAB_00ee4830;
              }
              piVar19 = DAT_018da8a8 + 7;
              uVar6 = DAT_018da8a8[8];
              puVar25 = DAT_018da8a8;
              if (uVar6 != 0) {
                local_308 = (uint ************)*piVar19;
                local_2fc = (uint ************)DAT_018da8a8[10];
                local_304 = (uint ************)DAT_018da8a8[8];
                ppppppppppppuVar17 = (uint ************)DAT_018da8a8[9];
                puVar25 = (undefined4 *)DAT_018da8a8[9];
                pppppppppppppuVar23 = (uint *************)DAT_018da8a8[10];
                local_2f8 = 0;
                local_46c = (uint ************)&DAT_0000004b;
                local_470 = (uint ************)0x35ab6b;
                puVar30 = DAT_018da8a8;
                local_300 = ppppppppppppuVar17;
              }
              if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
              }
              local_310 = &local_4c;
              local_314 = &local_60;
              local_31c = (uint ************)&local_470;
              local_320 = (uint ************)&local_308;
              local_6c = &local_320;
              local_50 = 1;
              local_68 = 2;
              local_30c = &DAT_0187c2b0;
              local_40 = (uint ***********)&DAT_00000001;
              local_318 = (undefined4 *)&DAT_018abb78;
              local_4c = (uint ************)&local_44;
              local_3c = (uint ************)0x0;
              local_30 = (uint *************)&local_6c;
              DataMemoryBarrier(0xb);
              pppppppuVar26 = (uint *******)&DAT_018ae394;
              pcVar13 = s_SetGloba_00414c05;
              if (DAT_018dd984 == 2) {
                pcVar13 = DAT_018daa74;
                pppppppuVar26 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar13 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
                }
              }
              local_64 = piVar19;
              local_60 = (uint ***********)*piVar19;
              local_5c = uVar6;
              local_58 = puVar25;
              local_54 = pppppppppppppuVar23;
              local_2c = puVar30;
              iVar22 = (*(code *)pppppppuVar26[10])(pcVar13,&local_40);
              if (iVar22 != 0) {
                (*(code *)pppppppuVar26[0xb])(pcVar13,&local_40);
              }
            }
            else if (uVar6 != 0) {
              uVar6 = FUN_0169ac90(&DAT_018da8a8);
              uVar6 = uVar6 & 0xff;
              if (uVar6 != 0) goto LAB_00ee454c;
            }
          }
LAB_00ee4830:
          ppppppppppppuVar21 = local_44;
          FUN_005c3974(local_44);
          thunk_FUN_016d3fb4(ppppppppppppuVar21);
        }
        if (local_a0 != 0) {
          thunk_FUN_016d3fb4(local_9c);
        }
        if (local_94 != 0) {
          thunk_FUN_016d3fb4(local_90);
        }
        FUN_00ee5d14(&local_1a0);
        ppppppppppppuVar7 = local_2d8;
        if (pppppppppppuVar27 == (uint ***********)&DAT_80000000) {
          local_38 = local_2d8;
          local_3c = local_2dc;
          local_40 = (uint ***********)local_2e0;
        }
        else {
          local_18c = ppppppppppppuVar21;
          local_190 = ppppppppppppuVar17;
          local_1a0 = local_2e0;
          local_19c = local_2dc;
          ppppppppppppuStack_198 = local_2d8;
          local_188 = (uint ***********)0x0;
          local_194 = (uint ************)pppppppppppuVar27;
          if (local_2d8 == local_2e0) {
            FUN_01351a98(&local_1a0);
          }
          ppppppppppppuVar17 = local_19c + (int)ppppppppppppuVar7 * 4;
          *ppppppppppppuVar17 = (uint ***********)local_194;
          ppppppppppppuVar17[1] = (uint ***********)local_190;
          ppppppppppppuVar17[2] = (uint ***********)local_18c;
          ppppppppppppuVar17[3] = local_188;
          local_40 = (uint ***********)local_1a0;
          local_3c = local_19c;
          local_38 = (uint ************)((int)ppppppppppppuVar7 + 1);
        }
        iVar16 = iVar16 + 0x98;
        uVar32 = uVar32 + 1;
        uVar8 = uVar8 - 1;
        local_460 = (uint ************)local_40;
        ppppppppppppuStack_45c = local_3c;
        local_458 = local_38;
      } while (uVar8 != 0);
      ppppppppppppuVar17 = (uint ************)&local_460;
    }
    local_2e0 = (uint ************)*ppppppppppppuVar17;
    local_2dc = (uint ************)ppppppppppppuVar17[1];
    local_2d8 = (uint ************)ppppppppppppuVar17[2];
    goto LAB_00ee5068;
  }
  if (0x3fffff70 < (uint)(local_490 - local_494)) {
    uVar5 = 0;
LAB_00ee4354:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,puVar31);
  }
  ppppppppppppuVar21 = (uint ************)0x0;
  ppppppppppppuVar17 = (uint ************)((uint)(local_490 - local_494) / 0x98);
  puVar31 = (uint *)((int)ppppppppppppuVar17 * 0x130);
  if (puVar31 == (uint *)0x0) {
    local_3c = (uint ************)&DAT_00000008;
    local_40 = (uint ***********)0x0;
    ppppppppppppuVar7 = local_3c;
  }
  else {
    ppppppppppppuVar7 = (uint ************)thunk_FUN_016d4a50(puVar31);
    local_40 = (uint ***********)ppppppppppppuVar17;
    if (ppppppppppppuVar7 == (uint ************)0x0) {
      uVar5 = 8;
      goto LAB_00ee4354;
    }
  }
  local_3c = ppppppppppppuVar7;
  if (iVar16 != iVar20) {
    ppppppppppppuVar21 = (uint ************)0x0;
    do {
      local_19c = pppppppppppppuVar33[1];
      local_1a0 = *pppppppppppppuVar33;
      ppppppppppppuStack_198 = pppppppppppppuVar33[2];
      local_194 = pppppppppppppuVar33[3];
      iVar20 = *puVar2 + uVar8 + (int)ppppppppppppuVar21;
      iVar22 = puVar2[1] + (uint)CARRY4(*puVar2,uVar8 + (int)ppppppppppppuVar21);
      FUN_00e76cac(&local_450,iVar14,iVar18,1,&local_1a0);
      FUN_00a97b4c(&local_1a0,extraout_r1_00,*puVar12,puVar12[1],iVar14 + 0x10,iVar16,iVar20,iVar22)
      ;
      FUN_016dd1aa(auStack_220,&local_450,0x70);
      FUN_016dd1aa(&local_2e0,&local_1a0,0xc0);
      FUN_016dd1aa(ppppppppppppuVar7,&local_2e0,0x130);
      ppppppppppppuVar21 = (uint ************)((int)ppppppppppppuVar21 + 1);
      ppppppppppppuVar7 = ppppppppppppuVar7 + 0x4c;
      iVar16 = iVar16 + 0x98;
    } while (ppppppppppppuVar17 != ppppppppppppuVar21);
  }
  ppppppppppppuVar17 = local_3c;
  local_470 = (uint ************)local_40;
  local_46c = local_3c;
  DataMemoryBarrier(0xb);
  local_468 = ppppppppppppuVar21;
  if (DAT_018dad90 != 0) {
    local_2e0 = (uint ************)&local_1a0;
    local_1a0 = (uint ************)&DAT_018dad90;
    FUN_015eedc4(&DAT_018dad90,1,&local_2e0,&DAT_0187c308,&DAT_018ac9b8);
  }
  piVar19 = &DAT_018dad94;
  do {
    if (DAT_018dad94 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dad94);
      goto LAB_00ee4a58;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dad94);
  } while (!bVar1);
  DAT_018dad94 = 1;
  DataMemoryBarrier(0xb);
LAB_00ee4a58:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (DAT_018dad98 == '\0') {
      local_4d4 = 0;
      goto LAB_00ee4ab8;
    }
LAB_00ee4a7c:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
      DAT_018dad98 = '\x01';
    }
LAB_00ee4a94:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar16 = DAT_018dad94;
    } while (!bVar1);
  }
  else {
    local_4d4 = FUN_015bf3f8();
    local_4d4 = local_4d4 ^ 1;
    if (DAT_018dad98 != '\0') {
      if (local_4d4 == 0) goto LAB_00ee4a7c;
      goto LAB_00ee4a94;
    }
LAB_00ee4ab8:
    if (ppppppppppppuVar21 != (uint ************)0x0) {
      iVar16 = (int)ppppppppppppuVar21 * 0x130;
      pppppppppppppuVar33 = (uint *************)&DAT_018dad9c;
      do {
        FUN_00ee54a0(&local_2e0,ppppppppppppuVar17);
        ppppppppppppuVar21 = local_2dc;
        if (local_2e0 == (uint ************)&DAT_80000000) {
          FUN_005c3974(local_2dc);
LAB_00ee4af0:
          thunk_FUN_016d3fb4(ppppppppppppuVar21);
        }
        else {
          local_19c = (uint ************)&DAT_006043a8;
          local_1a0 = (uint ************)&local_2e0;
          FUN_00e9d860(&local_450,&DAT_018dad9c,&DAT_00580c3b,&local_1a0);
          ppppppppppppuVar7 = local_44c;
          if ((4 < ((uint)local_450 & 0xff)) ||
             (ppppppppppppuVar21 = local_2dc, ((uint)local_450 & 0xff) == 3)) {
            pppppppppppuVar27 = *local_44c;
            pppppppppppuVar29 = local_44c[1];
            ppppppppppuVar11 = *pppppppppppuVar29;
            if (ppppppppppuVar11 != (uint **********)0x0) {
              (*(code *)ppppppppppuVar11)(pppppppppppuVar27);
            }
            if (pppppppppppuVar29[1] != (uint **********)0x0) {
              thunk_FUN_016d3fb4(pppppppppppuVar27);
            }
            thunk_FUN_016d3fb4(ppppppppppppuVar7);
            ppppppppppppuVar21 = local_2dc;
          }
          local_2dc = ppppppppppppuVar21;
          if (local_2e0 != (uint ************)0x0) goto LAB_00ee4af0;
        }
        ppppppppppppuVar17 = ppppppppppppuVar17 + 0x4c;
        iVar16 = iVar16 + -0x130;
      } while (iVar16 != 0);
    }
    if (((local_4d4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
      DAT_018dad98 = '\x01';
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dad94);
      iVar16 = DAT_018dad94;
    } while (!bVar1);
  }
  DAT_018dad94 = 0;
  if (iVar16 == 2) {
    FUN_016d6968(0xf0,&DAT_018dad94,0x81,1);
  }
  local_2ec = local_49c;
  local_2e8 = local_498;
  ppppppppppppuVar17 = local_46c + (int)local_468 * 0x4c;
  local_2f0 = local_4a0;
  local_308 = local_46c;
  local_304 = local_46c;
  local_300 = local_470;
  local_2fc = ppppppppppppuVar17;
  if (local_468 != (uint ************)0x0) {
    iVar16 = (int)local_468 * 0x130;
    ppppppppppppuVar21 = local_46c;
    do {
      local_2e0 = local_2f0;
      local_2dc = local_2ec;
      local_2d8 = local_2e8;
      FUN_016dd1aa(auStack_2d0,ppppppppppppuVar21,0x130);
      FUN_016dd1aa(&local_1a0,ppppppppppppuVar21,0x130);
      FUN_00ee54a0(&local_450,&local_1a0);
      ppppppppppppuVar3 = local_450;
      ppppppppppppuVar7 = local_44c;
      pppppppppppppuVar23 = (uint *************)local_448;
      if (local_450 == (uint ************)&DAT_80000000) {
        local_70 = local_44c;
        if (DAT_018d9130 < 4) {
          uVar8 = (uint)DAT_018da8b0;
          if (uVar8 - 1 < 2) {
LAB_00ee4d24:
            puVar12 = &DAT_018da884;
            if (uVar8 != 2) {
              DataMemoryBarrier(0xb);
              pppppppuVar26 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                pppppppuVar26 = (uint *******)&DAT_018ae394;
              }
              pcVar13 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar13 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar13 = DAT_018daa74 + ((int)pppppppuVar26[2] - 1U & 0xfffffff8) + 8;
              }
              uVar34 = (*(code *)pppppppuVar26[5])(pcVar13,DAT_018da8a8);
              puVar12 = (undefined4 *)((ulonglong)uVar34 >> 0x20);
              if ((int)uVar34 == 0) goto LAB_00ee4fd8;
            }
            piVar9 = DAT_018da8a8 + 7;
            ppppppppppppuVar15 = (uint ************)DAT_018da8a8[8];
            ppppppppppppuVar7 = (uint ************)piVar19;
            puVar30 = DAT_018da8a8;
            if (ppppppppppppuVar15 != (uint ************)0x0) {
              local_60 = (uint ***********)*piVar9;
              local_58 = (undefined4 *)DAT_018da8a8[9];
              local_5c = DAT_018da8a8[8];
              pppppppppppppuVar33 = (uint *************)DAT_018da8a8[10];
              puVar30 = (undefined4 *)DAT_018da8a8[9];
              ppppppppppppuVar7 = (uint ************)DAT_018da8a8[10];
              local_50 = 0;
              local_48 = 0x4b;
              local_4c = (uint ************)0x35ab6b;
              puVar12 = DAT_018da8a8;
              local_54 = pppppppppppppuVar33;
            }
            if (ppppppppppppuVar15 < &SUB_00000002) {
              local_304 = ppppppppppppuVar21 + 0x4c;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187c2a0);
            }
            local_30 = &local_44;
            local_34 = &local_320;
            local_3c = (uint ************)&local_4c;
            local_40 = (uint ***********)&local_60;
            local_6c = (uint *************)&local_40;
            local_310 = (uint *************)&DAT_00000001;
            local_68 = 2;
            local_2c = (undefined4 *)&DAT_0187c2b0;
            local_450 = (uint ************)&DAT_00000001;
            local_38 = (uint ************)&DAT_018abb78;
            local_44 = (uint ************)&local_70;
            local_44c = (uint ************)0x0;
            local_440 = (uint *************)&local_6c;
            DataMemoryBarrier(0xb);
            piVar19 = (int *)&DAT_018ae394;
            pcVar13 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar13 = DAT_018daa74;
              piVar19 = (int *)DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar13 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_43c = puVar12;
            local_320 = (uint ************)*piVar9;
            local_31c = ppppppppppppuVar15;
            local_318 = puVar30;
            local_314 = ppppppppppppuVar7;
            local_64 = piVar9;
            iVar20 = (*(code *)piVar19[10])(pcVar13,&local_450);
            if (iVar20 != 0) {
              (*(code *)piVar19[0xb])(pcVar13,&local_450);
            }
          }
          else if (uVar8 != 0) {
            uVar8 = FUN_0169ac90(&DAT_018da8a8);
            uVar8 = uVar8 & 0xff;
            if (uVar8 != 0) goto LAB_00ee4d24;
          }
        }
LAB_00ee4fd8:
        ppppppppppppuVar7 = local_70;
        FUN_005c3974(local_70);
        thunk_FUN_016d3fb4(ppppppppppppuVar7);
        pppppppppppppuVar23 = pppppppppppppuVar33;
      }
      pppppppppppppuVar33 = pppppppppppppuVar23;
      if (local_a0 != 0) {
        thunk_FUN_016d3fb4(local_9c);
      }
      if (local_94 != 0) {
        thunk_FUN_016d3fb4(local_90);
      }
      FUN_00ee5d14(&local_1a0);
      ppppppppppppuVar15 = local_2d8;
      if (ppppppppppppuVar3 == (uint ************)&DAT_80000000) {
        local_450 = local_2e0;
        local_44c = local_2dc;
        local_448 = local_2d8;
      }
      else {
        local_188 = (uint ***********)0x0;
        local_1a0 = local_2e0;
        local_19c = local_2dc;
        ppppppppppppuStack_198 = local_2d8;
        local_194 = ppppppppppppuVar3;
        local_190 = ppppppppppppuVar7;
        local_18c = (uint ************)pppppppppppppuVar33;
        if (local_2d8 == local_2e0) {
          FUN_01351a98(&local_1a0);
        }
        ppppppppppppuVar7 = local_19c + (int)ppppppppppppuVar15 * 4;
        *ppppppppppppuVar7 = (uint ***********)local_194;
        ppppppppppppuVar7[1] = (uint ***********)local_190;
        ppppppppppppuVar7[2] = (uint ***********)local_18c;
        ppppppppppppuVar7[3] = local_188;
        local_450 = local_1a0;
        local_448 = (uint ************)((int)ppppppppppppuVar15 + 1);
        local_44c = local_19c;
        piVar19 = (int *)ppppppppppppuVar15;
      }
      iVar16 = iVar16 + -0x130;
      local_2f0 = local_450;
      local_2ec = local_44c;
      local_2e8 = local_448;
      ppppppppppppuVar21 = ppppppppppppuVar21 + 0x4c;
    } while (iVar16 != 0);
    local_304 = ppppppppppppuVar17;
  }
  local_2e0 = local_2f0;
  local_2dc = local_2ec;
  local_2d8 = local_2e8;
  FUN_00ee5e78(&local_308);
LAB_00ee5068:
  if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0187bb98);
  }
  piVar4[6] = (int)&DAT_3b9aca00;
  param_1[6] = (int)local_2e0;
  param_1[7] = (int)local_2dc;
  param_1[8] = (int)local_2d8;
  iVar16 = piVar10[1];
  iVar20 = piVar10[2];
  iVar14 = piVar10[3];
  iVar18 = piVar10[4];
  iVar22 = piVar10[5];
  *param_1 = *piVar10;
  param_1[1] = iVar16;
  param_1[2] = iVar20;
  param_1[3] = iVar14;
  param_1[4] = iVar18;
  param_1[5] = iVar22;
  return;
}

