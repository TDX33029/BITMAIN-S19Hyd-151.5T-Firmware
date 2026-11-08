// FUN_01afc9a8 @ 01afc9a8 size=100 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01afc9a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01afc77c();
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = param_2;
  param_1[4] = param_3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  return 1;
}

