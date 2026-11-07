// FUN_01401748 @ 01401748 size=148 calls_out=4 calls_in=2
// strings: 

void FUN_01401748(int param_1)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 4);
  if (*pcVar2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar2);
    if (bVar1) {
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01401774;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar2);
LAB_01401774:
  FUN_0165098c(pcVar2);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_01650a90(pcVar2);
  if (*pcVar2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
      if (bVar1) {
        *pcVar2 = '\0';
        return;
      }
    } while (*pcVar2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar2);
  return;
}

