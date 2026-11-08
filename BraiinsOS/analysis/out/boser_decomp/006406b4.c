// FUN_006406b4 @ 006406b4 size=2672 calls_out=35 calls_in=0
// strings: wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest | wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest | wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest | wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest

void FUN_006406b4(undefined4 *param_1,int param_2,char *param_3)

{
  code *pcVar1;
  char **ppcVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 uVar14;
  bool bVar15;
  longlong lVar16;
  uint local_398;
  undefined1 auStack_388 [136];
  undefined4 local_300;
  undefined4 local_2fc;
  char **local_2f8;
  undefined2 *local_2f4;
  char *local_2f0;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  char *local_258;
  char *local_254;
  char *local_250;
  undefined8 local_24c;
  undefined4 uStack_244;
  int local_240;
  int local_23c;
  undefined4 local_238;
  char **local_234;
  char **local_230;
  undefined4 local_218;
  undefined1 local_214;
  char *local_208;
  uint uStack_204;
  char *pcStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined2 local_1a4;
  char *local_19c;
  undefined2 local_198;
  undefined1 auStack_196 [22];
  undefined1 auStack_180 [80];
  char *local_130;
  char *pcStack_12c;
  char *pcStack_128;
  char *local_e8;
  char *local_e4;
  char *local_e0;
  undefined2 local_dc;
  undefined1 auStack_da [22];
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  char *local_a0;
  char *local_9c;
  char *local_98;
  undefined4 local_94;
  char *local_58;
  uint local_54;
  char *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x98)) {
  case 0:
    *(undefined2 *)(param_2 + 0x99) = 0x101;
    *(undefined1 *)(param_2 + 0xa8) = 0;
    puVar5 = (undefined4 *)(param_2 + 0x90);
    *(int *)(param_2 + 0xa0) = param_2;
    *(undefined1 *)(param_2 + 0x9b) = 1;
    *(undefined4 **)(param_2 + 0xa4) = puVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22510);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22510);
  case 3:
    if (*(char *)(param_2 + 0xa8) != '\0') {
      if (*(char *)(param_2 + 0xa8) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20db4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20db4);
    }
    puVar5 = *(undefined4 **)(param_2 + 0xa4);
    break;
  case 4:
    if (*(char *)(param_2 + 0xa8) != '\0') {
      if (*(char *)(param_2 + 0xa8) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0c510);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0c510);
    }
    iVar11 = *(int *)(param_2 + 0xa0);
    goto LAB_006407b8;
  case 5:
    goto switchD_006406d8_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb5)) {
    case 0:
      uVar9 = *(undefined4 *)(param_2 + 0xac);
      pcVar7 = *(char **)(param_2 + 0xb0);
      uVar14 = *(undefined1 *)(param_2 + 0xb6);
      goto LAB_00640ce8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c02838);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c02838);
    case 3:
      uVar9 = *(undefined4 *)(param_2 + 0xa0);
    }
    goto LAB_00640d8c;
  }
  piVar8 = (int *)*puVar5;
  do {
    iVar11 = *piVar8;
    bVar15 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar15);
  *piVar8 = iVar11 + 1;
  if (iVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x641168);
    (*pcVar1)();
  }
  *(int **)(param_2 + 0x94) = piVar8;
  *(undefined1 *)(param_2 + 0xa8) = 0;
  *(int *)(param_2 + 0xa0) = param_2;
  *(int *)(param_2 + 0xa4) = param_2 + 0x90;
  iVar11 = param_2;
LAB_006407b8:
  puVar6 = (undefined1 *)(param_2 + 0xa8);
  local_23c = 0xffff;
  local_240 = 0;
  if (*(ushort *)(iVar11 + 0x68) != 0xffff) {
    local_240 = *(int *)(iVar11 + 0x5c);
    uVar10 = *(uint *)(iVar11 + 0x60);
    uVar12 = *(ushort *)(iVar11 + 0x68) + 1;
    if (uVar12 < uVar10) {
      if (*(char *)(local_240 + uVar12) < -0x40) {
LAB_006407fc:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(local_240,uVar10,uVar12,uVar10,&DAT_01d2e594);
      }
    }
    else if (uVar10 != uVar12) goto LAB_006407fc;
    local_240 = local_240 + uVar12;
    local_23c = uVar10 - uVar12;
  }
  local_a0 = (char *)0x0;
  local_238 = 0;
  local_24c._0_4_ = &DAT_80000001;
  local_230 = &local_58;
  if (local_240 == 0) {
    local_240 = 1;
    local_23c = 0;
  }
  local_234 = &local_a0;
  local_58 = (char *)0x80000000;
  local_258 = (char *)0x80000000;
  local_398 = 3;
  pcVar7 = param_3;
