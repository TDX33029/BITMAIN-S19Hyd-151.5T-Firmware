// FUN_00705cb4 @ 00705cb4 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00705cb4(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = 
  "Fixedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/rejection.rs:10axum::extract::rejection/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/rejection.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/rejection.rs:22event /nix/store/eeeeeee"
  ;
  if (*(char *)*param_1 == '\0') {
    pcVar1 = &UNK_0056e864;
  }
  uVar2 = 4;
  if (*(char *)*param_1 != '\0') {
    uVar2 = 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00705cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar1,uVar2);
  return;
}

