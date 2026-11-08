// FUN_00a5d5b0 @ 00a5d5b0 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_00a5d5b0(int param_1,undefined4 param_2)

{
  FUN_01bed93e(param_1 + 0x68,0,0x20);
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x88) = param_2;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_01bed93e(param_1,0,0x68);
  FUN_01bed93e(param_1 + 0xa0,0,0x17);
  return;
}

