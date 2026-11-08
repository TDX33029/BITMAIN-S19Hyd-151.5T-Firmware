// FUN_0066bbcc @ 0066bbcc size=3832 calls_out=41 calls_in=0
// strings: `DateTime - TimeDelta` overflowed | all branches are disabled and there is no else branch | api_logging::debounceropen/utils-rs/api-logging/src/debouncer.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_0066bbcc(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  byte *****pppppbVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int ****ppppiVar11;
  byte ****ppppbVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  undefined4 uVar17;
  int *****pppppiVar18;
  int *****pppppiVar19;
  undefined4 *****pppppuVar20;
  undefined4 *puVar21;
  int *piVar22;
  int *****unaff_r6;
  undefined4 *puVar23;
  undefined1 *local_3bc;
  undefined1 auStack_3ac [12];
  undefined4 *****local_3a0;
  undefined4 local_39c;
  undefined4 *local_398;
  undefined4 *****local_320;
  int *****local_31c;
  undefined4 *local_318;
  int *****local_2a0;
  int *****local_29c;
  int *****local_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  int local_280;
  int local_27c;
  int local_1f8;
  int local_1f4;
  int *****local_16c;
  int local_168;
  int *****local_164;
  int *****local_160;
  int *****local_15c;
  int *****local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 *****local_140;
  int *****local_13c;
  int *local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *local_120;
  byte *****local_bc;
  undefined4 local_b8;
  undefined4 *****local_b0;
  int *****local_ac;
  int *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  
  piVar15 = (int *)(param_1 + 0x38);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3f4)) {
  case 0:
    pppppuVar20 = *(undefined4 ******)(param_1 + 0x3ec);
    uVar17 = *(undefined4 *)(param_1 + 1000);
    local_b0 = pppppuVar20;
    uVar9 = FUN_01a3c2e0(*(undefined4 *)(param_1 + 0x3f0));
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined4 *)(param_1 + 0x24) = uVar17;
    *(undefined4 ******)(param_1 + 0x28) = pppppuVar20;
    *(undefined4 *)(param_1 + 0x2c) = uVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c04320);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c04320);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x33)) {
    case 0:
      uVar17 = *(undefined4 *)(param_1 + 0x24);
      pppppuVar20 = *(undefined4 ******)(param_1 + 0x28);
      uVar9 = *(undefined4 *)(param_1 + 0x2c);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c04300);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c04300);
    case 3:
      pppppiVar18 = *(int ******)(param_1 + 0x38);
      puVar21 = *(undefined4 **)(param_1 + 0x3c);
      goto LAB_0066bd84;
    case 4:
      goto switchD_0066bc50_caseD_4;
    case 5:
      goto switchD_0066bc50_caseD_5;
    }
  }
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar17;
  *(undefined4 ******)(param_1 + 0x1c) = pppppuVar20;
  *(undefined4 *)(param_1 + 0x20) = uVar9;
  FUN_019f22f8(param_1,&DAT_01c042f0,1,0,0,&DAT_01c042f0);
LAB_0066bd34:
  iVar14 = *(int *)(param_1 + 0x20);
  pppppiVar18 = (int *****)(param_1 + 0x30);
  *(byte *)pppppiVar18 = 0;
  puVar21 = (undefined4 *)(param_1 + 0x40);
  uVar16 = *(uint *)(iVar14 + 8);
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(int **)(param_1 + 0x4c) = (int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x50) = iVar14 + 8;
  *(uint *)(param_1 + 0x54) = uVar16 >> 2;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int ******)(param_1 + 0x38) = pppppiVar18;
  *(undefined4 **)(param_1 + 0x3c) = puVar21;
  *(int *)(param_1 + 0x40) = param_1;
