// FUN_0164d9e0 @ 0164d9e0 size=160 calls_out=3 calls_in=0
// strings: 

void FUN_0164d9e0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 3) {
    FUN_01639074(param_1,param_1[2]);
    if (*param_1 != 2) {
      if (*param_1 != 0) {
        piVar2 = (int *)param_1[1];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016586fc(param_1[1]);
          return;
        }
        return;
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
        FUN_01659344(param_1[1]);
        return;
      }
    }
  }
  return;
}

