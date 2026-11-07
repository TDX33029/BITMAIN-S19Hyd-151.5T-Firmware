// FUN_00e7c67c @ 00e7c67c size=284 calls_out=4 calls_in=21
// strings: 

void FUN_00e7c67c(int *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  DataMemoryBarrier(0xb);
  if ((char)param_1[5] == '\0') {
    return;
  }
  iVar4 = *(int *)(*param_1 + 8);
  pcVar3 = (char *)(iVar4 + 0x10);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_00e7c78c;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00e7c78c:
    FUN_01280da8(pcVar3);
  }
  FUN_0128236c(pcVar3);
  if ((char)param_1[5] == '\0') goto LAB_00e7c734;
  if (param_1[3] == 0) {
    if (*(int **)(iVar4 + 0x20) != param_1 + 1) goto LAB_00e7c734;
    iVar2 = param_1[4];
    *(int *)(iVar4 + 0x20) = iVar2;
    if (iVar2 != 0) goto LAB_00e7c6f4;
LAB_00e7c728:
    if (*(int **)(iVar4 + 0x24) != param_1 + 1) goto LAB_00e7c734;
    *(int *)(iVar4 + 0x24) = param_1[3];
  }
  else {
    iVar2 = param_1[4];
    *(int *)(param_1[3] + 0xc) = iVar2;
    if (iVar2 == 0) goto LAB_00e7c728;
LAB_00e7c6f4:
    *(int *)(iVar2 + 8) = param_1[3];
  }
  param_1[3] = 0;
  param_1[4] = 0;
LAB_00e7c734:
  FUN_01282570(pcVar3);
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
  FUN_01280a5c(pcVar3);
  return;
}

