// FUN_017dbdbc @ 017dbdbc size=112 calls_out=4 calls_in=2
// strings: 

void FUN_017dbdbc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_019d8d64();
  }
  FUN_007724c8(param_1 + 0x50);
  piVar2 = *(int **)(param_1 + 0x5c);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db294(*(undefined4 *)(param_1 + 0x5c));
    }
  }
  thunk_FUN_01be4678(param_1);
  return;
}

