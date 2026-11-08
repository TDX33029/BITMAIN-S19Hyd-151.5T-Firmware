// FUN_01422f84 @ 01422f84 size=212 calls_out=3 calls_in=0
// strings: HeaderContentLengthInvalidTransferEncodingUnexpectedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/body/length.rs:58 | value

void FUN_01422f84(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *local_2c;
  undefined1 local_28;
  undefined1 local_27;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)*param_1;
  local_28 = (**(code **)(param_2[1] + 0xc))
                       (*param_2,
                        "HeaderContentLengthInvalidTransferEncodingUnexpectedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/body/length.rs:58"
                        ,6);
  local_27 = 0;
  local_2c = param_2;
  FUN_01302c38(&local_2c,&DAT_0056ee18,4,iVar1,&LAB_018a0040);
  puVar2 = (undefined4 *)(iVar1 + 8);
  FUN_012fbd94(&local_24,*puVar2,*(undefined4 *)(iVar1 + 0xc));
  if (local_24 == 1) {
    puVar3 = &LAB_0141634c;
  }
  else {
    puVar2 = &local_18;
    local_18 = local_20;
    local_14 = local_1c;
    puVar3 = &LAB_018a0040;
  }
  FUN_01302c38(&local_2c,"value",5,puVar2,puVar3);
  FUN_01302e1c(&local_2c);
  return;
}

