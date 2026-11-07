// FUN_00e15a60 @ 00e15a60 size=4004 calls_out=54 calls_in=1
// strings: save_action | uid field is missing | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e15a60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint3 uVar2;
  char *pcVar3;
  undefined4 ****ppppuVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 ***pppuVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  undefined4 ****ppppuVar18;
  undefined4 ****ppppuVar19;
  undefined1 *puVar20;
  bool bVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined1 local_2ec;
  undefined4 ****local_2e4;
  undefined4 ****local_2e0;
  undefined4 ***pppuStack_2dc;
  undefined4 ***pppuStack_2d8;
  undefined4 ***pppuStack_2d4;
  undefined4 ***pppuStack_2d0;
  undefined4 ***pppuStack_2cc;
  undefined1 auStack_2c8 [72];
  int local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 auStack_270 [68];
  undefined4 ****local_22c;
  undefined4 ***pppuStack_228;
  undefined4 ***pppuStack_224;
  undefined4 ***pppuStack_220;
  undefined4 ***pppuStack_21c;
  undefined4 ***pppuStack_218;
  undefined4 ****local_210;
  undefined4 ***pppuStack_20c;
  undefined4 ***pppuStack_208;
  undefined4 ***pppuStack_204;
  undefined4 ***pppuStack_200;
  undefined4 ***pppuStack_1fc;
  undefined1 auStack_1f8 [68];
  undefined2 local_1b4;
  undefined1 local_1b2;
  undefined4 ****local_1b0;
  undefined4 ****ppppuStack_1ac;
  undefined1 *puStack_1a8;
  undefined4 ****local_1a0;
  undefined4 ****local_19c;
  undefined1 *local_198;
  undefined4 **local_190;
  undefined4 local_18c;
  undefined4 ****local_188;
  undefined1 *local_184;
  undefined4 *local_180;
  undefined4 uStack_17c;
  undefined1 auStack_170 [12];
  int local_164;
  undefined4 ****local_150;
  undefined4 ****local_14c;
  undefined1 *local_148;
  undefined4 local_144;
  undefined4 ****local_140;
  undefined4 local_13c;
  undefined1 *local_138;
  undefined4 *local_134;
  undefined4 local_130;
  undefined4 local_110;
  undefined4 ****local_100;
  undefined4 ***pppuStack_fc;
  undefined4 ***pppuStack_f8;
  undefined4 ***pppuStack_f4;
  undefined4 ***pppuStack_f0;
  undefined4 ***pppuStack_ec;
  undefined4 ****local_e8;
  undefined4 ***local_e4;
  undefined4 ***local_e0;
  undefined4 ***pppuStack_dc;
  undefined4 ***pppuStack_d8;
  undefined4 ***pppuStack_d4;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined1 *local_c8;
  undefined4 *local_c4;
  undefined4 ****local_c0;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined4 *puStack_b4;
  undefined4 ****local_88;
  undefined4 ***pppuStack_84;
  undefined4 ***pppuStack_80;
  undefined4 ***pppuStack_7c;
  undefined4 ***pppuStack_78;
  undefined4 ***pppuStack_74;
  undefined1 auStack_70 [76];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x100)) {
  case 0:
    *(undefined2 *)(param_2 + 0x102) = 0x100;
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0xc0);
    FUN_01bed4e2(param_2 + 0x58,param_2,0x58);
    piVar9 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xa8));
    if (piVar9 != (int *)0x0) {
      local_c0 = (undefined4 ****)&DAT_80000000;
      local_c4 = (undefined4 *)0x0;
      local_cc = (undefined4 ****)0x0;
      local_d0 = (undefined4 ****)0x0;
      pppuVar7 = (undefined4 ***)
                 FUN_014a7b90(&local_d0,"save_action",0xb,*(undefined4 *)(param_2 + 0xa4));
      if (pppuVar7 == (undefined4 ***)0x0) {
        pppuVar7 = (undefined4 ***)
                   FUN_01271f48(&local_d0,"uid",3,*(undefined4 *)(param_2 + 0x9c),
                                *(undefined4 *)(param_2 + 0xa0));
        if (pppuVar7 != (undefined4 ***)0x0) goto LAB_00e15b58;
        local_150 = local_d0;
        local_14c = local_cc;
        local_148 = local_c8;
        local_144 = local_c4;
        local_140 = local_c0;
        local_13c = uStack_bc;
        local_138 = puStack_b8;
        local_134 = puStack_b4;
        FUN_0196ac88(&local_e8);
        uVar5 = local_e8._0_1_;
        uVar13 = (uint)local_e8 & 0xff;
        if (uVar13 != 6) {
          FUN_01bed4e2((uint)&local_188 | 1,(uint)&local_e8 | 1,0x17);
          local_188 = (undefined4 ****)CONCAT31(local_188._1_3_,uVar5);
          if (uVar13 == 5) {
            local_13c = 0;
            local_138 = local_184;
            if (local_184 == (undefined1 *)0x0) {
              uStack_17c = 0;
            }
            local_148 = local_184;
            local_150 = (undefined4 ****)(uint)(local_184 != (undefined1 *)0x0);
            local_134 = local_180;
            local_144 = local_180;
            local_14c = (undefined4 ****)0x0;
            local_140 = local_150;
            local_130 = uStack_17c;
            FUN_00fea674(auStack_170,&local_150);
            if (local_164 != 0) {
              FUN_0067b1ac(&local_150,auStack_170);
              local_1b0 = local_150;
              ppppuStack_1ac = local_14c;
              puStack_1a8 = local_148;
              cVar6 = (char)local_144;
              local_1b4 = local_144._1_2_;
              local_1b2 = local_144._3_1_;
              FUN_00e0febc(&local_188);
              if (cVar6 != '\x02') {
                local_150 = local_1b0;
                local_14c = ppppuStack_1ac;
                local_148 = puStack_1a8;
                local_144 = (undefined4 *)CONCAT31(CONCAT12(local_1b2,local_1b4),cVar6);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar9 + 0x18) != 0) {
                  FUN_00b065ec(*piVar9 + 8,&local_150);
                }
                if ((char)local_144 != '\x02') {
                  local_d0 = local_150;
                  local_cc = local_14c;
                  local_c8 = local_148;
                  local_c4 = local_144;
                  FUN_019cf348(&local_d0);
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c480), cVar6 != '\0')))
                       ) && (iVar12 = FUN_01aaa278(DAT_01d4c480), iVar12 != 0)))) {
                    local_e0 = (undefined4 ***)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e163d8:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_cc = &local_188;
                    local_148 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                    local_144 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_d0 = &local_150;
                    local_e4 = (undefined4 ***)&DAT_00000001;
                    local_140 = (undefined4 ****)0x0;
                    local_c8 = &DAT_01d2ea4c;
                    local_184 = (undefined1 *)0x6b;
                    local_188 = (undefined4 ****)0x3fe987;
                    local_150 = (undefined4 ****)*local_e0;
                    local_14c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    local_e8 = &local_d0;
                    FUN_00e0ff40(&local_e8);
                  }
                  else {
                    iVar12 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_19c = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                      local_198 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                      local_1a0 = (undefined4 ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar17 = DAT_01d4edc8;
                      pcVar3 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar17 = &DAT_01cfc5e0;
                        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar8 = (*(code *)puVar17[3])(pcVar3);
                      if (iVar8 != 0) {
                        local_180 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                        if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                        goto LAB_00e163d8;
                        local_e8 = &local_150;
                        local_148 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                        local_144 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                        local_e4 = &local_190;
                        local_140 = (undefined4 ****)0x0;
                        local_184 = (undefined1 *)0x1;
                        local_e0 = (undefined4 ***)&DAT_01d2ea4c;
                        local_18c = 0x6b;
                        local_190 = (undefined4 **)0x3fe987;
                        local_d0 = local_1a0;
                        local_cc = local_19c;
                        local_c8 = local_198;
                        local_188 = &local_e8;
                        local_150 = (undefined4 ****)*local_180;
                        local_14c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar12,pcVar3,puVar17[4],&local_d0,&local_188);
                      }
                    }
                  }
                }
              }
              goto LAB_00e15b74;
            }
            FUN_0165a1f4(auStack_170);
          }
          FUN_00e0febc(&local_188);
          goto LAB_00e15b74;
        }
        pppuVar7 = local_e4;
      }
      else {
LAB_00e15b58:
        local_e8 = (undefined4 ****)CONCAT31(local_e8._1_3_,6);
        local_e4 = pppuVar7;
        FUN_01276d58(&local_d0);
      }
      FUN_00e0fe5c(pppuVar7);
    }
