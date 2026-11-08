// FUN_0182217c @ 0182217c size=80 calls_out=2 calls_in=7
// strings: 

void FUN_0182217c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_01882968(piVar3 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a75d8c(*param_1);
    return;
  }
  return;
}

