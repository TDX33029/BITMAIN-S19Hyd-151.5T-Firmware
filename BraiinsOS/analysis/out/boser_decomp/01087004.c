// FUN_01087004 @ 01087004 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_01087004(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0193f694();
  piVar2 = *(int **)(param_1 + 0x128);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x128));
    return;
  }
  return;
}

