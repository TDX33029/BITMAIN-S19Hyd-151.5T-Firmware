// FUN_0179ae00 @ 0179ae00 size=416 calls_out=2 calls_in=0
// strings: Extraclose-delimitedend of file before message length reachedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:481 | Extraclose-delimitedend of file before message length reachedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:481

undefined4 FUN_0179ae00(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 **local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0179ae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar4;
  }
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(uVar4,&DAT_0056f9dc,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar4,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    bVar1 = (*pcVar3)(uVar4,
                      "Extraclose-delimitedend of file before message length reachedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:481"
                      ,5);
    local_34._0_2_ = (ushort)bVar1;
    local_38 = param_2;
    iVar2 = FUN_01302e1c(&local_38);
    if (iVar2 != 0) {
      return 1;
    }
    uVar4 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar2 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_30 = param_2[2];
    local_2c = param_2[3];
    local_34 = &DAT_01ce45f8;
    local_40 = &local_39;
    local_39 = 1;
    local_48 = uVar4;
    local_44 = iVar5;
    local_38 = &local_48;
    local_24 = FUN_01302620(&local_48,
                            "Extraclose-delimitedend of file before message length reachedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:481"
                            ,5);
    local_28 = &local_38;
    local_23 = 0;
    iVar2 = FUN_01302e1c(&local_28);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_005312e2,2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar3)(uVar4,&DAT_0053341b,1);
  return uVar4;
}

