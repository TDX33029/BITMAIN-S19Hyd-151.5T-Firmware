// FUN_0129ed4c @ 0129ed4c size=1052 calls_out=4 calls_in=0
// strings: 

void FUN_0129ed4c(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  uint *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int local_28;
  
  iVar15 = *(int *)(param_1 + 0x14);
  iVar13 = *(int *)(param_1 + 0x18) + 1;
  iVar17 = iVar15;
  while (iVar13 = iVar13 + -1, iVar13 != 0) {
    FUN_012b6bc4(iVar17);
    iVar17 = iVar17 + 0x28;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(iVar15);
  }
  iVar17 = *(int *)(param_1 + 0x20);
  if (iVar17 != 0) {
    piVar8 = *(int **)(iVar17 + 0x10);
    if (piVar8 != (int *)0x0) {
      iVar13 = piVar8[1];
      if (iVar13 != 0) {
        iVar15 = piVar8[3];
        local_28 = param_1;
        if (iVar15 != 0) {
          puVar6 = (uint *)*piVar8;
          puVar14 = puVar6 + 1;
          uVar16 = ~*puVar6 & 0x80808080;
          do {
            puVar9 = puVar14;
            if (uVar16 == 0) {
              do {
                puVar14 = puVar9 + 1;
                uVar16 = *puVar9;
                puVar6 = puVar6 + -0x34;
                puVar9 = puVar14;
              } while ((uVar16 & 0x80808080) == 0x80808080);
              uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
            }
            FUN_00a64f9c(puVar6 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                                (uVar16 >> 8 & 0xff) << 0x10 |
                                                                (uVar16 >> 0x10 & 0xff) << 8 |
                                                                uVar16 >> 0x18) >> 3) * 0xd + -0xd);
            iVar15 = iVar15 + -1;
            uVar16 = uVar16 - 1 & uVar16;
          } while (iVar15 != 0);
        }
        param_1 = local_28;
        if (iVar13 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*piVar8 + iVar13 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar8);
    }
    thunk_FUN_016d3fb4(iVar17);
  }
  iVar17 = *(int *)(param_1 + 0x28);
  if (iVar17 != 0) {
    piVar8 = *(int **)(iVar17 + 0x10);
    if (piVar8 != (int *)0x0) {
      iVar13 = piVar8[1];
      if (iVar13 != 0) {
        iVar15 = piVar8[3];
        local_28 = param_1;
        if (iVar15 != 0) {
          puVar6 = (uint *)*piVar8;
          puVar14 = puVar6 + 1;
          uVar16 = ~*puVar6 & 0x80808080;
          do {
            puVar9 = puVar14;
            if (uVar16 == 0) {
              do {
                puVar14 = puVar9 + 1;
                uVar16 = *puVar9;
                puVar6 = puVar6 + -0x34;
                puVar9 = puVar14;
              } while ((uVar16 & 0x80808080) == 0x80808080);
              uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
            }
            FUN_00a64f9c(puVar6 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                                (uVar16 >> 8 & 0xff) << 0x10 |
                                                                (uVar16 >> 0x10 & 0xff) << 8 |
                                                                uVar16 >> 0x18) >> 3) * 0xd + -0xd);
            iVar15 = iVar15 + -1;
            uVar16 = uVar16 - 1 & uVar16;
          } while (iVar15 != 0);
        }
        param_1 = local_28;
        if (iVar13 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*piVar8 + iVar13 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar8);
    }
    thunk_FUN_016d3fb4(iVar17);
  }
  iVar17 = *(int *)(param_1 + 0x30);
  if (iVar17 != 0) {
    FUN_01296cb0(iVar17);
    thunk_FUN_016d3fb4(iVar17);
  }
  iVar17 = *(int *)(param_1 + 0x38);
  if (iVar17 != 0) {
    piVar8 = *(int **)(iVar17 + 0x10);
    if (piVar8 != (int *)0x0) {
      iVar13 = piVar8[1];
      if (iVar13 != 0) {
        iVar15 = piVar8[3];
        local_28 = param_1;
        if (iVar15 != 0) {
          puVar6 = (uint *)*piVar8;
          puVar14 = puVar6 + 1;
          uVar16 = ~*puVar6 & 0x80808080;
          do {
            puVar9 = puVar14;
            if (uVar16 == 0) {
              do {
                puVar14 = puVar9 + 1;
                uVar16 = *puVar9;
                puVar6 = puVar6 + -0x34;
                puVar9 = puVar14;
              } while ((uVar16 & 0x80808080) == 0x80808080);
              uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
            }
            FUN_00a64f9c(puVar6 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                                (uVar16 >> 8 & 0xff) << 0x10 |
                                                                (uVar16 >> 0x10 & 0xff) << 8 |
                                                                uVar16 >> 0x18) >> 3) * 0xd + -0xd);
            iVar15 = iVar15 + -1;
            uVar16 = uVar16 - 1 & uVar16;
          } while (iVar15 != 0);
        }
        param_1 = local_28;
        if (iVar13 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*piVar8 + iVar13 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar8);
    }
    thunk_FUN_016d3fb4(iVar17);
  }
  iVar17 = *(int *)(param_1 + 0x40);
  if (iVar17 != 0) {
    FUN_01296cb0(iVar17);
    thunk_FUN_016d3fb4(iVar17);
  }
  piVar8 = *(int **)(param_1 + 0x48);
  if (piVar8 == (int *)0x0) {
    return;
  }
  iVar17 = piVar8[1];
  if (iVar17 != 0) {
    iVar13 = piVar8[3];
    local_28 = iVar17;
    if (iVar13 != 0) {
      puVar14 = (uint *)*piVar8;
      puVar6 = puVar14 + 1;
      uVar16 = ~*puVar14 & 0x80808080;
      do {
        puVar9 = puVar6;
        if (uVar16 == 0) {
          do {
            puVar6 = puVar9 + 1;
            uVar16 = *puVar9;
            puVar14 = puVar14 + -0x34;
            puVar9 = puVar6;
          } while ((uVar16 & 0x80808080) == 0x80808080);
          uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
        }
        FUN_00a64f9c(puVar14 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                             (uVar16 >> 8 & 0xff) << 0x10 |
                                                             (uVar16 >> 0x10 & 0xff) << 8 |
                                                             uVar16 >> 0x18) >> 3) * 0xd + -0xd);
        iVar13 = iVar13 + -1;
        uVar16 = uVar16 - 1 & uVar16;
      } while (iVar13 != 0);
    }
    if (local_28 * 0x35 != -0x39) {
      thunk_FUN_016d3fb4(*piVar8 + local_28 * -0x34 + -0x34);
    }
  }
  if (piVar8 == (int *)0x0) {
    return;
  }
  iVar17 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)piVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar13 = uVar10 - 0x10, uVar10 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)((int)piVar8 + -3) >> 5);
  iVar12 = *(int *)(iVar17 + 8) + 0x10;
  iVar15 = iVar13 * uVar16 + iVar13 + -4;
  iVar13 = iVar12 + iVar15;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar13 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar13 - (int)piVar8) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar17 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)((int)piVar8 + -3) = 0xff;
  *(undefined2 *)((int)piVar8 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar17 + 0x10);
    uVar5 = *(uint *)(iVar17 + 0xc) | uVar11;
    if ((uVar10 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar5 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar17,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar4;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar4 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar17 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar6 = (uint *)(iVar17 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar6);
      uVar5 = *puVar6;
      if (uVar11 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar3);
    *puVar6 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar5) {
      return;
    }
  } while( true );
}

