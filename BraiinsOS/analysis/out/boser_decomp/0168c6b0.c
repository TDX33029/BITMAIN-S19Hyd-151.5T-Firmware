// FUN_0168c6b0 @ 0168c6b0 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_0168c6b0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x13c);
  FUN_016c2920(uVar4,*(undefined4 *)(param_1 + 0x140));
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x138),uVar4,4,0x14);
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

