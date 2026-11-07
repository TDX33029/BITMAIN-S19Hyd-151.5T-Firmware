// FUN_0139366c @ 0139366c size=920 calls_out=6 calls_in=4
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

/* WARNING: Removing unreachable block (ram,0x013939ec) */

void FUN_0139366c(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 ****ppppuVar8;
  int local_84;
  undefined4 ***local_80;
  int **local_7c;
  undefined4 *local_78;
  undefined *local_74;
  int **local_70;
  undefined4 **local_6c;
  char *local_68;
  undefined4 local_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 **local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  int *local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  local_84 = param_2;
  if (((DAT_01d50f88 == 0) && (cVar1 = FUN_01aaafa8(0x1d4d950), cVar1 != '\0')) &&
     (iVar2 = FUN_01aaa278(&DAT_01cecdd4), iVar2 != 0)) {
    local_50 = 1;
    local_4c = 0x1d4d950;
    local_48 = &DAT_01cec72c;
    local_5c = &local_74;
    local_78 = &DAT_01cecdf0;
    local_54 = (undefined4 **)&DAT_01d2f7e0;
    local_7c = (int **)&DAT_00000001;
    local_70 = &local_40;
    local_60 = &local_54;
    ppppuVar8 = &local_80;
    local_38 = param_1 + 0x7c;
    local_80 = &local_60;
    local_40 = &local_84;
    local_44 = 0;
    local_58 = (undefined4 *)&DAT_01d2ea4c;
    local_74 = &DAT_00586354;
    local_34 = FUN_012fd02c;
    local_3c = FUN_012fd02c;
    FUN_01aaaecc(&DAT_01cecdd4,ppppuVar8);
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01393968;
    local_2c = (undefined4 ****)0x45cead;
    local_28 = (undefined1 *)0x18;
    local_30 = (undefined4 **)&DAT_00000005;
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
    if (iVar2 == 0) goto LAB_01393968;
    uVar4 = puVar6[4];
    pppuVar5 = &local_30;
  }
  else {
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01393968;
    local_68 = 
    "h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs"
    ;
    local_64 = 0x18;
    local_6c = (undefined4 **)0x5;
    DataMemoryBarrier(0xb);
    puVar6 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar6 = &DAT_01cfc5e0;
    }
    pcVar7 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar6[3])(pcVar7,&local_6c);
    if (iVar2 == 0) goto LAB_01393968;
    local_58 = &DAT_01cecdf0;
    local_54 = (undefined4 **)&DAT_01d2f7e0;
    local_50 = 1;
    local_30 = &local_54;
    local_4c = 0x1d4d950;
    local_48 = &DAT_01cec72c;
    local_2c = &local_80;
    local_60 = &local_30;
    local_44 = 0;
    pppuVar5 = &local_6c;
    local_5c = (undefined **)&DAT_00000001;
    local_28 = &DAT_01d2ea4c;
    local_7c = &local_40;
    local_34 = FUN_012fd02c;
    local_80 = (undefined4 ***)&DAT_00586354;
    local_38 = param_1 + 0x7c;
    local_40 = &local_84;
    local_3c = FUN_012fd02c;
    ppppuVar8 = &local_60;
    uVar4 = puVar6[4];
  }
  FUN_01aaa328(&DAT_01cecdd4,pcVar7,uVar4,pppuVar5,ppppuVar8);
LAB_01393968:
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - param_2;
  if (!SCARRY4(iVar2,param_2)) {
    *(int *)(param_1 + 0x24) = iVar2 + param_2;
    iVar2 = iVar2 + param_2;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if ((iVar3 < iVar2) && (iVar3 / 2 <= iVar2 - iVar3)) {
    iVar2 = *param_3;
    *param_3 = 0;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(param_3[1]);
    }
  }
  return;
}

