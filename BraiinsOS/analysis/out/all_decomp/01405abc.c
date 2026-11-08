// FUN_01405abc @ 01405abc size=616 calls_out=3 calls_in=5
// strings: 

/* WARNING: Removing unreachable block (ram,0x01405c9c) */
/* WARNING: Removing unreachable block (ram,0x01405c74) */
/* WARNING: Removing unreachable block (ram,0x01405c88) */

void FUN_01405abc(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar2 = *param_2;
  uVar4 = *(uint *)(iVar2 + 0xa80);
  while (uVar4 != (param_2[2] & 0xfffffff0U)) {
    iVar2 = *(int *)(iVar2 + 0xa84);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) goto LAB_01405cf8;
    *param_2 = iVar2;
    HintYield();
    uVar4 = *(uint *)(iVar2 + 0xa80);
  }
  iVar3 = param_2[1];
  if (iVar3 != iVar2) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar3 + 0xa88) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar3 + 0xa8c))) break;
      iVar2 = *(int *)(iVar3 + 0xa84);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar3 + 0xa80) = 0;
      *(undefined4 *)(iVar3 + 0xa84) = 0;
      *(undefined4 *)(iVar3 + 0xa88) = 0;
      param_2[1] = iVar2;
      iVar2 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar3 + 0xa80) = *(int *)(iVar2 + 0xa80) + 0x10;
      piVar5 = (int *)(iVar2 + 0xa84);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *piVar5 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_01405b20;
          }
          iVar2 = *piVar5;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar3 + 0xa80) = *(int *)(iVar2 + 0xa80) + 0x10;
      piVar5 = (int *)(iVar2 + 0xa84);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *piVar5 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_01405b20;
          }
          iVar2 = *piVar5;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar5 = (int *)(iVar2 + 0xa84);
      *(int *)(iVar3 + 0xa80) = *(int *)(iVar2 + 0xa80) + 0x10;
      if (*piVar5 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *piVar5 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_01405b20;
          }
        } while (*piVar5 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar3);
LAB_01405b20:
      HintYield();
      iVar3 = param_2[1];
    } while (iVar3 != *param_2);
    iVar2 = *param_2;
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar2 + 0xa88) >> (param_2[2] & 0xfU) & 1) != 0) {
    FUN_016dd1aa(param_1,(short)(param_2[2] & 0xfU) * 0xa8 + iVar2,0xa8);
    if ((*param_1 & 6) != 4) {
      param_2[2] = param_2[2] + 1;
    }
    return;
  }
  if ((*(uint *)(iVar2 + 0xa88) & 0x20000) != 0) {
    *param_1 = 4;
    param_1[1] = 0;
    return;
  }
LAB_01405cf8:
  *param_1 = 5;
  param_1[1] = 0;
  return;
}

