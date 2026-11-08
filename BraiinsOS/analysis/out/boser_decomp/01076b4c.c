// FUN_01076b4c @ 01076b4c size=1456 calls_out=26 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized.

void FUN_01076b4c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char **ppcVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 ****local_118;
  undefined4 ****local_114;
  undefined1 *local_110;
  undefined4 local_10c;
  undefined4 ****local_108;
  undefined4 local_104;
  undefined1 *local_100;
  undefined4 *local_fc;
  undefined4 local_f8;
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
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 ****local_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x6b0)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d7ec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d7ec);
  case 3:
    goto switchD_01076b6c_caseD_3;
  }
  *(undefined2 *)(param_2 + 0x6b1) = 0x100;
  iVar3 = *(int *)(param_2 + 0x6a0);
  *(undefined1 *)(param_2 + 0x6b3) = 0;
  FUN_01bed4e2(param_2 + 0x50,param_2,0x50);
  piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x9c));
  if (piVar4 != (int *)0x0) {
    local_38 = (undefined4 ****)&DAT_80000000;
    local_3c = (undefined4 *)0x0;
    local_48._4_4_ = (undefined4 ****)0x0;
    local_48._0_4_ = (undefined4 ****)0x0;
    ppcVar5 = (char **)FUN_01271f48(&local_48,&DAT_0056c91c,4,*(undefined4 *)(param_2 + 0x94),
                                    *(undefined4 *)(param_2 + 0x98));
    if (ppcVar5 == (char **)0x0) {
      local_118 = (undefined4 ****)local_48;
      local_114 = local_48._4_4_;
      local_110 = local_40;
      local_10c = local_3c;
      local_108 = local_38;
      local_104 = uStack_34;
      local_100 = puStack_30;
      local_fc = puStack_2c;
      FUN_0196ac88(&local_80);
      uVar10 = local_80._0_1_;
      uVar11 = (uint)local_80 & 0xff;
      if (uVar11 != 6) {
        FUN_01bed4e2((uint)&local_98 | 1,(uint)&local_80 | 1,0x17);
        local_98 = (undefined4 ****)CONCAT31(local_98._1_3_,uVar10);
        if (uVar11 == 5) {
          local_104 = 0;
          local_100 = local_94;
          if (local_94 == (undefined1 *)0x0) {
            uStack_8c = 0;
          }
          local_110 = local_94;
          local_118 = (undefined4 ****)(uint)(local_94 != (undefined1 *)0x0);
          local_fc = local_90;
          local_10c = local_90;
          local_114 = (undefined4 ****)0x0;
          local_108 = local_118;
          local_f8 = uStack_8c;
          FUN_00fea674(auStack_68,&local_118);
          if (local_5c != 0) {
            FUN_0067b1ac(&local_118,auStack_68);
            local_c0 = local_118;
            ppppuStack_bc = local_114;
            puStack_b8 = local_110;
            cVar2 = (char)local_10c;
            local_c4 = local_10c._1_2_;
            local_c2 = local_10c._3_1_;
            FUN_00e0febc(&local_98);
            if (cVar2 != '\x02') {
              local_118 = local_c0;
              local_114 = ppppuStack_bc;
              local_110 = puStack_b8;
              local_10c = (undefined4 *)CONCAT31(CONCAT12(local_c2,local_c4),cVar2);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_118);
              }
              if (((uint)local_10c & 0xff) != 2) {
                local_48._0_4_ = local_118;
                local_48._4_4_ = local_114;
                local_40 = local_110;
                local_3c = local_10c;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c480), cVar2 != '\0'))))
                    && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)))) {
                  local_78 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_010770f8:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_48._4_4_ = &local_98;
                  local_110 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                  local_10c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                  local_48._0_4_ = &local_118;
                  local_80 = (undefined4 ****)&local_48;
                  local_7c = (char **)&DAT_00000001;
                  local_108 = (undefined4 ****)0x0;
                  local_40 = &DAT_01d2ea4c;
                  local_94 = (undefined1 *)0x6b;
                  local_98 = (undefined4 ****)0x3fe987;
                  local_118 = (undefined4 ****)*local_78;
                  local_114 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
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
                      goto LAB_010770f8;
                      local_7c = &local_a0;
                      local_110 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                      local_10c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                      local_80 = &local_118;
                      local_98 = &local_80;
                      local_108 = (undefined4 ****)0x0;
                      local_94 = (undefined1 *)0x1;
                      local_78 = (undefined4 *)&DAT_01d2ea4c;
                      local_9c = 0x6b;
                      local_a0 = "BUG: request parameters cell was already initialized.";
                      local_48._0_4_ = local_b0;
                      local_48._4_4_ = local_ac;
                      local_40 = local_a8;
                      local_118 = (undefined4 ****)*local_90;
                      local_114 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar8,pcVar1,puVar12[4],&local_48,&local_98);
                    }
                  }
                }
              }
            }
            goto LAB_01076c64;
          }
          FUN_0165a1f4(auStack_68);
        }
        FUN_00e0febc(&local_98);
        goto LAB_01076c64;
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
LAB_01076c64:
  *(undefined1 *)(param_2 + 0x6b2) = 0;
  FUN_01bed4e2(&local_118,param_2 + 0x50,0x50);
  FUN_00f07a48((undefined4 *)(param_2 + 0x6a4),&local_118);
  *(undefined1 *)(param_2 + 0x6b1) = 1;
  iVar3 = *(int *)(iVar3 + 4);
  *(undefined1 *)(param_2 + 0x6b1) = 0;
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x6a8);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x6ac);
  *(undefined1 *)(param_2 + 0xd4) = 0;
  *(int *)(param_2 + 0xac) = iVar3 + 8;
switchD_01076b6c_caseD_3:
  uVar13 = FUN_010773d8(param_2 + 0xa0,param_3);
  if ((int)uVar13 == 0) {
    uVar7 = 4;
    uVar10 = 3;
  }
  else {
    FUN_01077260(param_2 + 0xa0);
    local_48 = uVar13;
    puVar6 = (undefined8 *)thunk_FUN_01be5118(8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar6 = uVar13;
    FUN_00d91c94(&local_118,puVar6,&DAT_01c1d768);
    FUN_01bed4e2(param_1 + 2,&local_118,0x50);
    *(undefined2 *)(param_2 + 0x6b1) = 0;
    uVar7 = 3;
    uVar10 = 1;
  }
  *(undefined1 *)(param_2 + 0x6b0) = uVar10;
  *param_1 = uVar7;
  param_1[1] = 0;
  return;
}

