// FUN_009eb854 @ 009eb854 size=468 calls_out=1 calls_in=1
// strings: 

void FUN_009eb854(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int unaff_r4;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  int local_28;
  
  if (param_2 == 0) {
    return;
  }
  iVar14 = 0;
  do {
    piVar3 = (int *)(param_1 + iVar14 * 0x14);
    iVar12 = *piVar3;
    if (iVar12 != 0) {
      iVar17 = piVar3[1];
      iVar4 = iVar12 + 0x60;
      for (iVar15 = 0; iVar15 != iVar17; iVar15 = iVar15 + 1) {
        iVar5 = iVar12 + iVar15 * 0x40;
        iVar6 = *(int *)(iVar5 + 0x24);
        local_28 = iVar4;
        if (iVar6 != 0) {
          iVar4 = *(int *)(iVar5 + 0x2c);
          if (iVar4 != 0) {
            puVar18 = *(uint **)(iVar5 + 0x20);
            puVar20 = puVar18 + 1;
            uVar8 = ~*puVar18 & 0x80808080;
            do {
              puVar19 = puVar20;
              if (uVar8 == 0) {
                do {
                  puVar20 = puVar19 + 1;
                  uVar8 = *puVar19;
                  puVar18 = puVar18 + -0x18;
                  puVar19 = puVar20;
                } while ((uVar8 & 0x80808080) == 0x80808080);
                uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
              }
              uVar10 = (uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                     (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
              uVar13 = puVar18[uVar10 * -6 + -2];
              puVar16 = (undefined4 *)puVar18[uVar10 * -6 + -1];
              pcVar7 = (code *)*puVar16;
              if (pcVar7 != (code *)0x0) {
                (*pcVar7)(uVar13);
              }
              if (puVar16[1] != 0) {
                thunk_FUN_016d3fb4(uVar13);
              }
              iVar4 = iVar4 + -1;
              uVar8 = uVar8 - 1 & uVar8;
            } while (iVar4 != 0);
          }
          if (iVar6 * 0x19 != -0x1d) {
            thunk_FUN_016d3fb4(*(int *)(iVar5 + 0x20) + iVar6 * -0x18 + -0x18);
          }
        }
        iVar4 = local_28 + 0x40;
      }
      if (iVar17 != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 != param_2);
  if (param_1 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar8 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar12 = uVar10 - 0x10, uVar10 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar15 = *(int *)(iVar14 + 8) + 0x10;
  iVar4 = iVar12 * uVar8 + iVar12 + -4;
  iVar12 = iVar15 + iVar4;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar10 = *(uint *)(iVar12 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar12 - param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar12 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar15 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar1 = *(byte *)(iVar14 + 0x14);
  uVar10 = 1 << uVar8;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar14 + 0x10);
    uVar13 = *(uint *)(iVar14 + 0xc) | uVar11;
    if ((uVar10 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar11 == 0) || (uVar13 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar14,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar16 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar16;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar16 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar18 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar13 = *puVar18;
      if (uVar11 != uVar13) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar2);
    *puVar18 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar13) {
      return;
    }
  } while( true );
}

