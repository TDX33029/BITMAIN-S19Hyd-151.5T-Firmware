// FUN_016b9fb8 @ 016b9fb8 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_016b9fb8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_016b7bb4(param_1 + 0x40);
  piVar2 = *(int **)(param_1 + 0x278);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9744(*(undefined4 *)(param_1 + 0x278));
    return;
  }
  return;
}

