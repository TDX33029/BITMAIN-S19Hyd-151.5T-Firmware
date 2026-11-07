// FUN_01177a68 @ 01177a68 size=148 calls_out=3 calls_in=1
// strings: 

void FUN_01177a68(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019f5854(*(undefined4 *)(param_1 + 0xc));
  FUN_01177b94(param_1 + 8);
  piVar2 = *(int **)(param_1 + 0xc);
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      goto LAB_01177abc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar2[2] + 0x10))();
LAB_01177abc:
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

