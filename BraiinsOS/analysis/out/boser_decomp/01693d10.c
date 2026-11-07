// FUN_01693d10 @ 01693d10 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_01693d10(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01693c9c(param_1 + 0x138);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),4,4);
  piVar2 = *(int **)(param_1 + 0x134);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9834(*(undefined4 *)(param_1 + 0x134));
    return;
  }
  return;
}

