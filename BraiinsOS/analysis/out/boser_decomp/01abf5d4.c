// FUN_01abf5d4 @ 01abf5d4 size=140 calls_out=3 calls_in=2
// strings: 

void FUN_01abf5d4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),4,4);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac),4,4);
  FUN_0165940c(param_1 + 0x168);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x188),4,4);
  if (*(char *)(param_1 + 0x54) == '\x02') {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  return;
}

