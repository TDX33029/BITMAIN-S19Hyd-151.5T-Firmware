// FUN_016b2ad4 @ 016b2ad4 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_016b2ad4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  FUN_0065f438(param_2,0,1 << (*(uint *)(param_2 + 0x10c) & 0x1f));
  *param_1 = 0x30;
  param_1[1] = uVar1;
  return;
}

