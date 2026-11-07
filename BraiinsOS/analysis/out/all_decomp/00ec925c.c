// FUN_00ec925c @ 00ec925c size=784 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00ec94b4) */

void FUN_00ec925c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
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
    puVar9 = (uint *)(param_1 + 0x24);
    piVar4 = (int *)(param_1 + 0x20);
    do {
      uVar5 = *puVar9;
      bVar12 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar12);
    *puVar9 = uVar5 + 1;
    DataMemoryBarrier(0xb);
    uVar11 = uVar5 & 0xfffffff0;
    iVar2 = *piVar4;
    DataMemoryBarrier(0xb);
    if (uVar11 != *(uint *)(iVar2 + 0x180)) {
      bVar12 = (uVar5 & 0xf) < uVar11 - *(uint *)(iVar2 + 0x180) >> 4;
      iVar3 = iVar2;
      do {
        DataMemoryBarrier(0xb);
        iVar2 = *(int *)(iVar3 + 0x184);
        if (*(int *)(iVar3 + 0x184) == 0) {
          iVar10 = *(int *)(iVar3 + 0x180);
          iVar2 = thunk_FUN_016d4a50(400);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,400);
          }
          piVar7 = (int *)(iVar3 + 0x184);
          *(int *)(iVar2 + 0x180) = iVar10 + 0x10;
          *(undefined4 *)(iVar2 + 0x184) = 0;
          *(undefined4 *)(iVar2 + 0x188) = 0;
          *(undefined4 *)(iVar2 + 0x18c) = 0;
          iVar10 = *piVar7;
          if (iVar10 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar7);
              if (bVar1) {
                *piVar7 = iVar2;
                DataMemoryBarrier(0xb);
                goto LAB_00ec9458;
              }
              iVar10 = *piVar7;
            } while (iVar10 == 0);
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          piVar7 = (int *)(iVar10 + 0x184);
          *(int *)(iVar2 + 0x180) = *(int *)(iVar10 + 0x180) + 0x10;
          iVar8 = *piVar7;
          if (iVar8 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(piVar7);
              if (bVar1) {
                *piVar7 = iVar2;
                bVar1 = true;
                goto LAB_00ec9400;
              }
              iVar8 = *piVar7;
            } while (iVar8 == 0);
          }
LAB_00ec93f8:
          do {
            bVar1 = false;
            ClearExclusiveLocal();
LAB_00ec9400:
            while( true ) {
              DataMemoryBarrier(0xb);
              if (bVar1) {
                iVar2 = iVar10;
                goto LAB_00ec9458;
              }
              HintYield();
              *(int *)(iVar2 + 0x180) = *(int *)(iVar8 + 0x180) + 0x10;
              piVar7 = (int *)(iVar8 + 0x184);
              iVar8 = *piVar7;
              if (iVar8 != 0) break;
              DataMemoryBarrier(0xb);
              while (bVar1 = (bool)hasExclusiveAccess(piVar7), !bVar1) {
                iVar8 = *piVar7;
                if (iVar8 != 0) goto LAB_00ec93f8;
              }
              *piVar7 = iVar2;
              bVar1 = true;
            }
          } while( true );
        }
LAB_00ec9458:
        DataMemoryBarrier(0xb);
        if ((bool)(bVar12 & (~*(uint *)(iVar3 + 0x188) & 0xffff) == 0)) {
          if (*piVar4 == iVar3) {
            DataMemoryBarrier(0xb);
LAB_00ec9488:
            bVar12 = (bool)hasExclusiveAccess(piVar4);
            if (!bVar12) goto code_r0x00ec9494;
            *piVar4 = iVar2;
            puVar6 = (uint *)(iVar3 + 0x188);
            DataMemoryBarrier(0xb);
            do {
              uVar5 = *puVar9;
              bVar12 = (bool)hasExclusiveAccess(puVar9);
            } while (!bVar12);
            *puVar9 = uVar5;
            *(uint *)(iVar3 + 0x18c) = uVar5;
            DataMemoryBarrier(0xb);
            do {
              bVar12 = (bool)hasExclusiveAccess(puVar6);
            } while (!bVar12);
            *puVar6 = *puVar6 | 0x10000;
            bVar12 = true;
            goto LAB_00ec9334;
          }
LAB_00ec94a0:
          ClearExclusiveLocal();
          bVar12 = false;
        }
        else {
          bVar12 = false;
        }
LAB_00ec9334:
        HintYield();
        iVar3 = iVar2;
      } while (*(uint *)(iVar2 + 0x180) != uVar11);
    }
    puVar9 = (uint *)(iVar2 + 0x188);
    DataMemoryBarrier(0xb);
    do {
      bVar12 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar12);
    *puVar9 = *puVar9 | 0x20000;
    puVar9 = (uint *)(param_1 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar9;
      bVar12 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar12);
    *puVar9 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar2 = *(int *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar12);
      *puVar9 = 0;
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ec955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x44));
        return;
      }
    }
  }
  return;
code_r0x00ec9494:
  if (*piVar4 != iVar3) goto LAB_00ec94a0;
  goto LAB_00ec9488;
}

