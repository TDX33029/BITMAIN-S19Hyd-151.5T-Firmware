// FUN_005c920c @ 005c920c size=612 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x005c93e8) */
/* WARNING: Removing unreachable block (ram,0x005c93c0) */
/* WARNING: Removing unreachable block (ram,0x005c93d4) */

uint FUN_005c920c(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  iVar1 = *param_2;
  uVar3 = *(uint *)(iVar1 + 0x180);
  while (uVar3 != (param_2[2] & 0xfffffff0U)) {
    iVar1 = *(int *)(iVar1 + 0x184);
    DataMemoryBarrier(0xb);
    if (iVar1 == 0) {
      uVar3 = 8;
      goto LAB_005c945c;
    }
    *param_2 = iVar1;
    HintYield();
    uVar3 = *(uint *)(iVar1 + 0x180);
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar1) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0x188) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar2 + 0x18c))) break;
      iVar1 = *(int *)(iVar2 + 0x184);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar2 + 0x180) = 0;
      *(undefined4 *)(iVar2 + 0x184) = 0;
      *(undefined4 *)(iVar2 + 0x188) = 0;
      param_2[1] = iVar1;
      iVar1 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar2 + 0x180) = *(int *)(iVar1 + 0x180) + 0x10;
      piVar4 = (int *)(iVar1 + 0x184);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(piVar4);
          if (bVar11) {
            *piVar4 = iVar2;
            DataMemoryBarrier(0xb);
            goto LAB_005c926c;
          }
          iVar1 = *piVar4;
        } while (iVar1 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar2 + 0x180) = *(int *)(iVar1 + 0x180) + 0x10;
      piVar4 = (int *)(iVar1 + 0x184);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(piVar4);
          if (bVar11) {
            *piVar4 = iVar2;
            DataMemoryBarrier(0xb);
            goto LAB_005c926c;
          }
          iVar1 = *piVar4;
        } while (iVar1 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar4 = (int *)(iVar1 + 0x184);
      *(int *)(iVar2 + 0x180) = *(int *)(iVar1 + 0x180) + 0x10;
      if (*piVar4 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(piVar4);
          if (bVar11) {
            *piVar4 = iVar2;
            DataMemoryBarrier(0xb);
            goto LAB_005c926c;
          }
        } while (*piVar4 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar2);
LAB_005c926c:
      HintYield();
      iVar1 = *param_2;
      iVar2 = param_2[1];
    } while (iVar2 != iVar1);
  }
  uVar9 = param_2[2];
  DataMemoryBarrier(0xb);
  uVar3 = uVar9 & 0xf;
  if ((*(uint *)(iVar1 + 0x188) >> uVar3 & 1) == 0) {
    uVar3 = 7;
    if ((*(uint *)(iVar1 + 0x188) & 0x20000) == 0) {
      uVar3 = 8;
    }
LAB_005c945c:
    *param_1 = uVar3;
    param_1[1] = 0;
  }
  else {
    puVar10 = (uint *)(iVar1 + uVar3 * 0x18);
    uVar3 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    uVar7 = puVar10[4];
    uVar8 = puVar10[5];
    *param_1 = *puVar10;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    iVar1 = param_1[1] - (uint)(*param_1 < 7);
    bVar11 = *param_1 - 7 < 2;
    uVar3 = -(iVar1 + (uint)!bVar11);
    if ((uint)bVar11 <= (uint)-iVar1) {
      uVar9 = uVar9 + 1;
      param_2[2] = uVar9;
      return uVar9;
    }
  }
  return uVar3;
}

