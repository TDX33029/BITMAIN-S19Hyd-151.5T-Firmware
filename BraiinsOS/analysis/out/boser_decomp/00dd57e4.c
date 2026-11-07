// FUN_00dd57e4 @ 00dd57e4 size=168 calls_out=3 calls_in=0
// strings: 

void FUN_00dd57e4(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0xf9);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x05') {
      if (*(int *)(param_1 + 0x100) != 3 || *(int *)(param_1 + 0x104) != 0) {
        FUN_00dbddf8();
      }
      *(undefined1 *)(param_1 + 0xf8) = 0;
      goto LAB_00dd5854;
    }
    if (cVar1 != '\x04') {
      return;
    }
    if (*(int *)(param_1 + 0x100) != 3 || *(int *)(param_1 + 0x104) != 0) {
      FUN_00dbddf8();
    }
  }
  FUN_0175d85c(param_1 + 0xa0);
LAB_00dd5854:
  piVar3 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    return;
  }
  return;
}

