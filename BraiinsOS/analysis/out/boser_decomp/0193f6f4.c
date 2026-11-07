// FUN_0193f6f4 @ 0193f6f4 size=220 calls_out=4 calls_in=2
// strings: 

void FUN_0193f6f4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x155)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x150);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_0193f7cc;
  default:
    return;
  case 3:
    cVar1 = *(char *)(param_1 + 0x184);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x180);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x160);
    }
    goto LAB_0193f7b0;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
    break;
  case 5:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
    if (*(int *)(param_1 + 0x10) != 3 || *(int *)(param_1 + 0x14) != 0) {
      *(undefined1 *)(param_1 + 0x154) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x154) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
LAB_0193f7b0:
  piVar2 = *(int **)(param_1 + 0x150);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_0193f7cc:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x150));
    return;
  }
  return;
}

