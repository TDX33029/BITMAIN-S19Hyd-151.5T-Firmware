// FUN_012c4408 @ 012c4408 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_012c4408(int *param_1)

{
  bool bVar1;
  
  FUN_01282570();
  FUN_01282570((uint)param_1 | 1);
  if (*param_1 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = 0;
        return;
      }
    } while (*param_1 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(param_1);
  return;
}

