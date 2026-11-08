// FUN_008e0464 @ 008e0464 size=80 calls_out=2 calls_in=6
// strings: 

void FUN_008e0464(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  FUN_0188c574(piVar3);
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
    FUN_0185203c(*param_1);
    return;
  }
  return;
}

