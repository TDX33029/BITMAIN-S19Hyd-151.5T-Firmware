// FUN_00d06a4c @ 00d06a4c size=800 calls_out=2 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x00d06c44) */

void FUN_00d06a4c(int param_1,undefined4 *param_2)

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
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  puVar13 = (uint *)(param_1 + 0x24);
  piVar11 = (int *)(param_1 + 0x20);
  do {
    uVar9 = *puVar13;
    bVar17 = (bool)hasExclusiveAccess(puVar13);
  } while (!bVar17);
  *puVar13 = uVar9 + 1;
  DataMemoryBarrier(0xb);
  uVar16 = uVar9 & 0xfffffff0;
  iVar2 = *piVar11;
  DataMemoryBarrier(0xb);
  if (uVar16 != *(uint *)(iVar2 + 0x100)) {
    bVar17 = (uVar9 & 0xf) < uVar16 - *(uint *)(iVar2 + 0x100) >> 4;
    iVar3 = iVar2;
    do {
      DataMemoryBarrier(0xb);
      iVar2 = *(int *)(iVar3 + 0x104);
      if (*(int *)(iVar3 + 0x104) == 0) {
        iVar15 = *(int *)(iVar3 + 0x100);
        iVar2 = thunk_FUN_016d4a50(0x110);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x110);
        }
        piVar5 = (int *)(iVar3 + 0x104);
        *(int *)(iVar2 + 0x100) = iVar15 + 0x10;
        *(undefined4 *)(iVar2 + 0x104) = 0;
        *(undefined4 *)(iVar2 + 0x108) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
        iVar15 = *piVar5;
        if (iVar15 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = iVar2;
              DataMemoryBarrier(0xb);
              goto LAB_00d06be8;
            }
            iVar15 = *piVar5;
          } while (iVar15 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        piVar5 = (int *)(iVar15 + 0x104);
        *(int *)(iVar2 + 0x100) = *(int *)(iVar15 + 0x100) + 0x10;
        iVar6 = *piVar5;
        if (iVar6 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = iVar2;
              bVar1 = true;
              goto LAB_00d06b90;
            }
            iVar6 = *piVar5;
          } while (iVar6 == 0);
        }
LAB_00d06b88:
        do {
          bVar1 = false;
          ClearExclusiveLocal();
LAB_00d06b90:
          while( true ) {
            DataMemoryBarrier(0xb);
            if (bVar1) {
              iVar2 = iVar15;
              goto LAB_00d06be8;
            }
            HintYield();
            *(int *)(iVar2 + 0x100) = *(int *)(iVar6 + 0x100) + 0x10;
            piVar5 = (int *)(iVar6 + 0x104);
            iVar6 = *piVar5;
            if (iVar6 != 0) break;
            DataMemoryBarrier(0xb);
            while (bVar1 = (bool)hasExclusiveAccess(piVar5), !bVar1) {
              iVar6 = *piVar5;
              if (iVar6 != 0) goto LAB_00d06b88;
            }
            *piVar5 = iVar2;
            bVar1 = true;
          }
        } while( true );
      }
LAB_00d06be8:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar17 & (~*(uint *)(iVar3 + 0x108) & 0xffff) == 0)) {
        if (*piVar11 == iVar3) {
          DataMemoryBarrier(0xb);
LAB_00d06c18:
          bVar17 = (bool)hasExclusiveAccess(piVar11);
          if (!bVar17) goto code_r0x00d06c24;
          *piVar11 = iVar2;
          puVar4 = (uint *)(iVar3 + 0x108);
          DataMemoryBarrier(0xb);
          do {
            uVar7 = *puVar13;
            bVar17 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar17);
          *puVar13 = uVar7;
          *(uint *)(iVar3 + 0x10c) = uVar7;
          DataMemoryBarrier(0xb);
          do {
            bVar17 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar17);
          *puVar4 = *puVar4 | 0x10000;
          bVar17 = true;
          goto LAB_00d06ac4;
        }
LAB_00d06c30:
        ClearExclusiveLocal();
        bVar17 = false;
      }
      else {
        bVar17 = false;
      }
LAB_00d06ac4:
      HintYield();
      iVar3 = iVar2;
    } while (*(uint *)(iVar2 + 0x100) != uVar16);
  }
  uVar8 = param_2[1];
  uVar10 = param_2[2];
  uVar14 = param_2[3];
  puVar13 = (uint *)(iVar2 + 0x108);
  puVar12 = (undefined4 *)(iVar2 + (uVar9 & 0xf) * 0x10);
  *puVar12 = *param_2;
  puVar12[1] = uVar8;
  puVar12[2] = uVar10;
  puVar12[3] = uVar14;
  DataMemoryBarrier(0xb);
  do {
    bVar17 = (bool)hasExclusiveAccess(puVar13);
  } while (!bVar17);
  *puVar13 = *puVar13 | 1 << (uVar9 & 0xf);
  puVar13 = (uint *)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar13;
    bVar17 = (bool)hasExclusiveAccess(puVar13);
  } while (!bVar17);
  *puVar13 = uVar9 | 2;
  DataMemoryBarrier(0xb);
  if (uVar9 == 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar17 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar17);
    *puVar13 = 0;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d06d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x44));
      return;
    }
  }
  return;
code_r0x00d06c24:
  if (*piVar11 != iVar3) goto LAB_00d06c30;
  goto LAB_00d06c18;
}

