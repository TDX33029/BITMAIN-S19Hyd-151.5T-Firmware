// FUN_018b9584 @ 018b9584 size=180 calls_out=3 calls_in=4
// strings: 

void FUN_018b9584(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  bVar1 = *param_1;
  if (bVar1 < 10) {
    if (bVar1 < 2) {
      FUN_0134aee0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1,2);
      return;
    }
  }
  else {
    if (bVar1 == 10) {
      if (*(uint *)(param_1 + 4) < 10) {
        return;
      }
      piVar4 = *(int **)(param_1 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
    }
    else {
      if (bVar1 != 0xc) {
        if (bVar1 == 0xd) {
          FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
          return;
        }
        return;
      }
      if (*(int *)(param_1 + 4) != 4) {
        return;
      }
      piVar4 = *(int **)(param_1 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
    }
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  return;
}

