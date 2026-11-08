// FUN_006ae20c @ 006ae20c size=148 calls_out=4 calls_in=0
// strings: 

void FUN_006ae20c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
    return;
  }
  FUN_006ad210(param_1);
  piVar4 = (int *)(param_1 + 300);
  FUN_006adf40(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105aee4(*piVar4);
    }
  }
  if (*(int *)(param_1 + 0x68) == -0x80000000) {
    return;
  }
  FUN_006ade10((int *)(param_1 + 0x68));
  return;
}

