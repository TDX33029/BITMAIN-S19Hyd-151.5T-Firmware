// FUN_017238e8 @ 017238e8 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_017238e8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  FUN_01715128(piVar3);
  if (piVar3 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01704d48(*param_1);
    return;
  }
  return;
}

