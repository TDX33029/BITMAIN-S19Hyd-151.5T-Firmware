// FUN_00724628 @ 00724628 size=144 calls_out=5 calls_in=1
// strings: 

void FUN_00724628(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  FUN_007244d4();
  FUN_00724680(param_1 + 0x118);
  FUN_007246e8(param_1 + 0x130);
  iVar2 = *(int *)(param_1 + 0x14c);
  if ((*(char *)(param_1 + 0x148) != 'O') || (iVar2 == 0)) {
    return;
  }
  piVar3 = *(int **)(iVar2 + 0x118);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0071ce80();
  }
  FUN_007244d4(iVar2);
  thunk_FUN_01be4678(iVar2);
  return;
}

