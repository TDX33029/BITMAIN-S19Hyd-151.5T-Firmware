// FUN_01651608 @ 01651608 size=640 calls_out=6 calls_in=11
// strings: 

void FUN_01651608(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  do {
    iVar11 = DAT_01d519e0 + 1;
    bVar2 = (bool)hasExclusiveAccess(0x1d519e0);
  } while (!bVar2);
  DAT_01d519e0 = iVar11;
  do {
    DataMemoryBarrier(0xb);
    piVar5 = DAT_01d519e4;
    if (DAT_01d519e4 == (int *)0x0) {
      piVar5 = (int *)FUN_016518b8();
    }
    uVar3 = piVar5[1];
    if ((uint)(iVar11 * 3) <= uVar3) goto LAB_014d2084;
    if (uVar3 != 0) {
      iVar10 = uVar3 << 6;
      piVar13 = (int *)(*piVar5 + 0x18);
      do {
        if (*piVar13 == 0) {
          bVar2 = (bool)hasExclusiveAccess(piVar13);
          if (!bVar2) goto LAB_016516a0;
          *piVar13 = 1;
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_016516a0:
          FUN_01652ed8(piVar13);
        }
        piVar13 = piVar13 + 0x10;
        iVar10 = iVar10 + -0x40;
      } while (iVar10 != 0);
    }
    if (DAT_01d519e4 == piVar5) {
      piVar13 = (int *)FUN_0165192c(iVar11,piVar5);
      if (piVar5[1] == 0) {
        DataMemoryBarrier(0xb);
        DAT_01d519e4 = piVar13;
      }
      else {
        iVar10 = *piVar5;
        iVar11 = iVar10 + piVar5[1] * 0x40;
        do {
          if (*(int *)(iVar10 + 0x1c) != 0) {
            iVar6 = piVar13[2];
            iVar12 = *piVar13;
            uVar3 = piVar13[1];
            iVar14 = *(int *)(iVar10 + 0x1c);
            do {
              iVar9 = *(int *)(iVar14 + 8);
              uVar15 = *(int *)(iVar14 + 4) * -0x61c88647;
              uVar1 = uVar15 >> (-iVar6 & 0x1fU);
              if (uVar3 <= uVar15 >> (-iVar6 & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar1,uVar3,&DAT_01d06ab8);
              }
              iVar16 = iVar12 + uVar1 * 0x40;
              piVar7 = (int *)(iVar16 + 0x20);
              iVar17 = *piVar7;
              if (iVar17 == 0) {
                *(int *)(iVar16 + 0x1c) = iVar14;
              }
              else {
                *(int *)(iVar17 + 8) = iVar14;
              }
              *piVar7 = iVar14;
              *(undefined4 *)(iVar14 + 8) = 0;
              iVar14 = iVar9;
            } while (iVar9 != 0);
          }
          iVar10 = iVar10 + 0x40;
        } while (iVar10 != iVar11);
        DataMemoryBarrier(0xb);
        DAT_01d519e4 = piVar13;
        if (piVar5[1] != 0) {
          iVar11 = *piVar5;
          iVar10 = iVar11 + piVar5[1] * 0x40;
          do {
            puVar4 = (uint *)(iVar11 + 0x18);
            iVar11 = iVar11 + 0x40;
            DataMemoryBarrier(0xb);
            do {
              uVar3 = *puVar4;
              bVar2 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar2);
            *puVar4 = uVar3 - 1;
            if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
              FUN_01652d70();
            }
          } while (iVar11 != iVar10);
        }
      }
LAB_014d2084:
      uVar8 = FUN_01bef8f4();
      *(undefined4 *)(param_1 + 0x28) = uVar8;
      *(undefined4 *)(param_1 + 0x20) = 4;
      *(undefined4 *)(param_1 + 0x14) = 3;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      FUN_01bed93e(param_1,0,0x14);
      return;
    }
    iVar10 = *piVar5;
    iVar14 = iVar10 + piVar5[1] * 0x40;
    if (piVar5[1] != 0) {
      do {
        puVar4 = (uint *)(iVar10 + 0x18);
        iVar10 = iVar10 + 0x40;
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *puVar4;
          bVar2 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar2);
        *puVar4 = uVar3 - 1;
        if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
          FUN_01652d70();
        }
      } while (iVar10 != iVar14);
    }
  } while( true );
}

