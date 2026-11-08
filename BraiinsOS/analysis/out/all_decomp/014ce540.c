// FUN_014ce540 @ 014ce540 size=324 calls_out=5 calls_in=0
// strings: 

void FUN_014ce540(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x9e8) == '\0') {
    piVar3 = *(int **)(param_1 + 0x9b0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010c353c(*(undefined4 *)(param_1 + 0x9b0));
    }
    piVar3 = *(int **)(param_1 + 0x9b4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x9b4),*(undefined4 *)(param_1 + 0x9b8));
    }
    FUN_0145d5e0(param_1 + 0x9bc);
    return;
  }
  if (*(char *)(param_1 + 0x9e8) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x62);
  if (cVar1 == '\x04') {
    FUN_014595f8(param_1 + 0x68);
LAB_014ce60c:
    *(undefined1 *)(param_1 + 99) = 0;
    iVar4 = param_1 + 0x30;
  }
  else {
    if (cVar1 == '\x03') {
      FUN_014590b8(param_1 + 0x74);
      goto LAB_014ce60c;
    }
    iVar4 = param_1;
    if (cVar1 != '\0') goto LAB_014ce61c;
  }
  FUN_0145d5e0(iVar4);
LAB_014ce61c:
  piVar3 = *(int **)(param_1 + 0x9b0);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010c353c(*(undefined4 *)(param_1 + 0x9b0));
  }
  piVar3 = *(int **)(param_1 + 0x9b4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x9b4),*(undefined4 *)(param_1 + 0x9b8));
    return;
  }
  return;
}

