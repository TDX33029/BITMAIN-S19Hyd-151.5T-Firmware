// FUN_009df728 @ 009df728 size=124 calls_out=4 calls_in=3
// strings: 

void FUN_009df728(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar1;
    bVar3 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar3);
  *piVar1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da640(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    bVar3 = *(int *)(param_1 + 0x30) != 0 || *(int *)(param_1 + 0x34) != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0x38);
    }
    if (bVar3 && iVar2 != 0) {
      FUN_01443048(iVar2,*(undefined4 *)(param_1 + 0x3c));
    }
  }
  FUN_014b1410(param_1 + 0x40);
  thunk_FUN_01be4678(param_1);
  return;
}

