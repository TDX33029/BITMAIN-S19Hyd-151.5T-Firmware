// FUN_0185ba00 @ 0185ba00 size=112 calls_out=3 calls_in=2
// strings: 

void FUN_0185ba00(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0185bf44();
  piVar2 = *(int **)(param_1 + 0x4c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa09c(*(undefined4 *)(param_1 + 0x4c));
  }
  piVar2 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    return;
  }
  return;
}

