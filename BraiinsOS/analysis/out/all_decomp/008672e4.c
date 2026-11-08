// FUN_008672e4 @ 008672e4 size=84 calls_out=3 calls_in=15
// strings: 

void FUN_008672e4(char *param_1)

{
  bool bVar1;
  
  if (*param_1 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0086730c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(param_1);
LAB_0086730c:
  FUN_0128236c(param_1);
  FUN_0163af68(param_1,1,param_1);
  return;
}

