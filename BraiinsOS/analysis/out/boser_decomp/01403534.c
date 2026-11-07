// FUN_01403534 @ 01403534 size=68 calls_out=1 calls_in=1
// strings: unaligned pointerevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:330

void FUN_01403534(uint param_1)

{
  uint local_c;
  
  local_c = param_1 & 3;
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,&local_c,&DAT_00533278,
                 "unaligned pointerevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:330"
                );
  }
  return;
}

