// FUN_00f2db7c @ 00f2db7c size=308 calls_out=7 calls_in=2
// strings: 

void FUN_00f2db7c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0xc9);
  if (cVar1 == '\x03') {
    FUN_00f2ddc8(param_1 + 0xd0);
  }
  else {
    if (cVar1 == '\x04') {
      FUN_00e1059c(param_1 + 0xd0);
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_00f2de40(param_1 + 0xe0);
      *(undefined1 *)(param_1 + 199) = 0;
    }
    if (*(char *)(param_1 + 0xc4) != '\0') {
      FUN_00d38310(param_1 + 0x58);
    }
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  *(undefined1 *)(param_1 + 200) = 0;
  if (*(char *)(param_1 + 0xc5) != '\0') {
    piVar3 = *(int **)(param_1 + 0xbc);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar3 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0xbc));
    }
  }
  *(undefined1 *)(param_1 + 0xc5) = 0;
  if (*(char *)(param_1 + 0xc6) != '\0') {
    piVar3 = *(int **)(param_1 + 0xb8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(*(undefined4 *)(param_1 + 0xb8));
    }
  }
  piVar3 = *(int **)(param_1 + 0xb4);
  *(undefined1 *)(param_1 + 0xc6) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177f84(*(undefined4 *)(param_1 + 0xb4));
    return;
  }
  return;
}

