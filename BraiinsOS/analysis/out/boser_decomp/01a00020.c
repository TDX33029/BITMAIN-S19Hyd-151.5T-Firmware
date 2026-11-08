// FUN_01a00020 @ 01a00020 size=60 calls_out=1 calls_in=3
// strings: 

void FUN_01a00020(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_01139b38(param_1[2],param_1[3]);
  }
  else {
    if (*(char *)((int)param_1 + 0x15) != '\x03') {
      return;
    }
    FUN_01139b38(*param_1,param_1[1]);
  }
  piVar3 = (int *)param_1[4];
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_014295d0(piVar3 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38e68(param_1[4]);
    return;
  }
  return;
}

