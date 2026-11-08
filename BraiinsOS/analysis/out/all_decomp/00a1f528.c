// FUN_00a1f528 @ 00a1f528 size=188 calls_out=3 calls_in=6
// strings: 

void FUN_00a1f528(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  cVar2 = *(byte *)(param_1 + 1) - 2;
  if (*(byte *)(param_1 + 1) < 2) {
    cVar2 = '\x02';
  }
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      piVar3 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14(*param_1);
        return;
      }
      return;
    }
    piVar5 = (int *)*param_1;
    piVar3 = piVar5 + 0x11;
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00a8cda4(piVar5 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(*param_1);
      return;
    }
  }
  return;
}

