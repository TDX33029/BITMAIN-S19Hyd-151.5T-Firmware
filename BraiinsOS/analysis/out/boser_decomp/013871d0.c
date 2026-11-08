// FUN_013871d0 @ 013871d0 size=868 calls_out=6 calls_in=3
// strings: h2::proto::streams::send/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:201event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:230event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:214event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:404event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:133event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:88event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:92 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::send/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:201event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:230event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:214event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:404event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:133event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:88event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/send.rs:92 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_013871d0(undefined1 *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 ****ppppuVar9;
  uint local_84;
  undefined4 ***local_80;
  uint **local_7c;
  undefined4 *local_78;
  undefined *local_74;
  uint **local_70;
  undefined4 **local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 **local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint *local_40;
  code *local_3c;
  uint *local_38;
  code *local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  local_38 = (uint *)(param_2 + 0x60);
  if (param_3 <= *local_38) {
    uVar1 = 3;
    *local_38 = param_3;
    goto LAB_013874f4;
  }
  local_84 = param_3;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4d79c - 1 < 2 ||
       ((DAT_01d4d79c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d794), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d794), iVar3 != 0)))) {
    local_50 = *(int *)(DAT_01d4d794 + 0x20);
    if (local_50 == 0) {
LAB_0138751c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cebc00);
    }
    local_4c = *(undefined4 *)(DAT_01d4d794 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d4d794 + 0x28);
    local_5c = &local_74;
    local_78 = (undefined4 *)(DAT_01d4d794 + 0x1c);
    local_54 = (undefined4 **)*local_78;
    local_60 = &local_54;
    local_7c = (uint **)&DAT_00000001;
    local_70 = &local_40;
    ppppuVar9 = &local_80;
    local_80 = &local_60;
    local_40 = &local_84;
    local_44 = 0;
    local_58 = (undefined4 *)&DAT_01d2ea4c;
    local_74 = &DAT_0057eb2d;
    local_34 = FUN_00b1c384;
    local_3c = FUN_00b1c384;
    FUN_01aaaecc(DAT_01d4d794,ppppuVar9);
    iVar3 = DAT_01d4d794;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4d794 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4d794 + 0x18);
      local_30 = (undefined4 **)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
      }
      pcVar8 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar7[3])(pcVar8,&local_30);
      if (iVar4 != 0) {
        uVar5 = puVar7[4];
        pppuVar6 = &local_30;
        goto LAB_013874c4;
      }
    }
  }
  else {
    iVar3 = DAT_01d4d794;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_68 = *(undefined4 *)(DAT_01d4d794 + 0x14);
      local_64 = *(undefined4 *)(DAT_01d4d794 + 0x18);
      local_6c = (undefined4 **)0x4;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
      }
      pcVar8 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar7[3])(pcVar8,&local_6c);
      if (iVar4 != 0) {
        local_58 = (undefined4 *)(DAT_01d4d794 + 0x1c);
        local_54 = (undefined4 **)*local_58;
        local_50 = *(int *)(DAT_01d4d794 + 0x20);
        if (local_50 == 0) goto LAB_0138751c;
        local_2c = &local_80;
        local_4c = *(undefined4 *)(DAT_01d4d794 + 0x24);
        local_48 = *(undefined4 *)(DAT_01d4d794 + 0x28);
        local_30 = &local_54;
        local_60 = &local_30;
        local_44 = 0;
        local_5c = (undefined **)&DAT_00000001;
        local_7c = &local_40;
        local_40 = &local_84;
        local_28 = &DAT_01d2ea4c;
        ppppuVar9 = &local_60;
        local_80 = (undefined4 ***)&DAT_0057eb2d;
        pppuVar6 = &local_6c;
        local_34 = FUN_00b1c384;
        local_3c = FUN_00b1c384;
        uVar5 = puVar7[4];
LAB_013874c4:
        FUN_01aaa328(iVar3,pcVar8,uVar5,pppuVar6,ppppuVar9);
      }
    }
  }
  uVar1 = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_01ceb2a4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_013874f4:
  *param_1 = uVar1;
  return;
}

