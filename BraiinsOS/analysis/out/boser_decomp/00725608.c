// FUN_00725608 @ 00725608 size=44 calls_out=3 calls_in=1
// strings: 

void FUN_00725608(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_007244d4();
  FUN_00725660(param_1 + 0x118);
  FUN_007256bc(param_1 + 0x130);
  iVar3 = *(int *)(param_1 + 0x14c);
  if ((*(char *)(param_1 + 0x148) != 'O') || (iVar3 == 0)) {
    return;
  }
  piVar2 = *(int **)(iVar3 + 0x118);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0071ce80();
  }
  FUN_007244d4(iVar3);
  thunk_FUN_01be4678(iVar3);
  return;
}

