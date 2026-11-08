// FUN_0107e260 @ 0107e260 size=656 calls_out=1 calls_in=0
// strings: 

void FUN_0107e260(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar8 = *(uint *)(param_1 + 0x108);
  if (uVar8 < 9) {
    if (uVar8 != 0) {
      piVar5 = *(int **)(param_1 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0108a158(*(undefined4 *)(param_1 + 0x10));
      }
      if (uVar8 != 1) {
        piVar5 = *(int **)(param_1 + 0x30);
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0108a158(*(undefined4 *)(param_1 + 0x30));
        }
        if (uVar8 != 2) {
          piVar5 = *(int **)(param_1 + 0x50);
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0108a158(*(undefined4 *)(param_1 + 0x50));
          }
          if (uVar8 != 3) {
            piVar5 = *(int **)(param_1 + 0x70);
            DataMemoryBarrier(0xb);
            do {
              iVar9 = *piVar5;
              bVar1 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar1);
            *piVar5 = iVar9 + -1;
            if (iVar9 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0108a158(*(undefined4 *)(param_1 + 0x70));
            }
            if (uVar8 != 4) {
              piVar5 = *(int **)(param_1 + 0x90);
              DataMemoryBarrier(0xb);
              do {
                iVar9 = *piVar5;
                bVar1 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar1);
              *piVar5 = iVar9 + -1;
              if (iVar9 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0108a158(*(undefined4 *)(param_1 + 0x90));
              }
              if (uVar8 != 5) {
                piVar5 = *(int **)(param_1 + 0xb0);
                DataMemoryBarrier(0xb);
                do {
                  iVar9 = *piVar5;
                  bVar1 = (bool)hasExclusiveAccess(piVar5);
                } while (!bVar1);
                *piVar5 = iVar9 + -1;
                if (iVar9 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0108a158(*(undefined4 *)(param_1 + 0xb0));
                }
                if (uVar8 != 6) {
                  piVar5 = *(int **)(param_1 + 0xd0);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar9 = *piVar5;
                    bVar1 = (bool)hasExclusiveAccess(piVar5);
                  } while (!bVar1);
                  *piVar5 = iVar9 + -1;
                  if (iVar9 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0108a158(*(undefined4 *)(param_1 + 0xd0));
                  }
                  if (uVar8 != 7) {
                    piVar5 = *(int **)(param_1 + 0xf0);
                    DataMemoryBarrier(0xb);
                    do {
                      iVar9 = *piVar5;
                      bVar1 = (bool)hasExclusiveAccess(piVar5);
                    } while (!bVar1);
                    *piVar5 = iVar9 + -1;
                    if (iVar9 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_0108a158(*(undefined4 *)(param_1 + 0xf0));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  iVar9 = *(int *)(param_1 + 4);
  iVar15 = *(int *)(param_1 + 8);
  if (iVar9 != 0) {
    iVar13 = 0;
    do {
      iVar6 = iVar13 * 0x20;
      iVar13 = iVar13 + 1;
      puVar4 = (undefined4 *)(iVar15 + iVar6 + 8);
      piVar5 = (int *)*puVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0108a158(*puVar4);
      }
    } while (iVar13 != iVar9);
  }
  if (iVar15 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar8 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar13 = uVar11 - 0x10, uVar11 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar14 = *(int *)(iVar9 + 8) + 0x10;
  iVar6 = iVar13 * uVar8 + iVar13 + -4;
  iVar13 = iVar14 + iVar6;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar13 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - iVar15) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar9 + 0x14);
  uVar11 = 1 << uVar8;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar9 + 0x10);
    uVar7 = *(uint *)(iVar9 + 0xc) | uVar12;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

