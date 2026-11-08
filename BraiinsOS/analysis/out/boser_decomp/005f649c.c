// FUN_005f649c @ 005f649c size=148 calls_out=2 calls_in=21
// strings: 

void FUN_005f649c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x3c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db648(*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) != -0x7fffffff) {
    FUN_019bb7e0();
    return;
  }
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
                    /* WARNING: Could not recover jumptable at 0x005f652c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar2[2] + 0x10))(piVar2);
  return;
}

