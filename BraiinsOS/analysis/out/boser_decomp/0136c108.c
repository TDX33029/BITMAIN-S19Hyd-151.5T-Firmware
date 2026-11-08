// FUN_0136c108 @ 0136c108 size=996 calls_out=8 calls_in=4
// strings: h2::proto::streams::prioritizestream.id/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:669 | InvalidParamSegmentInvalidParamInvalidCatchAll | schedule_sendevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:897event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:893 | InvalidParamSegmentInvalidParamInvalidCatchAll | schedule_sendevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:897event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:893 | FieldSet corrupted (this is a bug)

void FUN_0136c108(undefined4 param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 ***pppuVar4;
  undefined4 extraout_r3_00;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 ***pppuVar11;
  undefined4 **local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 **local_7c;
  undefined4 **local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 ***local_68;
  undefined1 *local_64;
  undefined4 *local_60;
  undefined4 ***local_5c;
  undefined *local_58;
  undefined4 local_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  iVar5 = *param_2;
  iVar8 = param_2[1];
  iVar6 = param_2[2];
  iVar2 = FUN_01367c40(*(undefined4 *)(iVar5 + 0x34),*(undefined4 *)(iVar5 + 0x38),iVar8,iVar6);
  if (*(char *)(iVar2 + 0xec) != '\0') {
    return;
  }
  if (*(char *)(iVar2 + 0xed) == '\x01') {
    return;
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d364 - 1 < 2 ||
       ((DAT_01d4d364 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d35c), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4d35c), iVar2 != 0)))) {
    puVar10 = (undefined4 *)(DAT_01d4d35c + 0x1c);
    local_40 = *puVar10;
    uStack_3c = *(uint *)(DAT_01d4d35c + 0x20);
    uStack_38 = extraout_r2_00;
    uStack_34 = extraout_r3_00;
    if (uStack_3c != 0) {
      uStack_38 = *(undefined4 *)(DAT_01d4d35c + 0x24);
      uStack_34 = *(undefined4 *)(DAT_01d4d35c + 0x28);
      local_44 = 0;
      local_80 = 0x1b;
      local_84 = (undefined4 **)0x460423;
      local_54 = local_40;
      uStack_50 = uStack_3c;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
    }
    if (uStack_3c < 2) {
LAB_0136c348:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8c34);
    }
    local_30 = 1;
    iVar2 = FUN_01367c40(*(undefined4 *)(iVar5 + 0x34),*(undefined4 *)(iVar5 + 0x38),iVar8,iVar6);
    local_7c = (undefined4 **)(iVar2 + 0xd4);
    pppuVar11 = &local_90;
    local_5c = &local_7c;
    local_60 = &local_40;
    local_68 = &local_84;
    local_6c = &local_54;
    local_58 = &DAT_01d2d754;
    local_8c = 2;
    local_90 = &local_6c;
    local_64 = &DAT_01d2ea4c;
    local_88 = puVar10;
    FUN_01aaaecc(DAT_01d4d35c,pppuVar11);
    iVar2 = DAT_01d4d35c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0136c4b8;
    local_28 = *(undefined4 *)(DAT_01d4d35c + 0x14);
    local_24 = *(undefined4 **)(DAT_01d4d35c + 0x18);
    local_2c = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar10 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar10 = &DAT_01cfc5e0;
    }
    pcVar9 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar5 = (*(code *)puVar10[3])(pcVar9,&local_2c);
    if (iVar5 == 0) goto LAB_0136c4b8;
    uVar3 = puVar10[4];
    pppuVar4 = &local_2c;
  }
  else {
    iVar2 = DAT_01d4d35c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0136c4b8;
    local_74 = *(undefined4 *)(DAT_01d4d35c + 0x14);
    local_70 = *(undefined4 *)(DAT_01d4d35c + 0x18);
    local_78 = (undefined4 **)0x5;
    DataMemoryBarrier(0xb);
    puVar10 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar10 = &DAT_01cfc5e0;
    }
    pcVar9 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar5 = (*(code *)puVar10[3])(pcVar9,&local_78);
    if (iVar5 == 0) goto LAB_0136c4b8;
    puVar7 = (undefined4 *)(DAT_01d4d35c + 0x1c);
    local_40 = *puVar7;
    uStack_3c = *(uint *)(DAT_01d4d35c + 0x20);
    uStack_38 = extraout_r2;
    uStack_34 = extraout_r3;
    if (uStack_3c != 0) {
      uStack_38 = *(undefined4 *)(DAT_01d4d35c + 0x24);
      uStack_34 = *(undefined4 *)(DAT_01d4d35c + 0x28);
      local_44 = 0;
      local_8c = 0x1b;
      local_90 = (undefined4 **)0x460423;
      local_54 = local_40;
      uStack_50 = uStack_3c;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
    }
    if (uStack_3c < 2) goto LAB_0136c348;
    local_30 = 1;
    iVar5 = FUN_01367c40(*(undefined4 *)(*param_2 + 0x34),*(undefined4 *)(*param_2 + 0x38),
                         param_2[1],param_2[2]);
    local_84 = (undefined4 **)(iVar5 + 0xd4);
    pppuVar4 = &local_78;
    local_5c = &local_84;
    local_60 = &local_40;
    local_68 = &local_90;
    local_6c = &local_54;
    local_28 = 2;
    local_2c = &local_6c;
    pppuVar11 = &local_2c;
    local_58 = &DAT_01d2d754;
    local_64 = &DAT_01d2ea4c;
    uVar3 = puVar10[4];
    local_24 = puVar7;
  }
  FUN_01aaa328(iVar2,pcVar9,uVar3,pppuVar4,pppuVar11);
LAB_0136c4b8:
  FUN_01368588(param_1,param_2);
  iVar2 = *param_3;
  *param_3 = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 4))(param_3[1]);
  }
  return;
}

