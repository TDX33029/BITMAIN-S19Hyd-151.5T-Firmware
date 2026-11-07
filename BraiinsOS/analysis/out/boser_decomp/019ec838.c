// FUN_019ec838 @ 019ec838 size=292 calls_out=5 calls_in=1
// strings: 

int FUN_019ec838(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *local_18;
  undefined4 local_14;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x90) == 0) {
    return 0;
  }
  pcVar4 = (char *)(param_1 + 0x94);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019ec878;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar4);
LAB_019ec878:
  FUN_0165098c(pcVar4);
  iVar2 = *(int *)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  *(int *)(param_1 + 0x90) = iVar2 - (uint)(iVar2 != 0);
  local_18 = (int *)(param_1 + 0xa4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = *local_18;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 4);
      *local_18 = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      iVar2 = iVar3;
    }
  }
  local_14 = 0;
  FUN_019dd214(&local_18);
  FUN_01650a90(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        return iVar2;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar4);
  return iVar2;
}

