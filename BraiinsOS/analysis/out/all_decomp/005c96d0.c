// FUN_005c96d0 @ 005c96d0 size=640 calls_out=3 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x005c98c4) */
/* WARNING: Removing unreachable block (ram,0x005c989c) */
/* WARNING: Removing unreachable block (ram,0x005c98b0) */

void FUN_005c96d0(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  iVar4 = *param_2;
  uVar5 = *(uint *)(iVar4 + 0x2e80);
  while (uVar5 != (param_2[2] & 0xfffffff0U)) {
    iVar4 = *(int *)(iVar4 + 0x2e84);
    DataMemoryBarrier(0xb);
    if (iVar4 == 0) {
      *param_1 = 0x1f;
      param_1[1] = 0;
      return;
    }
    *param_2 = iVar4;
    HintYield();
    uVar5 = *(uint *)(iVar4 + 0x2e80);
  }
  iVar3 = param_2[1];
  if (iVar3 != iVar4) {
    do {
      piVar2 = (int *)(iVar3 + 0x2e80);
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar3 + 0x2e88) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar3 + 0x2e8c))) break;
      iVar4 = *(int *)(iVar3 + 0x2e84);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *piVar2 = 0;
      *(undefined4 *)(iVar3 + 0x2e84) = 0;
      *(undefined4 *)(iVar3 + 0x2e88) = 0;
      param_2[1] = iVar4;
      iVar4 = *param_3;
      DataMemoryBarrier(0xb);
      *piVar2 = *(int *)(iVar4 + 0x2e80) + 0x10;
      piVar6 = (int *)(iVar4 + 0x2e84);
      iVar4 = *piVar6;
      if (iVar4 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_005c9740;
          }
          iVar4 = *piVar6;
        } while (iVar4 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *piVar2 = *(int *)(iVar4 + 0x2e80) + 0x10;
      piVar6 = (int *)(iVar4 + 0x2e84);
      iVar4 = *piVar6;
      if (iVar4 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_005c9740;
          }
          iVar4 = *piVar6;
        } while (iVar4 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *piVar2 = *(int *)(iVar4 + 0x2e80) + 0x10;
      piVar2 = (int *)(iVar4 + 0x2e84);
      if (*piVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar2);
          if (bVar1) {
            *piVar2 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_005c9740;
          }
        } while (*piVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar3);
LAB_005c9740:
      HintYield();
      iVar4 = *param_2;
      iVar3 = param_2[1];
    } while (iVar3 != iVar4);
  }
  uVar7 = param_2[2];
  DataMemoryBarrier(0xb);
  uVar5 = uVar7 & 0xf;
  if ((*(uint *)(iVar4 + 0x2e88) >> uVar5 & 1) == 0) {
    uVar5 = 0x1e;
    if ((*(uint *)(iVar4 + 0x2e88) & 0x20000) == 0) {
      uVar5 = 0x1f;
    }
    *param_1 = uVar5;
    param_1[1] = 0;
    return;
  }
  FUN_016dd1aa(param_1,(short)uVar5 * 0x2e8 + iVar4,0x2e8);
  if ((~*param_1 & 0x1e) == 0) {
    return;
  }
  param_2[2] = uVar7 + 1;
  return;
}

