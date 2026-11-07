// FUN_019e5848 @ 019e5848 size=92 calls_out=3 calls_in=2
// strings: 

void FUN_019e5848(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134c054(*param_1,param_1[1],8,0x10);
  FUN_01bf01d6(param_1[3]);
  FUN_01bf01d6(param_1[5]);
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[6]);
    return;
  }
  return;
}

