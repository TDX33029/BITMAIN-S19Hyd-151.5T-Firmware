// FUN_019dfdfc @ 019dfdfc size=192 calls_out=5 calls_in=1
// strings: 

void FUN_019dfdfc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  pcVar3 = (char *)(param_1[1] + 4);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019dfe38;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_019dfe38:
  FUN_0165098c(pcVar3);
  uVar4 = *param_1;
  while (iVar2 = FUN_019dfed4(uVar4), iVar2 != 0) {
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar2 + 0x10) = 2;
  }
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        return;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
  return;
}

