// FUN_0152691c @ 0152691c size=172 calls_out=3 calls_in=0
// strings: 

void FUN_0152691c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_014ffdfc();
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  piVar2 = *(int **)(param_1 + 0x1c);
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
    FUN_01670d04(*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

