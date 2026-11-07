// FUN_00f9e044 @ 00f9e044 size=184 calls_out=7 calls_in=3
// strings: 

undefined4 FUN_00f9e044(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_c4 [24];
  undefined *local_ac;
  undefined2 *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  
  FUN_00a41ecc(auStack_c4,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),
               *(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
  uVar1 = FUN_00ff793c();
  local_ac = &DAT_01c1b30c;
  local_a8 = &DAT_0132b6a0;
  FUN_00664898(&local_a4,&DAT_00593a17,&local_ac);
  FUN_00fec824(&local_a4);
  uVar1 = FUN_0100d714(uVar1,local_a0,local_9c,&local_a4,&DAT_01c1b314);
  uVar1 = FUN_00fecd58(uVar1,auStack_c4);
  FUN_019bb7e0(local_a4,local_a0);
  return uVar1;
}

