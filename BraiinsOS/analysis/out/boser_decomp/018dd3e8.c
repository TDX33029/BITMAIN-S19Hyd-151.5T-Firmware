// FUN_018dd3e8 @ 018dd3e8 size=5896 calls_out=38 calls_in=1
// strings: res binder | assertion failed: !supported_versions.is_empty()

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_018dd3e8(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            undefined4 ***param_6,int param_7,undefined4 *param_8,int param_9,undefined4 *param_10)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 ***pppuVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined4 **ppuVar11;
  undefined4 ****ppppuVar12;
  undefined4 ***pppuVar13;
  uint *puVar14;
  undefined4 ***pppuVar15;
  undefined4 ****extraout_r1;
  undefined *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  uint **ppuVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 **ppuVar23;
  uint uVar24;
  uint ***pppuVar25;
  uint ***pppuVar26;
  int iVar27;
  undefined4 ***pppuVar28;
  undefined4 *puVar29;
  undefined4 uVar30;
  undefined4 **ppuVar31;
  undefined4 uVar32;
  undefined4 ****ppppuVar33;
  undefined4 uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  undefined8 uVar38;
  undefined4 ****local_694;
  undefined4 ***local_68c;
  undefined4 ****local_688;
  undefined4 *local_680;
  int local_670;
  undefined2 *local_66c;
  int local_668;
  uint ***local_660;
  undefined4 ****local_65c;
  uint ***local_658;
  uint ***local_650;
  undefined4 **local_64c;
  uint ***local_648;
  uint ***local_640;
  undefined4 ***local_63c;
  undefined4 ***local_638;
  undefined4 local_634;
  undefined1 *local_630;
  undefined4 local_62c;
  uint ***local_628;
  undefined4 ****local_624;
  uint ***local_620;
  undefined2 local_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined1 local_5d4;
  undefined1 auStack_5d0 [160];
  undefined4 ****local_530;
  undefined4 ***local_52c;
  undefined1 auStack_528 [160];
  undefined4 ***local_488;
  undefined4 ***local_484;
  undefined4 ***local_480;
  undefined4 ***local_47c;
  undefined4 ***pppuStack_478;
  undefined4 ***pppuStack_474;
  undefined4 ***pppuStack_470;
  undefined2 local_40c;
  undefined1 auStack_408 [160];
  uint ***local_368;
  undefined4 ***local_364;
  uint ***local_360;
  undefined4 ***local_35c;
  undefined4 ***local_358;
  undefined4 ***local_354;
  undefined4 ***local_350;
  undefined2 local_2ec;
  undefined4 ****local_2c8;
  undefined4 ***local_2c4;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 auStack_270 [160];
  undefined4 ****local_1d0;
  undefined4 ***local_1cc;
  undefined1 auStack_1c8 [168];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 ***local_110;
  undefined4 ***pppuStack_10c;
  undefined4 ***pppuStack_108;
  uint ***local_c8;
  undefined4 ***local_c4;
  uint ***local_c0;
  undefined4 ***local_bc;
  undefined4 ***local_b8;
  undefined4 ***pppuStack_b4;
  undefined4 ***pppuStack_b0;
  undefined2 local_4c;
  
  uVar21 = 0;
  iVar7 = param_8[0x2d];
  bVar35 = *(int *)(iVar7 + 0x58) != 0;
  puVar17 = param_3;
  if (bVar35) {
    puVar17 = *(undefined4 **)(iVar7 + 0x18);
  }
  if (bVar35 && puVar17 != (undefined4 *)0x0) {
    iVar18 = (int)puVar17 * 8;
    puVar14 = *(uint **)(iVar7 + 0x14);
    do {
      iVar18 = iVar18 + -8;
      uVar21 = *puVar14;
      if (uVar21 != 1) break;
      puVar14 = puVar14 + 2;
    } while (iVar18 != 0);
    uVar21 = uVar21 ^ 1;
  }
  bVar35 = *(int *)(iVar7 + 0x5c) != 0;
  iVar18 = 0;
  if (bVar35) {
    iVar18 = *(int *)(iVar7 + 0x18);
  }
  if (bVar35 && iVar18 != 0) {
    piVar9 = *(int **)(iVar7 + 0x14);
    iVar18 = iVar18 << 3;
    do {
      if (*piVar9 != 0) {
        local_668 = 0;
        local_66c = (undefined2 *)0x2;
        local_670 = 0;
        FUN_018fa9a8(&local_670);
        uVar24 = 1;
        local_668 = 1;
        *local_66c = 5;
        if ((uVar21 & 1) == 0) goto LAB_018dd4a0;
        if (local_670 != 1) goto LAB_018dd48c;
        goto LAB_018dd480;
      }
      piVar9 = piVar9 + 2;
      iVar18 = iVar18 + -8;
    } while (iVar18 != 0);
  }
  uVar24 = 0;
  local_668 = 0;
  local_66c = (undefined2 *)0x2;
  local_670 = 0;
  if ((uVar21 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: !supported_versions.is_empty()",0x30,&DAT_01d231e0);
  }
LAB_018dd480:
  FUN_018fa9a8(&local_670);
LAB_018dd48c:
  local_66c[uVar24 * 2] = 4;
  local_668 = uVar24 + 1;
LAB_018dd4a0:
  ppppuVar8 = (undefined4 ****)thunk_FUN_01be5118(0xa8);
  if (ppppuVar8 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xa8);
  }
  piVar9 = (int *)((uint)&local_488 | 4);
  *piVar9 = local_670;
  piVar9[1] = (int)local_66c;
  piVar9[2] = local_668;
  local_488 = (undefined4 ***)0x6;
  local_c0 = (uint ***)thunk_FUN_01be5118(2);
  if (local_c0 == (uint ***)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  uVar22 = 0;
  *(undefined2 *)local_c0 = 0;
  local_bc = (undefined4 ***)0x1;
  local_c4 = (undefined4 ***)&DAT_00000001;
  local_c8 = (uint ***)0x0;
  iVar7 = param_8[0x2d];
  pppuVar28 = *(undefined4 ****)(iVar7 + 0x24);
  bVar36 = (undefined4 ***)0x3ffffffe < pppuVar28;
  bVar35 = pppuVar28 == (undefined4 ***)0x3fffffff;
  uVar21 = (int)pppuVar28 * 4;
  if (pppuVar28 < (undefined4 ***)0x40000000) {
    bVar36 = 0x7ffffffd < uVar21;
    bVar35 = uVar21 == 0x7ffffffe;
    local_680 = param_3;
  }
  if (bVar36 && !bVar35) {
LAB_018dd528:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,uVar21);
  }
  puVar17 = *(undefined4 **)(iVar7 + 0x20);
  if (uVar21 == 0) {
    local_63c = (undefined4 ***)0x2;
    local_640 = (undefined4 ***)0x0;
  }
  else {
    uVar22 = 2;
    local_63c = (undefined4 ***)FUN_01298504(uVar21,2);
    local_640 = pppuVar28;
    if (local_63c == (undefined4 ***)0x0) goto LAB_018dd528;
  }
  local_638 = (undefined4 ***)0x0;
  if (pppuVar28 != (undefined4 ***)0x0) {
    iVar7 = (int)local_63c + 2;
    pppuVar15 = pppuVar28;
    do {
      pppuVar15 = (undefined4 ***)((int)pppuVar15 - 1);
      *(undefined4 *)(iVar7 + -2) = *(undefined4 *)*puVar17;
      iVar7 = iVar7 + 4;
      puVar17 = puVar17 + 1;
    } while (pppuVar15 != (undefined4 ***)0x0);
    iVar7 = param_8[0x2d];
    local_638 = pppuVar28;
  }
  local_688 = (undefined4 ****)((uint)&local_368 | 4);
  *local_688 = local_640;
  local_688[1] = local_63c;
  local_688[2] = local_638;
  local_368 = (uint ***)&DAT_00000001;
  (**(code **)(*(int *)(iVar7 + 0x4c) + 0x18))
            (&local_640,
             *(int *)(iVar7 + 0x48) + (*(int *)(*(int *)(iVar7 + 0x4c) + 8) - 1U & 0xfffffff8) + 8);
  local_110 = local_640;
  pppuStack_10c = local_63c;
  pppuStack_108 = local_638;
  ppppuVar8[0x25] = (undefined4 ***)0x4;
  ppppuVar8[0x29] = (undefined4 ***)0x0;
  ppppuVar8[0x28] = (undefined4 ***)0x1;
  ppppuVar8[0x27] = (undefined4 ***)0x0;
  ppppuVar8[0x26] = (undefined4 ***)0x0;
  ppppuVar8[0x24] = (undefined4 ***)0x0;
  *ppppuVar8 = local_488;
  ppppuVar8[1] = local_484;
  ppppuVar8[2] = local_480;
  ppppuVar8[3] = local_47c;
  ppppuVar8[4] = pppuStack_478;
  ppppuVar8[5] = pppuStack_474;
  ppppuVar8[6] = pppuStack_470;
  ppppuVar8[7] = local_c8;
  ppppuVar8[8] = local_c4;
  ppppuVar8[9] = local_c0;
  ppppuVar8[10] = local_bc;
  ppppuVar8[0xb] = local_b8;
  ppppuVar8[0xc] = pppuStack_b4;
  ppppuVar8[0xd] = pppuStack_b0;
  ppppuVar8[0xe] = local_368;
  ppppuVar8[0xf] = local_364;
  ppppuVar8[0x10] = local_360;
  ppppuVar8[0x11] = local_35c;
  ppppuVar8[0x12] = local_358;
  ppppuVar8[0x13] = local_354;
  ppppuVar8[0x14] = local_350;
  ppppuVar8[0x15] = (undefined4 ***)0x2;
  ppppuVar8[0x16] = local_640;
  ppppuVar8[0x17] = local_63c;
  ppppuVar8[0x18] = local_638;
  ppppuVar8[0x23] = (undefined4 ***)0xc;
  ppppuVar8[0x1c] = (undefined4 ***)0xb;
  local_658 = (uint ***)&DAT_00000006;
  local_660 = (uint ***)&DAT_00000006;
  local_65c = ppppuVar8;
  if (*(char *)(param_8 + 0x2e) == '\0') {
    pppuVar25 = (uint ***)&DAT_00000006;
    if (*(char *)(param_8[0x2d] + 0x60) != '\0') {
      iVar7 = param_8[0x31];
      iVar18 = param_8[0x30];
      if ((iVar7 != 0) && (*(char *)(iVar18 + iVar7 + -1) == '.')) {
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar18 = 0;
          iVar7 = 0;
        }
        else {
          iVar27 = FUN_018c4060(iVar18,iVar7);
          if (iVar27 != 0) {
            iVar18 = 0;
          }
        }
        if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_368,&DAT_01d22424,&DAT_01d22444);
        }
      }
      FUN_018c3fe8(&local_c8,iVar18,iVar7);
      pppuVar26 = local_c0;
      pppuVar28 = local_c4;
      pppuVar25 = local_c8;
      local_360 = (uint ***)thunk_FUN_01be5118(0x14);
      if (local_360 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x14);
      }
      local_360[2] = (uint **)pppuVar28;
      *(undefined1 *)(local_360 + 4) = 0;
      *local_360 = (undefined4 **)0x0;
      local_360[1] = (uint **)pppuVar25;
      local_360[3] = (uint **)pppuVar26;
      local_35c = (undefined4 ***)0x1;
      local_364 = (undefined4 ***)&DAT_00000001;
      local_368 = (uint ***)&DAT_00000003;
      FUN_015f5b48(&local_660);
      pppuVar25 = (uint ***)&DAT_00000007;
      local_65c[0x2a] = local_368;
      local_65c[0x2b] = local_364;
      local_65c[0x2c] = local_360;
      local_65c[0x2d] = local_35c;
      local_65c[0x2e] = local_358;
      local_65c[0x2f] = local_354;
      local_65c[0x30] = local_350;
      local_658 = (uint ***)&DAT_00000007;
    }
  }
  else {
    pppuVar25 = (uint ***)&DAT_00000006;
  }
  pppuVar26 = pppuVar25;
  if (param_5 != 0) {
    local_368 = (uint ***)&DAT_0000000d;
    if (pppuVar25 == local_660) {
      FUN_015f5b48(&local_660);
    }
    pppuVar26 = (uint ***)((int)pppuVar25 + 1);
    ppppuVar8 = local_65c + (int)pppuVar25 * 7;
    *ppppuVar8 = local_368;
    ppppuVar8[1] = local_364;
    ppppuVar8[2] = local_360;
    ppppuVar8[3] = local_35c;
    ppppuVar8[4] = local_358;
    ppppuVar8[5] = local_354;
    ppppuVar8[6] = local_350;
    local_658 = pppuVar26;
  }
  ppppuVar8 = local_65c;
  puVar10 = (undefined2 *)*local_680;
  pppuVar25 = pppuVar26;
  ppppuVar12 = local_65c;
  ppppuVar33 = &local_368;
  if (puVar10 != (undefined2 *)0x0) {
    ppuVar23 = (undefined4 **)local_680[0x10];
    if ((undefined4 **)0x61 < ppuVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,ppuVar23,0x61,&DAT_01d2150c);
    }
    uVar4 = puVar10[1];
    uVar5 = *puVar10;
    if (ppuVar23 == (undefined4 **)0x0) {
      ppuVar31 = (undefined4 **)0x0;
      ppuVar11 = (undefined4 **)0x1;
    }
    else {
      ppuVar11 = (undefined4 **)FUN_01298504(ppuVar23,1);
      ppuVar31 = ppuVar23;
      if (ppuVar11 == (undefined4 **)0x0) {
        uVar22 = 1;
        goto LAB_018deb84;
      }
    }
    FUN_01bed4e2(ppuVar11,local_680 + 0x11,ppuVar23);
    pppuVar28 = (undefined4 ***)thunk_FUN_01be5118(0x10);
    if (pppuVar28 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    pppuVar28[2] = ppuVar23;
    *pppuVar28 = ppuVar31;
    *(undefined2 *)(pppuVar28 + 3) = uVar5;
    *(undefined2 *)((int)pppuVar28 + 0xe) = uVar4;
    pppuVar28[1] = ppuVar11;
    local_35c = (undefined4 ***)0x1;
    local_364 = (undefined4 ***)&DAT_00000001;
    local_368 = (uint ***)&DAT_00000007;
    ppppuVar12 = ppppuVar8;
    local_360 = pppuVar28;
    if (pppuVar26 == local_660) {
      FUN_015f5b48(&local_660);
      ppppuVar12 = local_65c;
    }
    pppuVar25 = (uint ***)((int)pppuVar26 + 1);
    ppppuVar33 = ppppuVar12 + (int)pppuVar26 * 7;
    *ppppuVar33 = local_368;
    ppppuVar33[1] = local_364;
    ppppuVar33[2] = local_360;
    ppppuVar33[3] = local_35c;
    ppppuVar33[4] = local_358;
    ppppuVar33[5] = local_354;
    ppppuVar33[6] = local_350;
    ppppuVar33 = ppppuVar8;
    local_658 = pppuVar25;
  }
  pppuVar26 = pppuVar25;
  if (param_2 != 0) {
    piVar9 = (int *)FUN_018b3ed8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),0x18);
    if ((piVar9 != (int *)0x0) && (*piVar9 == -0x7fffffff)) {
      FUN_015e8ad4(&local_c8,piVar9[2],piVar9[3]);
      *local_688 = local_c8;
      local_688[1] = local_c4;
      local_688[2] = local_c0;
      local_368 = (uint ***)&DAT_0000000a;
      if (pppuVar25 == local_660) {
        FUN_015f5b48(&local_660);
        ppppuVar12 = local_65c;
      }
      pppuVar26 = (uint ***)((int)pppuVar25 + 1);
      ppppuVar8 = ppppuVar12 + (int)pppuVar25 * 7;
      *ppppuVar8 = local_368;
      ppppuVar8[1] = local_364;
      ppppuVar8[2] = local_360;
      ppppuVar8[3] = local_35c;
      ppppuVar8[4] = local_358;
      ppppuVar8[5] = local_354;
      ppppuVar8[6] = local_350;
      local_658 = pppuVar26;
    }
  }
  pppuVar25 = pppuVar26;
  if (uVar24 != 0) {
    pppuVar28 = (undefined4 ***)thunk_FUN_01be5118(2);
    if (pppuVar28 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(1,2);
    }
    *(undefined1 *)pppuVar28 = 1;
    local_35c = (undefined4 ***)0x1;
    local_364 = (undefined4 ***)&DAT_00000001;
    local_368 = (uint ***)&DAT_00000008;
    local_360 = pppuVar28;
    if (pppuVar26 == local_660) {
      FUN_015f5b48(&local_660);
      ppppuVar12 = local_65c;
    }
    pppuVar25 = (uint ***)((int)pppuVar26 + 1);
    ppppuVar8 = ppppuVar12 + (int)pppuVar26 * 7;
    *ppppuVar8 = local_368;
    ppppuVar8[1] = local_364;
    ppppuVar8[2] = local_360;
    ppppuVar8[3] = local_35c;
    ppppuVar8[4] = local_358;
    ppppuVar8[5] = local_354;
    ppppuVar8[6] = local_350;
    local_658 = pppuVar25;
  }
  iVar7 = *(int *)(param_8[0x2d] + 0x30);
  if (iVar7 != 0) {
    ppuVar23 = (undefined4 **)(iVar7 << 3);
    iVar27 = *(int *)(param_8[0x2d] + 0x2c);
    uVar22 = 4;
    iVar18 = FUN_01298504(ppuVar23,4);
    if (iVar18 == 0) goto LAB_018deb84;
    puVar17 = (undefined4 *)(iVar27 + 4);
    iVar27 = 0;
    do {
      uVar22 = puVar17[1];
      puVar29 = (undefined4 *)(iVar18 + iVar27 * 8);
      *puVar29 = *puVar17;
      iVar27 = iVar27 + 1;
      puVar17 = puVar17 + 3;
      puVar29[1] = uVar22;
    } while (iVar7 != iVar27);
    iVar27 = 0;
    local_c0 = (uint ***)0x0;
    local_c8 = (uint ***)0x0;
    local_c4 = (undefined4 ***)&SUB_00000004;
    pppuVar28 = (undefined4 ***)&SUB_00000004;
    do {
      local_68c = pppuVar28;
      pppuVar26 = local_c0;
      puVar17 = (undefined4 *)(iVar18 + (int)local_c0 * 8);
      uVar22 = *puVar17;
      ppppuVar8 = (undefined4 ****)puVar17[1];
      if ((int)ppppuVar8 < 0) {
        uVar34 = 0;
LAB_018de830:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar34,ppppuVar33);
      }
      if (ppppuVar8 == (undefined4 ****)0x0) {
        local_694 = (undefined4 ****)0x0;
        ppppuVar12 = (undefined4 ****)&DAT_00000001;
      }
      else {
        uVar34 = 1;
        ppppuVar12 = (undefined4 ****)FUN_01298504(ppppuVar8,1);
        ppppuVar33 = ppppuVar8;
        if (ppppuVar12 == (undefined4 ****)0x0) goto LAB_018de830;
        local_694 = ppppuVar8;
      }
      FUN_01bed4e2(ppppuVar12,uVar22,ppppuVar8);
      pppuVar28 = local_68c;
      if (pppuVar26 == local_c8) {
        FUN_018c4418(&local_c8);
        pppuVar28 = local_c4;
      }
      pppuVar25 = local_658;
      puVar29 = (undefined4 *)((int)pppuVar28 + iVar27);
      *puVar29 = local_694;
      local_c0 = (uint ***)((int)pppuVar26 + 1);
      iVar27 = iVar27 + 0xc;
      puVar29[1] = ppppuVar12;
      puVar29[2] = ppppuVar8;
      ppppuVar33 = ppppuVar12;
    } while (puVar17 + 2 != (undefined4 *)(iVar18 + iVar7 * 8));
    *local_688 = local_c8;
    local_688[1] = local_c4;
    local_688[2] = local_c0;
    local_368 = (uint ***)&DAT_00000005;
    if (local_658 == local_660) {
      FUN_015f5b48(&local_660);
    }
    ppppuVar12 = local_65c;
    ppppuVar8 = local_65c + (int)pppuVar25 * 7;
    *ppppuVar8 = local_368;
    ppppuVar8[1] = local_364;
    ppppuVar8[2] = local_360;
    ppppuVar8[3] = local_35c;
    ppppuVar8[4] = local_358;
    ppppuVar8[5] = local_354;
    ppppuVar8[6] = local_350;
    pppuVar25 = (uint ***)((int)pppuVar25 + 1);
    local_658 = pppuVar25;
    FUN_0134aee0(iVar7,iVar18,4,8);
  }
  uVar21 = param_4[2];
  piVar9 = (int *)param_4[1];
  if ((uint)((int)local_660 - (int)pppuVar25) < uVar21) {
    FUN_006520b4(&local_660,pppuVar25,uVar21,4,0x1c);
LAB_018ddc58:
                    /* WARNING: Could not recover jumptable at 0x018ddcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar38 = (*(code *)(&DAT_018ddcb8 + *(int *)(&DAT_018ddcb8 + *piVar9 * 4)))();
    return uVar38;
  }
  if (uVar21 != 0) goto LAB_018ddc58;
  puVar19 = &DAT_3b9aca00;
  iVar7 = param_8[0x2d];
  local_658 = pppuVar25;
  if ((undefined1 *)param_8[0x22] == &DAT_3b9aca00) {
LAB_018de8e0:
    bVar35 = *(int *)(iVar7 + 0x5c) != 0;
    if (bVar35) {
      puVar19 = *(undefined1 **)(iVar7 + 0x18);
    }
    if (bVar35 && puVar19 != (undefined1 *)0x0) {
      piVar9 = *(int **)(iVar7 + 0x14);
      iVar18 = (int)puVar19 << 3;
      do {
        if (*piVar9 != 0) goto LAB_018de900;
        piVar9 = piVar9 + 2;
        iVar18 = iVar18 + -8;
      } while (iVar18 != 0);
    }
    if (*(char *)(iVar7 + 0x3c) == '\x02') {
LAB_018de900:
      local_368 = (uint ***)&SUB_00000004;
      local_364 = (undefined4 ***)&DAT_80000000;
      if (pppuVar25 == local_660) {
        FUN_015f5b48(&local_660);
        ppppuVar12 = local_65c;
      }
      local_658 = (uint ***)((int)pppuVar25 + 1);
      ppppuVar8 = ppppuVar12 + (int)pppuVar25 * 7;
      *ppppuVar8 = local_368;
      ppppuVar8[1] = local_364;
      ppppuVar8[2] = local_360;
      ppppuVar8[3] = local_35c;
      ppppuVar8[4] = local_358;
      ppppuVar8[5] = local_354;
      ppppuVar8[6] = local_350;
    }
    bVar35 = true;
  }
  else {
    puVar17 = param_8;
    if (param_8[10] == -0x80000000) {
      puVar17 = param_8 + 4;
    }
    iVar18 = puVar17[0xc];
    puVar19 = (undefined1 *)0x0;
    if (iVar18 == 0) goto LAB_018de8e0;
    local_68c = (undefined4 ***)(param_8 + 0xc);
    if (param_8[10] == -0x80000000) {
      bVar35 = true;
      bVar36 = *(int *)(iVar7 + 0x5c) != 0;
      if (bVar36) {
        iVar18 = *(int *)(iVar7 + 0x18);
      }
      if (bVar36 && iVar18 != 0) {
        iVar18 = iVar18 << 3;
        ppuVar23 = (undefined4 **)param_8[0x20];
        uVar21 = param_8[0x21];
        piVar9 = *(int **)(iVar7 + 0x14);
        do {
          if (*piVar9 != 0) {
            if (param_6 == (undefined4 ***)0x2) {
              iVar18 = param_8[0x18];
            }
            else {
              if (((uint)param_6 & 1) == 0) break;
              iVar18 = param_8[0x18];
              if (*(char *)(*(int *)(iVar18 + 0xc) + 0x58) !=
                  *(char *)(*(int *)(param_7 + 0xc) + 0x58)) {
                bVar35 = true;
                break;
              }
            }
            bVar3 = *(byte *)(iVar7 + 0x61);
            iVar7 = param_8[0x1a];
            *(undefined4 *)(param_9 + 0x78) = 1;
            *(int *)(param_9 + 0x7c) = iVar18;
            *param_10 = 1;
            param_10[1] = iVar18;
            if ((param_6 == (undefined4 ***)0x2) && (iVar7 != 0 && (bVar3 & 1) != 0)) {
              if (*(char *)(param_10 + 3) != '\0') {
                FUN_018e147c(param_10 + 3,&DAT_00523849,&DAT_01d22cdc);
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x18df800);
                (*pcVar1)();
              }
              param_10[2] = iVar7;
              *(undefined1 *)(param_10 + 3) = 1;
              local_368 = (uint ***)&DAT_00000010;
              if (pppuVar25 == local_660) {
                FUN_015f5b48(&local_660);
                ppppuVar12 = local_65c;
              }
              local_658 = (uint ***)((int)pppuVar25 + 1);
              ppppuVar12 = ppppuVar12 + (int)pppuVar25 * 7;
              *ppppuVar12 = local_368;
              ppppuVar12[1] = local_364;
              ppppuVar12[2] = local_360;
              ppppuVar12[3] = local_35c;
              ppppuVar12[4] = local_358;
              ppppuVar12[5] = local_354;
              ppppuVar12[6] = local_350;
            }
            pppuVar25 = local_658;
            uVar22 = 0;
            iVar27 = param_8[0x19];
            iVar7 = (int)ppuVar23 - (int)*local_68c;
            if (uVar21 <= (uint)param_8[0xd] &&
                (uint)(*local_68c <= ppuVar23) <= uVar21 - param_8[0xd]) {
              iVar7 = 0;
            }
            FUN_018a7af8(&local_488,*(undefined4 *)(*(int *)(iVar18 + 0xc) + 0x48));
            ppuVar23 = (undefined4 **)param_8[0x10];
            if ((int)ppuVar23 < 0) {
LAB_018df23c:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar22,ppuVar23);
            }
            uVar34 = param_8[0xf];
            if (ppuVar23 == (undefined4 **)0x0) {
              ppuVar11 = (undefined4 **)0x1;
              ppuVar31 = (undefined4 **)0x0;
            }
            else {
              uVar22 = 1;
              ppuVar11 = (undefined4 **)FUN_01298504(ppuVar23,1);
              ppuVar31 = ppuVar23;
              if (ppuVar11 == (undefined4 **)0x0) goto LAB_018df23c;
            }
            FUN_01bed4e2(ppuVar11,uVar34,ppuVar23);
            pppuVar6 = local_480;
            pppuVar15 = local_484;
            pppuVar28 = local_488;
            pppuVar13 = (undefined4 ***)thunk_FUN_01be5118(0x10);
            if (pppuVar13 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x10);
            }
            pppuVar13[2] = ppuVar23;
            *pppuVar13 = ppuVar31;
            pppuVar13[1] = ppuVar11;
            pppuVar13[3] = (undefined4 **)(iVar7 * 1000 + iVar27);
            local_c0 = (uint ***)&DAT_00000001;
            local_c8 = (uint ***)&DAT_00000001;
            local_c4 = pppuVar13;
            local_354 = (undefined4 ***)thunk_FUN_01be5118(0xc);
            if (local_354 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0xc);
            }
            *local_354 = pppuVar28;
            local_354[1] = pppuVar15;
            local_354[2] = pppuVar6;
            *local_688 = local_c8;
            local_688[1] = local_c4;
            local_688[2] = local_c0;
            local_350 = (undefined4 ***)0x1;
            local_358 = (undefined4 ***)0x1;
            local_368 = (uint ***)&DAT_00000009;
            if (pppuVar25 == local_660) {
              FUN_015f5b48(&local_660);
            }
            bVar35 = false;
            ppppuVar12 = local_65c;
            goto LAB_018df648;
          }
          piVar9 = piVar9 + 2;
          iVar18 = iVar18 + -8;
        } while (iVar18 != 0);
      }
    }
    else {
      bVar35 = true;
      bVar36 = *(int *)(iVar7 + 0x58) != 0;
      pppuVar28 = param_6;
      if (bVar36) {
        pppuVar28 = *(undefined4 ****)(iVar7 + 0x18);
      }
      if (bVar36 && pppuVar28 != (undefined4 ***)0x0) {
        piVar9 = *(int **)(iVar7 + 0x14);
        iVar18 = (int)pppuVar28 << 3;
        do {
          if (*piVar9 != 1) {
            if (*(char *)(iVar7 + 0x3c) == '\x02') {
              FUN_0193a93c(local_688,puVar17[0xb]);
              local_368 = (uint ***)&SUB_00000004;
              if (pppuVar25 == local_660) {
                FUN_015f5b48(&local_660);
                ppppuVar12 = local_65c;
              }
LAB_018df648:
              ppppuVar8 = ppppuVar12 + (int)pppuVar25 * 7;
              *ppppuVar8 = local_368;
              ppppuVar8[1] = local_364;
              ppppuVar8[2] = local_360;
              ppppuVar8[3] = local_35c;
              ppppuVar8[4] = local_358;
              ppppuVar8[5] = local_354;
              ppppuVar8[6] = local_350;
              local_658 = (uint ***)((int)pppuVar25 + 1);
            }
            break;
          }
          piVar9 = piVar9 + 2;
          iVar18 = iVar18 + -8;
        } while (iVar18 != 0);
      }
    }
  }
  pppuVar25 = local_658;
  ppuVar23 = (undefined4 **)((int)local_658 * 4);
  bVar37 = (uint ***)0x3ffffffe < local_658;
  bVar36 = local_658 == (uint ***)0x3fffffff;
  uVar22 = 0;
  if (local_658 < (uint ***)0x40000000) {
    bVar37 = (undefined4 **)0x7ffffffd < ppuVar23;
    bVar36 = ppuVar23 == (undefined4 **)0x7ffffffe;
  }
  if (bVar37 && !bVar36) {
LAB_018deb84:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,ppuVar23);
  }
  if (ppuVar23 == (undefined4 **)0x0) {
    pppuVar28 = (undefined4 ***)0x2;
    pppuVar26 = (uint ***)0x0;
  }
  else {
    uVar22 = 2;
    pppuVar28 = (undefined4 ***)FUN_01298504(ppuVar23,2);
    pppuVar26 = pppuVar25;
    if (pppuVar28 == (undefined4 ***)0x0) goto LAB_018deb84;
  }
  local_360 = (undefined4 ***)0x0;
  local_368 = pppuVar26;
  local_364 = pppuVar28;
  if (pppuVar25 != (uint ***)0x0) {
                    /* WARNING: Could not recover jumptable at 0x018dea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar38 = (*(code *)(&DAT_018dea3c + *(int *)(&DAT_018dea3c + (int)*ppppuVar12 * 4)))
                       ((undefined1 *)((int)pppuVar28 + 2),ppppuVar12 + 4,pppuVar25,0xb);
    return uVar38;
  }
  local_360 = (undefined4 ***)0x0;
  local_c0 = (uint ***)0x0;
  local_c8 = pppuVar26;
  local_c4 = pppuVar28;
  FUN_0134aee0(param_8[0x33],param_8[0x34],2,4);
  uVar22 = 0;
  param_8[0x33] = local_c8;
  param_8[0x34] = local_c4;
  param_8[0x35] = local_c0;
  pppuVar25 = *(uint ****)(param_8[0x2d] + 0x18);
  bVar37 = (uint ***)0x3ffffffe < pppuVar25;
  bVar36 = pppuVar25 == (uint ***)0x3fffffff;
  ppuVar23 = (undefined4 **)((int)pppuVar25 * 4);
  if (pppuVar25 < (uint ***)0x40000000) {
    bVar37 = (undefined4 **)0x7ffffffd < ppuVar23;
    bVar36 = ppuVar23 == (undefined4 **)0x7ffffffe;
  }
  if (bVar37 && !bVar36) goto LAB_018deb84;
  iVar7 = *(int *)(param_8[0x2d] + 0x14);
  if (ppuVar23 == (undefined4 **)0x0) {
    local_64c = (undefined4 **)0x2;
    local_650 = (uint ***)0x0;
  }
  else {
    uVar22 = 2;
    local_64c = (undefined4 **)FUN_01298504(ppuVar23,2);
    local_650 = pppuVar25;
    if (local_64c == (undefined4 **)0x0) goto LAB_018deb84;
  }
  pppuVar26 = (uint ***)0x0;
  if (pppuVar25 != (uint ***)0x0) {
    iVar18 = (int)local_64c + 2;
    puVar17 = (undefined4 *)(iVar7 + 4);
    pppuVar26 = pppuVar25;
    do {
      pppuVar26 = (uint ***)((int)pppuVar26 + -1);
      *(undefined4 *)(iVar18 + -2) = *(undefined4 *)*puVar17;
      iVar18 = iVar18 + 4;
      puVar17 = puVar17 + 2;
    } while (pppuVar26 != (uint ***)0x0);
    pppuVar26 = pppuVar25;
  }
  local_368 = local_650;
  local_364 = (undefined4 ***)local_64c;
  local_360 = pppuVar26;
  if (pppuVar26 == local_650) {
    local_648 = pppuVar26;
    FUN_018fa9a8(&local_650);
  }
  ppuVar23 = local_64c;
  pppuVar25 = local_650;
  iVar7 = (int)pppuVar26 + 1;
  *(undefined2 *)(local_64c + (int)pppuVar26) = 0xba;
  local_648 = (uint ***)iVar7;
  local_630 = (undefined1 *)thunk_FUN_01be5118(2);
  if (local_630 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,2);
  }
  *local_630 = 0;
  local_628 = local_660;
  local_624 = local_65c;
  local_620 = local_658;
  local_618 = *param_8;
  uStack_614 = param_8[1];
  uStack_610 = param_8[2];
  uStack_60c = param_8[3];
  local_608 = param_8[4];
  uStack_604 = param_8[5];
  uStack_600 = param_8[6];
  uStack_5fc = param_8[7];
  local_5f8 = param_8[0x24];
  uStack_5f4 = param_8[0x25];
  uStack_5f0 = param_8[0x26];
  uStack_5ec = param_8[0x27];
  local_5e8 = param_8[0x28];
  uStack_5e4 = param_8[0x29];
  uStack_5e0 = param_8[0x2a];
  uStack_5dc = param_8[0x2b];
  uStack_5d8 = param_8[0x2c];
  local_5d4 = 1;
  local_63c = (undefined4 ***)ppuVar23;
  local_61c = 4;
  local_62c = 1;
  local_634 = 1;
  local_640 = pppuVar25;
  local_638 = (undefined4 ***)iVar7;
  if (bVar35) {
    ppuVar23 = (undefined4 **)0x0;
    goto LAB_018dee94;
  }
  ppuVar23 = local_68c[0xc];
  puVar17 = ppuVar23[3];
  uVar22 = param_1[1];
  uVar34 = param_1[2];
  FUN_018b251c(&local_c8,&local_640);
  if ((int)pppuVar25 < 0) {
LAB_018ded70:
    pppuVar25 = local_c0;
  }
  else {
    bVar35 = local_620 == (uint ***)0x0;
    ppppuVar8 = (undefined4 ****)0x0;
    ppppuVar12 = extraout_r1;
    if (!bVar35) {
      ppppuVar8 = local_624 + (int)local_620 * 7;
      ppppuVar12 = ppppuVar8 + -7;
      bVar35 = ppppuVar12 == (undefined4 ****)0x0;
    }
    if ((bVar35) || (*ppppuVar12 != (undefined4 ***)0x9)) goto LAB_018ded70;
    local_360 = (uint ***)0x0;
    local_364 = (undefined4 ***)0x1;
    local_368 = (uint ***)0x0;
    FUN_018aacd0(ppppuVar8[-2],ppppuVar8[-1],&local_368);
    pppuVar26 = local_360;
    FUN_0134bd64(local_368,local_364);
    pppuVar25 = local_c0;
    if (pppuVar26 <= local_c0) {
      pppuVar25 = (uint ***)((int)local_c0 - (int)pppuVar26);
    }
  }
  pppuVar28 = local_c4;
  pppuVar26 = local_c8;
  FUN_018e00c0(&local_488,uVar22,uVar34,puVar17,local_c4,pppuVar25);
  FUN_018cb9c0(auStack_5d0,ppuVar23,local_68c[6],local_68c[7]);
  ppppuVar8 = local_530;
  FUN_0188fef8(&local_c8,local_530[3],1,0);
  ppuVar20 = local_c8[0x12];
  if (&DAT_00000041 <= ppuVar20) {
LAB_018df70c:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,ppuVar20,0x40,&DAT_01d2571c);
  }
  FUN_018cae5c(&local_368,auStack_5d0,ppppuVar8[3],"res binder",10,&local_c4,ppuVar20);
  FUN_018cb5cc(&local_c8,ppppuVar8[3],&local_368,&local_488);
  if (-1 < (int)local_640) {
    ppuVar20 = local_c8[0x12];
    if ((uint **)0x40 < ppuVar20) goto LAB_018df70c;
    bVar35 = local_620 == (uint ***)0x0;
    ppppuVar12 = (undefined4 ****)0x0;
    if (!bVar35) {
      ppppuVar8 = local_624 + (int)local_620 * 7;
      ppppuVar12 = ppppuVar8 + -7;
      bVar35 = ppppuVar12 == (undefined4 ****)0x0;
    }
    if ((!bVar35) && (*ppppuVar12 == (undefined4 ***)0x9)) {
      FUN_0193a93c(&local_368,&local_c4);
      if (ppppuVar8[-1] == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d22434);
      }
      pppuVar15 = ppppuVar8[-2];
      FUN_0134bd64(*pppuVar15,pppuVar15[1]);
      *pppuVar15 = local_368;
      pppuVar15[1] = local_364;
      pppuVar15[2] = local_360;
    }
  }
  FUN_0134bd64(pppuVar26,pppuVar28);
  ppuVar23 = local_68c[0xc];
  FUN_01bed4e2(auStack_528,auStack_5d0,0xa0);
  local_688 = local_530;
  local_68c = local_52c;
LAB_018dee94:
  FUN_01bed4e2(&local_c8,&local_640,0x70);
  FUN_018e1c0c(&local_368,&local_c8);
  local_40c = 4;
  if (param_2 == 0) {
    local_40c = 2;
  }
  FUN_01bed4e2(&local_488,&local_368,0x7c);
  if ((param_2 != 0) &&
     (cVar2 = *(char *)((int)param_8 + 0xd9), *(undefined1 *)((int)param_8 + 0xd9) = 1,
     cVar2 == '\0')) {
    local_368 = (uint ***)0x80000002;
    local_2ec = 4;
    FUN_018e077c(param_9,&local_368,0);
  }
  if (4 < DAT_01d51b00) {
    local_c4 = (undefined4 ***)FUN_018dfe18;
    local_358 = (undefined4 ***)&DAT_01d231a0;
    local_35c = (undefined4 ***)0x12;
    local_360 = (uint ***)&DAT_00520ced;
    local_364 = (undefined4 ***)0x12;
    local_368 = (uint ***)&DAT_00520ced;
    local_c8 = (uint ***)&local_488;
    FUN_0193b350(&DAT_00520d44,&local_c8,5,&local_368);
  }
  if (-1 < (int)local_488) {
    FUN_01ac6d2c(param_1,local_484,(int)local_484 + (int)local_480);
  }
  FUN_01bed4e2(&local_368,&local_488,0x80);
  FUN_018e077c(param_9,&local_368,0);
  if (ppuVar23 == (undefined4 **)0x0) {
    local_688 = (undefined4 ****)0x0;
  }
  else {
    FUN_01bed4e2(&local_368,auStack_528,0xa0);
    local_2c4 = local_68c;
    local_2c8 = local_688;
    if (*(byte *)(param_10 + 3) - 1 < 2) {
      puVar17 = ppuVar23[3];
      iVar7 = *(int *)(param_8[0x2d] + 0x54);
      iVar18 = *(int *)(param_8[0x2d] + 0x50);
      iVar27 = *(int *)(iVar7 + 8);
      uVar34 = *(undefined4 *)(iVar7 + 0xc);
      uVar32 = param_1[1];
      uVar30 = param_1[2];
      uVar22 = *(undefined4 *)(iVar7 + 0x10);
      cVar2 = *(char *)((int)param_8 + 0xd9);
      *(undefined1 *)((int)param_8 + 0xd9) = 1;
      if (cVar2 == '\0') {
        local_c8 = (uint ***)0x80000002;
        local_4c = 4;
        FUN_018e077c(param_9,&local_c8,0);
      }
      FUN_018e00c0(&local_110,uVar32,uVar30,puVar17,1,0);
      ppuVar23 = local_110[0x12];
      if ((undefined4 **)0x40 < ppuVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,ppuVar23,0x40,&DAT_01d2571c);
      }
      FUN_018cb870(&local_c8,&local_368,1,&pppuStack_10c,ppuVar23,
                   iVar18 + (iVar27 - 1U & 0xfffffff8) + 8,uVar34,uVar22,param_8);
      if (*(char *)(param_9 + 0xac) == '\x01') {
        uVar22 = FUN_018cb154(local_688[1],&local_c8);
        FUN_018bf8c4(param_9,uVar22);
      }
      else {
        FUN_018cb508(local_688[1],&local_c8);
      }
      *(undefined1 *)(param_9 + 0xb0) = 1;
      if (4 < DAT_01d51b00) {
        local_bc = (undefined4 ***)0x15;
        local_c4 = (undefined4 ***)&DAT_00000015;
        local_b8 = (undefined4 ***)&DAT_01d226f0;
        local_c0 = (uint ***)&DAT_0051dc34;
        local_c8 = (uint ***)&DAT_0051dc34;
        FUN_0193b350(&DAT_0051dcb0,0x37,5,&local_c8);
      }
    }
    FUN_01bed4e2(auStack_408,auStack_528,0xa0);
  }
  if ((param_2 == 0 & uVar24) == 0) {
    local_364 = (undefined4 ***)param_7;
    local_368 = param_6;
    FUN_01bed4e2(&local_360,param_8,0xe0);
    local_280 = *param_1;
    uStack_27c = param_1[1];
    uStack_278 = param_1[2];
    uStack_274 = param_1[3];
    FUN_01bed4e2(auStack_270,auStack_408,0xa0);
    local_1cc = local_68c;
    local_1d0 = local_688;
    FUN_01bed4e2(auStack_1c8,local_680,0xa8);
    iVar7 = thunk_FUN_01be5118(0x248);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x248);
    }
    FUN_01bed4e2(iVar7,&local_368,0x248);
    FUN_018aa578(param_4);
    puVar16 = &UNK_01d231b0;
  }
  else {
    FUN_01bed4e2(&local_360,param_8,0xe0);
    local_280 = *param_1;
    uStack_27c = param_1[1];
    uStack_278 = param_1[2];
    uStack_274 = param_1[3];
    FUN_01bed4e2(auStack_270,auStack_408,0xa0);
    FUN_01bed4e2(auStack_1c8,local_680,0xa8);
    local_120 = *param_4;
    uStack_11c = param_4[1];
    uStack_118 = param_4[2];
    local_1cc = local_68c;
    local_1d0 = local_688;
    local_364 = (undefined4 ***)param_7;
    local_368 = param_6;
    iVar7 = thunk_FUN_01be5118(600);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,600);
    }
    FUN_01bed4e2(iVar7,&local_368,600);
    puVar16 = &UNK_01d231c8;
  }
  return CONCAT44(puVar16,iVar7);
}

