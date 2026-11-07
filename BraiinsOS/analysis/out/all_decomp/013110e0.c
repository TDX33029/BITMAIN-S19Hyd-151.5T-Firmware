// FUN_013110e0 @ 013110e0 size=440 calls_out=5 calls_in=0
// strings: 

void FUN_013110e0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int unaff_r4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  iVar12 = param_1[6] + 1;
  iVar10 = iVar14;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_01326898(iVar10);
    iVar10 = iVar10 + 0x28;
  }
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar10 = param_1[0x10];
  if (iVar10 != 0) {
    FUN_012f93b8(iVar10);
    thunk_FUN_016d3fb4(iVar10);
  }
  iVar10 = param_1[9];
  FUN_01328134(iVar10,param_1[10]);
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  iVar10 = param_1[0xd];
  puVar6 = (undefined4 *)(iVar10 + 4);
  for (iVar12 = param_1[0xe]; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (puVar6[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar6);
    }
    puVar6 = puVar6 + 3;
  }
  if (param_1[0xc] != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  piVar16 = (int *)param_1[0x12];
  if (piVar16 == (int *)0x0) {
    return;
  }
  iVar10 = piVar16[1];
  if (iVar10 != 0) {
    iVar12 = piVar16[3];
    local_28 = iVar10;
    if (iVar12 != 0) {
      puVar13 = (uint *)*piVar16;
      puVar17 = puVar13 + 1;
      uVar15 = ~*puVar13 & 0x80808080;
      do {
        puVar7 = puVar17;
        if (uVar15 == 0) {
          do {
            puVar17 = puVar7 + 1;
            uVar15 = *puVar7;
            puVar13 = puVar13 + -0x34;
            puVar7 = puVar17;
          } while ((uVar15 & 0x80808080) == 0x80808080);
          uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
        }
        FUN_01334a60(puVar13 + (short)-(short)((uint)LZCOUNT(uVar15 << 0x18 |
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
  iVar10 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar12 = uVar8 - 0x10, uVar8 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)((int)piVar16 + -3) >> 5);
  iVar11 = *(int *)(iVar10 + 8) + 0x10;
  iVar14 = iVar12 * uVar15 + iVar12 + -4;
  iVar12 = iVar11 + iVar14;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar12 + -4);
    if (uVar8 < 5) {
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
  if ((uint)(iVar12 - (int)piVar16) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar8 = 1 << uVar15;
  *(undefined1 *)((int)piVar16 + -3) = 0xff;
  *(undefined2 *)((int)piVar16 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar10 + 0x10);
    uVar4 = *(uint *)(iVar10 + 0xc) | uVar9;
    if ((uVar8 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar4 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar10,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar8 + uVar9;
      return;
    }
    puVar17 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar4 = *puVar17;
      if (uVar9 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar8 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar4) {
      return;
    }
  } while( true );
}

