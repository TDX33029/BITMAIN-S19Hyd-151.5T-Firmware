// FUN_00b965c4 @ 00b965c4 size=392 calls_out=6 calls_in=2
// strings: 

void FUN_00b965c4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x255)) {
  case 0:
    FUN_00b9621c(param_1 + 0x18);
    FUN_00b96170(param_1 + 0x30);
    piVar2 = *(int **)(param_1 + 0x238);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(*(undefined4 *)(param_1 + 0x238));
      return;
    }
    return;
  default:
    goto switchD_00b965e0_caseD_1;
  case 3:
    FUN_00b963fc(param_1 + 0x260);
    goto LAB_00b966f0;
  case 4:
    cVar1 = *(char *)(param_1 + 0x2b4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x2a8);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x2ac),*(undefined4 *)(param_1 + 0x2b0));
    }
    if ((*(char *)(param_1 + 800) == '\0') && (*(int *)(param_1 + 0x2c8) != -0x7fffffff)) {
      FUN_00b96444(param_1 + 0x2c0);
    }
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x2b8);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x2ac);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4));
    }
    FUN_00b96444(param_1 + 0x1e0);
  }
  piVar2 = *(int **)(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x259) = 0;
  *(undefined2 *)(param_1 + 599) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8c18(*(undefined4 *)(param_1 + 0x250));
  }
  *(undefined1 *)(param_1 + 0x25a) = 0;
  FUN_00b96170(param_1 + 0x120);
LAB_00b966f0:
  piVar2 = *(int **)(param_1 + 0x244);
  *(undefined2 *)(param_1 + 0x25b) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8c18(*(undefined4 *)(param_1 + 0x244));
  }
  *(undefined1 *)(param_1 + 0x25d) = 0;
  FUN_00b9621c(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x25e) = 0;
switchD_00b965e0_caseD_1:
  return;
}

