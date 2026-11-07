// FUN_0134148c @ 0134148c size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0134148c(int param_1)

{
  char local_10 [4];
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    return;
  }
  FUN_0134136c(local_10,param_1);
  if (local_10[0] != '\x04') {
    FUN_0069263c(local_10[0],local_c);
  }
  return;
}

