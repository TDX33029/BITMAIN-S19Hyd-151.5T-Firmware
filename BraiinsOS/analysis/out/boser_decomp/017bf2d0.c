// FUN_017bf2d0 @ 017bf2d0 size=92 calls_out=3 calls_in=2
// strings: 

void FUN_017bf2d0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01771d60(*(undefined4 *)(param_1 + 0x10));
  if (1 < *(int *)(param_1 + 0x1c) + 1U) {
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
    }
  }
  FUN_01432304(param_1 + 0x18);
  return;
}

