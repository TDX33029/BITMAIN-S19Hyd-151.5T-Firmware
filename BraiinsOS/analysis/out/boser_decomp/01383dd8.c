// FUN_01383dd8 @ 01383dd8 size=248 calls_out=5 calls_in=4
// strings: assertion failed: self.ref_count < usize::MAXevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:310event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:128

void FUN_01383dd8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  piVar4 = (int *)*param_2;
  FUN_01933ff0(&local_34,piVar4 + 2);
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01ceafc4,&DAT_01ceafd4);
  }
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  iVar3 = FUN_01367cb8(*(undefined4 *)(local_30 + 0x18c),*(undefined4 *)(local_30 + 400),uVar6,uVar5
                      );
  if (*(int *)(iVar3 + 0xd8) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.ref_count < usize::MAXevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/stream.rs:310event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:128"
                 ,0x2d,&DAT_01ceb0cc);
  }
  *(int *)(iVar3 + 0xd8) = *(int *)(iVar3 + 0xd8) + 1;
  *(int *)(local_30 + 0x1a0) = *(int *)(local_30 + 0x1a0) + 1;
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1383ed0);
    (*pcVar1)();
  }
  *param_1 = piVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar5;
  FUN_00a97e8c(local_30,local_2c);
  return;
}

