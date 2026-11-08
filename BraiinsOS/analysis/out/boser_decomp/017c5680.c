// FUN_017c5680 @ 017c5680 size=516 calls_out=1 calls_in=2
// strings: 

void FUN_017c5680(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  uVar10 = param_2 & 0xfffffff0;
  uVar6 = *(uint *)(*param_1 + 0xd00);
  if (uVar10 != uVar6) {
    piVar8 = param_1 + 1;
    bVar11 = (param_2 & 0xf) < uVar10 - uVar6 >> 4;
    iVar1 = *param_1;
    do {
      DataMemoryBarrier(0xb);
      iVar2 = *(int *)(iVar1 + 0xd04);
      if (*(int *)(iVar1 + 0xd04) == 0) {
        piVar9 = (int *)(iVar1 + 0xd04);
        iVar2 = FUN_017c5884(*(int *)(iVar1 + 0xd00) + 0x10);
        iVar3 = *piVar9;
        if (iVar3 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar5 = (bool)hasExclusiveAccess(piVar9);
            if (bVar5) {
              *piVar9 = iVar2;
              bVar5 = true;
              goto LAB_017c5718;
            }
            iVar3 = *piVar9;
          } while (iVar3 == 0);
        }
        bVar5 = false;
        ClearExclusiveLocal();
LAB_017c5718:
        DataMemoryBarrier(0xb);
        if (!bVar5) {
          piVar9 = (int *)(iVar3 + 0xd04);
          *(int *)(iVar2 + 0xd00) = *(int *)(iVar3 + 0xd00) + 0x10;
          iVar7 = *piVar9;
          if (iVar7 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar5 = (bool)hasExclusiveAccess(piVar9);
              if (bVar5) {
                *piVar9 = iVar2;
                goto LAB_017c5768;
              }
              iVar7 = *piVar9;
            } while (iVar7 == 0);
          }
LAB_017c5770:
          do {
            bVar5 = false;
            ClearExclusiveLocal();
            while( true ) {
              DataMemoryBarrier(0xb);
              if (bVar5) {
                iVar2 = iVar3;
                goto LAB_017c57c8;
              }
              HintYield();
              *(int *)(iVar2 + 0xd00) = *(int *)(iVar7 + 0xd00) + 0x10;
              piVar9 = (int *)(iVar7 + 0xd04);
              iVar7 = *piVar9;
              if (iVar7 != 0) break;
              DataMemoryBarrier(0xb);
              while (bVar5 = (bool)hasExclusiveAccess(piVar9), !bVar5) {
                iVar7 = *piVar9;
                if (iVar7 != 0) goto LAB_017c5770;
              }
              *piVar9 = iVar2;
LAB_017c5768:
              bVar5 = true;
            }
          } while( true );
        }
      }
LAB_017c57c8:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar11 & (~*(uint *)(iVar1 + 0xd08) & 0xffff) == 0)) {
        if (*param_1 == iVar1) {
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(param_1);
            if (bVar11) {
              *param_1 = iVar2;
              bVar5 = true;
              goto LAB_017c5828;
            }
          } while (*param_1 == iVar1);
        }
        bVar5 = false;
        ClearExclusiveLocal();
LAB_017c5828:
        bVar11 = false;
        if (bVar5) {
          puVar4 = (uint *)(iVar1 + 0xd08);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar8;
            bVar11 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar11);
          *piVar8 = iVar3;
          *(int *)(iVar1 + 0xd0c) = iVar3;
          DataMemoryBarrier(0xb);
          do {
            bVar11 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar11);
          *puVar4 = *puVar4 | 0x10000;
          bVar11 = true;
        }
      }
      else {
        bVar11 = false;
      }
      HintYield();
      iVar1 = iVar2;
    } while (*(uint *)(iVar2 + 0xd00) != uVar10);
  }
  return;
}

