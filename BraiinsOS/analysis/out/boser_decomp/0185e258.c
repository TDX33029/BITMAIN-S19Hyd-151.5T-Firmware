// FUN_0185e258 @ 0185e258 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_0185e258(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a0 [136];
  
  FUN_01413d40(auStack_a0);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x88) = *param_2;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  FUN_01bed4e2(param_1,auStack_a0,0x88);
  return;
}

