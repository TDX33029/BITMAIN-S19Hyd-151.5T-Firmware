// FUN_013f1058 @ 013f1058 size=84 calls_out=2 calls_in=3
// strings: 

void FUN_013f1058(char *param_1)

{
  bool bVar1;
  
  if (param_1 == (char *)0x0) {
    return;
  }
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

