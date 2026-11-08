// FUN_012e7b1c @ 012e7b1c size=892 calls_out=10 calls_in=0
// strings: continuous_pcapopen/utils-rs/continuous-pcap/src/lib.rsevent open/utils-rs/continuous-pcap/src/lib.rs:159event open/utils-rs/continuous-pcap/src/lib.rs:142event open/utils-rs/continuous-pcap/src/lib.rs:292event open/utils-rs/continuous-pcap/src/lib.rs:289event open/utils-rs/continuous-pcap/src/lib.rs:286event open/utils-rs/continuous-pcap/src/lib.rs:278event open/utils-rs/continuous-pcap/src/lib.rs:272 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | continuous_pcapopen/utils-rs/continuous-pcap/src/lib.rsevent open/utils-rs/continuous-pcap/src/lib.rs:159event open/utils-rs/continuous-pcap/src/lib.rs:142event open/utils-rs/continuous-pcap/src/lib.rs:292event open/utils-rs/continuous-pcap/src/lib.rs:289event open/utils-rs/continuous-pcap/src/lib.rs:286event open/utils-rs/continuous-pcap/src/lib.rs:278event open/utils-rs/continuous-pcap/src/lib.rs:272 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_012e7b1c(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 ***local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 **local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined4 ***local_3c;
  undefined4 **local_38;
  undefined1 *local_34;
  undefined4 **local_30;
  undefined **local_2c;
  undefined1 *local_28;
  
  uVar5 = param_1[4];
  FUN_01a3c2e0(uVar5);
  local_74 = FUN_012d4210(uVar5,*param_1,param_1[1],param_1[5],param_1[6],param_1[2],param_1[3]);
  local_70 = &local_74;
  FUN_01a3b7c0(uVar5);
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d4cef4 - 1 < 2 ||
       ((DAT_01d4cef4 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4ceec), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4ceec), iVar3 != 0)))) {
    local_50 = *(int *)(DAT_01d4ceec + 0x20);
    if (local_50 == 0) {
LAB_012e7e80:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce3a60);
    }
    local_4c = *(undefined4 *)(DAT_01d4ceec + 0x24);
    local_48 = *(undefined4 *)(DAT_01d4ceec + 0x28);
    local_5c = &local_40;
    local_64 = (undefined4 *)(DAT_01d4ceec + 0x1c);
    local_54 = (undefined4 **)*local_64;
    local_60 = &local_54;
    local_68 = 1;
    local_3c = &local_38;
    local_6c = &local_60;
    local_38 = &local_70;
    local_44 = 0;
    local_58 = (undefined4 *)&DAT_01d2ea4c;
    local_40 = &DAT_005a1150;
    local_34 = &LAB_0125f734;
    FUN_01aaaecc(DAT_01d4ceec,&local_6c);
    iVar3 = DAT_01d4ceec;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_2c = *(undefined ***)(DAT_01d4ceec + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4ceec + 0x18);
      local_30 = (undefined4 **)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar6[3])(pcVar1,&local_30);
      if (iVar4 != 0) {
        FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_30,&local_6c);
      }
    }
  }
  else {
    iVar3 = DAT_01d4ceec;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_68 = *(undefined4 *)(DAT_01d4ceec + 0x14);
      local_64 = *(undefined4 **)(DAT_01d4ceec + 0x18);
      local_6c = (undefined4 ***)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar6[3])(pcVar1,&local_6c);
      if (iVar4 != 0) {
        local_58 = (undefined4 *)(DAT_01d4ceec + 0x1c);
        local_54 = (undefined4 **)*local_58;
        local_50 = *(int *)(DAT_01d4ceec + 0x20);
        if (local_50 == 0) goto LAB_012e7e80;
        local_2c = &local_40;
        local_4c = *(undefined4 *)(DAT_01d4ceec + 0x24);
        local_48 = *(undefined4 *)(DAT_01d4ceec + 0x28);
        local_30 = &local_54;
        local_60 = &local_30;
        local_44 = 0;
        local_5c = (undefined **)&DAT_00000001;
        local_3c = &local_38;
        local_38 = &local_70;
        local_28 = &DAT_01d2ea4c;
        local_40 = &DAT_005a1150;
        local_34 = &LAB_0125f734;
        FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_6c,&local_60);
      }
    }
  }
  uVar5 = local_74;
  FUN_005faf6c(param_1 + 4);
  return uVar5;
}

