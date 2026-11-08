// FUN_00d3d3e4 @ 00d3d3e4 size=96 calls_out=4 calls_in=4
// strings: 

void FUN_00d3d3e4(int param_1)

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
  FUN_00d3c4dc(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x728);
  thunk_FUN_01be4678(param_1);
  return;
}

