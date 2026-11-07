// FUN_01a00bdc @ 01a00bdc size=176 calls_out=4 calls_in=2
// strings: 

void FUN_01a00bdc(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x34);
  if (cVar1 == '\0') {
    piVar2 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 100);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x60);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x40);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_01139b38(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      FUN_019f8c54(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    }
    piVar2 = *(int **)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

