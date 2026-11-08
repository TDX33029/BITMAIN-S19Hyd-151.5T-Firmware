// FUN_01406170 @ 01406170 size=140 calls_out=2 calls_in=2
// strings: 

void FUN_01406170(short *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    piVar2 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    iVar4 = 0xc;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(*(undefined4 *)(param_1 + 0xc));
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    iVar4 = 8;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a97c(*(undefined4 *)(param_1 + 2));
    }
  }
  FUN_01406bcc(*(undefined4 *)((int)param_1 + iVar4));
  return;
}

