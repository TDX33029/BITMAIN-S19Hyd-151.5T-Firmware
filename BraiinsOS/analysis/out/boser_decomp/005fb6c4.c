// FUN_005fb6c4 @ 005fb6c4 size=228 calls_out=5 calls_in=1
// strings: 

void FUN_005fb6c4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 3) {
    if (param_1[1] == -0x80000000) {
      piVar2 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db20c(param_1[2]);
        return;
      }
    }
    else {
      FUN_0134aee0(param_1[1],param_1[2],8,0x10);
      FUN_01bf01d6(param_1[4]);
      FUN_01bf01d6(param_1[6]);
      piVar2 = (int *)param_1[7];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_1[7]);
      }
      if (param_1[8] != -1) {
        piVar2 = (int *)(param_1[8] + 4);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          thunk_FUN_01be4678();
          return;
        }
        return;
      }
    }
  }
  return;
}

