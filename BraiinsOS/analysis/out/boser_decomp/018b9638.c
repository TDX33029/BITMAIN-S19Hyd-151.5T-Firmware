// FUN_018b9638 @ 018b9638 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_018b9638(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x328);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x328));
  }
  if (*(char *)(param_1 + 0x330) == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338));
  }
  if (*(int *)(param_1 + 0x318) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x318),*(undefined4 *)(param_1 + 0x31c));
  }
  if (*(int *)(param_1 + 0x228) == -0x7ffffffe) {
    return;
  }
  FUN_018b83a4((int *)(param_1 + 0x228));
  return;
}

