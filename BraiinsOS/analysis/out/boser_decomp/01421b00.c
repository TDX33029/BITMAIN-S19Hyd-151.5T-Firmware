// FUN_01421b00 @ 01421b00 size=484 calls_out=3 calls_in=0
// strings: Encoder | is_lastevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/conn.rs:909 | Encoder | is_lastevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/conn.rs:909

void FUN_01421b00(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (2 < *param_1) {
    iVar1 = *param_1 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x01421b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01421b2c + *(int *)(&DAT_01421b2c + iVar1 * 4)))();
  return;
}

