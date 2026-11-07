// FUN_010e6b50 @ 010e6b50 size=92 calls_out=5 calls_in=3
// strings: 

void FUN_010e6b50(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_006764c0(*param_1);
  FUN_014a8744(param_1[1],param_1[2]);
  FUN_014a8798(param_1[3]);
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[5]);
  }
  FUN_005f06bc(param_1[6]);
  return;
}

