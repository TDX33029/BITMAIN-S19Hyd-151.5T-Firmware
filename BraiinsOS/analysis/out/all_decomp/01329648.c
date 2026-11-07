// FUN_01329648 @ 01329648 size=704 calls_out=9 calls_in=0
// strings: 

void FUN_01329648(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  int local_28;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  iVar14 = param_1[5];
  iVar7 = param_1[6] + 1;
  iVar8 = iVar14;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_01327538(iVar8);
    iVar8 = iVar8 + 0x74;
  }
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar14 = param_1[9];
  iVar7 = param_1[10] + 1;
  iVar8 = iVar14;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_01327538(iVar8);
    iVar8 = iVar8 + 0x74;
  }
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar14 = param_1[0xd];
  iVar7 = param_1[0xe] + 1;
  iVar8 = iVar14;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_01326e7c(iVar8);
    iVar8 = iVar8 + 0xa0;
  }
  if (param_1[0xc] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar14 = param_1[0x11];
  iVar7 = param_1[0x12] + 1;
  iVar8 = iVar14;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_01326688(iVar8);
    iVar8 = iVar8 + 0x50;
  }
  if (param_1[0x10] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar7 = param_1[0x15];
  iVar14 = param_1[0x16];
  for (iVar8 = 0; iVar14 != iVar8; iVar8 = iVar8 + 1) {
    iVar4 = iVar7 + iVar8 * 0x20;
    FUN_013282ec(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x18));
  }
  if (param_1[0x14] != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  iVar14 = param_1[0x19];
  iVar7 = param_1[0x1a] + 1;
  iVar8 = iVar14;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_01327d34(iVar8);
    iVar8 = iVar8 + 0x20;
  }
  if (param_1[0x18] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  FUN_01329b1c(param_1[0x24]);
  iVar8 = param_1[0x1d];
  FUN_01328134(iVar8,param_1[0x1e]);
  if (param_1[0x1c] != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar8 = param_1[0x21];
  puVar9 = (undefined4 *)(iVar8 + 4);
  for (iVar7 = param_1[0x22]; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (puVar9[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar9);
    }
    puVar9 = puVar9 + 3;
  }
  if (param_1[0x20] != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  piVar16 = (int *)param_1[0x26];
  if (piVar16 == (int *)0x0) {
    return;
  }
  iVar8 = piVar16[1];
  if (iVar8 != 0) {
    iVar7 = piVar16[3];
    local_28 = iVar8;
    if (iVar7 != 0) {
      puVar13 = (uint *)*piVar16;
      puVar17 = puVar13 + 1;
      uVar15 = ~*puVar13 & 0x80808080;
      do {
        puVar10 = puVar17;
        if (uVar15 == 0) {
          do {
            puVar17 = puVar10 + 1;
            uVar15 = *puVar10;
            puVar13 = puVar13 + -0x34;
            puVar10 = puVar17;
          } while ((uVar15 & 0x80808080) == 0x80808080);
          uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
        }
        FUN_01334a60(puVar13 + (short)-(short)((uint)LZCOUNT(uVar15 << 0x18 |
                                                             (uVar15 >> 8 & 0xff) << 0x10 |
                                                             (uVar15 >> 0x10 & 0xff) << 8 |
                                                             uVar15 >> 0x18) >> 3) * 0xd + -0xc);
        iVar7 = iVar7 + -1;
        uVar15 = uVar15 - 1 & uVar15;
      } while (iVar7 != 0);
    }
    if (local_28 * 0x35 != -0x39) {
      thunk_FUN_016d3fb4(*piVar16 + local_28 * -0x34 + -0x34);
    }
  }
  if (piVar16 == (int *)0x0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)piVar16 + -3) >> 5);
  iVar4 = *(int *)(iVar8 + 8) + 0x10;
  iVar14 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar4 + iVar14;
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
  if ((uint)(iVar7 - (int)piVar16) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar4 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)((int)piVar16 + -3) = 0xff;
  *(undefined2 *)((int)piVar16 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar8 + 0x10);
    uVar5 = *(uint *)(iVar8 + 0xc) | uVar12;
    if ((uVar11 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar5 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar9;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar9 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar5 = *puVar17;
      if (uVar12 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar5) {
      return;
    }
  } while( true );
}

