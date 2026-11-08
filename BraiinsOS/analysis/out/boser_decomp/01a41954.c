// FUN_01a41954 @ 01a41954 size=68 calls_out=2 calls_in=4
// strings: 

void FUN_01a41954(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [104];
  
  uVar1 = *(undefined1 *)(param_2 + 0x7d);
  uVar2 = *(undefined1 *)(param_2 + 0x7c);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  FUN_01a4aa04(auStack_80);
  FUN_01a40db8(param_1,uVar3,uVar2,uVar1,auStack_80);
  return;
}

