// FUN_019e56fc @ 019e56fc size=104 calls_out=5 calls_in=0
// strings: 

void FUN_019e56fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x104) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x100));
  }
  FUN_019da928(param_1 + 0x13c);
  FUN_019e54b8(param_1 + 0x180);
  piVar2 = *(int **)(param_1 + 0x218);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019dac00(*(undefined4 *)(param_1 + 0x218));
  }
  FUN_019daebc(param_1 + 0x200);
  return;
}

