// FUN_012e310c @ 012e310c size=80 calls_out=2 calls_in=3
// strings: 

int * FUN_012e310c(int *param_1)

{
  bool bVar1;
  
  if (*param_1 == 0) {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_012e3134;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164d8d8(param_1);
LAB_012e3134:
  FUN_0165098c(param_1);
  FUN_0165098c((uint)param_1 | 1);
  return param_1;
}

