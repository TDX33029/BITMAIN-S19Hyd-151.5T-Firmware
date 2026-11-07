// FUN_005c9e50 @ 005c9e50 size=672 calls_out=2 calls_in=8
// strings: 

/* WARNING: Removing unreachable block (ram,0x005ca078) */

void FUN_005c9e50(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  puVar3 = (uint *)(param_1 + 1);
  do {
    uVar5 = *puVar3;
    bVar12 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar12);
  *puVar3 = uVar5 + 1;
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  DataMemoryBarrier(0xb);
  uVar11 = uVar5 & 0xfffffff0;
  if (uVar11 != *(uint *)(iVar2 + 0x2e80)) {
    bVar12 = (uVar5 & 0xf) < uVar11 - *(uint *)(iVar2 + 0x2e80) >> 4;
    iVar4 = iVar2;
    do {
      DataMemoryBarrier(0xb);
      iVar2 = *(int *)(iVar4 + 0x2e84);
      if (*(int *)(iVar4 + 0x2e84) == 0) {
        iVar10 = *(int *)(iVar4 + 0x2e80);
        iVar2 = thunk_FUN_016d4a50(0x2e90);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x2e90);
        }
        piVar6 = (int *)(iVar2 + 0x2e80);
        piVar8 = (int *)(iVar4 + 0x2e84);
        *piVar6 = iVar10 + 0x10;
        *(undefined4 *)(iVar2 + 0x2e84) = 0;
        *(undefined4 *)(iVar2 + 0x2e88) = 0;
        *(undefined4 *)(iVar2 + 0x2e8c) = 0;
        iVar10 = *piVar8;
        if (iVar10 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar8);
            if (bVar1) {
              *piVar8 = iVar2;
              DataMemoryBarrier(0xb);
              goto LAB_005ca01c;
            }
            iVar10 = *piVar8;
          } while (iVar10 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        piVar8 = (int *)(iVar10 + 0x2e84);
        *piVar6 = *(int *)(iVar10 + 0x2e80) + 0x10;
        iVar9 = *piVar8;
        if (iVar9 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar8);
            if (bVar1) {
              *piVar8 = iVar2;
              bVar1 = true;
              goto LAB_005c9fc0;
            }
            iVar9 = *piVar8;
          } while (iVar9 == 0);
        }
LAB_005c9fb8:
        do {
          bVar1 = false;
          ClearExclusiveLocal();
LAB_005c9fc0:
          while( true ) {
            DataMemoryBarrier(0xb);
            if (bVar1) {
              iVar2 = iVar10;
              goto LAB_005ca01c;
            }
            HintYield();
            piVar8 = (int *)(iVar9 + 0x2e84);
            *piVar6 = *(int *)(iVar9 + 0x2e80) + 0x10;
            iVar9 = *piVar8;
            if (iVar9 != 0) break;
            DataMemoryBarrier(0xb);
            while (bVar1 = (bool)hasExclusiveAccess(piVar8), !bVar1) {
              iVar9 = *piVar8;
              if (iVar9 != 0) goto LAB_005c9fb8;
            }
            *piVar8 = iVar2;
            bVar1 = true;
          }
        } while( true );
      }
LAB_005ca01c:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar12 & (~*(uint *)(iVar4 + 0x2e88) & 0xffff) == 0)) {
        if (*param_1 == iVar4) {
          DataMemoryBarrier(0xb);
LAB_005ca04c:
          bVar12 = (bool)hasExclusiveAccess(param_1);
          if (!bVar12) goto code_r0x005ca058;
          *param_1 = iVar2;
          puVar7 = (uint *)(iVar4 + 0x2e88);
          DataMemoryBarrier(0xb);
          do {
            uVar5 = *puVar3;
            bVar12 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar12);
          *puVar3 = uVar5;
          *(uint *)(iVar4 + 0x2e8c) = uVar5;
          DataMemoryBarrier(0xb);
          do {
            bVar12 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar12);
          *puVar7 = *puVar7 | 0x10000;
          bVar12 = true;
          goto LAB_005c9ed8;
        }
LAB_005ca064:
        ClearExclusiveLocal();
        bVar12 = false;
      }
      else {
        bVar12 = false;
      }
LAB_005c9ed8:
      HintYield();
      iVar4 = iVar2;
    } while (*(uint *)(iVar2 + 0x2e80) != uVar11);
  }
  puVar3 = (uint *)(iVar2 + 0x2e88);
  DataMemoryBarrier(0xb);
  do {
    bVar12 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar12);
  *puVar3 = *puVar3 | 0x20000;
  return;
code_r0x005ca058:
  if (*param_1 != iVar4) goto LAB_005ca064;
  goto LAB_005ca04c;
}

