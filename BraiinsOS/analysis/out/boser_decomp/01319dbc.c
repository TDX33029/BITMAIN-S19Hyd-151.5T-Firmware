// FUN_01319dbc @ 01319dbc size=152 calls_out=4 calls_in=2
// strings: unaligned pointerevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:330

void FUN_01319dbc(uint param_1,int param_2)

{
  undefined *local_18;
  uint local_14;
  
  local_18 = (undefined *)(param_1 & 0x1c);
  if (local_18 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_18,&DAT_00533278,
                 "unaligned pointerevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:330"
                 ,0x23,&DAT_01cf3778);
  }
  if (param_2 == 0) {
    FUN_01319f6c(param_1 & 0xffffffe0 | 8);
    thunk_FUN_01be4678(param_1 & 0xffffffe0);
    return;
  }
  local_18 = &DAT_0131a5e8;
  local_14 = param_1;
  FUN_01319ffc(param_2,&local_18);
  return;
}

