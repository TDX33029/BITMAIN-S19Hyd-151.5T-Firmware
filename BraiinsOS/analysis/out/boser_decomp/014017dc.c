// FUN_014017dc @ 014017dc size=148 calls_out=4 calls_in=1
// strings: 

void FUN_014017dc(int param_1,undefined4 param_2)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 4);
  if (*pcVar2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar2);
    if (bVar1) {
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0140180c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar2);
LAB_0140180c:
  FUN_0165098c(pcVar2);
  *(undefined4 *)(param_1 + 0x10) = param_2;
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

