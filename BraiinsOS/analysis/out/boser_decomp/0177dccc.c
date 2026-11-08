// FUN_0177dccc @ 0177dccc size=140 calls_out=4 calls_in=1
// strings: 

void FUN_0177dccc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  FUN_01a64e38(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013b86b8(*param_1);
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017856cc(param_1[1]);
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_017721f4(param_1 + 2);
  return;
}

