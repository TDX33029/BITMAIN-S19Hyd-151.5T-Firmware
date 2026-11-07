// FUN_010becf4 @ 010becf4 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_010becf4(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x130);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x124);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x124));
    }
    FUN_00eca9c4(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_010bee10(param_1 + 0x138);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
  }
  piVar3 = *(int **)(param_1 + 300);
  *(undefined2 *)(param_1 + 0x131) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 300));
    return;
  }
  return;
}

