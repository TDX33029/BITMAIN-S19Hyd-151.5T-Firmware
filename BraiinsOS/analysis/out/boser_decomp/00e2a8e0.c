// FUN_00e2a8e0 @ 00e2a8e0 size=4184 calls_out=39 calls_in=1
// strings: save_action | enable_immersion_modeDisableHashboardsRequestGetSupportArchiveRequestSetHashrateTargetRequest | temperature control not supported | immersion or hydro mode cannot be disabled | the currently active mode is unsupported | BUG: request parameters cell was already initialized.

void FUN_00e2a8e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint3 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  char **ppcVar13;
  int iVar14;
  char **ppcVar15;
  char **ppcVar16;
  char **ppcVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 ****ppppuVar20;
  uint uVar21;
  int iVar22;
  byte bVar23;
  int iVar24;
  undefined4 ****ppppuVar25;
  byte bVar26;
  int iVar27;
  char **ppcVar28;
  int iVar29;
  undefined1 uVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 local_2d0;
  undefined4 ****local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a8 [72];
  int local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined1 auStack_250 [68];
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  int local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined3 local_1e0;
  undefined1 uStack_1dd;
  undefined3 uStack_1dc;
  undefined4 ****local_1d8;
  char **local_1d4;
  undefined4 ****local_1d0;
  char **local_1cc;
  undefined4 ****local_1c8;
  undefined4 ****local_1c4;
  undefined4 ****local_1c0;
  undefined4 ****local_1bc;
  undefined4 ****local_1b8;
  undefined4 ****local_1b4;
  char **local_1b0;
  undefined4 local_1ac;
  undefined4 ****local_1a8;
  undefined4 local_1a4;
  char **local_1a0;
  undefined4 *local_19c;
  undefined4 local_198;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [72];
  undefined3 local_f0;
  undefined1 uStack_ed;
  undefined3 uStack_ec;
  undefined4 ****local_e8;
  char **local_e4;
  undefined4 ****local_e0;
  char **local_dc;
  undefined4 ****local_d8;
  undefined4 ****local_d4;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 ****local_c0;
  undefined4 ****ppppuStack_bc;
  char **ppcStack_b8;
  undefined4 local_b0;
  undefined4 ****local_ac;
  char **local_a8;
  char *local_a0;
  undefined4 local_9c;
  undefined4 ****local_98;
  char **local_94;
  undefined4 *local_90;
  undefined4 uStack_8c;
  undefined4 ****local_80;
  char **local_7c;
  undefined4 *local_78;
  undefined1 auStack_68 [12];
  int local_5c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  char **local_40;
  undefined4 *local_3c;
  undefined4 ****local_38;
  undefined4 uStack_34;
  char **ppcStack_30;
  undefined4 *puStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x120)) {
  case 0:
    *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined2 *)(param_2 + 0x123) = 0x100;
    FUN_01bed4e2(param_2 + 0x50,param_2,0x50);
    piVar11 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x98));
    if (piVar11 != (int *)0x0) {
      uVar2 = *(undefined1 *)(param_2 + 0x94);
      local_38 = (undefined4 ****)&DAT_80000000;
      local_3c = (undefined4 *)0x0;
      local_44 = (undefined4 ****)0x0;
      local_48 = (undefined4 ****)0x0;
      ppcVar13 = (char **)FUN_014a7b90(&local_48,"save_action",0xb,*(undefined4 *)(param_2 + 0x90));
      if (ppcVar13 == (char **)0x0) {
        ppcVar13 = (char **)FUN_014a7e18(&local_48,
                                         "enable_immersion_modeDisableHashboardsRequestGetSupportArchiveRequestSetHashrateTargetRequest"
                                         ,0x15,uVar2);
        if (ppcVar13 != (char **)0x0) goto LAB_00e2a9e0;
        local_1b8 = local_48;
        local_1b4 = local_44;
        local_1b0 = local_40;
        local_1ac = local_3c;
        local_1a8 = local_38;
        local_1a4 = uStack_34;
        local_1a0 = ppcStack_30;
        local_19c = puStack_2c;
        FUN_0196ac88(&local_80);
        uVar2 = local_80._0_1_;
        uVar21 = (uint)local_80 & 0xff;
        if (uVar21 != 6) {
          FUN_01bed4e2((uint)&local_98 | 1,(uint)&local_80 | 1,0x17);
          local_98 = (undefined4 ****)CONCAT31(local_98._1_3_,uVar2);
          if (uVar21 == 5) {
            local_1a4 = 0;
            local_1a0 = local_94;
            if (local_94 == (char **)0x0) {
              uStack_8c = 0;
            }
            local_1b0 = local_94;
            local_1b8 = (undefined4 ****)(uint)(local_94 != (char **)0x0);
            local_19c = local_90;
            local_1ac = local_90;
            local_1b4 = (undefined4 ****)0x0;
            local_1a8 = local_1b8;
            local_198 = uStack_8c;
            FUN_00fea674(auStack_68,&local_1b8);
            if (local_5c != 0) {
              FUN_0067b1ac(&local_1b8,auStack_68);
              local_c0 = local_1b8;
              ppppuStack_bc = local_1b4;
              ppcStack_b8 = local_1b0;
              cVar3 = (char)local_1ac;
              local_c4 = local_1ac._1_2_;
              local_c2 = local_1ac._3_1_;
              FUN_00e0febc(&local_98);
              if (cVar3 != '\x02') {
                local_1b8 = local_c0;
                local_1b4 = ppppuStack_bc;
                local_1b0 = ppcStack_b8;
                local_1ac = (undefined4 *)CONCAT31(CONCAT12(local_c2,local_c4),cVar3);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar11 + 0x18) != 0) {
                  FUN_00b065ec(*piVar11 + 8,&local_1b8);
                }
                if (((uint)local_1ac & 0xff) != 2) {
                  local_48 = local_1b8;
                  local_44 = local_1b4;
                  local_40 = local_1b0;
                  local_3c = local_1ac;
                  FUN_019cf348(&local_48);
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0')))
                       ) && (iVar12 = FUN_01aaa278(DAT_01d4c480), iVar12 != 0)))) {
                    local_78 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e2b958:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_1b0 = *(char ***)(DAT_01d4c480 + 0x24);
                    local_1ac = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_44 = &local_98;
                    local_48 = &local_1b8;
                    local_7c = (char **)&DAT_00000001;
                    local_1a8 = (undefined4 ****)0x0;
                    local_40 = (char **)&DAT_01d2ea4c;
                    local_94 = (char **)&DAT_0000006b;
                    local_98 = (undefined4 ****)0x3fe987;
                    local_1b8 = (undefined4 ****)*local_78;
                    local_1b4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    local_80 = &local_48;
                    FUN_00e0ff40(&local_80);
                  }
                  else {
                    iVar12 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_ac = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                      local_a8 = *(char ***)(DAT_01d4c480 + 0x18);
                      local_b0 = (undefined4 ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar6 = DAT_01d4edc8;
                      pcVar7 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar6 = &DAT_01cfc5e0;
                        pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar5 = (*(code *)puVar6[3])(pcVar7);
                      if (iVar5 != 0) {
                        local_90 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                        if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                        goto LAB_00e2b958;
                        local_7c = &local_a0;
                        local_80 = &local_1b8;
                        local_1b0 = *(char ***)(DAT_01d4c480 + 0x24);
                        local_1ac = *(undefined4 **)(DAT_01d4c480 + 0x28);
                        local_1a8 = (undefined4 ****)0x0;
                        local_94 = (char **)&DAT_00000001;
                        local_78 = (undefined4 *)&DAT_01d2ea4c;
                        local_9c = 0x6b;
                        local_a0 = "BUG: request parameters cell was already initialized.";
                        local_48 = local_b0;
                        local_44 = local_ac;
                        local_40 = local_a8;
                        local_1b8 = (undefined4 ****)*local_90;
                        local_1b4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                        local_98 = &local_80;
                        FUN_01aaa328(iVar12,pcVar7,puVar6[4],&local_48,&local_98);
                      }
                    }
                  }
                }
              }
              goto LAB_00e2a9fc;
            }
            FUN_0165a1f4(auStack_68);
          }
          FUN_00e0febc(&local_98);
          goto LAB_00e2a9fc;
        }
        ppcVar13 = local_7c;
      }
      else {
LAB_00e2a9e0:
        local_80 = (undefined4 ****)CONCAT31(local_80._1_3_,6);
        local_7c = ppcVar13;
        FUN_01276d58(&local_48);
      }
      FUN_00e0fe5c(ppcVar13);
    }
