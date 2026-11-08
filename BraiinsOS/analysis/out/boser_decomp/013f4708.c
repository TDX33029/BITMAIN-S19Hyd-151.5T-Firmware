// FUN_013f4708 @ 013f4708 size=100 calls_out=3 calls_in=3
// strings: 

void FUN_013f4708(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(undefined1 **)(param_1 + 8) == &DAT_3b9aca00) {
    FUN_013f476c(param_1);
    return;
  }
  FUN_0079217c(param_1 + 0x18);
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cdd5c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

