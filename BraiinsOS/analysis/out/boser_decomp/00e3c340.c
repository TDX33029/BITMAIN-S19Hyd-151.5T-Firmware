// FUN_00e3c340 @ 00e3c340 size=5252 calls_out=41 calls_in=2
// strings: Bosminer.get_hashrate_target_tuned_profiles | BUG: request parameters cell was already initialized. | Bosminer.get_power_target_tuned_profiles | event open/boser/boser/src/advanced_settings/bosminer_provider.rs:72 | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e3c340(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint *****pppppuVar9;
  uint *****pppppuVar10;
  undefined *puVar11;
  uint uVar12;
  uint *****pppppuVar13;
  undefined4 uVar14;
  uint *****pppppuVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  uint *****pppppuVar19;
  uint *****pppppuVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined4 local_b98;
  int local_b94;
  uint *****local_b90;
  uint *****local_b8c;
  uint *****local_b88;
  undefined1 auStack_b78 [80];
  undefined1 auStack_b28 [80];
  uint *****pppppuStack_ad8;
  uint *****pppppuStack_ad4;
  uint *****pppppuStack_ad0;
  uint *****pppppuStack_acc;
  undefined4 uStack_ac8;
  undefined4 uStack_ac4;
  undefined4 local_ac0;
  undefined4 uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  uint ****local_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  uint uStack_a9c;
  int iStack_a98;
  undefined4 uStack_a94;
  uint ****local_a90;
  undefined4 local_a8c;
  undefined4 uStack_a88;
  uint local_a84;
  int local_a80;
  undefined4 local_a7c;
  uint *****local_a78;
  undefined4 local_a74;
  undefined4 *local_a70;
  uint *****local_a20;
  uint *****pppppuStack_a1c;
  uint *****pppppuStack_a18;
  uint *****local_a10;
  uint *****local_a0c;
  uint *****local_a08;
  uint *****pppppuStack_9c0;
  uint *****pppppuStack_9bc;
  uint *****pppppuStack_9b8;
  uint *****pppppuStack_9b4;
  uint *****local_9b0;
  uint *****pppppuStack_9ac;
  uint *****pppppuStack_9a8;
  uint *****pppppuStack_9a4;
  uint *****local_9a0;
  uint *****pppppuStack_99c;
  uint *****pppppuStack_998;
  uint *****pppppuStack_994;
  undefined1 auStack_990 [72];
  undefined1 auStack_948 [12];
  int local_93c;
  uint *****local_928;
  uint *****pppppuStack_924;
  uint *****pppppuStack_920;
  uint *****pppppuStack_91c;
  uint *****local_918;
  uint *****pppppuStack_914;
  uint *****pppppuStack_910;
  uint *****pppppuStack_90c;
  uint *****pppppuStack_908;
  uint *****pppppuStack_904;
  uint *****local_900;
  uint *****pppppuStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  uint *****local_8e8;
  uint *****local_8e4;
  uint *****local_8e0;
  uint *****local_8dc;
  uint *****local_8d8;
  uint *****local_8d4;
  undefined1 auStack_8d0 [712];
  uint *****local_608;
  uint *****local_604;
  uint *****local_600;
  uint *****local_5fc;
  uint *****local_5f8;
  uint *****local_5f4;
  uint *****local_5f0;
  uint *****local_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 local_5a8;
  undefined4 local_5a4;
  uint *****local_328;
  uint *****local_324;
  uint *****local_320;
  undefined4 local_31c;
  
  puVar4 = (undefined4 *)(param_2 + 0xc0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xa4)) {
  case 0:
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x90);
    *(undefined1 *)(param_2 + 0xa5) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar5 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar5 != (int *)0x0) {
      local_5f8 = (uint *****)&DAT_80000000;
      local_5fc = (uint *****)0x0;
      local_604 = (uint *****)0x0;
      local_608 = (uint *****)0x0;
      FUN_0196ac88(&local_8e8,&local_608);
      uVar2 = local_8e8._0_1_;
      uVar12 = (uint)local_8e8 & 0xff;
      if (uVar12 == 6) {
        FUN_00e0fe5c(local_8e4);
      }
      else {
        FUN_01bed4e2((uint)&local_328 | 1,(uint)&local_8e8 | 1,0x17);
        local_328 = (uint *****)CONCAT31(local_328._1_3_,uVar2);
        if (uVar12 == 5) {
          if (local_324 == (uint *****)0x0) {
            local_31c = 0;
          }
          local_5f0 = local_324;
          local_600 = local_324;
          local_608 = local_324;
          if (local_324 != (uint *****)0x0) {
            local_608 = (uint *****)&DAT_00000001;
          }
          local_5ec = local_320;
          local_5f4 = (uint *****)0x0;
          local_5fc = local_320;
          local_604 = (uint *****)0x0;
          local_5f8 = local_608;
          local_5e8 = local_31c;
          FUN_00fea674(auStack_948,&local_608);
          if (local_93c != 0) {
            FUN_0067b1ac(&local_608,auStack_948);
            local_918 = local_608;
            pppppuStack_914 = local_604;
            pppppuStack_910 = local_600;
            cVar3 = (char)local_5fc;
            local_928._0_3_ = (undefined3)((uint)local_5fc >> 8);
            FUN_00e0febc(&local_328);
            if (cVar3 != '\x02') {
              local_608 = local_918;
              local_604 = pppppuStack_914;
              local_600 = pppppuStack_910;
              local_5fc = (uint *****)CONCAT31((int3)local_928,cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar5 + 0x18) != 0) {
                FUN_00b065ec(*piVar5 + 8,&local_608);
              }
              if ((char)local_5fc != '\x02') {
                local_8e8 = local_608;
                local_8e4 = local_604;
                local_8e0 = local_600;
                local_8dc = local_5fc;
                FUN_019cf348(&local_8e8);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                  local_320 = (uint *****)(DAT_01d4c480 + 0x1c);
                  if (*(uint ******)(DAT_01d4c480 + 0x20) == (uint *****)0x0) {
LAB_00e3da7c:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_8e4 = (uint *****)&local_a78;
                  local_600 = *(uint ******)(DAT_01d4c480 + 0x24);
                  local_5fc = *(uint ******)(DAT_01d4c480 + 0x28);
                  local_8e8 = (uint *****)&local_608;
                  local_324 = (uint *****)&DAT_00000001;
                  local_5f8 = (uint *****)0x0;
                  local_8e0 = (uint *****)&DAT_01d2ea4c;
                  local_a74 = 0x6b;
                  local_a78 = (uint *****)0x3fe987;
                  local_608 = (uint *****)*local_320;
                  local_604 = *(uint ******)(DAT_01d4c480 + 0x20);
                  local_328 = (uint *****)&local_8e8;
                  FUN_00e0ff40(&local_328);
                }
                else {
                  iVar6 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_a0c = *(uint ******)(DAT_01d4c480 + 0x14);
                    local_a08 = *(uint ******)(DAT_01d4c480 + 0x18);
                    local_a10 = (uint *****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar18 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar18 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar8 = (*(code *)puVar18[3])(pcVar1,&local_a10);
                    if (iVar8 != 0) {
                      local_a70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(uint ******)(DAT_01d4c480 + 0x20) == (uint *****)0x0) goto LAB_00e3da7c;
                      local_324 = &local_a90;
                      local_328 = (uint *****)&local_608;
                      local_a78 = (uint *****)&local_328;
                      local_600 = *(uint ******)(DAT_01d4c480 + 0x24);
                      local_5fc = *(uint ******)(DAT_01d4c480 + 0x28);
                      local_5f8 = (uint *****)0x0;
                      local_a74 = 1;
                      local_320 = (uint *****)&DAT_01d2ea4c;
                      local_a8c = 0x6b;
                      local_a90 = (uint ****)0x3fe987;
                      local_8e8 = local_a10;
                      local_8e4 = local_a0c;
                      local_8e0 = local_a08;
                      local_608 = (uint *****)*local_a70;
                      local_604 = *(uint ******)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar6,pcVar1,puVar18[4],&local_8e8,&local_a78);
                    }
                  }
                }
              }
            }
            goto LAB_00e3cdd0;
          }
          FUN_0165a1f4(auStack_948);
        }
        FUN_00e0febc(&local_328);
      }
    }
