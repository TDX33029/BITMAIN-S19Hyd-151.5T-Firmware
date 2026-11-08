// FUN_015e8b90 @ 015e8b90 size=80 calls_out=2 calls_in=4
// strings: 

void FUN_015e8b90(byte *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 < 9) {
    if (*param_1 == 3) {
      FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      return;
    }
    return;
  }
  piVar3 = *(int **)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

