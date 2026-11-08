// FUN_019e12b8 @ 019e12b8 size=156 calls_out=5 calls_in=4
// strings: 

void FUN_019e12b8(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = *param_1;
  pcVar2 = (char *)(iVar3 + 0xc);
  if (*pcVar2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar2);
    if (bVar1) {
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e12e8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar2);
LAB_019e12e8:
  FUN_0165098c(pcVar2);
  FUN_019dfd84(iVar3 + 0x10,param_1 + 1);
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

