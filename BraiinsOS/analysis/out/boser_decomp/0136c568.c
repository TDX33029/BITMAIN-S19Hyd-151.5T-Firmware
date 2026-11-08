// FUN_0136c568 @ 0136c568 size=1776 calls_out=10 calls_in=5
// strings: h2::proto::streams::prioritizestream.id/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:669 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | schedule_pending_openrequestedeffectiveevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:604szevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:616event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:427event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:458 | schedule_pending_openrequestedeffectiveevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:604szevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:616event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:427event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:458 | h2::proto::streams::prioritizestream.id/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:669

void FUN_0136c568(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_98;
  int iStack_94;
  int iStack_90;
  char *local_88;
  int local_84;
  int local_80;
  undefined4 ****local_78;
  code *local_74;
  undefined4 *local_70;
  char *local_6c;
  undefined4 ****local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 ***local_58;
  char **local_54;
  undefined4 *local_50;
  undefined4 **local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_38;
  undefined4 ****local_34;
  undefined4 ***local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d370 - 1 < 2 ||
       ((DAT_01d4d370 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d368), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d368), iVar3 != 0)))) {
    local_48 = *(int *)(DAT_01d4d368 + 0x20);
    if (local_48 == 0) {
LAB_0136cc28:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8cc4);
    }
    local_54 = &local_88;
    local_44 = *(undefined4 *)(DAT_01d4d368 + 0x24);
    local_40 = *(undefined4 *)(DAT_01d4d368 + 0x28);
    local_70 = (undefined4 *)(DAT_01d4d368 + 0x1c);
    local_4c = (undefined4 **)*local_70;
    local_58 = &local_4c;
    local_78 = &local_58;
    local_3c = 0;
    local_74 = (code *)0x1;
    local_84 = 0x2b;
    local_50 = (undefined4 *)&DAT_01d2ea4c;
    local_88 = 
    "schedule_pending_openrequestedeffectiveevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:604szevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:616event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:427event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:458"
    ;
    FUN_01aaaecc(DAT_01d4d368,&local_78);
    iVar3 = DAT_01d4d368;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4d368 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4d368 + 0x18);
      local_30 = (undefined4 ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar4[3])(pcVar5,&local_30);
      if (iVar2 != 0) {
        FUN_01aaa328(iVar3,pcVar5,puVar4[4],&local_30,&local_78);
      }
    }
  }
  else {
    iVar3 = DAT_01d4d368;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_a0 = *(undefined4 *)(DAT_01d4d368 + 0x14);
      local_9c = *(undefined4 *)(DAT_01d4d368 + 0x18);
      local_a4 = 5;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar4[3])(pcVar5,&local_a4);
      if (iVar2 != 0) {
        local_50 = (undefined4 *)(DAT_01d4d368 + 0x1c);
        local_4c = (undefined4 **)*local_50;
        local_48 = *(int *)(DAT_01d4d368 + 0x20);
        if (local_48 == 0) goto LAB_0136cc28;
        local_30 = &local_4c;
        local_58 = &local_30;
        local_44 = *(undefined4 *)(DAT_01d4d368 + 0x24);
        local_40 = *(undefined4 *)(DAT_01d4d368 + 0x28);
        local_2c = &local_78;
        local_3c = 0;
        local_54 = (char **)&DAT_00000001;
        local_28 = &DAT_01d2ea4c;
        local_74 = (code *)0x2b;
        local_78 = (undefined4 ****)0x460594;
        FUN_01aaa328(iVar3,pcVar5,puVar4[4],&local_a4,&local_58);
      }
    }
  }
  if ((*(uint *)(param_4 + 0xc) < *(uint *)(param_4 + 8)) &&
     (FUN_01368038(&local_98,param_2 + 0x28,param_3), local_98 != (char *)0x0)) {
    local_88 = local_98;
    local_84 = iStack_94;
    local_80 = iStack_90;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4d37c - 1 < 2 ||
         ((DAT_01d4d37c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d374), cVar1 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d4d374), iVar3 != 0)) {
      puVar4 = (undefined4 *)(DAT_01d4d374 + 0x1c);
      if (*(int *)(DAT_01d4d374 + 0x20) == 0) {
LAB_0136cc40:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8cd4);
      }
      local_3c = 0;
      local_44 = *(undefined4 *)(DAT_01d4d374 + 0x24);
      local_40 = *(undefined4 *)(DAT_01d4d374 + 0x28);
      local_4c = (undefined4 **)*puVar4;
      local_48 = *(int *)(DAT_01d4d374 + 0x20);
      iVar3 = FUN_01367c40(*(undefined4 *)(local_88 + 0x34),*(undefined4 *)(local_88 + 0x38),
                           local_84,local_80);
      local_68 = &local_38;
      local_38 = (undefined4 ***)(iVar3 + 0xd4);
      local_6c = &DAT_0058e96e;
      local_54 = &local_6c;
      local_58 = &local_4c;
      local_74 = (code *)0x1;
      local_78 = &local_58;
      local_50 = (undefined4 *)&DAT_01d2ea4c;
      local_34 = (undefined4 ****)FUN_00b1c384;
      local_70 = puVar4;
      FUN_01aaaecc(DAT_01d4d374,&local_78);
      iVar3 = DAT_01d4d374;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(undefined4 *****)(DAT_01d4d374 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d4d374 + 0x18);
        local_30 = (undefined4 ***)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar4 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar4 = &DAT_01cfc5e0;
        }
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar4[3])(pcVar5,&local_30);
        if (iVar2 != 0) {
          FUN_01aaa328(iVar3,pcVar5,puVar4[4],&local_30,&local_78);
        }
      }
    }
    else {
      iVar3 = DAT_01d4d374;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_60 = *(undefined4 *)(DAT_01d4d374 + 0x14);
        local_5c = *(undefined4 *)(DAT_01d4d374 + 0x18);
        local_64 = 5;
        DataMemoryBarrier(0xb);
        puVar4 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar4 = &DAT_01cfc5e0;
        }
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar4[3])(pcVar5,&local_64);
        if (iVar2 != 0) {
          puVar6 = (undefined4 *)(DAT_01d4d374 + 0x1c);
          if (*(int *)(DAT_01d4d374 + 0x20) == 0) goto LAB_0136cc40;
          local_3c = 0;
          local_44 = *(undefined4 *)(DAT_01d4d374 + 0x24);
          local_40 = *(undefined4 *)(DAT_01d4d374 + 0x28);
          local_4c = (undefined4 **)*puVar6;
          local_48 = *(int *)(DAT_01d4d374 + 0x20);
          iVar2 = FUN_01367c40(*(undefined4 *)(local_88 + 0x34),*(undefined4 *)(local_88 + 0x38),
                               local_84,local_80);
          local_34 = &local_78;
          local_78 = (undefined4 ****)(iVar2 + 0xd4);
          local_38 = (undefined4 ***)&DAT_0058e96e;
          local_2c = &local_38;
          local_30 = &local_4c;
          local_54 = (char **)&DAT_00000001;
          local_58 = &local_30;
          local_74 = FUN_00b1c384;
          local_28 = &DAT_01d2ea4c;
          local_50 = puVar6;
          FUN_01aaa328(iVar3,pcVar5,puVar4[4],&local_64,&local_58);
        }
      }
    }
    FUN_01388bf0(param_4,&local_88);
    iVar3 = FUN_01367cb8(*(undefined4 *)(local_88 + 0x34),*(undefined4 *)(local_88 + 0x38),local_84,
                         local_80);
    iVar2 = *(int *)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0x40) = 0;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar3 + 0x44));
    }
    *param_1 = (int)local_88;
    param_1[1] = local_84;
    param_1[2] = local_80;
  }
  else {
    *param_1 = 0;
  }
  return;
}

