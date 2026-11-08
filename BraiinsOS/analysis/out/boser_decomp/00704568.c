// FUN_00704568 @ 00704568 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_00704568(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    puVar4 = *(undefined1 **)(param_1 + 8);
    do {
      *puVar4 = 0;
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0);
    if (*(int *)(param_1 + 0xc) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 8));
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

