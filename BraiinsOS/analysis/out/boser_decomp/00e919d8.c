// FUN_00e919d8 @ 00e919d8 size=5204 calls_out=48 calls_in=2
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e919d8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *****pppppiVar9;
  undefined4 uVar10;
  undefined4 extraout_r1;
  undefined4 uVar11;
  int *****pppppiVar12;
  int iVar13;
  int *****pppppiVar14;
  int iVar15;
  undefined1 *puVar16;
  int *****pppppiVar17;
  undefined4 uVar18;
  int *****pppppiVar19;
  uint uVar20;
  int iVar21;
  int *****pppppiVar22;
  int ****ppppiVar23;
  bool bVar24;
  int *****local_1168;
  int *****local_115c;
  int *****local_1148;
  undefined1 auStack_fa0 [88];
  undefined1 auStack_f48 [88];
  int ****local_ef0;
  undefined4 local_eec;
  undefined1 auStack_e98 [152];
  undefined1 auStack_e00 [88];
  int *****local_da8 [2];
  int ****local_da0;
  undefined4 local_d9c;
  int *****local_d98;
  int *****local_d94;
  int *****local_d90;
  int *****local_d8c;
  undefined4 local_d88;
  undefined1 auStack_d38 [8];
  int local_d30;
  undefined4 local_d2c;
  undefined4 uStack_d28;
  undefined4 uStack_d24;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  int *****local_d18;
  undefined1 auStack_ac8 [624];
  undefined1 auStack_858 [88];
  undefined1 auStack_800 [88];
  int *****local_7a8;
  int *****local_7a4;
  int *****local_7a0;
  int local_730;
  undefined4 local_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  int *****local_718;
  int *****local_714;
  int *****local_710;
  undefined4 local_70c;
  int *****local_588;
  int *****local_584;
  int *****local_580;
  int *****local_57c;
  undefined1 auStack_438 [296];
  undefined1 auStack_310 [88];
  int *****local_2b8;
  int *****local_2b4;
  int *****local_2b0;
  int *****local_2ac;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  int local_29c;
  int local_298 [14];
  int *****local_260;
  int *****local_25c;
  int *****local_258;
  int *****local_254;
  int ****local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int ****local_240;
  undefined4 local_23c;
  undefined4 local_238;
  int *****local_230;
  int *****local_22c;
  int *****local_228;
  char local_224;
  undefined2 local_223;
  undefined1 local_221;
  undefined1 auStack_60 [12];
  int local_54;
  
  puVar4 = (uint *)(param_2 + 0x90);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1ac)) {
  case 0:
    *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(param_2 + 0x198);
    *(undefined1 *)(param_2 + 0x1ad) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar8 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar8 != (int *)0x0) {
      local_d98 = (int *****)&DAT_80000000;
      local_d9c = (int *****)0x0;
      local_da8[1] = (int *****)0x0;
      local_da8[0] = (int *****)0x0;
      FUN_0196ac88(&local_230,local_da8);
      uVar2 = local_230._0_1_;
      uVar20 = (uint)local_230 & 0xff;
      if (uVar20 == 6) {
        FUN_00e0fe5c(local_22c);
      }
      else {
        FUN_01bed4e2((uint)&local_718 | 1,(uint)&local_230 | 1,0x17);
        local_718 = (int *****)CONCAT31(local_718._1_3_,uVar2);
        if (uVar20 == 5) {
          if (local_714 == (int *****)0x0) {
            local_70c = 0;
          }
          local_d90 = local_714;
          local_da0 = (int ****)local_714;
          local_da8[0] = local_714;
          if (local_714 != (int *****)0x0) {
            local_da8[0] = (int *****)&DAT_00000001;
          }
          local_d8c = local_710;
          local_d94 = (int *****)0x0;
          local_d9c = local_710;
          local_da8[1] = (int *****)0x0;
          local_d98 = local_da8[0];
          local_d88 = local_70c;
          FUN_00fea674(auStack_60,local_da8);
          if (local_54 != 0) {
            FUN_0067b1ac(local_da8,auStack_60);
            local_2b8 = local_da8[0];
            local_2b4 = local_da8[1];
            local_2b0 = (int *****)local_da0;
            cVar3 = (char)local_d9c;
            local_260._0_3_ = (undefined3)((uint)local_d9c >> 8);
            FUN_00e0febc(&local_718);
            if (cVar3 != '\x02') {
              local_da8[0] = local_2b8;
              local_da8[1] = local_2b4;
              local_da0 = (int ****)local_2b0;
              local_d9c = (int *****)CONCAT31((int3)local_260,cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar8 + 0x18) != 0) {
                FUN_00b065ec(*piVar8 + 8,local_da8);
              }
              if ((char)local_d9c != '\x02') {
                local_230 = local_da8[0];
                local_22c = local_da8[1];
                local_228 = (int *****)local_da0;
                local_221 = local_d9c._3_1_;
                local_223 = local_d9c._1_2_;
                local_224 = (char)local_d9c;
                FUN_019cf348(&local_230);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                  local_710 = (int *****)(DAT_01d4c480 + 0x1c);
                  if (*(int ******)(DAT_01d4c480 + 0x20) == (int *****)0x0) {
LAB_00e93314:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_da0 = *(int *****)(DAT_01d4c480 + 0x24);
                  local_d9c = *(int ******)(DAT_01d4c480 + 0x28);
                  local_22c = (int *****)&local_588;
                  local_230 = (int *****)local_da8;
                  local_714 = (int *****)&DAT_00000001;
                  local_d98 = (int *****)0x0;
                  local_228 = (int *****)&DAT_01d2ea4c;
                  local_584 = (int *****)&DAT_0000006b;
                  local_588 = (int *****)0x3fe987;
                  local_da8[0] = (int *****)*local_710;
                  local_da8[1] = *(int ******)(DAT_01d4c480 + 0x20);
                  local_718 = (int *****)&local_230;
                  FUN_00e0ff40(&local_718);
                }
                else {
                  iVar6 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_7a4 = *(int ******)(DAT_01d4c480 + 0x14);
                    local_7a0 = *(int ******)(DAT_01d4c480 + 0x18);
                    local_7a8 = (int *****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar5 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar5 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar21 = (*(code *)puVar5[3])(pcVar1,&local_7a8);
                    if (iVar21 != 0) {
                      local_580 = (int *****)(DAT_01d4c480 + 0x1c);
                      if (*(int ******)(DAT_01d4c480 + 0x20) == (int *****)0x0) goto LAB_00e93314;
                      local_714 = &local_ef0;
                      local_da0 = *(int *****)(DAT_01d4c480 + 0x24);
                      local_d9c = *(int ******)(DAT_01d4c480 + 0x28);
                      local_718 = (int *****)local_da8;
                      local_588 = (int *****)&local_718;
                      local_d98 = (int *****)0x0;
                      local_584 = (int *****)&DAT_00000001;
                      local_eec = 0x6b;
                      local_710 = (int *****)&DAT_01d2ea4c;
                      local_ef0 = (int ****)0x3fe987;
                      local_230 = local_7a8;
                      local_22c = local_7a4;
                      local_228 = local_7a0;
                      local_da8[0] = (int *****)*local_580;
                      local_da8[1] = *(int ******)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar6,pcVar1,puVar5[4],&local_230,&local_588);
                    }
                  }
                }
              }
            }
            goto LAB_00e91d70;
          }
          FUN_0165a1f4(auStack_60);
        }
        FUN_00e0febc(&local_718);
      }
    }
