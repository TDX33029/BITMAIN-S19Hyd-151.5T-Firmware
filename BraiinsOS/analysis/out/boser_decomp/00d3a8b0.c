// FUN_00d3a8b0 @ 00d3a8b0 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_00d3a8b0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01a895e0();
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a75fb4(*param_1);
    return;
  }
  return;
}

