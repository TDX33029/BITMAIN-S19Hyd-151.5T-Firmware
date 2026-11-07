// FUN_008e693c @ 008e693c size=604 calls_out=2 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x008e6b18) */
/* WARNING: Removing unreachable block (ram,0x008e6af0) */
/* WARNING: Removing unreachable block (ram,0x008e6b04) */

void FUN_008e693c(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *param_2;
  uVar5 = *(uint *)(iVar2 + 0x100);
  while (uVar5 != (param_2[2] & 0xfffffff0U)) {
    iVar2 = *(int *)(iVar2 + 0x104);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) goto LAB_008e6b74;
    *param_2 = iVar2;
    HintYield();
    uVar5 = *(uint *)(iVar2 + 0x100);
  }
  iVar4 = param_2[1];
  if (iVar4 != iVar2) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar4 + 0x108) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar4 + 0x10c))) break;
      iVar2 = *(int *)(iVar4 + 0x104);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar4 + 0x100) = 0;
      *(undefined4 *)(iVar4 + 0x104) = 0;
      *(undefined4 *)(iVar4 + 0x108) = 0;
      param_2[1] = iVar2;
      iVar2 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x100) = *(int *)(iVar2 + 0x100) + 0x10;
      piVar6 = (int *)(iVar2 + 0x104);
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_008e699c;
          }
          iVar2 = *piVar6;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x100) = *(int *)(iVar2 + 0x100) + 0x10;
      piVar6 = (int *)(iVar2 + 0x104);
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_008e699c;
          }
          iVar2 = *piVar6;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar6 = (int *)(iVar2 + 0x104);
      *(int *)(iVar4 + 0x100) = *(int *)(iVar2 + 0x100) + 0x10;
      if (*piVar6 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_008e699c;
          }
        } while (*piVar6 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar4);
LAB_008e699c:
      HintYield();
      iVar4 = param_2[1];
    } while (iVar4 != *param_2);
    iVar2 = *param_2;
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar2 + 0x108) >> (param_2[2] & 0xfU) & 1) != 0) {
    puVar3 = (uint *)(iVar2 + (param_2[2] & 0xfU) * 0x10);
    uVar5 = *puVar3;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    param_1[3] = puVar3[3];
    *param_1 = uVar5;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    if (1 < (uVar5 & 0xff) - 9) {
      param_2[2] = param_2[2] + 1;
    }
    return;
  }
  if ((*(uint *)(iVar2 + 0x108) & 0x20000) != 0) {
    *(undefined1 *)param_1 = 9;
    return;
  }
LAB_008e6b74:
  *(undefined1 *)param_1 = 10;
  return;
}

