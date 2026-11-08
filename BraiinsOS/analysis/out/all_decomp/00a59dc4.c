// FUN_00a59dc4 @ 00a59dc4 size=312 calls_out=4 calls_in=0
// strings: 

void FUN_00a59dc4(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x28) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  bVar6 = cVar1 == '\x03';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x5c);
  }
  if (!bVar6 || cVar1 != '\x03') {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x3c);
  pcVar4 = (char *)(iVar5 + 0xc);
  if (*pcVar4 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar6) goto LAB_00a59e1c;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00a59e1c:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  piVar2 = (int *)(param_1 + 0x40);
  if (*piVar2 == 0) {
    if (*(int **)(iVar5 + 0x10) != piVar2) goto LAB_00a59e8c;
    piVar3 = *(int **)(param_1 + 0x44);
    *(int **)(iVar5 + 0x10) = piVar3;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x44);
    *(int **)(*piVar2 + 4) = piVar3;
  }
  if (piVar3 == (int *)0x0) {
    if (*(int **)(iVar5 + 0x14) != piVar2) goto LAB_00a59e8c;
    *(int *)(iVar5 + 0x14) = *piVar2;
  }
  else {
    *piVar3 = *piVar2;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
LAB_00a59e8c:
  FUN_01282570(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar6) {
        *pcVar4 = '\0';
        goto LAB_00a59ecc;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_00a59ecc:
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a59ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(*(undefined4 *)(param_1 + 0x4c));
  return;
}

