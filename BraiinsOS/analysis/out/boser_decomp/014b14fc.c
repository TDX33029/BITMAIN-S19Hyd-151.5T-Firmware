// FUN_014b14fc @ 014b14fc size=100 calls_out=4 calls_in=5
// strings: 

void FUN_014b14fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    }
  }
  FUN_014b159c(param_1 + 0x28);
  FUN_014b1410(param_1 + 0xa0);
  thunk_FUN_01be4678(param_1);
  return;
}

