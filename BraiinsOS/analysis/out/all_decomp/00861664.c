// FUN_00861664 @ 00861664 size=568 calls_out=10 calls_in=1
// strings: 

void FUN_00861664(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint unaff_r5;
  int *piVar5;
  int unaff_r6;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_a4 [128];
  
  iVar6 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar6 != 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + -1;
      bVar8 = *(int *)(iVar7 - iVar4) != 0;
      iVar1 = 0;
      if (bVar8) {
        unaff_r6 = iVar7 - iVar4;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar8 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar4 = iVar4 + -0xc;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  if (*(int *)(param_1 + 0x20) == 6 && *(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_007c4ed0(param_1 + 0x1ac8);
  FUN_00861a20((int *)(param_1 + 0x20));
  FUN_00861e18(param_1 + 0x1be8);
  piVar5 = (int *)(param_1 + 0x1c44);
  iVar6 = *piVar5;
  if (iVar6 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar6 + 0x10) < 0) {
      puVar2 = (uint *)(iVar6 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar8);
      *puVar2 = *puVar2 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar6 = *piVar5;
    }
    else {
      iVar6 = *piVar5;
    }
    if (iVar6 != 0) {
      do {
        while (FUN_008b55d8(auStack_a4 + 0x84,piVar5), unaff_r5 == 2) {
          if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar5 + 0x10) == 0) goto LAB_0086186c;
          FUN_016da3a8();
        }
      } while ((unaff_r5 & 1) != 0);
LAB_0086186c:
      piVar3 = (int *)*piVar5;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar8 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar8);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089e44c(*piVar5);
        }
      }
    }
  }
  piVar5 = *(int **)(param_1 + 0x1c38);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar8 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar8);
  *piVar5 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x1c38));
  }
  piVar5 = *(int **)(param_1 + 0x1c3c);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar8 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar8);
  *piVar5 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*(undefined4 *)(param_1 + 0x1c3c));
    return;
  }
  return;
}

