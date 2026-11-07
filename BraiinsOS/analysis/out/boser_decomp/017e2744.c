// FUN_017e2744 @ 017e2744 size=208 calls_out=2 calls_in=1
// strings: reqwest::Error | sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254

void FUN_017e2744(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"reqwest::Error",0xe);
  piVar1 = (int *)*param_1;
  local_13 = 0;
  local_18 = param_2;
  FUN_01302c38(&local_18,&DAT_0056f2ec,4,piVar1 + 0x12,&LAB_017e2be0);
  if (*piVar1 != 2) {
    FUN_01302c38(&local_18,"url",3,piVar1,FUN_017e2830);
  }
  if (piVar1[0x13] != 0) {
    FUN_01302c38(&local_18,
                 "sourceevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:254"
                 ,6,piVar1 + 0x13,&LAB_01937250);
  }
  FUN_01302e1c(&local_18);
  return;
}

