// FUN_011935a0 @ 011935a0 size=148 calls_out=3 calls_in=0
// strings: 

void FUN_011935a0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_1 != 0) && (*(char *)((int)param_1 + 0x35) == '\x03')) {
    piVar2 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[3]);
    }
    piVar2 = (int *)param_1[1];
    *(undefined1 *)(param_1 + 0xd) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[1],param_1[2]);
    }
  }
  FUN_0119557c(param_1 + 0xe);
  return;
}

