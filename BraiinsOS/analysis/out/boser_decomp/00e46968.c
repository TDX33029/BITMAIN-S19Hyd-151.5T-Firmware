// FUN_00e46968 @ 00e46968 size=1620 calls_out=26 calls_in=0
// strings: save_action | hashrate_target_decrementIncrementHashrateTargetRequesthashrate_target_increment | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Control flow encountered bad instruction data */

void FUN_00e46968(undefined4 *param_1,int param_2,undefined4 param_3)

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
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_210 [80];
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 ****local_188;
  undefined4 ****local_184;
  undefined8 local_180;
  undefined4 ****local_178;
  undefined4 local_174;
  int local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  undefined4 local_138;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 auStack_120 [84];
  undefined2 local_cc;
  undefined1 local_ca;
  undefined4 ****local_c8;
  undefined4 ****ppppuStack_c4;
  undefined4 uStack_c0;
  undefined4 ****local_b8;
  undefined4 ****local_b4;
  undefined1 *local_b0;
  char *local_a8;
  undefined4 local_a4;
  undefined4 ****local_a0;
  int local_9c;
  undefined4 *local_98;
  undefined4 uStack_94;
  undefined4 ****local_88;
  char **local_84;
  undefined4 *local_80;
  undefined1 auStack_70 [12];
  int local_64;
  undefined4 ****local_50;
  undefined4 ****local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 ****local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 *puStack_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x764)) {
  case 0:
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17244);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17244);
  case 3:
    goto switchD_00e46994_caseD_3;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar10 = *(undefined4 *)(param_2 + 0x760);
  puVar13 = (undefined4 *)(param_2 + 0x60);
  *(undefined2 *)(param_2 + 0x765) = 0x100;
  FUN_01bed4e2(puVar13,param_2,0x60);
  piVar6 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xb8));
  if (piVar6 != (int *)0x0) {
    local_40 = (undefined4 ****)&DAT_80000000;
    local_44 = 0;
    local_4c = (undefined4 ****)0x0;
    local_50 = (undefined4 ****)0x0;
    ppcVar7 = (char **)FUN_014a7b90(&local_50,"save_action",0xb,*(undefined4 *)(param_2 + 0x70));
    if ((ppcVar7 == (char **)0x0) &&
       (ppcVar7 = (char **)FUN_00a47f8c((int)*(undefined8 *)(param_2 + 0x68),&local_50,
                                        "hashrate_target_decrementIncrementHashrateTargetRequesthashrate_target_increment"
                                        ,0x19,*(undefined4 *)(param_2 + 100),*puVar13,
                                        *(undefined4 *)(param_2 + 100)), ppcVar7 == (char **)0x0)) {
      local_188 = local_50;
      local_184 = local_4c;
      local_180 = CONCAT44(local_44,local_48);
      local_178 = local_40;
      local_174 = uStack_3c;
      local_170 = iStack_38;
      local_16c = puStack_34;
      FUN_0196ac88(&local_88);
      uVar4 = local_88._0_1_;
      uVar12 = (uint)local_88 & 0xff;
      if (uVar12 != 6) {
        FUN_01bed4e2((uint)&local_a0 | 1,(uint)&local_88 | 1,0x17);
        local_a0 = (undefined4 ****)CONCAT31(local_a0._1_3_,uVar4);
        if (uVar12 == 5) {
          local_174 = 0;
          local_170 = local_9c;
          local_168 = uStack_94;
          if (local_9c == 0) {
            local_168 = 0;
          }
          local_188 = (undefined4 ****)(uint)(local_9c != 0);
          local_16c = local_98;
          local_180 = CONCAT44(local_98,local_9c);
          local_184 = (undefined4 ****)0x0;
          local_178 = local_188;
          FUN_00fea674(auStack_70,&local_188);
          if (local_64 != 0) {
            FUN_0067b1ac(&local_188,auStack_70);
            local_c8 = local_188;
            ppppuStack_c4 = local_184;
            uStack_c0 = (undefined1 *)local_180;
            cVar5 = local_180._4_1_;
            local_cc = local_180._5_2_;
            local_ca = local_180._7_1_;
            FUN_00e0febc(&local_a0);
            if (cVar5 != '\x02') {
              local_188 = local_c8;
              local_184 = ppppuStack_c4;
              local_180 = CONCAT35(CONCAT12(local_ca,local_cc),CONCAT14(cVar5,uStack_c0));
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar6 + 0x18) != 0) {
                FUN_00b065ec(*piVar6 + 8,&local_188);
              }
              if (local_180._4_1_ != '\x02') {
                local_50 = local_188;
                local_4c = local_184;
                local_48 = (undefined1 *)local_180;
                local_44 = (undefined4)((ulonglong)local_180 >> 0x20);
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0'))))
                    && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)))) {
                  local_80 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e46fbc:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_4c = &local_a0;
                  local_180 = *(undefined8 *)(DAT_01d4c480 + 0x24);
                  local_50 = &local_188;
                  local_88 = &local_50;
                  local_84 = (char **)&DAT_00000001;
                  local_178 = (undefined4 ****)0x0;
                  local_48 = &DAT_01d2ea4c;
                  local_9c = 0x6b;
                  local_a0 = (undefined4 ****)0x3fe987;
                  local_188 = (undefined4 ****)*local_80;
                  local_184 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_88);
                }
                else {
                  iVar8 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_b4 = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_b0 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                    local_b8 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar11 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar11 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar9 = (*(code *)puVar11[3])(pcVar1,&local_b8);
                    if (iVar9 != 0) {
                      local_98 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e46fbc;
                      local_84 = &local_a8;
                      local_180 = *(undefined8 *)(DAT_01d4c480 + 0x24);
                      local_88 = &local_188;
                      local_a0 = &local_88;
                      local_9c = 1;
                      local_178 = (undefined4 ****)0x0;
                      local_80 = (undefined4 *)&DAT_01d2ea4c;
                      local_a4 = 0x6b;
                      local_a8 = "BUG: request parameters cell was already initialized.";
                      local_50 = local_b8;
                      local_4c = local_b4;
                      local_48 = local_b0;
                      local_188 = (undefined4 ****)*local_98;
                      local_184 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar8,pcVar1,puVar11[4],&local_50,&local_a0);
                    }
                  }
                }
              }
            }
            goto LAB_00e46a74;
          }
          FUN_0165a1f4(auStack_70);
        }
        FUN_00e0febc(&local_a0);
        goto LAB_00e46a74;
      }
      ppcVar7 = local_84;
    }
    else {
      local_88 = (undefined4 ****)CONCAT31(local_88._1_3_,6);
      local_84 = ppcVar7;
      FUN_01276d58(&local_50);
    }
    FUN_00e0fe5c(ppcVar7);
  }
