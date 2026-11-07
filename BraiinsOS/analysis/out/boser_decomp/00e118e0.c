// FUN_00e118e0 @ 00e118e0 size=4372 calls_out=57 calls_in=1
// strings: save_action | pool_groups | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e118e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char **ppcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined *puVar9;
  uint ****ppppuVar10;
  undefined4 *puVar11;
  int iVar12;
  uint ***pppuVar13;
  uint uVar14;
  int iVar15;
  undefined1 uVar16;
  uint ***pppuVar17;
  uint ***pppuVar18;
  uint ***pppuVar19;
  uint ****ppppuVar20;
  uint ****ppppuVar21;
  uint ****ppppuVar22;
  undefined4 uVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 auStack_348 [80];
  uint ****local_2f8;
  uint ****local_2f4;
  undefined1 *local_2f0;
  uint ****local_2ec;
  uint ****local_2e8;
  undefined1 *local_2e4;
  undefined4 *local_2e0;
  undefined4 local_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  uint ****local_2c8;
  char **local_2c4;
  undefined4 *local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined2 local_29c;
  undefined1 local_29a;
  uint ****local_298;
  char **ppcStack_294;
  undefined4 *puStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined2 local_26c;
  undefined1 local_26a;
  undefined1 auStack_269 [33];
  undefined1 local_248 [48];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 auStack_208 [80];
  uint ****local_1b8;
  uint ****ppppuStack_1b4;
  undefined1 *puStack_1b0;
  undefined4 *puStack_1ac;
  uint ****local_1a8;
  uint ****ppppuStack_1a4;
  undefined1 *puStack_1a0;
  undefined4 *puStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  uint ****local_180;
  uint ****local_17c;
  undefined4 local_178;
  undefined4 local_174;
  uint ****local_170;
  uint ****local_16c;
  undefined1 *local_168;
  undefined4 *local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint ****local_148;
  undefined4 uStack_144;
  undefined4 *puStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [76];
  undefined2 local_bc;
  undefined1 local_ba;
  uint ****local_b8;
  uint ****ppppuStack_b4;
  undefined1 *puStack_b0;
  char *local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [12];
  int local_94;
  char local_80 [4];
  char **local_7c;
  uint ****local_68;
  uint ****local_64;
  undefined1 *local_60;
  undefined4 *local_5c;
  uint ****local_58;
  uint ****local_54;
  undefined1 *local_50;
  undefined4 *puStack_4c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xf4)) {
  case 0:
    *(undefined4 *)(param_2 + 0xf6) = 0;
    *(undefined1 *)(param_2 + 0xfa) = 1;
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0xc0);
    FUN_01bed4e2(param_2 + 0x58,param_2,0x58);
    piVar8 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xa8));
    if (piVar8 != (int *)0x0) {
      local_58 = (uint ****)&DAT_80000000;
      local_5c = (undefined4 *)0x0;
      local_64 = (uint ****)0x0;
      local_68 = (uint ****)0x0;
      ppcVar5 = (char **)FUN_014a7b90(&local_68,"save_action",0xb,*(undefined4 *)(param_2 + 0xa4));
      if (ppcVar5 == (char **)0x0) {
        if (local_68 == (uint ****)&DAT_00000001) {
          local_180 = (uint ****)&DAT_0000000a;
          ppcVar5 = (char **)FUN_01966fbc(&local_180,0,0);
          goto LAB_00e11b24;
        }
        uVar23 = *(undefined4 *)(param_2 + 0x9c);
        uVar7 = *(undefined4 *)(param_2 + 0xa0);
        ppcVar5 = (char **)FUN_007025b0(&local_68,"pool_groups",0xb);
        ppppuVar21 = local_54;
        ppppuVar20 = local_58;
        if (ppcVar5 != (char **)0x0) goto LAB_00e11b24;
        if (local_68 == (uint ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
        }
        bVar24 = local_58 == (uint ****)&DAT_80000000;
        local_58 = (uint ****)&DAT_80000000;
        if (bVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
        }
        local_2f0 = local_50;
        local_2f4 = local_54;
        local_2f8 = ppppuVar20;
        FUN_00a28f00(local_80,uVar23,uVar7);
        if (local_80[0] == '\x06') {
          FUN_019bb7e0(ppppuVar20,ppppuVar21);
          ppcVar5 = local_7c;
          goto LAB_00e11b24;
        }
        FUN_0196b484(&local_180,(uint)&local_68 | 4,&local_2f8,local_80);
        if ((char)local_180 != '\x06') {
          FUN_00db4764(&local_180);
        }
        local_180 = local_68;
        local_17c = local_64;
        local_178 = local_60;
        local_174 = local_5c;
        local_170 = local_58;
        local_16c = local_54;
        local_168 = local_50;
        local_164 = puStack_4c;
        FUN_0196ac88(&local_2c8,&local_180);
        uVar16 = local_2c8._0_1_;
        uVar14 = (uint)local_2c8 & 0xff;
        if (uVar14 != 6) {
          FUN_01bed4e2((uint)&local_2e8 | 1,(uint)&local_2c8 | 1,0x17);
          local_2e8 = (uint ****)CONCAT31(local_2e8._1_3_,uVar16);
          if (uVar14 == 5) {
            local_16c = (uint ****)0x0;
            local_168 = local_2e4;
            local_160 = local_2dc;
            if (local_2e4 == (undefined1 *)0x0) {
              local_160 = 0;
            }
            local_178 = local_2e4;
            local_180 = (uint ****)(uint)(local_2e4 != (undefined1 *)0x0);
            local_164 = local_2e0;
            local_174 = local_2e0;
            local_17c = (uint ****)0x0;
            local_170 = local_180;
            FUN_00fea674(auStack_a0,&local_180);
            if (local_94 != 0) {
              FUN_0067b1ac(&local_180,auStack_a0);
              local_b8 = local_180;
              ppppuStack_b4 = local_17c;
              puStack_b0 = local_178;
              cVar4 = (char)local_174;
              local_bc = local_174._1_2_;
              local_ba = local_174._3_1_;
              FUN_00e0febc(&local_2e8);
              if (cVar4 != '\x02') {
                local_180 = local_b8;
                local_17c = ppppuStack_b4;
                local_178 = puStack_b0;
                local_174 = (undefined4 *)CONCAT31(CONCAT12(local_ba,local_bc),cVar4);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar8 + 0x18) != 0) {
                  FUN_00b065ec(*piVar8 + 8,&local_180);
                }
                if ((char)local_174 != '\x02') {
                  local_68 = local_180;
                  local_64 = local_17c;
                  local_60 = local_178;
                  local_5c = local_174;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))
                       ) && (iVar15 = FUN_01aaa278(DAT_01d4c480), iVar15 != 0)))) {
                    local_2c0 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) {
LAB_00e12530:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_64 = (uint ****)&local_2e8;
                    local_178 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                    local_174 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_68 = (uint ****)&local_180;
                    local_2c8 = (uint ****)&local_68;
                    local_2c4 = (char **)&DAT_00000001;
                    local_170 = (uint ****)0x0;
                    local_60 = &DAT_01d2ea4c;
                    local_2e4 = (undefined1 *)0x6b;
                    local_2e8 = (uint ****)0x3fe987;
                    local_180 = (uint ****)*local_2c0;
                    local_17c = *(uint *****)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_2c8);
                  }
                  else {
                    iVar15 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_2f4 = *(uint *****)(DAT_01d4c480 + 0x14);
                      local_2f0 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                      local_2f8 = (uint ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar6 = DAT_01d4edc8;
                      pcVar2 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar6 = &DAT_01cfc5e0;
                        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar12 = (*(code *)puVar6[3])(pcVar2,&local_2f8);
                      if (iVar12 != 0) {
                        local_2e0 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                        if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) goto LAB_00e12530;
                        local_2c8 = (uint ****)&local_180;
                        local_178 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                        local_174 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                        local_2c4 = &local_a8;
                        local_170 = (uint ****)0x0;
                        local_2e4 = (undefined1 *)0x1;
                        local_2c0 = (undefined4 *)&DAT_01d2ea4c;
                        local_a4 = 0x6b;
                        local_a8 = "BUG: request parameters cell was already initialized.";
                        local_68 = local_2f8;
                        local_64 = local_2f4;
                        local_60 = local_2f0;
                        local_2e8 = (uint ****)&local_2c8;
                        local_180 = (uint ****)*local_2e0;
                        local_17c = *(uint *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar15,pcVar2,puVar6[4],&local_68,&local_2e8);
                      }
                    }
                  }
                }
              }
              goto LAB_00e11b40;
            }
            FUN_0165a1f4(auStack_a0);
          }
          FUN_00e0febc(&local_2e8);
          goto LAB_00e11b40;
        }
        ppcVar5 = local_2c4;
      }
      else {
LAB_00e11b24:
        local_2c8 = (uint ****)CONCAT31(local_2c8._1_3_,6);
        local_2c4 = ppcVar5;
        FUN_01276d58(&local_68);
      }
      FUN_00e0fe5c(ppcVar5);
    }
