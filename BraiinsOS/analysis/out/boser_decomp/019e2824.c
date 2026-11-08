// FUN_019e2824 @ 019e2824 size=268 calls_out=7 calls_in=3
// strings: inconsistent state in unpark

void FUN_019e2824(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  if (*param_1 != -1) {
    FUN_019f8594(param_1[1]);
    return;
  }
  iVar2 = param_1[1];
  piVar3 = (int *)(iVar2 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 2;
  DataMemoryBarrier(0xb);
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 != 1) {
    if (iVar4 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("inconsistent state in unpark",0x39,&DAT_01d29670);
    }
    return;
  }
  pcVar5 = (char *)(iVar2 + 0x10);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar1) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019ee61c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar5);
LAB_019ee61c:
  FUN_0165098c(pcVar5);
  FUN_01650a90(pcVar5);
  if (*pcVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar1) {
        *pcVar5 = '\0';
        goto LAB_019ee664;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar5);
LAB_019ee664:
  if (*(int *)(iVar2 + 0xc) == 0) {
    return;
  }
  FUN_0164ed38(iVar2 + 0xc);
  return;
}

