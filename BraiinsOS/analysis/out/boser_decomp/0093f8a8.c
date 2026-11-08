// FUN_0093f8a8 @ 0093f8a8 size=480 calls_out=2 calls_in=0
// strings: Server | ServerError | detailevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client/in_flight_requests.rs:132 | ServerError | detailevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client/in_flight_requests.rs:132

void FUN_0093f8a8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (*(int *)*param_1 < 0) {
    iVar1 = *(int *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0093f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0093f8d4 + *(int *)(&DAT_0093f8d4 + iVar1 * 4)))();
  return;
}

