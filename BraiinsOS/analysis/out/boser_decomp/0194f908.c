// FUN_0194f908 @ 0194f908 size=280 calls_out=7 calls_in=1
// strings: 

void FUN_0194f908(int param_1)

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
    goto LAB_0194fa1c;
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
    goto LAB_0194fa00;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
    break;
  case 5:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x3f0),*(undefined4 *)(param_1 + 0x3f4));
    if ((*(short *)(param_1 + 0x434) == 0x255) && (3 < *(uint *)(param_1 + 0x418))) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x41c),*(undefined4 *)(param_1 + 0x420));
    }
    FUN_01a2affc(param_1 + 0x338);
    FUN_0193c420(param_1 + 0x158);
    if (*(int *)(param_1 + 0x10) != 3 || *(int *)(param_1 + 0x14) != 0) {
      *(undefined1 *)(param_1 + 0x154) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x154) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
LAB_0194fa00:
  piVar2 = *(int **)(param_1 + 0x150);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_0194fa1c:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x150));
    return;
  }
  return;
}

