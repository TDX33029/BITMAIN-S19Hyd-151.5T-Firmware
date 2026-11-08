// FUN_01340de0 @ 01340de0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_01340de0(int param_1)

{
  char local_10 [4];
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    return;
  }
  FUN_01340e58(local_10,param_1);
  if (local_10[0] != '\x04') {
    FUN_0069d8a4(local_10[0],local_c);
  }
  return;
}

