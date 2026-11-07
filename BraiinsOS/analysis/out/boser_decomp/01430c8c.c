// FUN_01430c8c @ 01430c8c size=268 calls_out=3 calls_in=1
// strings: keep_alive expects last_read_atevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:377event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:380

void FUN_01430c8c(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    if ((param_2 != 0) && ((*(byte *)(param_1 + 9) & 1) == 0)) {
      return;
    }
    puVar1 = *(undefined1 **)(param_3 + 0x30);
    *(undefined1 *)((int)param_1 + 0x25) = 1;
    if (puVar1 == &DAT_3b9aca00) goto LAB_01430d80;
    uVar3 = *param_1;
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    FUN_019fa158(&local_28,uVar3,*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                 puVar1);
    uVar2 = param_1[8];
    uVar4 = extraout_r1_00;
  }
  else {
    if (*(char *)((int)param_1 + 0x25) == '\x01') {
      return;
    }
    if (*(undefined1 **)(param_3 + 0x10) != &DAT_3b9aca00) {
      return;
    }
    puVar1 = *(undefined1 **)(param_3 + 0x30);
    *(undefined1 *)((int)param_1 + 0x25) = 1;
    if (puVar1 == &DAT_3b9aca00) {
LAB_01430d80:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("keep_alive expects last_read_atevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:377event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:380"
                   ,0x1f,&DAT_01cf5720);
    }
    uVar3 = *param_1;
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    FUN_019fa158(&local_28,uVar3,*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                 puVar1);
    uVar2 = param_1[8];
    uVar4 = extraout_r1;
  }
  FUN_019f598c(uVar2,uVar4,local_28,uStack_24,uStack_20,1,uVar3,uVar5,uVar6);
  return;
}

