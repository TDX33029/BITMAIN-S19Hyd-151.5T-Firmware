// FUN_013596fc @ 013596fc size=788 calls_out=6 calls_in=3
// strings: connection error PROTOCOL_ERROR -- recv_push_promise: push is disabled;event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:502event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:524event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:537event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:426event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:899event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:690event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:1055event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:362event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:455event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:965 | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_013596fc(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 ***pppuVar7;
  undefined4 *puVar8;
  undefined4 ****ppppuVar9;
  undefined4 ***local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 ***local_4c;
  char **local_48;
  undefined4 *local_44;
  undefined4 **local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined4 ****local_28;
  undefined1 *local_24;
  
  uVar1 = 3;
  if ((param_2 & 1) != 0) goto LAB_013599d0;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4d118 - 1 < 2 ||
       ((DAT_01d4d118 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d110), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d110), iVar3 != 0)))) {
    iStack_3c = *(int *)(DAT_01d4d110 + 0x20);
    if (iStack_3c == 0) {
LAB_013599f8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce75f4);
    }
    local_48 = &local_60;
    uStack_38 = *(undefined4 *)(DAT_01d4d110 + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d4d110 + 0x28);
    local_64 = (undefined4 *)(DAT_01d4d110 + 0x1c);
    local_40 = (undefined4 **)*local_64;
    local_4c = &local_40;
    local_6c = &local_4c;
    local_30 = 0;
    ppppuVar9 = &local_6c;
    local_68 = 1;
    local_5c = 0x8f;
    local_44 = (undefined4 *)&DAT_01d2ea4c;
    local_60 = 
    "connection error PROTOCOL_ERROR -- recv_push_promise: push is disabled;event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:502event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:524event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:537event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:426event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:899event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:690event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:1055event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:362event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:455event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:965"
    ;
    FUN_01aaaecc(DAT_01d4d110,ppppuVar9);
    iVar3 = DAT_01d4d110;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_28 = *(undefined4 *****)(DAT_01d4d110 + 0x14);
      local_24 = *(undefined1 **)(DAT_01d4d110 + 0x18);
      local_2c = (undefined4 **)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar8[3])(pcVar5,&local_2c);
      if (iVar4 != 0) {
        uVar6 = puVar8[4];
        pppuVar7 = &local_2c;
        goto LAB_013599a8;
      }
    }
  }
  else {
    iVar3 = DAT_01d4d110;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_54 = *(undefined4 *)(DAT_01d4d110 + 0x14);
      local_50 = *(undefined4 *)(DAT_01d4d110 + 0x18);
      local_58 = (undefined4 **)0x4;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar8[3])(pcVar5,&local_58);
      if (iVar4 != 0) {
        local_44 = (undefined4 *)(DAT_01d4d110 + 0x1c);
        local_40 = (undefined4 **)*local_44;
        iStack_3c = *(int *)(DAT_01d4d110 + 0x20);
        if (iStack_3c == 0) goto LAB_013599f8;
        local_28 = &local_6c;
        uStack_38 = *(undefined4 *)(DAT_01d4d110 + 0x24);
        uStack_34 = *(undefined4 *)(DAT_01d4d110 + 0x28);
        local_2c = &local_40;
        local_4c = &local_2c;
        local_30 = 0;
        local_48 = (char **)&DAT_00000001;
        local_68 = 0x8f;
        local_24 = &DAT_01d2ea4c;
        ppppuVar9 = &local_4c;
        local_6c = (undefined4 ***)0x45d85e;
        pppuVar7 = &local_58;
        uVar6 = puVar8[4];
LAB_013599a8:
        FUN_01aaa328(iVar3,pcVar5,uVar6,pppuVar7,ppppuVar9);
      }
    }
  }
  uVar1 = 1;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_01ceb2a4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_013599d0:
  *param_1 = uVar1;
  return;
}

