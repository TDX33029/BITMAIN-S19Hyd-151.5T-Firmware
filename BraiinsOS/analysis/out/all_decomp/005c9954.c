// FUN_005c9954 @ 005c9954 size=628 calls_out=2 calls_in=9
// strings: 

/* WARNING: Removing unreachable block (ram,0x005c9b50) */

void FUN_005c9954(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  puVar3 = (uint *)(param_1 + 1);
  do {
    uVar5 = *puVar3;
    bVar11 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar11);
  *puVar3 = uVar5 + 1;
  DataMemoryBarrier(0xb);
  uVar10 = uVar5 & 0xfffffff0;
  iVar2 = *param_1;
  DataMemoryBarrier(0xb);
  if (uVar10 != *(uint *)(iVar2 + 0x80)) {
    bVar11 = (uVar5 & 0xf) < uVar10 - *(uint *)(iVar2 + 0x80) >> 4;
    iVar4 = iVar2;
    do {
      DataMemoryBarrier(0xb);
      iVar2 = *(int *)(iVar4 + 0x84);
      if (*(int *)(iVar4 + 0x84) == 0) {
        iVar9 = *(int *)(iVar4 + 0x80);
        iVar2 = thunk_FUN_016d4a50(0x90);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x90);
        }
        piVar7 = (int *)(iVar4 + 0x84);
        *(int *)(iVar2 + 0x80) = iVar9 + 0x10;
        *(undefined4 *)(iVar2 + 0x84) = 0;
        *(undefined4 *)(iVar2 + 0x88) = 0;
        *(undefined4 *)(iVar2 + 0x8c) = 0;
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar7);
            if (bVar1) {
              *piVar7 = iVar2;
              DataMemoryBarrier(0xb);
              goto LAB_005c9af4;
            }
            iVar9 = *piVar7;
          } while (iVar9 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        piVar7 = (int *)(iVar9 + 0x84);
        *(int *)(iVar2 + 0x80) = *(int *)(iVar9 + 0x80) + 0x10;
        iVar8 = *piVar7;
        if (iVar8 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar7);
            if (bVar1) {
              *piVar7 = iVar2;
              bVar1 = true;
              goto LAB_005c9a9c;
            }
            iVar8 = *piVar7;
          } while (iVar8 == 0);
        }
LAB_005c9a94:
        do {
          bVar1 = false;
          ClearExclusiveLocal();
LAB_005c9a9c:
          while( true ) {
            DataMemoryBarrier(0xb);
            if (bVar1) {
              iVar2 = iVar9;
              goto LAB_005c9af4;
            }
            HintYield();
            *(int *)(iVar2 + 0x80) = *(int *)(iVar8 + 0x80) + 0x10;
            piVar7 = (int *)(iVar8 + 0x84);
            iVar8 = *piVar7;
            if (iVar8 != 0) break;
            DataMemoryBarrier(0xb);
            while (bVar1 = (bool)hasExclusiveAccess(piVar7), !bVar1) {
              iVar8 = *piVar7;
              if (iVar8 != 0) goto LAB_005c9a94;
            }
            *piVar7 = iVar2;
            bVar1 = true;
          }
        } while( true );
      }
LAB_005c9af4:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar11 & (~*(uint *)(iVar4 + 0x88) & 0xffff) == 0)) {
        if (*param_1 == iVar4) {
          DataMemoryBarrier(0xb);
LAB_005c9b24:
          bVar11 = (bool)hasExclusiveAccess(param_1);
          if (!bVar11) goto code_r0x005c9b30;
          *param_1 = iVar2;
          puVar6 = (uint *)(iVar4 + 0x88);
          DataMemoryBarrier(0xb);
          do {
            uVar5 = *puVar3;
            bVar11 = (bool)hasExclusiveAccess(puVar3);
          } while (!bVar11);
          *puVar3 = uVar5;
          *(uint *)(iVar4 + 0x8c) = uVar5;
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar11);
          *puVar6 = *puVar6 | 0x10000;
          bVar11 = true;
          goto LAB_005c99d0;
        }
LAB_005c9b3c:
        ClearExclusiveLocal();
        bVar11 = false;
      }
      else {
        bVar11 = false;
      }
LAB_005c99d0:
      HintYield();
      iVar4 = iVar2;
    } while (*(uint *)(iVar2 + 0x80) != uVar10);
  }
  puVar3 = (uint *)(iVar2 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    bVar11 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar11);
  *puVar3 = *puVar3 | 0x20000;
  return;
code_r0x005c9b30:
  if (*param_1 != iVar4) goto LAB_005c9b3c;
  goto LAB_005c9b24;
}

