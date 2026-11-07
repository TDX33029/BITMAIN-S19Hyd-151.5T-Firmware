// FUN_00f16b00 @ 00f16b00 size=272 calls_out=3 calls_in=1
// strings: 

void FUN_00f16b00(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r4;
  int *piVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int *local_28;
  
  if (param_1 == 0) {
    return;
  }
  FUN_00f16c10(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  piVar7 = *(int **)(param_1 + 0x30);
  if (piVar7 != (int *)0x0) {
    iVar4 = piVar7[1];
    if (iVar4 != 0) {
      iVar15 = piVar7[3];
      local_28 = piVar7;
      if (iVar15 != 0) {
        puVar13 = (uint *)*piVar7;
        puVar17 = puVar13 + 1;
        uVar16 = ~*puVar13 & 0x80808080;
        do {
          puVar9 = puVar17;
          if (uVar16 == 0) {
            do {
              puVar17 = puVar9 + 1;
              uVar16 = *puVar9;
              puVar13 = puVar13 + -0x34;
              puVar9 = puVar17;
            } while ((uVar16 & 0x80808080) == 0x80808080);
            uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
          }
          FUN_00ee1764(puVar13 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                               (uVar16 >> 8 & 0xff) << 0x10 |
                                                               (uVar16 >> 0x10 & 0xff) << 8 |
                                                               uVar16 >> 0x18) >> 3) * 0xd + -0xd);
          iVar15 = iVar15 + -1;
          uVar16 = uVar16 - 1 & uVar16;
        } while (iVar15 != 0);
      }
      piVar7 = local_28;
      if (iVar4 * 0x35 != -0x39) {
        thunk_FUN_016d3fb4(*local_28 + iVar4 * -0x34 + -0x34);
      }
    }
    thunk_FUN_016d3fb4(piVar7);
  }
  if (param_1 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar10 - 0x10, uVar10 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar15 * uVar16 + iVar15 + -4;
  iVar15 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar15 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar15 - param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar6 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar6 = *puVar17;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

