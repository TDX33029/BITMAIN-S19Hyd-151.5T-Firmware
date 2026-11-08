// FUN_0170563c @ 0170563c size=164 calls_out=2 calls_in=1
// strings: 

void FUN_0170563c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1 + -2;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(*param_1);
  }
  if (piVar3 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = param_1 + -1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar3);
    return;
  }
  return;
}

