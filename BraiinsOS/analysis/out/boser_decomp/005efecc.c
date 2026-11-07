// FUN_005efecc @ 005efecc size=144 calls_out=4 calls_in=6
// strings: 

void FUN_005efecc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x53) != '\0') {
    if (*(char *)(param_1 + 0x53) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x1c) == '\x03') {
      FUN_009cdcac(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x52) = 0;
    FUN_0193d87c(param_1 + 0x20);
    FUN_005f797c(param_1 + 0x44);
    *(undefined1 *)(param_1 + 0x51) = 0;
    return;
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195b288(*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  return;
}

