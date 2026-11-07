// FUN_00a8f19c @ 00a8f19c size=1316 calls_out=9 calls_in=1
// strings: 

void FUN_00a8f19c(int *param_1)

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
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int local_148;
  int *local_144;
  int *local_2c;
  undefined1 local_28;
  
  FUN_016dd1aa(&local_148,param_1 + 2,0x118);
  param_1[2] = 4;
  if (local_148 == 3) {
    piVar20 = param_1 + 1;
    if (*param_1 != 0) {
      piVar20 = (int *)param_1[1];
    }
    iVar18 = *piVar20;
    piVar20 = (int *)(iVar18 + 8);
    do {
      if (*piVar20 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar20);
        goto LAB_00a8f208;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = 1;
    DataMemoryBarrier(0xb);
LAB_00a8f208:
    uVar14 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar18 + 0xc);
    }
    else {
      uVar14 = FUN_015bf3f8();
      uVar14 = uVar14 ^ 1;
      cVar1 = *(char *)(iVar18 + 0xc);
    }
    if (cVar1 != '\0') {
      local_28 = (undefined1)uVar14;
      local_2c = piVar20;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186dc88,&DAT_01886a4c);
    }
    uVar13 = *(uint *)(iVar18 + 0x34);
    if (uVar13 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187c354);
    }
    uVar12 = *(uint *)(iVar18 + 0x40);
    if (uVar12 == 0) {
      uVar17 = 0;
      uVar13 = 0;
LAB_00a8f40c:
      if ((uVar13 != uVar17) && (uVar17 < uVar12)) {
        uVar3 = *(uint *)(iVar18 + 0x34);
        uVar9 = *(uint *)(iVar18 + 0x3c);
        iVar15 = *(int *)(iVar18 + 0x38);
        *(uint *)(iVar18 + 0x40) = uVar17;
        uVar13 = uVar9 - uVar3;
        if (uVar9 < uVar3) {
          uVar13 = uVar9;
        }
        uVar3 = uVar3 - uVar13;
        iVar19 = uVar12 - uVar3;
        if (uVar12 < uVar3) {
          iVar19 = 0;
        }
        uVar9 = uVar12;
        if (uVar3 < uVar12) {
          uVar9 = uVar3;
        }
        if (uVar3 < uVar17) {
          iVar4 = uVar17 - uVar9;
          if (iVar19 != iVar4) {
            iVar16 = 0;
            do {
              puVar7 = (undefined4 *)(iVar15 + iVar4 * 8 + iVar16 * 8);
              piVar8 = (int *)*puVar7;
              iVar16 = iVar16 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar10 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = iVar10 + -1;
              if (iVar10 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aac364(*puVar7,puVar7[1]);
              }
            } while (iVar16 != iVar19 - iVar4);
          }
        }
        else {
          if (uVar9 != uVar17) {
            iVar4 = 0;
            do {
              puVar7 = (undefined4 *)(iVar15 + uVar13 * 8 + uVar17 * 8 + iVar4 * 8);
              piVar8 = (int *)*puVar7;
              iVar4 = iVar4 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar16 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = iVar16 + -1;
              if (iVar16 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aac364(*puVar7,puVar7[1]);
              }
            } while (iVar4 != uVar9 - uVar17);
          }
          if (uVar3 < uVar12) {
            iVar4 = 0;
            do {
              puVar7 = (undefined4 *)(iVar15 + iVar4 * 8);
              piVar8 = (int *)*puVar7;
              iVar4 = iVar4 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar16 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = iVar16 + -1;
              if (iVar16 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aac364(*puVar7,puVar7[1]);
              }
            } while (iVar4 != iVar19);
          }
        }
      }
    }
    else {
      iVar19 = *(int *)(iVar18 + 0x3c);
      uVar17 = 0;
      iVar15 = *(int *)(iVar18 + 0x38) + iVar19 * 8 + 4;
      do {
        uVar3 = uVar13;
        if (iVar19 + uVar17 < uVar13) {
          uVar3 = 0;
        }
        piVar8 = (int *)(iVar15 + uVar3 * -8);
        iVar4 = *piVar8;
        uVar9 = *(uint *)(iVar4 + 8);
        uVar3 = uVar9 - 1;
        if (uVar9 < 9) {
          uVar9 = 8;
        }
        piVar8 = (int *)(**(code **)(iVar4 + 0x14))
                                  (piVar8[-1] + (uVar9 - 1 & 0xfffffff8) + (uVar3 & 0xfffffed8) +
                                   0x130);
        if (piVar8 == local_144 + 0x4c) {
          uVar13 = uVar17 + 1;
          if (uVar13 < uVar12) {
            iVar15 = *(int *)(iVar18 + 0x38);
            uVar9 = *(uint *)(iVar18 + 0x34);
            uVar3 = uVar12;
            if (uVar12 < uVar17) {
              uVar3 = uVar17;
            }
            iVar19 = *(int *)(iVar18 + 0x3c);
            do {
              iVar4 = iVar15 + (iVar19 + uVar13) * 8;
              while( true ) {
                uVar5 = uVar9;
                if (iVar19 + uVar13 < uVar9) {
                  uVar5 = 0;
                }
                piVar8 = (int *)(iVar4 + uVar5 * -8);
                uVar5 = *(uint *)(piVar8[1] + 8);
                uVar11 = uVar5 - 1;
                if (uVar5 < 9) {
                  uVar5 = 8;
                }
                piVar6 = (int *)(**(code **)(piVar8[1] + 0x14))
                                          (*piVar8 + (uVar5 - 1 & 0xfffffff8) +
                                           (uVar11 & 0xfffffed8) + 0x130);
                if (piVar6 != local_144 + 0x4c) break;
                uVar13 = uVar13 + 1;
                iVar4 = iVar4 + 8;
                if (uVar12 <= uVar13) goto LAB_00a8f40c;
              }
              if (uVar17 == uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_005666b0,0x20,&DAT_018a6c20);
              }
              uVar11 = uVar17 + iVar19;
              uVar5 = uVar11 - uVar9;
              if (uVar11 < uVar9) {
                uVar5 = uVar11;
              }
              piVar6 = (int *)(iVar15 + uVar5 * 8);
              iVar10 = *piVar6;
              uVar17 = uVar17 + 1;
              iVar4 = piVar8[1];
              uVar13 = uVar13 + 1;
              iVar16 = piVar6[1];
              *piVar6 = *piVar8;
              piVar6[1] = iVar4;
              *piVar8 = iVar10;
              piVar8[1] = iVar16;
            } while (uVar13 < uVar12);
          }
          goto LAB_00a8f40c;
        }
        uVar17 = uVar17 + 1;
        iVar15 = iVar15 + 8;
      } while (uVar12 != uVar17);
    }
    if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
      *(undefined1 *)(iVar18 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar20;
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = 0;
    if (iVar18 == 2) {
      FUN_016d6968(0xf0,piVar20,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *local_144;
      bVar2 = (bool)hasExclusiveAccess(local_144);
    } while (!bVar2);
    *local_144 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac364(local_144,&DAT_0186dcc0);
    }
  }
  if (1 < local_148 - 3U) {
    FUN_00a89d4c(&local_148);
  }
  return;
}

