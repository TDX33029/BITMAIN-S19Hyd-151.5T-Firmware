// FUN_0132af2c @ 0132af2c size=536 calls_out=3 calls_in=0
// strings: 

void FUN_0132af2c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r4;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  int *local_28;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  piVar18 = (int *)param_1[4];
  if (piVar18 != (int *)0x0) {
    iVar7 = piVar18[2] + 1;
    iVar4 = piVar18[1];
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_01326b6c(iVar4);
      iVar4 = iVar4 + 0x78;
    }
    if (*piVar18 != 0) {
      thunk_FUN_016d3fb4(piVar18[1]);
    }
    piVar8 = (int *)piVar18[4];
    if (piVar8 != (int *)0x0) {
      iVar4 = piVar8[1];
      if (iVar4 != 0) {
        iVar7 = piVar8[3];
        local_28 = piVar8;
        if (iVar7 != 0) {
          puVar9 = (uint *)*piVar8;
          puVar16 = puVar9 + 1;
          uVar17 = ~*puVar9 & 0x80808080;
          do {
            puVar11 = puVar16;
            if (uVar17 == 0) {
              do {
                puVar16 = puVar11 + 1;
                uVar17 = *puVar11;
                puVar9 = puVar9 + -0x34;
                puVar11 = puVar16;
              } while ((uVar17 & 0x80808080) == 0x80808080);
              uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
            }
            FUN_01334a60(puVar9 + (short)-(short)((uint)LZCOUNT(uVar17 << 0x18 |
                                                                (uVar17 >> 8 & 0xff) << 0x10 |
                                                                (uVar17 >> 0x10 & 0xff) << 8 |
                                                                uVar17 >> 0x18) >> 3) * 0xd + -0xc);
            iVar7 = iVar7 + -1;
            uVar17 = uVar17 - 1 & uVar17;
          } while (iVar7 != 0);
        }
        piVar8 = local_28;
        if (iVar4 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*local_28 + iVar4 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar8);
    }
    thunk_FUN_016d3fb4(piVar18);
  }
  piVar18 = (int *)param_1[6];
  if (piVar18 == (int *)0x0) {
    return;
  }
  piVar8 = (int *)piVar18[1];
  if (piVar8 != (int *)0x0) {
    iVar4 = piVar18[3];
    local_28 = piVar8;
    if (iVar4 != 0) {
      puVar16 = (uint *)*piVar18;
      puVar9 = puVar16 + 1;
      uVar17 = ~*puVar16 & 0x80808080;
      do {
        puVar11 = puVar9;
        if (uVar17 == 0) {
          do {
            puVar9 = puVar11 + 1;
            uVar17 = *puVar11;
            puVar16 = puVar16 + -0x34;
            puVar11 = puVar9;
          } while ((uVar17 & 0x80808080) == 0x80808080);
          uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
        }
        FUN_01334a60(puVar16 + (short)-(short)((uint)LZCOUNT(uVar17 << 0x18 |
                                                             (uVar17 >> 8 & 0xff) << 0x10 |
                                                             (uVar17 >> 0x10 & 0xff) << 8 |
                                                             uVar17 >> 0x18) >> 3) * 0xd + -0xc);
        iVar4 = iVar4 + -1;
        uVar17 = uVar17 - 1 & uVar17;
      } while (iVar4 != 0);
    }
    if ((int)local_28 * 0x35 != -0x39) {
      thunk_FUN_016d3fb4(*piVar18 + (int)local_28 * -0x34 + -0x34);
    }
  }
  if (piVar18 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar17 = *(byte *)((int)piVar18 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar12 - 0x10, uVar12 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)((int)piVar18 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar7 * uVar17 + iVar7 + -4;
  iVar7 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar7 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (int)piVar18) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar17;
  *(undefined1 *)((int)piVar18 + -3) = 0xff;
  *(undefined2 *)((int)piVar18 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar4 + 0x10);
    uVar6 = *(uint *)(iVar4 + 0xc) | uVar14;
    if ((uVar12 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar6 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar17);
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
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar9 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar9);
      uVar6 = *puVar9;
      if (uVar14 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar3);
    *puVar9 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar6) {
      return;
    }
  } while( true );
}

