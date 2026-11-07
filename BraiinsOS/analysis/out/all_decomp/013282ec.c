// FUN_013282ec @ 013282ec size=508 calls_out=3 calls_in=4
// strings: 

void FUN_013282ec(int *param_1,int *param_2)

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
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int *local_28;
  
  if (param_1 != (int *)0x0) {
    iVar7 = param_1[2] + 1;
    iVar4 = param_1[1];
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_01326b6c(iVar4);
      iVar4 = iVar4 + 0x78;
    }
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    piVar8 = (int *)param_1[4];
    if (piVar8 != (int *)0x0) {
      iVar4 = piVar8[1];
      if (iVar4 != 0) {
        iVar7 = piVar8[3];
        local_28 = param_2;
        if (iVar7 != 0) {
          puVar9 = (uint *)*piVar8;
          puVar14 = puVar9 + 1;
          uVar17 = ~*puVar9 & 0x80808080;
          do {
            puVar15 = puVar14;
            if (uVar17 == 0) {
              do {
                puVar14 = puVar15 + 1;
                uVar17 = *puVar15;
                puVar9 = puVar9 + -0x34;
                puVar15 = puVar14;
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
        param_2 = local_28;
        if (iVar4 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*piVar8 + iVar4 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar8);
    }
    thunk_FUN_016d3fb4(param_1);
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar4 = param_2[1];
  if (iVar4 != 0) {
    iVar7 = param_2[3];
    local_28 = param_2;
    if (iVar7 != 0) {
      puVar9 = (uint *)*param_2;
      puVar14 = puVar9 + 1;
      uVar17 = ~*puVar9 & 0x80808080;
      do {
        puVar15 = puVar14;
        if (uVar17 == 0) {
          do {
            puVar14 = puVar15 + 1;
            uVar17 = *puVar15;
            puVar9 = puVar9 + -0x34;
            puVar15 = puVar14;
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
    param_2 = local_28;
    if (iVar4 * 0x35 != -0x39) {
      thunk_FUN_016d3fb4(*local_28 + iVar4 * -0x34 + -0x34);
    }
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar17 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
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
  if ((uint)(iVar7 - (int)param_2) < uVar11) {
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
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
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
      uVar10 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar9 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar9);
      uVar6 = *puVar9;
      if (uVar13 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar3);
    *puVar9 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar6) {
      return;
    }
  } while( true );
}

