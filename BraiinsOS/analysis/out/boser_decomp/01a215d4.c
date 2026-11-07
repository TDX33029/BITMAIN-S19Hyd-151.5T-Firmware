// FUN_01a215d4 @ 01a215d4 size=276 calls_out=8 calls_in=1
// strings: 

void FUN_01a215d4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x176)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x16c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x16c));
    }
    FUN_019fb37c(param_1 + 0x20);
    FUN_0193c71c(param_1 + 0x170);
    return;
  default:
    return;
  case 3:
    FUN_019faf5c(param_1 + 0x178);
    goto LAB_01a216b0;
  case 4:
    cVar1 = *(char *)(param_1 + 0x1a4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x1a0);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x180);
    }
    break;
  case 5:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x17c));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164));
  }
  if (*(char *)(param_1 + 0x174) != '\0') {
    FUN_019fb3fc(param_1 + 0x30);
  }
  *(undefined1 *)(param_1 + 0x174) = 0;
LAB_01a216b0:
  *(undefined1 *)(param_1 + 0x175) = 0;
  FUN_0193c71c(param_1 + 0x15c);
  FUN_019fb37c(param_1);
  piVar2 = *(int **)(param_1 + 0x158);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x158));
    return;
  }
  return;
}

