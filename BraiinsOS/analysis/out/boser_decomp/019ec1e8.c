// FUN_019ec1e8 @ 019ec1e8 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_019ec1e8(char *param_1)

{
  bool bVar1;
  
  FUN_01650a90();
  if (*param_1 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = '\0';
        return;
      }
    } while (*param_1 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(param_1);
  return;
}

