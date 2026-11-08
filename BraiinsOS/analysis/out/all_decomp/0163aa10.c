// FUN_0163aa10 @ 0163aa10 size=252 calls_out=4 calls_in=11
// strings: 

void FUN_0163aa10(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = *param_1;
  pcVar4 = (char *)(iVar5 + 0xc);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_0163ab00;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0163ab00:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  piVar2 = param_1 + 1;
  if (*piVar2 == 0) {
    if (*(int **)(iVar5 + 0x10) != piVar2) goto LAB_0163aaa8;
    piVar3 = (int *)param_1[2];
    *(int **)(iVar5 + 0x10) = piVar3;
    if (piVar3 == (int *)0x0) goto LAB_0163aa9c;
LAB_0163aa68:
    *piVar3 = *piVar2;
  }
  else {
    piVar3 = (int *)param_1[2];
    *(int **)(*piVar2 + 4) = piVar3;
    if (piVar3 != (int *)0x0) goto LAB_0163aa68;
LAB_0163aa9c:
    if (*(int **)(iVar5 + 0x14) != piVar2) goto LAB_0163aaa8;
    *(int *)(iVar5 + 0x14) = *piVar2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
LAB_0163aaa8:
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        return;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
  return;
}