LAB_00e15b74:
    *(undefined1 *)(param_2 + 0x103) = 0;
    FUN_01bed4e2(&local_150,param_2 + 0x58,0x58);
    FUN_00f07a08(&local_d0,&local_150);
    *(undefined4 *****)(param_2 + 200) = local_d0;
    *(undefined4 *****)(param_2 + 0xcc) = local_cc;
    *(undefined1 **)(param_2 + 0xd0) = local_c8;
    FUN_00a21428(&local_150,local_c4);
    ppppuVar19 = local_14c;
    local_2ec = local_148._0_1_;
    local_2e4 = local_150;
    if (local_150 == (undefined4 ****)&DAT_00000003 && local_14c == (undefined4 ****)0x0) {
      *(undefined1 *)(param_2 + 0x101) = local_148._0_1_;
      lVar22 = FUN_013245a0(*(undefined4 *)(param_2 + 0xcc),*(undefined4 *)(param_2 + 0xd0));
      ppppuVar19 = (undefined4 ****)((ulonglong)lVar22 >> 0x20);
      if (lVar22 < 0) {
        uVar11 = 0;
        ppppuVar19 = &local_150;
LAB_00e15bf4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar11,ppppuVar19);
      }
      if (ppppuVar19 != (undefined4 ****)0x0) {
        uVar11 = 1;
        iVar12 = FUN_01298504(ppppuVar19,1);
        if (iVar12 == 0) goto LAB_00e15bf4;
        FUN_01bed4e2(iVar12,(int)lVar22,ppppuVar19);
        FUN_012c1060(&local_150,iVar12,ppppuVar19);
        *(undefined4 *****)(param_2 + 0xd4) = local_150;
        *(undefined4 *****)(param_2 + 0xd8) = local_14c;
        *(undefined1 **)(param_2 + 0xdc) = local_148;
        FUN_019bb7e0(ppppuVar19,iVar12);
        iVar12 = **(int **)(param_2 + 0xc4);
        *(undefined1 *)(param_2 + 0x114) = 0;
        iVar12 = iVar12 + 8;
        *(int *)(param_2 + 0x108) = iVar12;
        goto LAB_00e15d6c;
      }
      FUN_01bed4e2(1,(int)lVar22,0);
      FUN_01a71aac(&local_150,3,"uid field is missing",0x14);
      ppppuVar19 = local_14c;
      local_2e4 = local_150;
      local_2ec = local_148._0_1_;
      uVar2 = local_148._1_3_;
      FUN_01bed4e2(auStack_2c8,&local_144,0x44);
      local_2e0 = local_100;
      pppuStack_2dc = pppuStack_fc;
      pppuStack_2d8 = pppuStack_f8;
      pppuStack_2d4 = pppuStack_f4;
      pppuStack_2d0 = pppuStack_f0;
      pppuStack_2cc = pppuStack_ec;
      FUN_019bb7e0(0,1);
    }
    else {
      uVar2 = local_148._1_3_;
      FUN_01bed4e2(auStack_2c8,&local_144,0x44);
      local_2e0 = local_100;
      pppuStack_2dc = pppuStack_fc;
      pppuStack_2d8 = pppuStack_f8;
      pppuStack_2d4 = pppuStack_f4;
      pppuStack_2d0 = pppuStack_f0;
      pppuStack_2cc = pppuStack_ec;
    }
    uVar13 = (uint)uVar2;
    goto LAB_00e16578;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16b84);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16b84);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x114)) {
    case 0:
      iVar12 = *(int *)(param_2 + 0x108);
LAB_00e15d6c:
      uVar11 = FUN_00b8a1bc(*(int *)(iVar12 + 0x34) + 8);
      *(undefined4 *)(param_2 + 0x10c) = uVar11;
      puVar10 = &DAT_01c13d9c;
      *(undefined **)(param_2 + 0x110) = &DAT_01c13d9c;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar11 = *(undefined4 *)(param_2 + 0x10c);
      puVar10 = *(undefined **)(param_2 + 0x110);
    }
    iVar12 = (**(code **)(puVar10 + 0xc))(uVar11,param_3);
    if (iVar12 == 0) {
      uVar5 = 3;
      *(undefined1 *)(param_2 + 0x114) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e16b38;
    }
    FUN_01139b38(*(undefined4 *)(param_2 + 0x10c),*(undefined4 *)(param_2 + 0x110));
    *(int *)(param_2 + 0xe0) = iVar12;
    *(undefined1 *)(param_2 + 0x114) = 1;
    *(int *)(param_2 + 0x108) = **(int **)(param_2 + 0xc4) + 8;
    *(undefined1 *)(param_2 + 0x144) = 0;
