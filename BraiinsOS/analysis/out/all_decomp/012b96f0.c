// FUN_012b96f0 @ 012b96f0 size=304 calls_out=3 calls_in=3
// strings: 

void FUN_012b96f0(int *param_1)

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
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int *local_28;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar7 = param_1[2] + 1;
  iVar4 = param_1[1];
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_012b7e80(iVar4);
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
      local_28 = piVar8;
      if (iVar7 != 0) {
        puVar14 = (uint *)*piVar8;
        puVar17 = puVar14 + 1;
        uVar16 = ~*puVar14 & 0x80808080;
        do {
          puVar10 = puVar17;
          if (uVar16 == 0) {
            do {
              puVar17 = puVar10 + 1;
              uVar16 = *puVar10;
              puVar14 = puVar14 + -0x34;
              puVar10 = puVar17;
            } while ((uVar16 & 0x80808080) == 0x80808080);
            uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
          }
          FUN_00a64f9c(puVar14 + (short)-(short)((uint)LZCOUNT(uVar16 << 0x18 |
                                                               (uVar16 >> 8 & 0xff) << 0x10 |
                                                               (uVar16 >> 0x10 & 0xff) << 8 |
                                                               uVar16 >> 0x18) >> 3) * 0xd + -0xd);
          iVar7 = iVar7 + -1;
          uVar16 = uVar16 - 1 & uVar16;
        } while (iVar7 != 0);
      }
      piVar8 = local_28;
      if (iVar4 * 0x35 != -0x39) {
        thunk_FUN_016d3fb4(*local_28 + iVar4 * -0x34 + -0x34);
      }
    }
    thunk_FUN_016d3fb4(piVar8);
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar7 * uVar16 + iVar7 + -4;
  iVar7 = iVar15 + iVar12;
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
  if ((uint)(iVar7 - (int)param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
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
      FUN_016d3ca8(&local_28,iVar4,uVar16);
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
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar6 = *puVar17;
      if (uVar13 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar6) {
      return;
    }
  } while( true );
}

