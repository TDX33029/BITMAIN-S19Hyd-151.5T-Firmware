// FUN_01060b40 @ 01060b40 size=1024 calls_out=4 calls_in=0
// strings: DataQ; | length | collectedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs:317hickory_proto::rr::rdata::opt/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs | collectedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs:317hickory_proto::rr::rdata::opt/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs

undefined4 FUN_01060b40(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *local_4c;
  char local_48;
  char local_47;
  undefined4 local_44;
  int local_40;
  undefined4 **local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar1 = 2;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01060c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,"ReadCodeArmenianTifinaghStratum2dps mode",8);
    return uVar7;
  }
  if (uVar1 == 1) {
    uVar7 = *param_2;
    iVar8 = param_2[1];
    pcVar6 = *(code **)(iVar8 + 0xc);
    iVar2 = (*pcVar6)(uVar7,&DAT_00566eac,4);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar6)(uVar7,&DAT_00414a79,3);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (*pcVar6)(uVar7,&DAT_00568e58,4);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (*pcVar6)(uVar7,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_0106054c(param_1 + 1,param_2);
      if (iVar2 != 0) {
        return 1;
      }
      uVar1 = param_2[2];
    }
    else {
      iVar2 = (*pcVar6)(uVar7,&DAT_00414a7e,3);
      if (iVar2 != 0) {
        return 1;
      }
      local_3c = &local_4c;
      uVar1 = param_2[2];
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      local_4c = (undefined4 *)CONCAT31(local_4c._1_3_,1);
      local_44 = uVar7;
      local_40 = iVar8;
      local_2c = uVar1;
      iVar2 = FUN_00fb1f64(local_34,&DAT_00568e58,4);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_0106054c(param_1 + 1,&local_34);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar2 != 0) {
        return 1;
      }
    }
    if ((uVar1 & 0x800000) != 0) {
LAB_01060e1c:
      uVar7 = *param_2;
      uVar5 = 1;
      pcVar6 = *(code **)(param_2[1] + 0xc);
      pcVar4 = "}";
      goto LAB_01060f2c;
    }
  }
  else {
    local_48 = (**(code **)(param_2[1] + 0xc))(*param_2,"DataQ,",4);
    local_47 = '\0';
    local_4c = param_2;
    uVar7 = FUN_00fb2258(&local_4c,&DAT_00568e58,4,param_1 + 3,FUN_0106054c);
    FUN_00fb2258(uVar7,"length",6,param_1 + 4,FUN_007883b8);
    param_2 = local_4c;
    if (local_48 != '\0') {
      return 1;
    }
    if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
      puVar3 = &DAT_0041950f;
      if (local_47 == '\0') {
        puVar3 = &DAT_00414a79;
      }
      uVar7 = 3;
      if (local_47 != '\0') {
        uVar7 = 2;
      }
      iVar2 = (**(code **)(local_4c[1] + 0xc))(*local_4c,puVar3,uVar7);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(param_2[1] + 0xc))
                        (*param_2,
                         "collectedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs:317hickory_proto::rr::rdata::opt/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs"
                         ,9);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_01090d94(param_1[1],param_1[2],param_2);
    }
    else {
      if ((local_47 == '\0') &&
         (iVar2 = (**(code **)(local_4c[1] + 0xc))(*local_4c,&DAT_00414a7e,3), iVar2 != 0)) {
        return 1;
      }
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_3c = (undefined4 **)&local_35;
      local_44 = *param_2;
      local_40 = param_2[1];
      local_34 = &local_44;
      local_30 = &DAT_01880dc4;
      local_35 = 1;
      iVar2 = FUN_00fb1f64(local_34,
                           "collectedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs:317hickory_proto::rr::rdata::opt/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-proto-0.25.2/src/rr/rdata/opt.rs"
                           ,9);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_01090d94(param_1[1],param_1[2],&local_34);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) goto LAB_01060e1c;
  }
  uVar7 = *param_2;
  uVar5 = 2;
  pcVar6 = *(code **)(param_2[1] + 0xc);
  pcVar4 = " }";
LAB_01060f2c:
  uVar7 = (*pcVar6)(uVar7,pcVar4,uVar5);
  return uVar7;
}

