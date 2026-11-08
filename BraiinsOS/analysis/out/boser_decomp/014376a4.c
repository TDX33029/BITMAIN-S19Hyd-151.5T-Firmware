// FUN_014376a4 @ 014376a4 size=180 calls_out=3 calls_in=0
// strings: &mut [u8].write() cannot errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:441event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:448event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:390event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:349event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:371event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:406event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/dns.rs:122

undefined4 FUN_014376a4(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 *local_14;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xb);
  if (10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,10,10,&DAT_01cf6920);
  }
  uVar3 = 10 - uVar1;
  uVar2 = param_3;
  if (uVar3 < param_3) {
    uVar2 = uVar3;
  }
  FUN_01bed4e2(param_1 + uVar1,param_2,uVar2);
  if (uVar3 < param_3) {
    local_18 = 2;
    local_14 = &DAT_01d2e7b8;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("&mut [u8].write() cannot errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:441event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:448event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:390event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:349event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:371event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/client.rs:406event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/dns.rs:122"
                 ,0x1e,&local_18,&DAT_01cf6660,&DAT_01cf6930);
  }
  *(char *)(param_1 + 0xb) = *(char *)(param_1 + 0xb) + (char)param_3;
  return 0;
}

