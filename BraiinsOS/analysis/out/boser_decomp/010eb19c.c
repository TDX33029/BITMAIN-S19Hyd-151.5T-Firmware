// FUN_010eb19c @ 010eb19c size=136 calls_out=4 calls_in=2
// strings: 

void FUN_010eb19c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x18));
      return;
    }
    return;
  }
  if (cVar1 == '\x03') {
    FUN_010eb238(param_1 + 0x30);
    return;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x60) == '\x03') {
    FUN_00b71be0(param_1 + 0x4c);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  return;
}

