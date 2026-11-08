// FUN_00fe14b0 @ 00fe14b0 size=452 calls_out=5 calls_in=1
// strings: 

void FUN_00fe14b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x48)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 8);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_00fe1668;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x58) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
    goto LAB_00fe164c;
  case 4:
    if (*(char *)(param_1 + 0x80) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x7c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x58);
      }
    }
    goto LAB_00fe161c;
  case 5:
    if (*(char *)(param_1 + 0x80) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x7c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x58);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x80) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x7c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x58);
      }
    }
    goto LAB_00fe1604;
  case 7:
    if (*(char *)(param_1 + 0x80) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x7c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x58);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x40),1);
LAB_00fe1604:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x38),1);
    break;
  case 8:
    if (*(char *)(param_1 + 0x80) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x7c);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x78);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x58);
      }
    }
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x30),1);
LAB_00fe161c:
  piVar2 = *(int **)(param_1 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*(undefined4 *)(param_1 + 0x2c));
  }
LAB_00fe164c:
  puVar4 = (undefined4 *)(param_1 + 0x14);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_00fe1668:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(*puVar4);
    return;
  }
  return;
}

