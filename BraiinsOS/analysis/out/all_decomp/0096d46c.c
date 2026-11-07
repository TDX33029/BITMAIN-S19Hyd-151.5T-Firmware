// FUN_0096d46c @ 0096d46c size=168 calls_out=5 calls_in=3
// strings: 

void FUN_0096d46c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_009920a0();
  if (*param_1 == 0) {
    piVar3 = (int *)param_1[1];
    FUN_0099155c(piVar3);
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
    FUN_0096d5f4();
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

