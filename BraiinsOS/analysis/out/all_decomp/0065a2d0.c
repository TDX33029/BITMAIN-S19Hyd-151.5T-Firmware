// FUN_0065a2d0 @ 0065a2d0 size=156 calls_out=3 calls_in=0
// strings: 

void FUN_0065a2d0(int param_1)

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
    FUN_016586fc(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00657184(param_1 + 0x28);
  if (*(int *)(param_1 + 0x170) != 0) {
    (**(code **)(*(int *)(param_1 + 0x170) + 0xc))(*(undefined4 *)(param_1 + 0x174));
  }
  piVar2 = *(int **)(param_1 + 0x178);
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
    FUN_015614d8(*(undefined4 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x17c));
    return;
  }
  return;
}

