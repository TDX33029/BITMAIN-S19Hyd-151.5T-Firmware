// FUN_01406cb8 @ 01406cb8 size=104 calls_out=2 calls_in=5
// strings: 

void FUN_01406cb8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  piVar3 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a97c(param_1[4]);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

