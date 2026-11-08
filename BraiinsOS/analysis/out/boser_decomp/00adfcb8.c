// FUN_00adfcb8 @ 00adfcb8 size=68 calls_out=1 calls_in=9
// strings: 

void FUN_00adfcb8(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0xb0) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
  }
  *(undefined4 *)(param_2 + 0xb4) = 1;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  *(undefined4 *)(param_2 + 0xb8) = 0;
  FUN_01bed4e2(param_1,param_2,0xe0);
  return;
}

