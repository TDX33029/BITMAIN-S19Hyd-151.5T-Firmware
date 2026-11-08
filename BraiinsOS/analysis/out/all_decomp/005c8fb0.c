// FUN_005c8fb0 @ 005c8fb0 size=600 calls_out=2 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x005c918c) */
/* WARNING: Removing unreachable block (ram,0x005c9164) */
/* WARNING: Removing unreachable block (ram,0x005c9178) */

void FUN_005c8fb0(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar2 = *param_2;
  uVar5 = *(uint *)(iVar2 + 0x80);
  while (uVar5 != (param_2[2] & 0xfffffff0U)) {
    iVar2 = *(int *)(iVar2 + 0x84);
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) goto LAB_005c91dc;
    *param_2 = iVar2;
    HintYield();
    uVar5 = *(uint *)(iVar2 + 0x80);
  }
  iVar4 = param_2[1];
  if (iVar4 != iVar2) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar4 + 0x88) & 0x10000) == 0) || ((uint)param_2[2] < *(uint *)(iVar4 + 0x8c))
         ) break;
      iVar2 = *(int *)(iVar4 + 0x84);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar4 + 0x80) = 0;
      *(undefined4 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0x88) = 0;
      param_2[1] = iVar2;
      iVar2 = *param_3;
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x80) = *(int *)(iVar2 + 0x80) + 0x10;
      piVar6 = (int *)(iVar2 + 0x84);
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_005c9010;
          }
          iVar2 = *piVar6;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x80) = *(int *)(iVar2 + 0x80) + 0x10;
      piVar6 = (int *)(iVar2 + 0x84);
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_005c9010;
          }
          iVar2 = *piVar6;
        } while (iVar2 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar6 = (int *)(iVar2 + 0x84);
      *(int *)(iVar4 + 0x80) = *(int *)(iVar2 + 0x80) + 0x10;
      if (*piVar6 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar6);
          if (bVar1) {
            *piVar6 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_005c9010;
          }
        } while (*piVar6 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar4);
LAB_005c9010:
      HintYield();
      iVar2 = *param_2;
      iVar4 = param_2[1];
    } while (iVar4 != iVar2);
  }
  uVar5 = param_2[2];
  DataMemoryBarrier(0xb);
  uVar8 = uVar5 & 0xf;
  if ((*(uint *)(iVar2 + 0x88) >> uVar8 & 1) != 0) {
    puVar3 = (undefined4 *)(iVar2 + uVar8 * 8);
    uVar7 = *puVar3;
    *param_1 = 0;
    param_1[3] = puVar3[1];
    param_1[1] = 0;
    param_1[2] = uVar7;
    param_2[2] = uVar5 + 1;
    return;
  }
  if ((*(uint *)(iVar2 + 0x88) & 0x20000) != 0) {
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
LAB_005c91dc:
  *param_1 = 2;
  param_1[1] = 0;
  return;
}

