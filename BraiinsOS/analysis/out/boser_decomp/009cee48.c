// FUN_009cee48 @ 009cee48 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_009cee48(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      return;
    }
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a956ec(param_1[2]);
      return;
    }
  }
  return;
}