LAB_00e2a9fc:
    *(undefined1 *)(param_2 + 0x124) = 0;
    FUN_01bed4e2(&local_1b8,param_2 + 0x50,0x50);
    uVar2 = local_174;
    uVar9 = local_178;
    FUN_0142e6dc(&local_1b8);
    FUN_0178e884(local_170);
    *(undefined1 *)(param_2 + 0xa4) = uVar2;
    *(undefined4 *)(param_2 + 0xa0) = uVar9;
    FUN_00a21428(&local_1b8,uVar9);
    ppcVar13 = local_1b0;
    ppppuVar25 = local_1b4;
    local_2c8 = local_1b8;
    local_2d0 = local_1b0._0_1_;
    if (local_1b8 == (undefined4 ****)&DAT_00000003 && local_1b4 == (undefined4 ****)0x0) {
      *(undefined1 *)(param_2 + 0x121) = local_1b0._0_1_;
      iVar12 = **(int **)(param_2 + 0xfc);
      *(undefined1 *)(param_2 + 0x134) = 0;
      iVar12 = iVar12 + 8;
      *(int *)(param_2 + 0x128) = iVar12;
LAB_00e2aac0:
      uVar9 = FUN_00b8a1bc(*(int *)(iVar12 + 0x34) + 8);
      *(undefined4 *)(param_2 + 300) = uVar9;
      puVar8 = &DAT_01c13d9c;
      *(undefined **)(param_2 + 0x130) = &DAT_01c13d9c;
      goto LAB_00e2aae8;
    }
    FUN_01bed4e2(auStack_2a8,&local_1ac,0x44);
    local_2c0 = local_168;
    uStack_2bc = uStack_164;
    uStack_2b8 = uStack_160;
    uStack_2b4 = uStack_15c;
    uStack_2b0 = uStack_158;
    uStack_2ac = uStack_154;
    uVar21 = (uint)ppcVar13 >> 8;
    goto LAB_00e2b1b8;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16f14);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16f14);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x134)) {
    case 0:
      iVar12 = *(int *)(param_2 + 0x128);
      goto LAB_00e2aac0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar9 = *(undefined4 *)(param_2 + 300);
      puVar8 = *(undefined **)(param_2 + 0x130);
    }
