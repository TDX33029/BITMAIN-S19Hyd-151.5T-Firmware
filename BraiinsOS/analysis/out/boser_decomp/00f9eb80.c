// FUN_00f9eb80 @ 00f9eb80 size=288 calls_out=7 calls_in=3
// strings: 

undefined4 FUN_00f9eb80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_cc [24];
  undefined *local_b4;
  undefined2 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  
  FUN_00a41ecc(auStack_cc,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
               *(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
  uVar3 = FUN_00ff793c();
  local_b4 = &DAT_01c1b3bc;
  local_b0 = &DAT_0132b6a0;
  FUN_00664898(&local_ac,&DAT_00593a17,&local_b4);
  uVar4 = local_a4;
  uVar2 = local_a8;
  uVar1 = local_ac;
  FUN_00fec824(&local_ac);
  uVar4 = FUN_0100d714(uVar3,uVar2,uVar4,&local_ac,&DAT_01c1b3c4);
  local_b0 = &DAT_0132b6a0;
  local_b4 = &DAT_01c1b3d4;
  FUN_00664898(&local_ac,&DAT_00593a17,&local_b4);
  FUN_00fec824(&local_ac);
  uVar4 = FUN_0100d714(uVar4,local_a8,local_a4,&local_ac,&DAT_01c1b3dc);
  uVar4 = FUN_00fecd58(uVar4,auStack_cc);
  FUN_019bb7e0(local_ac,local_a8);
  FUN_019bb7e0(uVar1,uVar2);
  return uVar4;
}

