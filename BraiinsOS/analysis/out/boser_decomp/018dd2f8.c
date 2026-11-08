// FUN_018dd2f8 @ 018dd2f8 size=240 calls_out=4 calls_in=0
// strings: 

void FUN_018dd2f8(undefined4 *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*param_2 == 0) {
    uVar5 = *(undefined4 *)(param_3 + 4);
    uVar6 = *(undefined4 *)(param_3 + 8);
    uVar7 = *(undefined4 *)(param_3 + 0xc);
    param_1[1] = *(undefined4 *)param_3;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    *param_1 = 0;
  }
  else {
    FUN_01bed4e2(param_1,param_2,0xa8);
    bVar1 = *param_3;
    if (bVar1 < 10) {
      if (bVar1 < 2) {
        FUN_0134aee0(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8),1,2);
        return;
      }
    }
    else {
      if (bVar1 == 10) {
        if (*(uint *)(param_3 + 4) < 10) {
          return;
        }
        piVar3 = *(int **)(param_3 + 8);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
      }
      else {
        if (bVar1 != 0xc) {
          if (bVar1 == 0xd) {
            FUN_0134bd64(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
            return;
          }
          return;
        }
        if (*(int *)(param_3 + 4) != 4) {
          return;
        }
        piVar3 = *(int **)(param_3 + 8);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + -1;
      }
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
        return;
      }
    }
  }
  return;
}

