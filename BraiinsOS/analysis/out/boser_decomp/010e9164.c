// FUN_010e9164 @ 010e9164 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_010e9164(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_010e91fc(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

