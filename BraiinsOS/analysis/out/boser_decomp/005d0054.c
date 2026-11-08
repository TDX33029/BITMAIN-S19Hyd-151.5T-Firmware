// FUN_005d0054 @ 005d0054 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_005d0054(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_a0 [136];
  
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  FUN_01bed4e2(auStack_a0,param_2,0x88);
  FUN_00b19860(uVar1,uVar2);
  FUN_01bed4e2(param_1,param_2,0x88);
  *(undefined4 *)(param_1 + 0x88) = param_3;
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}

