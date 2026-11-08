// FUN_0148e620 @ 0148e620 size=816 calls_out=3 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x0148e81c) */

void FUN_0148e620(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  
  puVar10 = (uint *)(param_1 + 0x24);
  piVar9 = (int *)(param_1 + 0x20);
  do {
    uVar8 = *puVar10;
    bVar13 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar13);
  *puVar10 = uVar8 + 1;
  DataMemoryBarrier(0xb);
  uVar12 = uVar8 & 0xfffffff0;
  iVar1 = *piVar9;
  DataMemoryBarrier(0xb);
  if (uVar12 != *(uint *)(iVar1 + 0xa80)) {
    bVar13 = (uVar8 & 0xf) < uVar12 - *(uint *)(iVar1 + 0xa80) >> 4;
    iVar2 = iVar1;
    do {
      DataMemoryBarrier(0xb);
      iVar1 = *(int *)(iVar2 + 0xa84);
      if (*(int *)(iVar2 + 0xa84) == 0) {
        iVar11 = *(int *)(iVar2 + 0xa80);
        iVar1 = thunk_FUN_016d4a50(0xa90);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0xa90);
        }
        *(int *)(iVar1 + 0xa80) = iVar11 + 0x10;
        piVar4 = (int *)(iVar2 + 0xa84);
        *(undefined4 *)(iVar1 + 0xa84) = 0;
        *(undefined4 *)(iVar1 + 0xa88) = 0;
        *(undefined4 *)(iVar1 + 0xa8c) = 0;
        iVar11 = *piVar4;
        if (iVar11 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar7 = (bool)hasExclusiveAccess(piVar4);
            if (bVar7) {
              *piVar4 = iVar1;
              DataMemoryBarrier(0xb);
              goto LAB_0148e7c0;
            }
            iVar11 = *piVar4;
          } while (iVar11 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        piVar4 = (int *)(iVar11 + 0xa84);
        *(int *)(iVar1 + 0xa80) = *(int *)(iVar11 + 0xa80) + 0x10;
        iVar5 = *piVar4;
        if (iVar5 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar7 = (bool)hasExclusiveAccess(piVar4);
            if (bVar7) {
              *piVar4 = iVar1;
              bVar7 = true;
              goto LAB_0148e768;
            }
            iVar5 = *piVar4;
          } while (iVar5 == 0);
        }
LAB_0148e760:
        do {
          bVar7 = false;
          ClearExclusiveLocal();
LAB_0148e768:
          while( true ) {
            DataMemoryBarrier(0xb);
            if (bVar7) {
              iVar1 = iVar11;
              goto LAB_0148e7c0;
            }
            HintYield();
            *(int *)(iVar1 + 0xa80) = *(int *)(iVar5 + 0xa80) + 0x10;
            piVar4 = (int *)(iVar5 + 0xa84);
            iVar5 = *piVar4;
            if (iVar5 != 0) break;
            DataMemoryBarrier(0xb);
            while (bVar7 = (bool)hasExclusiveAccess(piVar4), !bVar7) {
              iVar5 = *piVar4;
              if (iVar5 != 0) goto LAB_0148e760;
            }
            *piVar4 = iVar1;
            bVar7 = true;
          }
        } while( true );
      }
LAB_0148e7c0:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar13 & (~*(uint *)(iVar2 + 0xa88) & 0xffff) == 0)) {
        if (*piVar9 == iVar2) {
          DataMemoryBarrier(0xb);
LAB_0148e7f0:
          bVar13 = (bool)hasExclusiveAccess(piVar9);
          if (!bVar13) goto code_r0x0148e7fc;
          *piVar9 = iVar1;
          DataMemoryBarrier(0xb);
          puVar3 = (uint *)(iVar2 + 0xa88);
          do {
            uVar6 = *puVar10;
            bVar13 = (bool)hasExclusiveAccess(puVar10);
          } while (!bVar13);
          *puVar10 = uVar6;
          *(uint *)(iVar2 + 0xa8c) = uVar6;
          DataMemoryBarrier(0xb);
          do {
            bVar13 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar13);
          *puVar3 = *puVar3 | 0x10000;
          bVar13 = true;
          goto LAB_0148e698;
        }
LAB_0148e808:
        ClearExclusiveLocal();
        bVar13 = false;
      }
      else {
        bVar13 = false;
      }
LAB_0148e698:
      HintYield();
      iVar2 = iVar1;
    } while (*(uint *)(iVar1 + 0xa80) != uVar12);
  }
  FUN_016dd52c((short)((ushort)uVar8 & 0xf) * 0xa8 + iVar1,param_2,0xa8);
  puVar10 = (uint *)(iVar1 + 0xa88);
  DataMemoryBarrier(0xb);
  do {
    bVar13 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar13);
  *puVar10 = *puVar10 | 1 << (uVar8 & 0xf);
  puVar10 = (uint *)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar10;
    bVar13 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar13);
  *puVar10 = uVar8 | 2;
  DataMemoryBarrier(0xb);
  if (uVar8 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar13 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar13);
    *puVar10 = 0;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0148e940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 4))(*(undefined4 *)(param_1 + 0x44));
      return;
    }
  }
  return;
code_r0x0148e7fc:
  if (*piVar9 != iVar2) goto LAB_0148e808;
  goto LAB_0148e7f0;
}

