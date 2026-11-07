// FUN_01985fbc @ 01985fbc size=116 calls_out=6 calls_in=1
// strings: 

void FUN_01985fbc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x138);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01986bf0();
  }
  FUN_0199b6d8(param_1 + 0x13c);
  FUN_0199b76c(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
  if (*(int *)(param_1 + 0x128) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 300));
  }
  FUN_01be6d98(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_01981388(param_1 + 0x10);
  return;
}

