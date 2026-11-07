// FUN_013b845c @ 013b845c size=160 calls_out=2 calls_in=0
// strings: ACKevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/reset.rs:41/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/reset.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1430

undefined4 FUN_013b845c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *local_2c;
  char local_28;
  undefined1 local_27;
  byte local_21;
  byte *local_20;
  code *local_1c;
  
  bVar1 = *param_1;
  local_1c = FUN_012fd63c;
  local_20 = &local_21;
  local_21 = bVar1;
  local_28 = FUN_012fa178(*param_2,param_2[1],&DAT_00570130,&local_20);
  local_27 = 0;
  local_2c = param_2;
  FUN_013b12ec(&local_2c,bVar1 & 1,
               "ACKevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/reset.rs:41/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/reset.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1430"
               ,3);
  uVar2 = 1;
  if (local_28 == '\0') {
    uVar2 = (**(code **)(local_2c[1] + 0xc))(*local_2c,&DAT_0053341b,1);
  }
  return uVar2;
}

