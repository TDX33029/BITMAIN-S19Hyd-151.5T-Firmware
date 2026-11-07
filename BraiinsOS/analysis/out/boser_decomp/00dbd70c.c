// FUN_00dbd70c @ 00dbd70c size=180 calls_out=3 calls_in=0
// strings: 

void FUN_00dbd70c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(char *)(param_1 + 0x49) == '\x03') {
      FUN_00dbda10(param_1);
      piVar2 = *(int **)(param_1 + 0x40);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_006c8c18(*(undefined4 *)(param_1 + 0x40));
          return;
        }
      }
    }
    return;
  }
  piVar2 = *(int **)(param_1 + 0x40);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(*(undefined4 *)(param_1 + 0x40));
    }
  }
  if (*(char *)(param_1 + 0x28) == '\x06') {
    return;
  }
  FUN_00db4764((char *)(param_1 + 0x28));
  return;
}