LAB_0066bd84:
  puVar23 = (undefined4 *)*param_2;
  bVar4 = FUN_019ec70c();
  if ((bVar4 != 2) && ((bVar4 & 1) == 0)) {
    FUN_019ece98(*puVar23,puVar23[1]);
LAB_0066c0e4:
    uVar6 = 3;
    goto LAB_0066ca88;
  }
  unaff_r6 = (int *****)FUN_019f8914(2);
  bVar7 = false;
  iVar14 = 0;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    if (((uint)((int)unaff_r6 + iVar14) & 1) == 0) {
      if (((uint)*pppppiVar18 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(puVar21 + 2)) {
        case 0:
          uVar9 = *puVar21;
          puVar21[1] = uVar9;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c2051c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c2051c);
        case 3:
          uVar9 = puVar21[1];
        }
        FUN_019f1a74(&local_b0,uVar9,puVar23);
        bVar7 = true;
        uVar6 = 1;
        if (local_a8 == (int *)&DAT_3b9aca00) {
          uVar6 = 3;
        }
        *(undefined1 *)(puVar21 + 2) = uVar6;
        piVar22 = local_a8;
        if (local_a8 != (int *)&DAT_3b9aca00) goto LAB_0066be98;
      }
    }
    else if (((uint)*pppppiVar18 & 2) == 0) {
      iVar14 = FUN_01a3be00(puVar21 + 3,puVar23);
      bVar7 = true;
      if (iVar14 == 0) {
        bVar7 = false;
        piVar22 = (int *)&DAT_3b9aca00;
LAB_0066be98:
        *(byte *)pppppiVar18 = *(byte *)pppppiVar18 | bVar7;
        goto LAB_0066bea4;
      }
    }
    iVar14 = 1;
    bVar3 = false;
  } while (bVar5);
  piVar22 = (int *)0x3b9aca01;
  if (bVar7) goto LAB_0066c0e4;
