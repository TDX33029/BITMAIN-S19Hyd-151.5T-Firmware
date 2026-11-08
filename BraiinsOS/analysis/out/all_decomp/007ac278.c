// FUN_007ac278 @ 007ac278 size=160 calls_out=6 calls_in=0
// strings: 

void FUN_007ac278(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0xd8);
  if (cVar1 == '\0') {
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_007aee4c(param_1 + 0xf0);
    piVar3 = *(int **)(param_1 + 0xe0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*(undefined4 *)(param_1 + 0xe0));
      *(undefined1 *)(param_1 + 0xd9) = 0;
      return;
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_007b0ec8(param_1 + 0xe0);
  }
  *(undefined1 *)(param_1 + 0xd9) = 0;
  return;
}

