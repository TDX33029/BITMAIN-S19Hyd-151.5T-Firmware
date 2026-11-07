// FUN_0172fdf0 @ 0172fdf0 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_0172fdf0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01706a10();
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
    FUN_01700e84(*param_1);
    return;
  }
  return;
}

