// FUN_011dfa30 @ 011dfa30 size=500 calls_out=1 calls_in=2
// strings: 

void FUN_011dfa30(int *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  iVar2 = *param_1;
  DataMemoryBarrier(0xb);
  uVar10 = param_2 & 0xfffffff0;
  if (uVar10 != *(uint *)(iVar2 + 0x280)) {
    bVar1 = 0;
    piVar9 = param_1 + 1;
    if ((param_2 & 0xf) < uVar10 - *(uint *)(iVar2 + 0x280) >> 4) {
      bVar1 = 1;
    }
    do {
      DataMemoryBarrier(0xb);
      iVar3 = *(int *)(iVar2 + 0x284);
      if (*(int *)(iVar2 + 0x284) == 0) {
        piVar8 = (int *)(iVar2 + 0x284);
        iVar3 = FUN_00f267bc(*(int *)(iVar2 + 0x280) + 0x10);
        iVar4 = *piVar8;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar6 = (bool)hasExclusiveAccess(piVar8);
            if (bVar6) {
              *piVar8 = iVar3;
              bVar6 = true;
              goto LAB_011dfabc;
            }
            iVar4 = *piVar8;
          } while (iVar4 == 0);
        }
        bVar6 = false;
        ClearExclusiveLocal();
LAB_011dfabc:
        DataMemoryBarrier(0xb);
        if (!bVar6) {
          piVar8 = (int *)(iVar4 + 0x284);
          *(int *)(iVar3 + 0x280) = *(int *)(iVar4 + 0x280) + 0x10;
          iVar7 = *piVar8;
          if (iVar7 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar6 = (bool)hasExclusiveAccess(piVar8);
              if (bVar6) {
                *piVar8 = iVar3;
                goto LAB_011dfb0c;
              }
              iVar7 = *piVar8;
            } while (iVar7 == 0);
          }
LAB_011dfb14:
          do {
            bVar6 = false;
            ClearExclusiveLocal();
            while( true ) {
              DataMemoryBarrier(0xb);
              if (bVar6) {
                iVar3 = iVar4;
                goto LAB_011dfb6c;
              }
              HintYield();
              *(int *)(iVar3 + 0x280) = *(int *)(iVar7 + 0x280) + 0x10;
              piVar8 = (int *)(iVar7 + 0x284);
              iVar7 = *piVar8;
              if (iVar7 != 0) break;
              DataMemoryBarrier(0xb);
              while (bVar6 = (bool)hasExclusiveAccess(piVar8), !bVar6) {
                iVar7 = *piVar8;
                if (iVar7 != 0) goto LAB_011dfb14;
              }
              *piVar8 = iVar3;
LAB_011dfb0c:
              bVar6 = true;
            }
          } while( true );
        }
      }
LAB_011dfb6c:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar1 & (~*(uint *)(iVar2 + 0x288) & 0xffff) == 0)) {
        if (*param_1 == iVar2) {
          DataMemoryBarrier(0xb);
          do {
            bVar6 = (bool)hasExclusiveAccess(param_1);
            if (bVar6) {
              *param_1 = iVar3;
              bVar6 = true;
              goto LAB_011dfbcc;
            }
          } while (*param_1 == iVar2);
        }
        bVar6 = false;
        ClearExclusiveLocal();
LAB_011dfbcc:
        bVar1 = 0;
        if (bVar6) {
          puVar5 = (uint *)(iVar2 + 0x288);
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            bVar6 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar6);
          *piVar9 = iVar4;
          *(int *)(iVar2 + 0x28c) = iVar4;
          DataMemoryBarrier(0xb);
          do {
            bVar6 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar6);
          *puVar5 = *puVar5 | 0x10000;
          bVar1 = 1;
        }
      }
      else {
        bVar1 = 0;
      }
      HintYield();
      iVar2 = iVar3;
    } while (*(uint *)(iVar3 + 0x280) != uVar10);
  }
  return;
}

