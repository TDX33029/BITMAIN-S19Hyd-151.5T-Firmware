// FUN_0148fc48 @ 0148fc48 size=800 calls_out=2 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x0148feac) */

void FUN_0148fc48(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  piVar3 = (int *)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar3;
    bVar12 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar12);
  *piVar3 = iVar9 + -1;
  DataMemoryBarrier(0xb);
  if (iVar9 == 1) {
    puVar8 = (uint *)(param_1 + 0x24);
    piVar3 = (int *)(param_1 + 0x20);
    do {
      uVar4 = *puVar8;
      bVar12 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar12);
    *puVar8 = uVar4 + 1;
    DataMemoryBarrier(0xb);
    uVar11 = uVar4 & 0xfffffff0;
    iVar9 = *piVar3;
    DataMemoryBarrier(0xb);
    if (uVar11 != *(uint *)(iVar9 + 0xa80)) {
      bVar12 = (uVar4 & 0xf) < uVar11 - *(uint *)(iVar9 + 0xa80) >> 4;
      iVar2 = iVar9;
      do {
        DataMemoryBarrier(0xb);
        iVar9 = *(int *)(iVar2 + 0xa84);
        if (*(int *)(iVar2 + 0xa84) == 0) {
          iVar10 = *(int *)(iVar2 + 0xa80);
          iVar9 = thunk_FUN_016d4a50(0xa90);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0xa90);
          }
          *(int *)(iVar9 + 0xa80) = iVar10 + 0x10;
          piVar6 = (int *)(iVar2 + 0xa84);
          *(undefined4 *)(iVar9 + 0xa84) = 0;
          *(undefined4 *)(iVar9 + 0xa88) = 0;
          *(undefined4 *)(iVar9 + 0xa8c) = 0;
          iVar10 = *piVar6;
          if (iVar10 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar6);
              if (bVar1) {
                *piVar6 = iVar9;
                DataMemoryBarrier(0xb);
                goto LAB_0148fe50;
              }
              iVar10 = *piVar6;
            } while (iVar10 == 0);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          piVar6 = (int *)(iVar10 + 0xa84);
          *(int *)(iVar9 + 0xa80) = *(int *)(iVar10 + 0xa80) + 0x10;
          iVar7 = *piVar6;
          if (iVar7 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar6);
              if (bVar1) {
                *piVar6 = iVar9;
                bVar1 = true;
                goto LAB_0148fdf8;
              }
              iVar7 = *piVar6;
            } while (iVar7 == 0);
          }
LAB_0148fdf0:
          do {
            bVar1 = false;
            ClearExclusiveLocal();
LAB_0148fdf8:
            while( true ) {
              DataMemoryBarrier(0xb);
              if (bVar1) {
                iVar9 = iVar10;
                goto LAB_0148fe50;
              }
              HintYield();
              *(int *)(iVar9 + 0xa80) = *(int *)(iVar7 + 0xa80) + 0x10;
              piVar6 = (int *)(iVar7 + 0xa84);
              iVar7 = *piVar6;
              if (iVar7 != 0) break;
              DataMemoryBarrier(0xb);
              while (bVar1 = (bool)hasExclusiveAccess(piVar6), !bVar1) {
                iVar7 = *piVar6;
                if (iVar7 != 0) goto LAB_0148fdf0;
              }
              *piVar6 = iVar9;
              bVar1 = true;
            }
          } while( true );
        }
LAB_0148fe50:
        DataMemoryBarrier(0xb);
        if ((bool)(bVar12 & (~*(uint *)(iVar2 + 0xa88) & 0xffff) == 0)) {
          if (*piVar3 == iVar2) {
            DataMemoryBarrier(0xb);
LAB_0148fe80:
            bVar12 = (bool)hasExclusiveAccess(piVar3);
            if (!bVar12) goto code_r0x0148fe8c;
            *piVar3 = iVar9;
            DataMemoryBarrier(0xb);
            puVar5 = (uint *)(iVar2 + 0xa88);
            do {
              uVar4 = *puVar8;
              bVar12 = (bool)hasExclusiveAccess(puVar8);
            } while (!bVar12);
            *puVar8 = uVar4;
            *(uint *)(iVar2 + 0xa8c) = uVar4;
            DataMemoryBarrier(0xb);
            do {
              bVar12 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar12);
            *puVar5 = *puVar5 | 0x10000;
            bVar12 = true;
            goto LAB_0148fd28;
          }
LAB_0148fe98:
          ClearExclusiveLocal();
          bVar12 = false;
        }
        else {
          bVar12 = false;
        }
LAB_0148fd28:
        HintYield();
        iVar2 = iVar9;
      } while (*(uint *)(iVar9 + 0xa80) != uVar11);
    }
    puVar8 = (uint *)(iVar9 + 0xa88);
    DataMemoryBarrier(0xb);
    do {
      bVar12 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar12);
    *puVar8 = *puVar8 | 0x20000;
    DataMemoryBarrier(0xb);
    puVar8 = (uint *)(param_1 + 0x48);
    do {
      uVar4 = *puVar8;
      bVar12 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar12);
    *puVar8 = uVar4 | 2;
    DataMemoryBarrier(0xb);
    if (uVar4 == 0) {
      iVar9 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar12);
      *puVar8 = 0;
      if (iVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0148ff58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar9 + 4))(*(undefined4 *)(param_1 + 0x44));
        return;
      }
    }
  }
  return;
code_r0x0148fe8c:
  if (*piVar3 != iVar2) goto LAB_0148fe98;
  goto LAB_0148fe80;
}

