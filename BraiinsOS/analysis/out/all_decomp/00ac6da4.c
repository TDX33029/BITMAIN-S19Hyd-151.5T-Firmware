// FUN_00ac6da4 @ 00ac6da4 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_00ac6da4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_016af0b0();
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*param_1);
    return;
  }
  return;
}