LAB_00640884:
  do {
    FUN_006bc488(&local_2f8,&local_24c);
    ppcVar2 = local_2f8;
    if (local_2f8 == (char **)&DAT_80000001) {
      FUN_00ad9a50(&local_258);
      if (local_398 == 3) {
        local_398 = 2;
      }
      goto LAB_00640a90;
    }
    if (-0x7fffffff < (int)(undefined1 *)local_24c) {
      FUN_019bb7e0((undefined1 *)local_24c,local_24c._4_4_);
    }
    pcVar4 = local_2f0;
    puVar3 = local_2f4;
    local_24c._0_4_ = local_2ec;
    local_24c._4_4_ = uStack_2e8;
    uStack_244 = uStack_2e4;
    if (ppcVar2 == (char **)&DAT_80000000) {
      pcVar13 = (char *)0x0;
      if ((int)local_2f0 < 0) {
LAB_006410fc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(pcVar13,pcVar7);
      }
      if (local_2f0 == (char *)0x0) {
        pcVar7 = (char *)0x1;
      }
      else {
        pcVar13 = (char *)0x1;
        pcVar7 = (char *)FUN_01298504(local_2f0,1);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = pcVar4;
          goto LAB_006410fc;
        }
        pcVar13 = pcVar4;
      }
      FUN_01bed4e2(pcVar7,puVar3,pcVar4);
      if (local_258 != (char *)0x80000000) {
        FUN_019bb7e0(local_258,local_254);
      }
      local_250 = pcVar4;
      local_258 = pcVar13;
      local_254 = pcVar7;
      if (pcVar4 == (char *)0xc) {
        iVar11 = thunk_FUN_01bed842(puVar3,
                                    "wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest"
                                    ,0xc);
        bVar15 = iVar11 != 0;
        goto LAB_00640978;
      }
    }
    else {
      FUN_006666fc(&local_e8,local_2f4,local_2f0);
      local_130 = local_e8;
      pcStack_12c = local_e4;
      pcStack_128 = local_e0;
      if (local_258 != (char *)0x80000000) {
        FUN_019bb7e0(local_258,local_254);
      }
      local_258 = local_130;
      local_254 = pcStack_12c;
      local_250 = pcStack_128;
      bVar15 = true;
      if (pcVar4 == (char *)0xc) {
        iVar11 = thunk_FUN_01bed842(puVar3,
                                    "wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest"
                                    ,0xc);
        bVar15 = false;
        if (iVar11 != 0) {
          bVar15 = true;
        }
      }
      FUN_019bb7e0(ppcVar2,puVar3);
LAB_00640978:
      if (!bVar15) {
        if (local_398 != 3) {
          local_e4 = (char *)0xc;
          local_2f4 = &DAT_0132b6a0;
          local_e8 = 
          "wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest"
          ;
          local_2f8 = &local_e8;
          lVar16 = FUN_006bc3f4(&DAT_005ab34f,&local_2f8);
          FUN_00ad9a50(&local_258);
          goto LAB_00640a64;
        }
        FUN_00ad9b78(&local_2f8,&local_258);
        lVar16 = CONCAT44(local_2f4,local_2f8);
        if (local_2f8 != (char **)0x0) break;
        local_398 = (uint)local_2f4 & 0xff;
        goto LAB_00640884;
      }
    }
    lVar16 = FUN_00ad9a80(&local_258);
  } while ((int)lVar16 == 0);
  FUN_00ad9a50(&local_258);
