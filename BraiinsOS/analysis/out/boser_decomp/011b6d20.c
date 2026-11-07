// FUN_011b6d20 @ 011b6d20 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_011b6d20(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    piVar2 = *(int **)(param_1 + 0xb4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011827d4(*(undefined4 *)(param_1 + 0xb4));
    }
  }
  else {
    if (*(char *)(param_1 + 0xb8) != '\x03') {
      return;
    }
    FUN_011b8608(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_01aae24c((int *)(param_1 + 8));
  return;
}

