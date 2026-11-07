// FUN_0170f284 @ 0170f284 size=152 calls_out=5 calls_in=3
// strings: 

void FUN_0170f284(int param_1)

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
      FUN_0170f000(iStack_20 + 8,param_1);
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
      FUN_017045b0(piVar2);
      return;
    }
  }
  return;
}

