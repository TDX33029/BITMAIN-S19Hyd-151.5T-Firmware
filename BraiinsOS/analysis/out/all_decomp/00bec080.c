// FUN_00bec080 @ 00bec080 size=164 calls_out=4 calls_in=2
// strings: 

void FUN_00bec080(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x10c) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xfc);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xf4);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0081c020(param_1 + 0xa0);
    }
    FUN_00c822ec(*(undefined4 *)(param_1 + 0x54));
  }
  else if ((*(char *)(param_1 + 0x58) == '\x03') && (*(int *)(param_1 + 0x60) != 0)) {
    FUN_00c8204c(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),1);
  }
  piVar2 = *(int **)(param_1 + 0x108);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*(undefined4 *)(param_1 + 0x108));
    return;
  }
  return;
}