LAB_00e11b40:
    *(undefined1 *)(param_2 + 0xfa) = 0;
    FUN_01bed4e2(&local_180,param_2 + 0x58,0x58);
    FUN_00f07a08(&local_68,&local_180);
    *(undefined1 *)(param_2 + 0xf6) = 1;
    *(uint *****)(param_2 + 0x100) = local_68;
    *(uint *****)(param_2 + 0x104) = local_64;
    *(undefined1 **)(param_2 + 0x108) = local_60;
    FUN_00a21428(&local_180,local_5c);
    ppppuVar21 = local_17c;
    ppppuVar20 = local_180;
    uVar16 = (undefined1)local_178;
    if (local_180 == (uint ****)&DAT_00000003 && local_17c == (uint ****)0x0) {
      *(undefined1 *)(param_2 + 0xf5) = (undefined1)local_178;
      iVar15 = **(int **)(param_2 + 0xc4);
      *(undefined1 *)(param_2 + 0x118) = 0;
      iVar15 = iVar15 + 8;
      *(int *)(param_2 + 0x10c) = iVar15;
LAB_00e11bc8:
      uVar7 = FUN_00b8a1bc(*(int *)(iVar15 + 0x34) + 8);
      *(undefined4 *)(param_2 + 0x110) = uVar7;
      puVar9 = &DAT_01c13d9c;
      *(undefined **)(param_2 + 0x114) = &DAT_01c13d9c;
      goto LAB_00e11be4;
    }
    FUN_01bed4e2(auStack_348,(int)&local_178 + 1,0x4b);
    local_358 = local_128;
    uStack_354 = uStack_124;
    uStack_350 = uStack_120;
    uStack_34c = uStack_11c;
    uVar7 = local_12c;
    goto LAB_00e1270c;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16b34);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16b34);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x118)) {
    case 0:
      iVar15 = *(int *)(param_2 + 0x10c);
      goto LAB_00e11bc8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar7 = *(undefined4 *)(param_2 + 0x110);
      puVar9 = *(undefined **)(param_2 + 0x114);
    }
