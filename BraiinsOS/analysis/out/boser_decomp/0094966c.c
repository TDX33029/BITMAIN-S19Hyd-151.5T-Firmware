// FUN_0094966c @ 0094966c size=112 calls_out=3 calls_in=2
// strings: 

void FUN_0094966c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 1;
  if (0x80000006 < (uint)param_1[6]) {
    iVar2 = param_1[6] + 0x7ffffff9;
  }
  if (iVar2 == 0) {
    FUN_01139b38(*param_1,param_1[1]);
    return;
  }
  if (iVar2 != 1) {
    return;
  }
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*param_1,param_1[1]);
  }
  FUN_00fe40e4(param_1 + 2);
  return;
}

