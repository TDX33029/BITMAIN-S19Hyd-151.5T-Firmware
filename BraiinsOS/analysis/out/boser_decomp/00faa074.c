// FUN_00faa074 @ 00faa074 size=104 calls_out=3 calls_in=2
// strings: 

void FUN_00faa074(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x168));
  FUN_005fbb50(param_1);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x17c));
  piVar2 = *(int **)(param_1 + 0x188);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*(undefined4 *)(param_1 + 0x188));
    return;
  }
  return;
}