LAB_00e2aae8:
    iVar12 = (**(code **)(puVar8 + 0xc))(uVar9,param_3);
    if (iVar12 == 0) {
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x134) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e2b534;
    }
    FUN_01139b38(*(undefined4 *)(param_2 + 300),*(undefined4 *)(param_2 + 0x130));
    *(undefined1 *)(param_2 + 0x134) = 1;
    *(int *)(param_2 + 0x100) = iVar12;
    iVar12 = **(int **)(param_2 + 0xfc);
    *(undefined1 *)(param_2 + 0x15c) = 0;
    *(int *)(param_2 + 0x128) = iVar12 + 0x44;
    break;
  case 5:
    goto switchD_00e2a910_caseD_5;
  case 6:
    goto switchD_00e2a910_caseD_6;
  case 7:
    goto switchD_00e2a910_caseD_7;
  }
  uVar32 = FUN_00df39fc(param_2 + 0x128,param_3);
  iVar12 = (int)((ulonglong)uVar32 >> 0x20);
  if ((int)uVar32 == 0) {
    uVar2 = 4;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e2b534;
  }
  *(undefined8 *)(param_2 + 0xa8) = uVar32;
  if (*(char *)(param_2 + 0x15c) == '\x03') {
    cVar3 = *(char *)(param_2 + 0x158);
    bVar31 = cVar3 == '\x03';
    if (bVar31) {
      cVar3 = *(char *)(param_2 + 0x154);
    }
    if (bVar31 && cVar3 == '\x03') {
      FUN_0193c3cc(param_2 + 0x134);
      iVar12 = *(int *)(param_2 + 0xac);
    }
  }
  *(undefined1 *)(param_2 + 0x15c) = 0;
  *(int *)(param_2 + 0x128) = iVar12 + 0x3c;
