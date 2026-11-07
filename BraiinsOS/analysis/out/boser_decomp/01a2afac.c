// FUN_01a2afac @ 01a2afac size=80 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01a2afac(int param_1,undefined4 param_2)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114));
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x50) != -0x80000000) {
    FUN_01a2affc();
  }
  FUN_01bed4e2(param_1,param_2,0x128);
  return 0x1b;
}

