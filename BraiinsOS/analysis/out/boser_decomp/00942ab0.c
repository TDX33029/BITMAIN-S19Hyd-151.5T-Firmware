// FUN_00942ab0 @ 00942ab0 size=800 calls_out=7 calls_in=1
// strings: tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00942ab0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 **local_78;
  undefined4 ***local_74;
  undefined1 *local_70;
  undefined4 *local_6c;
  undefined *local_68;
  undefined4 ***local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 ***local_54;
  undefined **local_50;
  undefined4 *local_4c;
  undefined4 **local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 ***local_34;
  undefined4 ****local_30;
  undefined4 **local_2c;
  undefined4 ***local_28;
  undefined1 *local_24;
  
  local_78 = (undefined4 **)FUN_00a98abc();
  if ((DAT_01d50f88 < 4) &&
     (((DAT_01d503b8 - 1 < 2 ||
       ((DAT_01d503b8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d503b0), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d503b0), iVar3 != 0)))) {
    iStack_44 = *(int *)(DAT_01d503b0 + 0x20);
    if (iStack_44 == 0) {
LAB_00942db8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0c270);
    }
    local_50 = &local_68;
    uStack_40 = *(undefined4 *)(DAT_01d503b0 + 0x24);
    uStack_3c = *(undefined4 *)(DAT_01d503b0 + 0x28);
    local_6c = (undefined4 *)(DAT_01d503b0 + 0x1c);
    local_48 = (undefined4 **)*local_6c;
    local_54 = &local_48;
    local_74 = &local_54;
    local_38 = 0;
    local_70 = (undefined1 *)0x1;
    local_64 = &local_34;
    local_34 = &local_78;
    local_4c = (undefined4 *)&DAT_01d2ea4c;
    local_68 = &DAT_005bd5c6;
    local_30 = (undefined4 ****)&LAB_00667a00;
    FUN_01aaaecc(DAT_01d503b0,&local_74);
    iVar3 = DAT_01d503b0;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_28 = *(undefined4 ****)(DAT_01d503b0 + 0x14);
      local_24 = *(undefined1 **)(DAT_01d503b0 + 0x18);
      local_2c = (undefined4 **)0x2;
      DataMemoryBarrier(0xb);
      puVar5 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar5 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar5[3])(pcVar1,&local_2c);
      if (iVar4 != 0) {
        FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_2c,&local_74);
      }
    }
  }
  else {
    iVar3 = DAT_01d503b0;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_5c = *(undefined4 *)(DAT_01d503b0 + 0x14);
      local_58 = *(undefined4 *)(DAT_01d503b0 + 0x18);
      local_60 = 2;
      DataMemoryBarrier(0xb);
      puVar5 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar5 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar5[3])(pcVar1,&local_60);
      if (iVar4 != 0) {
        local_4c = (undefined4 *)(DAT_01d503b0 + 0x1c);
        local_48 = (undefined4 **)*local_4c;
        iStack_44 = *(int *)(DAT_01d503b0 + 0x20);
        if (iStack_44 == 0) goto LAB_00942db8;
        local_28 = &local_34;
        uStack_40 = *(undefined4 *)(DAT_01d503b0 + 0x24);
        uStack_3c = *(undefined4 *)(DAT_01d503b0 + 0x28);
        local_2c = &local_48;
        local_54 = &local_2c;
        local_38 = 0;
        local_50 = (undefined **)&DAT_00000001;
        local_30 = &local_74;
        local_74 = &local_78;
        local_24 = &DAT_01d2ea4c;
        local_34 = (undefined4 ***)&DAT_005bd5c6;
        local_70 = &LAB_00667a00;
        FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_60,&local_54);
      }
    }
  }
  (*(code *)**local_78)();
  return;
}

