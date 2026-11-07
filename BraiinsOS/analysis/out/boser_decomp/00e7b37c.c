// FUN_00e7b37c @ 00e7b37c size=128 calls_out=2 calls_in=2
// strings: 

void FUN_00e7b37c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  while (*(int *)(param_1 + 4) != 0) {
    piVar2 = (int *)FUN_00e7b424(param_1);
    piVar4 = piVar2 + 0x13;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
    piVar2[2] = 0;
    piVar2[3] = 0;
    if ((char)iVar3 == '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01180524();
      }
    }
  }
  return;
}

