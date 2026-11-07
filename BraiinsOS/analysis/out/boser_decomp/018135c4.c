// FUN_018135c4 @ 018135c4 size=104 calls_out=5 calls_in=0
// strings: 

void FUN_018135c4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01432ee4(param_1 + 0x20);
  FUN_0177a864(param_1 + 0x40);
  FUN_0177aa84(param_1 + 0x60);
  FUN_01784640(param_1 + 0x8c);
  piVar2 = *(int **)(param_1 + 0x80);
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
    FUN_018531c0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    return;
  }
  return;
}

