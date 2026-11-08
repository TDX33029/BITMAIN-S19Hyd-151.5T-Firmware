// FUN_01283788 @ 01283788 size=652 calls_out=6 calls_in=20
// strings: 

void FUN_01283788(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  
  do {
    iVar12 = DAT_018dd954 + 1;
    bVar2 = (bool)hasExclusiveAccess(0x18dd954);
  } while (!bVar2);
  DAT_018dd954 = iVar12;
  do {
    DataMemoryBarrier(0xb);
    if (DAT_018dd950 == (int *)0x0) {
      piVar5 = (int *)FUN_01283a38();
      uVar3 = piVar5[1];
    }
    else {
      uVar3 = DAT_018dd950[1];
      piVar5 = DAT_018dd950;
    }
    if ((uint)(iVar12 * 3) <= uVar3) goto LAB_012839b8;
    if (uVar3 != 0) {
      iVar10 = uVar3 << 6;
      piVar14 = (int *)(*piVar5 + 0x18);
LAB_01283808:
      do {
        if (*piVar14 == 0) {
          bVar2 = (bool)hasExclusiveAccess(piVar14);
          if (bVar2) {
            *piVar14 = 1;
            DataMemoryBarrier(0xb);
            piVar14 = piVar14 + 0x10;
            iVar10 = iVar10 + -0x40;
            if (iVar10 == 0) break;
            goto LAB_01283808;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        FUN_01286a10(piVar14);
        piVar14 = piVar14 + 0x10;
        iVar10 = iVar10 + -0x40;
      } while (iVar10 != 0);
    }
    if (DAT_018dd950 == piVar5) {
      piVar14 = (int *)FUN_01283ad4(iVar12,piVar5);
      if (piVar5[1] == 0) {
        DataMemoryBarrier(0xb);
        DAT_018dd950 = piVar14;
      }
      else {
        iVar10 = *piVar5;
        iVar12 = iVar10 + piVar5[1] * 0x40;
        do {
          if (*(int *)(iVar10 + 0x1c) != 0) {
            uVar3 = piVar14[1];
            iVar7 = piVar14[2];
            iVar11 = *piVar14;
            iVar15 = *(int *)(iVar10 + 0x1c);
            do {
              iVar13 = *(int *)(iVar15 + 8);
              uVar9 = *(int *)(iVar15 + 4) * -0x61c88647;
              uVar1 = uVar9 >> (-iVar7 & 0x1fU);
              if (uVar3 <= uVar9 >> (-iVar7 & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar1,uVar3,&DAT_0188bb60);
              }
              iVar8 = iVar11 + uVar1 * 0x40;
              if (*(int *)(iVar8 + 0x20) == 0) {
                *(int *)(iVar8 + 0x1c) = iVar15;
              }
              else {
                *(int *)(*(int *)(iVar8 + 0x20) + 8) = iVar15;
              }
              *(int *)(iVar8 + 0x20) = iVar15;
              *(undefined4 *)(iVar15 + 8) = 0;
              iVar15 = iVar13;
            } while (iVar13 != 0);
          }
          iVar10 = iVar10 + 0x40;
        } while (iVar10 != iVar12);
        DataMemoryBarrier(0xb);
        DAT_018dd950 = piVar14;
        if (piVar5[1] != 0) {
          iVar12 = *piVar5;
          iVar10 = iVar12 + piVar5[1] * 0x40;
          do {
            puVar4 = (uint *)(iVar12 + 0x18);
            iVar12 = iVar12 + 0x40;
            DataMemoryBarrier(0xb);
            do {
              uVar3 = *puVar4;
              bVar2 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar2);
            *puVar4 = uVar3 - 1;
            if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
              FUN_01286894();
            }
          } while (iVar12 != iVar10);
        }
      }
LAB_012839b8:
      uVar6 = FUN_016df688();
      param_1[10] = uVar6;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      param_1[7] = 0;
      param_1[8] = 4;
      param_1[9] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 3;
      return;
    }
    iVar10 = *piVar5;
    iVar15 = iVar10 + piVar5[1] * 0x40;
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
          FUN_01286894();
        }
      } while (iVar10 != iVar15);
    }
  } while( true );
}

