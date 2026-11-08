// FUN_011eaaa8 @ 011eaaa8 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_011eaaa8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0x19) != '\x02') {
      piVar3 = (int *)param_1[2];
      FUN_019ed980(piVar3,param_1[3]);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db698(param_1[2]);
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
        FUN_019db698(param_1[3]);
      }
      piVar3 = (int *)param_1[4];
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_017cbfe4(piVar3 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0121ce30(piVar3);
        return;
      }
      return;
    }
  }
  else if (*param_1 == 1) {
    if (param_1[2] == 0 && param_1[3] == 0) {
      return;
    }
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  return;
}

