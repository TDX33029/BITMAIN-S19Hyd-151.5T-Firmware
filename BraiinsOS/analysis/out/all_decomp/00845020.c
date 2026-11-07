// FUN_00845020 @ 00845020 size=1508 calls_out=12 calls_in=6
// strings: 

void FUN_00845020(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint local_50;
  int *local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *local_2c;
  undefined1 local_28;
  
  puVar19 = (uint *)(param_1 + 2);
  local_50 = *puVar19;
  piVar11 = (int *)param_1[3];
  iStack_48 = param_1[4];
  iStack_44 = param_1[5];
  local_40 = param_1[6];
  iStack_3c = param_1[7];
  iStack_38 = param_1[8];
  iStack_34 = param_1[9];
  param_1[2] = 5;
  local_4c = piVar11;
  if (local_50 == 4) {
    piVar17 = param_1 + 1;
    if (*param_1 != 0) {
      piVar17 = (int *)param_1[1];
    }
    iVar18 = *piVar17;
    piVar17 = (int *)(iVar18 + 8);
    do {
      if (*piVar17 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar17);
        goto LAB_0084509c;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = 1;
    DataMemoryBarrier(0xb);
LAB_0084509c:
    uVar20 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar18 + 0xc);
    }
    else {
      uVar20 = FUN_015bf3f8();
      uVar20 = uVar20 ^ 1;
      cVar1 = *(char *)(iVar18 + 0xc);
    }
    if (cVar1 != '\0') {
      local_28 = (undefined1)uVar20;
      local_2c = piVar17;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01863d8c,&DAT_01886a4c);
    }
    uVar14 = *(uint *)(iVar18 + 0x34);
    if (uVar14 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187c354);
    }
    uVar12 = *(uint *)(iVar18 + 0x40);
    if (uVar12 == 0) {
      uVar21 = 0;
      uVar14 = 0;
LAB_00845284:
      if ((uVar14 != uVar21) && (uVar21 < uVar12)) {
        uVar3 = *(uint *)(iVar18 + 0x34);
        uVar9 = *(uint *)(iVar18 + 0x3c);
        iVar16 = *(int *)(iVar18 + 0x38);
        uVar14 = uVar9 - uVar3;
        if (uVar9 < uVar3) {
          uVar14 = uVar9;
        }
        uVar3 = uVar3 - uVar14;
        iVar22 = uVar12 - uVar3;
        if (uVar12 < uVar3) {
          iVar22 = 0;
        }
        uVar9 = uVar12;
        if (uVar3 < uVar12) {
          uVar9 = uVar3;
        }
        *(uint *)(iVar18 + 0x40) = uVar21;
        if (uVar3 < uVar21) {
          iVar4 = uVar21 - uVar9;
          if (iVar22 != iVar4) {
            iVar15 = 0;
            do {
              puVar7 = (undefined4 *)(iVar16 + iVar4 * 8 + iVar15 * 8);
              piVar8 = (int *)*puVar7;
              iVar15 = iVar15 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar10 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = iVar10 + -1;
              if (iVar10 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0089e6a8(*puVar7,puVar7[1]);
              }
            } while (iVar15 != iVar22 - iVar4);
          }
        }
        else {
          if (uVar9 != uVar21) {
            iVar4 = 0;
            do {
              puVar7 = (undefined4 *)(iVar16 + uVar14 * 8 + uVar21 * 8 + iVar4 * 8);
              piVar8 = (int *)*puVar7;
              iVar4 = iVar4 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar15 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = iVar15 + -1;
              if (iVar15 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0089e6a8(*puVar7,puVar7[1]);
              }
            } while (iVar4 != uVar9 - uVar21);
          }
          if (uVar3 < uVar12) {
            iVar4 = 0;
            do {
              puVar7 = (undefined4 *)(iVar16 + iVar4 * 8);
              piVar8 = (int *)*puVar7;
              iVar4 = iVar4 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar15 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = iVar15 + -1;
              if (iVar15 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0089e6a8(*puVar7,puVar7[1]);
              }
            } while (iVar4 != iVar22);
          }
        }
      }
    }
    else {
      iVar22 = *(int *)(iVar18 + 0x3c);
      uVar21 = 0;
      iVar16 = *(int *)(iVar18 + 0x38) + iVar22 * 8 + 4;
      do {
        uVar3 = uVar14;
        if (iVar22 + uVar21 < uVar14) {
          uVar3 = 0;
        }
        piVar8 = (int *)(iVar16 + uVar3 * -8);
        iVar4 = *piVar8;
        uVar9 = *(uint *)(iVar4 + 8);
        uVar3 = uVar9 - 1;
        if (uVar9 < 9) {
          uVar9 = 8;
        }
        piVar8 = (int *)(**(code **)(iVar4 + 0x14))
                                  (piVar8[-1] + (uVar9 - 1 & 0xfffffff8) + (uVar3 & 0xffffffd0) +
                                   0x38);
        if (piVar8 == piVar11 + 0xe) {
          uVar14 = uVar21 + 1;
          if (uVar14 < uVar12) {
            uVar9 = *(uint *)(iVar18 + 0x34);
            iVar16 = *(int *)(iVar18 + 0x38);
            uVar3 = uVar12;
            if (uVar12 < uVar21) {
              uVar3 = uVar21;
            }
            iVar22 = *(int *)(iVar18 + 0x3c);
            do {
              iVar4 = iVar16 + (iVar22 + uVar14) * 8;
              while( true ) {
                uVar5 = uVar9;
                if (iVar22 + uVar14 < uVar9) {
                  uVar5 = 0;
                }
                piVar8 = (int *)(iVar4 + uVar5 * -8);
                uVar5 = *(uint *)(piVar8[1] + 8);
                uVar13 = uVar5 - 1;
                if (uVar5 < 9) {
                  uVar5 = 8;
                }
                piVar6 = (int *)(**(code **)(piVar8[1] + 0x14))
                                          (*piVar8 + (uVar5 - 1 & 0xfffffff8) +
                                           (uVar13 & 0xffffffd0) + 0x38);
                if (piVar6 != piVar11 + 0xe) break;
                uVar14 = uVar14 + 1;
                iVar4 = iVar4 + 8;
                if (uVar12 <= uVar14) goto LAB_00845284;
              }
              if (uVar21 == uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_005666b0,0x20,&DAT_018a6c20);
              }
              uVar13 = uVar21 + iVar22;
              uVar21 = uVar21 + 1;
              uVar14 = uVar14 + 1;
              uVar5 = uVar13 - uVar9;
              if (uVar13 < uVar9) {
                uVar5 = uVar13;
              }
              piVar6 = (int *)(iVar16 + uVar5 * 8);
              iVar10 = *piVar6;
              iVar4 = piVar8[1];
              iVar15 = piVar6[1];
              *piVar6 = *piVar8;
              piVar6[1] = iVar4;
              *piVar8 = iVar10;
              piVar8[1] = iVar15;
            } while (uVar14 < uVar12);
          }
          goto LAB_00845284;
        }
        uVar21 = uVar21 + 1;
        iVar16 = iVar16 + 8;
      } while (uVar12 != uVar21);
    }
    if (((uVar20 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
      *(undefined1 *)(iVar18 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = 0;
    if (iVar18 == 2) {
      FUN_016d6968(0xf0,piVar17,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e6a8(piVar11,&DAT_01863d9c);
    }
  }
  if ((local_50 & 6) != 4) {
    FUN_008b7038(&local_50);
  }
  if (*param_1 == 0) {
    piVar17 = (int *)param_1[1];
    piVar11 = piVar17 + 0x11;
    do {
      iVar18 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar18 + -1;
    if (iVar18 == 1) {
      FUN_008ae198(piVar17 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e80c(param_1[1]);
    }
  }
  if (*puVar19 != 5) {
    if (*puVar19 != 4) {
      FUN_00845840(puVar19);
      return;
    }
    piVar11 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e9f4(param_1[3]);
      return;
    }
  }
  return;
}

