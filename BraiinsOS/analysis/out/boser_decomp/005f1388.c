// FUN_005f1388 @ 005f1388 size=936 calls_out=9 calls_in=17
// strings: 

void FUN_005f1388(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0xf5)) {
  case 0:
    FUN_005fb2fc(param_1 + 0x50);
    return;
  default:
    goto switchD_005f13a4_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0x124);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x120);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x100);
    }
    break;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x124);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x120);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x100);
    }
    break;
  case 6:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x124);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x120);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x100);
    }
    break;
  case 8:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
    break;
  case 9:
    cVar1 = *(char *)(param_1 + 0x124);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x120);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x100);
    }
    break;
  case 10:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
    break;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x124);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x120);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x100);
    }
    break;
  case 0xc:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_019f8c54(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
    break;
  case 0xd:
    cVar1 = *(char *)(param_1 + 0x124);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x120);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x100);
    }
    break;
  case 0xe:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
    break;
  case 0xf:
    cVar1 = *(char *)(param_1 + 0x124);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x120);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x100);
    }
    break;
  case 0x10:
    FUN_0193f1b0(param_1 + 0xf8);
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
  }
  piVar2 = *(int **)(param_1 + 0x94);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a39504(*(undefined4 *)(param_1 + 0x94));
  }
  piVar2 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x90));
  }
  piVar2 = *(int **)(param_1 + 0x8c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x8c));
  }
  piVar2 = *(int **)(param_1 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x88));
  }
  piVar2 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x84));
  }
  piVar2 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x80));
  }
  piVar2 = *(int **)(param_1 + 0x7c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x7c));
  }
  piVar2 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38f34(*(undefined4 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0xec) != '\0') {
    FUN_005fb2fc(param_1 + 0x28);
  }
  piVar2 = *(int **)(param_1 + 4);
  *(undefined1 *)(param_1 + 0xec) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 4));
  }
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x24));
    }
  }
  *(undefined4 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
switchD_005f13a4_caseD_1:
  return;
}

