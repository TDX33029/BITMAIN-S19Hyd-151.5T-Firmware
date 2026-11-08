// FUN_00e3a348 @ 00e3a348 size=200 calls_out=6 calls_in=2
// strings: 

void FUN_00e3a348(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 100)) {
  case 3:
    if (*(char *)(param_1 + 0x74) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
      return;
    }
    return;
  case 4:
    FUN_00bba254(param_1 + 0x68);
    goto LAB_00e3a3ec;
  case 5:
    if (*(char *)(param_1 + 0x9c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x98);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x94);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x74);
      }
    }
    break;
  case 6:
    FUN_00e3bf2c(param_1 + 0x68);
    break;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 0x65) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x40),1);
LAB_00e3a3ec:
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*(undefined4 *)(param_1 + 0x50));
    return;
  }
  return;
}

