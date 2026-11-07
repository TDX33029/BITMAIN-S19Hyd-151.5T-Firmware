// FUN_00ef7788 @ 00ef7788 size=1164 calls_out=9 calls_in=2
// strings: 

void FUN_00ef7788(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  code *pcVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  int *local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  piVar12 = (int *)param_1[2];
  param_1[2] = 0;
  if (piVar12 != (int *)0x0) {
    piVar19 = param_1 + 1;
    if (*param_1 != 0) {
      piVar19 = (int *)param_1[1];
    }
    iVar13 = *piVar19;
    piVar19 = (int *)(iVar13 + 8);
    do {
      if (*piVar19 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar19);
        goto LAB_00ef77dc;
      }
      bVar22 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar22);
    *piVar19 = 1;
    DataMemoryBarrier(0xb);
LAB_00ef77dc:
    uVar7 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar13 + 0xc);
    }
    else {
      uVar7 = FUN_015bf3f8();
      uVar7 = uVar7 ^ 1;
      cVar1 = *(char *)(iVar13 + 0xc);
    }
    if (cVar1 != '\0') {
      uVar18 = (uint)local_34 >> 8;
      local_34 = CONCAT31((int3)uVar18,(char)uVar7);
      local_38 = piVar19;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_0187c31c,&DAT_01886a4c);
    }
    uVar18 = *(uint *)(iVar13 + 0x2c);
    if (uVar18 == 0) {
      uVar16 = 0;
      uVar15 = 0;
LAB_00ef79c0:
      if (uVar15 != uVar16) {
        FUN_00ef36a4(iVar13 + 0x20,uVar16);
      }
    }
    else {
      uVar15 = *(uint *)(iVar13 + 0x20);
      uVar16 = 0;
      iVar14 = *(int *)(iVar13 + 0x28);
      iVar17 = *(int *)(iVar13 + 0x24) + iVar14 * 8 + 4;
      do {
        uVar2 = uVar15;
        if (iVar14 + uVar16 < uVar15) {
          uVar2 = 0;
        }
        piVar6 = (int *)(iVar17 + uVar2 * -8);
        iVar3 = *piVar6;
        uVar8 = *(uint *)(iVar3 + 8);
        uVar2 = uVar8 - 1;
        if (uVar8 < 5) {
          uVar8 = 4;
        }
        piVar6 = (int *)(**(code **)(iVar3 + 0x14))
                                  (piVar6[-1] + (uVar8 - 1 & 0xfffffff8) + (uVar2 & 0xffffffe8) +
                                   0x20);
        if (piVar6 == piVar12 + 8) {
          uVar15 = uVar16 + 1;
          if (uVar15 < uVar18) {
            uVar8 = *(uint *)(iVar13 + 0x20);
            iVar14 = *(int *)(iVar13 + 0x24);
            iVar17 = *(int *)(iVar13 + 0x28);
            uVar2 = uVar18;
            if (uVar18 < uVar16) {
              uVar2 = uVar16;
            }
            do {
              iVar3 = iVar14 + (iVar17 + uVar15) * 8;
              while( true ) {
                uVar4 = uVar8;
                if (iVar17 + uVar15 < uVar8) {
                  uVar4 = 0;
                }
                piVar6 = (int *)(iVar3 + uVar4 * -8);
                uVar4 = *(uint *)(piVar6[1] + 8);
                uVar10 = uVar4 - 1;
                if (uVar4 < 5) {
                  uVar4 = 4;
                }
                piVar5 = (int *)(**(code **)(piVar6[1] + 0x14))
                                          (*piVar6 + (uVar4 - 1 & 0xfffffff8) +
                                           (uVar10 & 0xffffffe8) + 0x20);
                if (piVar5 != piVar12 + 8) break;
                iVar3 = iVar3 + 8;
                uVar15 = uVar15 + 1;
                if (uVar18 <= uVar15) goto LAB_00ef79c0;
              }
              if (uVar16 == uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_005666b0,0x20,&DAT_018a6c20);
              }
              uVar10 = uVar16 + iVar17;
              uVar16 = uVar16 + 1;
              uVar4 = uVar10 - uVar8;
              if (uVar10 < uVar8) {
                uVar4 = uVar10;
              }
              piVar5 = (int *)(iVar14 + uVar4 * 8);
              iVar20 = *piVar5;
              uVar15 = uVar15 + 1;
              iVar3 = piVar6[1];
              iVar21 = piVar5[1];
              *piVar5 = *piVar6;
              piVar5[1] = iVar3;
              *piVar6 = iVar20;
              piVar6[1] = iVar21;
            } while (uVar15 < uVar18);
          }
          goto LAB_00ef79c0;
        }
        uVar16 = uVar16 + 1;
        iVar17 = iVar17 + 8;
      } while (uVar18 != uVar16);
    }
    FUN_00c09ff4(&local_38,piVar12 + 8);
    if ((local_38 != (int *)0x7f2a5cb6 || iStack_30 != 0x48673074) ||
        (local_34 != 0x6bdf1a03 || iStack_2c != -0x51b9bcec)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187c344);
    }
    DataMemoryBarrier(0xb);
    bVar22 = (char)piVar12[0xb] != '\0';
    iVar14 = 0;
    if (bVar22) {
      iVar14 = *(int *)(iVar13 + 0x1c);
    }
    if (bVar22 && iVar14 != 0) {
      do {
        if (*(int *)(iVar13 + 0x2c) == 0) break;
        puVar9 = (undefined4 *)(*(int *)(iVar13 + 0x24) + *(int *)(iVar13 + 0x28) * 8);
        piVar6 = (int *)*puVar9;
        iVar14 = puVar9[1];
        *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + -1;
        uVar15 = *(int *)(iVar13 + 0x28) + 1;
        uVar16 = *(uint *)(iVar14 + 8);
        pcVar11 = *(code **)(iVar14 + 0xc);
        uVar18 = uVar15 - *(uint *)(iVar13 + 0x20);
        if (uVar15 < *(uint *)(iVar13 + 0x20)) {
          uVar18 = uVar15;
        }
        *(uint *)(iVar13 + 0x28) = uVar18;
        uVar18 = uVar16 - 1;
        if (uVar16 < 5) {
          uVar16 = 4;
        }
        iVar17 = (*pcVar11)((int)piVar6 + (uVar18 & 0xffffffe8) + (uVar16 - 1 & 0xfffffff8) + 0x20);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6;
          bVar22 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar22);
        *piVar6 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac624(piVar6,iVar14);
        }
      } while (iVar17 == 0);
    }
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      *(undefined1 *)(iVar13 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar19;
      bVar22 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar22);
    *piVar19 = 0;
    if (iVar13 == 2) {
      FUN_016d6968(0xf0,piVar19,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar12;
      bVar22 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar22);
    *piVar12 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac624(piVar12,&DAT_0187c32c);
      return;
    }
  }
  return;
}

