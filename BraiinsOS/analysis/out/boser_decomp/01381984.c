// FUN_01381984 @ 01381984 size=76 calls_out=2 calls_in=2
// strings: assertion failed: self.ref_count < usize::MAXevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:310event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:128

void FUN_01381984(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar1 = FUN_01367cb8(*(undefined4 *)(*param_3 + 0x34),*(undefined4 *)(*param_3 + 0x38),iVar2,iVar3
                      );
  if (*(int *)(iVar1 + 0xd8) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.ref_count < usize::MAXevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:310event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:128"
                 ,0x2d,&DAT_01ceb0cc);
  }
  *(int *)(iVar1 + 0xd8) = *(int *)(iVar1 + 0xd8) + 1;
  *param_1 = param_2;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  return;
}

