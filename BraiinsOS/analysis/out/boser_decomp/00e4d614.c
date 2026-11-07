// FUN_00e4d614 @ 00e4d614 size=288 calls_out=7 calls_in=1
// strings: 

void FUN_00e4d614(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0xb0)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x98);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_00e4d738;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xc4) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
    }
    goto LAB_00e4d71c;
  case 4:
    FUN_00bba254(param_1 + 0xb8);
    goto LAB_00e4d6ec;
  case 5:
    if (*(char *)(param_1 + 0xec) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe8);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xe4);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xc4);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x10c) == '\x03') {
      FUN_00e1003c(param_1 + 0xb8);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x90),1);
LAB_00e4d6ec:
  piVar2 = *(int **)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*(undefined4 *)(param_1 + 0xa0));
  }
LAB_00e4d71c:
  puVar4 = (undefined4 *)(param_1 + 0x9c);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_00e4d738:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*puVar4);
    return;
  }
  return;
}

