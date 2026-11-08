// FUN_009ca070 @ 009ca070 size=232 calls_out=6 calls_in=1
// strings: 

void FUN_009ca070(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x14) == 0) {
      return;
    }
    FUN_009c95cc(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),1);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_009c9b0c(param_1 + 0x14);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0xa4) == '\x03') {
      if (*(int *)(param_1 + 0x98) != 0) {
        FUN_009c9c18(*(int *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),1);
      }
      *(undefined1 *)(param_1 + 0xa5) = 0;
    }
    FUN_008e7734(param_1 + 0x28);
    piVar3 = *(int **)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    }
  }
  piVar3 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

