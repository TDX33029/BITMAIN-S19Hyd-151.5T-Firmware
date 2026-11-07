// FUN_01a734ac @ 01a734ac size=736 calls_out=6 calls_in=1
// strings: tonic::status/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | error parsing grpc-status | InvalidParamSegmentInvalidParamInvalidCatchAll | error parsing grpc-status | tonic::status/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs

void FUN_01a734ac(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  undefined4 *****pppppuVar8;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 ***local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 ****local_4c;
  char **local_48;
  undefined4 *local_44;
  undefined4 ***local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 ***local_2c;
  undefined4 *****local_28;
  undefined1 *local_24;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50990 - 1 < 2 ||
       ((DAT_01d50990 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50988), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d50988), iVar3 != 0)))) {
    iStack_3c = *(int *)(DAT_01d50988 + 0x20);
    if (iStack_3c == 0) {
LAB_01a73774:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d448);
    }
    local_48 = &local_60;
    uStack_38 = *(undefined4 *)(DAT_01d50988 + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d50988 + 0x28);
    local_64 = (undefined4 *)(DAT_01d50988 + 0x1c);
    local_40 = (undefined4 ***)*local_64;
    local_4c = &local_40;
    local_6c = &local_4c;
    local_30 = 0;
    pppppuVar8 = &local_6c;
    local_68 = 1;
    local_5c = 0x33;
    local_44 = (undefined4 *)&DAT_01d2ea4c;
    local_60 = "error parsing grpc-status";
    FUN_01aaaecc(DAT_01d50988,pppppuVar8);
    iVar3 = DAT_01d50988;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 5) {
      return;
    }
    local_28 = *(undefined4 ******)(DAT_01d50988 + 0x14);
    local_24 = *(undefined1 **)(DAT_01d50988 + 0x18);
    local_2c = (undefined4 ***)&DAT_00000005;
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
    if (iVar2 == 0) {
      return;
    }
    uVar5 = puVar7[4];
    ppppuVar6 = &local_2c;
  }
  else {
    iVar3 = DAT_01d50988;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 5) {
      return;
    }
    local_54 = *(undefined4 *)(DAT_01d50988 + 0x14);
    local_50 = *(undefined4 *)(DAT_01d50988 + 0x18);
    local_58 = (undefined4 ***)0x5;
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
    if (iVar2 == 0) {
      return;
    }
    local_44 = (undefined4 *)(DAT_01d50988 + 0x1c);
    local_40 = (undefined4 ***)*local_44;
    iStack_3c = *(int *)(DAT_01d50988 + 0x20);
    if (iStack_3c == 0) goto LAB_01a73774;
    local_28 = &local_6c;
    uStack_38 = *(undefined4 *)(DAT_01d50988 + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d50988 + 0x28);
    local_2c = &local_40;
    local_4c = &local_2c;
    local_48 = (char **)&DAT_00000001;
    local_24 = &DAT_01d2ea4c;
    local_68 = 0x33;
    pppppuVar8 = &local_4c;
    local_30 = 0;
    ppppuVar6 = &local_58;
    local_6c = (undefined4 ****)0x52ed7e;
    uVar5 = puVar7[4];
  }
  FUN_01aaa328(iVar3,pcVar4,uVar5,ppppuVar6,pppppuVar8);
  return;
}

