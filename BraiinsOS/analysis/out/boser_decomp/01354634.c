// FUN_01354634 @ 01354634 size=920 calls_out=6 calls_in=7
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_01354634(int param_1,int param_2,int *param_3)

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
  int *local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  local_84 = param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d16c - 1 < 2 ||
       ((DAT_01d4d16c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d164), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d164), iVar3 != 0)))) {
    local_50 = *(int *)(DAT_01d4d164 + 0x20);
    if (local_50 == 0) {
LAB_013549b4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce7864);
    }
    local_4c = *(undefined4 *)(DAT_01d4d164 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d4d164 + 0x28);
    local_5c = &local_74;
    local_78 = (undefined4 *)(DAT_01d4d164 + 0x1c);
    local_54 = (undefined4 **)*local_78;
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
    FUN_01aaaecc(DAT_01d4d164,ppppuVar8);
    iVar3 = DAT_01d4d164;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01354930;
    local_2c = *(undefined4 *****)(DAT_01d4d164 + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4d164 + 0x18);
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
    if (iVar2 == 0) goto LAB_01354930;
    uVar4 = puVar6[4];
    pppuVar5 = &local_30;
  }
  else {
    iVar3 = DAT_01d4d164;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01354930;
    local_68 = *(undefined4 *)(DAT_01d4d164 + 0x14);
    local_64 = *(undefined4 *)(DAT_01d4d164 + 0x18);
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
    if (iVar2 == 0) goto LAB_01354930;
    local_58 = (undefined4 *)(DAT_01d4d164 + 0x1c);
    local_54 = (undefined4 **)*local_58;
    local_50 = *(int *)(DAT_01d4d164 + 0x20);
    if (local_50 == 0) goto LAB_013549b4;
    local_30 = &local_54;
    local_4c = *(undefined4 *)(DAT_01d4d164 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d4d164 + 0x28);
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
  FUN_01aaa328(iVar3,pcVar7,uVar4,pppuVar5,ppppuVar8);
LAB_01354930:
  iVar3 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - param_2;
  if (!SCARRY4(iVar3,param_2)) {
    *(int *)(param_1 + 0x24) = iVar3 + param_2;
    iVar3 = iVar3 + param_2;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar2 < iVar3) && (iVar2 / 2 <= iVar3 - iVar2)) {
    iVar3 = *param_3;
    *param_3 = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(param_3[1]);
    }
  }
  return;
}

