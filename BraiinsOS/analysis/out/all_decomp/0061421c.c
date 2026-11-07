// FUN_0061421c @ 0061421c size=460 calls_out=2 calls_in=2
// strings: 

void FUN_0061421c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  int local_28;
  
  iVar3 = *param_1;
  uVar14 = param_1[1];
  iVar15 = 0;
  iVar13 = param_1[2];
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  bVar9 = iVar3 != 0;
  do {
    if (iVar13 == 0) {
      if (!bVar9) {
        return;
      }
      if (iVar15 == 0) {
        for (; iVar15 = iVar3, uVar14 != 0; uVar14 = uVar14 - 1) {
          iVar3 = *(int *)(iVar15 + 0x4d8);
        }
      }
      iVar13 = *(int *)(iVar15 + 0x4d0);
      iVar3 = iVar15;
      if (*(int *)(iVar15 + 0x4d0) != 0) {
        do {
          iVar15 = iVar13;
          thunk_FUN_016d3fb4(iVar3);
          iVar13 = *(int *)(iVar15 + 0x4d0);
          iVar3 = iVar15;
        } while (*(int *)(iVar15 + 0x4d0) != 0);
      }
      if (iVar15 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar15 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar3 = uVar11 - 0x10, uVar11 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
      iVar7 = *(int *)(iVar13 + 8) + 0x10;
      iVar6 = iVar3 * uVar14 + iVar3 + -4;
      iVar3 = iVar7 + iVar6;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar11 = *(uint *)(iVar3 + -4);
        if (uVar11 < 5) {
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
      if ((uint)(iVar3 - iVar15) < uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar7 + iVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar11 = 1 << uVar14;
      *(undefined1 *)(iVar15 + -3) = 0xff;
      *(undefined2 *)(iVar15 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar13 + 0x10);
        uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar13,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar11 + uVar12;
          return;
        }
        puVar16 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar9 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar9);
        *puVar16 = uVar11 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
    if (!bVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af368);
    }
    local_28 = iVar13;
    if (iVar15 == 0) {
      uVar11 = 0;
      iVar15 = iVar3;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        iVar15 = *(int *)(iVar15 + 0x4d8);
      }
      iVar3 = 0;
      if (*(short *)(iVar15 + 0x4d6) != 0) goto LAB_00614288;
LAB_006142b8:
      do {
        iVar6 = *(int *)(iVar15 + 0x4d0);
        if (iVar6 == 0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af358);
        }
        uVar11 = (uint)*(ushort *)(iVar15 + 0x4d4);
        thunk_FUN_016d3fb4();
        iVar3 = iVar3 + 1;
        iVar15 = iVar6;
      } while (*(ushort *)(iVar6 + 0x4d6) <= uVar11);
    }
    else {
      uVar11 = uVar14;
      if (*(ushort *)(iVar15 + 0x4d6) <= uVar14) goto LAB_006142b8;
LAB_00614288:
      iVar6 = iVar15;
    }
    if (iVar3 == 0) {
      uVar14 = uVar11 + 1;
      iVar15 = iVar6;
    }
    else {
      piVar4 = (int *)(iVar6 + uVar11 * 4 + 0x4dc);
      do {
        iVar15 = *piVar4;
        iVar3 = iVar3 + -1;
        piVar4 = (int *)(iVar15 + 0x4d8);
      } while (iVar3 != 0);
      uVar14 = 0;
    }
    iVar6 = uVar11 * 0x68 + iVar6;
    bVar9 = true;
    iVar13 = local_28 + -1;
    iVar3 = 0;
    bVar17 = *(int *)(iVar6 + 0x58) != 0;
    iVar7 = 0;
    if (bVar17) {
      iVar7 = *(int *)(iVar6 + 0x5c);
    }
    if (bVar17 && iVar7 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar6 + 0x60));
      iVar3 = 0;
    }
  } while( true );
}

