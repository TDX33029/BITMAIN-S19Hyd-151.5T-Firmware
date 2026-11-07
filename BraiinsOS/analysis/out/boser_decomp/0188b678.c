// FUN_0188b678 @ 0188b678 size=136 calls_out=4 calls_in=1
// strings: 

void FUN_0188b678(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0188b790(param_1 + 0x70);
  piVar2 = *(int **)(param_1 + 0xb8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  }
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0xe4);
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
    FUN_01852970(*(undefined4 *)(param_1 + 0xe4));
    return;
  }
  return;
}