LAB_00e3cdd0:
    *(undefined1 *)(param_2 + 0xfc) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17144);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17144);
  case 4:
    goto switchD_00e3c380_caseD_4;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x644)) {
    case 0:
      puVar18 = *(undefined4 **)(param_2 + 0x640);
      goto LAB_00e3cf68;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c17918);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c17918);
    case 3:
    }
    goto LAB_00e3cfdc;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x72c)) {
    case 0:
      iVar6 = *(int *)(param_2 + 0x728);
      goto LAB_00e3c44c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c17928);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c17928);
    case 3:
    }
    goto LAB_00e3c500;
  }
  FUN_00e100c8(&local_608,param_2 + 0xa8,param_3);
  pppppuVar20 = local_5fc;
  pppppuVar13 = local_604;
  pppppuVar10 = local_608;
  if (local_608 == (uint *****)&SUB_00000004 && local_604 == (uint *****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_00e3d500;
  }
  local_b88 = local_600;
  puVar16 = auStack_b78;
  local_b8c = local_5f8;
  local_b90 = local_5f4;
  FUN_01bed4e2(puVar16,&local_5f0,0x50);
  if (*(char *)(param_2 + 0xfc) == '\x03') {
    FUN_00e1003c(param_2 + 0xa8);
  }
  if (pppppuVar10 == (uint *****)&DAT_00000003 && pppppuVar13 == (uint *****)0x0) {
    *(undefined1 *)(param_2 + 0x170) = 0;
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x94);
switchD_00e3c380_caseD_4:
    FUN_00e101ec(&local_608,param_2 + 0xa8,param_3);
    pppppuVar15 = local_5f8;
    pppppuVar20 = local_5fc;
    pppppuVar9 = local_600;
    pppppuVar13 = local_604;
    pppppuVar10 = local_608;
    if (local_608 == (uint *****)&SUB_00000004 && local_604 == (uint *****)0x0) {
      uVar2 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e3d500;
    }
    puVar16 = auStack_b28;
    local_b88 = local_600;
    local_b8c = local_5f8;
    local_b90 = local_5f4;
    FUN_01bed4e2(puVar16,&local_5f0,0x50);
    cVar3 = *(char *)(param_2 + 0x170);
    bVar21 = cVar3 == '\x03';
    if (bVar21) {
      cVar3 = *(char *)(param_2 + 0x16c);
    }
    if (bVar21 && cVar3 == '\x03') {
      FUN_00df984c(param_2 + 0xb0);
    }
    if (pppppuVar10 != (uint *****)&DAT_00000003 || pppppuVar13 != (uint *****)0x0)
    goto LAB_00e3d014;
    *(uint ******)(param_2 + 0x9c) = pppppuVar20;
    *(uint ******)(param_2 + 0xa0) = pppppuVar15;
    puVar18 = (undefined4 *)(param_2 + 0x98);
    *puVar18 = pppppuVar9;
    *(undefined1 *)(param_2 + 0x644) = 0;
    *(undefined4 **)(param_2 + 0x640) = puVar18;
LAB_00e3cf68:
    FUN_019cfcf0(&local_608);
    local_918 = local_608;
    pppppuStack_914 = local_604;
    pppppuStack_910 = local_600;
    pppppuStack_90c = local_5fc;
    pppppuStack_908 = local_5f8;
    pppppuStack_904 = local_5f4;
    local_900 = local_5f0;
    pppppuStack_8fc = local_5ec;
    uStack_8f8 = local_5e8;
    uStack_8f4 = uStack_5e4;
    uStack_8f0 = local_5e0;
    uStack_8ec = uStack_5dc;
    *(undefined4 *)(param_2 + 0x104) = 0x28;
    *(undefined4 *)(param_2 + 200) = 0x8000000a;
    *(char **)(param_2 + 0x100) = "Bosminer.get_power_target_tuned_profiles";
    *(uint ******)(param_2 + 0x108) = local_608;
    *(uint ******)(param_2 + 0x10c) = local_604;
    *(uint ******)(param_2 + 0x110) = local_600;
    *(uint ******)(param_2 + 0x114) = local_5fc;
    *(uint ******)(param_2 + 0x118) = local_5f8;
    *(uint ******)(param_2 + 0x11c) = local_5f4;
    *(uint ******)(param_2 + 0x120) = local_5f0;
    *(uint ******)(param_2 + 0x124) = local_5ec;
    *(undefined4 *)(param_2 + 0x128) = local_5e8;
    *(undefined4 *)(param_2 + 300) = uStack_5e4;
    *(undefined4 *)(param_2 + 0x130) = local_5e0;
    *(undefined4 *)(param_2 + 0x134) = uStack_5dc;
    *(undefined4 **)(param_2 + 0x138) = puVar18;
    *(undefined1 *)(param_2 + 0x638) = 0;
    *(undefined1 *)(param_2 + 0x13f) = 0;
LAB_00e3cfdc:
    local_b94 = param_2 + 0xa8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x638)) {
    case 0:
      FUN_01bed4e2(param_2 + 0x370,local_b94,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    case 3:
    }
    FUN_00df9fa8(&local_608,param_2 + 0x370,param_3);
    pppppuVar13 = local_604;
    pppppuVar10 = local_608;
    if (local_608 == (uint *****)&DAT_0000001e && local_604 == (uint *****)0x0) {
      *(undefined1 *)(param_2 + 0x638) = 3;
      *(undefined1 *)(param_2 + 0x644) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 5;
      goto LAB_00e3d500;
    }
    local_928 = local_600;
    pppppuStack_924 = local_5fc;
    pppppuStack_920 = local_5f8;
    pppppuStack_91c = local_5f4;
    FUN_01bed4e2(&local_328,&local_5f0,0x2c8);
    FUN_00df9ef8(param_2 + 0x370);
    if (pppppuVar10 == (uint *****)&DAT_0000001d && pppppuVar13 == (uint *****)0x0) {
      local_9b0 = local_928;
      pppppuStack_9ac = pppppuStack_924;
      pppppuStack_9a8 = pppppuStack_920;
      pppppuStack_9a4 = pppppuStack_91c;
      *(undefined1 *)(param_2 + 0x638) = 1;
      *(undefined1 *)(param_2 + 0x644) = 1;
      local_9a0 = local_928;
      pppppuStack_99c = pppppuStack_924;
      pppppuStack_998 = pppppuStack_920;
      pppppuStack_994 = pppppuStack_91c;
      local_608 = (uint *****)&local_8e8;
      local_8e0 = (uint *****)0x0;
      local_8e8 = (uint *****)0x0;
      local_5fc = (uint *****)0x0;
      local_8e4 = (uint *****)&DAT_00000001;
      local_600 = (uint *****)0x60000020;
      local_604 = (uint *****)&DAT_01c17420;
      iVar6 = FUN_00aeeb78(&local_9a0,&local_608);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_918,&DAT_01c17458,&DAT_01d30334);
      }
      local_328 = local_8e8;
      local_324 = local_8e4;
      local_320 = local_8e0;
      FUN_01a70fd4(&local_608,0xd,&local_328);
      FUN_00dfb5e8(&local_9a0);
      pppppuVar13 = local_604;
      pppppuVar10 = local_608;
      pppppuStack_9c0 = local_600;
      pppppuStack_9bc = local_5fc;
      pppppuStack_9b8 = local_5f8;
      pppppuStack_9b4 = local_5f4;
      FUN_01bed4e2(&local_a10,&local_5f0,0x50);
      if (pppppuVar10 == (uint *****)&DAT_00000003 && pppppuVar13 == (uint *****)0x0)
      goto LAB_00e3d244;
      *(uint ******)(param_2 + 0x128) = pppppuVar10;
      *(uint ******)(param_2 + 300) = pppppuVar13;
      *(uint ******)(param_2 + 0x130) = pppppuStack_9c0;
      *(uint ******)(param_2 + 0x134) = pppppuStack_9bc;
      *(uint ******)(param_2 + 0x138) = pppppuStack_9b8;
      *(uint ******)(param_2 + 0x13c) = pppppuStack_9b4;
      FUN_01bed4e2(param_2 + 0x140,&local_a10,0x50);
    }
    else {
      FUN_01bed4e2(auStack_8d0,&local_328,0x2c8);
      local_8e0 = local_928;
      local_8dc = pppppuStack_924;
      local_8d8 = pppppuStack_920;
      local_8d4 = pppppuStack_91c;
      local_8e4 = pppppuVar13;
      local_8e8 = pppppuVar10;
      if (pppppuVar10 != (uint *****)&DAT_0000000e || pppppuVar13 != (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      local_9b0 = local_928;
      pppppuStack_9ac = pppppuStack_924;
      pppppuStack_9a8 = pppppuStack_920;
      pppppuStack_9a4 = pppppuStack_91c;
      *(undefined1 *)(param_2 + 0x638) = 1;
      *(undefined1 *)(param_2 + 0x644) = 1;
      local_9a0 = local_928;
      pppppuStack_99c = pppppuStack_924;
      pppppuStack_998 = pppppuStack_920;
      pppppuStack_994 = pppppuStack_91c;
      pppppuStack_9c0 = local_928;
      pppppuStack_9bc = pppppuStack_924;
      pppppuStack_9b8 = pppppuStack_920;
      pppppuStack_9b4 = pppppuStack_91c;
LAB_00e3d244:
      *(uint ******)(param_2 + 0x130) = pppppuStack_9c0;
      *(uint ******)(param_2 + 0x134) = pppppuStack_9bc;
      *(uint ******)(param_2 + 0x138) = pppppuStack_9b8;
      *(uint ******)(param_2 + 0x13c) = pppppuStack_9b4;
      *(undefined4 *)(param_2 + 0x128) = 3;
      *(undefined4 *)(param_2 + 300) = 0;
    }
    pppppuVar10 = *(uint ******)(param_2 + 0x128);
    pppppuVar13 = *(uint ******)(param_2 + 300);
    if (pppppuVar10 != (uint *****)&DAT_00000003 || pppppuVar13 != (uint *****)0x0) {
      local_b88 = *(uint ******)(param_2 + 0x130);
      local_b8c = *(uint ******)(param_2 + 0x138);
      pppppuVar20 = *(uint ******)(param_2 + 0x134);
      local_b90 = *(uint ******)(param_2 + 0x13c);
      FUN_01bed4e2(auStack_990,param_2 + 0x140,0x48);
      uVar14 = *(undefined4 *)(param_2 + 0x188);
      uVar17 = *(undefined4 *)(param_2 + 0x18c);
      FUN_0084ec48(param_2 + 0x98);
      goto LAB_00e3d4ac;
    }
    if ((*(uint *)(param_2 + 0x130) & 1) == 0) {
      local_a20 = *(uint ******)(param_2 + 0x134);
      pppppuStack_a1c = *(uint ******)(param_2 + 0x138);
      pppppuStack_a18 = *(uint ******)(param_2 + 0x13c);
LAB_00e3d3fc:
      *(uint ******)(param_2 + 200) = local_a20;
      *(uint ******)(param_2 + 0xcc) = pppppuStack_a1c;
      *(uint ******)(param_2 + 0xd0) = pppppuStack_a18;
      *puVar4 = 3;
      *(undefined4 *)(param_2 + 0xc4) = 0;
    }
    else {
      local_328 = *(uint ******)(param_2 + 0x134);
      local_324 = *(uint ******)(param_2 + 0x138);
      local_320 = *(uint ******)(param_2 + 0x13c);
      local_600 = (uint *****)0x0;
      local_608 = (uint *****)0x0;
      local_8e8 = (uint *****)&local_a10;
      local_604 = (uint *****)&DAT_00000001;
      local_8e4 = (uint *****)&LAB_0193a90c;
      local_a10 = (uint *****)&local_328;
      iVar6 = FUN_012fa178(&local_608,&DAT_01c17420,&DAT_00590e5f,&local_8e8);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_918,&DAT_01c17458,&DAT_01d30334);
      }
      local_8e8 = local_608;
      local_8e4 = local_604;
      local_8e0 = local_600;
      FUN_01a70fd4(&local_608,0xd,&local_8e8);
      FUN_019bb7e0(local_328,local_324);
      pppppuVar13 = local_604;
      pppppuVar10 = local_608;
      local_a20 = local_600;
      pppppuStack_a1c = local_5fc;
      pppppuStack_a18 = local_5f8;
      FUN_01bed4e2(&local_a78,&local_5f4,0x54);
      if (pppppuVar10 == (uint *****)&DAT_00000003 && pppppuVar13 == (uint *****)0x0)
      goto LAB_00e3d3fc;
      *puVar4 = pppppuVar10;
      *(uint ******)(param_2 + 0xc4) = pppppuVar13;
      *(uint ******)(param_2 + 200) = local_a20;
      *(uint ******)(param_2 + 0xcc) = pppppuStack_a1c;
      *(uint ******)(param_2 + 0xd0) = pppppuStack_a18;
      FUN_01bed4e2(param_2 + 0xd4,&local_a78,0x54);
    }
    pppppuVar10 = (uint *****)*puVar4;
    pppppuVar13 = *(uint ******)(param_2 + 0xc4);
    if (pppppuVar10 != (uint *****)&DAT_00000003 || pppppuVar13 != (uint *****)0x0) {
      local_b88 = *(uint ******)(param_2 + 200);
      local_b8c = *(uint ******)(param_2 + 0xd0);
      pppppuVar20 = *(uint ******)(param_2 + 0xcc);
      local_b90 = *(uint ******)(param_2 + 0xd4);
      FUN_01bed4e2(auStack_990,param_2 + 0xd8,0x48);
      uVar14 = *(undefined4 *)(param_2 + 0x120);
      uVar17 = *(undefined4 *)(param_2 + 0x124);
      FUN_0084ec48(param_2 + 0x98);
      goto LAB_00e3d4ac;
    }
    uVar14 = 0;
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0xd0);
    puVar11 = *(undefined **)(param_2 + 0xbc);
    iVar6 = (int)puVar11 * 0x48;
    if (&UNK_01c71c71 < puVar11) {
LAB_00e3d464:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,iVar6);
    }
    iVar8 = *(int *)(param_2 + 0xb8);
    if (iVar6 == 0) {
      uVar22 = CONCAT44((undefined4 *)(param_2 + 0xb4),8);
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar14 = 8;
      uVar22 = FUN_01298504(iVar6,8);
      puVar7 = puVar11;
      if ((int)uVar22 == 0) goto LAB_00e3d464;
    }
    local_b98 = (undefined4)uVar22;
    if (puVar11 != (undefined *)0x0) {
      FUN_01495f30(&local_608,(int)((ulonglong)uVar22 >> 0x20),*(undefined4 *)(iVar8 + 0x30),
                   *(undefined4 *)(iVar8 + 0x34),*(undefined4 *)(iVar8 + 0x38));
      if (*(int *)(iVar8 + 0x18) == 6 && *(int *)(iVar8 + 0x1c) == 0) {
        FUN_01bf0b64((int)*(undefined8 *)(iVar8 + 0x20),
                     (int)((ulonglong)*(undefined8 *)(iVar8 + 0x20) >> 0x20));
      }
      FUN_00fe47b0(&local_608,iVar8);
                    /* WARNING: Could not recover jumptable at 0x00e3d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00e3d634 + *(int *)(&DAT_00e3d634 + (int)local_608 * 4)))();
      return;
    }
    *(undefined **)(param_2 + 0xa8) = puVar7;
    *(undefined4 *)(param_2 + 0xac) = local_b98;
    *(undefined4 *)(param_2 + 0xb0) = 0;
    *(undefined1 *)(param_2 + 0x72c) = 0;
    iVar6 = param_2 + 0x98;
    *(int *)(param_2 + 0x728) = iVar6;
LAB_00e3c44c:
    FUN_019cfcf0(&local_608);
    local_918 = local_608;
    pppppuStack_914 = local_604;
    pppppuStack_910 = local_600;
    pppppuStack_90c = local_5fc;
    pppppuStack_908 = local_5f8;
    pppppuStack_904 = local_5f4;
    local_900 = local_5f0;
    pppppuStack_8fc = local_5ec;
    uStack_8f8 = local_5e8;
    uStack_8f4 = uStack_5e4;
    uStack_8f0 = local_5e0;
    uStack_8ec = uStack_5dc;
    *(undefined4 *)(param_2 + 0x1ec) = 0x2b;
    *(undefined4 *)(param_2 + 0x1b0) = 0x8000000b;
    *(char **)(param_2 + 0x1e8) = "Bosminer.get_hashrate_target_tuned_profiles";
    *(uint ******)(param_2 + 0x1f0) = local_608;
    *(uint ******)(param_2 + 500) = local_604;
    *(uint ******)(param_2 + 0x1f8) = local_600;
    *(uint ******)(param_2 + 0x1fc) = local_5fc;
    *(uint ******)(param_2 + 0x200) = local_5f8;
    *(uint ******)(param_2 + 0x204) = local_5f4;
    *(uint ******)(param_2 + 0x208) = local_5f0;
    *(uint ******)(param_2 + 0x20c) = local_5ec;
    *(undefined4 *)(param_2 + 0x210) = local_5e8;
    *(undefined4 *)(param_2 + 0x214) = uStack_5e4;
    *(undefined4 *)(param_2 + 0x218) = local_5e0;
    *(undefined4 *)(param_2 + 0x21c) = uStack_5dc;
    *(int *)(param_2 + 0x220) = iVar6;
    *(undefined1 *)(param_2 + 0x720) = 0;
    *(undefined1 *)(param_2 + 0x227) = 0;
LAB_00e3c500:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x720)) {
    case 0:
      FUN_01bed4e2(param_2 + 0x458,param_2 + 400,0x2c8);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    case 3:
    }
    FUN_00df9fa8(&local_608,param_2 + 0x458,param_3);
    local_b8c = local_5f4;
    pppppuVar19 = local_5f8;
    pppppuVar15 = local_5fc;
    pppppuVar9 = local_600;
    pppppuVar13 = local_604;
    pppppuVar10 = local_608;
    if (local_608 == (uint *****)&DAT_0000001e && local_604 == (uint *****)0x0) {
      *param_1 = 4;
      *(undefined1 *)(param_2 + 0x720) = 3;
      *(undefined1 *)(param_2 + 0x72c) = 3;
      uVar2 = 6;
      param_1[1] = 0;
      goto LAB_00e3d500;
    }
    FUN_01bed4e2(&local_328,&local_5f0,0x2c8);
    FUN_00df9ef8(param_2 + 0x458);
    if (pppppuVar10 == (uint *****)&DAT_0000001d && pppppuVar13 == (uint *****)0x0) {
      local_8e8 = pppppuVar9;
      local_608 = (uint *****)&local_328;
      local_324 = (uint *****)&DAT_00000001;
      *(undefined1 *)(param_2 + 0x720) = 1;
      *(undefined1 *)(param_2 + 0x72c) = 1;
      local_8dc = local_b8c;
      local_8e0 = pppppuVar19;
      local_8e4 = pppppuVar15;
      local_320 = (uint *****)0x0;
      local_328 = (uint *****)0x0;
      local_5fc = (uint *****)0x0;
      local_600 = (uint *****)0x60000020;
      local_604 = (uint *****)&DAT_01c17420;
      iVar6 = FUN_00aeeb78(&local_8e8,&local_608);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_918,&DAT_01c17458,&DAT_01d30334);
      }
      local_918 = local_328;
      pppppuStack_914 = local_324;
      pppppuStack_910 = local_320;
      FUN_01a70fd4(&local_608,0xd);
      FUN_00dfb5e8(&local_8e8);
      local_b90 = local_5f4;
      pppppuVar19 = local_5f8;
      pppppuVar20 = local_5fc;
      pppppuVar9 = local_600;
      pppppuVar13 = local_604;
      pppppuVar10 = local_608;
      local_b88 = local_600;
      local_b8c = local_5f8;
      FUN_01bed4e2(&local_a78,&local_5f0,0x48);
      if (pppppuVar10 == (uint *****)&DAT_00000003 && pppppuVar13 == (uint *****)0x0) {
        pppppuVar15 = pppppuVar20;
        local_b8c = local_b90;
        goto LAB_00e3c92c;
      }
      FUN_01bed4e2(auStack_990,&local_a78,0x48);
      FUN_0132b958(*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac),8,0x48);
      FUN_0084ec48(param_2 + 0x98);
      uVar14 = local_5a8;
      uVar17 = local_5a4;
LAB_00e3cda8:
      FUN_0132b958(*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),8,0x68);
      goto LAB_00e3d4ac;
    }
    FUN_01bed4e2(auStack_8d0,&local_328,0x2c8);
    local_8e4 = pppppuVar13;
    local_8e8 = pppppuVar10;
    local_8d4 = local_b8c;
    local_8d8 = pppppuVar19;
    local_8dc = pppppuVar15;
    local_8e0 = pppppuVar9;
    if (pppppuVar10 != (uint *****)&DAT_0000000f || pppppuVar13 != (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
    }
    *(undefined1 *)(param_2 + 0x720) = 1;
    *(undefined1 *)(param_2 + 0x72c) = 1;
LAB_00e3c92c:
    if (((uint)pppppuVar9 & 1) != 0) {
      local_8e4 = (uint *****)&LAB_0193a90c;
      local_8e8 = (uint *****)&local_a78;
      local_600 = (uint *****)0x0;
      local_608 = (uint *****)0x0;
      local_a78 = (uint *****)&local_328;
      local_604 = (uint *****)&DAT_00000001;
      local_328 = pppppuVar15;
      local_324 = pppppuVar19;
      local_320 = local_b8c;
      iVar6 = FUN_012fa178(&local_608,&DAT_01c17420,&DAT_00590e5f,&local_8e8);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_918,&DAT_01c17458,&DAT_01d30334);
      }
      local_8e8 = local_608;
      local_8e4 = local_604;
      local_8e0 = local_600;
      FUN_01a70fd4(&local_608,0xd,&local_8e8);
      FUN_019bb7e0(pppppuVar15,local_324);
      local_b90 = local_5f4;
      local_b8c = local_5f8;
      pppppuVar19 = local_5fc;
      pppppuVar15 = local_600;
      pppppuVar13 = local_604;
      pppppuVar10 = local_608;
      FUN_01bed4e2(&local_a10,&local_5f0,0x48);
      if (pppppuVar10 != (uint *****)&DAT_00000003 || pppppuVar13 != (uint *****)0x0) {
        local_b88 = pppppuVar15;
        FUN_01bed4e2(auStack_990,&local_a10,0x48);
        FUN_0132b958(*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac),8,0x48);
        FUN_0084ec48(param_2 + 0x98);
        uVar14 = local_5a8;
        uVar17 = local_5a4;
        pppppuVar20 = pppppuVar19;
        goto LAB_00e3cda8;
      }
    }
    if (0xb8e38de8 < (uint)((int)local_b8c * 0x68)) {
      uVar14 = 0;
      pppppuVar10 = local_b8c;
LAB_00e3ca44:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,pppppuVar10);
    }
    uVar12 = (uint)((int)local_b8c * 0x68) / 0x68;
    local_b88 = (uint *****)0x8;
    local_a84 = 0;
    if ((int)local_b8c * -0x68 != 0) {
      uVar14 = 8;
      pppppuVar10 = (uint *****)(uVar12 * 0x48);
      local_b88 = (uint *****)FUN_01298504(pppppuVar10);
      local_a84 = uVar12;
      if (local_b88 == (uint *****)0x0) goto LAB_00e3ca44;
    }
    if (local_b8c != (uint *****)0x0) {
      FUN_01495f30(&local_608,pppppuVar19[0xe],pppppuVar19[0xc],pppppuVar19[0xd],pppppuVar19[0xe]);
      if ((uint)-(int)pppppuVar19[7] < (uint)(pppppuVar19[6] < (uint ****)0x5)) {
                    /* WARNING: Could not recover jumptable at 0x00e3cb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00e3cb3c + *(int *)(&DAT_00e3cb3c + (int)pppppuVar19[6] * 4)))
                  (pppppuVar19[8],pppppuVar19[9]);
        return;
      }
      FUN_00fe47b0(&local_608,pppppuVar19);
                    /* WARNING: Could not recover jumptable at 0x00e3cbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00e3cbb4 + *(int *)(&DAT_00e3cbb4 + (int)local_608 * 4)))();
      return;
    }
    local_a90 = *(uint *****)(param_2 + 0xa8);
    local_a8c = *(undefined4 *)(param_2 + 0xac);
    uStack_a88 = *(undefined4 *)(param_2 + 0xb0);
    local_a80 = (int)local_b88;
    local_a7c = 0;
    FUN_0160aaa4(&local_608,0);
    local_b90 = local_5fc;
    pppppuVar20 = local_604;
    local_aa8 = local_a90;
    uStack_aa4 = local_a8c;
    uStack_aa0 = uStack_a88;
    uStack_a9c = local_a84;
    iStack_a98 = local_a80;
    uStack_a94 = local_a7c;
    local_b88 = local_608;
    local_b8c = local_600;
    pppppuStack_ad8 = local_5f8;
    pppppuStack_ad4 = local_5f4;
    pppppuStack_ad0 = local_5f0;
    pppppuStack_acc = local_5ec;
    uStack_ac8 = local_5e8;
    uStack_ac4 = uStack_5e4;
    local_ac0 = local_5e0;
    uStack_abc = uStack_5dc;
    uStack_ab8 = uStack_5d8;
    uStack_ab4 = uStack_5d4;
    uStack_ab0 = uStack_5d0;
    uStack_aac = uStack_5cc;
    FUN_0084ec48(param_2 + 0x98);
    FUN_0132b958(pppppuVar15,pppppuVar19,8,0x68);
    FUN_0132b958(*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),8,0x68);
    FUN_01bed4e2(auStack_990,&pppppuStack_ad8,0x48);
    FUN_00f9604c(param_2 + 0x48);
    uVar14 = 0;
    pppppuVar10 = (uint *****)&DAT_00000003;
    pppppuVar13 = (uint *****)0x0;
    uVar17 = uStack_5cc;
  }
  else {
LAB_00e3d014:
    FUN_01bed4e2(auStack_990,puVar16,0x48);
    uVar14 = *(undefined4 *)(puVar16 + 0x48);
    uVar17 = *(undefined4 *)(puVar16 + 0x4c);
LAB_00e3d4ac:
    FUN_00f9604c(param_2 + 0x48);
    if (*(char *)(param_2 + 0xa5) == '\x01') {
      FUN_00f9604c(param_2);
    }
  }
  *param_1 = pppppuVar10;
  param_1[1] = pppppuVar13;
  param_1[2] = local_b88;
  param_1[4] = local_b8c;
  param_1[3] = pppppuVar20;
  param_1[5] = local_b90;
  FUN_01bed4e2(param_1 + 6,auStack_990,0x48);
  uVar2 = 1;
  param_1[0x18] = uVar14;
  param_1[0x19] = uVar17;
LAB_00e3d500:
  *(undefined1 *)(param_2 + 0xa4) = uVar2;
  return;
}

