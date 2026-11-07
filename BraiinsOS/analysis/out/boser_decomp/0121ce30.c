// FUN_0121ce30 @ 0121ce30 size=116 calls_out=2 calls_in=3
// strings: 

void FUN_0121ce30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  FUN_01712d5c((int *)(param_1 + 8));
  bVar4 = *(int *)(param_1 + 8) != 0;
  puVar1 = (undefined4 *)0x0;
  if (bVar4) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
  }
  if (bVar4 && puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)();
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

