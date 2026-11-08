// FUN_017720fc @ 017720fc size=132 calls_out=3 calls_in=7
// strings: 

void FUN_017720fc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 2) == '\x02') {
    return;
  }
  piVar3 = (int *)*param_1;
  FUN_013e2464(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784e7c(*param_1);
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014210d0(param_1[1]);
    return;
  }
  return;
}

