// FUN_00b3b5e0 @ 00b3b5e0 size=1112 calls_out=9 calls_in=1
// strings: Failed to remove firmware file on drop | boser::api::grpc::upgrade::system_upgradeopen/boser/boser/src/api/grpc/upgrade/system_upgrade.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::upgrade::system_upgradeopen/boser/boser/src/api/grpc/upgrade/system_upgrade.rs

void FUN_00b3b5e0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r3;
  undefined4 unaff_r5;
  undefined4 ***pppuVar5;
  undefined4 uVar6;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 *puVar7;
  undefined4 **local_d0;
  undefined4 local_cc;
  undefined4 **local_c8;
  undefined4 local_c4;
  undefined4 **local_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  undefined4 ***local_b0;
  undefined4 local_ac;
  undefined4 ****local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 ****local_94;
  undefined1 *local_90;
  undefined4 *local_8c;
  undefined4 ****local_88;
  undefined *local_84;
  undefined4 *local_80;
  undefined4 ****local_7c;
  undefined *local_78;
  undefined4 local_74;
  uint uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 ***local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 ***local_44;
  undefined4 local_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  if (*(char *)(param_1 + 0xc) != '\x01') {
    return;
  }
  pppuVar5 = *(undefined4 ****)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 8);
  FUN_019ac798(&local_d0,pppuVar5,uVar6);
  if ((char)local_d0 == '\x04') {
    return;
  }
  cVar2 = FUN_005ef5e8(&local_d0);
  if (cVar2 == '\0') {
    goto LAB_00b3ba14;
  }
  local_c4 = local_cc;
  local_c8 = local_d0;
  if ((DAT_01d50f88 < 4) &&
     ((DAT_01d4c2d8 - 1 < 2 ||
      ((DAT_01d4c2d8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c2d0), cVar2 != '\0')))))) {
    puVar7 = (undefined4 *)0xb3b674;
    iVar3 = FUN_01aaa278(DAT_01d4c2d0);
    if (iVar3 == 0) goto LAB_00b3b84c;
    uStack_3c = *(uint *)(DAT_01d4c2d0 + 0x20);
    local_40 = extraout_r3;
    if (uStack_3c != 0) {
      param_1 = *(int *)(DAT_01d4c2d0 + 0x24);
      unaff_r5 = *(undefined4 *)(DAT_01d4c2d0 + 0x28);
      puVar7 = (undefined4 *)(DAT_01d4c2d0 + 0x1c);
      local_40 = *puVar7;
      local_64 = 0;
      local_ac = 0x4d;
      local_b0 = (undefined4 ***)0x3ed96b;
      local_74 = local_40;
      uStack_70 = uStack_3c;
      iStack_6c = param_1;
      uStack_68 = unaff_r5;
    }
    if (uStack_3c < 2) goto LAB_00b3b928;
    local_48 = 1;
    local_a8 = &local_60;
    local_60 = pppuVar5;
    local_5c = uVar6;
    local_58 = local_40;
    uStack_54 = uStack_3c;
    iStack_50 = param_1;
    uStack_4c = unaff_r5;
    if (uStack_3c < 3) goto LAB_00b3b928;
    local_7c = &local_44;
    local_80 = &local_40;
    local_88 = &local_a8;
    local_8c = &local_58;
    local_94 = &local_b0;
    local_98 = &local_74;
    local_bc = &local_98;
    local_30 = 2;
    local_b8 = 3;
    local_44 = &local_c8;
    local_78 = &DAT_01c12af0;
    local_84 = &DAT_01c12ae0;
    local_90 = &DAT_01d2ea4c;
    local_b4 = puVar7;
    iStack_38 = param_1;
    uStack_34 = unaff_r5;
    FUN_01aaaecc(DAT_01d4c2d0,&local_bc);
    iVar3 = DAT_01d4c2d0;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_28 = *(undefined4 *)(DAT_01d4c2d0 + 0x14);
      local_24 = *(undefined4 **)(DAT_01d4c2d0 + 0x18);
      local_2c = (undefined4 **)0x2;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar7[3])(pcVar1,&local_2c);
      if (iVar4 != 0) {
        FUN_01aaa328(iVar3,pcVar1,puVar7[4],&local_2c,&local_bc);
      }
    }
  }
  else {
LAB_00b3b84c:
    iVar3 = DAT_01d4c2d0;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_a0 = *(undefined4 *)(DAT_01d4c2d0 + 0x14);
      local_9c = *(undefined4 *)(DAT_01d4c2d0 + 0x18);
      local_a4 = 2;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar7[3])(pcVar1,&local_a4);
      if (iVar4 != 0) {
        local_24 = (undefined4 *)(DAT_01d4c2d0 + 0x1c);
        local_40 = *local_24;
        uStack_3c = *(uint *)(DAT_01d4c2d0 + 0x20);
        if (uStack_3c != 0) {
          unaff_r8 = *(int *)(DAT_01d4c2d0 + 0x24);
          unaff_r9 = *(undefined4 *)(DAT_01d4c2d0 + 0x28);
          local_64 = 0;
          local_5c = 0x4d;
          local_60 = (undefined4 ***)0x3ed96b;
          local_74 = local_40;
          uStack_70 = uStack_3c;
          iStack_6c = unaff_r8;
          uStack_68 = unaff_r9;
        }
        if (uStack_3c < 2) {
LAB_00b3b928:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c12ad0);
        }
        local_bc = *(undefined4 ***)(param_1 + 4);
        local_b8 = *(undefined4 *)(param_1 + 8);
        local_48 = 1;
        local_44 = &local_bc;
        local_58 = local_40;
        uStack_54 = uStack_3c;
        iStack_50 = unaff_r8;
        uStack_4c = unaff_r9;
        if (uStack_3c < 3) goto LAB_00b3b928;
        local_7c = &local_b0;
        local_80 = &local_40;
        local_88 = &local_44;
        local_8c = &local_58;
        local_94 = &local_60;
        local_98 = &local_74;
        local_2c = &local_98;
        local_30 = 2;
        local_28 = 3;
        local_b0 = &local_c8;
        local_78 = &DAT_01c12af0;
        local_84 = &DAT_01c12ae0;
        local_90 = &DAT_01d2ea4c;
        iStack_38 = unaff_r8;
        uStack_34 = unaff_r9;
        FUN_01aaa328(iVar3,pcVar1,puVar7[4],&local_a4,&local_2c);
      }
    }
  }
  local_d0 = (undefined4 **)((uint)local_c8 & 0xff);
  local_cc = local_c4;
LAB_00b3ba14:
  FUN_0069263c(local_d0,local_cc);
  return;
}

