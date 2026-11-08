// FUN_0183a29c @ 0183a29c size=224 calls_out=2 calls_in=1
// strings: reqwest::Error | sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254

void FUN_0183a29c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  int local_18;
  int local_14;
  
  local_1c = (**(code **)(param_2[1] + 0xc))(*param_2,"reqwest::Error",0xe);
  piVar1 = (int *)*param_1;
  local_1b = 0;
  local_20 = param_2;
  FUN_01302c38(&local_20,&DAT_0056f2ec,4,piVar1 + 0x12,&LAB_016f7768);
  if (*piVar1 != 2) {
    local_18 = piVar1[5];
    local_14 = piVar1[6];
    FUN_01302c38(&local_20,"url",3,&local_18,&LAB_01674ec4);
  }
  if (piVar1[0x17] != 0) {
    FUN_01302c38(&local_20,
                 "sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254"
                 ,6,piVar1 + 0x17,&LAB_01937250);
  }
  FUN_01302e1c(&local_20);
  return;
}

