// FUN_00ef6fa0 @ 00ef6fa0 size=1532 calls_out=8 calls_in=3
// strings: 

void FUN_00ef6fa0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  code *pcVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  bool bVar22;
  int *local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  piVar13 = (int *)param_1[2];
  param_1[2] = 0;
  if (piVar13 != (int *)0x0) {
    piVar20 = param_1 + 1;
    if (*param_1 != 0) {
      piVar20 = (int *)param_1[1];
    }
    iVar15 = *piVar20;
    piVar20 = (int *)(iVar15 + 8);
    do {
      if (*piVar20 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar20);
        goto LAB_00ef6ff4;
      }
      bVar22 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar22);
    *piVar20 = 1;
    DataMemoryBarrier(0xb);
LAB_00ef6ff4:
    uVar7 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar15 + 0xc);
    }
    else {
      uVar7 = FUN_015bf3f8();
      uVar7 = uVar7 ^ 1;
      cVar1 = *(char *)(iVar15 + 0xc);
    }
    if (cVar1 != '\0') {
      uVar19 = (uint)local_34 >> 8;
      local_34 = CONCAT31((int3)uVar19,(char)uVar7);
      local_38 = piVar20;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_0187c31c,&DAT_01886a4c);
    }
    uVar19 = *(uint *)(iVar15 + 0x2c);
    if (uVar19 == 0) {
      uVar14 = 0;
      uVar17 = 0;
LAB_00ef71e4:
      if ((uVar17 != uVar14) && (uVar19 = *(uint *)(iVar15 + 0x2c), uVar14 < uVar19)) {
        uVar2 = *(uint *)(iVar15 + 0x20);
        uVar8 = *(uint *)(iVar15 + 0x28);
        iVar16 = *(int *)(iVar15 + 0x24);
        *(uint *)(iVar15 + 0x2c) = uVar14;
        uVar17 = uVar8 - uVar2;
        if (uVar8 < uVar2) {
          uVar17 = uVar8;
        }
        uVar2 = uVar2 - uVar17;
        iVar21 = uVar19 - uVar2;
        if (uVar19 < uVar2) {
          iVar21 = 0;
        }
        uVar8 = uVar19;
        if (uVar2 < uVar19) {
          uVar8 = uVar2;
        }
        if (uVar2 < uVar14) {
          iVar3 = uVar14 - uVar8;
          if (iVar21 != iVar3) {
            iVar18 = 0;
            do {
              puVar10 = (undefined4 *)(iVar16 + iVar3 * 8 + iVar18 * 8);
              piVar6 = (int *)*puVar10;
              iVar18 = iVar18 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar9 = *piVar6;
                bVar22 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar22);
              *piVar6 = iVar9 + -1;
              if (iVar9 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aac364(*puVar10,puVar10[1]);
              }
            } while (iVar18 != iVar21 - iVar3);
          }
        }
        else {
          if (uVar8 != uVar14) {
            iVar3 = 0;
            do {
              puVar10 = (undefined4 *)(iVar16 + uVar17 * 8 + uVar14 * 8 + iVar3 * 8);
              piVar6 = (int *)*puVar10;
              iVar3 = iVar3 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar18 = *piVar6;
                bVar22 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar22);
              *piVar6 = iVar18 + -1;
              if (iVar18 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aac364(*puVar10,puVar10[1]);
              }
            } while (iVar3 != uVar8 - uVar14);
          }
          if (uVar2 < uVar19) {
            iVar3 = 0;
            do {
              puVar10 = (undefined4 *)(iVar16 + iVar3 * 8);
              piVar6 = (int *)*puVar10;
              iVar3 = iVar3 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar18 = *piVar6;
                bVar22 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar22);
              *piVar6 = iVar18 + -1;
              if (iVar18 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aac364(*puVar10,puVar10[1]);
              }
            } while (iVar3 != iVar21);
          }
        }
      }
    }
    else {
      iVar21 = *(int *)(iVar15 + 0x28);
      uVar14 = 0;
      uVar17 = *(uint *)(iVar15 + 0x20);
      iVar16 = *(int *)(iVar15 + 0x24) + iVar21 * 8 + 4;
      do {
        uVar2 = uVar17;
        if (iVar21 + uVar14 < uVar17) {
          uVar2 = 0;
        }
        piVar6 = (int *)(iVar16 + uVar2 * -8);
        iVar3 = *piVar6;
        uVar8 = *(uint *)(iVar3 + 8);
        uVar2 = uVar8 - 1;
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        piVar6 = (int *)(**(code **)(iVar3 + 0x14))
                                  (piVar6[-1] + (uVar8 - 1 & 0xfffffff8) + (uVar2 & 0xfffffed8) +
                                   0x130);
        if (piVar6 == piVar13 + 0x4c) {
          uVar17 = uVar14 + 1;
          if (uVar17 < uVar19) {
            uVar8 = *(uint *)(iVar15 + 0x20);
            iVar16 = *(int *)(iVar15 + 0x24);
            iVar21 = *(int *)(iVar15 + 0x28);
            uVar2 = uVar19;
            if (uVar19 < uVar14) {
              uVar2 = uVar14;
            }
            do {
              iVar3 = iVar16 + (iVar21 + uVar17) * 8;
              while( true ) {
                uVar4 = uVar8;
                if (iVar21 + uVar17 < uVar8) {
                  uVar4 = 0;
                }
                piVar6 = (int *)(iVar3 + uVar4 * -8);
                uVar4 = *(uint *)(piVar6[1] + 8);
                uVar11 = uVar4 - 1;
                if (uVar4 < 9) {
                  uVar4 = 8;
                }
                piVar5 = (int *)(**(code **)(piVar6[1] + 0x14))
                                          (*piVar6 + (uVar4 - 1 & 0xfffffff8) +
                                           (uVar11 & 0xfffffed8) + 0x130);
                if (piVar5 != piVar13 + 0x4c) break;
                iVar3 = iVar3 + 8;
                uVar17 = uVar17 + 1;
                if (uVar19 <= uVar17) goto LAB_00ef71e4;
              }
              if (uVar14 == uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_005666b0,0x20,&DAT_018a6c20);
              }
              uVar11 = uVar14 + iVar21;
              uVar14 = uVar14 + 1;
              uVar4 = uVar11 - uVar8;
              if (uVar11 < uVar8) {
                uVar4 = uVar11;
              }
              piVar5 = (int *)(iVar16 + uVar4 * 8);
              iVar18 = *piVar5;
              uVar17 = uVar17 + 1;
              iVar9 = piVar6[1];
              iVar3 = piVar5[1];
              *piVar5 = *piVar6;
              piVar5[1] = iVar9;
              *piVar6 = iVar18;
              piVar6[1] = iVar3;
            } while (uVar17 < uVar19);
          }
          goto LAB_00ef71e4;
        }
        uVar14 = uVar14 + 1;
        iVar16 = iVar16 + 8;
      } while (uVar19 != uVar14);
    }
    FUN_00c09ff4(&local_38,piVar13 + 0x4c);
    if ((local_38 != (int *)0x7f2a5cb6 || iStack_30 != 0x48673074) ||
        (local_34 != 0x6bdf1a03 || iStack_2c != -0x51b9bcec)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187c344);
    }
    DataMemoryBarrier(0xb);
    bVar22 = (char)piVar13[0x4f] != '\0';
    iVar16 = 0;
    if (bVar22) {
      iVar16 = *(int *)(iVar15 + 0x1c);
    }
    if (bVar22 && iVar16 != 0) {
      do {
        if (*(int *)(iVar15 + 0x2c) == 0) break;
        puVar10 = (undefined4 *)(*(int *)(iVar15 + 0x24) + *(int *)(iVar15 + 0x28) * 8);
        piVar6 = (int *)*puVar10;
        iVar16 = puVar10[1];
        *(int *)(iVar15 + 0x2c) = *(int *)(iVar15 + 0x2c) + -1;
        uVar14 = *(int *)(iVar15 + 0x28) + 1;
        uVar17 = *(uint *)(iVar16 + 8);
        pcVar12 = *(code **)(iVar16 + 0xc);
        uVar19 = uVar14 - *(uint *)(iVar15 + 0x20);
        if (uVar14 < *(uint *)(iVar15 + 0x20)) {
          uVar19 = uVar14;
        }
        *(uint *)(iVar15 + 0x28) = uVar19;
        uVar19 = uVar17 - 1;
        if (uVar17 < 9) {
          uVar17 = 8;
        }
        iVar21 = (*pcVar12)((int)piVar6 + (uVar19 & 0xfffffed8) + (uVar17 - 1 & 0xfffffff8) + 0x130)
        ;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6;
          bVar22 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar22);
        *piVar6 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac364(piVar6,iVar16);
        }
      } while (iVar21 == 0);
    }
    if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
      *(undefined1 *)(iVar15 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar20;
      bVar22 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar22);
    *piVar20 = 0;
    if (iVar15 == 2) {
      FUN_016d6968(0xf0,piVar20,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar13;
      bVar22 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar22);
    *piVar13 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac364(piVar13,&DAT_0187c32c);
      return;
    }
  }
  return;
}

