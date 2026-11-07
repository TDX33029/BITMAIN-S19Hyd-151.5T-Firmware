// FUN_019dc584 @ 019dc584 size=448 calls_out=5 calls_in=86
// strings: 

int FUN_019dc584(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int local_20;
  int local_1c;
  
  local_20 = *(int *)(param_2 + 0x10);
  local_1c = *(int *)(param_2 + 0x14);
  if (local_20 == 0 && local_1c == 0) {
    return 0;
  }
  if (local_20 != *(int *)(param_1 + 0x68) || local_1c != *(int *)(param_1 + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_019f1548(&local_20);
  }
  pcVar5 = (char *)(*(int *)(param_1 + 0x50) +
                   (*(uint *)(param_1 + 100) &
                   *(uint *)(param_2 + *(int *)(*(int *)(param_2 + 8) + 0x24))) * 0xc);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (!bVar1) goto LAB_019dc730;
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019dc730:
    FUN_0164fba8(pcVar5);
  }
  FUN_0165098c(pcVar5);
  iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x1c);
  piVar3 = (int *)(param_2 + iVar2);
  iVar4 = *piVar3;
  if (iVar4 == 0) {
    iVar4 = 0;
    if (param_2 != *(int *)(pcVar5 + 4)) goto LAB_019dc6dc;
    iVar4 = piVar3[1];
    *(int *)(pcVar5 + 4) = iVar4;
  }
  else {
    *(int *)(iVar4 + *(int *)(*(int *)(iVar4 + 8) + 0x1c) + 4) = piVar3[1];
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x1c);
    iVar4 = *(int *)(param_2 + iVar2 + 4);
  }
  if (iVar4 == 0) {
    iVar4 = 0;
    if (param_2 != *(int *)(pcVar5 + 8)) goto LAB_019dc6dc;
    *(undefined4 *)(pcVar5 + 8) = *(undefined4 *)(param_2 + iVar2);
  }
  else {
    *(undefined4 *)(iVar4 + *(int *)(*(int *)(iVar4 + 8) + 0x1c)) = *(undefined4 *)(param_2 + iVar2)
    ;
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x1c);
  }
  *(undefined4 *)(param_2 + iVar2 + 4) = 0;
  *(undefined4 *)(param_2 + *(int *)(*(int *)(param_2 + 8) + 0x1c)) = 0;
  piVar3 = (int *)(param_1 + 0x60);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + -1;
  iVar4 = param_2;
LAB_019dc6dc:
  FUN_01650a90(pcVar5);
  if (*pcVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar1) {
        *pcVar5 = '\0';
        return iVar4;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar5);
  return iVar4;
}

