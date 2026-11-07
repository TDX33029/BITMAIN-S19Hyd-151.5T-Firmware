// FUN_006c7d20 @ 006c7d20 size=124 calls_out=5 calls_in=1
// strings: 

void FUN_006c7d20(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(param_1[4],param_1[5]);
  piVar2 = (int *)param_1[0xd];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0xd],param_1[0xe]);
    }
  }
  FUN_0132b958(param_1[7],param_1[8],4,8);
  FUN_00b68790(param_1 + 10);
  if (*param_1 == 0) {
    return;
  }
  FUN_006c1148(param_1 + 1);
  return;
}

