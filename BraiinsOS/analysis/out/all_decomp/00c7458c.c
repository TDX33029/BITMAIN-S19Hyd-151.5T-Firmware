// FUN_00c7458c @ 00c7458c size=604 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c74768) */
/* WARNING: Removing unreachable block (ram,0x00c74740) */
/* WARNING: Removing unreachable block (ram,0x00c74754) */

void FUN_00c7458c(uint *param_1,int *param_2,int *param_3)

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
  uint uVar10;
  uint *puVar11;
  
  iVar2 = *param_2;
  uVar4 = *(uint *)(iVar2 + 0x300);
  while (uVar4 != (param_2[2] & 0xfffffff0U)) {
    iVar2 = *(int *)(iVar2 + 0x304);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) {
      uVar4 = 9;
      goto LAB_00c747d4;
    }
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
            goto LAB_00c745ec;
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
            goto LAB_00c745ec;
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
            goto LAB_00c745ec;
          }
        } while (*piVar5 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar3);
LAB_00c745ec:
      HintYield();
      iVar2 = *param_2;
      iVar3 = param_2[1];
    } while (iVar3 != iVar2);
  }
  uVar10 = param_2[2];
  DataMemoryBarrier(0xb);
  uVar4 = uVar10 & 0xf;
  if ((*(uint *)(iVar2 + 0x308) >> uVar4 & 1) == 0) {
    uVar4 = 8;
    if ((*(uint *)(iVar2 + 0x308) & 0x20000) == 0) {
      uVar4 = 9;
    }
LAB_00c747d4:
    *param_1 = uVar4;
  }
  else {
    puVar11 = (uint *)(iVar2 + uVar4 * 0x30);
    uVar4 = puVar11[1];
    uVar6 = puVar11[2];
    uVar7 = puVar11[3];
    uVar8 = puVar11[4];
    uVar9 = puVar11[5];
    *param_1 = *puVar11;
    param_1[1] = uVar4;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    uVar4 = puVar11[7];
    uVar6 = puVar11[8];
    uVar7 = puVar11[9];
    uVar8 = puVar11[10];
    uVar9 = puVar11[0xb];
    param_1[6] = puVar11[6];
    param_1[7] = uVar4;
    param_1[8] = uVar6;
    param_1[9] = uVar7;
    param_1[10] = uVar8;
    param_1[0xb] = uVar9;
    if ((*param_1 & 0xe) != 8) {
      param_2[2] = uVar10 + 1;
      return;
    }
  }
  return;
}

