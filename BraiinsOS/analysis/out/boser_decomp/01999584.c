// FUN_01999584 @ 01999584 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_01999584(char param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 'R') || (param_2 == 0)) {
    return;
  }
  piVar2 = *(int **)(param_2 + 0x118);
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
  piVar2 = *(int **)(param_2 + 0x100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01989ae8(*(undefined4 *)(param_2 + 0x100));
  }
  FUN_01989b80(param_2 + 0x10);
  thunk_FUN_01be4678(param_2);
  return;
}

