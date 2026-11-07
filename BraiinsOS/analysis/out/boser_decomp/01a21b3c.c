// FUN_01a21b3c @ 01a21b3c size=232 calls_out=7 calls_in=1
// strings: 

void FUN_01a21b3c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x4c)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x30));
    }
    FUN_019fafc0(param_1);
    FUN_0193c71c(param_1 + 0x34);
    return;
  default:
    return;
  case 3:
    FUN_019faf5c(param_1 + 0x50);
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x7c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x78);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x58);
    }
    break;
  case 5:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  FUN_0193c71c(param_1 + 0x3c);
  FUN_019fafc0(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}

