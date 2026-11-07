// FUN_0069bb34 @ 0069bb34 size=500 calls_out=1 calls_in=2
// strings: 

void FUN_0069bb34(int *param_1,uint param_2)

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
  if (uVar10 != *(uint *)(iVar2 + 0x240)) {
    bVar1 = 0;
    piVar9 = param_1 + 1;
    if ((param_2 & 0xf) < uVar10 - *(uint *)(iVar2 + 0x240) >> 4) {
      bVar1 = 1;
    }
    do {
      DataMemoryBarrier(0xb);
      iVar3 = *(int *)(iVar2 + 0x244);
      if (*(int *)(iVar2 + 0x244) == 0) {
        piVar8 = (int *)(iVar2 + 0x244);
        iVar3 = FUN_0067ddc4(*(int *)(iVar2 + 0x240) + 0x10);
        iVar4 = *piVar8;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar6 = (bool)hasExclusiveAccess(piVar8);
            if (bVar6) {
              *piVar8 = iVar3;
              bVar6 = true;
              goto LAB_0069bbc0;
            }
            iVar4 = *piVar8;
          } while (iVar4 == 0);
        }
        bVar6 = false;
        ClearExclusiveLocal();
LAB_0069bbc0:
        DataMemoryBarrier(0xb);
        if (!bVar6) {
          piVar8 = (int *)(iVar4 + 0x244);
          *(int *)(iVar3 + 0x240) = *(int *)(iVar4 + 0x240) + 0x10;
          iVar7 = *piVar8;
          if (iVar7 == 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar6 = (bool)hasExclusiveAccess(piVar8);
              if (bVar6) {
                *piVar8 = iVar3;
                goto LAB_0069bc10;
              }
              iVar7 = *piVar8;
            } while (iVar7 == 0);
          }
LAB_0069bc18:
          do {
            bVar6 = false;
            ClearExclusiveLocal();
            while( true ) {
              DataMemoryBarrier(0xb);
              if (bVar6) {
                iVar3 = iVar4;
                goto LAB_0069bc70;
              }
              HintYield();
              *(int *)(iVar3 + 0x240) = *(int *)(iVar7 + 0x240) + 0x10;
              piVar8 = (int *)(iVar7 + 0x244);
              iVar7 = *piVar8;
              if (iVar7 != 0) break;
              DataMemoryBarrier(0xb);
              while (bVar6 = (bool)hasExclusiveAccess(piVar8), !bVar6) {
                iVar7 = *piVar8;
                if (iVar7 != 0) goto LAB_0069bc18;
              }
              *piVar8 = iVar3;
LAB_0069bc10:
              bVar6 = true;
            }
          } while( true );
        }
      }
LAB_0069bc70:
      DataMemoryBarrier(0xb);
      if ((bool)(bVar1 & (~*(uint *)(iVar2 + 0x248) & 0xffff) == 0)) {
        if (*param_1 == iVar2) {
          DataMemoryBarrier(0xb);
          do {
            bVar6 = (bool)hasExclusiveAccess(param_1);
            if (bVar6) {
              *param_1 = iVar3;
              bVar6 = true;
              goto LAB_0069bcd0;
            }
          } while (*param_1 == iVar2);
        }
        bVar6 = false;
        ClearExclusiveLocal();
LAB_0069bcd0:
        bVar1 = 0;
        if (bVar6) {
          puVar5 = (uint *)(iVar2 + 0x248);
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            bVar6 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar6);
          *piVar9 = iVar4;
          *(int *)(iVar2 + 0x24c) = iVar4;
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
    } while (*(uint *)(iVar3 + 0x240) != uVar10);
  }
  return;
}