switchD_00e15c80_caseD_0:
    *(undefined1 *)(param_2 + 0x140) = 0;
    *(int *)(param_2 + 0x10c) = *(int *)(param_2 + 0x108) + 0x3c;
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x144)) {
    case 0:
      goto switchD_00e15c80_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c183ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c183ac);
    }
    break;
  case 5:
    goto switchD_00e15a84_caseD_5;
  case 6:
    goto switchD_00e15a84_caseD_6;
  case 7:
    goto switchD_00e15a84_caseD_7;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x178)) {
    case 0:
      uVar11 = *(undefined4 *)(param_2 + 0x160);
      uVar14 = *(undefined4 *)(param_2 + 0x170);
      uVar15 = *(undefined4 *)(param_2 + 0x174);
      cVar6 = *(char *)(param_2 + 0x179);
      goto LAB_00e168b0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c175f8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c175f8);
    }
    goto switchD_00e15c18_caseD_3;
  }
  uVar23 = FUN_00df39fc(param_2 + 0x10c,param_3);
  iVar12 = (int)uVar23;
  if (iVar12 == 0) {
    uVar5 = 3;
    iVar12 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x140) == '\x03') {
      cVar6 = *(char *)(param_2 + 0x13c);
      bVar21 = cVar6 == '\x03';
      if (bVar21) {
        cVar6 = *(char *)(param_2 + 0x138);
      }
      if (bVar21 && cVar6 == '\x03') {
        FUN_0193c3cc(param_2 + 0x118);
      }
    }
    uVar5 = 1;
  }
  *(undefined1 *)(param_2 + 0x144) = uVar5;
  if (iVar12 == 0) {
    uVar5 = 4;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e16b38;
  }
  *(int *)(param_2 + 0xb0) = iVar12;
  *(int *)(param_2 + 0xb4) = (int)((ulonglong)uVar23 >> 0x20);
  FUN_00bba254(param_2 + 0x108);
  *(undefined1 *)(param_2 + 0x13c) = 0;
  *(int *)(param_2 + 0x108) = *(int *)(param_2 + 0xb4) + 0x50;
