// FUN_01405d28 @ 01405d28 size=600 calls_out=2 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x01405f04) */

void FUN_01405d28(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  uVar10 = param_2 & 0xfffffff0;
  puVar5 = (uint *)(*param_1 + 0xa80);
  if (uVar10 != *puVar5) {
    piVar8 = param_1 + 1;
    bVar11 = (param_2 & 0xf) < uVar10 - *puVar5 >> 4;
    iVar2 = *param_1;
    do {
      DataMemoryBarrier(0xb);
      iVar3 = *(int *)(iVar2 + 0xa84);
      if (*(int *)(iVar2 + 0xa84) == 0) {
        uVar9 = *puVar5;
        iVar3 = thunk_FUN_016d4a50(0xa90);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0xa90);
        }
        *(uint *)(iVar3 + 0xa80) = uVar9 + 0x10;
        piVar6 = (int *)(iVar2 + 0xa84);
        *(undefined4 *)(iVar3 + 0xa84) = 0;
        *(undefined4 *)(iVar3 + 0xa88) = 0;
        *(undefined4 *)(iVar3 + 0xa8c) = 0;
        iVar4 = *piVar6;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar6);
            if (bVar1) {
              *piVar6 = iVar3;
              DataMemoryBarrier(0xb);
              goto LAB_01405ea8;
            }
            iVar4 = *piVar6;
          } while (iVar4 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        piVar6 = (int *)(iVar4 + 0xa84);
        *(int *)(iVar3 + 0xa80) = *(int *)(iVar4 + 0xa80) + 0x10;
        iVar7 = *piVar6;
        if (iVar7 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar6);
            if (bVar1) {
              *piVar6 = iVar3;
              bVar1 = true;
              goto LAB_01405e50;
            }
            iVar7 = *piVar6;
          } while (iVar7 == 0);
        }
LAB_01405e48:
        do {
          bVar1 = false;
          ClearExclusiveLocal();
LAB_01405e50:
          while( true ) {
            DataMemoryBarrier(0xb);
            if (bVar1) {
              iVar3 = iVar4;
              goto LAB_01405ea8;
            }
            HintYield();
            *(int *)(iVar3 + 0xa80) = *(int *)(iVar7 + 0xa80) + 0x10;
            piVar6 = (int *)(iVar7 + 0xa84);
            iVar7 = *piVar6;
            if (iVar7 != 0) break;
            DataMemoryBarrier(0xb);
            while (bVar1 = (bool)hasExclusiveAccess(piVar6), !bVar1) {
              iVar7 = *piVar6;
              if (iVar7 != 0) goto LAB_01405e48;
            }
            *piVar6 = iVar3;
            bVar1 = true;
          }
        } while( true );
      }
LAB_01405ea8:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar11 & (~*(uint *)(iVar2 + 0xa88) & 0xffff) == 0)) {
        if (*param_1 == iVar2) {
          DataMemoryBarrier(0xb);
LAB_01405ed8:
          bVar11 = (bool)hasExclusiveAccess(param_1);
          if (!bVar11) goto code_r0x01405ee4;
          *param_1 = iVar3;
          DataMemoryBarrier(0xb);
          puVar5 = (uint *)(iVar2 + 0xa88);
          do {
            iVar4 = *piVar8;
            bVar11 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar11);
          *piVar8 = iVar4;
          *(int *)(iVar2 + 0xa8c) = iVar4;
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar11);
          *puVar5 = *puVar5 | 0x10000;
          bVar11 = true;
          goto LAB_01405d7c;
        }
LAB_01405ef0:
        ClearExclusiveLocal();
        bVar11 = false;
      }
      else {
        bVar11 = false;
      }
LAB_01405d7c:
      HintYield();
      puVar5 = (uint *)(iVar3 + 0xa80);
      iVar2 = iVar3;
    } while (*puVar5 != uVar10);
  }
  return;
code_r0x01405ee4:
  if (*param_1 != iVar2) goto LAB_01405ef0;
  goto LAB_01405ed8;
}

