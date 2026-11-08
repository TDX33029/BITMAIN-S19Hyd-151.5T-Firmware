// FUN_01129aa4 @ 01129aa4 size=172 calls_out=4 calls_in=2
// strings: 

void FUN_01129aa4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0xd) == '\x03') {
    if (*(char *)(param_1 + 0x19) == '\x03') {
      FUN_005fbd44(param_1 + 5);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0xd) != '\x04') {
      return;
    }
    FUN_01129c34(param_1 + 4);
  }
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(param_1[1]);
  }
  piVar2 = (int *)*param_1;
  *(undefined1 *)(param_1 + 3) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180e54(*param_1);
    return;
  }
  return;
}

