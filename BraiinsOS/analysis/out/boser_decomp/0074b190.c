// FUN_0074b190 @ 0074b190 size=80 calls_out=2 calls_in=15
// strings: 

void FUN_0074b190(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x5c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a868(*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0x50) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  return;
}

