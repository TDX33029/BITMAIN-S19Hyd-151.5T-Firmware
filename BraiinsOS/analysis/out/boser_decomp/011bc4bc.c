// FUN_011bc4bc @ 011bc4bc size=188 calls_out=6 calls_in=2
// strings: 

void FUN_011bc4bc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[10] != -0x80000000) {
    piVar4 = param_1 + 4;
    FUN_00e7b950(piVar4);
    piVar2 = (int *)*piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180b88(*piVar4);
    }
    FUN_007cde2c(param_1 + 7);
    FUN_006f66dc(param_1 + 10);
    return;
  }
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    return;
  }
  param_1 = (int *)*param_1;
  piVar2 = param_1;
  do {
    iVar3 = iVar3 + -1;
    if (*piVar2 == 1) {
      FUN_00db19c4(piVar2 + 2);
    }
    piVar2 = piVar2 + 0x16;
  } while (iVar3 != 0);
  thunk_FUN_01be4678(param_1);
  return;
}

