// FUN_00ea7458 @ 00ea7458 size=152 calls_out=3 calls_in=0
// strings: 

void FUN_00ea7458(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x58);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fd4c(*(undefined4 *)(param_1 + 0x58));
    }
    FUN_005f11d4(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x5c) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  piVar2 = *(int **)(param_1 + 0x58);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fd4c(*(undefined4 *)(param_1 + 0x58));
    return;
  }
  return;
}

