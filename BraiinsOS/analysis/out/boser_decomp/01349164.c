// FUN_01349164 @ 01349164 size=152 calls_out=2 calls_in=4
// strings: 

void FUN_01349164(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    (**(code **)(*(int *)(param_1 + 0x30) + 0xc))(*(undefined4 *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x40) != -1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x40) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
    }
  }
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

