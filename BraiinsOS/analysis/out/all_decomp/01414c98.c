// FUN_01414c98 @ 01414c98 size=152 calls_out=3 calls_in=2
// strings: 

void FUN_01414c98(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01659344(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_01470cc4(param_1 + 0x28);
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(*(int *)(param_1 + 0x48) + 0xc))(*(undefined4 *)(param_1 + 0x4c));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    return;
  }
  return;
}

