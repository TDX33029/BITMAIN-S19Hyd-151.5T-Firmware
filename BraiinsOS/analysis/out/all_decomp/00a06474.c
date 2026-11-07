// FUN_00a06474 @ 00a06474 size=412 calls_out=2 calls_in=0
// strings: 

void FUN_00a06474(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  if (param_2 == 0) {
    *param_1 = 0x80000001;
    return;
  }
  puVar10 = (undefined4 *)(param_2 + param_3 * 0x10);
  puVar8 = puVar10 + 3;
  DataMemoryBarrier(0xb);
  if ((puVar10[3] & 1) == 0) {
    uVar11 = 0;
    do {
      while (uVar11 < 7) {
        uVar3 = 1;
        do {
          uVar1 = uVar3 >> (uVar11 & 0xff);
          uVar3 = uVar3 + 1;
          HintYield();
        } while (uVar1 == 0);
        uVar11 = uVar11 + 1;
        DataMemoryBarrier(0xb);
        if ((*puVar8 & 1) != 0) goto LAB_00a064fc;
      }
      FUN_016da3a8();
      if (uVar11 < 0xb) {
        uVar11 = uVar11 + 1;
      }
      DataMemoryBarrier(0xb);
    } while ((*puVar8 & 1) == 0);
  }
LAB_00a064fc:
  uVar4 = *puVar10;
  uVar6 = puVar10[1];
  uVar9 = puVar10[2];
  iVar5 = param_3 + 1;
  if (iVar5 == 0x1f) {
    iVar5 = 0;
    do {
      iVar7 = param_2 + iVar5 * 0x10;
      DataMemoryBarrier(0xb);
      if ((*(uint *)(iVar7 + 0xc) & 2) == 0) {
        puVar8 = (uint *)(iVar7 + 0xc);
        DataMemoryBarrier(0xb);
        do {
          uVar11 = *puVar8;
          bVar2 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar2);
        *puVar8 = uVar11 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar11 & 2) == 0) goto LAB_00a06560;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x1e);
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar11 = *puVar8;
      bVar2 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar2);
    *puVar8 = uVar11 | 2;
    DataMemoryBarrier(0xb);
    if ((uVar11 & 4) == 0) {
LAB_00a06560:
      *param_1 = uVar4;
      param_1[1] = uVar6;
      param_1[2] = uVar9;
      return;
    }
    if (param_3 < 0x1d) {
      do {
        iVar7 = param_2 + iVar5 * 0x10;
        DataMemoryBarrier(0xb);
        if ((*(uint *)(iVar7 + 0xc) & 2) == 0) {
          puVar8 = (uint *)(iVar7 + 0xc);
          DataMemoryBarrier(0xb);
          do {
            uVar11 = *puVar8;
            bVar2 = (bool)hasExclusiveAccess(puVar8);
          } while (!bVar2);
          *puVar8 = uVar11 | 4;
          DataMemoryBarrier(0xb);
          if ((uVar11 & 2) == 0) goto LAB_00a06560;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x1e);
    }
  }
  thunk_FUN_016d3fb4(param_2);
  *param_1 = uVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar9;
  return;
}

