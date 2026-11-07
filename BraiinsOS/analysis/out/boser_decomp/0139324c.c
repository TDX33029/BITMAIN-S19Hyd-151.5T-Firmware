// FUN_0139324c @ 0139324c size=932 calls_out=7 calls_in=2
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

/* WARNING: Removing unreachable block (ram,0x013935d8) */

void FUN_0139324c(undefined1 *param_1,int param_2,undefined *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  uint *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined4 ****ppppuVar10;
  undefined *local_88;
  undefined4 ****local_84;
  undefined ***local_80;
  undefined4 *local_7c;
  undefined *local_78;
  undefined ***local_74;
  undefined *local_70;
  undefined4 **local_6c;
  char *local_68;
  undefined4 local_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 **local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined4 local_44;
  undefined **local_40;
  undefined1 *local_3c;
  undefined **local_38;
  undefined1 *local_34;
  undefined4 ***local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  puVar6 = (uint *)(param_2 + 0x20);
  puVar9 = (undefined *)(*puVar6 & ~((int)*puVar6 >> 0x1f));
  local_88 = param_3;
  if (puVar9 < param_3) {
    if (((DAT_01d50f88 < 2) && (cVar2 = FUN_01aaafa8(0x1d4d944), cVar2 != '\0')) &&
       (iVar3 = FUN_01aaa278(&DAT_01cecd44), iVar3 != 0)) {
      uStack_50 = 1;
      local_5c = &local_78;
      uStack_4c = 0x1d4d944;
      puStack_48 = &DAT_01cec72c;
      local_7c = &DAT_01cecd60;
      local_54 = (undefined4 **)&DAT_01d2f7e0;
      local_60 = &local_54;
      local_84 = &local_60;
      local_44 = 0;
      ppppuVar10 = &local_84;
      local_80 = (undefined ***)&DAT_00000001;
      local_74 = &local_40;
      local_38 = &local_88;
      local_40 = &local_70;
      local_58 = (undefined4 *)&DAT_01d2ea4c;
      local_78 = &DAT_005ad71b;
      local_34 = &LAB_01a86300;
      local_3c = &LAB_01a86300;
      local_70 = puVar9;
      FUN_01aaaecc(&DAT_01cecd44,ppppuVar10);
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_2c = (undefined4 ****)0x45cead;
        local_28 = (undefined1 *)0x18;
        local_30 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        pcVar8 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar7[3])(pcVar8,&local_30);
        if (iVar3 != 0) {
          uVar4 = puVar7[4];
          pppuVar5 = &local_30;
LAB_01393578:
          FUN_01aaa328(&DAT_01cecd44,pcVar8,uVar4,pppuVar5,ppppuVar10);
        }
      }
    }
    else if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_68 = 
      "h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs"
      ;
      local_64 = 0x18;
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
      iVar3 = (*(code *)puVar7[3])(pcVar8,&local_6c);
      if (iVar3 != 0) {
        local_58 = &DAT_01cecd60;
        local_54 = (undefined4 **)&DAT_01d2f7e0;
        uStack_50 = 1;
        uStack_4c = 0x1d4d944;
        puStack_48 = &DAT_01cec72c;
        local_44 = 0;
        local_2c = &local_84;
        local_30 = &local_54;
        local_5c = (undefined **)&DAT_00000001;
        local_60 = &local_30;
        local_78 = (undefined *)(*puVar6 & ~((int)*puVar6 >> 0x1f));
        local_80 = &local_40;
        local_38 = &local_88;
        local_40 = &local_78;
        ppppuVar10 = &local_60;
        local_28 = &DAT_01d2ea4c;
        pppuVar5 = &local_6c;
        local_84 = (undefined4 ****)&DAT_005ad71b;
        local_34 = &LAB_01a86300;
        local_3c = &LAB_01a86300;
        uVar4 = puVar7[4];
        goto LAB_01393578;
      }
    }
  }
  else {
    iVar3 = FUN_013b79b8(puVar6,param_3);
    if (iVar3 == 0) {
      *(undefined **)(param_2 + 0x7c) = param_3 + *(int *)(param_2 + 0x7c);
      uVar1 = 3;
      goto LAB_013935b0;
    }
  }
  uVar1 = 1;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_01cf1710;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_013935b0:
  *param_1 = uVar1;
  return;
}

