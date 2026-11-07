// FUN_01a7e9c0 @ 01a7e9c0 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_01a7e9c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01a6bf28(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c));
  FUN_01bed4e2(param_1,param_2,0x48);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined **)(param_1 + 0x4c) = &DAT_01d2d874;
  return;
}