LAB_0066bea4:
  FUN_019ede44(param_1 + 0x50);
  puVar10 = (undefined1 *)((int)piVar22 + -999999999);
  if (piVar22 < &DAT_3b9ac9ff) {
    puVar10 = (undefined1 *)0x0;
  }
  if (puVar10 == (undefined1 *)0x0) {
    FUN_0128e808(auStack_3ac);
    FUN_0128f970(&local_b0,auStack_3ac,0xe10,0,0);
    if (local_b0 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("`DateTime - TimeDelta` overflowed",0x21,&DAT_01c041b0);
    }
    *(undefined4 ******)(param_1 + 0x38) = local_b0;
    local_138 = (int *)0x0;
    local_13c = (int *****)0x0;
    local_140 = (undefined4 *****)(*(int *)(param_1 + 0x18) + 8);
    *(int ******)(param_1 + 0x3c) = local_ac;
    *(int **)(param_1 + 0x40) = local_a8;
    local_120 = piVar15;
    FUN_0069e914(&local_280,&local_140);
    if (local_280 == 2 && local_27c == 0) {
      pppppiVar19 = (int *****)0x0;
      unaff_r6 = (int *****)&DAT_00000008;
      if (local_138 == (int *)0x0) {
        pppppiVar18 = (int *****)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *local_138;
          bVar7 = (bool)hasExclusiveAccess(local_138);
        } while (!bVar7);
        *local_138 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0068c8e0(local_138);
          pppppiVar18 = (int *****)0x0;
        }
        else {
          pppppiVar18 = (int *****)0x0;
        }
      }
    }
    else {
      pppppiVar18 = (int *****)thunk_FUN_01be5118(0x220);
      if (pppppiVar18 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0x220);
      }
      FUN_01bed4e2(pppppiVar18,&local_280,0x88);
      local_160 = (int *****)&SUB_00000004;
      local_158 = (int *****)&DAT_00000001;
      local_b0 = local_140;
      local_ac = local_13c;
      local_a8 = local_138;
      local_a4 = uStack_134;
      local_a0 = local_130;
      uStack_9c = uStack_12c;
      uStack_98 = uStack_128;
      uStack_94 = uStack_124;
      piStack_90 = local_120;
      iVar14 = 0x88;
      local_15c = pppppiVar18;
      while (pppppiVar19 = local_158, FUN_0069e914(&local_1f8,&local_b0),
            local_1f8 != 2 || local_1f4 != 0) {
        if (pppppiVar19 == local_160) {
          FUN_0132b898(&local_160,pppppiVar19,1,8,0x88);
          pppppiVar18 = local_15c;
        }
        FUN_01bed4e2((byte *)((int)pppppiVar18 + iVar14),&local_1f8,0x88);
        local_158 = (int *****)((int)pppppiVar19 + 1);
        iVar14 = iVar14 + 0x88;
      }
      if (local_a8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *local_a8;
          bVar7 = (bool)hasExclusiveAccess(local_a8);
        } while (!bVar7);
        *local_a8 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0068c8e0(local_a8);
        }
      }
      pppppiVar18 = local_158;
      pppppiVar19 = local_160;
      unaff_r6 = local_15c;
    }
    *(int ******)(param_1 + 0x338) = unaff_r6;
    *(int ******)(param_1 + 0x33c) = unaff_r6;
    pppppiVar18 = unaff_r6 + (int)pppppiVar18 * 0x22;
    *(int ******)(param_1 + 0x340) = pppppiVar19;
    *(int ******)(param_1 + 0x344) = pppppiVar18;
    while( true ) {
      piVar22 = (int *)(param_1 + 0x48);
      if (unaff_r6 == pppppiVar18) break;
      *(int ******)(param_1 + 0x33c) = unaff_r6 + 0x22;
      FUN_01bed4e2(piVar22,unaff_r6,0x88);
      if (*piVar22 == 2 && *(int *)(param_1 + 0x4c) == 0) goto LAB_0066ca74;
      FUN_01bed864(param_1 + 0xd0,unaff_r6,0x88);
      piVar22 = (int *)(param_1 + 0x348);
      FUN_00691fb4(piVar22,*(int *)(param_1 + 0x18) + 8,param_1 + 0xd0);
      if (*piVar22 != 2 || *(int *)(param_1 + 0x34c) != 0) {
        iVar14 = param_1 + 0x158;
        *(undefined1 *)(param_1 + 0x32) = 1;
        FUN_01bed4e2(iVar14,piVar22,0x88);
        local_b0 = *(undefined4 ******)(param_1 + 0x3d8);
        local_ac = *(int ******)(param_1 + 0x3dc);
        local_a8 = *(int **)(param_1 + 0x3e0);
        FUN_0067a6c8(iVar14,&local_b0,*(undefined4 *)(param_1 + 0x3d0),
                     *(undefined4 *)(param_1 + 0x3d4),&local_b0);
        *(undefined1 *)(param_1 + 0x32) = 0;
        FUN_01bed4e2(param_1 + 0x1e0,iVar14,0x88);
        *(undefined1 *)(param_1 + 0x334) = 0;
        *(int *)(param_1 + 0x330) = param_1 + 0x1c;
switchD_0066bc50_caseD_4:
        unaff_r6 = (int *****)(param_1 + 0x1e0);
        FUN_0066cff4(&local_b0,unaff_r6,param_2);
        pppppiVar18 = local_ac;
        pppppuVar20 = local_b0;
        if (local_b0 == (undefined4 *****)&DAT_00000003 && local_ac == (int *****)0x0) {
          uVar6 = 4;
          goto LAB_0066ca84;
        }
        FUN_01bed4e2(&local_3a0,&local_a8,0x80);
        FUN_00668b80(unaff_r6);
        if (pppppuVar20 != (undefined4 *****)0x2 || pppppiVar18 != (int *****)0x0) {
          local_b0 = pppppuVar20;
          local_ac = pppppiVar18;
          FUN_01bed4e2(&local_a8,&local_3a0,0x80);
          unaff_r6 = (int *****)FUN_0066d320(&local_b0);
          *(undefined1 *)(param_1 + 0x32) = 0;
          FUN_00668cb0(param_1 + 0xd0);
          FUN_006a0304(param_1 + 0x338);
          goto LAB_0066cad0;
        }
        *(undefined1 *)(param_1 + 0x32) = 0;
      }
      FUN_00668cb0(param_1 + 0xd0);
      unaff_r6 = *(int ******)(param_1 + 0x33c);
      pppppiVar18 = *(int ******)(param_1 + 0x344);
    }
    *piVar22 = 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
