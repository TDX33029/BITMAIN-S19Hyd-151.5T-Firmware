// FUN_00d94d0c @ 00d94d0c size=224 calls_out=5 calls_in=1
// strings: 

void FUN_00d94d0c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x734);
  if (cVar1 == '\0') {
    FUN_00d95578(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00d94e5c(param_1 + 0x738);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x760) == '\x03') {
      if (*(char *)(param_1 + 0x756) == '\x04') {
        if (*(int *)(param_1 + 0x758) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x75c),1);
        }
        FUN_00e44900(*(undefined4 *)(param_1 + 0x74c));
      }
      else if ((*(char *)(param_1 + 0x756) == '\x03') && (*(int *)(param_1 + 0x758) != 0)) {
        FUN_00e44660(*(int *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x75c),1);
      }
    }
  }
  piVar3 = *(int **)(param_1 + 0x730);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f324(*(undefined4 *)(param_1 + 0x730));
  }
  *(undefined2 *)(param_1 + 0x735) = 0;
  *(undefined1 *)(param_1 + 0x737) = 0;
  return;
}

