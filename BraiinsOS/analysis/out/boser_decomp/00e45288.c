// FUN_00e45288 @ 00e45288 size=1600 calls_out=26 calls_in=1
// strings: save_action | power_target_decrementIncrementPowerTargetRequest | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e45288(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  char **ppcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_210 [88];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 ****local_180;
  undefined4 ****local_17c;
  undefined1 *local_178;
  undefined4 local_174;
  undefined4 ****local_170;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined4 *local_164;
  undefined4 local_160;
  undefined4 local_130;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [84];
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
  
  puVar13 = (undefined4 *)(param_2 + 0x60);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x73c)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c171e4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c171e4);
  case 3:
    goto switchD_00e452b8_caseD_3;
  }
  uVar10 = *(undefined4 *)(param_2 + 0x738);
  *(undefined2 *)(param_2 + 0x73d) = 0x100;
  FUN_01bed4e2(puVar13,param_2,0x60);
  piVar6 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xb8));
  if (piVar6 != (int *)0x0) {
    local_38 = (undefined4 ****)&DAT_80000000;
    local_3c = (undefined4 *)0x0;
    local_44 = (undefined4 ****)0x0;
    local_48 = (undefined4 ****)0x0;
    ppcVar7 = (char **)FUN_014a7b90(&local_48,"save_action",0xb,*(undefined4 *)(param_2 + 0x70));
    if ((ppcVar7 == (char **)0x0) &&
       (ppcVar7 = (char **)FUN_00a46348(&local_48,
                                        "power_target_decrementIncrementPowerTargetRequest",0x16,
                                        *(undefined4 *)(param_2 + 0x68),*puVar13,
                                        *(undefined4 *)(param_2 + 100),
                                        *(undefined4 *)(param_2 + 0x68),
                                        *(undefined4 *)(param_2 + 0x6c)), ppcVar7 == (char **)0x0))
    {
      local_180 = local_48;
      local_17c = local_44;
      local_178 = local_40;
      local_174 = local_3c;
      local_170 = local_38;
      local_16c = uStack_34;
      local_168 = puStack_30;
      local_164 = puStack_2c;
      FUN_0196ac88(&local_80);
      uVar4 = local_80._0_1_;
      uVar11 = (uint)local_80 & 0xff;
      if (uVar11 != 6) {
        FUN_01bed4e2((uint)&local_98 | 1,(uint)&local_80 | 1,0x17);
        local_98 = (undefined4 ****)CONCAT31(local_98._1_3_,uVar4);
        if (uVar11 == 5) {
          local_16c = 0;
          local_168 = local_94;
          if (local_94 == (undefined1 *)0x0) {
            uStack_8c = 0;
          }
          local_178 = local_94;
          local_180 = (undefined4 ****)(uint)(local_94 != (undefined1 *)0x0);
          local_164 = local_90;
          local_174 = local_90;
          local_17c = (undefined4 ****)0x0;
          local_170 = local_180;
          local_160 = uStack_8c;
          FUN_00fea674(auStack_68,&local_180);
          if (local_5c != 0) {
            FUN_0067b1ac(&local_180,auStack_68);
            local_c0 = local_180;
            ppppuStack_bc = local_17c;
            puStack_b8 = local_178;
            cVar5 = (char)local_174;
            local_c4 = local_174._1_2_;
            local_c2 = local_174._3_1_;
            FUN_00e0febc(&local_98);
            if (cVar5 != '\x02') {
              local_180 = local_c0;
              local_17c = ppppuStack_bc;
              local_178 = puStack_b8;
              local_174 = (undefined4 *)CONCAT31(CONCAT12(local_c2,local_c4),cVar5);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar6 + 0x18) != 0) {
                FUN_00b065ec(*piVar6 + 8,&local_180);
              }
              if (((uint)local_174 & 0xff) != 2) {
                local_48 = local_180;
                local_44 = local_17c;
                local_40 = local_178;
                local_3c = local_174;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0'))))
                    && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)))) {
                  local_78 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e458c0:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_44 = &local_98;
                  local_178 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                  local_174 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                  local_48 = &local_180;
                  local_80 = &local_48;
                  local_7c = (char **)&DAT_00000001;
                  local_170 = (undefined4 ****)0x0;
                  local_40 = &DAT_01d2ea4c;
                  local_94 = (undefined1 *)0x6b;
                  local_98 = (undefined4 ****)0x3fe987;
                  local_180 = (undefined4 ****)*local_78;
                  local_17c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_80);
                }
                else {
                  iVar8 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_ac = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_a8 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                    local_b0 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar12 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar12 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar9 = (*(code *)puVar12[3])(pcVar1,&local_b0);
                    if (iVar9 != 0) {
                      local_90 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e458c0;
                      local_7c = &local_a0;
                      local_80 = &local_180;
                      local_178 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                      local_174 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                      local_170 = (undefined4 ****)0x0;
                      local_94 = (undefined1 *)0x1;
                      local_78 = (undefined4 *)&DAT_01d2ea4c;
                      local_9c = 0x6b;
                      local_a0 = "BUG: request parameters cell was already initialized.";
                      local_48 = local_b0;
                      local_44 = local_ac;
                      local_40 = local_a8;
                      local_180 = (undefined4 ****)*local_90;
                      local_17c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      local_98 = &local_80;
                      FUN_01aaa328(iVar8,pcVar1,puVar12[4],&local_48,&local_98);
                    }
                  }
                }
              }
            }
            goto LAB_00e45388;
          }
          FUN_0165a1f4(auStack_68);
        }
        FUN_00e0febc(&local_98);
        goto LAB_00e45388;
      }
      ppcVar7 = local_7c;
    }
    else {
      local_80 = (undefined4 ****)CONCAT31(local_80._1_3_,6);
      local_7c = ppcVar7;
      FUN_01276d58(&local_48);
    }
    FUN_00e0fe5c(ppcVar7);
  }
