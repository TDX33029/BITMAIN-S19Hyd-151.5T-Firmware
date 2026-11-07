// FUN_00f802bc @ 00f802bc size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00f802bc(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 5) != '\0') {
    return;
  }
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[4]);
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

