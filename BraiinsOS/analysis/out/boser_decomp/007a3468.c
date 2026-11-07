// FUN_007a3468 @ 007a3468 size=136 calls_out=4 calls_in=4
// strings: 

void FUN_007a3468(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x78);
  piVar2 = piVar4 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_015ee6e4(piVar4 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015faba4(*(undefined4 *)(param_1 + 0x78));
  }
  FUN_0079a86c(param_1);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (*(int *)(param_1 + 0x4c) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  return;
}

