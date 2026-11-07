// FUN_01a21460 @ 01a21460 size=236 calls_out=4 calls_in=0
// strings: 

void FUN_01a21460(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a39294(*(undefined4 *)(param_1 + 0x20));
    }
    FUN_0193d87c(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x4c) == '\x03') {
      FUN_01a17e08(param_1 + 0x34);
      if (*(int *)(param_1 + 0x38) != 0) {
        (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(*(undefined4 *)(param_1 + 0x3c));
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x6c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x68);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x48);
    }
  }
  FUN_0193d87c(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a39294(*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}