LAB_00640a64:
  FUN_0196bf0c(&local_58,&local_a0);
  if ((int)lVar16 == 0) {
    local_398 = (uint)((ulonglong)lVar16 >> 0x20) & 0xff;
LAB_00640a90:
    lVar16 = (ulonglong)local_398 << 0x20;
  }
  else {
    FUN_0196bf0c(&local_58,&local_a0);
  }
  uVar14 = (undefined1)((ulonglong)lVar16 >> 0x20);
  if (local_a0 == (char *)0x4 || local_a0 == (char *)0x2) {
    FUN_019bb7e0(local_98,local_94);
  }
  if ((int)lVar16 == 0) {
    FUN_00ad9810(&local_58);
    *puVar6 = 1;
LAB_00640b64:
    *(undefined1 *)(param_2 + 0xa0) = uVar14;
    *(undefined1 *)(param_2 + 0x9a) = 0;
    FUN_01bed4e2(auStack_388,param_2,0x88);
    local_300 = *(undefined4 *)(param_2 + 0x88);
    local_2fc = *(undefined4 *)(param_2 + 0x8c);
    *(undefined1 *)(param_2 + 0x99) = 0;
    FUN_00f1eb4c(&local_258,auStack_388,param_2 + 0x90);
    FUN_01bed4e2(&local_2f8,&local_258,0xa0);
    FUN_01bed4e2(puVar6,&local_2f8,0xa0);
switchD_006406d8_caseD_5:
    FUN_00d934d4(&local_258,param_2 + 0xa8);
    pcVar7 = local_250;
    pcVar4 = local_254;
    if (local_258 == (char *)0x1) {
      *param_1 = 3;
      param_1[1] = 0;
      uVar14 = 5;
      goto LAB_00641068;
    }
    if (*(char *)(param_2 + 0x140) == '\x03' || *(char *)(param_2 + 0x140) == '\0') {
      FUN_0096a6b0(param_2 + 0xa8);
    }
    if (pcVar4 != (char *)0x0) {
      FUN_0070821c(auStack_180,pcVar4,pcVar7);
      goto LAB_00640c34;
    }
    uVar14 = *(undefined1 *)(param_2 + 0xa0);
    uVar9 = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_2 + 0xac) = uVar9;
    *(undefined1 *)(param_2 + 0x9b) = 0;
    *(char **)(param_2 + 0xb0) = pcVar7;
    *(undefined1 *)(param_2 + 0xb6) = uVar14;
    *(undefined1 *)(param_2 + 0xb5) = 0;
LAB_00640ce8:
    *(undefined4 *)(param_2 + 0xa8) = uVar9;
    *(undefined1 *)(param_2 + 0xb4) = 0;
    FUN_0160aaa4(&local_258,0);
    local_218 = 0;
    local_214 = uVar14;
    piVar8 = (int *)FUN_00a5284c(&local_218,pcVar7);
    if (piVar8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a934a0();
      }
    }
    FUN_01bed4e2(&local_130,&local_258,0x48);
    *(undefined1 *)(param_2 + 0xb4) = 0;
    uVar9 = FUN_00e2cc54(*(int *)(param_2 + 0xa8) + 8,&local_130);
    *(undefined4 *)(param_2 + 0xa0) = uVar9;
    *(undefined **)(param_2 + 0xa4) = &DAT_01c16f44;