LAB_00e91d70:
    *(undefined1 *)(param_2 + 0x204) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17c9c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17c9c);
  case 3:
    break;
  case 4:
    goto switchD_00e91a4c_caseD_4;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x754)) {
    case 0:
      puVar5 = *(undefined4 **)(param_2 + 0x750);
      goto LAB_00e91ef0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1817c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1817c);
    }
    goto switchD_00e91b48_caseD_3;
  case 6:
    goto switchD_00e91a4c_caseD_6;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x754)) {
    case 0:
      iVar6 = *(int *)(param_2 + 0x750);
      goto LAB_00e92314;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1818c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1818c);
    }
    goto switchD_00e91b10_caseD_3;
  }
  FUN_00e903b4(local_da8,param_2 + 0x1b0,param_3);
  local_1168 = local_d9c;
  local_115c = (int *****)local_da0;
  pppppiVar17 = local_da8[1];
  pppppiVar19 = local_da8[0];
  if (local_da8[0] == (int *****)&SUB_00000004 && local_da8[1] == (int *****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_00e93048;
  }
  puVar16 = auStack_fa0;
  local_1148 = local_d98;
  FUN_01bed4e2(puVar16,&local_d94,0x54);
  if (*(char *)(param_2 + 0x204) == '\x03') {
    FUN_00e7a724(param_2 + 0x1b0);
  }
  if (pppppiVar19 == (int *****)&DAT_00000003 && pppppiVar17 == (int *****)0x0) {
    *(undefined1 *)(param_2 + 0x278) = 0;
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x19c) + 4;
switchD_00e91a4c_caseD_4:
    FUN_00e9135c(local_da8,param_2 + 0x1b0,param_3);
    pppppiVar22 = local_d98;
    local_1168 = local_d9c;
    local_115c = (int *****)local_da0;
    pppppiVar17 = local_da8[1];
    pppppiVar19 = local_da8[0];
    if (local_da8[0] == (int *****)&SUB_00000004 && local_da8[1] == (int *****)0x0) {
      uVar2 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e93048;
    }
    puVar16 = auStack_f48;
    local_1148 = local_d98;
    FUN_01bed4e2(puVar16,&local_d94,0x54);
    cVar3 = *(char *)(param_2 + 0x278);
    bVar24 = cVar3 == '\x03';
    if (bVar24) {
      cVar3 = *(char *)(param_2 + 0x274);
    }
    if (bVar24 && cVar3 == '\x03') {
      FUN_00b99500(param_2 + 0x1b8);
    }
    if (pppppiVar19 != (int *****)&DAT_00000003 || pppppiVar17 != (int *****)0x0) goto LAB_00e91f50;
    *(undefined1 *)(param_2 + 0x754) = 0;
    puVar5 = (undefined4 *)(param_2 + 0x1a0);
    *puVar5 = local_115c;
    *(undefined4 **)(param_2 + 0x750) = puVar5;
    *(int ******)(param_2 + 0x1a4) = local_1168;
    *(int ******)(param_2 + 0x1a8) = pppppiVar22;
LAB_00e91ef0:
    *(undefined2 *)(param_2 + 0x74d) = 2;
    *(undefined4 **)(param_2 + 0x748) = puVar5;
switchD_00e91b48_caseD_3:
    FUN_00e835a0(local_da8,param_2 + 0x1b0,param_3);
    pppppiVar17 = local_d9c;
    pppppiVar19 = (int *****)local_da0;
    pppppiVar14 = local_da8[1];
    pppppiVar22 = local_da8[0];
    if (local_da8[0] == (int *****)&SUB_00000004 && local_da8[1] == (int *****)0x0) {
      *(undefined1 *)(param_2 + 0x754) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 5;
      goto LAB_00e93048;
    }
    local_1148 = local_d90;
    local_115c = local_d98;
    local_1168 = local_d94;
    FUN_01bed4e2(&local_2b8,&local_d8c,0x54);
    FUN_01bed4e2(&local_718,auStack_d38,0x98);
    FUN_00e7a7b0(param_2 + 0x1b0);
    uVar20 = (uint)pppppiVar22 ^ 3;
    if (uVar20 == 0 && pppppiVar14 == (int *****)0x0) {
      local_da8[0] = &local_240;
      local_238 = 0;
      local_240 = (int ****)0x0;
      local_d9c = (int *****)0x0;
      local_23c = 1;
      local_da0 = (int ****)0x60000020;
      local_da8[1] = (int *****)&DAT_01c18084;
      local_260 = pppppiVar19;
      local_25c = pppppiVar17;
      local_258 = local_115c;
      local_254 = local_1168;
      iVar6 = FUN_00aeeb78(&local_260,local_da8);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_250,&DAT_01c180dc,&DAT_01d30334);
      }
      local_250 = local_240;
      uStack_24c = local_23c;
      uStack_248 = local_238;
      FUN_01a70fd4(local_da8,0xd);
      FUN_00c42328(&local_260);
      pppppiVar9 = (int *****)&local_d94;
      local_115c = (int *****)local_da0;
      uVar18 = 0x54;
      local_1168 = local_d9c;
      local_1148 = local_d98;
      pppppiVar12 = (int *****)&local_7a8;
      pppppiVar19 = local_da8[0];
      pppppiVar17 = local_da8[1];
    }
    else {
      FUN_01bed4e2(&local_7a8,&local_2b8,0x54);
      pppppiVar9 = (int *****)&local_718;
      pppppiVar12 = (int *****)&local_230;
      uVar18 = 0x98;
    }
    FUN_01bed4e2(pppppiVar12,pppppiVar9,uVar18);
    FUN_01bed4e2(&local_ef0,&local_7a8,0x54);
    FUN_01bed4e2(&local_588,&local_230,0x98);
    *(undefined1 *)(param_2 + 0x754) = 1;
    FUN_01bed4e2(auStack_e00,&local_ef0,0x54);
    FUN_01bed4e2(auStack_e98,&local_588,0x98);
    if (uVar20 == 0 && pppppiVar14 == (int *****)0x0) {
      FUN_01bed4e2(auStack_310,auStack_e00,0x54);
    }
    else {
      *(int ******)(param_2 + 0xa8) = local_1148;
      *(int ******)(param_2 + 0x94) = pppppiVar14;
      *(int ******)(param_2 + 0x98) = pppppiVar19;
      *(int ******)(param_2 + 0x9c) = pppppiVar17;
      *(int ******)(param_2 + 0xa0) = local_115c;
      *(int ******)(param_2 + 0xa4) = local_1168;
      *puVar4 = (uint)pppppiVar22;
      FUN_01bed4e2(param_2 + 0xac,auStack_e00,0x54);
      FUN_01bed4e2(param_2 + 0x100,auStack_e98,0x98);
      *(undefined1 *)(param_2 + 0x754) = 0;
      *(int *)(param_2 + 0x750) = param_2 + 0x1a0;
switchD_00e91a4c_caseD_6:
      FUN_00e91550(local_da8,param_2 + 0x1b0,param_3);
      pppppiVar9 = local_d90;
      local_1168 = local_d94;
      pppppiVar12 = local_d98;
      pppppiVar17 = local_d9c;
      pppppiVar19 = (int *****)local_da0;
      pppppiVar14 = local_da8[1];
      pppppiVar22 = local_da8[0];
      if (local_da8[0] == (int *****)&SUB_00000004 && local_da8[1] == (int *****)0x0) {
        *param_1 = 4;
        param_1[1] = 0;
        uVar2 = 6;
        goto LAB_00e93048;
      }
      local_1148 = local_d90;
      local_115c = local_d98;
      FUN_01bed4e2(auStack_858,&local_d8c,0x54);
      FUN_01bed4e2(auStack_ac8,auStack_d38,0x270);
      if (*(char *)(param_2 + 0x754) == '\x03') {
        FUN_00e7a7b0(param_2 + 0x1b0);
      }
      if (pppppiVar22 != (int *****)&DAT_00000003 || pppppiVar14 != (int *****)0x0) {
        *(int ******)(param_2 + 0x770) = pppppiVar9;
        *(int ******)(param_2 + 0x768) = pppppiVar12;
        *(int ******)(param_2 + 0x758) = pppppiVar22;
        *(int ******)(param_2 + 0x75c) = pppppiVar14;
        *(int ******)(param_2 + 0x760) = pppppiVar19;
        *(int ******)(param_2 + 0x764) = pppppiVar17;
        *(int ******)(param_2 + 0x76c) = local_1168;
        FUN_01bed4e2(param_2 + 0x774,auStack_858,0x54);
        FUN_01bed4e2(param_2 + 0x7c8,auStack_ac8,0x270);
        *(undefined1 *)(param_2 + 0x754) = 0;
        iVar6 = param_2 + 0x1a0;
        *(int *)(param_2 + 0x750) = iVar6;
LAB_00e92314:
        *(undefined2 *)(param_2 + 0x74d) = 2;
        *(int *)(param_2 + 0x748) = iVar6;
switchD_00e91b10_caseD_3:
        puVar16 = (undefined1 *)(param_2 + 0x754);
        FUN_00e83164(local_da8,param_2 + 0x1b0,param_3);
        pppppiVar22 = local_d9c;
        local_1168 = (int *****)local_da0;
        pppppiVar17 = local_da8[1];
        pppppiVar19 = local_da8[0];
        if (local_da8[0] != (int *****)0x80000006) {
          local_115c = local_da8[1];
          FUN_00e7a7b0(param_2 + 0x1b0);
          if (pppppiVar19 == (int *****)&DAT_80000005) {
            pppppiVar14 = (int *****)&local_718;
            FUN_01bed4e2(pppppiVar14,&local_230,0x54);
            *puVar16 = 1;
            FUN_01bed4e2(auStack_800,pppppiVar14,0x54);
          }
          else {
            local_584 = pppppiVar17;
            local_da8[1] = (int *****)&DAT_01c18084;
            local_da8[0] = (int *****)&local_7a8;
            local_7a0 = (int *****)0x0;
            local_7a8 = (int *****)0x0;
            local_d9c = (int *****)0x0;
            local_580 = local_1168;
            local_57c = pppppiVar22;
            local_588 = pppppiVar19;
            local_7a4 = (int *****)&DAT_00000001;
            local_da0 = (int ****)0x60000020;
            iVar6 = FUN_00aeeb78(&local_588,local_da8);
            if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_250,&DAT_01c180dc,&DAT_01d30334);
            }
            local_2b8 = local_7a8;
            local_2b4 = local_7a4;
            local_2b0 = local_7a0;
            FUN_01a70fd4(local_da8,0xd);
            FUN_00c42328(&local_588);
            pppppiVar22 = local_d98;
            local_1168 = local_d9c;
            pppppiVar17 = local_da8[1];
            pppppiVar19 = local_da8[0];
            pppppiVar14 = (int *****)&local_230;
            local_115c = (int *****)local_da0;
            local_1148 = local_d98;
            FUN_01bed4e2(pppppiVar14,&local_d94,0x54);
            FUN_01bed4e2(&local_718,pppppiVar14,0x54);
            *puVar16 = 1;
            if (pppppiVar19 == (int *****)&SUB_00000004 && pppppiVar17 == (int *****)0x0)
            goto LAB_00e92348;
            FUN_01bed4e2(auStack_800,&local_718,0x54);
            if (pppppiVar19 != (int *****)&DAT_00000003 || pppppiVar17 != (int *****)0x0) {
              FUN_01bed4e2(auStack_310,auStack_800,0x54);
              FUN_00e83cdc(param_2 + 0x758);
              goto LAB_00e92254;
            }
          }
          pppppiVar17 = (int *****)0x0;
          local_260 = local_115c;
          pppppiVar19 = local_1168 + (int)pppppiVar22 * 10;
          iVar6 = 0;
          while( true ) {
            pppppiVar12 = (int *****)((int)local_1168 + iVar6);
            local_25c = local_1168;
            local_258 = pppppiVar22;
            if (!(pppppiVar17 == (int *****)0x0 || pppppiVar17 == pppppiVar14)) break;
            if ((int)pppppiVar22 * 0x28 == iVar6) goto LAB_00e9254c;
            pppppiVar17 = (int *****)pppppiVar12[8];
            iVar6 = iVar6 + 0x28;
            pppppiVar14 = pppppiVar17 + (int)pppppiVar12[9] * 0x76;
          }
          if (pppppiVar17[8] == (int ****)0x2 && pppppiVar17[9] == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("BUG: missing client statistics",0x1e,&DAT_01c1d098);
          }
          FUN_00a27844(local_da8,pppppiVar17 + 0x42);
          if (local_d30 == -0x7fffffff) {
LAB_00e9254c:
            bVar24 = true;
            local_730 = -0x7fffffff;
          }
          else {
            pppppiVar9 = (int *****)&local_588;
            pppppiVar17 = pppppiVar17 + 0x76;
            FUN_01bed4e2(pppppiVar9,local_da8,0x90);
            if (pppppiVar17 != pppppiVar14) {
              FUN_01bed4e2(&local_230,&local_588,0x90);
              uVar20 = (uint)((int)pppppiVar14 - (int)pppppiVar17) / 0x1d8;
              do {
                FUN_01bed4e2(local_da8,&local_230,0x90);
                local_d18 = pppppiVar17;
                FUN_00a277a0(&local_230,local_da8,pppppiVar17);
                pppppiVar17 = pppppiVar17 + 0x76;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
              FUN_01bed4e2(&local_588,&local_230,0x90);
            }
            if (pppppiVar12 != (int *****)0x0) {
              if (pppppiVar12 != pppppiVar19) {
                pppppiVar9 = (int *****)&local_718;
                FUN_01bed4e2(pppppiVar9,&local_588,0x90);
                iVar6 = 0;
                do {
                  ppppiVar23 = pppppiVar12[iVar6 * 10 + 9];
                  if (ppppiVar23 == (int ****)0x0) {
                    pppppiVar17 = pppppiVar9;
                  }
                  else {
                    pppppiVar17 = (int *****)pppppiVar12[iVar6 * 10 + 8];
                    FUN_01bed4e2(&local_230,pppppiVar9,0x90);
                    do {
                      FUN_01bed4e2(local_da8,&local_230,0x90);
                      local_d18 = pppppiVar17;
                      FUN_00a277a0(&local_230,local_da8,pppppiVar17);
                      pppppiVar17 = pppppiVar17 + 0x76;
                      ppppiVar23 = (int ****)((int)ppppiVar23 + -1);
                    } while (ppppiVar23 != (int ****)0x0);
                    pppppiVar17 = (int *****)&local_230;
                  }
                  FUN_01bed4e2(local_da8,pppppiVar17,0x90);
                  FUN_01bed4e2(pppppiVar9,local_da8,0x90);
                  iVar6 = iVar6 + 1;
                } while (iVar6 != ((uint)((int)pppppiVar19 - (int)pppppiVar12) >> 3) * -0x33333333);
              }
              FUN_01bed4e2(local_da8,pppppiVar9,0x90);
              FUN_01bed4e2(&local_588,local_da8,0x90);
            }
            FUN_01bed4e2(&local_7a8,&local_588,0x90);
            bVar24 = local_730 == -0x7fffffff;
          }
          iVar6 = local_730;
          if (*puVar4 == 2 && *(int *)(param_2 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_003f1b0a,0x1f,&DAT_01c179c8);
          }
          iVar21 = 0;
          local_298[0] = 0;
          local_2b0 = local_115c;
          local_2a8 = 0;
          local_2b8 = local_1168;
          local_2b4 = local_1168;
          local_2ac = pppppiVar19;
          if (pppppiVar22 != (int *****)0x0) {
            do {
              uVar18 = *(undefined4 *)((int)local_1168 + iVar21 + 0x1c);
              iVar13 = *(int *)((int)local_1168 + iVar21 + 0x20);
              iVar15 = *(int *)((int)local_1168 + iVar21 + 0x24);
              local_2b4 = (int *****)((int)local_1168 + iVar21 + 0x28);
              FUN_019bb7e0(*(undefined4 *)((int)local_1168 + iVar21 + 0x10),
                           *(undefined4 *)((int)local_1168 + iVar21 + 0x14));
              if (local_2a8 != 0) {
                FUN_0094a438(&local_2a8);
              }
              local_2a8 = iVar13;
              local_2a4 = iVar13;
              local_2a0 = uVar18;
              local_29c = iVar15 * 0x1d8 + iVar13;
              FUN_00db2c28(local_da8,&local_2a8);
              pppppiVar17 = local_da8[1];
              pppppiVar19 = local_da8[0];
              if (local_da8[0] != (int *****)0x2 || local_da8[1] != (int *****)0x0) {
                FUN_01bed4e2(&local_230,local_da8 + 2,0x1d0);
                goto LAB_00e92994;
              }
              iVar21 = iVar21 + 0x28;
            } while ((int)pppppiVar22 * 0x28 != iVar21);
            if (local_2a8 != 0) {
              FUN_0094a438(&local_2a8);
            }
          }
          local_2a8 = 0;
          if (local_298[0] != 0) {
            FUN_00db2c28(local_da8,local_298);
            pppppiVar17 = local_da8[1];
            pppppiVar19 = local_da8[0];
            if (local_da8[0] != (int *****)0x2 || local_da8[1] != (int *****)0x0) {
              FUN_01bed4e2(&local_230,local_da8 + 2,0x1d0);
LAB_00e92994:
              FUN_01bed4e2(local_da8 + 2,&local_230,0x1d0);
              local_da8[0] = pppppiVar19;
              local_da8[1] = pppppiVar17;
              if (((uint)pppppiVar19 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c(&DAT_003f1b64,0x1f,&DAT_01c17cac);
              }
              FUN_0094a4d0(local_da8);
              goto LAB_00e92a04;
            }
            if (local_298[0] != 0) {
              FUN_0094a438(local_298);
            }
          }
          local_298[0] = 0;
LAB_00e92a04:
          if (!bVar24) {
            FUN_01bed4e2(local_da8,&local_7a8,0x78);
            local_d30 = iVar6;
            local_d2c = local_72c;
            uStack_d28 = uStack_728;
            uStack_d24 = uStack_724;
            uStack_d20 = uStack_720;
            uStack_d1c = uStack_71c;
            FUN_00b9c0a4(local_da8);
          }
          if (*(undefined1 **)(param_2 + 0xd0) != &DAT_3b9aca00) {
            FUN_01495f30(local_da8,puVar4,*(undefined4 *)(param_2 + 200),
                         *(undefined4 *)(param_2 + 0xcc),*(undefined1 **)(param_2 + 0xd0));
          }
          uVar7 = *(undefined4 *)(param_2 + 0x98);
          uVar10 = *(undefined4 *)(param_2 + 0x9c);
          uVar18 = *(undefined4 *)(param_2 + 0xa0);
          uVar11 = *(undefined4 *)(param_2 + 0xa4);
          if ((*puVar4 & 1) == 0) {
            uVar11 = 0;
            uVar18 = 0;
            uVar10 = 0;
            uVar7 = 0;
          }
          iVar6 = FUN_012fc0a4(uVar7,uVar10,uVar18,uVar11,local_da8);
          iVar13 = 0x27 - iVar6;
          iVar21 = 1;
          if ((iVar6 != 0x27) && (iVar21 = FUN_01298504(iVar13,1), iVar21 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar13);
          }
          FUN_01bed4e2(iVar21,(int)local_da8 + iVar6,iVar13);
          FUN_00a40a80(local_da8,param_2 + 0x758);
          FUN_00a40c30(&local_ef0,param_2 + 0x758);
          piVar8 = (int *)FUN_01221f24(param_2 + 0x150,extraout_r1,900,0);
                    /* WARNING: Could not recover jumptable at 0x00e92b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&LAB_00e92b94 + *(int *)(&LAB_00e92b94 + *piVar8 * 4)))(piVar8[2],piVar8[3]);
          return;
        }
        *puVar16 = 3;
LAB_00e92348:
        *param_1 = 4;
        param_1[1] = 0;
        uVar2 = 7;
        goto LAB_00e93048;
      }
      FUN_01bed4e2(auStack_310,auStack_858,0x54);
LAB_00e92254:
      if (*puVar4 != 2 || *(int *)(param_2 + 0x94) != 0) {
        FUN_00b9a764();
      }
    }
    FUN_0084ec48(param_2 + 0x1a0);
  }
  else {
LAB_00e91f50:
    FUN_01bed4e2(auStack_310,puVar16,0x54);
  }
  FUN_00f9604c(param_2 + 0x48);
  if (*(char *)(param_2 + 0x1ad) == '\x01') {
    FUN_00f9604c(param_2);
  }
  *param_1 = 3;
  param_1[1] = 0;
  param_1[6] = local_1148;
  param_1[3] = pppppiVar17;
  param_1[4] = local_115c;
  param_1[2] = pppppiVar19;
  param_1[5] = local_1168;
  FUN_01bed4e2(param_1 + 7,auStack_310,0x54);
  FUN_01bed4e2(param_1 + 0x1c,auStack_438,0x128);
  uVar2 = 1;
LAB_00e93048:
  *(undefined1 *)(param_2 + 0x1ac) = uVar2;
  return;
}

