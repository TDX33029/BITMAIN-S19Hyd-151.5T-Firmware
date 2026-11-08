// FUN_009f14cc @ 009f14cc size=564 calls_out=4 calls_in=5
// strings: 

undefined4 * FUN_009f14cc(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_2 + 4);
  iVar8 = *(int *)(param_1 + iVar13 * 4);
  DataMemoryBarrier(0xb);
  if (iVar8 != 0) goto LAB_009f14ec;
  uVar12 = *(uint *)(param_2 + 8);
  iVar8 = uVar12 * 0x14;
  uVar5 = 0;
  if (0x6666666 < uVar12) {
LAB_009f155c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,iVar8);
  }
  if (iVar8 == 0) {
    iVar3 = 4;
    uVar4 = 0;
    if (uVar12 != 0) goto LAB_009f15ac;
LAB_009f1630:
    piVar2 = (int *)(param_1 + iVar13 * 4);
    iVar8 = *piVar2;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(iVar8);
    if (iVar3 == 0) {
      uVar5 = 4;
      goto LAB_009f155c;
    }
    uVar4 = uVar12;
    if (uVar12 == 0) goto LAB_009f1630;
LAB_009f15ac:
    iVar6 = 0x10;
    uVar11 = uVar12;
    do {
      *(undefined1 *)(iVar3 + iVar6) = 0;
      iVar6 = iVar6 + 0x14;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if ((uVar12 < uVar4) &&
       (iVar3 = thunk_FUN_016d4ea4(iVar3,iVar8,uVar4,iVar6,uVar4,iVar3,uVar12), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar8);
    }
    piVar2 = (int *)(param_1 + iVar13 * 4);
    iVar8 = *piVar2;
  }
  if (iVar8 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = iVar3;
        DataMemoryBarrier(0xb);
        iVar8 = iVar3;
        goto LAB_009f14ec;
      }
      iVar8 = *piVar2;
    } while (iVar8 == 0);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if (uVar12 != 0) {
    puVar9 = (undefined4 *)(iVar3 + 8);
    do {
      if ((*(char *)(puVar9 + 2) == '\x01') && (puVar9[-1] != 0)) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 5;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    thunk_FUN_016d3fb4(iVar3);
  }
LAB_009f14ec:
  piVar2 = (int *)(param_1 + 0x7c);
  uVar5 = param_3[1];
  uVar10 = param_3[2];
  uVar7 = param_3[3];
  puVar9 = (undefined4 *)(iVar8 + *(int *)(param_2 + 0xc) * 0x14);
  *puVar9 = *param_3;
  puVar9[1] = uVar5;
  puVar9[2] = uVar10;
  puVar9[3] = uVar7;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(puVar9 + 4) = 1;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return puVar9;
}

