// FUN_0102cc1c @ 0102cc1c size=164 calls_out=4 calls_in=1
// strings: 

void FUN_0102cc1c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if (iVar2 != -0x7ffffffe) {
    if (iVar2 != -0x7fffffff) {
      if (iVar2 == -0x80000000) {
        return;
      }
      FUN_019bb7e0(iVar2,param_1[1]);
      FUN_019bb7e0(param_1[3],param_1[4]);
      FUN_019bb7e0(param_1[6],param_1[7]);
      FUN_006a41c0(param_1 + 9);
      return;
    }
    FUN_019bb7e0(param_1[5],param_1[6]);
    piVar3 = (int *)param_1[8];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[8],param_1[9]);
      }
    }
    if (param_1[1] != 0) {
      FUN_006c1148(param_1 + 2);
      return;
    }
  }
  return;
}

