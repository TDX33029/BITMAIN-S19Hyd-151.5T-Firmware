// FUN_010953b8 @ 010953b8 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_010953b8(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x10);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (!bVar4 || cVar1 != '\0') {
    return;
  }
  piVar3 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar4 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar4);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

