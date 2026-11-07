// FUN_014b66e4 @ 014b66e4 size=136 calls_out=2 calls_in=0
// strings: context | sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254

void FUN_014b66e4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puStack_1c;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  
  local_18 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005333ba,5);
  local_17 = 0;
  puStack_1c = param_2;
  local_14 = param_1;
  uVar1 = FUN_01302c38(&puStack_1c,"context",7,&local_14,FUN_014b679c);
  FUN_01302c38(uVar1,
               "sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254"
               ,6,param_1 + 0xc,FUN_012821d0);
  FUN_01302e1c();
  return;
}

