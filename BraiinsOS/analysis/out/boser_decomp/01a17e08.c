// FUN_01a17e08 @ 01a17e08 size=188 calls_out=5 calls_in=11
// strings: 

void FUN_01a17e08(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  if ((char)param_1[5] == '\0') {
    return;
  }
  iVar3 = *(int *)(*param_1 + 8);
  pcVar2 = (char *)(iVar3 + 0x10);
  if (*pcVar2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar2);
    if (bVar1) {
      *pcVar2 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a17e4c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar2);
LAB_01a17e4c:
  FUN_0165098c(pcVar2);
  if ((char)param_1[5] != '\0') {
    FUN_01a36b28(iVar3 + 0x20,param_1 + 1);
  }
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

