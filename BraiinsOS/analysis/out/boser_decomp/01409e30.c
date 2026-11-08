// FUN_01409e30 @ 01409e30 size=176 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

void FUN_01409e30(uint param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf3bb4);
  }
  pcVar2 = (char *)(param_2 + 4);
  if (*pcVar2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar2);
    if (bVar1) {
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01409e64;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar2);
LAB_01409e64:
  FUN_0165098c(pcVar2);
  *(undefined4 *)(param_2 + 0x10) = 0;
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