LAB_00e11be4:
    iVar15 = (**(code **)(puVar9 + 0xc))(uVar7,param_3);
    if (iVar15 == 0) {
      uVar16 = 3;
      *(undefined1 *)(param_2 + 0x118) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e12ae8;
    }
    FUN_01139b38(*(undefined4 *)(param_2 + 0x110),*(undefined4 *)(param_2 + 0x114));
    puVar6 = (undefined4 *)(param_2 + 0xcc);
    *puVar6 = 0;
    local_2f8 = *(uint *****)(param_2 + 0x104);
    local_2f0 = *(undefined1 **)(param_2 + 0x100);
    *(undefined4 *)(param_2 + 0xd0) = 4;
    ppppuVar10 = local_2f8 + *(int *)(param_2 + 0x108) * 0xe;
    *(undefined1 *)(param_2 + 0xf9) = 1;
    *(undefined4 *)(param_2 + 0xd4) = 0;
    *(int *)(param_2 + 200) = iVar15;
    *(undefined1 *)(param_2 + 0x118) = 1;
    *(undefined1 *)(param_2 + 0xf6) = 0;
    local_2f4 = local_2f8;
    local_2ec = ppppuVar10;
    if (*(int *)(param_2 + 0x108) != 0) {
      puVar11 = (undefined4 *)((uint)&local_68 | 4);
      ppppuVar20 = local_2f8;
      local_2f4 = local_2f8;
      do {
        ppppuVar22 = ppppuVar20 + 0xe;
        ppppuVar21 = (uint ****)*ppppuVar20;
        if (ppppuVar21 == (uint ****)&DAT_00000003) goto LAB_00e11d94;
        pppuVar13 = ppppuVar20[2];
        pppuVar17 = ppppuVar20[3];
        pppuVar18 = ppppuVar20[4];
        *puVar11 = ppppuVar20[1];
        puVar11[1] = pppuVar13;
        puVar11[2] = pppuVar17;
        puVar11[3] = pppuVar18;
        pppuVar13 = ppppuVar20[6];
        pppuVar17 = ppppuVar20[7];
        pppuVar18 = ppppuVar20[8];
        puVar11[4] = ppppuVar20[5];
        puVar11[5] = pppuVar13;
        puVar11[6] = pppuVar17;
        puVar11[7] = pppuVar18;
        pppuVar13 = ppppuVar20[10];
        pppuVar17 = ppppuVar20[0xb];
        pppuVar18 = ppppuVar20[0xc];
        pppuVar19 = ppppuVar20[0xd];
        puVar11[8] = ppppuVar20[9];
        puVar11[9] = pppuVar13;
        puVar11[10] = pppuVar17;
        puVar11[0xb] = pppuVar18;
        puVar11[0xc] = pppuVar19;
        iVar15 = *(int *)(param_2 + 200);
        piVar8 = *(int **)(**(int **)(param_2 + 0xc4) + 0x48);
        do {
          iVar12 = *piVar8;
          bVar24 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar24);
        *piVar8 = iVar12 + 1;
        local_68 = ppppuVar21;
        if (iVar12 < 0) goto LAB_00e12708;
        FUN_00b0c194(&local_180,&local_68,iVar15 + 0x3c0,iVar15 + 0x368,piVar8,0);
        ppppuVar21 = local_17c;
        ppppuVar20 = local_180;
        uVar16 = (undefined1)local_178;
        FUN_01bed4e2(&local_2c8,(int)&local_178 + 1,0x2f);
        if (ppppuVar20 != (uint ****)&DAT_00000003 || ppppuVar21 != (uint ****)0x0) {
          local_2e8 = local_148;
          local_2e4 = uStack_144;
          local_2e0 = puStack_140;
          local_2dc = local_13c;
          uStack_2d8 = uStack_138;
          uStack_2d4 = uStack_134;
          uStack_2d0 = uStack_130;
          local_358 = local_128;
          uStack_354 = uStack_124;
          uStack_350 = uStack_120;
          uStack_34c = uStack_11c;
          local_298 = local_2c8;
          ppcStack_294 = local_2c4;
          puStack_290 = local_2c0;
          uStack_28c = uStack_2bc;
          uStack_288 = uStack_2b8;
          local_284 = local_2b4;
          uStack_280 = uStack_2b0;
          uStack_27c = uStack_2ac;
          uStack_278 = uStack_2a8;
          uStack_274 = uStack_2a4;
          uStack_270 = uStack_2a0;
          local_26c = local_29c;
          local_26a = local_29a;
          local_2f4 = ppppuVar22;
          FUN_01bed4e2(auStack_269,&local_2e8,0x1c);
          FUN_01bed4e2(auStack_348,&local_298,0x4b);
          FUN_00def6bc(&local_2f8);
          uVar7 = local_12c;
          goto LAB_00e1282c;
        }
        local_248[0] = uVar16;
        FUN_01bed4e2((uint)local_248 | 1,&local_2c8,0x2f);
        uVar7 = FUN_00b568ac(local_248);
        iVar15 = *(int *)(param_2 + 0xd4);
        if (iVar15 == *(int *)(param_2 + 0xcc)) {
          FUN_007b4428(puVar6);
        }
        *(undefined4 *)(*(int *)(param_2 + 0xd0) + iVar15 * 4) = uVar7;
        *(int *)(param_2 + 0xd4) = iVar15 + 1;
        ppppuVar20 = ppppuVar22;
      } while (ppppuVar22 != ppppuVar10);
      ppppuVar22 = ppppuVar10;
LAB_00e11d94:
      local_2f4 = ppppuVar22;
    }
    FUN_00def6bc(&local_2f8);
    *(undefined1 *)(param_2 + 0x198) = 0;
    *(undefined4 **)(param_2 + 0x188) = puVar6;
    *(int *)(param_2 + 0x18c) = *(int *)(param_2 + 200) + 0x3c0;
    break;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x134)) {
    case 0:
      piVar8 = *(int **)(param_2 + 0x100);
      goto LAB_00e11e64;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f1a0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f1a0);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x130)) {
      case 0:
        puVar6 = *(undefined4 **)(param_2 + 0x104);
        goto LAB_00e11e7c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 300)) {
        case 0:
          puVar6 = *(undefined4 **)(param_2 + 0x108);
          goto LAB_00e11e8c;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
    }
    goto switchD_00e11a80_caseD_3;
  case 6:
    goto switchD_00e11908_caseD_6;
  case 7:
    goto switchD_00e11908_caseD_7;
  case 8:
    goto switchD_00e11908_caseD_8;
  }
  FUN_00e12f24(&local_180,param_2 + 0x100,param_3);
  ppppuVar21 = local_17c;
  ppppuVar20 = local_180;
  if (local_180 == (uint ****)&SUB_00000004 && local_17c == (uint ****)0x0) {
    uVar16 = 4;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e12ae8;
  }
  uVar16 = (undefined1)local_178;
  FUN_01bed4e2(auStack_208,(int)&local_178 + 1,0x4b);
  uVar7 = local_12c;
  local_218 = local_128;
  uStack_214 = uStack_124;
  uStack_210 = uStack_120;
  uStack_20c = uStack_11c;
  FUN_00e12eb4(param_2 + 0x100);
  if (ppppuVar20 == (uint ****)&DAT_00000003 && ppppuVar21 == (uint ****)0x0) {
    iVar15 = **(int **)(param_2 + 0xc4);
    *(undefined1 *)(param_2 + 0x134) = 0;
    piVar8 = (int *)(iVar15 + 0x44);
    *(int **)(param_2 + 0x100) = piVar8;
LAB_00e11e64:
    iVar15 = *piVar8;
    *(undefined1 *)(param_2 + 0x130) = 0;
    puVar6 = (undefined4 *)(iVar15 + 8);
    *(undefined4 **)(param_2 + 0x104) = puVar6;
LAB_00e11e7c:
    *(undefined1 *)(param_2 + 300) = 0;
    *(undefined4 **)(param_2 + 0x108) = puVar6;
LAB_00e11e8c:
    uVar7 = *puVar6;
    *(undefined1 *)(param_2 + 0x128) = 0;
    *(undefined4 *)(param_2 + 0x118) = 0;
    *(undefined4 *)(param_2 + 0x11c) = 0;
    *(undefined4 *)(param_2 + 0x120) = uVar7;
    *(undefined4 *)(param_2 + 0x124) = uVar7;
    *(undefined4 **)(param_2 + 0x10c) = puVar6 + 1;
    *(undefined4 *)(param_2 + 0x110) = 0;
switchD_00e11a80_caseD_3:
    bVar3 = FUN_019f9bc4(param_2 + 0x10c,param_3);
    if (bVar3 == 2) {
      *(undefined1 *)(param_2 + 300) = 3;
      *(undefined1 *)(param_2 + 0x130) = 3;
      *(undefined1 *)(param_2 + 0x134) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      uVar16 = 5;
      goto LAB_00e12ae8;
    }
    FUN_0193c3cc(param_2 + 0x10c);
    if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
    }
    iVar15 = *(int *)(param_2 + 0xd0);
    puVar6 = *(undefined4 **)(param_2 + 0x108);
    iVar12 = iVar15 + *(int *)(param_2 + 0xd4) * 4;
    uVar7 = *puVar6;
    *(undefined1 *)(param_2 + 0x134) = 1;
    *(undefined1 *)(param_2 + 0x130) = 1;
    *(undefined1 *)(param_2 + 300) = 1;
    *(undefined1 *)(param_2 + 0xf8) = 1;
    *(undefined4 **)(param_2 + 0xd8) = puVar6 + 1;
    *(undefined4 *)(param_2 + 0xdc) = uVar7;
    *(undefined4 **)(param_2 + 0xe0) = puVar6 + 6;
    *(undefined4 *)(param_2 + 0xe4) = 0;
    *(undefined4 *)(param_2 + 0xe8) = 8;
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(int *)(param_2 + 0xb0) = iVar15;
    *(int *)(param_2 + 0xb4) = iVar12;
    while (iVar15 != iVar12) {
      *(int *)(param_2 + 0x100) = iVar15;
      *(undefined1 *)(param_2 + 0x134) = 0;
      *(int *)(param_2 + 0xf0) = param_2 + 0xe4;
      *(int *)(param_2 + 0xb0) = iVar15 + 4;
switchD_00e11908_caseD_6:
      uVar25 = FUN_00e06fc8(param_2 + 0x100,param_3);
      puVar6 = (undefined4 *)((ulonglong)uVar25 >> 0x20);
      if ((int)uVar25 == 0) {
        *param_1 = 4;
        param_1[1] = 0;
        uVar16 = 6;
        goto LAB_00e12ae8;
      }
      *(undefined8 *)(param_2 + 0xb8) = uVar25;
      if (*(char *)(param_2 + 0x134) == '\x03') {
        cVar4 = *(char *)(param_2 + 0x130);
        bVar24 = cVar4 == '\x03';
        if (bVar24) {
          cVar4 = *(char *)(param_2 + 300);
        }
        if (bVar24 && cVar4 == '\x03') {
          FUN_0193c3cc(param_2 + 0x10c);
          puVar6 = *(undefined4 **)(param_2 + 0xbc);
        }
      }
      FUN_006666fc(&local_68,puVar6[5],puVar6[6]);
      FUN_006666fc(&local_180,puVar6[8],puVar6[9]);
      piVar8 = (int *)puVar6[10];
      uVar25 = *(undefined8 *)(puVar6 + 2);
      uVar7 = *puVar6;
      uVar23 = puVar6[1];
      do {
        iVar15 = *piVar8;
        bVar24 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar24);
      *piVar8 = iVar15 + 1;
      if (iVar15 < 0) {
LAB_00e12708:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xe12708);
        (*pcVar1)();
      }
      *(uint *****)(param_2 + 0x110) = local_68;
      *(uint *****)(param_2 + 0x114) = local_64;
      *(undefined1 **)(param_2 + 0x118) = local_60;
      *(uint *****)(param_2 + 0x11c) = local_180;
      *(uint *****)(param_2 + 0x120) = local_17c;
      *(undefined1 **)(param_2 + 0x124) = local_178;
      *(undefined4 *)(param_2 + 0x100) = uVar7;
      *(int **)(param_2 + 0x128) = piVar8;
      *(undefined8 *)(param_2 + 0x108) = uVar25;
      *(undefined4 *)(param_2 + 0x104) = uVar23;
      *(undefined1 *)(param_2 + 0x140) = 0;
      *(int *)(param_2 + 0x130) = param_2 + 0x100;
