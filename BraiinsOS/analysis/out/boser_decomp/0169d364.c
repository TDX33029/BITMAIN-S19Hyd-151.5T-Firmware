// FUN_0169d364 @ 0169d364 size=140 calls_out=3 calls_in=1
// strings: 

void FUN_0169d364(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),4,4);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a4),4,4);
  FUN_0165940c(param_1 + 0x160);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x180),4,4);
  if (*(char *)(param_1 + 0x4c) == '\x02') {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    return;
  }
  return;
}

