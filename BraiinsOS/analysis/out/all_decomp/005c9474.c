// FUN_005c9474 @ 005c9474 size=600 calls_out=3 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x005c9654) */
/* WARNING: Removing unreachable block (ram,0x005c962c) */
/* WARNING: Removing unreachable block (ram,0x005c9640) */

void FUN_005c9474(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  iVar2 = *param_2;
  uVar5 = *(uint *)(iVar2 + 0x900);
  while (uVar5 != (param_2[2] & 0xfffffff0U)) {
    iVar2 = *(int *)(iVar2 + 0x904);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) {
      uVar3 = 4;
      goto LAB_005c96b8;
    }
    *param_2 = iVar2;
    HintYield();
    uVar5 = *(uint *)(iVar2 + 0x900);
  }
  iVar4 = param_2[1];
  if (iVar4 != iVar2) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar4 + 0x908) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar4 + 0x90c))) break;
      iVar2 = *(int *)(iVar4 + 0x904);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar4 + 0x900) = 0;
      *(undefined4 *)(iVar4 + 0x904) = 0;
      *(undefined4 *)(iVar4 + 0x908) = 0;
      param_2[1] = iVar2;
      iVar2 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x900) = *(int *)(iVar2 + 0x900) + 0x10;
      piVar6 = (int *)(iVar2 + 0x904);
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_005c94d8;
          }
          iVar2 = *piVar6;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x900) = *(int *)(iVar2 + 0x900) + 0x10;
      piVar6 = (int *)(iVar2 + 0x904);
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_005c94d8;
          }
          iVar2 = *piVar6;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar6 = (int *)(iVar2 + 0x904);
      *(int *)(iVar4 + 0x900) = *(int *)(iVar2 + 0x900) + 0x10;
      if (*piVar6 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_005c94d8;
          }
        } while (*piVar6 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar4);
LAB_005c94d8:
      HintYield();
      iVar2 = *param_2;
      iVar4 = param_2[1];
    } while (iVar4 != iVar2);
  }
  uVar7 = param_2[2];
  DataMemoryBarrier(0xb);
  uVar5 = uVar7 & 0xf;
  if ((*(uint *)(iVar2 + 0x908) >> uVar5 & 1) == 0) {
    uVar3 = 3;
    if ((*(uint *)(iVar2 + 0x908) & 0x20000) == 0) {
      uVar3 = 4;
    }
LAB_005c96b8:
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  else {
    FUN_016dd1aa(param_1,iVar2 + uVar5 * 0x90,0x90);
    if (1 < *(int *)(param_1 + 8) - 3U) {
      param_2[2] = uVar7 + 1;
      return;
    }
  }
  return;
}

