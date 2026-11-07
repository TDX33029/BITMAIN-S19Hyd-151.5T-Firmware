// FUN_00a09274 @ 00a09274 size=176 calls_out=3 calls_in=2
// strings: 

void FUN_00a09274(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x15) == '\x03') {
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    FUN_00aa0a58(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),1);
    return;
  }
  if (*(char *)(param_1 + 0x15) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x30);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x2c);
  }
  if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_00aa0a58(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),1);
  }
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078e66c(*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_00aa13c0(*(undefined4 *)(param_1 + 0xc));
  return;
}