LAB_0066ca74:
    FUN_006a0304(param_1 + 0x338);
    goto LAB_0066bd34;
  }
  if (puVar10 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01c04310);
  }
  local_298 = (int *****)0x0;
  local_2a0 = (int *****)(*(int *)(param_1 + 0x18) + 8);
  local_29c = (int *****)0x0;
  FUN_0069eafc(&local_160,&local_2a0);
  pppppiVar18 = local_160;
  if (local_160 == (int *****)0x0) goto LAB_0066c19c;
  FUN_0069ed40(&local_b0,local_15c);
  DataMemoryBarrier(0xb);
  do {
    ppppiVar11 = *pppppiVar18;
    bVar7 = (bool)hasExclusiveAccess(pppppiVar18);
  } while (!bVar7);
  *pppppiVar18 = (int ****)((int)ppppiVar11 + -1);
  if (ppppiVar11 == (int ****)0x1) {
    DataMemoryBarrier(0xb);
    FUN_0068c8e0(pppppiVar18);
  }
  pppppiVar18 = local_ac;
  pppppuVar20 = local_b0;
  FUN_01bed4e2(&local_140,&local_a8,0x80);
  if (pppppuVar20 == (undefined4 *****)0x2 && pppppiVar18 == (int *****)0x0) {
LAB_0066c19c:
    iVar14 = 8;
    pppppiVar18 = (int *****)0x0;
    if (local_298 == (int *****)0x0) {
      pppppiVar19 = (int *****)0x0;
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        ppppiVar11 = *local_298;
        bVar7 = (bool)hasExclusiveAccess(local_298);
      } while (!bVar7);
      *local_298 = (int ****)((int)ppppiVar11 + -1);
      if (ppppiVar11 == (int ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0068c8e0(local_298);
        pppppiVar19 = (int *****)0x0;
      }
      else {
        pppppiVar19 = (int *****)0x0;
      }
    }
  }
  else {
    local_b0 = pppppuVar20;
    local_ac = pppppiVar18;
    FUN_01bed4e2(&local_a8,&local_140,0x80);
    iVar14 = thunk_FUN_01be5118(0x220);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0x220);
    }
    FUN_01bed4e2(iVar14,&local_b0,0x88);
    local_164 = (int *****)&DAT_00000001;
    local_16c = (int *****)&SUB_00000004;
    local_160 = local_2a0;
    local_15c = local_29c;
    local_158 = local_298;
    uStack_154 = uStack_294;
    local_150 = local_290;
    uStack_14c = uStack_28c;
    uStack_148 = uStack_288;
    uStack_144 = uStack_284;
    local_168 = iVar14;
    while (FUN_0069eafc(&local_bc,&local_160), pppppbVar2 = local_bc, local_bc != (byte *****)0x0) {
      FUN_0069ed40(&local_b0,local_b8);
      DataMemoryBarrier(0xb);
      do {
        ppppbVar12 = *pppppbVar2;
        bVar7 = (bool)hasExclusiveAccess(pppppbVar2);
      } while (!bVar7);
      *pppppbVar2 = (byte ****)((int)ppppbVar12 + -1);
      if (ppppbVar12 == (byte ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0068c8e0(pppppbVar2);
      }
      pppppiVar18 = local_ac;
      pppppuVar20 = local_b0;
      FUN_01bed4e2(&local_140,&local_a8,0x80);
      if (pppppuVar20 == (undefined4 *****)0x2 && pppppiVar18 == (int *****)0x0) break;
      local_b0 = pppppuVar20;
      local_ac = pppppiVar18;
      FUN_01bed4e2(&local_a8,&local_140,0x80);
      pppppiVar18 = local_164;
      if (local_164 == local_16c) {
        FUN_0132b898(&local_16c,local_164,1,8,0x88);
      }
      FUN_01bed4e2(local_168 + (int)pppppiVar18 * 0x88,&local_b0,0x88);
      local_164 = (int *****)((int)pppppiVar18 + 1);
    }
    if (local_158 != (int *****)0x0) {
      DataMemoryBarrier(0xb);
      do {
        ppppiVar11 = *local_158;
        bVar7 = (bool)hasExclusiveAccess(local_158);
      } while (!bVar7);
      *local_158 = (int ****)((int)ppppiVar11 + -1);
      if (ppppiVar11 == (int ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0068c8e0(local_158);
      }
    }
    pppppiVar19 = local_164;
    pppppiVar18 = local_16c;
    iVar14 = local_168;
  }
  *(int *)(param_1 + 0x328) = iVar14;
  *(int *)(param_1 + 0x32c) = iVar14;
  iVar13 = iVar14 + (int)pppppiVar19 * 0x88;
  *(int ******)(param_1 + 0x330) = pppppiVar18;
  *(int *)(param_1 + 0x334) = iVar13;
  do {
    if (iVar14 == iVar13) {
      *piVar15 = 2;
      *(undefined4 *)(param_1 + 0x3c) = 0;
LAB_0066c7e8:
      unaff_r6 = (int *****)0x0;
      FUN_006a0304(param_1 + 0x328);
LAB_0066cad0:
      local_3bc = (undefined1 *)(param_1 + 0x33);
      FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
      FUN_005faf6c(param_1 + 0x20);
      FUN_00668c04(param_1 + 0x1c);
      piVar15 = *(int **)(param_1 + 0x18);
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar15;
        bVar7 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar7);
      *piVar15 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00687810(*(undefined4 *)(param_1 + 0x18));
      }
      *local_3bc = 1;
      bVar7 = false;
LAB_0066cb28:
      if (bVar7) {
        *(undefined1 *)(param_1 + 0x3f4) = 3;
        uVar9 = 1;
      }
      else {
        FUN_00669d70(param_1);
        local_16c = unaff_r6;
        if (unaff_r6 == (int *****)0x0) {
          pppppiVar18 = (int *****)0x0;
        }
        else {
          local_bc = (byte *****)&local_16c;
          FUN_01a3b7c0(*(undefined4 *)(param_1 + 0x3f0));
          if ((DAT_01d50f88 < 5) &&
             (((DAT_01d4b634 - 1 < 2 ||
               ((DAT_01d4b634 != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d4b62c), cVar8 != '\0')))) &&
              (iVar14 = FUN_01aaa278(DAT_01d4b62c), iVar14 != 0)))) {
            if (*(int ******)(DAT_01d4b62c + 0x20) == (int *****)0x0) {
LAB_0066cea0:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04330);
            }
            local_31c = (int *****)&local_2a0;
            local_a8 = *(int **)(DAT_01d4b62c + 0x24);
            local_a4 = *(undefined4 *)(DAT_01d4b62c + 0x28);
            local_398 = (undefined4 *)(DAT_01d4b62c + 0x1c);
            local_b0 = (undefined4 *****)*local_398;
            local_320 = &local_b0;
            local_3a0 = &local_320;
            local_a0 = 0;
            local_39c = 1;
            local_29c = (int *****)&local_160;
            local_160 = (int *****)&local_bc;
            local_318 = (undefined4 *)&DAT_01d2ea4c;
            local_2a0 = (int *****)&DAT_005b4195;
            local_15c = (int *****)&LAB_0125f734;
            local_ac = *(int ******)(DAT_01d4b62c + 0x20);
            FUN_01aaaecc(DAT_01d4b62c,&local_3a0);
            iVar14 = DAT_01d4b62c;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_13c = *(int ******)(DAT_01d4b62c + 0x14);
              local_138 = *(int **)(DAT_01d4b62c + 0x18);
              local_140 = (undefined4 *****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar21 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar21 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar13 = (*(code *)puVar21[3])(pcVar1,&local_140);
              if (iVar13 != 0) {
                FUN_01aaa328(iVar14,pcVar1,puVar21[4],&local_140,&local_3a0);
              }
            }
          }
          else {
            iVar14 = DAT_01d4b62c;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_39c = *(undefined4 *)(DAT_01d4b62c + 0x14);
              local_398 = *(undefined4 **)(DAT_01d4b62c + 0x18);
              local_3a0 = (undefined4 *****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar21 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar21 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar13 = (*(code *)puVar21[3])(pcVar1,&local_3a0);
              if (iVar13 != 0) {
                local_318 = (undefined4 *)(DAT_01d4b62c + 0x1c);
                if (*(int ******)(DAT_01d4b62c + 0x20) == (int *****)0x0) goto LAB_0066cea0;
                local_a8 = *(int **)(DAT_01d4b62c + 0x24);
                local_13c = (int *****)&local_2a0;
                local_a4 = *(undefined4 *)(DAT_01d4b62c + 0x28);
                local_140 = &local_b0;
                local_320 = &local_140;
                local_31c = (int *****)&DAT_00000001;
                local_29c = (int *****)&local_160;
                local_15c = (int *****)&LAB_0125f734;
                local_160 = (int *****)&local_bc;
                local_a0 = 0;
                local_138 = (int *)&DAT_01d2ea4c;
                local_2a0 = (int *****)&DAT_005b4195;
                local_b0 = (undefined4 *****)*local_318;
                local_ac = *(int ******)(DAT_01d4b62c + 0x20);
                FUN_01aaa328(iVar14,pcVar1,puVar21[4],&local_3a0,&local_320);
              }
            }
          }
          pppppiVar18 = local_16c;
        }
        FUN_005faf6c((undefined4 *)(param_1 + 0x3f0));
        *(undefined1 *)(param_1 + 0x3f4) = 1;
        uVar9 = 0;
      }
      return CONCAT44(pppppiVar18,uVar9);
    }
    *(int *)(param_1 + 0x32c) = iVar14 + 0x88;
    FUN_01bed4e2(piVar15,iVar14,0x88);
    if (*piVar15 == 2 && *(int *)(param_1 + 0x3c) == 0) goto LAB_0066c7e8;
    pppppiVar18 = (int *****)(param_1 + 0xc0);
    FUN_01bed864(pppppiVar18,iVar14,0x88);
    piVar22 = (int *)(param_1 + 0x338);
    FUN_00691fb4(piVar22,*(int *)(param_1 + 0x18) + 8,pppppiVar18);
    if (*piVar22 != 2 || *(int *)(param_1 + 0x33c) != 0) {
      iVar14 = param_1 + 0x148;
      *(undefined1 *)(param_1 + 0x31) = 1;
      FUN_01bed4e2(iVar14,piVar22,0x88);
      local_b0 = *(undefined4 ******)(param_1 + 0x3c8);
      local_ac = *(int ******)(param_1 + 0x3cc);
      local_a8 = *(int **)(param_1 + 0x3d0);
      FUN_0067a6c8(iVar14,&local_b0,*(undefined4 *)(param_1 + 0x3c0),
                   *(undefined4 *)(param_1 + 0x3c4),&local_b0);
      *(undefined1 *)(param_1 + 0x31) = 0;
      FUN_01bed4e2(param_1 + 0x1d0,iVar14,0x88);
      *(undefined1 *)(param_1 + 0x324) = 0;
      *(int *)(param_1 + 800) = param_1 + 0x1c;
switchD_0066bc50_caseD_5:
      unaff_r6 = (int *****)(param_1 + 0x1d0);
      FUN_0066cff4(&local_b0,unaff_r6,param_2);
      pppppiVar18 = local_ac;
      pppppuVar20 = local_b0;
      if (local_b0 != (undefined4 *****)&DAT_00000003 || local_ac != (int *****)0x0) {
        FUN_01bed4e2(&local_320,&local_a8,0x80);
        FUN_00668b80(unaff_r6);
        if (pppppuVar20 == (undefined4 *****)0x2 && pppppiVar18 == (int *****)0x0) {
          *(undefined1 *)(param_1 + 0x31) = 0;
          goto LAB_0066c7c8;
        }
        local_b0 = pppppuVar20;
        local_ac = pppppiVar18;
        FUN_01bed4e2(&local_a8,&local_320,0x80);
        unaff_r6 = (int *****)FUN_0066d320(&local_b0);
        *(undefined1 *)(param_1 + 0x31) = 0;
        FUN_00668cb0(param_1 + 0xc0);
        FUN_006a0304(param_1 + 0x328);
        goto LAB_0066cad0;
      }
      uVar6 = 5;
LAB_0066ca84:
      pppppiVar18 = local_ac;
LAB_0066ca88:
      *(undefined1 *)(param_1 + 0x33) = uVar6;
      bVar7 = true;
      goto LAB_0066cb28;
    }
LAB_0066c7c8:
    FUN_00668cb0(param_1 + 0xc0);
    iVar14 = *(int *)(param_1 + 0x32c);
    iVar13 = *(int *)(param_1 + 0x334);
  } while( true );
}

