// FUN_01180b88 @ 01180b88 size=156 calls_out=3 calls_in=8
// strings: 

void FUN_01180b88(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 8);
  FUN_00e7c4f0(puVar4);
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0x10));
  }
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fa78(*puVar4);
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

