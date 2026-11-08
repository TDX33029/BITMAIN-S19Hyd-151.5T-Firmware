// FUN_0163af08 @ 0163af08 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_0163af08(char *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (*param_1 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163af3c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(param_1);
LAB_0163af3c:
  FUN_0128236c(param_1);
  FUN_0163af68(param_1,param_2,param_1);
  return;
}

