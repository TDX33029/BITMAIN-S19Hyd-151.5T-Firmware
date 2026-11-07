// FUN_0084e8d8 @ 0084e8d8 size=124 calls_out=2 calls_in=11
// strings: 

void FUN_0084e8d8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x65) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x44) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x40);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x3c);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1c);
    }
  }
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5f128(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}

