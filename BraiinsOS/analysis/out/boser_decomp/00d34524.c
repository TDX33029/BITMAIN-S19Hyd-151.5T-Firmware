// FUN_00d34524 @ 00d34524 size=96 calls_out=4 calls_in=4
// strings: 

void FUN_00d34524(int param_1)

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
    FUN_019da4fc(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00d345c0(param_1 + 0x28);
  FUN_014b1410(&DAT_00001028 + param_1);
  thunk_FUN_01be4678(param_1);
  return;
}

