// FUN_018b97d8 @ 018b97d8 size=104 calls_out=2 calls_in=0
// strings: 

void FUN_018b97d8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x310);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x310));
  }
  if (*(char *)(param_1 + 0x318) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800));
  }
  if (*(int *)(param_1 + 0x300) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x304));
  return;
}

