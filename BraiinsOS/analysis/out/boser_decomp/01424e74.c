// FUN_01424e74 @ 01424e74 size=364 calls_out=2 calls_in=1
// strings: overflow when adding duration to instant | keep_alive expects last_read_atevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:377event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:380

void FUN_01424e74(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar3 = (undefined1 *)0x1;
  if (&DAT_3b9ac9ff < (undefined1 *)param_1[10]) {
    puVar3 = (undefined1 *)param_1[10] + -1000000000;
  }
  if (puVar3 == (undefined1 *)0x0) {
    if ((param_2 != 0) && ((param_1[0x10] & 1) == 0)) {
      return;
    }
  }
  else {
    if (puVar3 == (undefined1 *)0x1) {
      return;
    }
    if (*(undefined1 **)(param_3 + 0x10) != &DAT_3b9aca00) {
      return;
    }
  }
  if (*(undefined1 **)(param_3 + 0x30) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("keep_alive expects last_read_atevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:377event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:380"
                 ,0x1f,&DAT_01cf49a0);
  }
  uVar4 = *(uint *)(param_3 + 0x2c);
  uVar5 = param_1[1];
  uVar2 = *(uint *)(param_3 + 0x28) + *param_1;
  uVar1 = uVar4 + uVar5 + (uint)CARRY4(*(uint *)(param_3 + 0x28),*param_1);
  if ((int)uVar5 < 0 != (int)((uVar4 ^ uVar1) & ~(uVar4 ^ uVar5)) < 0) {
LAB_01424f44:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
  }
  puVar3 = *(undefined1 **)(param_3 + 0x30) + param_1[2];
  if (&DAT_3b9aca00 <= puVar3) {
    bVar6 = 0xfffffffe < uVar2;
    uVar2 = uVar2 + 1;
    uVar4 = uVar1 + bVar6;
    if ((int)((uVar1 ^ uVar4) & ~uVar1) < 0) goto LAB_01424f44;
    puVar3 = puVar3 + -1000000000;
    uVar1 = uVar4;
  }
  param_1[8] = uVar2;
  param_1[9] = uVar1;
  param_1[10] = (uint)puVar3;
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00477c39,0x31,&DAT_01cf476c);
  }
  (**(code **)(param_1[0xf] + 0x18))
            (param_1[0xe] + (*(int *)(param_1[0xf] + 8) - 1U & 0xfffffff8) + 8,param_1 + 0xc,uVar2,
             uVar1,puVar3);
  return;
}

