// FUN_017854e8 @ 017854e8 size=68 calls_out=1 calls_in=3
// strings: 

void FUN_017854e8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  FUN_01437370(piVar4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 8) != 3 || *(int *)(iVar2 + 0xc) != 0) {
    FUN_0142e6dc();
  }
  if (*(int *)(iVar2 + 0x50) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))(*(undefined4 *)(iVar2 + 0x54));
  }
  if (*(int *)(iVar2 + 0x5c) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x5c) + 0xc))(*(undefined4 *)(iVar2 + 0x60));
  }
  if (iVar2 == -1) {
    return;
  }
  piVar4 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

