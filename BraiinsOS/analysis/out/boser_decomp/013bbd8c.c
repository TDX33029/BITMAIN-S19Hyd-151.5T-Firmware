// FUN_013bbd8c @ 013bbd8c size=780 calls_out=6 calls_in=2
// strings: h2::proto::streams::stream/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:328 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::stream/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:328 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_013bbd8c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  undefined4 ***local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined4 **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 ***local_4c;
  undefined **local_48;
  undefined4 *local_44;
  undefined4 **local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined4 ****local_28;
  undefined1 *local_24;
  
  *(undefined1 *)(param_1 + 0xe3) = 1;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4df34 - 1 < 2 ||
       ((DAT_01d4df34 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4df2c), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4df2c), iVar3 != 0)))) {
    iStack_3c = *(int *)(DAT_01d4df2c + 0x20);
    if (iStack_3c == 0) {
LAB_013bc080:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf1514);
    }
    local_48 = &local_60;
    uStack_38 = *(undefined4 *)(DAT_01d4df2c + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d4df2c + 0x28);
    local_64 = (undefined4 *)(DAT_01d4df2c + 0x1c);
    local_40 = (undefined4 **)*local_64;
    local_4c = &local_40;
    local_6c = &local_4c;
    local_30 = 0;
    ppppuVar8 = &local_6c;
    local_68 = 1;
    local_5c = 0x21;
    local_44 = (undefined4 *)&DAT_01d2ea4c;
    local_60 = &DAT_00569c08;
    FUN_01aaaecc(DAT_01d4df2c,ppppuVar8);
    iVar3 = DAT_01d4df2c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013bc034;
    local_28 = *(undefined4 *****)(DAT_01d4df2c + 0x14);
    local_24 = *(undefined1 **)(DAT_01d4df2c + 0x18);
    local_2c = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_2c);
    if (iVar2 == 0) goto LAB_013bc034;
    uVar5 = puVar7[4];
    pppuVar6 = &local_2c;
  }
  else {
    iVar3 = DAT_01d4df2c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013bc034;
    local_54 = *(undefined4 *)(DAT_01d4df2c + 0x14);
    local_50 = *(undefined4 *)(DAT_01d4df2c + 0x18);
    local_58 = (undefined4 **)0x5;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_58);
    if (iVar2 == 0) goto LAB_013bc034;
    local_44 = (undefined4 *)(DAT_01d4df2c + 0x1c);
    local_40 = (undefined4 **)*local_44;
    iStack_3c = *(int *)(DAT_01d4df2c + 0x20);
    if (iStack_3c == 0) goto LAB_013bc080;
    local_28 = &local_6c;
    uStack_38 = *(undefined4 *)(DAT_01d4df2c + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d4df2c + 0x28);
    local_2c = &local_40;
    local_4c = &local_2c;
    local_30 = 0;
    local_48 = (undefined **)&DAT_00000001;
    local_68 = 0x21;
    local_24 = &DAT_01d2ea4c;
    ppppuVar8 = &local_4c;
    local_6c = (undefined4 ***)&DAT_00569c08;
    pppuVar6 = &local_58;
    uVar5 = puVar7[4];
  }
  FUN_01aaa328(iVar3,pcVar4,uVar5,pppuVar6,ppppuVar8);
LAB_013bc034:
  iVar3 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}

