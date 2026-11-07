// FUN_01815f6c @ 01815f6c size=152 calls_out=5 calls_in=2
// strings: 

void FUN_01815f6c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  undefined1 local_1c;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (piVar2 = (int *)FUN_01785780(), piVar2 != (int *)0x0)) {
    FUN_01933ff0(&iStack_24,piVar2 + 2);
    if (iStack_24 == 0) {
      FUN_01815d9c(iStack_20 + 8,param_1);
    }
    FUN_00a97e8c(iStack_20,local_1c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017844e8(piVar2);
      return;
    }
  }
  return;
}

