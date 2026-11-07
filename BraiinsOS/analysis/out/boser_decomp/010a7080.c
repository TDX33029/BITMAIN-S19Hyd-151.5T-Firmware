// FUN_010a7080 @ 010a7080 size=76 calls_out=2 calls_in=6
// strings: 

void FUN_010a7080(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  FUN_019f8c54(piVar3 + 2,param_1[1]);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*param_1);
    return;
  }
  return;
}

