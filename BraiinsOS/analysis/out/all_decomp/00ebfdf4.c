// FUN_00ebfdf4 @ 00ebfdf4 size=820 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x00ebfff8) */

void FUN_00ebfdf4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  iVar11 = *param_1;
  puVar9 = (uint *)(iVar11 + 0x24);
  piVar10 = (int *)(iVar11 + 0x20);
  do {
    uVar8 = *puVar9;
    bVar14 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar14);
  *puVar9 = uVar8 + 1;
  DataMemoryBarrier(0xb);
  uVar12 = uVar8 & 0xfffffff0;
  iVar1 = *piVar10;
  DataMemoryBarrier(0xb);
  if (uVar12 != *(uint *)(iVar1 + 0x900)) {
    bVar14 = (uVar8 & 0xf) < uVar12 - *(uint *)(iVar1 + 0x900) >> 4;
    iVar2 = iVar1;
    do {
      DataMemoryBarrier(0xb);
      iVar1 = *(int *)(iVar2 + 0x904);
      if (*(int *)(iVar2 + 0x904) == 0) {
        iVar13 = *(int *)(iVar2 + 0x900);
        iVar1 = thunk_FUN_016d4a50(0x910);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x910);
        }
        *(int *)(iVar1 + 0x900) = iVar13 + 0x10;
        piVar4 = (int *)(iVar2 + 0x904);
        *(undefined4 *)(iVar1 + 0x904) = 0;
        *(undefined4 *)(iVar1 + 0x908) = 0;
        *(undefined4 *)(iVar1 + 0x90c) = 0;
        iVar13 = *piVar4;
        if (iVar13 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar7 = (bool)hasExclusiveAccess(piVar4);
            if (bVar7) {
              *piVar4 = iVar1;
              DataMemoryBarrier(0xb);
              goto LAB_00ebff9c;
            }
            iVar13 = *piVar4;
          } while (iVar13 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        piVar4 = (int *)(iVar13 + 0x904);
        *(int *)(iVar1 + 0x900) = *(int *)(iVar13 + 0x900) + 0x10;
        iVar5 = *piVar4;
        if (iVar5 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar7 = (bool)hasExclusiveAccess(piVar4);
            if (bVar7) {
              *piVar4 = iVar1;
              bVar7 = true;
              goto LAB_00ebff44;
            }
            iVar5 = *piVar4;
          } while (iVar5 == 0);
        }
LAB_00ebff3c:
        do {
          bVar7 = false;
          ClearExclusiveLocal();
LAB_00ebff44:
          while( true ) {
            DataMemoryBarrier(0xb);
            if (bVar7) {
              iVar1 = iVar13;
              goto LAB_00ebff9c;
            }
            HintYield();
            *(int *)(iVar1 + 0x900) = *(int *)(iVar5 + 0x900) + 0x10;
            piVar4 = (int *)(iVar5 + 0x904);
            iVar5 = *piVar4;
            if (iVar5 != 0) break;
            DataMemoryBarrier(0xb);
            while (bVar7 = (bool)hasExclusiveAccess(piVar4), !bVar7) {
              iVar5 = *piVar4;
              if (iVar5 != 0) goto LAB_00ebff3c;
            }
            *piVar4 = iVar1;
            bVar7 = true;
          }
        } while( true );
      }
LAB_00ebff9c:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar14 & (~*(uint *)(iVar2 + 0x908) & 0xffff) == 0)) {
        if (*piVar10 == iVar2) {
          DataMemoryBarrier(0xb);
LAB_00ebffcc:
          bVar14 = (bool)hasExclusiveAccess(piVar10);
          if (!bVar14) goto code_r0x00ebffd8;
          *piVar10 = iVar1;
          DataMemoryBarrier(0xb);
          puVar3 = (uint *)(iVar2 + 0x908);
          do {
            uVar6 = *puVar9;
            bVar14 = (bool)hasExclusiveAccess(puVar9);
          } while (!bVar14);
          *puVar9 = uVar6;
          *(uint *)(iVar2 + 0x90c) = uVar6;
          DataMemoryBarrier(0xb);
          do {
            bVar14 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar14);
          *puVar3 = *puVar3 | 0x10000;
          bVar14 = true;
          goto LAB_00ebfe74;
        }
LAB_00ebffe4:
        ClearExclusiveLocal();
        bVar14 = false;
      }
      else {
        bVar14 = false;
      }
LAB_00ebfe74:
      HintYield();
      iVar2 = iVar1;
    } while (*(uint *)(iVar1 + 0x900) != uVar12);
  }
  FUN_016dd1aa(iVar1 + (uVar8 & 0xf) * 0x90,param_2,0x90);
  puVar9 = (uint *)(iVar1 + 0x908);
  DataMemoryBarrier(0xb);
  do {
    bVar14 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar14);
  *puVar9 = *puVar9 | 1 << (uVar8 & 0xf);
  puVar9 = (uint *)(iVar11 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar9;
    bVar14 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar14);
  *puVar9 = uVar8 | 2;
  DataMemoryBarrier(0xb);
  if (uVar8 == 0) {
    iVar1 = *(int *)(iVar11 + 0x40);
    *(undefined4 *)(iVar11 + 0x40) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar14 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar14);
    *puVar9 = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar11 + 0x44));
    }
  }
  return;
code_r0x00ebffd8:
  if (*piVar10 != iVar2) goto LAB_00ebffe4;
  goto LAB_00ebffcc;
}

