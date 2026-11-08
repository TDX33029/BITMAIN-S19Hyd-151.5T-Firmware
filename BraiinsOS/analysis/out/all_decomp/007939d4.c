// FUN_007939d4 @ 007939d4 size=132 calls_out=2 calls_in=1
// strings: 

void FUN_007939d4(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[3]);
  }
  if ((*param_1 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[4]);
    return;
  }
  return;
}

