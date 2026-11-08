// FUN_00e990e4 @ 00e990e4 size=1852 calls_out=28 calls_in=1
// strings: save_action | hashboard_ids | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e990e4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  char **ppcVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined4 ****ppppuVar12;
  undefined4 ****ppppuVar13;
  uint local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 auStack_2a8 [80];
  undefined1 auStack_258 [79];
  undefined1 auStack_209 [17];
  undefined4 ****local_1f8;
  undefined4 ****local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 ****local_1e8;
  undefined4 local_1e4;
  undefined1 *local_1e0;
  undefined4 *local_1dc;
  undefined4 local_1d8;
  undefined1 auStack_190 [68];
  undefined1 auStack_14c [20];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 auStack_11d [89];
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 ****local_c0;
  undefined4 ****ppppuStack_bc;
  undefined1 *puStack_b8;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined1 *local_a8;
  char *local_a0;
  undefined4 local_9c;
  undefined4 ****local_98;
  undefined1 *local_94;
  undefined4 *local_90;
  undefined4 uStack_8c;
  undefined4 ****local_80;
  char **local_7c;
  undefined4 *local_78;
  undefined1 auStack_68 [12];
  int local_5c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 ****local_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x174)) {
  case 0:
    *(undefined2 *)(param_2 + 0x175) = 0;
    uVar3 = *(undefined4 *)(param_2 + 0x170);
    *(undefined1 *)(param_2 + 0x177) = 1;
    FUN_01bed4e2(param_2 + 0x58,param_2,0x58);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xa8));
    if (piVar4 != (int *)0x0) {
      local_38 = (undefined4 ****)&DAT_80000000;
      local_3c = (undefined4 *)0x0;
      local_44 = (undefined4 ****)0x0;
      local_48 = (undefined4 ****)0x0;
      ppcVar5 = (char **)FUN_014a7b90(&local_48,"save_action",0xb,*(undefined4 *)(param_2 + 0xa4));
      if ((ppcVar5 == (char **)0x0) &&
         (ppcVar5 = (char **)FUN_0127217c(&local_48,"hashboard_ids",0xd,
                                          *(undefined4 *)(param_2 + 0x9c),
                                          *(undefined4 *)(param_2 + 0xa0)), ppcVar5 == (char **)0x0)
         ) {
        local_1f8 = local_48;
        local_1f4 = local_44;
        local_1f0 = local_40;
        local_1ec = local_3c;
        local_1e8 = local_38;
        local_1e4 = uStack_34;
        local_1e0 = puStack_30;
        local_1dc = puStack_2c;
        FUN_0196ac88(&local_80);
        uVar11 = local_80._0_1_;
        uVar10 = (uint)local_80 & 0xff;
        if (uVar10 != 6) {
          FUN_01bed4e2((uint)&local_98 | 1,(uint)&local_80 | 1,0x17);
          local_98 = (undefined4 ****)CONCAT31(local_98._1_3_,uVar11);
          if (uVar10 == 5) {
            local_1e4 = 0;
            local_1e0 = local_94;
            if (local_94 == (undefined1 *)0x0) {
              uStack_8c = 0;
            }
            local_1f0 = local_94;
            local_1f8 = (undefined4 ****)(uint)(local_94 != (undefined1 *)0x0);
            local_1dc = local_90;
            local_1ec = local_90;
            local_1f4 = (undefined4 ****)0x0;
            local_1e8 = local_1f8;
            local_1d8 = uStack_8c;
            FUN_00fea674(auStack_68,&local_1f8);
            if (local_5c != 0) {
              FUN_0067b1ac(&local_1f8,auStack_68);
              puVar9 = local_1ec;
              local_c0 = local_1f8;
              ppppuStack_bc = local_1f4;
              puStack_b8 = local_1f0;
              uVar10 = (uint)local_1ec & 0xff;
              local_c4 = local_1ec._1_2_;
              local_c2 = local_1ec._3_1_;
              FUN_00e0febc(&local_98);
              if (uVar10 != 2) {
                local_1f8 = local_c0;
                local_1f4 = ppppuStack_bc;
                local_1f0 = puStack_b8;
                local_1ec = (undefined4 *)CONCAT31(CONCAT12(local_c2,local_c4),(char)puVar9);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar4 + 0x18) != 0) {
                  FUN_00b065ec(*piVar4 + 8,&local_1f8);
                }
                if (((uint)local_1ec & 0xff) != 2) {
                  local_48 = local_1f8;
                  local_44 = local_1f4;
                  local_40 = local_1f0;
                  local_3c = local_1ec;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c480), cVar2 != '\0')))
                       ) && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                    local_78 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e99818:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_44 = &local_98;
                    local_1f0 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                    local_1ec = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_48 = &local_1f8;
                    local_80 = &local_48;
                    local_7c = (char **)&DAT_00000001;
                    local_1e8 = (undefined4 ****)0x0;
                    local_40 = &DAT_01d2ea4c;
                    local_94 = (undefined1 *)0x6b;
                    local_98 = (undefined4 ****)0x3fe987;
                    local_1f8 = (undefined4 ****)*local_78;
                    local_1f4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_80);
                  }
                  else {
                    iVar6 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_ac = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                      local_a8 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                      local_b0 = (undefined4 ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar9 = DAT_01d4edc8;
                      pcVar1 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar9 = &DAT_01cfc5e0;
                        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar7 = (*(code *)puVar9[3])(pcVar1,&local_b0);
                      if (iVar7 != 0) {
                        local_90 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                        if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                        goto LAB_00e99818;
                        local_7c = &local_a0;
                        local_1f0 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                        local_1ec = *(undefined4 **)(DAT_01d4c480 + 0x28);
                        local_80 = &local_1f8;
                        local_98 = &local_80;
                        local_94 = (undefined1 *)0x1;
                        local_1e8 = (undefined4 ****)0x0;
                        local_78 = (undefined4 *)&DAT_01d2ea4c;
                        local_9c = 0x6b;
                        local_a0 = "BUG: request parameters cell was already initialized.";
                        local_48 = local_b0;
                        local_44 = local_ac;
                        local_40 = local_a8;
                        local_1f8 = (undefined4 ****)*local_90;
                        local_1f4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar6,pcVar1,puVar9[4],&local_48,&local_98);
                      }
                    }
                  }
                }
              }
              goto LAB_00e991e8;
            }
            FUN_0165a1f4(auStack_68);
          }
          FUN_00e0febc(&local_98);
          goto LAB_00e991e8;
        }
        ppcVar5 = local_7c;
      }
      else {
        local_80 = (undefined4 ****)CONCAT31(local_80._1_3_,6);
        local_7c = ppcVar5;
        FUN_01276d58(&local_48);
      }
      FUN_00e0fe5c(ppcVar5);
    }
