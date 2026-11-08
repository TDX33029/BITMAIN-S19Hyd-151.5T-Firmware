// FUN_01393adc @ 01393adc size=1116 calls_out=8 calls_in=2
// strings: h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01393adc(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 ****ppppuVar7;
  byte *pbVar8;
  undefined4 ****ppppuVar9;
  char *local_84;
  undefined4 ***local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 ***local_74;
  undefined **local_70;
  undefined4 *local_6c;
  undefined *local_68;
  char ***local_64;
  char **local_60;
  code *local_5c;
  undefined4 ***local_58;
  undefined **local_54;
  undefined1 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined **local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  pbVar8 = (byte *)(param_2 + 0x20);
  local_84 = param_1;
  if (*pbVar8 < 6) goto LAB_01393eb0;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4de50 - 1 < 2 ||
       ((DAT_01d4de50 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4de48), cVar1 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d4de48), iVar4 != 0)))) {
    local_3c = *(undefined ***)(DAT_01d4de48 + 0x20);
    if (local_3c == (undefined **)0x0) {
LAB_01393f20:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf07f8);
    }
    local_38 = *(undefined1 **)(DAT_01d4de48 + 0x24);
    local_34 = *(undefined4 *)(DAT_01d4de48 + 0x28);
    local_70 = &local_68;
    local_78 = (undefined4 *)(DAT_01d4de48 + 0x1c);
    local_40 = (undefined4 ***)*local_78;
    local_74 = (undefined4 ***)&local_40;
    local_7c = 1;
    local_64 = &local_60;
    local_5c = FUN_013bc948;
    ppppuVar9 = &local_80;
    local_80 = &local_74;
    local_60 = &local_84;
    local_30 = 0;
    local_6c = (undefined4 *)&DAT_01d2ea4c;
    local_68 = &DAT_00577324;
    FUN_01aaaecc(DAT_01d4de48,ppppuVar9);
    iVar4 = DAT_01d4de48;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_54 = *(undefined ***)(DAT_01d4de48 + 0x14);
      local_50 = *(undefined1 **)(DAT_01d4de48 + 0x18);
      local_58 = (undefined4 ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar3 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar3 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar3[3])(pcVar5,&local_58);
      if (iVar2 != 0) {
        uVar6 = puVar3[4];
        ppppuVar7 = &local_58;
        goto LAB_01393c50;
      }
    }
  }
  else {
    iVar4 = DAT_01d4de48;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_7c = *(undefined4 *)(DAT_01d4de48 + 0x14);
      local_78 = *(undefined4 **)(DAT_01d4de48 + 0x18);
      local_80 = (undefined4 ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar3 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar3 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar3[3])(pcVar5,&local_80);
      if (iVar2 != 0) {
        local_6c = (undefined4 *)(DAT_01d4de48 + 0x1c);
        local_40 = (undefined4 ***)*local_6c;
        local_3c = *(undefined ***)(DAT_01d4de48 + 0x20);
        if (local_3c == (undefined **)0x0) goto LAB_01393f20;
        local_58 = (undefined4 ***)&local_40;
        local_38 = *(undefined1 **)(DAT_01d4de48 + 0x24);
        local_34 = *(undefined4 *)(DAT_01d4de48 + 0x28);
        local_54 = &local_68;
        local_74 = &local_58;
        ppppuVar7 = &local_80;
        local_70 = (undefined **)&DAT_00000001;
        local_64 = &local_60;
        local_30 = 0;
        local_50 = &DAT_01d2ea4c;
        local_68 = &DAT_00577324;
        local_5c = FUN_013bc948;
        local_60 = &local_84;
        ppppuVar9 = &local_74;
        uVar6 = puVar3[4];
LAB_01393c50:
        FUN_01aaa328(iVar4,pcVar5,uVar6,ppppuVar7,ppppuVar9);
      }
    }
  }
  if (*param_1 == '\0') {
    local_3c = *(undefined ***)(param_1 + 4);
    local_38 = *(undefined1 **)(param_1 + 8);
    cVar1 = param_1[1];
    local_40 = (undefined4 ***)((uint)local_40 & 0xffffff00);
LAB_01393e34:
    local_40._0_2_ = CONCAT11(cVar1,(undefined1)local_40);
  }
  else {
    if (*param_1 == '\x01') {
      (*(code *)**(undefined4 **)(param_1 + 8))
                (&local_38,param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x10));
      cVar1 = param_1[1];
      local_3c = *(undefined ***)(param_1 + 4);
      local_40 = (undefined4 ***)CONCAT31(local_40._1_3_,1);
      goto LAB_01393e34;
    }
    cVar1 = param_1[1];
    if (*(int *)(param_1 + 4) == -0x80000000) {
      local_58 = (undefined4 ***)&DAT_80000000;
    }
    else {
      FUN_006666fc(&local_58,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
    puVar3 = (undefined4 *)((uint)&local_40 | 4);
    *puVar3 = local_58;
    puVar3[1] = local_54;
    puVar3[2] = local_50;
    local_40 = (undefined4 ***)CONCAT31(CONCAT21(local_40._2_2_,cVar1),2);
  }
  local_58 = local_40;
  local_54 = local_3c;
  local_50 = local_38;
  uStack_4c = local_34;
  uStack_48 = local_30;
  uStack_44 = uStack_2c;
  FUN_013b63b0(pbVar8);
  *(undefined4 ****)pbVar8 = local_58;
  *(undefined ***)(param_2 + 0x24) = local_54;
  *(undefined1 **)(param_2 + 0x28) = local_50;
  *(undefined4 *)(param_2 + 0x2c) = uStack_4c;
  *(undefined4 *)(param_2 + 0x30) = uStack_48;
  *(undefined4 *)(param_2 + 0x34) = uStack_44;
LAB_01393eb0:
  iVar4 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (iVar4 != 0) {
    (**(code **)(iVar4 + 4))(*(undefined4 *)(param_2 + 0x44));
  }
  iVar4 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01393ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 4))(*(undefined4 *)(param_2 + 0x54));
  return;
}

