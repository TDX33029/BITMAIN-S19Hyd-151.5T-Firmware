// FUN_00a981d4 @ 00a981d4 size=80 calls_out=2 calls_in=7
// strings: 

int * FUN_00a981d4(int *param_1)

{
  bool bVar1;
  
  if (*param_1 == 0) {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00a981fc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164d8d8(param_1);
LAB_00a981fc:
  FUN_0165098c(param_1);
  FUN_0165098c((uint)param_1 | 1);
  return param_1;
}

