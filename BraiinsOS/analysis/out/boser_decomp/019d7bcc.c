// FUN_019d7bcc @ 019d7bcc size=100 calls_out=4 calls_in=4
// strings: 

void FUN_019d7bcc(int param_1)

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
  FUN_019d7c6c(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x50);
  thunk_FUN_01be4678(param_1);
  return;
}

