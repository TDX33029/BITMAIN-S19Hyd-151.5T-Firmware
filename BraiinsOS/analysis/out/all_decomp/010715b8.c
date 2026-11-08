// FUN_010715b8 @ 010715b8 size=588 calls_out=5 calls_in=2
// strings: assertion failed: !ptr.is_null()

void FUN_010715b8(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_830 [1032];
  undefined4 local_428 [257];
  
  if (param_2 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !ptr.is_null()",0x20,&DAT_01883b30);
  }
  if ((param_2 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00384d3b,0x23,&DAT_01883b40);
  }
  DataMemoryBarrier(0xb);
  uVar2 = *(undefined4 *)(param_2 & 0xfffffff8 | 4);
  if (param_1 == 0) {
    FUN_0109d7e0();
    return;
  }
  uVar13 = *(uint *)(param_1 + 0x408);
  iVar5 = param_1 + 8;
  if (uVar13 < 0x40) {
LAB_01071608:
    *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
    puVar6 = (undefined4 *)(iVar5 + uVar13 * 0x10);
    *puVar6 = &LAB_0109bd60;
    puVar6[1] = uVar2;
    return;
  }
LAB_01071684:
  iVar7 = *(int *)(param_1 + 4);
  iVar9 = 0;
  do {
    local_428[iVar9 * 4] = &DAT_01040efc;
    iVar10 = iVar9 + 1;
    local_428[iVar9 * 4 + 1] = 0;
    local_428[iVar9 * 4 + 2] = 0;
    local_428[iVar9 * 4 + 3] = 0;
    iVar9 = iVar10;
  } while (iVar10 != 0x40);
  FUN_016dd1aa(auStack_830,iVar5,0x404);
  FUN_016dd1aa(iVar5,local_428,0x400);
  *(undefined4 *)(param_1 + 0x408) = 0;
  DataMemoryBarrier(0xb);
  uVar3 = *(undefined4 *)(iVar7 + 0x60);
  uVar13 = thunk_FUN_016d4a50(0x40c);
  if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40c);
  }
  FUN_016dd1aa(uVar13,auStack_830,0x404);
  *(undefined4 *)(uVar13 + 0x404) = uVar3;
  *(undefined4 *)(uVar13 + 0x408) = 0;
  puVar4 = (uint *)(iVar7 + 0x40);
LAB_01071734:
  do {
    uVar8 = *puVar4;
    DataMemoryBarrier(0xb);
    uVar12 = *(uint *)((uVar8 & 0xfffffffc) + 0x408);
    DataMemoryBarrier(0xb);
    if (uVar12 < 4) {
      puVar11 = (uint *)((uVar8 & 0xfffffffc) + 0x408);
      if (*puVar11 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar11);
          if (bVar1) {
            *puVar11 = uVar13;
            if (*puVar4 != uVar8) goto LAB_0107166c;
            DataMemoryBarrier(0xb);
            goto LAB_010717ac;
          }
        } while (*puVar11 == 0);
      }
    }
    else if (*puVar4 == uVar8) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
        if (bVar1) {
          *puVar4 = uVar12;
          goto LAB_01071734;
        }
      } while (*puVar4 == uVar8);
    }
    ClearExclusiveLocal();
  } while( true );
  while (*puVar4 == uVar8) {
LAB_010717ac:
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    if (bVar1) {
      *puVar4 = uVar13;
      goto LAB_01071670;
    }
  }
LAB_0107166c:
  ClearExclusiveLocal();
LAB_01071670:
  uVar13 = *(uint *)(param_1 + 0x408);
  if (uVar13 < 0x40) goto LAB_01071608;
  goto LAB_01071684;
}

