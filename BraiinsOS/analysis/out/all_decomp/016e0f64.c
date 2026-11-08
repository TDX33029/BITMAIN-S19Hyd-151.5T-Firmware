// FUN_016e0f64 @ 016e0f64 size=116 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_016e0f64(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_016e0e8c();
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  return 1;
}

