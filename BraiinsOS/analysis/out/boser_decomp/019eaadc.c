// FUN_019eaadc @ 019eaadc size=60 calls_out=2 calls_in=6
// strings: 

void FUN_019eaadc(int param_1)

{
  char local_10 [8];
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    return;
  }
  FUN_019ea9e4(local_10,param_1);
  if (local_10[0] != '\x04') {
    FUN_0069603c(local_10);
  }
  return;
}

