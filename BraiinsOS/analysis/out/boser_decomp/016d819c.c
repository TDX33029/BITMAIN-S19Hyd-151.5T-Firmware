// FUN_016d819c @ 016d819c size=60 calls_out=2 calls_in=7
// strings: 

bool FUN_016d819c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_016d4fe8();
  if (iVar1 == 0) {
    return false;
  }
  FUN_016d4684(param_1);
  return *(int *)(*param_1 + 0x50) != param_1[2];
}

