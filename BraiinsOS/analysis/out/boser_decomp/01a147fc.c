// FUN_01a147fc @ 01a147fc size=176 calls_out=5 calls_in=2
// strings: 

void FUN_01a147fc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  pcVar3 = (char *)(param_1[1] + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a14838;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_01a14838:
  FUN_0165098c(pcVar3);
  uVar4 = *param_1;
  do {
    iVar2 = FUN_012ccb24(uVar4);
  } while (iVar2 != 0);
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

