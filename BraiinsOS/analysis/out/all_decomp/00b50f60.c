// FUN_00b50f60 @ 00b50f60 size=168 calls_out=5 calls_in=3
// strings: 

void FUN_00b50f60(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_00c09894();
  if (*param_1 == 0) {
    piVar3 = (int *)param_1[1];
    FUN_00c09028(piVar3);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(param_1[1]);
    }
  }
  if (param_1[2] == 4) {
    return;
  }
  if (param_1[2] != 3) {
    FUN_00b510e8();
    return;
  }
  piVar3 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa8be8(param_1[3]);
    return;
  }
  return;
}