LAB_00640d8c:
    puVar6 = (undefined1 *)(param_2 + 0xb5);
    (**(code **)(*(int *)(param_2 + 0xa4) + 0xc))(&local_258,uVar9,param_3);
    pcVar4 = local_254;
    pcVar7 = local_258;
    if (local_258 == (char *)0x4 && local_254 == (char *)0x0) {
      *puVar6 = 3;
LAB_00640fcc:
      *param_1 = 3;
      param_1[1] = 0;
      uVar14 = 6;
      goto LAB_00641068;
    }
    FUN_01bed4e2(&local_2f8,&local_250,0x48);
    local_58 = local_208;
    local_54 = uStack_204;
    local_50 = pcStack_200;
    uStack_4c = uStack_1fc;
    uStack_48 = uStack_1f8;
    uStack_44 = uStack_1f4;
    FUN_01139b38(*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4));
    if (pcVar7 == (char *)0x3 && pcVar4 == (char *)0x0) {
      FUN_01bed4e2(&local_a0,&local_2f8,0x48);
      pcVar7 = local_a0;
      if (local_a0 == (char *)0x3 && local_9c == (char *)0x0) goto LAB_00640f40;
      local_c4 = local_2d4;
      uStack_c0 = uStack_2d0;
      uStack_bc = uStack_2cc;
      uStack_b8 = uStack_2c8;
      local_b4 = local_2c4;
      uStack_b0 = uStack_2c0;
      uStack_ac = uStack_2bc;
      local_a8 = uStack_2b8;
      uStack_a4 = uStack_2b4;
      FUN_01bed4e2(auStack_da,(int)&local_2ec + 2,0x16);
      local_e4 = local_9c;
      local_e8 = pcVar7;
      local_dc = (undefined2)local_94;
      local_e0 = local_98;
      FUN_0142e6dc(&local_e8);
      FUN_0178e884(local_a8);
      *(undefined1 *)(param_2 + 0xb4) = 0;
      piVar8 = *(int **)(param_2 + 0xa8);
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01180cc4(*(undefined4 *)(param_2 + 0xa8));
      }
      local_98 = (char *)0x80000000;
      local_1b8 = local_40;
      uStack_1b4 = uStack_3c;
      uStack_1b0 = uStack_38;
      uStack_1ac = uStack_34;
      uStack_1a8 = uStack_30;
      local_1a4 = local_2c;
      *puVar6 = 1;
      local_94._0_2_ = 0xcc;
    }
    else {
      local_258 = pcVar7;
      local_254 = pcVar4;
      FUN_01bed4e2(&local_250,&local_2f8,0x48);
      local_208 = local_58;
      uStack_204 = local_54;
      pcStack_200 = local_50;
      uStack_1fc = uStack_4c;
      uStack_1f8 = uStack_48;
      uStack_1f4 = uStack_44;
      FUN_00a40ce8(&local_98,&local_258);
LAB_00640f40:
      FUN_01bed4e2(&local_40,(int)&local_94 + 2,0x16);
      *(undefined1 *)(param_2 + 0xb4) = 0;
      piVar8 = *(int **)(param_2 + 0xa8);
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01180cc4(*(undefined4 *)(param_2 + 0xa8));
      }
      local_1b8 = local_40;
      uStack_1b4 = uStack_3c;
      uStack_1b0 = uStack_38;
      uStack_1ac = uStack_34;
      uStack_1a8 = uStack_30;
      local_1a4 = local_2c;
      *puVar6 = 1;
      if (local_98 == (char *)0x80000001) goto LAB_00640fcc;
    }
    local_19c = local_98;
    local_198 = (undefined2)local_94;
    FUN_01bed4e2(auStack_196,&local_1b8,0x16);
    FUN_005f3950((undefined4 *)(param_2 + 0xa0));
    FUN_00e7ac24(auStack_180,&local_19c);
    piVar8 = *(int **)(param_2 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar8;
      bVar15 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar15);
    *piVar8 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180cc4(*(undefined4 *)(param_2 + 0x90));
    }
  }
  else {
    if (local_58 == (char *)0x80000000) {
      uVar10 = 0;
      uVar12 = 4;
      local_258 = (char *)0x0;
      local_250 = (char *)0x0;
    }
    else {
      uVar10 = local_54 >> 8;
      uVar12 = local_54;
      local_258 = local_58;
      local_250 = local_50;
    }
    local_254 = (char *)CONCAT31((int3)uVar10,(char)uVar12);
    local_24c = lVar16;
    iVar11 = FUN_00aba818(&local_258);
    *puVar6 = 1;
    if (iVar11 == 0) {
      uVar14 = SUB41(&DAT_01c0fff8,0);
      goto LAB_00640b64;
    }
    FUN_00707bac(auStack_180,iVar11,&DAT_01c0fff8);
LAB_00640c34:
    piVar8 = *(int **)(param_2 + 0x94);
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar8;
      bVar15 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar15);
    *piVar8 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180cc4(*(undefined4 *)(param_2 + 0x94));
    }
    if (*(char *)(param_2 + 0x9a) != '\0') {
      FUN_0096a6b0(param_2);
    }
    piVar8 = *(int **)(param_2 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar8;
      bVar15 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar15);
    *piVar8 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180cc4(*(undefined4 *)(param_2 + 0x90));
    }
    if (*(char *)(param_2 + 0x99) == '\x01') {
      FUN_00b19860(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
    }
  }
  FUN_01bed4e2(param_1,auStack_180,0x50);
  uVar14 = 1;
LAB_00641068:
  *(undefined1 *)(param_2 + 0x98) = uVar14;
  return;
}

