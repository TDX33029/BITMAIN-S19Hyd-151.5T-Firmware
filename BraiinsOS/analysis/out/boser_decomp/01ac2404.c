// FUN_01ac2404 @ 01ac2404 size=416 calls_out=4 calls_in=1
// strings: 

void FUN_01ac2404(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_30;
  int local_2c;
  uint local_28;
  
  iVar7 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(param_1 + iVar7 * 4);
  DataMemoryBarrier(0xb);
  if (iVar9 == 0) {
    uVar11 = *(uint *)(param_2 + 8);
    uVar6 = 0;
    iVar9 = uVar11 * 0x14;
    if (0x6666666 < uVar11) {
LAB_01ac2494:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,iVar9);
    }
    if (iVar9 == 0) {
      local_3c = 4;
      local_40 = 0;
    }
    else {
      uVar6 = 4;
      local_3c = FUN_01298504(iVar9,4);
      local_40 = uVar11;
      if (local_3c == 0) goto LAB_01ac2494;
    }
    local_38 = 0;
    if (uVar11 != 0) {
      puVar3 = (undefined1 *)(local_3c + 0x10);
      uVar5 = uVar11;
      do {
        *puVar3 = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 0x14;
      } while (uVar5 != 0);
      local_38 = uVar11;
    }
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = local_38;
    if ((local_38 < local_40) &&
       (iVar9 = FUN_006641a8(&local_40,local_38,4,0x14), iVar9 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    piVar4 = (int *)(param_1 + iVar7 * 4);
    iVar9 = *piVar4;
    if (iVar9 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (bVar1) {
          *piVar4 = local_3c;
          bVar1 = true;
          goto LAB_01ac257c;
        }
        iVar9 = *piVar4;
      } while (iVar9 == 0);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_01ac257c:
    DataMemoryBarrier(0xb);
    if (bVar1) {
      iVar9 = local_3c;
    }
    else {
      FUN_01ac21e4(local_3c,uVar11);
    }
  }
  puVar2 = (undefined4 *)(iVar9 + *(int *)(param_2 + 0xc) * 0x14);
  uVar6 = param_3[1];
  uVar8 = param_3[2];
  uVar10 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar8;
  puVar2[3] = uVar10;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(puVar2 + 4) = 1;
  piVar4 = (int *)(param_1 + 0x7c);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 + 1;
  return;
}

