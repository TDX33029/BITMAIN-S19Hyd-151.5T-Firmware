// FUN_01ab6924 @ 01ab6924 size=152 calls_out=6 calls_in=4
// strings: 

void FUN_01ab6924(undefined4 param_1,int param_2,int param_3)

{
  int local_2c [7];
  
  if (*(char *)(param_2 + 0x319) == '\0') {
    FUN_01ab4e64(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
  }
  FUN_01ab54c4(local_2c,param_3);
  if (local_2c[0] == 6) {
    *(undefined1 *)(param_2 + 0x318) = 1;
    FUN_01ab0338(param_2 + 0x1cc,param_3);
    FUN_01bed4e2(param_1,param_2,800);
    return;
  }
  FUN_01ab05d8(param_2 + 0xe0,local_2c);
  FUN_01bed4e2(param_1,param_2,800);
  FUN_01ab0534(param_3);
  return;
}

