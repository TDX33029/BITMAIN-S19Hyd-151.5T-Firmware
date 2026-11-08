// FUN_011786ec @ 011786ec size=108 calls_out=3 calls_in=0
// strings: 

void FUN_011786ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  (**(code **)(*(int *)(param_1 + 0x40) + 0x10))
            (param_1 + 0x4c,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  FUN_01139cd4(param_1);
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    return;
  }
  return;
}

