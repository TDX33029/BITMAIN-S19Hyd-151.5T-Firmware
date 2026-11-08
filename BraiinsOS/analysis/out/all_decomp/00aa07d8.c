// FUN_00aa07d8 @ 00aa07d8 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_00aa07d8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x30) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x28);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x24);
    }
    if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1c) != 0)) {
      FUN_00aa190c(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1);
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
    FUN_00aa7b14(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

