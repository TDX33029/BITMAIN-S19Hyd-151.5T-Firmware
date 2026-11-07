// FUN_010c1be8 @ 010c1be8 size=452 calls_out=2 calls_in=1
// strings: keep_alive expects last_read_atkeep-alive timed outhyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | You must supply a timer.&mut [u8].write() cannot errorIncompleteMessageHeaderTimeoutBodyWriteHttp2

void FUN_010c1be8(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  iVar3 = 1;
  if (999999999 < param_1[10]) {
    iVar3 = param_1[10] + 0xc4653600;
  }
  if (iVar3 == 0) {
    if ((param_2 != 0) && ((param_1[0x10] & 1) == 0)) {
      return;
    }
    if (*(undefined1 **)(param_3 + 0x30) == &DAT_3b9aca00) goto LAB_010c1d7c;
    uVar4 = *(uint *)(param_3 + 0x2c);
    uVar5 = param_1[1];
    uVar2 = *(uint *)(param_3 + 0x28) + *param_1;
    uVar1 = uVar4 + uVar5 + (uint)CARRY4(*(uint *)(param_3 + 0x28),*param_1);
    if ((int)uVar5 < 0 != (int)((uVar4 ^ uVar1) & ~(uVar4 ^ uVar5)) < 0) goto LAB_010c1d14;
    puVar6 = *(undefined1 **)(param_3 + 0x30) + param_1[2];
  }
  else {
    if ((iVar3 == 1) || (*(undefined1 **)(param_3 + 0x10) != &DAT_3b9aca00)) {
      return;
    }
    if (*(undefined1 **)(param_3 + 0x30) == &DAT_3b9aca00) {
LAB_010c1d7c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("keep_alive expects last_read_atkeep-alive timed outhyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs"
                   ,0x1f,&DAT_01884cf0);
    }
    uVar4 = *(uint *)(param_3 + 0x2c);
    uVar5 = param_1[1];
    uVar2 = *(uint *)(param_3 + 0x28) + *param_1;
    uVar1 = uVar4 + uVar5 + (uint)CARRY4(*(uint *)(param_3 + 0x28),*param_1);
    if ((int)uVar5 < 0 != (int)((uVar4 ^ uVar1) & ~(uVar4 ^ uVar5)) < 0) goto LAB_010c1d14;
    puVar6 = *(undefined1 **)(param_3 + 0x30) + param_1[2];
  }
  if (puVar6 < (undefined1 *)0x3b9aca00) {
    uVar4 = uVar1;
  }
  else {
    bVar7 = 0xfffffffe < uVar2;
    uVar2 = uVar2 + 1;
    uVar4 = uVar1 + bVar7;
    if ((int)((uVar1 ^ uVar4) & ~uVar1) < 0) {
LAB_010c1d14:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    puVar6 = puVar6 + -1000000000;
  }
  param_1[8] = uVar2;
  param_1[9] = uVar4;
  param_1[10] = (uint)puVar6;
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("You must supply a timer.&mut [u8].write() cannot errorIncompleteMessageHeaderTimeoutBodyWriteHttp2"
                 ,0x31,&DAT_01884b94);
  }
  (**(code **)(param_1[0xf] + 0x18))
            (param_1[0xe] + (*(int *)(param_1[0xf] + 8) - 1U & 0xfffffff8) + 8,param_1 + 0xc,uVar2,
             uVar4,puVar6);
  return;
}

