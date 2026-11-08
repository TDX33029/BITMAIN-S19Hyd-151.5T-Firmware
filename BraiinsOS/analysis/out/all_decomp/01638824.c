// FUN_01638824 @ 01638824 size=484 calls_out=9 calls_in=1
// strings: 

undefined8 FUN_01638824(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint local_28;
  
  uVar2 = FUN_016da786();
  uVar9 = uVar2 * 0x10;
  bVar12 = 0xffffffe < uVar2;
  bVar11 = uVar2 == 0xfffffff;
  uVar3 = 0;
  if (uVar2 < 0x10000000) {
    bVar12 = 0x7ffffffb < uVar9;
    bVar11 = uVar9 == 0x7ffffffc;
  }
  if (bVar12 && !bVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (uVar9 == 0) {
    iVar4 = 4;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar9);
    uVar3 = uVar2;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9);
    }
  }
  local_28 = 0;
  if (uVar2 != 0) {
    iVar10 = 0;
    uVar9 = uVar2;
    do {
      piVar6 = (int *)thunk_FUN_016d4a50(0xa8);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xa8);
      }
      *piVar6 = 1;
      piVar6[1] = 1;
      FUN_016dd606(piVar6 + 2,0,0x98);
      piVar7 = piVar6 + 0x28;
      *piVar7 = 1;
      piVar6[0x29] = 1;
      do {
        iVar8 = *piVar6;
        bVar11 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar11);
      *piVar6 = iVar8 + 1;
      if (iVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1638a08);
        (*pcVar1)();
      }
      do {
        iVar8 = *piVar7;
        bVar11 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar11);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        FUN_0163b708(piVar6 + 0x22);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar6;
        bVar11 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar11);
      *piVar6 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(piVar6);
      }
      uVar9 = uVar9 - 1;
      puVar5 = (undefined4 *)(iVar4 + iVar10 * 0x10);
      *puVar5 = piVar6;
      iVar10 = iVar10 + 1;
      *(undefined1 *)(puVar5 + 3) = 0;
      puVar5[2] = 3;
      *(undefined1 *)(puVar5 + 1) = 0;
    } while (uVar9 != 0);
    local_28 = uVar2;
  }
  if (uVar3 <= local_28) {
    return CONCAT44(local_28,iVar4);
  }
  if (local_28 == 0) {
    thunk_FUN_016d3fb4(iVar4);
    return 4;
  }
  iVar4 = thunk_FUN_016d4ea4(iVar4,local_28 << 4);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,local_28 << 4);
  }
  return CONCAT44(local_28,iVar4);
}

