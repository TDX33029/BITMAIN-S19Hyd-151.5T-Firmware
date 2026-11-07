// FUN_01209708 @ 01209708 size=100 calls_out=2 calls_in=0
// strings: future still here when dropping

void FUN_01209708(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013498b4("future still here when dropping",0x1f);
  }
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x28) + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

