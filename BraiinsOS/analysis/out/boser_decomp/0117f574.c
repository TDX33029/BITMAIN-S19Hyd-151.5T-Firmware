// FUN_0117f574 @ 0117f574 size=144 calls_out=5 calls_in=2
// strings: 

void FUN_0117f574(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0117f6a8(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00711b94(*(undefined4 *)(param_1 + 0x28));
  }
  FUN_0117f768(param_1 + 0x38);
  FUN_0117f7e8(param_1 + 0x68);
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

