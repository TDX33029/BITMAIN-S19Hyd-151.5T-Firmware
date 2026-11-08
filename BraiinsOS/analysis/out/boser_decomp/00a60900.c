// FUN_00a60900 @ 00a60900 size=1880 calls_out=15 calls_in=2
// strings: tarpc::client::in_flight_requests/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client/in_flight_requests.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client/in_flight_requests.rs:90event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client/in_flight_requests.rs:83event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:73RPC | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | tracing::span::active | ReceiveResponse

void FUN_00a60900(int param_1,undefined4 param_2,undefined4 ***param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ***local_408;
  undefined4 local_404;
  undefined4 ****local_400;
  undefined4 ****local_3fc;
  undefined4 *local_3f8;
  undefined4 ****local_3a8;
  undefined4 ****local_3a4;
  undefined1 *local_3a0;
  int local_39c;
  int local_398;
  int local_390;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 ****local_34c;
  undefined4 ****local_348;
  undefined4 *local_344;
  undefined4 ***local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 ****local_32c;
  undefined4 ****local_328;
  undefined4 *local_324;
  undefined4 ****local_320;
  undefined2 *local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  undefined4 *local_28;
  
  local_408 = param_3;
  local_404 = param_4;
  FUN_00aba870(&local_400,param_1 + 0x80);
  if (local_3f8 == (undefined4 *)&DAT_00000003) {
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d503a0 - 1 < 2 ||
         ((DAT_01d503a0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50398), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d50398), iVar3 != 0)))) {
      local_31c = *(undefined2 **)(DAT_01d50398 + 0x20);
      if (local_31c == (undefined2 *)0x0) {
LAB_00a61024:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0f124);
      }
      local_3fc = &local_34c;
      local_318 = *(undefined4 *)(DAT_01d50398 + 0x24);
      local_314 = *(undefined4 *)(DAT_01d50398 + 0x28);
      local_28 = (undefined4 *)(DAT_01d50398 + 0x1c);
      local_320 = (undefined4 ****)*local_28;
      local_400 = &local_320;
      local_310 = 0;
      local_2c = (undefined4 ****)&DAT_00000001;
      local_348 = &local_32c;
      local_32c = &local_408;
      local_3f8 = (undefined4 *)&DAT_01d2ea4c;
      local_34c = (undefined4 ****)&DAT_0057f921;
      local_328 = (undefined4 ****)FUN_012fd074;
      local_30 = &local_400;
      FUN_01aaaecc(DAT_01d50398,&local_30);
      iVar3 = DAT_01d50398;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_3a4 = *(undefined4 *****)(DAT_01d50398 + 0x14);
        local_3a0 = *(undefined1 **)(DAT_01d50398 + 0x18);
        local_3a8 = (undefined4 ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_3a8);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_3a8,&local_30);
        }
      }
    }
    else {
      iVar3 = DAT_01d50398;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_38 = *(undefined4 *)(DAT_01d50398 + 0x14);
        local_34 = *(undefined4 *)(DAT_01d50398 + 0x18);
        local_3c = 4;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_3c);
        if (iVar4 != 0) {
          local_3f8 = (undefined4 *)(DAT_01d50398 + 0x1c);
          local_320 = (undefined4 ****)*local_3f8;
          local_31c = *(undefined2 **)(DAT_01d50398 + 0x20);
          if (local_31c == (undefined2 *)0x0) goto LAB_00a61024;
          local_3a4 = &local_32c;
          local_318 = *(undefined4 *)(DAT_01d50398 + 0x24);
          local_314 = *(undefined4 *)(DAT_01d50398 + 0x28);
          local_3a8 = &local_320;
          local_400 = &local_3a8;
          local_3fc = (undefined4 ****)&DAT_00000001;
          local_328 = &local_30;
          local_310 = 0;
          local_30 = &local_408;
          local_3a0 = &DAT_01d2ea4c;
          local_32c = (undefined4 ****)&DAT_0057f921;
          local_2c = (undefined4 ****)FUN_012fd074;
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_3c,&local_400);
        }
      }
    }
    FUN_00a57840(param_5);
  }
  else {
    FUN_01bed4e2(&local_3a8,&local_400,0x58);
    if (local_3a0 != (undefined1 *)0x2) {
      if (((uint)local_3a0 & 1) != 0) {
        local_39c = local_39c + (*(int *)(local_398 + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(local_398 + 0x30))(local_39c,&local_3a8);
    }
    if ((DAT_01d51ae9 == '\0') && (local_390 != 0)) {
      local_2c = *(undefined4 *****)(local_390 + 0x10);
      local_30 = *(undefined4 *****)(local_390 + 0xc);
      local_320 = &local_30;
      local_31c = &DAT_0132b6a0;
      FUN_006404a8(&local_3a8,"tracing::span::active",0x15,&DAT_00594cdd,&local_320);
    }
    if (((DAT_01d50f88 < 3) &&
        ((DAT_01d503ac - 1 < 2 ||
         ((DAT_01d503ac != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d503a4), cVar2 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d503a4), iVar3 != 0)) {
      if (*(undefined2 **)(DAT_01d503a4 + 0x20) == (undefined2 *)0x0) {
LAB_00a61040:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0f104);
      }
      local_328 = &local_340;
      local_318 = *(undefined4 *)(DAT_01d503a4 + 0x24);
      local_314 = *(undefined4 *)(DAT_01d503a4 + 0x28);
      local_344 = (undefined4 *)(DAT_01d503a4 + 0x1c);
      local_320 = (undefined4 ****)*local_344;
      local_32c = &local_320;
      local_34c = &local_32c;
      local_310 = 0;
      local_348 = (undefined4 ****)&DAT_00000001;
      local_324 = (undefined4 *)&DAT_01d2ea4c;
      local_33c = 0x1f;
      local_340 = (undefined4 ***)0x3e7132;
      local_31c = *(undefined2 **)(DAT_01d503a4 + 0x20);
      FUN_01aaaecc(DAT_01d503a4,&local_34c);
      iVar3 = DAT_01d503a4;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_2c = *(undefined4 *****)(DAT_01d503a4 + 0x14);
        local_28 = *(undefined4 **)(DAT_01d503a4 + 0x18);
        local_30 = (undefined4 ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_30);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_30,&local_34c);
        }
      }
    }
    else {
      iVar3 = DAT_01d503a4;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_334 = *(undefined4 *)(DAT_01d503a4 + 0x14);
        local_330 = *(undefined4 *)(DAT_01d503a4 + 0x18);
        local_338 = 3;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_338);
        if (iVar4 != 0) {
          local_324 = (undefined4 *)(DAT_01d503a4 + 0x1c);
          if (*(undefined2 **)(DAT_01d503a4 + 0x20) == (undefined2 *)0x0) goto LAB_00a61040;
          local_2c = &local_34c;
          local_318 = *(undefined4 *)(DAT_01d503a4 + 0x24);
          local_314 = *(undefined4 *)(DAT_01d503a4 + 0x28);
          local_30 = &local_320;
          local_32c = &local_30;
          local_310 = 0;
          local_328 = (undefined4 ****)&DAT_00000001;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_348 = (undefined4 ****)&DAT_0000001f;
          local_34c = (undefined4 ****)0x3e7132;
          local_320 = (undefined4 ****)*local_324;
          local_31c = *(undefined2 **)(DAT_01d503a4 + 0x20);
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_338,&local_32c);
        }
      }
    }
    FUN_00ab9e90(param_1 + 0x80);
    FUN_019d1458(&local_320,param_1,local_354,&DAT_01c0f114);
    FUN_00a6073c(&local_320,local_358,param_5);
    if (local_320 != (undefined4 ****)&DAT_0000001e || local_31c != (undefined2 *)0x0) {
      FUN_00a57840(&local_320);
    }
    FUN_0134c39c(&local_3a8);
    FUN_01834abc(&local_3a8);
  }
  return;
}

