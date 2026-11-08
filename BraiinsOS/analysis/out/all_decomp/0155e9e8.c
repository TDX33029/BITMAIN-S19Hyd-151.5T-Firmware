// FUN_0155e9e8 @ 0155e9e8 size=380 calls_out=3 calls_in=5
// strings: 

void FUN_0155e9e8(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar4 = *(int **)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(*(undefined4 *)(param_1 + 0x1c));
  }
  puVar5 = *(undefined1 **)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x2c);
  if (iVar7 != 0) {
    puVar9 = puVar5;
    do {
      *puVar9 = 0;
      iVar7 = iVar7 + -1;
      puVar9 = puVar9 + 1;
    } while (iVar7 != 0);
  }
  iVar7 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
  }
  piVar4 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155ee24(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 8) != -1) {
    piVar4 = (int *)(*(int *)(param_1 + 8) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      uVar10 = *(uint *)(*(int *)(param_1 + 0xc) + 8);
      if (uVar10 < 5) {
        uVar10 = 4;
      }
      if ((*(int *)(*(int *)(param_1 + 0xc) + 4) + uVar10 + 7 & -uVar10) != 0) {
        thunk_FUN_016d3fb4();
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != -1) {
    piVar4 = (int *)(iVar7 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar8 + -1;
    if (iVar8 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar10 = *(uint *)(*(int *)(param_1 + 0x14) + 8);
    if (uVar10 < 5) {
      uVar10 = 4;
    }
    if ((*(int *)(*(int *)(param_1 + 0x14) + 4) + uVar10 + 7 & -uVar10) != 0) {
      if (iVar7 == 0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar10 = *(byte *)(iVar7 + -3) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar11 = uVar14 - 0x10, uVar14 == 0)) {
        iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar14 = (uint)(*(byte *)(iVar7 + -3) >> 5);
      iVar17 = *(int *)(iVar8 + 8) + 0x10;
      iVar15 = iVar11 * uVar10 + iVar11 + -4;
      iVar11 = iVar17 + iVar15;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar14 = *(uint *)(iVar11 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar11 - iVar7) < uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar11 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar8 + 0x14);
      uVar14 = 1 << uVar10;
      *(undefined1 *)(iVar7 + -3) = 0xff;
      *(undefined2 *)(iVar7 + -2) = 0;
      do {
        uVar16 = *(uint *)(iVar8 + 0x10);
        uVar12 = *(uint *)(iVar8 + 0xc) | uVar16;
        if ((uVar14 & uVar12) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar16 == 0) || (uVar12 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar8,uVar10);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar13 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar13;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar8 + 0x10) = uVar14 + uVar16;
          return;
        }
        puVar18 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar12 = *puVar18;
          if (uVar16 != uVar12) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar1);
        *puVar18 = uVar14 + uVar16;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar16 == uVar12) {
          return;
        }
      } while( true );
    }
  }
  return;
}

