// FUN_019c6db0 @ 019c6db0 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_019c6db0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x3c) != '\x02') {
    piVar2 = *(int **)(param_1 + 0x38);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019ad05c(*(undefined4 *)(param_1 + 0x38));
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_019ca8d4((int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_019ca8d4((int *)(param_1 + 0x28));
  return;
}

