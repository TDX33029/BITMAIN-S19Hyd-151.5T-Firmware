// FUN_019ed788 @ 019ed788 size=232 calls_out=4 calls_in=2
// strings: 

int * FUN_019ed788(char *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x10) == 0) {
    return (int *)0x0;
  }
  if (*param_1 == '\0') {
    bVar4 = (bool)hasExclusiveAccess(param_1);
    if (bVar4) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019ed7c0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(param_1);
LAB_019ed7c0:
  FUN_0165098c(param_1);
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  DataMemoryBarrier(0xb);
  bVar4 = iVar2 != 0;
  if (bVar4) {
    iVar2 = iVar2 + -1;
  }
  *piVar1 = iVar2;
  if (bVar4) {
    piVar1 = *(int **)(param_1 + 4);
  }
  piVar3 = (int *)0x0;
  if (bVar4 && piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 == 0) {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
    }
    piVar1[1] = 0;
    piVar3 = piVar1;
  }
  FUN_01650a90(param_1);
  if (*param_1 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar4 = (bool)hasExclusiveAccess(param_1);
      if (bVar4) {
        *param_1 = '\0';
        return piVar3;
      }
    } while (*param_1 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(param_1);
  return piVar3;
}

