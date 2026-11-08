// FUN_0135ceb0 @ 0135ceb0 size=968 calls_out=9 calls_in=3
// strings: h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | stream closed because of a broken pipeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:190event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:148event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:198event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:162event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:178

void FUN_0135ceb0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ****ppppuVar5;
  undefined4 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 ****ppppuVar9;
  byte *local_74;
  undefined4 ***local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 ***local_64;
  undefined **local_60;
  undefined4 *local_5c;
  undefined *local_58;
  byte ***local_54;
  byte **local_50;
  code *local_4c;
  undefined4 **local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 ***local_30;
  undefined **local_2c;
  undefined1 *local_28;
  
  pbVar8 = (byte *)(param_1 + 0x20);
  if (*pbVar8 < 6) goto LAB_0135d1d0;
  local_74 = pbVar8;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d670 - 1 < 2 ||
       ((DAT_01d4d670 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d668), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d668), iVar3 != 0)))) {
    local_44 = *(int *)(DAT_01d4d668 + 0x20);
    if (local_44 == 0) {
LAB_0135d260:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea35c);
    }
    local_40 = *(undefined4 *)(DAT_01d4d668 + 0x24);
    local_3c = *(undefined4 *)(DAT_01d4d668 + 0x28);
    local_60 = &local_58;
    local_68 = (undefined4 *)(DAT_01d4d668 + 0x1c);
    local_48 = (undefined4 **)*local_68;
    ppppuVar9 = &local_70;
    local_64 = &local_48;
    local_6c = 1;
    local_54 = &local_50;
    local_70 = &local_64;
    local_50 = &local_74;
    local_38 = 0;
    local_5c = (undefined4 *)&DAT_01d2ea4c;
    local_58 = &DAT_005a582f;
    local_4c = FUN_0137acac;
    FUN_01aaaecc(DAT_01d4d668,ppppuVar9);
    iVar3 = DAT_01d4d668;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(undefined ***)(DAT_01d4d668 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4d668 + 0x18);
      local_30 = (undefined4 ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
      }
      pcVar7 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar6[3])(pcVar7,&local_30);
      if (iVar2 != 0) {
        uVar4 = puVar6[4];
        ppppuVar5 = &local_30;
        goto LAB_0135d010;
      }
    }
  }
  else {
    iVar3 = DAT_01d4d668;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_6c = *(undefined4 *)(DAT_01d4d668 + 0x14);
      local_68 = *(undefined4 **)(DAT_01d4d668 + 0x18);
      local_70 = (undefined4 ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
      }
      pcVar7 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar6[3])(pcVar7,&local_70);
      if (iVar2 != 0) {
        local_5c = (undefined4 *)(DAT_01d4d668 + 0x1c);
        local_48 = (undefined4 **)*local_5c;
        local_44 = *(int *)(DAT_01d4d668 + 0x20);
        if (local_44 == 0) goto LAB_0135d260;
        local_2c = &local_58;
        local_40 = *(undefined4 *)(DAT_01d4d668 + 0x24);
        local_3c = *(undefined4 *)(DAT_01d4d668 + 0x28);
        local_30 = &local_48;
        local_64 = &local_30;
        local_38 = 0;
        local_60 = (undefined **)&DAT_00000001;
        local_54 = &local_50;
        ppppuVar5 = &local_70;
        local_50 = &local_74;
        ppppuVar9 = &local_64;
        local_28 = &DAT_01d2ea4c;
        local_58 = &DAT_005a582f;
        local_4c = FUN_0137acac;
        uVar4 = puVar6[4];
LAB_0135d010:
        FUN_01aaa328(iVar3,pcVar7,uVar4,ppppuVar5,ppppuVar9);
      }
    }
  }
  FUN_019a18a8(&local_30,0xb,
               "stream closed because of a broken pipeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:190event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:148event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:198event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:162event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:178"
               ,0x26);
  FUN_01386464(&local_48,&local_30);
  FUN_0137ac50(pbVar8);
  *(undefined4 ***)pbVar8 = local_48;
  *(int *)(param_1 + 0x24) = local_44;
  *(undefined4 *)(param_1 + 0x28) = local_40;
  *(undefined4 *)(param_1 + 0x2c) = local_3c;
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
LAB_0135d1d0:
  iVar3 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x44));
  }
  iVar3 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x54));
  }
  iVar3 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0135d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x5c));
  return;
}

