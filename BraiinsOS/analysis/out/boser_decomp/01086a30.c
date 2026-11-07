// FUN_01086a30 @ 01086a30 size=156 calls_out=5 calls_in=3
// strings: 

void FUN_01086a30(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x119) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x148);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x144);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x124);
    }
  }
  else {
    if (*(char *)(param_1 + 0x119) != '\x04') {
      return;
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0x11c),*(undefined4 *)(param_1 + 0x120));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
  }
  piVar2 = *(int **)(param_1 + 0x100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38f34(*(undefined4 *)(param_1 + 0x100));
  }
  FUN_01086b44(param_1 + 4);
  *(undefined1 *)(param_1 + 0x118) = 0;
  return;
}

