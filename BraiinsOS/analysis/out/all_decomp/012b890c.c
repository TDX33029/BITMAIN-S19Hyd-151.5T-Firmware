// FUN_012b890c @ 012b890c size=616 calls_out=3 calls_in=2
// strings: 

void FUN_012b890c(int param_1)

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
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int *local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  piVar14 = *(int **)(param_1 + 0x60);
  if (piVar14 != (int *)0x0) {
    iVar7 = piVar14[2] + 1;
    iVar4 = piVar14[1];
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_012b7e80(iVar4);
      iVar4 = iVar4 + 0x78;
    }
    if (*piVar14 != 0) {
      thunk_FUN_016d3fb4(piVar14[1]);
    }
    piVar8 = (int *)piVar14[4];
    if (piVar8 != (int *)0x0) {
      iVar4 = piVar8[1];
      if (iVar4 != 0) {
        iVar7 = piVar8[3];
        local_28 = piVar8;
        if (iVar7 != 0) {
          puVar15 = (uint *)*piVar8;
          puVar18 = puVar15 + 1;
          uVar17 = ~*puVar15 & 0x80808080;
          do {
            puVar10 = puVar18;
            if (uVar17 == 0) {
              do {
                puVar18 = puVar10 + 1;
                uVar17 = *puVar10;
                puVar15 = puVar15 + -0x34;
                puVar10 = puVar18;
              } while ((uVar17 & 0x80808080) == 0x80808080);
              uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
            }
            FUN_00a64f9c(puVar15 + (short)-(short)((uint)LZCOUNT(uVar17 << 0x18 |
                                                                 (uVar17 >> 8 & 0xff) << 0x10 |
                                                                 (uVar17 >> 0x10 & 0xff) << 8 |
                                                                 uVar17 >> 0x18) >> 3) * 0xd + -0xd)
            ;
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
    thunk_FUN_016d3fb4(piVar14);
  }
  piVar14 = *(int **)(param_1 + 0x68);
  if (piVar14 == (int *)0x0) {
    return;
  }
  piVar8 = (int *)piVar14[1];
  if (piVar8 != (int *)0x0) {
    iVar4 = piVar14[3];
    local_28 = piVar8;
    if (iVar4 != 0) {
      puVar15 = (uint *)*piVar14;
      puVar18 = puVar15 + 1;
      uVar17 = ~*puVar15 & 0x80808080;
      do {
        puVar10 = puVar18;
        if (uVar17 == 0) {
          do {
            puVar18 = puVar10 + 1;
            uVar17 = *puVar10;
            puVar15 = puVar15 + -0x34;
            puVar10 = puVar18;
          } while ((uVar17 & 0x80808080) == 0x80808080);
          uVar17 = uVar17 & 0x80808080 ^ 0x80808080;
        }
        FUN_00a64f9c(puVar15 + (short)-(short)((uint)LZCOUNT(uVar17 << 0x18 |
                                                             (uVar17 >> 8 & 0xff) << 0x10 |
                                                             (uVar17 >> 0x10 & 0xff) << 8 |
                                                             uVar17 >> 0x18) >> 3) * 0xd + -0xd);
        iVar4 = iVar4 + -1;
        uVar17 = uVar17 - 1 & uVar17;
      } while (iVar4 != 0);
    }
    if ((int)local_28 * 0x35 != -0x39) {
      thunk_FUN_016d3fb4(*piVar14 + (int)local_28 * -0x34 + -0x34);
    }
  }
  if (piVar14 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar17 = *(byte *)((int)piVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar14 + -3) >> 5);
  iVar16 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar7 * uVar17 + iVar7 + -4;
  iVar7 = iVar16 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar7 - (int)piVar14) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar16 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)((int)piVar14 + -3) = 0xff;
  *(undefined2 *)((int)piVar14 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar6 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar6 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar18 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar6 = *puVar18;
      if (uVar13 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar6) {
      return;
    }
  } while( true );
}