LAB_00e991e8:
    *(undefined1 *)(param_2 + 0x177) = 0;
    FUN_01bed4e2(&local_1f8,param_2 + 0x58,0x58);
    FUN_00f07a08((undefined4 *)(param_2 + 0xb0),&local_1f8);
    *(undefined1 *)(param_2 + 0x175) = 1;
    FUN_00a21428(&local_1f8,*(undefined4 *)(param_2 + 0xbc));
    ppppuVar13 = local_1f4;
    ppppuVar12 = local_1f8;
    uVar11 = (undefined1)local_1f0;
    if (local_1f8 == (undefined4 ****)&DAT_00000003 && local_1f4 == (undefined4 ****)0x0) {
      *(undefined1 *)(param_2 + 0x175) = 0;
      *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0xb0);
      *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0xb4);
      *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0xb8);
      *(undefined1 *)(param_2 + 0xfa) = 0;
      *(undefined1 *)(param_2 + 0xf8) = 0;
      *(undefined1 *)(param_2 + 0xf9) = (undefined1)local_1f0;
      *(undefined4 *)(param_2 + 0xcc) = uVar3;
      goto switchD_00e99108_caseD_3;
    }
    FUN_01bed4e2(auStack_258,(int)&local_1f0 + 1,0x5f);
    FUN_01bed4e2(auStack_2a8,auStack_258,0x4f);
    puVar8 = auStack_209;
LAB_00e993ac:
    FUN_01bed4e2(&local_2b8,puVar8,0x10);
    if (*(char *)(param_2 + 0x175) != '\0') {
      FUN_006a41c0(param_2 + 0xb0);
    }
    *(undefined1 *)(param_2 + 0x177) = 0;
    *(undefined1 *)(param_2 + 0x175) = 0;
    if (*(char *)(param_2 + 0x176) != '\0') {
      FUN_00e5f3e8(param_2);
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17d2c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17d2c);
  case 3:
switchD_00e99108_caseD_3:
    FUN_00e94ab8(&local_1f8,param_2 + 0xc0,param_3);
    ppppuVar13 = local_1f4;
    ppppuVar12 = local_1f8;
    if (local_1f8 == (undefined4 ****)&SUB_00000004 && local_1f4 == (undefined4 ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar11 = 3;
      goto LAB_00e99418;
    }
    uVar11 = (undefined1)local_1f0;
    FUN_01bed4e2(&local_138,(int)&local_1f0 + 1,0xb);
    FUN_01bed4e2(auStack_190,&local_1e4,0x54);
    FUN_00e94908(param_2 + 0xc0);
    if (ppppuVar12 != (undefined4 ****)&DAT_00000003 || ppppuVar13 != (undefined4 ****)0x0) {
      local_128 = local_138;
      uStack_124 = uStack_134;
      local_120 = local_130;
      local_11e = local_12e;
      FUN_01bed4e2(auStack_11d,auStack_190,0x54);
      FUN_01bed4e2(auStack_2a8,&local_128,0x4f);
      puVar8 = auStack_14c;
      goto LAB_00e993ac;
    }
    FUN_01bed4e2((uint)&local_48 | 1,&local_138,0xb);
    local_48 = (undefined4 ****)CONCAT31(local_48._1_3_,uVar11);
    FUN_00d91c28(&local_1f8,&local_48);
    uVar11 = local_1f8._0_1_;
    FUN_01bed4e2(auStack_2a8,(uint)&local_1f8 | 1,0x4f);
    ppppuVar13 = (undefined4 ****)0x0;
    ppppuVar12 = (undefined4 ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0x177) = 0;
    *(undefined1 *)(param_2 + 0x175) = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar11;
  *param_1 = ppppuVar12;
  param_1[1] = ppppuVar13;
  FUN_01bed4e2((int)param_1 + 9,auStack_2a8,0x4f);
  param_1[0x16] = local_2b8;
  param_1[0x17] = uStack_2b4;
  param_1[0x18] = uStack_2b0;
  param_1[0x19] = uStack_2ac;
  uVar11 = 1;
LAB_00e99418:
  *(undefined1 *)(param_2 + 0x174) = uVar11;
  return;
}

