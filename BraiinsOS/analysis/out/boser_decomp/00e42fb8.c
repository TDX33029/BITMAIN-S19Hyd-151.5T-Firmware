// FUN_00e42fb8 @ 00e42fb8 size=420 calls_out=11 calls_in=1
// strings: 

void FUN_00e42fb8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0xc1)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x98);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_00e4316c;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xd4) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
    }
    goto LAB_00e43150;
  case 4:
    FUN_00bba254(param_1 + 200);
    goto LAB_00e43120;
  case 5:
    if (*(char *)(param_1 + 0xfc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xf8);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xf4);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xd4);
      }
    }
    goto LAB_00e43114;
  case 6:
    if (*(char *)(param_1 + 0x11c) == '\x03') {
      FUN_00e1003c(param_1 + 200);
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x188) == '\x03') {
      FUN_00df984c(param_1 + 0xcc);
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x67c) == '\x03') {
      if (*(char *)(param_1 + 0x670) == '\x03') {
        iVar3 = param_1 + 0x3a8;
      }
      else {
        if (*(char *)(param_1 + 0x670) != '\0') goto LAB_00e430ec;
        iVar3 = param_1 + 0xe0;
      }
      FUN_00df9ef8(iVar3);
    }
LAB_00e430ec:
    FUN_0084ec48(param_1 + 0xb4);
    break;
  case 9:
    if (*(char *)(param_1 + 0x11c) == '\x03') {
      FUN_00e1003c(param_1 + 200);
    }
  }
  bVar5 = *(uint *)(param_1 + 0x58) < 2;
  if ((uint)-*(int *)(param_1 + 0x5c) < (uint)bVar5) {
    FUN_00a210b0((uint *)(param_1 + 0x58),-(*(int *)(param_1 + 0x5c) + (uint)!bVar5));
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
LAB_00e43114:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x30),1);
LAB_00e43120:
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
LAB_00e43150:
  puVar4 = (undefined4 *)(param_1 + 0x9c);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_00e4316c:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*puVar4);
    return;
  }
  return;
}

