// FUN_01b5b4e4 @ 01b5b4e4 size=136 calls_out=1 calls_in=6
// strings: 

undefined8 FUN_01b5b4e4(int param_1,uint param_2)

{
  if ((param_1 == 0) || ((param_2 & 0xffffffdf) != 0x88)) {
    return 0;
  }
  FUN_01b257dc(param_1,0,200);
  *(uint *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0x1f;
  return 1;
}

