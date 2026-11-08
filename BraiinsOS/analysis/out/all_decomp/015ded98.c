// FUN_015ded98 @ 015ded98 size=564 calls_out=2 calls_in=2
// strings: 

void FUN_015ded98(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int unaff_r4;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  int local_28;
  
  iVar12 = param_1[1];
  iVar13 = param_1[2];
  if (iVar13 != 0) {
    piVar10 = (int *)(iVar12 + 4);
    do {
      iVar3 = 0;
      if (piVar10[-1] != 0) {
        iVar3 = *piVar10;
      }
      if (piVar10[-1] != 0 && iVar3 != 0) {
        thunk_FUN_016d3fb4(piVar10[1]);
      }
      piVar10 = piVar10 + 0x1a;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar12);
  }
  iVar3 = param_1[3];
  iVar12 = 0;
  uVar15 = param_1[4];
  iVar13 = param_1[5];
  if (iVar3 == 0) {
    bVar8 = false;
    iVar13 = 0;
  }
  else {
    bVar8 = true;
  }
  do {
    if (iVar13 == 0) {
      if (!bVar8) {
        return;
      }
      if (iVar12 == 0) {
        for (; iVar12 = iVar3, uVar15 != 0; uVar15 = uVar15 - 1) {
          iVar3 = *(int *)(iVar12 + 0x4d8);
        }
      }
      iVar13 = *(int *)(iVar12 + 0x4d0);
      iVar3 = iVar12;
      if (*(int *)(iVar12 + 0x4d0) != 0) {
        do {
          iVar12 = iVar13;
          thunk_FUN_016d3fb4(iVar3);
          iVar13 = *(int *)(iVar12 + 0x4d0);
          iVar3 = iVar12;
        } while (*(int *)(iVar12 + 0x4d0) != 0);
      }
      if (iVar12 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar12 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar3 = uVar14 - 0x10, uVar14 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar14 = (uint)(*(byte *)(iVar12 + -3) >> 5);
      iVar6 = *(int *)(iVar13 + 8) + 0x10;
      iVar5 = iVar3 * uVar15 + iVar3 + -4;
      iVar3 = iVar6 + iVar5;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar14 = *(uint *)(iVar3 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar3 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar3 - iVar12) < uVar14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 + iVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar14 = 1 << uVar15;
      *(undefined1 *)(iVar12 + -3) = 0xff;
      *(undefined2 *)(iVar12 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar13 + 0x10);
        uVar7 = *(uint *)(iVar13 + 0xc) | uVar11;
        if ((uVar14 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar13,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar4;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar4 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar14 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar8 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar8);
        *puVar16 = uVar14 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
    if (!bVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ab418);
    }
    local_28 = iVar13;
    if (iVar12 == 0) {
      uVar14 = 0;
      if (uVar15 == 0) {
        iVar13 = 0;
        iVar12 = iVar3;
        goto LAB_015dee44;
      }
      do {
        iVar3 = *(int *)(iVar3 + 0x4d8);
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      iVar13 = 0;
      if (*(short *)(iVar3 + 0x4d6) != 0) goto LAB_015dee58;
LAB_015dee90:
      do {
        iVar5 = *(int *)(iVar3 + 0x4d0);
        if (iVar5 == 0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ab3f8);
        }
        uVar14 = (uint)*(ushort *)(iVar3 + 0x4d4);
        thunk_FUN_016d3fb4();
        iVar13 = iVar13 + 1;
        iVar3 = iVar5;
      } while (*(ushort *)(iVar5 + 0x4d6) <= uVar14);
    }
    else {
      iVar13 = iVar3;
      uVar14 = uVar15;
LAB_015dee44:
      iVar3 = iVar12;
      if (*(ushort *)(iVar3 + 0x4d6) <= uVar14) goto LAB_015dee90;
LAB_015dee58:
      iVar5 = iVar3;
    }
    if (iVar13 == 0) {
      uVar15 = uVar14 + 1;
      iVar12 = iVar5;
    }
    else {
      piVar10 = (int *)(iVar5 + uVar14 * 4 + 0x4dc);
      do {
        iVar12 = *piVar10;
        iVar13 = iVar13 + -1;
        piVar10 = (int *)(iVar12 + 0x4d8);
      } while (iVar13 != 0);
      uVar15 = 0;
    }
    iVar5 = uVar14 * 0x68 + iVar5;
    bVar8 = true;
    iVar13 = local_28 + -1;
    iVar3 = 0;
    bVar17 = *(int *)(iVar5 + 0x58) != 0;
    iVar6 = 0;
    if (bVar17) {
      iVar6 = *(int *)(iVar5 + 0x5c);
    }
    if (bVar17 && iVar6 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar5 + 0x60));
      iVar3 = 0;
    }
  } while( true );
}

