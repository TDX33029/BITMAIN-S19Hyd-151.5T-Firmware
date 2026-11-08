// FUN_016b7bb4 @ 016b7bb4 size=68 calls_out=1 calls_in=10
// strings: 

void FUN_016b7bb4(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 3) == '\x03' || *(char *)(param_1 + 3) == '\x02') {
    return;
  }
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*param_1,param_1[1]);
    return;
  }
  return;
}

