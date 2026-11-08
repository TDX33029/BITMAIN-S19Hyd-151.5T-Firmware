// FUN_00f672b0 @ 00f672b0 size=124 calls_out=2 calls_in=0
// strings: 

void FUN_00f672b0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x5c4) == '\0') {
    piVar2 = *(int **)(param_1 + 0x5c0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x5c4) != '\x03') {
      return;
    }
    FUN_00f68740(param_1);
    piVar2 = *(int **)(param_1 + 0x5c0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181f8c(*(undefined4 *)(param_1 + 0x5c0));
    return;
  }
  return;
}

