// FUN_008ea250 @ 008ea250 size=792 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x008ea4b0) */

void FUN_008ea250(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  
  piVar4 = (int *)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar12 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar12);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    puVar10 = (uint *)(param_1 + 0x24);
    piVar4 = (int *)(param_1 + 0x20);
    do {
      uVar7 = *puVar10;
      bVar12 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar12);
    *puVar10 = uVar7 + 1;
    DataMemoryBarrier(0xb);
    uVar11 = uVar7 & 0xfffffff0;
    iVar2 = *piVar4;
    DataMemoryBarrier(0xb);
    puVar5 = (uint *)(iVar2 + 0x100);
    if (uVar11 != *puVar5) {
      bVar12 = (uVar7 & 0xf) < uVar11 - *puVar5 >> 4;
      iVar3 = iVar2;
      do {
        DataMemoryBarrier(0xb);
        iVar2 = *(int *)(iVar3 + 0x104);
        if (*(int *)(iVar3 + 0x104) == 0) {
          uVar7 = *puVar5;
          iVar2 = thunk_FUN_016d4a50(0x110);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x110);
          }
          piVar8 = (int *)(iVar3 + 0x104);
          *(uint *)(iVar2 + 0x100) = uVar7 + 0x10;
          *(undefined4 *)(iVar2 + 0x104) = 0;
          *(undefined4 *)(iVar2 + 0x108) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
          iVar6 = *piVar8;
          if (iVar6 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar8);
              if (bVar1) {
                *piVar8 = iVar2;
                DataMemoryBarrier(0xb);
                goto LAB_008ea454;
              }
              iVar6 = *piVar8;
            } while (iVar6 == 0);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          piVar8 = (int *)(iVar6 + 0x104);
          *(int *)(iVar2 + 0x100) = *(int *)(iVar6 + 0x100) + 0x10;
          iVar9 = *piVar8;
          if (iVar9 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar8);
              if (bVar1) {
                *piVar8 = iVar2;
                bVar1 = true;
                goto LAB_008ea3fc;
              }
              iVar9 = *piVar8;
            } while (iVar9 == 0);
          }
LAB_008ea3f4:
          do {
            bVar1 = false;
            ClearExclusiveLocal();
LAB_008ea3fc:
            while( true ) {
              DataMemoryBarrier(0xb);
              if (bVar1) {
                iVar2 = iVar6;
                goto LAB_008ea454;
              }
              HintYield();
              *(int *)(iVar2 + 0x100) = *(int *)(iVar9 + 0x100) + 0x10;
              piVar8 = (int *)(iVar9 + 0x104);
              iVar9 = *piVar8;
              if (iVar9 != 0) break;
              DataMemoryBarrier(0xb);
              while (bVar1 = (bool)hasExclusiveAccess(piVar8), !bVar1) {
                iVar9 = *piVar8;
                if (iVar9 != 0) goto LAB_008ea3f4;
              }
              *piVar8 = iVar2;
              bVar1 = true;
            }
          } while( true );
        }
LAB_008ea454:
        DataMemoryBarrier(0xb);
        if ((bool)(bVar12 & (~*(uint *)(iVar3 + 0x108) & 0xffff) == 0)) {
          if (*piVar4 == iVar3) {
            DataMemoryBarrier(0xb);
LAB_008ea484:
            bVar12 = (bool)hasExclusiveAccess(piVar4);
            if (!bVar12) goto code_r0x008ea490;
            *piVar4 = iVar2;
            puVar5 = (uint *)(iVar3 + 0x108);
            DataMemoryBarrier(0xb);
            do {
              uVar7 = *puVar10;
              bVar12 = (bool)hasExclusiveAccess(puVar10);
            } while (!bVar12);
            *puVar10 = uVar7;
            *(uint *)(iVar3 + 0x10c) = uVar7;
            DataMemoryBarrier(0xb);
            do {
              bVar12 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar12);
            *puVar5 = *puVar5 | 0x10000;
            bVar12 = true;
            goto LAB_008ea32c;
          }
LAB_008ea49c:
          ClearExclusiveLocal();
          bVar12 = false;
        }
        else {
          bVar12 = false;
        }
LAB_008ea32c:
        HintYield();
        puVar5 = (uint *)(iVar2 + 0x100);
        iVar3 = iVar2;
      } while (*puVar5 != uVar11);
    }
    puVar10 = (uint *)(iVar2 + 0x108);
    DataMemoryBarrier(0xb);
    do {
      bVar12 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar12);
    *puVar10 = *puVar10 | 0x20000;
    puVar10 = (uint *)(param_1 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar10;
      bVar12 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar12);
    *puVar10 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar2 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar12);
      *puVar10 = 0;
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008ea558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x44));
        return;
      }
    }
  }
  return;
code_r0x008ea490:
  if (*piVar4 != iVar3) goto LAB_008ea49c;
  goto LAB_008ea484;
}