switchD_00e15a84_caseD_5:
  FUN_0084fe8c(&local_280,param_2 + 0x108,param_3);
  if (local_280 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar5 = 5;
    goto LAB_00e16b38;
  }
  *(int *)(param_2 + 0xe4) = local_280;
  *(undefined4 *)(param_2 + 0xe8) = uStack_27c;
  *(undefined4 *)(param_2 + 0xec) = uStack_278;
  if (*(char *)(param_2 + 0x13c) == '\x03') {
    cVar6 = *(char *)(param_2 + 0x138);
    bVar21 = cVar6 == '\x03';
    if (bVar21) {
      cVar6 = *(char *)(param_2 + 0x134);
    }
    if (bVar21 && cVar6 == '\x03') {
      FUN_0193c3cc(param_2 + 0x114);
    }
  }
  *(undefined4 *)(param_2 + 0xb8) = 0;
  iVar12 = *(int *)(*(int *)(param_2 + 0xec) + 4);
  iVar8 = iVar12 + *(int *)(*(int *)(param_2 + 0xec) + 8) * 4;
  *(int *)(param_2 + 0x108) = iVar12;
  *(int *)(param_2 + 0x10c) = iVar8;
  *(undefined4 *)(param_2 + 0x110) = 0;
  while (iVar12 != iVar8) {
    *(int *)(param_2 + 0x108) = iVar12 + 4;
    iVar8 = *(int *)(param_2 + 0x110);
    *(undefined1 *)(param_2 + 0x14c) = 0;
    *(int *)(param_2 + 0x110) = iVar8 + 1;
    *(int *)(param_2 + 0x114) = iVar8;
    *(int *)(param_2 + 0x118) = iVar12;
switchD_00e15a84_caseD_6:
    uVar23 = FUN_00e06fc8(param_2 + 0x118,param_3);
    iVar8 = (int)((ulonglong)uVar23 >> 0x20);
    iVar12 = (int)uVar23;
    if (iVar12 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar5 = 6;
      goto LAB_00e16b38;
    }
    if (*(char *)(param_2 + 0x14c) == '\x03') {
      cVar6 = *(char *)(param_2 + 0x148);
      bVar21 = cVar6 == '\x03';
      if (bVar21) {
        cVar6 = *(char *)(param_2 + 0x144);
      }
      if (bVar21 && cVar6 == '\x03') {
        FUN_0193c3cc(param_2 + 0x124);
      }
    }
    if ((*(int *)(iVar8 + 0x18) == *(int *)(param_2 + 0xdc)) &&
       (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(param_2 + 0xd8)),
       iVar8 == 0)) {
      FUN_019f8c54(iVar12,1);
      puVar16 = *(undefined1 **)(param_2 + 0x114);
      *(undefined4 *)(param_2 + 0xb8) = 1;
      *(undefined1 **)(param_2 + 0xbc) = puVar16;
      goto LAB_00e16748;
    }
    FUN_019f8c54(iVar12,1);
    iVar8 = *(int *)(param_2 + 0x10c);
    iVar12 = *(int *)(param_2 + 0x108);
  }
  if (*(int *)(param_2 + 0xb8) == 0) {
    local_e4 = (undefined4 ***)FUN_00b59e94;
    local_e8 = (undefined4 ****)(param_2 + 0xd4);
    FUN_00664898(&local_d0,&DAT_005b2aa2,&local_e8);
    FUN_01a70fd4(&local_150,5,&local_d0);
    puVar16 = local_148;
    ppppuVar19 = local_14c;
    if (local_150 == (undefined4 ****)&DAT_00000003 && local_14c == (undefined4 ****)0x0)
    goto LAB_00e16748;
    local_2e4 = local_150;
    FUN_01bed4e2(auStack_270,&local_144,0x5c);
    FUN_01bed4e2(auStack_2c8,auStack_270,0x44);
    local_2e0 = local_22c;
    pppuStack_2dc = pppuStack_228;
    pppuStack_2d8 = pppuStack_224;
    pppuStack_2d4 = pppuStack_220;
    pppuStack_2d0 = pppuStack_21c;
    pppuStack_2cc = pppuStack_218;
    local_2ec = SUB41(puVar16,0);
LAB_00e16bac:
    uVar13 = (uint)puVar16 >> 8;
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xe4),*(undefined4 *)(param_2 + 0xe8));
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xb0),1);
    piVar9 = *(int **)(param_2 + 0xe0);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar9;
      bVar21 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar21);
    *piVar9 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 0xe0));
    }
    FUN_019bb7e0(*(undefined4 *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0xd8));
