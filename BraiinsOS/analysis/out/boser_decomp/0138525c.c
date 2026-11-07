// FUN_0138525c @ 0138525c size=1060 calls_out=8 calls_in=3
// strings: h2::proto::streams::stream/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:328 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::stream/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:328 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0138525c(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 ***pppuVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 ****ppppuVar12;
  uint local_a4;
  uint local_a0;
  undefined4 ***local_9c;
  undefined ***local_98;
  undefined4 *local_94;
  undefined *local_90;
  undefined ***local_8c;
  undefined *local_88;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 ***local_78;
  undefined **local_74;
  undefined4 *local_70;
  undefined4 **local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined **local_58;
  undefined *local_54;
  uint *local_50;
  code *local_4c;
  int local_48;
  code *local_44;
  uint *local_40;
  code *local_3c;
  uint *local_38;
  code *local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  puVar9 = (uint *)(param_1 + 0xe0);
  uVar5 = *(uint *)(param_1 + 0x3c) & ~((int)*(uint *)(param_1 + 0x3c) >> 0x1f);
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  uVar11 = uVar5 - *puVar9;
  if (uVar5 < *puVar9) {
    uVar11 = 0;
  }
  local_a4 = param_3;
  local_a0 = uVar11;
  FUN_013810bc(param_1 + 0x38,param_2);
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) - param_2;
  *puVar9 = *(int *)(param_1 + 0xe0) - param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d754 - 1 < 2 ||
       ((DAT_01d4d754 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d74c), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d74c), iVar3 != 0)))) {
    local_68 = *(int *)(DAT_01d4d74c + 0x20);
    if (local_68 == 0) {
LAB_01385668:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceb11c);
    }
    local_64 = *(undefined4 *)(DAT_01d4d74c + 0x24);
    local_60 = *(undefined4 *)(DAT_01d4d74c + 0x28);
    local_94 = (undefined4 *)(DAT_01d4d74c + 0x1c);
    local_6c = (undefined4 **)*local_94;
    ppppuVar12 = &local_9c;
    local_5c = 0;
    local_88 = *(undefined **)(param_1 + 0x3c);
    local_8c = &local_58;
    local_38 = &local_a0;
    local_40 = &local_a4;
    local_48 = param_1 + 0xd4;
    local_58 = &local_88;
    local_98 = (undefined ***)&DAT_00000001;
    local_9c = &local_78;
    local_74 = &local_90;
    local_78 = &local_6c;
    local_90 = &DAT_0058ea14;
    local_34 = FUN_012fd02c;
    local_3c = FUN_012fd02c;
    local_44 = FUN_00b1c384;
    local_4c = FUN_012fd02c;
    local_54 = &DAT_01380cd0;
    local_70 = (undefined4 *)&DAT_01d2ea4c;
    local_50 = puVar9;
    FUN_01aaaecc(DAT_01d4d74c,ppppuVar12);
    iVar3 = DAT_01d4d74c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01385614;
    local_2c = *(undefined4 *****)(DAT_01d4d74c + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4d74c + 0x18);
    local_30 = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar10 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar10 = &DAT_01cfc5e0;
    }
    pcVar6 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar10[3])(pcVar6,&local_30);
    if (iVar2 == 0) goto LAB_01385614;
    uVar7 = puVar10[4];
    pppuVar8 = &local_30;
  }
  else {
    iVar3 = DAT_01d4d74c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01385614;
    local_80 = *(undefined4 *)(DAT_01d4d74c + 0x14);
    local_7c = *(undefined4 *)(DAT_01d4d74c + 0x18);
    local_84 = (undefined4 **)0x5;
    DataMemoryBarrier(0xb);
    puVar10 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar10 = &DAT_01cfc5e0;
    }
    pcVar6 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar10[3])(pcVar6,&local_84);
    if (iVar2 == 0) goto LAB_01385614;
    local_70 = (undefined4 *)(DAT_01d4d74c + 0x1c);
    local_6c = (undefined4 **)*local_70;
    local_68 = *(int *)(DAT_01d4d74c + 0x20);
    if (local_68 == 0) goto LAB_01385668;
    local_64 = *(undefined4 *)(DAT_01d4d74c + 0x24);
    local_5c = 0;
    local_60 = *(undefined4 *)(DAT_01d4d74c + 0x28);
    local_90 = *(undefined **)(param_1 + 0x3c);
    local_98 = &local_58;
    local_38 = &local_a0;
    local_40 = &local_a4;
    local_48 = param_1 + 0xd4;
    local_58 = &local_90;
    local_2c = &local_9c;
    local_74 = (undefined **)&DAT_00000001;
    local_78 = &local_30;
    local_30 = &local_6c;
    ppppuVar12 = &local_78;
    local_9c = (undefined4 ***)&DAT_0058ea14;
    local_34 = FUN_012fd02c;
    local_3c = FUN_012fd02c;
    local_4c = FUN_012fd02c;
    pppuVar8 = &local_84;
    local_44 = FUN_00b1c384;
    local_54 = &DAT_01380cd0;
    local_28 = &DAT_01d2ea4c;
    uVar7 = puVar10[4];
    local_50 = puVar9;
  }
  FUN_01aaa328(iVar3,pcVar6,uVar7,pppuVar8,ppppuVar12);
LAB_01385614:
  uVar5 = *(uint *)(param_1 + 0x3c) & ~((int)*(uint *)(param_1 + 0x3c) >> 0x1f);
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  uVar4 = uVar5 - *(uint *)(param_1 + 0xe0);
  if (uVar5 < *(uint *)(param_1 + 0xe0)) {
    uVar4 = 0;
  }
  if (uVar11 < uVar4) {
    FUN_01384d74(param_1);
  }
  return;
}

