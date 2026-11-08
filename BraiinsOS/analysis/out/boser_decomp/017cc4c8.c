// FUN_017cc4c8 @ 017cc4c8 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_017cc4c8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017cbb7c(param_1 + 0x10);
  FUN_019ddccc(param_1);
  piVar2 = *(int **)(param_1 + 0x1c0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db004(*(undefined4 *)(param_1 + 0x1c0));
    return;
  }
  return;
}

