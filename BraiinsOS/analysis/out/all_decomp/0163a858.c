// FUN_0163a858 @ 0163a858 size=240 calls_out=4 calls_in=1
// strings: 

int FUN_0163a858(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x90) == 0) {
    return 0;
  }
  pcVar3 = (char *)(param_1 + 0x94);
  if (*pcVar3 == '\0') {
    bVar4 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar4) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163a894;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar3);
LAB_0163a894:
  FUN_0128236c(pcVar3);
  iVar2 = *(int *)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  bVar4 = iVar2 == 0;
  if (!bVar4) {
    iVar2 = iVar2 + -1;
  }
  *(int *)(param_1 + 0x90) = iVar2;
  if (bVar4) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa4);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      *(int *)(param_1 + 0xa4) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      *(undefined4 *)(iVar2 + 4) = 0;
    }
  }
  FUN_01282570(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar4 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar4) {
        *pcVar3 = '\0';
        return iVar2;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar3);
  return iVar2;
}

