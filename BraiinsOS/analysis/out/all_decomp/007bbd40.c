// FUN_007bbd40 @ 007bbd40 size=288 calls_out=2 calls_in=1
// strings: 

void FUN_007bbd40(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *param_1;
  iVar2 = param_1[1];
  iVar6 = param_1[2];
  *param_1 = 4;
  param_1[1] = 4;
  if (iVar2 == iVar5) {
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar6 + 8);
      if (param_1[3] != iVar5) {
        FUN_016dd52c(*(int *)(iVar6 + 4) + iVar5 * 0xc,*(int *)(iVar6 + 4) + param_1[3] * 0xc,
                     iVar2 * 0xc);
      }
      *(int *)(iVar6 + 8) = iVar5 + iVar2;
    }
  }
  else {
    iVar6 = 0;
    do {
      iVar7 = iVar6 + 1;
      puVar3 = (undefined4 *)(iVar5 + iVar6 * 0xc);
      piVar4 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fbaa00(*puVar3);
      }
      iVar6 = iVar7;
    } while (iVar7 != ((uint)(iVar2 - iVar5) >> 2) * -0x55555555);
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      iVar5 = param_1[2];
      iVar6 = *(int *)(iVar5 + 8);
      if (param_1[3] != iVar6) {
        FUN_016dd52c(*(int *)(iVar5 + 4) + iVar6 * 0xc,*(int *)(iVar5 + 4) + param_1[3] * 0xc,
                     iVar2 * 0xc);
      }
      *(int *)(iVar5 + 8) = iVar6 + iVar2;
      return;
    }
  }
  return;
}

