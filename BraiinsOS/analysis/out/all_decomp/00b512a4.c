// FUN_00b512a4 @ 00b512a4 size=156 calls_out=3 calls_in=2
// strings: 

void FUN_00b512a4(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
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
    piVar3 = (int *)*param_1;
    FUN_00c09028(piVar3);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(*param_1);
      return;
    }
  }
  return;
}

