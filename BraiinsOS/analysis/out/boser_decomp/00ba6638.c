// FUN_00ba6638 @ 00ba6638 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_00ba6638(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xa4);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x90);
  }
  if (bVar4 && cVar1 == '\x03') {
    FUN_00ba638c(param_1 + 0x38);
  }
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

