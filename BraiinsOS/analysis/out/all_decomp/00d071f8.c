// FUN_00d071f8 @ 00d071f8 size=804 calls_out=2 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00d073f8) */

void FUN_00d071f8(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar17 = *param_1;
  puVar11 = (uint *)(iVar17 + 0x24);
  piVar14 = (int *)(iVar17 + 0x20);
  do {
    uVar9 = *puVar11;
    bVar18 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar18);
  *puVar11 = uVar9 + 1;
  DataMemoryBarrier(0xb);
  uVar12 = uVar9 & 0xfffffff0;
  iVar2 = *piVar14;
  DataMemoryBarrier(0xb);
  if (uVar12 != *(uint *)(iVar2 + 0x100)) {
    bVar18 = (uVar9 & 0xf) < uVar12 - *(uint *)(iVar2 + 0x100) >> 4;
    iVar3 = iVar2;
    do {
      DataMemoryBarrier(0xb);
      iVar2 = *(int *)(iVar3 + 0x104);
      if (*(int *)(iVar3 + 0x104) == 0) {
        iVar16 = *(int *)(iVar3 + 0x100);
        iVar2 = thunk_FUN_016d4a50(0x110);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x110);
        }
        piVar5 = (int *)(iVar3 + 0x104);
        *(int *)(iVar2 + 0x100) = iVar16 + 0x10;
        *(undefined4 *)(iVar2 + 0x104) = 0;
        *(undefined4 *)(iVar2 + 0x108) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
        iVar16 = *piVar5;
        if (iVar16 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = iVar2;
              DataMemoryBarrier(0xb);
              goto LAB_00d0739c;
            }
            iVar16 = *piVar5;
          } while (iVar16 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        piVar5 = (int *)(iVar16 + 0x104);
        *(int *)(iVar2 + 0x100) = *(int *)(iVar16 + 0x100) + 0x10;
        iVar6 = *piVar5;
        if (iVar6 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = iVar2;
              bVar1 = true;
              goto LAB_00d07344;
            }
            iVar6 = *piVar5;
          } while (iVar6 == 0);
        }
LAB_00d0733c:
        do {
          bVar1 = false;
          ClearExclusiveLocal();
LAB_00d07344:
          while( true ) {
            DataMemoryBarrier(0xb);
            if (bVar1) {
              iVar2 = iVar16;
              goto LAB_00d0739c;
            }
            HintYield();
            *(int *)(iVar2 + 0x100) = *(int *)(iVar6 + 0x100) + 0x10;
            piVar5 = (int *)(iVar6 + 0x104);
            iVar6 = *piVar5;
            if (iVar6 != 0) break;
            DataMemoryBarrier(0xb);
            while (bVar1 = (bool)hasExclusiveAccess(piVar5), !bVar1) {
              iVar6 = *piVar5;
              if (iVar6 != 0) goto LAB_00d0733c;
            }
            *piVar5 = iVar2;
            bVar1 = true;
          }
        } while( true );
      }
LAB_00d0739c:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar18 & (~*(uint *)(iVar3 + 0x108) & 0xffff) == 0)) {
        if (*piVar14 == iVar3) {
          DataMemoryBarrier(0xb);
LAB_00d073cc:
          bVar18 = (bool)hasExclusiveAccess(piVar14);
          if (!bVar18) goto code_r0x00d073d8;
          *piVar14 = iVar2;
          puVar4 = (uint *)(iVar3 + 0x108);
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar11;
            bVar18 = (bool)hasExclusiveAccess(puVar11);
          } while (!bVar18);
          *puVar11 = uVar7;
          *(uint *)(iVar3 + 0x10c) = uVar7;
          DataMemoryBarrier(0xb);
          do {
            bVar18 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar18);
          *puVar4 = *puVar4 | 0x10000;
          bVar18 = true;
          goto LAB_00d07278;
        }
LAB_00d073e4:
        ClearExclusiveLocal();
        bVar18 = false;
      }
      else {
        bVar18 = false;
      }
LAB_00d07278:
      HintYield();
      iVar3 = iVar2;
    } while (*(uint *)(iVar2 + 0x100) != uVar12);
  }
  uVar8 = param_2[1];
  uVar10 = param_2[2];
  uVar15 = param_2[3];
  puVar11 = (uint *)(iVar2 + 0x108);
  puVar13 = (undefined4 *)(iVar2 + (uVar9 & 0xf) * 0x10);
  *puVar13 = *param_2;
  puVar13[1] = uVar8;
  puVar13[2] = uVar10;
  puVar13[3] = uVar15;
  DataMemoryBarrier(0xb);
  do {
    bVar18 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar18);
  *puVar11 = *puVar11 | 1 << (uVar9 & 0xf);
  puVar11 = (uint *)(iVar17 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar11;
    bVar18 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar18);
  *puVar11 = uVar9 | 2;
  DataMemoryBarrier(0xb);
  if (uVar9 == 0) {
    iVar2 = *(int *)(iVar17 + 0x40);
    *(undefined4 *)(iVar17 + 0x40) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar18 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar18);
    *puVar11 = 0;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar17 + 0x44));
    }
  }
  return;
code_r0x00d073d8:
  if (*piVar14 != iVar3) goto LAB_00d073e4;
  goto LAB_00d073cc;
}

