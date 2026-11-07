// FUN_00a66a14 @ 00a66a14 size=412 calls_out=1 calls_in=1
// strings: 

void FUN_00a66a14(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_r4;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint *local_28;
  
  iVar6 = param_1[1];
  if (iVar6 == 0) {
    return;
  }
  iVar11 = param_1[3];
  if (iVar11 != 0) {
    puVar13 = (uint *)*param_1;
    puVar20 = puVar13 + 1;
    uVar14 = ~*puVar13 & 0x80808080;
    do {
      puVar16 = puVar20;
      if (uVar14 == 0) {
        do {
          puVar20 = puVar16 + 1;
          uVar14 = *puVar16;
          puVar13 = puVar13 + -0x14;
          puVar16 = puVar20;
        } while ((uVar14 & 0x80808080) == 0x80808080);
        uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
      }
      puVar16 = puVar13 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                         (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) * -5;
      uVar7 = puVar16[-3];
      if (uVar7 != 0) {
        uVar15 = puVar16[-1];
        local_28 = puVar16;
        if (uVar15 != 0) {
          puVar16 = (uint *)puVar16[-4];
          puVar18 = puVar16 + 1;
          uVar19 = ~*puVar16 & 0x80808080;
          do {
            puVar17 = puVar18;
            if (uVar19 == 0) {
              do {
                puVar18 = puVar17 + 1;
                uVar19 = *puVar17;
                puVar16 = puVar16 + -0xc;
                puVar17 = puVar18;
              } while ((uVar19 & 0x80808080) == 0x80808080);
              uVar19 = uVar19 & 0x80808080 ^ 0x80808080;
            }
            uVar1 = (uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                  (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3;
            if (puVar16[uVar1 * -3 + -3] != 0) {
              thunk_FUN_016d3fb4(puVar16[uVar1 * -3 + -2]);
            }
            uVar15 = uVar15 - 1;
            uVar19 = uVar19 - 1 & uVar19;
          } while (uVar15 != 0);
        }
        if (uVar7 * 0xd != -0x11) {
          thunk_FUN_016d3fb4(local_28[-4] + uVar7 * -0xc + -0xc);
        }
      }
      iVar11 = iVar11 + -1;
      uVar14 = uVar14 - 1 & uVar14;
    } while (iVar11 != 0);
  }
  iVar11 = iVar6 * 0x14 + 0x14;
  if (iVar6 + iVar11 == -5) {
    return;
  }
  iVar11 = *param_1 - iVar11;
  if (iVar11 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar7 - 0x10, uVar7 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar8 * uVar14 + iVar8 + -4;
  iVar8 = iVar12 + iVar10;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar7 = *(uint *)(iVar8 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - iVar11) < uVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar19 = *(uint *)(iVar6 + 0x10);
    uVar15 = *(uint *)(iVar6 + 0xc) | uVar19;
    if ((uVar7 & uVar15) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar19 == 0) || (uVar15 + uVar7 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar6,uVar14);
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
      *(uint *)(iVar6 + 0x10) = uVar7 + uVar19;
      return;
    }
    puVar20 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar15 = *puVar20;
      if (uVar19 != uVar15) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar4);
    *puVar20 = uVar7 + uVar19;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar19 == uVar15) {
      return;
    }
  } while( true );
}