switchD_00e2a910_caseD_5:
  FUN_00bd2a8c(&local_260,param_2 + 0x128,param_3);
  if (local_260 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 5;
    goto LAB_00e2b534;
  }
  *(int *)(param_2 + 0x104) = local_260;
  *(undefined4 *)(param_2 + 0x108) = uStack_25c;
  *(undefined4 *)(param_2 + 0x10c) = uStack_258;
  if (*(char *)(param_2 + 0x15c) == '\x03') {
    cVar3 = *(char *)(param_2 + 0x158);
    bVar31 = cVar3 == '\x03';
    if (bVar31) {
      cVar3 = *(char *)(param_2 + 0x154);
    }
    if (bVar31 && cVar3 == '\x03') {
      FUN_0193c3cc(param_2 + 0x134);
    }
  }
  piVar11 = *(int **)(param_2 + 0x10c);
  uVar30 = 4;
  iVar29 = 0;
  iVar5 = 0;
  iVar10 = 0;
  iVar14 = 0;
  iVar12 = 0;
  uVar2 = 4;
  if (*piVar11 != 2 || piVar11[1] != 0) {
    uVar2 = (undefined1)piVar11[0x10];
  }
  *(undefined1 *)(param_2 + 0x122) = uVar2;
  iVar22 = *piVar11;
  iVar24 = piVar11[1];
  iVar4 = 0;
  iVar18 = 0;
  iVar27 = 0;
  if (iVar22 != 2 || iVar24 != 0) {
    uVar30 = (undefined1)piVar11[0x10];
    uVar32 = *(undefined8 *)(piVar11 + 2);
    iVar29 = piVar11[4];
    iVar5 = piVar11[5];
    iVar10 = piVar11[8];
    iVar14 = piVar11[9];
    iVar12 = piVar11[0xd];
    iVar4 = piVar11[0xc];
    uVar33 = *(undefined8 *)(piVar11 + 10);
    uVar34 = *(undefined8 *)(piVar11 + 0xe);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(piVar11 + 6);
    *(undefined8 *)(param_2 + 0xd8) = uVar33;
    *(undefined8 *)(param_2 + 0xe8) = uVar34;
    *(undefined8 *)(param_2 + 0xb8) = uVar32;
    iVar18 = iVar22;
    iVar27 = iVar24;
  }
  *(undefined1 *)(param_2 + 0xf0) = uVar30;
  *(int *)(param_2 + 0xb0) = iVar18;
  *(int *)(param_2 + 0xb4) = iVar27;
  *(int *)(param_2 + 0xc0) = iVar29;
  *(int *)(param_2 + 0xc4) = iVar5;
  *(int *)(param_2 + 0xd0) = iVar10;
  *(int *)(param_2 + 0xe0) = iVar4;
  *(int *)(param_2 + 0xe4) = iVar12;
  *(int *)(param_2 + 0xd4) = iVar14;
  ppcVar13 = (char **)(*(int *)(param_2 + 0x100) + 200);
  if ((*ppcVar13 == (char *)0x2 && *(int *)(*(int *)(param_2 + 0x100) + 0xcc) == 0) &&
     (FUN_01a71aac(&local_1b8,9,"temperature control not supported",0x21), ppcVar13 = local_1b0,
     ppppuVar25 = local_1b4,
     local_1b8 != (undefined4 ****)&DAT_00000003 || local_1b4 != (undefined4 ****)0x0)) {
    local_2c8 = local_1b8;
    FUN_01bed4e2(auStack_250,&local_1ac,0x5c);
    FUN_01bed4e2(auStack_2a8,auStack_250,0x44);
    local_2c0 = local_20c;
    uStack_2bc = uStack_208;
    uStack_2b8 = uStack_204;
    uStack_2b4 = uStack_200;
    uStack_2b0 = uStack_1fc;
    uStack_2ac = uStack_1f8;
    uVar21 = (uint)ppcVar13 >> 8;
    local_2d0 = SUB41(ppcVar13,0);
LAB_00e2b168:
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x104),*(undefined4 *)(param_2 + 0x108));
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xa8),1);
    piVar11 = *(int **)(param_2 + 0x100);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar11;
      bVar31 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar31);
    *piVar11 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 0x100));
    }
