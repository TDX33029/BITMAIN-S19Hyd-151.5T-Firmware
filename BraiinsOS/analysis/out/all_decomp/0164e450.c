// FUN_0164e450 @ 0164e450 size=244 calls_out=2 calls_in=1
// strings: 

void FUN_0164e450(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *param_1;
  iVar2 = param_1[1];
  iVar4 = param_1[2];
  *param_1 = 4;
  param_1[1] = 4;
  if (iVar2 - iVar7 == 0) {
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar4 + 8);
      if (param_1[3] != iVar7) {
        FUN_016dd52c(*(int *)(iVar4 + 4) + iVar7 * 4,*(int *)(iVar4 + 4) + param_1[3] * 4,iVar2 << 2
                    );
      }
      *(int *)(iVar4 + 8) = iVar7 + iVar2;
    }
  }
  else {
    uVar5 = 0;
    do {
      piVar3 = *(int **)(iVar7 + uVar5 * 4);
      uVar6 = uVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659540(*(undefined4 *)(iVar7 + uVar5 * 4));
      }
      uVar5 = uVar6;
    } while (uVar6 != (uint)(iVar2 - iVar7) >> 2);
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      iVar4 = param_1[2];
      iVar7 = *(int *)(iVar4 + 8);
      if (param_1[3] != iVar7) {
        FUN_016dd52c(*(int *)(iVar4 + 4) + iVar7 * 4,*(int *)(iVar4 + 4) + param_1[3] * 4,iVar2 << 2
                    );
      }
      *(int *)(iVar4 + 8) = iVar7 + iVar2;
      return;
    }
  }
  return;
}

