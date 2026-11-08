// FUN_009dd354 @ 009dd354 size=80 calls_out=2 calls_in=15
// strings: 

void FUN_009dd354(int *param_1)

{
  bool bVar1;
  
  FUN_01650a90();
  FUN_01650a90((uint)param_1 | 1);
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
  FUN_0164d408(param_1);
  return;
}