LAB_00e16578:
    FUN_019bb7e0(*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
    *(undefined1 *)(param_2 + 0x103) = 0;
    if (*(char *)(param_2 + 0x102) == '\x01') {
      FUN_00e16da0(param_2);
    }
  }
  else {
    puVar16 = *(undefined1 **)(param_2 + 0xbc);
LAB_00e16748:
    *(undefined1 **)(param_2 + 0xf0) = puVar16;
    FUN_00b1e1fc(param_2 + 0xf4,*(undefined4 *)(*(int *)(param_2 + 0xec) + 4),
                 *(undefined4 *)(*(int *)(param_2 + 0xec) + 8));
    uVar13 = *(uint *)(param_2 + 0xf0);
    if (*(uint *)(param_2 + 0xfc) <= uVar13) {
      FUN_006664cc(uVar13);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe16c08);
      (*pcVar1)();
    }
    iVar8 = *(int *)(param_2 + 0xf8);
    iVar12 = *(uint *)(param_2 + 0xfc) - 1;
    piVar9 = *(int **)(iVar8 + uVar13 * 4);
    *(undefined4 *)(iVar8 + uVar13 * 4) = *(undefined4 *)(iVar8 + iVar12 * 4);
    *(int *)(param_2 + 0xfc) = iVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar9;
      bVar21 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar21);
    *piVar9 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b5ef20();
    }
    *(int *)(param_2 + 400) = param_2 + 0xf4;
    *(undefined1 *)(param_2 + 0x1a0) = 0;
    *(int *)(param_2 + 0x194) = *(int *)(param_2 + 0xe0) + 0x3c0;
