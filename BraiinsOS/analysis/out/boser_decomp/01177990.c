// FUN_01177990 @ 01177990 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_01177990(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x20) + 4);
  for (iVar3 = *(int *)(param_1 + 0x24); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(puVar4[-1],*puVar4);
    puVar4 = puVar4 + 3;
  }
  FUN_0132b958(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),4,0xc);
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

