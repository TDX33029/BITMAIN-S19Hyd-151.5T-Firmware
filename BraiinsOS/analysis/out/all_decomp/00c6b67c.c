// FUN_00c6b67c @ 00c6b67c size=124 calls_out=2 calls_in=0
// strings: 

void FUN_00c6b67c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    puVar2 = (undefined4 *)(param_1 + 0x50);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\x03') {
      return;
    }
    FUN_00a07b4c();
    puVar2 = (undefined4 *)(param_1 + 0x54);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f3984(*puVar2);
    return;
  }
  return;
}

