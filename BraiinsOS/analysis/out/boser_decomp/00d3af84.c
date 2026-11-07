// FUN_00d3af84 @ 00d3af84 size=168 calls_out=4 calls_in=2
// strings: 

void FUN_00d3af84(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xb) != '\x03') {
    return;
  }
  FUN_00f2d0a8(param_1 + 5);
  if (param_1[5] == 0) {
    FUN_00d3259c(param_1 + 6);
  }
  iVar2 = param_1[7];
  if (iVar2 == -0x7fffffff) {
    return;
  }
  if (iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,param_1[8]);
    return;
  }
  piVar3 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a97164(param_1[8]);
    return;
  }
  return;
}

