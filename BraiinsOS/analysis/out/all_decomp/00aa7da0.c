// FUN_00aa7da0 @ 00aa7da0 size=196 calls_out=5 calls_in=2
// strings: 

void FUN_00aa7da0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1[0x41] != -0x80000000) {
    FUN_00b50e5c(param_1 + 2);
  }
  if (*(char *)(param_1 + 1) != '\x02') {
    piVar3 = (int *)*param_1;
    piVar4 = piVar3 + 0x11;
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_00a8cda4(piVar3 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(*param_1);
    }
  }
  piVar4 = (int *)param_1[0x46];
  if (piVar4 == (int *)0x0) {
    return;
  }
  FUN_01663cc4(piVar4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 0x46);
    return;
  }
  return;
}

