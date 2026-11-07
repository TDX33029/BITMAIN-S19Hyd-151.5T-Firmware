// FUN_019da4fc @ 019da4fc size=164 calls_out=6 calls_in=133
// strings: 

void FUN_019da4fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x104) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x100));
  }
  FUN_019da928(param_1 + 0x13c);
  FUN_019daae0(param_1 + 0x180);
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

