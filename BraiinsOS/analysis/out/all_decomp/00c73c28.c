// FUN_00c73c28 @ 00c73c28 size=616 calls_out=2 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c73e04) */
/* WARNING: Removing unreachable block (ram,0x00c73ddc) */
/* WARNING: Removing unreachable block (ram,0x00c73df0) */

uint FUN_00c73c28(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = *param_2;
  uVar5 = *(uint *)(iVar1 + 0x200);
  while (uVar5 != (param_2[2] & 0xfffffff0U)) {
    iVar1 = *(int *)(iVar1 + 0x204);
    DataMemoryBarrier(0xb);
    if (iVar1 == 0) {
      uVar5 = 8;
      goto LAB_00c73e7c;
    }
    *param_2 = iVar1;
    HintYield();
    uVar5 = *(uint *)(iVar1 + 0x200);
  }
  iVar3 = param_2[1];
  if (iVar3 != iVar1) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar3 + 0x208) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar3 + 0x20c))) break;
      iVar1 = *(int *)(iVar3 + 0x204);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar3 + 0x200) = 0;
      *(undefined4 *)(iVar3 + 0x204) = 0;
      *(undefined4 *)(iVar3 + 0x208) = 0;
      param_2[1] = iVar1;
      iVar1 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar3 + 0x200) = *(int *)(iVar1 + 0x200) + 0x10;
      piVar6 = (int *)(iVar1 + 0x204);
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar9 = (bool)hasExclusiveAccess(piVar6);
          if (bVar9) {
            *piVar6 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_00c73c88;
          }
          iVar1 = *piVar6;
        } while (iVar1 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar3 + 0x200) = *(int *)(iVar1 + 0x200) + 0x10;
      piVar6 = (int *)(iVar1 + 0x204);
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar9 = (bool)hasExclusiveAccess(piVar6);
          if (bVar9) {
            *piVar6 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_00c73c88;
          }
          iVar1 = *piVar6;
        } while (iVar1 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar6 = (int *)(iVar1 + 0x204);
      *(int *)(iVar3 + 0x200) = *(int *)(iVar1 + 0x200) + 0x10;
      if (*piVar6 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar9 = (bool)hasExclusiveAccess(piVar6);
          if (bVar9) {
            *piVar6 = iVar3;
            DataMemoryBarrier(0xb);
            goto LAB_00c73c88;
          }
        } while (*piVar6 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar3);
LAB_00c73c88:
      HintYield();
      iVar1 = *param_2;
      iVar3 = param_2[1];
    } while (iVar3 != iVar1);
  }
  uVar4 = param_2[2];
  DataMemoryBarrier(0xb);
  uVar5 = uVar4 & 0xf;
  if ((*(uint *)(iVar1 + 0x208) >> uVar5 & 1) == 0) {
    uVar5 = 7;
    if ((*(uint *)(iVar1 + 0x208) & 0x20000) == 0) {
      uVar5 = 8;
    }
LAB_00c73e7c:
    *param_1 = uVar5;
    param_1[1] = 0;
  }
  else {
    puVar2 = (uint *)(iVar1 + uVar5 * 0x20);
    uVar5 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *param_1 = *puVar2;
    param_1[1] = uVar5;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    uVar5 = puVar2[5];
    uVar7 = puVar2[6];
    uVar8 = puVar2[7];
    param_1[4] = puVar2[4];
    param_1[5] = uVar5;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    iVar1 = param_1[1] - (uint)(*param_1 < 7);
    bVar9 = *param_1 - 7 < 2;
    uVar5 = -(iVar1 + (uint)!bVar9);
    if ((uint)bVar9 <= (uint)-iVar1) {
      uVar4 = uVar4 + 1;
      param_2[2] = uVar4;
      return uVar4;
    }
  }
  return uVar5;
}