switchD_00e15a84_caseD_7:
    FUN_00e12f24(&local_150,param_2 + 0x108,param_3);
    puVar16 = local_148;
    ppppuVar19 = local_14c;
    ppppuVar4 = local_150;
    if (local_150 == (undefined4 ****)&SUB_00000004 && local_14c == (undefined4 ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar5 = 7;
      goto LAB_00e16b38;
    }
    puVar20 = auStack_1f8;
    local_2e4 = local_150;
    FUN_01bed4e2(puVar20,&local_144,0x44);
    ppppuVar18 = &local_210;
    local_210 = local_100;
    pppuStack_20c = pppuStack_fc;
    pppuStack_208 = pppuStack_f8;
    pppuStack_204 = pppuStack_f4;
    pppuStack_200 = pppuStack_f0;
    pppuStack_1fc = pppuStack_ec;
    FUN_00e12eb4(param_2 + 0x108);
    if (ppppuVar4 != (undefined4 ****)&DAT_00000003 || ppppuVar19 != (undefined4 ****)0x0) {
LAB_00e16b84:
      local_2ec = SUB41(puVar16,0);
      FUN_01bed4e2(auStack_2c8,puVar20,0x44);
      local_2e0 = (undefined4 ****)*ppppuVar18;
      pppuStack_2dc = ppppuVar18[1];
      pppuStack_2d8 = ppppuVar18[2];
      pppuStack_2d4 = ppppuVar18[3];
      pppuStack_2d0 = ppppuVar18[4];
      pppuStack_2cc = ppppuVar18[5];
      FUN_00b55288(param_2 + 0xf4);
      goto LAB_00e16bac;
    }
    *(undefined1 *)(param_2 + 0x178) = 0;
    uVar15 = *(undefined4 *)(param_2 + 0xec);
    cVar6 = *(char *)(param_2 + 0x101);
    uVar14 = *(undefined4 *)(param_2 + 0xc4);
    uVar11 = *(undefined4 *)(param_2 + 0xf0);
    *(char *)(param_2 + 0x179) = cVar6;
    *(undefined4 *)(param_2 + 0x170) = uVar14;
    *(undefined4 *)(param_2 + 0x174) = uVar15;
    *(undefined4 *)(param_2 + 0x160) = uVar11;
LAB_00e168b0:
    *(undefined4 *)(param_2 + 0x164) = uVar14;
    *(undefined4 *)(param_2 + 0x168) = uVar11;
    *(undefined4 *)(param_2 + 0x16c) = uVar15;
    if (cVar6 == '\0') {
      piVar9 = (int *)FUN_00b1d60c(uVar15,uVar11,&DAT_01c175e8);
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar9;
        bVar21 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar21);
      *piVar9 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b5ef20();
      }
      FUN_019e0044(*(int *)(**(int **)(param_2 + 0x164) + 0x54) + 8);
    }
    else {
      *(undefined1 *)(param_2 + 0x15c) = 0;
switchD_00e15c18_caseD_3:
      FUN_00e100c8(&local_150,param_2 + 0x108,param_3);
      puVar16 = local_148;
      ppppuVar19 = local_14c;
      ppppuVar4 = local_150;
      if (local_150 == (undefined4 ****)&SUB_00000004 && local_14c == (undefined4 ****)0x0) {
        *(undefined1 *)(param_2 + 0x178) = 3;
        *param_1 = 4;
        param_1[1] = 0;
        uVar5 = 8;
        goto LAB_00e16b38;
      }
      local_2e4 = local_150;
      FUN_01bed4e2(&local_d0,&local_144,0x44);
      local_e8 = local_100;
      local_e4 = pppuStack_fc;
      local_e0 = pppuStack_f8;
      pppuStack_dc = pppuStack_f4;
      pppuStack_d8 = pppuStack_f0;
      pppuStack_d4 = pppuStack_ec;
      if (*(char *)(param_2 + 0x15c) == '\x03') {
        FUN_00e1003c(param_2 + 0x108);
      }
      if (ppppuVar4 != (undefined4 ****)&DAT_00000003 || ppppuVar19 != (undefined4 ****)0x0) {
        puVar20 = auStack_70;
        FUN_01bed4e2(puVar20,&local_d0,0x44);
        ppppuVar18 = &local_88;
        local_88 = local_e8;
        pppuStack_84 = local_e4;
        pppuStack_80 = local_e0;
        pppuStack_7c = pppuStack_dc;
        pppuStack_78 = pppuStack_d8;
        pppuStack_74 = pppuStack_d4;
        *(undefined1 *)(param_2 + 0x178) = 1;
        goto LAB_00e16b84;
      }
      piVar9 = (int *)FUN_00b1d60c(*(undefined4 *)(param_2 + 0x16c),*(undefined4 *)(param_2 + 0x168)
                                   ,&DAT_01c17608);
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar9;
        bVar21 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar21);
      *piVar9 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b5ef20();
      }
      *(undefined1 *)(*(int *)(**(int **)(param_2 + 0x164) + 0x58) + 8) = 1;
      FUN_019e0044(*(int *)(**(int **)(param_2 + 0x164) + 0x54) + 8);
    }
    *(undefined1 *)(param_2 + 0x178) = 1;
    FUN_0160aaa4(&local_150,0);
    local_2ec = local_150._0_1_;
    uVar13 = (uint)local_150 >> 8;
    local_110 = 0;
    FUN_01bed4e2(auStack_2c8,(uint)&local_150 | 4,0x44);
    FUN_00b55288(param_2 + 0xf4);
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xe4),*(undefined4 *)(param_2 + 0xe8));
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xb0),1);
    piVar9 = *(int **)(param_2 + 0xe0);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar9;
      bVar21 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar21);
    *piVar9 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 0xe0));
    }
    FUN_019bb7e0(*(undefined4 *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0xd8));
    FUN_019bb7e0(*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
    ppppuVar19 = (undefined4 ****)0x0;
    local_2e4 = (undefined4 ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0x103) = 0;
  }
  *param_1 = local_2e4;
  param_1[1] = ppppuVar19;
  *(char *)((int)param_1 + 0xb) = (char)(uVar13 >> 0x10);
  *(short *)((int)param_1 + 9) = (short)uVar13;
  *(undefined1 *)(param_1 + 2) = local_2ec;
  FUN_01bed4e2(param_1 + 3,auStack_2c8,0x44);
  param_1[0x14] = local_2e0;
  param_1[0x15] = pppuStack_2dc;
  param_1[0x16] = pppuStack_2d8;
  param_1[0x17] = pppuStack_2d4;
  param_1[0x18] = pppuStack_2d0;
  param_1[0x19] = pppuStack_2cc;
  uVar5 = 1;
LAB_00e16b38:
  *(undefined1 *)(param_2 + 0x100) = uVar5;
  return;
}

