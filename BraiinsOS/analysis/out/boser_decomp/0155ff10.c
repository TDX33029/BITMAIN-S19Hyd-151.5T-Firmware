// FUN_0155ff10 @ 0155ff10 size=92 calls_out=1 calls_in=48
// strings: 

void FUN_0155ff10(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x18;
  if (*param_1 == -0x80000000) {
    iVar4 = 0x10;
  }
  piVar2 = *(int **)((int)param_1 + iVar4);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670fb0(*(undefined4 *)((int)param_1 + iVar4));
    }
  }
  *(undefined4 *)((int)param_1 + iVar4) = param_2;
  return;
}

