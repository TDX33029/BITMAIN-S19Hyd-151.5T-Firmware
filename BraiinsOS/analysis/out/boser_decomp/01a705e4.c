// FUN_01a705e4 @ 01a705e4 size=284 calls_out=2 calls_in=1
// strings: details | sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254

void FUN_01a705e4(int param_1,undefined4 *param_2)

{
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00532460,6);
  local_13 = 0;
  local_18 = param_2;
  FUN_01302c38(&local_18,&DAT_0056ef08,4,param_1 + 100,FUN_01a70934);
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_01302c38(&local_18,&DAT_005325f1,7,param_1 + 0x58,&LAB_005fdc1c);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_01302c38(&local_18,"details",7,param_1 + 0x40,&LAB_012833c0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_01302c38(&local_18,&DAT_0056fe10,8,param_1,FUN_01a708dc);
  }
  FUN_01302c38(&local_18,
               "sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254"
               ,6,param_1 + 0x50,FUN_01a7072c);
  FUN_01302e1c();
  return;
}

