// FUN_0131abb8 @ 0131abb8 size=316 calls_out=3 calls_in=0
// strings: 

void FUN_0131abb8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  int local_28;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  iVar7 = param_1[0xc];
  if (iVar7 != 0) {
    FUN_012f93b8(iVar7);
    thunk_FUN_016d3fb4(iVar7);
  }
  piVar16 = (int *)param_1[0xe];
  if (piVar16 == (int *)0x0) {
    return;
  }
  iVar7 = piVar16[1];
  if (iVar7 != 0) {
    iVar12 = piVar16[3];
    local_28 = iVar7;
    if (iVar12 != 0) {
      puVar14 = (uint *)*piVar16;
      puVar17 = puVar14 + 1;
      uVar15 = ~*puVar14 & 0x80808080;
      do {
        puVar8 = puVar17;
        if (uVar15 == 0) {
          do {
            puVar17 = puVar8 + 1;
            uVar15 = *puVar8;
            puVar14 = puVar14 + -0x34;
            puVar8 = puVar17;
          } while ((uVar15 & 0x80808080) == 0x80808080);
          uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
        }
        FUN_01334a60(puVar14 + (short)-(short)((uint)LZCOUNT(uVar15 << 0x18 |
                                                             (uVar15 >> 8 & 0xff) << 0x10 |
                                                             (uVar15 >> 0x10 & 0xff) << 8 |
                                                             uVar15 >> 0x18) >> 3) * 0xd + -0xc);
        iVar12 = iVar12 + -1;
        uVar15 = uVar15 - 1 & uVar15;
      } while (iVar12 != 0);
    }
    if (local_28 * 0x35 != -0x39) {
      thunk_FUN_016d3fb4(*piVar16 + local_28 * -0x34 + -0x34);
    }
  }
  if (piVar16 == (int *)0x0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar12 = uVar9 - 0x10, uVar9 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)piVar16 + -3) >> 5);
  iVar13 = *(int *)(iVar7 + 8) + 0x10;
  iVar10 = iVar12 * uVar15 + iVar12 + -4;
  iVar12 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar12 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar12 - (int)piVar16) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)((int)piVar16 + -3) = 0xff;
  *(undefined2 *)((int)piVar16 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar7 + 0x10);
    uVar5 = *(uint *)(iVar7 + 0xc) | uVar11;
    if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar7,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar5 = *puVar17;
      if (uVar11 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar5) {
      return;
    }
  } while( true );
}

