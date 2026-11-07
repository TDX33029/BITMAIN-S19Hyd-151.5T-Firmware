// FUN_019f9a9c @ 019f9a9c size=296 calls_out=5 calls_in=6
// strings: 

void FUN_019f9a9c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(char *)(param_1 + 7) != '\x01') {
    return;
  }
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_019f9bb8;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019f9bb8:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  if (param_1[3] == 0) {
    if (param_1 + 1 != *(undefined4 **)(pcVar3 + 4)) goto LAB_019f9b38;
    iVar2 = param_1[4];
    *(int *)(pcVar3 + 4) = iVar2;
  }
  else {
    iVar2 = param_1[4];
    *(int *)(param_1[3] + 0xc) = iVar2;
  }
  if (iVar2 == 0) {
    if (param_1 + 1 != *(undefined4 **)(pcVar3 + 8)) goto LAB_019f9b38;
    *(undefined4 *)(pcVar3 + 8) = param_1[3];
  }
  else {
    *(undefined4 *)(iVar2 + 8) = param_1[3];
  }
  param_1[3] = 0;
  param_1[4] = 0;
LAB_019f9b38:
  DataMemoryBarrier(0xb);
  if (param_1[6] != param_1[5]) {
    FUN_019f8cb4(*param_1,param_1[6] - param_1[5],pcVar3);
    return;
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