LAB_00e46a74:
  *(undefined1 *)(param_2 + 0x766) = 0;
  FUN_01bed4e2(&local_188,puVar13,0x60);
  FUN_00f079cc(&local_1c0,&local_188);
  puVar13 = (undefined4 *)((uint)&local_1a8 | 4);
  *puVar13 = local_1c0;
  puVar13[1] = uStack_1bc;
  puVar13[2] = uStack_1b8;
  puVar13[3] = uStack_1b4;
  puVar13[4] = uStack_1b0;
  puVar13[5] = uStack_1ac;
  *(undefined4 *)(param_2 + 0xc0) = 3;
  *(undefined4 *)(param_2 + 0xc4) = local_1a8;
  *(undefined4 *)(param_2 + 200) = uStack_1a4;
  *(undefined4 *)(param_2 + 0xcc) = uStack_1a0;
  *(undefined4 *)(param_2 + 0xd0) = local_19c;
  *(undefined4 *)(param_2 + 0xd4) = uStack_198;
  *(undefined4 *)(param_2 + 0xd8) = uStack_194;
  *(undefined4 *)(param_2 + 0xdc) = uStack_190;
  *(undefined1 *)(param_2 + 0x124) = 0;
  *(undefined4 *)(param_2 + 0x108) = uVar10;
switchD_00e46994_caseD_3:
  FUN_00e3a488(&local_188,param_2 + 0xc0,param_3);
  uVar14 = local_180;
  ppppuVar3 = local_184;
  ppppuVar2 = local_188;
  if (local_188 == (undefined4 ****)&SUB_00000004 && local_184 == (undefined4 ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar4 = 3;
  }
  else {
    FUN_01bed4e2(auStack_120,&local_178,0x50);
    FUN_00e3a348(param_2 + 0xc0);
    if (ppppuVar2 == (undefined4 ****)&DAT_00000003 && ppppuVar3 == (undefined4 ****)0x0) {
      FUN_0160aaa4(&local_178,0);
      local_138 = 0;
      local_180 = uVar14;
      FUN_01bed4e2(auStack_210,&local_180,0x50);
      uVar14 = 1;
      *(undefined1 *)(param_2 + 0x766) = 0;
    }
    else {
      FUN_01bed4e2(auStack_210,auStack_120,0x50);
      *(undefined1 *)(param_2 + 0x766) = 0;
      if (*(char *)(param_2 + 0x765) == '\x01') {
        FUN_00e38188(param_2);
      }
    }
    *(undefined8 *)(param_1 + 2) = uVar14;
    *param_1 = ppppuVar2;
    param_1[1] = ppppuVar3;
    FUN_01bed4e2(param_1 + 4,auStack_210,0x50);
    uVar4 = 1;
    param_1[0x18] = local_128;
    param_1[0x19] = local_124;
  }
  *(undefined1 *)(param_2 + 0x764) = uVar4;
  return;
}

