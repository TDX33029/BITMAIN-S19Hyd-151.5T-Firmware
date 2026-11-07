// FUN_00934b70 @ 00934b70 size=44 calls_out=1 calls_in=2
// strings: 

void FUN_00934b70(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 1;
  if (0x80000006 < (uint)param_1[6]) {
    iVar3 = param_1[6] + 0x7ffffff9;
  }
  if (iVar3 == 0) {
    FUN_01139b38(*param_1,param_1[1]);
    return;
  }
  if (iVar3 != 1) {
    return;
  }
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*param_1,param_1[1]);
  }
  FUN_00db19c4(param_1 + 2);
  return;
}

