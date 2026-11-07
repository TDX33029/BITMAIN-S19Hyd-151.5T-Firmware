// FUN_010c3f0c @ 010c3f0c size=320 calls_out=3 calls_in=1
// strings: invalid URL; scheme is not http | invalid URL; host is missingevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:561 | invalid URL; scheme is missingevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:904event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:927event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:921event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:933event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:844

void FUN_010c3f0c(undefined2 *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_24 [2];
  undefined2 local_1c;
  
  bVar1 = *param_3;
  if (*(char *)(param_2 + 0x74) == '\0') {
    if (bVar1 == 0) {
      uVar3 = 0x1e;
      pcVar2 = 
      "invalid URL, scheme is missingevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:904event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:927event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:921event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:933event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:844"
      ;
      goto LAB_010c4030;
    }
LAB_010c3f6c:
    if (*(int *)(param_3 + 0x10) != 0) {
      uVar4 = FUN_010a61e4(*(undefined4 *)(param_3 + 0xc));
      if ((((*(int *)(param_3 + 0x10) == 0) ||
           (FUN_010a6bb0(local_24,*(undefined4 *)(param_3 + 0xc)), local_24[0] == 0)) &&
          (local_1c = 0x50, (*param_3 & 1) != 0)) && (param_3[1] != 0)) {
        local_1c = 0x1bb;
      }
      param_1[6] = local_1c;
      *(undefined8 *)(param_1 + 2) = uVar4;
      *param_1 = 3;
      return;
    }
    uVar3 = 0x1c;
    pcVar2 = 
    "invalid URL, host is missingevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs:561"
    ;
  }
  else {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        if (param_3[1] != 1) goto LAB_010c3f6c;
      }
      else if (bVar1 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_0188452c);
      }
    }
    uVar3 = 0x1f;
    pcVar2 = "invalid URL, scheme is not http";
  }
LAB_010c4030:
  *(char **)(param_1 + 0x10) = pcVar2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