LAB_00e2b1b8:
    *(undefined1 *)(param_2 + 0x124) = 0;
    if (*(char *)(param_2 + 0x123) != '\0') {
      FUN_00e2bbd4(param_2);
    }
  }
  else {
    *(char ***)(param_2 + 0x110) = ppcVar13;
    *(undefined1 *)(param_2 + 0x15c) = 0;
    *(int *)(param_2 + 0x128) = *(int *)(param_2 + 0xac) + 0x40;
switchD_00e2a910_caseD_6:
    FUN_0084fe8c(&local_1f0,param_2 + 0x128,param_3);
    if (local_1f0 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 6;
      goto LAB_00e2b534;
    }
    *(int *)(param_2 + 0x114) = local_1f0;
    *(undefined4 *)(param_2 + 0x118) = uStack_1ec;
    *(undefined4 *)(param_2 + 0x11c) = uStack_1e8;
    if (*(char *)(param_2 + 0x15c) == '\x03') {
      cVar3 = *(char *)(param_2 + 0x158);
      bVar31 = cVar3 == '\x03';
      if (bVar31) {
        cVar3 = *(char *)(param_2 + 0x154);
      }
      if (bVar31 && cVar3 == '\x03') {
        FUN_0193c3cc(param_2 + 0x134);
      }
    }
    bVar23 = *(byte *)(*(int *)(param_2 + 0x110) + 0xe4);
    if (*(char *)(param_2 + 0xa4) != '\x01') {
      if (bVar23 < 2) {
        bVar26 = *(byte *)(param_2 + 0x122);
        bVar23 = bVar26;
        if (1 < bVar26) {
          bVar23 = 4;
        }
        goto LAB_00e2adc4;
      }
      uVar19 = 0x28;
      pcVar7 = "the currently active mode is unsupported";
      uVar9 = 0xd;
      if (bVar23 == *(byte *)(param_2 + 0x122)) {
        uVar9 = 9;
        uVar19 = 0x2a;
        pcVar7 = "immersion or hydro mode cannot be disabled";
      }
      FUN_01a71aac(&local_1b8,uVar9,pcVar7,uVar19);
      ppcVar13 = local_1b0;
      ppppuVar25 = local_1b4;
      local_2c8 = local_1b8;
      FUN_01bed4e2(auStack_2a8,&local_1ac,0x44);
      local_2c0 = local_168;
      uStack_2bc = uStack_164;
      uStack_2b8 = uStack_160;
      uStack_2b4 = uStack_15c;
      uStack_2b0 = uStack_158;
      uStack_2ac = uStack_154;
      uVar1 = (uint3)((uint)ppcVar13 >> 8);
LAB_00e2b15c:
      local_2d0 = SUB41(ppcVar13,0);
      uVar21 = (uint)uVar1;
      FUN_019f8c54(*(undefined4 *)(param_2 + 0x114),*(undefined4 *)(param_2 + 0x118));
      goto LAB_00e2b168;
    }
    bVar26 = *(byte *)(param_2 + 0x122);
    if (bVar23 != 3) {
      bVar23 = 2;
    }
LAB_00e2adc4:
    *(byte *)(param_2 + 0xf0) = bVar23;
    FUN_01bed4e2((int *)(param_2 + 0x180),(int *)(param_2 + 0xb0),0x48);
    *(int **)(param_2 + 0x1c8) = (int *)(param_2 + 0x114);
    *(int *)(param_2 + 0x1cc) = param_2 + 0x104;
    if (*(char *)(param_2 + 0x121) == '\0') {
      if (bVar26 != bVar23) {
        local_1c0 = *(undefined4 *****)(param_2 + 0xb8);
        local_1bc = *(undefined4 *****)(param_2 + 0xbc);
        local_1d0 = *(undefined4 *****)(param_2 + 0xd8);
        local_1cc = *(char ***)(param_2 + 0xdc);
        iVar14 = *(int *)(param_2 + 0xe0);
        bVar23 = *(byte *)(param_2 + 0x1c0);
        iVar12 = *(int *)(param_2 + 0xc0);
        bVar31 = 1 < bVar23;
        ppcVar13 = *(char ***)(param_2 + 0xc4);
        local_1c8 = *(undefined4 *****)(param_2 + 200);
        local_1c4 = *(undefined4 *****)(param_2 + 0xcc);
        iVar5 = *(int *)(param_2 + 0xd0);
        puVar6 = *(undefined4 **)(param_2 + 0xf1);
        if (bVar31) {
          puVar6 = *(undefined4 **)(param_2 + 0x11c);
        }
        iVar10 = *(int *)(param_2 + 0x180);
        iVar29 = *(int *)(param_2 + 0x184);
        uVar9 = *(undefined4 *)(param_2 + 0xf4);
        iVar18 = *(int *)(param_2 + 0xd4);
        ppcVar15 = *(char ***)(param_2 + 0xe4);
        local_1e0 = SUB43(*(undefined4 **)(param_2 + 0xf1),0);
        uStack_1dd = (undefined1)uVar9;
        uStack_1dc = (undefined3)((uint)uVar9 >> 8);
        if (bVar31) {
          uVar9 = 2;
        }
        local_1d8 = *(undefined4 *****)(param_2 + 0xe8);
        local_1d4 = *(char ***)(param_2 + 0xec);
        if (bVar31) {
          *puVar6 = uVar9;
        }
        ppcVar16 = ppcVar15;
        if (iVar10 == 2 && iVar29 == 0) {
LAB_00e2b088:
          iVar10 = 2;
          iVar29 = 0;
          ppcVar13 = ppcVar16;
          ppcVar15 = local_1d4;
        }
        else {
          if (bVar23 == 4 && (iVar10 == 0 && iVar29 == 0)) {
            bVar31 = iVar12 == 0 && ppcVar13 == (char **)0x0;
            if (iVar12 == 0 && ppcVar13 == (char **)0x0) {
              bVar31 = iVar5 == 0 && iVar18 == 0;
            }
            if ((bVar31) && (ppcVar16 = ppcVar13, iVar14 == 0 && ppcVar15 == (char **)0x0))
            goto LAB_00e2b088;
          }
          local_b0 = (undefined4 ****)CONCAT13(uStack_1dd,local_1e0);
          local_ac = (undefined4 ****)CONCAT13(local_ac._3_1_,uStack_1dc);
          local_1b8 = local_1c0;
          local_1b4 = local_1bc;
          local_98 = local_1d8;
          local_94 = local_1d4;
          local_80 = local_1d0;
          local_7c = local_1cc;
          local_48 = local_1c8;
          local_44 = local_1c4;
        }
        piVar11 = *(int **)(param_2 + 0x10c);
        *piVar11 = iVar10;
        piVar11[1] = iVar29;
        piVar11[5] = (int)ppcVar13;
        piVar11[4] = iVar12;
        piVar11[3] = (int)local_1b4;
        piVar11[2] = (int)local_1b8;
        piVar11[9] = iVar18;
        piVar11[8] = iVar5;
        piVar11[7] = (int)local_44;
        piVar11[6] = (int)local_48;
        piVar11[0xd] = (int)ppcVar15;
        piVar11[0xc] = iVar14;
        *(undefined4 *****)((int)piVar11 + 0x41) = local_b0;
        piVar11[0xb] = (int)local_7c;
        piVar11[10] = (int)local_80;
        piVar11[0xf] = (int)local_94;
        piVar11[0xe] = (int)local_98;
        *(byte *)(piVar11 + 0x10) = bVar23;
        piVar11[0x11] = CONCAT31(local_ac._0_3_,local_b0._3_1_);
        FUN_019e0044(*(int *)(**(int **)(param_2 + 0xfc) + 0x54) + 8);
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x17c) = 0;
switchD_00e2a910_caseD_7:
      FUN_00e100c8(&local_1b8,param_2 + 0x128,param_3);
      ppcVar13 = local_1b0;
      ppppuVar25 = local_1b4;
      ppppuVar20 = local_1b8;
      if (local_1b8 == (undefined4 ****)&SUB_00000004 && local_1b4 == (undefined4 ****)0x0) {
        *param_1 = 4;
        param_1[1] = 0;
        uVar2 = 7;
        goto LAB_00e2b534;
      }
      local_2c8 = local_1b8;
      FUN_01bed4e2(auStack_138,&local_1ac,0x44);
      local_150 = local_168;
      uStack_14c = uStack_164;
      uStack_148 = uStack_160;
      uStack_144 = uStack_15c;
      uStack_140 = uStack_158;
      uStack_13c = uStack_154;
      if (*(char *)(param_2 + 0x17c) == '\x03') {
        FUN_00e1003c(param_2 + 0x128);
      }
      if (ppppuVar20 != (undefined4 ****)&DAT_00000003 || ppppuVar25 != (undefined4 ****)0x0) {
        uVar1 = (uint3)((uint)ppcVar13 >> 8);
        FUN_01bed4e2(auStack_2a8,auStack_138,0x44);
        local_2c0 = local_150;
        uStack_2bc = uStack_14c;
        uStack_2b8 = uStack_148;
        uStack_2b4 = uStack_144;
        uStack_2b0 = uStack_140;
        uStack_2ac = uStack_13c;
        goto LAB_00e2b15c;
      }
      local_e8 = *(undefined4 *****)(param_2 + 0x1b8);
      bVar23 = *(byte *)(param_2 + 0x1c0);
      local_e0 = *(undefined4 *****)(param_2 + 0x1a8);
      bVar31 = 1 < bVar23;
      iVar12 = *(int *)(param_2 + 400);
      ppppuVar25 = local_e0;
      if (bVar31) {
        ppppuVar25 = *(undefined4 *****)(param_2 + 0x1c8);
      }
      ppcVar13 = *(char ***)(param_2 + 0x194);
      iVar5 = *(int *)(param_2 + 0x184);
      local_d0 = *(undefined4 *****)(param_2 + 0x188);
      local_cc = *(undefined4 *****)(param_2 + 0x18c);
      iVar14 = *(int *)(param_2 + 0x1a0);
      ppcVar15 = *(char ***)(param_2 + 0x1b0);
      uVar9 = *(undefined4 *)(param_2 + 0x1c1);
      if (bVar31) {
        ppppuVar25 = (undefined4 ****)ppppuVar25[2];
      }
      local_d4 = *(undefined4 *****)(param_2 + 0x19c);
      iVar29 = *(int *)(param_2 + 0x180);
      ppcVar28 = *(char ***)(param_2 + 0x1a4);
      ppcVar16 = *(char ***)(param_2 + 0x1b4);
      iVar10 = *(int *)(param_2 + 0x1cc);
      ppppuVar20 = local_d4;
      if (bVar31) {
        ppppuVar20 = (undefined4 ****)0x2;
      }
      local_d8 = *(undefined4 *****)(param_2 + 0x198);
      local_dc = *(char ***)(param_2 + 0x1ac);
      local_e4 = *(char ***)(param_2 + 0x1bc);
      iVar18 = *(int *)(param_2 + 0x1c4);
      if (bVar31) {
        *ppppuVar25 = ppppuVar20;
      }
      local_f0 = (undefined3)uVar9;
      uStack_ed = (undefined1)iVar18;
      uStack_ec = (undefined3)((uint)iVar18 >> 8);
      ppcVar17 = ppcVar16;
      if (iVar29 == 2 && iVar5 == 0) {
LAB_00e2af50:
        iVar29 = 2;
        iVar5 = 0;
        ppcVar13 = ppcVar17;
        iVar12 = iVar18;
        ppcVar17 = local_e4;
        ppcVar16 = ppcVar28;
        ppcVar15 = local_dc;
      }
      else {
        if (bVar23 == 4 && (iVar29 == 0 && iVar5 == 0)) {
          bVar31 = iVar12 == 0 && ppcVar13 == (char **)0x0;
          if (iVar12 == 0 && ppcVar13 == (char **)0x0) {
            bVar31 = iVar14 == 0 && ppcVar28 == (char **)0x0;
          }
          if ((bVar31) &&
             (ppcVar17 = ppcVar15, ppcVar15 == (char **)0x0 && ppcVar16 == (char **)0x0))
          goto LAB_00e2af50;
        }
        local_b0 = (undefined4 ****)CONCAT13(uStack_ed,local_f0);
        local_ac = (undefined4 ****)CONCAT13(local_ac._3_1_,uStack_ec);
        ppcVar17 = ppcVar28;
        local_1b8 = local_d0;
        local_1b4 = local_cc;
        local_98 = local_e8;
        local_94 = local_e4;
        local_80 = local_e0;
        local_7c = local_dc;
        local_48 = local_d8;
        local_44 = local_d4;
      }
      piVar11 = *(int **)(iVar10 + 8);
      piVar11[1] = iVar5;
      *piVar11 = iVar29;
      piVar11[5] = (int)ppcVar13;
      piVar11[4] = iVar12;
      piVar11[3] = (int)local_1b4;
      piVar11[2] = (int)local_1b8;
      piVar11[9] = (int)ppcVar17;
      piVar11[8] = iVar14;
      piVar11[7] = (int)local_44;
      piVar11[6] = (int)local_48;
      piVar11[0xd] = (int)ppcVar16;
      *(undefined4 *****)((int)piVar11 + 0x41) = local_b0;
      piVar11[10] = (int)local_80;
      piVar11[0xb] = (int)local_7c;
      piVar11[0xc] = (int)ppcVar15;
      piVar11[0xf] = (int)local_94;
      piVar11[0xe] = (int)local_98;
      *(byte *)(piVar11 + 0x10) = bVar23;
      piVar11[0x11] = CONCAT31(local_ac._0_3_,local_b0._3_1_);
      *(undefined1 *)(*(int *)(**(int **)(param_2 + 0xfc) + 0x58) + 8) = 1;
      FUN_019e0044(*(int *)(**(int **)(param_2 + 0xfc) + 0x54) + 8);
    }
    uVar2 = *(undefined1 *)(param_2 + 0xa4);
    FUN_0160aaa4(&local_1b8,0);
    local_2d0 = local_1b8._0_1_;
    uVar21 = (uint)local_1b8 >> 8;
    local_178 = 0;
    local_174 = uVar2;
    FUN_01bed4e2(auStack_2a8,(uint)&local_1b8 | 4,0x44);
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x114),*(undefined4 *)(param_2 + 0x118));
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x104),*(undefined4 *)(param_2 + 0x108));
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xa8),1);
    piVar11 = *(int **)(param_2 + 0x100);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar11;
      bVar31 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar31);
    *piVar11 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 0x100));
    }
    ppppuVar25 = (undefined4 ****)0x0;
    local_2c8 = (undefined4 ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0x124) = 0;
  }
  *(char *)((int)param_1 + 0xb) = (char)(uVar21 >> 0x10);
  *(short *)((int)param_1 + 9) = (short)uVar21;
  *(undefined1 *)(param_1 + 2) = local_2d0;
  *param_1 = local_2c8;
  param_1[1] = ppppuVar25;
  FUN_01bed4e2(param_1 + 3,auStack_2a8,0x44);
  param_1[0x14] = local_2c0;
  param_1[0x15] = uStack_2bc;
  param_1[0x16] = uStack_2b8;
  param_1[0x17] = uStack_2b4;
  param_1[0x18] = uStack_2b0;
  param_1[0x19] = uStack_2ac;
  uVar2 = 1;
LAB_00e2b534:
  *(undefined1 *)(param_2 + 0x120) = uVar2;
  return;
}

