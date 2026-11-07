// FUN_00c740e8 @ 00c740e8 size=568 calls_out=2 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c742c4) */
/* WARNING: Removing unreachable block (ram,0x00c7429c) */
/* WARNING: Removing unreachable block (ram,0x00c742b0) */

ulonglong FUN_00c740e8(int *param_1,int *param_2)

{
  bool bVar1;
  uint5 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  iVar6 = *param_1;
  uVar3 = *(uint *)(iVar6 + 0x80);
  while (uVar3 != (param_1[2] & 0xfffffff0U)) {
    iVar6 = *(int *)(iVar6 + 0x84);
    DataMemoryBarrier(0xb);
    if (iVar6 == 0) {
      return CONCAT44(3,param_1[2] & 0xfffffff0U);
    }
    *param_1 = iVar6;
    HintYield();
    uVar3 = *(uint *)(iVar6 + 0x80);
  }
  iVar4 = param_1[1];
  if (iVar4 != iVar6) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar4 + 0x88) & 0x10000) == 0) || ((uint)param_1[2] < *(uint *)(iVar4 + 0x8c))
         ) break;
      iVar6 = *(int *)(iVar4 + 0x84);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018abc70);
      }
      *(undefined4 *)(iVar4 + 0x80) = 0;
      *(undefined4 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0x88) = 0;
      param_1[1] = iVar6;
      iVar6 = *param_2;
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x80) = *(int *)(iVar6 + 0x80) + 0x10;
      piVar7 = (int *)(iVar6 + 0x84);
      iVar6 = *piVar7;
      if (iVar6 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar7);
          if (bVar1) {
            *piVar7 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_00c74144;
          }
          iVar6 = *piVar7;
        } while (iVar6 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      *(int *)(iVar4 + 0x80) = *(int *)(iVar6 + 0x80) + 0x10;
      piVar7 = (int *)(iVar6 + 0x84);
      iVar6 = *piVar7;
      if (iVar6 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar7);
          if (bVar1) {
            *piVar7 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_00c74144;
          }
          iVar6 = *piVar7;
        } while (iVar6 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      piVar7 = (int *)(iVar6 + 0x84);
      *(int *)(iVar4 + 0x80) = *(int *)(iVar6 + 0x80) + 0x10;
      if (*piVar7 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar7);
          if (bVar1) {
            *piVar7 = iVar4;
            DataMemoryBarrier(0xb);
            goto LAB_00c74144;
          }
        } while (*piVar7 == 0);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar4);
LAB_00c74144:
      HintYield();
      iVar6 = *param_1;
      iVar4 = param_1[1];
    } while (iVar4 != iVar6);
  }
  uVar3 = *(uint *)(iVar6 + 0x88);
  DataMemoryBarrier(0xb);
  uVar8 = param_1[2] & 0xf;
  if ((uVar3 >> uVar8 & 1) != 0) {
    uVar2 = *(uint5 *)(iVar6 + uVar8 * 8);
    param_1[2] = param_1[2] + 1;
    return (ulonglong)uVar2 & 0x1ffffffff;
  }
  uVar5 = 2;
  if ((uVar3 & 0x20000) == 0) {
    uVar5 = 3;
  }
  return CONCAT44(uVar5,uVar3);
}

