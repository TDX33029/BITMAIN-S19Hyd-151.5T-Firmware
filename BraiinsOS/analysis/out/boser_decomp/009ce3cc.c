// FUN_009ce3cc @ 009ce3cc size=148 calls_out=3 calls_in=2
// strings: 

void FUN_009ce3cc(char *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    piVar3 = (int *)(param_1 + 8);
    if (*piVar3 != 3) {
      FUN_00e7c3bc(piVar3);
    }
    *piVar3 = 3;
  }
  FUN_01650a90(param_1);
  if (*param_1 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = '\0';
        return;
      }
    } while (*param_1 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(param_1);
  return;
}

