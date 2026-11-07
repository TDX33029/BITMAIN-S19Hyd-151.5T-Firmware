// FUN_00b7cbf4 @ 00b7cbf4 size=1944 calls_out=22 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

int FUN_00b7cbf4(int param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 **ppuVar15;
  uint **ppuVar16;
  uint **ppuVar17;
  uint **ppuVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  bool bVar22;
  bool bVar23;
  int local_8c;
  undefined1 *local_88;
  undefined4 **local_80;
  uint ***local_7c;
  code *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 **local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 **local_5c;
  undefined4 ****local_58;
  uint **local_54;
  int local_50;
  int local_4c;
  uint **local_48;
  int local_44;
  undefined4 ***local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 ***local_30;
  undefined4 **local_2c;
  uint **local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x34)) {
  case 0:
    *(undefined1 *)(param_1 + 0x30) = 0;
switchD_00b7cc54_caseD_0:
    ppuVar17 = (uint **)0x2;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    puVar12 = &DAT_00570df0;
    *(undefined **)(param_1 + 4) = &DAT_00570df0;
    *(undefined4 *)(param_1 + 8) = 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13740);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13740);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x30)) {
    case 0:
      goto switchD_00b7cc54_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1313c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1313c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x2c)) {
      case 0:
        puVar12 = *(undefined **)(param_1 + 4);
        ppuVar17 = *(uint ***)(param_1 + 8);
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1316c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1316c);
      case 3:
        goto LAB_00b7ceb0;
      }
    }
  }
  uVar1 = (int)ppuVar17 * 8;
  bVar23 = (uint **)0x1ffffffe < ppuVar17;
  bVar22 = ppuVar17 == (uint **)0x1fffffff;
  uVar19 = 0;
  *(undefined **)(param_1 + 0xc) = puVar12;
  if (ppuVar17 < (uint **)0x20000000) {
    bVar23 = 0x7ffffffb < uVar1;
    bVar22 = uVar1 == 0x7ffffffc;
  }
  *(uint ***)(param_1 + 0x10) = ppuVar17;
  if (bVar23 && !bVar22) {
LAB_00b7cca8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar19,uVar1);
  }
  if (uVar1 == 0) {
    iVar6 = 4;
    local_30 = (undefined4 ***)(uint **)0x0;
  }
  else {
    uVar19 = 4;
    iVar6 = FUN_01298504(uVar1,4);
    local_30 = (undefined4 ***)ppuVar17;
    if (iVar6 == 0) goto LAB_00b7cca8;
  }
  local_28 = (uint **)0x0;
  ppuVar16 = (uint **)0x0;
  local_2c = (undefined4 **)iVar6;
  if (ppuVar17 != (uint **)0x0) {
    ppuVar16 = (uint **)0x0;
    do {
      local_40 = *(undefined4 ****)(puVar12 + (int)ppuVar16 * 4);
      FUN_019ea5c8(&local_54,local_40,&DAT_01c244bc);
      if (local_54 == (uint **)0x1) {
        FUN_0121d2cc(&local_40,local_50,local_4c);
        goto LAB_00b7d3e0;
      }
      piVar11 = (int *)(iVar6 + (int)ppuVar16 * 8);
      *piVar11 = local_50;
      ppuVar16 = (uint **)((int)ppuVar16 + 1);
      piVar11[1] = local_4c;
    } while (ppuVar17 != ppuVar16);
    ppuVar16 = ppuVar17;
  }
  uVar19 = 0;
  *(undefined4 ****)(param_1 + 0x14) = local_30;
  *(undefined4 ***)(param_1 + 0x18) = local_2c;
  *(uint ***)(param_1 + 0x1c) = ppuVar16;
  ppuVar17 = *(uint ***)(param_1 + 0x1c);
  bVar23 = (uint **)0x1ffffffe < ppuVar17;
  bVar22 = ppuVar17 == (uint **)0x1fffffff;
  uVar1 = (int)ppuVar17 * 8;
  if (ppuVar17 < (uint **)0x20000000) {
    bVar23 = 0x7ffffffb < uVar1;
    bVar22 = uVar1 == 0x7ffffffc;
  }
  local_28 = ppuVar16;
  if (!bVar23 || bVar22) {
    iVar6 = *(int *)(param_1 + 0x18);
    if (uVar1 == 0) {
      iVar7 = 4;
      ppuVar16 = (uint **)0x0;
    }
    else {
      uVar19 = 4;
      iVar7 = FUN_01298504(uVar1,4);
      if (iVar7 == 0) goto LAB_00b7cdc8;
      ppuVar16 = ppuVar17;
    }
    local_4c = 0;
    ppuVar18 = (uint **)0x0;
    local_54 = ppuVar16;
    local_50 = iVar7;
    if (ppuVar17 != (uint **)0x0) {
      ppuVar18 = (uint **)0x0;
      do {
        piVar11 = (int *)thunk_FUN_01be5118(0x14);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *piVar11 = iVar6;
        *(undefined1 *)(piVar11 + 4) = 0;
        iVar6 = iVar6 + 8;
        piVar9 = (int *)(iVar7 + (int)ppuVar18 * 8);
        *piVar9 = (int)piVar11;
        ppuVar18 = (uint **)((int)ppuVar18 + 1);
        piVar9[1] = (int)&DAT_01c233f8;
      } while (ppuVar17 != ppuVar18);
      ppuVar18 = ppuVar17;
    }
    local_38 = (undefined4 *)((uint)ppuVar18 & 0x1fffffff);
    local_30 = (undefined4 ***)ppuVar16;
    local_2c = (undefined4 **)iVar7;
    local_28 = (uint **)local_38;
    if (((uint)ppuVar18 & 0x1fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: !ret.inner.is_empty()event open/boser/boser-unix/src/pcap.rs:75open/boser/boser-u"
                   ,0x27,&DAT_01c23230);
    }
    *(uint ***)(param_1 + 0x20) = ppuVar16;
    *(int *)(param_1 + 0x24) = iVar7;
    *(undefined4 **)(param_1 + 0x28) = local_38;
    local_40 = (undefined4 ***)ppuVar16;
    local_3c = (undefined **)iVar7;
LAB_00b7ceb0:
    local_88 = (undefined1 *)(param_1 + 0x2c);
    local_8c = param_1 + 4;
    puVar20 = *(undefined4 **)(param_1 + 0x24);
    ppuVar16 = *(uint ***)(param_1 + 0x28);
    ppuVar17 = (uint **)0xffffffff;
    iVar6 = (int)ppuVar16 << 3;
    puVar13 = puVar20;
    do {
      if (iVar6 == 0) goto LAB_00b7cf58;
      cVar4 = (**(code **)(puVar13[1] + 0xc))(*puVar13,param_2);
      iVar6 = iVar6 + -8;
      ppuVar17 = (uint **)((int)ppuVar17 + 1);
      puVar13 = puVar13 + 2;
    } while (cVar4 == '\x02');
    if (ppuVar16 <= ppuVar17) {
      FUN_006664cc(ppuVar17,ppuVar16);
LAB_00b7d3e0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0xb7d3e0);
      (*pcVar2)();
    }
    puVar13 = puVar20 + (int)ppuVar17 * 2;
    uVar19 = *puVar13;
    uVar21 = puVar20[((int)ppuVar16 - 1U) * 2];
    uVar10 = puVar13[1];
    uVar14 = (puVar20 + ((int)ppuVar16 - 1U) * 2)[1];
    *(uint *)(param_1 + 0x28) = (int)ppuVar16 - 1U;
    *puVar13 = uVar21;
    puVar13[1] = uVar14;
    FUN_01139b38(uVar19,uVar10);
    iVar6 = *(int *)(param_1 + 0x20);
    local_30 = *(undefined4 ****)(param_1 + 0x24);
    local_2c = *(undefined4 ***)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (iVar6 == -0x80000000) {
LAB_00b7cf58:
      ppuVar15 = (undefined4 **)0x0;
      uVar5 = 3;
      iVar6 = 1;
    }
    else {
      local_50 = CONCAT31(local_50._1_3_,cVar4);
      local_54 = ppuVar17;
      local_4c = iVar6;
      local_48 = (uint **)local_30;
      local_44 = (int)local_2c;
      FUN_00b7d620(param_1 + 0x20);
      FUN_00b7d620(&local_4c);
      if (*(uint ***)(param_1 + 0x10) <= ppuVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(ppuVar17,*(uint ***)(param_1 + 0x10),&DAT_01c1317c);
      }
      ppuVar15 = *(undefined4 ***)(*(int *)(param_1 + 0xc) + (int)ppuVar17 * 4);
      FUN_0121e2b4(param_1 + 0x14);
      uVar5 = 1;
      iVar6 = 0;
    }
    *local_88 = uVar5;
    uVar5 = 3;
    if (iVar6 == 0) {
      local_80 = ppuVar15;
      FUN_00b7d5e0(local_8c);
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4cc28 - 1 < 2 ||
           ((DAT_01d4cc28 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4cc20), cVar4 != '\0')))) &&
          (iVar7 = FUN_01aaa278(DAT_01d4cc20), iVar7 != 0)))) {
        if (*(int *)(DAT_01d4cc20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1314c);
        }
        local_3c = &local_70;
        local_4c = *(int *)(DAT_01d4cc20 + 0x24);
        local_48 = *(uint ***)(DAT_01d4cc20 + 0x28);
        local_74 = (undefined4 *)(DAT_01d4cc20 + 0x1c);
        local_54 = (uint **)*local_74;
        local_40 = &local_54;
        local_7c = (uint ***)&local_40;
        local_44 = 0;
        local_78 = (code *)0x1;
        local_6c = &local_5c;
        local_5c = &local_80;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_70 = &DAT_005ba248;
        local_58 = (undefined4 ****)FUN_00b7d670;
        local_50 = *(int *)(DAT_01d4cc20 + 0x20);
        FUN_01aaaecc(DAT_01d4cc20,&local_7c);
        iVar7 = DAT_01d4cc20;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_2c = *(undefined4 ***)(DAT_01d4cc20 + 0x14);
          local_28 = *(uint ***)(DAT_01d4cc20 + 0x18);
          local_30 = (undefined4 ***)0x3;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar13[3])(pcVar3,&local_30);
          if (iVar8 != 0) {
            FUN_01aaa328(iVar7,pcVar3,puVar13[4],&local_30,&local_7c);
          }
        }
        uVar5 = 1;
      }
      else {
        iVar7 = DAT_01d4cc20;
        uVar5 = 1;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_64 = *(undefined4 *)(DAT_01d4cc20 + 0x14);
          local_60 = *(undefined4 *)(DAT_01d4cc20 + 0x18);
          local_68 = 3;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar13[3])(pcVar3,&local_68);
          if (iVar8 != 0) {
            if (*(int *)(DAT_01d4cc20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1314c);
            }
            local_2c = &local_5c;
            local_4c = *(int *)(DAT_01d4cc20 + 0x24);
            local_48 = *(uint ***)(DAT_01d4cc20 + 0x28);
            local_30 = &local_54;
            local_40 = &local_30;
            local_58 = &local_7c;
            uVar5 = 1;
            local_7c = &local_80;
            local_44 = 0;
            local_3c = (undefined **)0x1;
            local_28 = (uint **)&DAT_01d2ea4c;
            local_5c = (undefined4 **)&DAT_005ba248;
            local_78 = FUN_00b7d670;
            local_54 = *(undefined4 ***)(DAT_01d4cc20 + 0x1c);
            local_50 = *(int *)(DAT_01d4cc20 + 0x20);
            local_38 = (undefined4 *)(DAT_01d4cc20 + 0x1c);
            FUN_01aaa328(iVar7,pcVar3,puVar13[4],&local_68,&local_40);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x30) = uVar5;
    *(undefined1 *)(param_1 + 0x34) = uVar5;
    return iVar6;
  }
LAB_00b7cdc8:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar19,uVar1);
}

