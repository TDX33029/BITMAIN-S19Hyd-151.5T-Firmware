// FUN_014efd24 @ 014efd24 size=620 calls_out=3 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x014eff04) */
/* WARNING: Removing unreachable block (ram,0x014efedc) */
/* WARNING: Removing unreachable block (ram,0x014efef0) */

int FUN_014efd24(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *param_2;
  uVar3 = *(uint *)(iVar1 + 0xc00);
  while (uVar3 != (param_2[2] & 0xfffffff0U)) {
    iVar1 = *(int *)(iVar1 + 0xc04);
    DataMemoryBarrier(0xb);
    if (iVar1 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      return 4;
    }
    *param_2 = iVar1;
    HintYield();
    uVar3 = *(uint *)(iVar1 + 0xc00);
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar1) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0xc08) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar2 + 0xc0c))) break;
      iVar1 = *(int *)(iVar2 + 0xc04);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar2 + 0xc00) = 0;
      *(undefined4 *)(iVar2 + 0xc04) = 0;
      *(undefined4 *)(iVar2 + 0xc08) = 0;
      param_2[1] = iVar1;
      iVar1 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar2 + 0xc00) = *(int *)(iVar1 + 0xc00) + 0x10;
      piVar4 = (int *)(iVar1 + 0xc04);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar6 = (bool)hasExclusiveAccess(piVar4);
          if (bVar6) {
            *piVar4 = iVar2;
            DataMemoryBarrier(0xb);
            goto LAB_014efd88;
          }
          iVar1 = *piVar4;
        } while (iVar1 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar2 + 0xc00) = *(int *)(iVar1 + 0xc00) + 0x10;
      piVar4 = (int *)(iVar1 + 0xc04);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar6 = (bool)hasExclusiveAccess(piVar4);
          if (bVar6) {
            *piVar4 = iVar2;
            DataMemoryBarrier(0xb);
            goto LAB_014efd88;
          }
          iVar1 = *piVar4;
        } while (iVar1 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar4 = (int *)(iVar1 + 0xc04);
      *(int *)(iVar2 + 0xc00) = *(int *)(iVar1 + 0xc00) + 0x10;
      if (*piVar4 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar6 = (bool)hasExclusiveAccess(piVar4);
          if (bVar6) {
            *piVar4 = iVar2;
            DataMemoryBarrier(0xb);
            goto LAB_014efd88;
          }
        } while (*piVar4 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar2);
LAB_014efd88:
      HintYield();
      iVar1 = *param_2;
      iVar2 = param_2[1];
    } while (iVar2 != iVar1);
  }
  uVar5 = param_2[2];
  DataMemoryBarrier(0xb);
  uVar3 = uVar5 & 0xf;
  if ((*(uint *)(iVar1 + 0xc08) >> uVar3 & 1) == 0) {
    uVar3 = 3;
    if ((*(uint *)(iVar1 + 0xc08) & 0x20000) == 0) {
      uVar3 = 4;
    }
    *param_1 = uVar3;
    param_1[1] = 0;
    return iVar1;
  }
  FUN_016dd1aa(param_1,iVar1 + uVar3 * 0xc0,0xc0);
  iVar1 = param_1[1] - (uint)(*param_1 < 3);
  bVar6 = *param_1 - 3 < 2;
  if ((uint)-iVar1 < (uint)bVar6) {
    return -(iVar1 + (uint)!bVar6);
  }
  iVar1 = uVar5 + 1;
  param_2[2] = iVar1;
  return iVar1;
}