switchD_00e11908_caseD_7:
      FUN_00e134f0(&local_180,param_2 + 0x130,param_3);
      if (local_180 == (uint ****)&DAT_00000003) {
        *param_1 = 4;
        param_1[1] = 0;
        uVar16 = 7;
        goto LAB_00e12ae8;
      }
      local_1b8 = local_180;
      ppppuStack_1b4 = local_17c;
      puStack_1b0 = local_178;
      puStack_1ac = local_174;
      local_1a8 = local_170;
      ppppuStack_1a4 = local_16c;
      puStack_1a0 = local_168;
      puStack_19c = local_164;
      uStack_198 = local_160;
      local_194 = local_15c;
      uStack_190 = uStack_158;
      uStack_18c = uStack_154;
      uStack_188 = uStack_150;
      uStack_184 = uStack_14c;
      FUN_00e13434(param_2 + 0x130);
      piVar8 = *(int **)(param_2 + 0xf0);
      iVar15 = piVar8[2];
      if (iVar15 == *piVar8) {
        FUN_006e4ec8(piVar8);
      }
      puVar6 = (undefined4 *)(piVar8[1] + iVar15 * 0x38);
      *puVar6 = local_1b8;
      puVar6[1] = ppppuStack_1b4;
      puVar6[2] = puStack_1b0;
      puVar6[3] = puStack_1ac;
      puVar6[4] = local_1a8;
      puVar6[5] = ppppuStack_1a4;
      puVar6[6] = puStack_1a0;
      puVar6[7] = puStack_19c;
      puVar6[8] = uStack_198;
      puVar6[9] = local_194;
      puVar6[10] = uStack_190;
      puVar6[0xb] = uStack_18c;
      puVar6[0xc] = uStack_188;
      puVar6[0xd] = uStack_184;
      piVar8[2] = iVar15 + 1;
      FUN_00b5efb4(param_2 + 0x100);
      FUN_019f8c54(*(undefined4 *)(param_2 + 0xb8),1);
      iVar12 = *(int *)(param_2 + 0xb4);
      iVar15 = *(int *)(param_2 + 0xb0);
    }
    if (*(char *)(param_2 + 0xf5) == '\0') {
      *(undefined1 *)(param_2 + 0xf9) = 0;
      local_180 = *(uint *****)(param_2 + 0xcc);
      local_17c = *(uint *****)(param_2 + 0xd0);
      local_178 = *(undefined1 **)(param_2 + 0xd4);
      uVar7 = FUN_00b56814();
      iVar15 = *(int *)(param_2 + 0xe0);
      piVar8 = *(int **)(iVar15 + 0x50);
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar8;
        bVar24 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar24);
      *piVar8 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b5f178(*(undefined4 *)(iVar15 + 0x50));
      }
      *(undefined4 *)(iVar15 + 0x50) = uVar7;
      FUN_019e0044(*(int *)(**(int **)(param_2 + 0xc4) + 0x54) + 8);
    }
    else {
      *(undefined1 *)(param_2 + 0x154) = 0;
switchD_00e11908_caseD_8:
      FUN_00e100c8(&local_180,param_2 + 0x100,param_3);
      ppppuVar21 = local_17c;
      ppppuVar20 = local_180;
      if (local_180 == (uint ****)&SUB_00000004 && local_17c == (uint ****)0x0) {
        *param_1 = 4;
        param_1[1] = 0;
        uVar16 = 8;
        goto LAB_00e12ae8;
      }
      uVar16 = (undefined1)local_178;
      FUN_01bed4e2(auStack_108,(int)&local_178 + 1,0x4b);
      local_118 = local_128;
      uStack_114 = uStack_124;
      uStack_110 = uStack_120;
      uStack_10c = uStack_11c;
      if (*(char *)(param_2 + 0x154) == '\x03') {
        FUN_00e1003c(param_2 + 0x100);
      }
      if (ppppuVar20 != (uint ****)&DAT_00000003 || ppppuVar21 != (uint ****)0x0) {
        FUN_01bed4e2(auStack_348,auStack_108,0x4b);
        local_358 = local_118;
        uStack_354 = uStack_114;
        uStack_350 = uStack_110;
        uStack_34c = uStack_10c;
        FUN_00d5f9a8(param_2 + 0xe4);
        *(undefined1 *)(param_2 + 0xf8) = 0;
        FUN_019f8c54(*(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xdc));
        uVar7 = local_12c;
        goto LAB_00e1282c;
      }
      *(undefined1 *)(param_2 + 0xf9) = 0;
      local_180 = *(uint *****)(param_2 + 0xcc);
      local_17c = *(uint *****)(param_2 + 0xd0);
      local_178 = *(undefined1 **)(param_2 + 0xd4);
      uVar7 = FUN_00b56814();
      iVar15 = *(int *)(param_2 + 0xe0);
      piVar8 = *(int **)(iVar15 + 0x50);
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar8;
        bVar24 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar24);
      *piVar8 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b5f178(*(undefined4 *)(iVar15 + 0x50));
      }
      *(undefined4 *)(iVar15 + 0x50) = uVar7;
      *(undefined1 *)(*(int *)(**(int **)(param_2 + 0xc4) + 0x58) + 8) = 1;
      FUN_019e0044(*(int *)(**(int **)(param_2 + 0xc4) + 0x54) + 8);
    }
    *(undefined1 *)(param_2 + 0xf8) = 0;
    local_2c8 = *(uint *****)(param_2 + 0xe4);
    local_2c4 = *(char ***)(param_2 + 0xe8);
    local_2c0 = *(undefined4 **)(param_2 + 0xec);
    FUN_0160aaa4(&local_68,0);
    FUN_01bed4e2((int)&uStack_144 + 3,&local_2c8,0xc);
    uVar16 = local_68._0_1_;
    FUN_01bed4e2(&local_180,(uint)&local_68 | 1,0x3f);
    FUN_01bed4e2(auStack_348,&local_180,0x4b);
    *(undefined1 *)(param_2 + 0xf8) = 0;
    FUN_019f8c54(*(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xdc));
    piVar8 = *(int **)(param_2 + 200);
    *(undefined1 *)(param_2 + 0xf9) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar8;
      bVar24 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar24);
    *piVar8 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 200));
    }
    uVar7 = 0;
    ppppuVar20 = (uint ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0xfa) = 0;
    ppppuVar21 = (uint ****)0x0;
    *(undefined1 *)(param_2 + 0xf6) = 0;
  }
  else {
    FUN_01bed4e2(auStack_348,auStack_208,0x4b);
    local_358 = local_218;
    uStack_354 = uStack_214;
    uStack_350 = uStack_210;
    uStack_34c = uStack_20c;
LAB_00e1282c:
    FUN_00b55288(param_2 + 0xcc);
    piVar8 = *(int **)(param_2 + 200);
    *(undefined1 *)(param_2 + 0xf9) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar8;
      bVar24 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar24);
    *piVar8 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_2 + 200));
    }
LAB_00e1270c:
    if (*(char *)(param_2 + 0xf6) != '\0') {
      FUN_00d5f9a8(param_2 + 0x100);
    }
    *(undefined1 *)(param_2 + 0xfa) = 0;
    *(undefined1 *)(param_2 + 0xf6) = 0;
    if (*(char *)(param_2 + 0xf7) != '\0') {
      FUN_00de2db0(param_2);
    }
  }
  *(undefined1 *)(param_1 + 2) = uVar16;
  *param_1 = ppppuVar20;
  param_1[1] = ppppuVar21;
  FUN_01bed4e2((int)param_1 + 9,auStack_348,0x4b);
  param_1[0x15] = uVar7;
  param_1[0x16] = local_358;
  param_1[0x17] = uStack_354;
  param_1[0x18] = uStack_350;
  param_1[0x19] = uStack_34c;
  uVar16 = 1;
LAB_00e12ae8:
  *(undefined1 *)(param_2 + 0xf4) = uVar16;
  return;
}

