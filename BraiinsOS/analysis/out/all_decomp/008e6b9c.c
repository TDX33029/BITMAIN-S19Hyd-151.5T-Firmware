// FUN_008e6b9c @ 008e6b9c size=612 calls_out=2 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x008e6d78) */
/* WARNING: Removing unreachable block (ram,0x008e6d50) */
/* WARNING: Removing unreachable block (ram,0x008e6d64) */

void FUN_008e6b9c(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  iVar2 = *param_2;
  uVar4 = *(uint *)(iVar2 + 0x300);
  while (uVar4 != (param_2[2] & 0xfffffff0U)) {
    iVar2 = *(int *)(iVar2 + 0x304);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) goto LAB_008e6ddc;
    *param_2 = iVar2;
    HintYield();
    uVar4 = *(uint *)(iVar2 + 0x300);
  }
  iVar3 = param_2[1];
  if (iVar3 != iVar2) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar3 + 0x308) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar3 + 0x30c))) break;
      iVar2 = *(int *)(iVar3 + 0x304);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar3 + 0x300) = 0;
      *(undefined4 *)(iVar3 + 0x304) = 0;
      *(undefined4 *)(iVar3 + 0x308) = 0;
      param_2[1] = iVar2;
      iVar2 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar3 + 0x300) = *(int *)(iVar2 + 0x300) + 0x10;
      piVar5 = (int *)(iVar2 + 0x304);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *piVar5 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_008e6bfc;
          }
          iVar2 = *piVar5;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar3 + 0x300) = *(int *)(iVar2 + 0x300) + 0x10;
      piVar5 = (int *)(iVar2 + 0x304);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *piVar5 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_008e6bfc;
          }
          iVar2 = *piVar5;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar5 = (int *)(iVar2 + 0x304);
      *(int *)(iVar3 + 0x300) = *(int *)(iVar2 + 0x300) + 0x10;
      if (*piVar5 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *piVar5 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_008e6bfc;
          }
        } while (*piVar5 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar3);
LAB_008e6bfc:
      HintYield();
      iVar3 = param_2[1];
    } while (iVar3 != *param_2);
    iVar2 = *param_2;
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar2 + 0x308) >> (param_2[2] & 0xfU) & 1) != 0) {
    puVar10 = (uint *)(iVar2 + (param_2[2] & 0xfU) * 0x30);
    uVar4 = puVar10[1];
    uVar6 = puVar10[2];
    uVar7 = puVar10[3];
    uVar8 = puVar10[4];
    uVar9 = puVar10[5];
    *param_1 = *puVar10;
    param_1[1] = uVar4;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    uVar4 = puVar10[7];
    uVar6 = puVar10[8];
    uVar7 = puVar10[9];
    uVar8 = puVar10[10];
    uVar9 = puVar10[0xb];
    param_1[6] = puVar10[6];
    param_1[7] = uVar4;
    param_1[8] = uVar6;
    param_1[9] = uVar7;
    param_1[10] = uVar8;
    param_1[0xb] = uVar9;
    if ((*param_1 & 0xe) != 8) {
      param_2[2] = param_2[2] + 1;
    }
    return;
  }
  if ((*(uint *)(iVar2 + 0x308) & 0x20000) != 0) {
    *param_1 = 8;
    return;
  }
LAB_008e6ddc:
  *param_1 = 9;
  return;
}

