// FUN_00e83cdc @ 00e83cdc size=104 calls_out=7 calls_in=8
// strings: 

void FUN_00e83cdc(int param_1)

{
  FUN_00e84018();
  if (*(int *)(param_1 + 0x2c0) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4),8,0x30);
  }
  FUN_00855f74(param_1 + 0x2cc);
  FUN_00855fc4(param_1 + 0xc0);
  if (*(int *)(param_1 + 0x118) != 2 || *(int *)(param_1 + 0x11c) != 0) {
    FUN_00b9a764();
  }
  FUN_00856028(param_1 + 0x2a8);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b8));
  return;
}