LAB_00e45388:
  *(undefined1 *)(param_2 + 0x73e) = 0;
  FUN_01bed4e2(&local_180,puVar13,0x60);
  FUN_00f079cc(&local_1b8,&local_180);
  puVar13 = (undefined4 *)((uint)&local_1a0 | 4);
  *puVar13 = local_1b8;
  puVar13[1] = uStack_1b4;
  puVar13[2] = uStack_1b0;
  puVar13[3] = uStack_1ac;
  puVar13[4] = uStack_1a8;
  puVar13[5] = uStack_1a4;
  *(undefined4 *)(param_2 + 0xc0) = 3;
  *(undefined4 *)(param_2 + 0xc4) = local_1a0;
  *(undefined4 *)(param_2 + 200) = uStack_19c;
  *(undefined4 *)(param_2 + 0xcc) = uStack_198;
  *(undefined4 *)(param_2 + 0xd0) = local_194;
  *(undefined4 *)(param_2 + 0xd4) = uStack_190;
  *(undefined4 *)(param_2 + 0xd8) = uStack_18c;
  *(undefined4 *)(param_2 + 0xdc) = uStack_188;
  *(undefined1 *)(param_2 + 0x124) = 0;
  *(undefined4 *)(param_2 + 0x108) = uVar10;
switchD_00e452b8_caseD_3:
  FUN_00e36808(&local_180,param_2 + 0xc0,param_3);
  puVar14 = local_178;
  ppppuVar3 = local_17c;
  ppppuVar2 = local_180;
  if (local_180 == (undefined4 ****)&SUB_00000004 && local_17c == (undefined4 ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar4 = 3;
  }
  else {
    FUN_01bed4e2(auStack_118,&local_174,0x54);
    FUN_00e366c8(param_2 + 0xc0);
    if (ppppuVar2 == (undefined4 ****)&DAT_00000003 && ppppuVar3 == (undefined4 ****)0x0) {
      FUN_0160aaa4(&local_170,0);
      local_174 = (undefined4 *)0x0;
      local_17c = (undefined4 ****)0x0;
      local_180 = (undefined4 ****)&DAT_00000001;
      local_130 = 0;
      local_178 = puVar14;
      FUN_01bed4e2(auStack_210,(uint)&local_180 | 4,0x54);
      *(undefined1 *)(param_2 + 0x73e) = 0;
      puVar14 = (undefined1 *)0x1;
    }
    else {
      FUN_01bed4e2(auStack_210,auStack_118,0x54);
      *(undefined1 *)(param_2 + 0x73e) = 0;
      if (*(char *)(param_2 + 0x73d) == '\x01') {
        FUN_00e38188(param_2);
      }
    }
    param_1[1] = ppppuVar3;
    param_1[2] = puVar14;
    *param_1 = ppppuVar2;
    FUN_01bed4e2(param_1 + 3,auStack_210,0x54);
    uVar4 = 1;
    param_1[0x18] = local_120;
    param_1[0x19] = local_11c;
  }
  *(undefined1 *)(param_2 + 0x73c) = uVar4;
  return;
}

