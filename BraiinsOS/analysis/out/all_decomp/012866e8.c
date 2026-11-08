// FUN_012866e8 @ 012866e8 size=388 calls_out=1 calls_in=0
// strings: 

void FUN_012866e8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *local_28;
  
  iVar15 = param_1[2];
  iVar16 = param_1[3];
  local_28 = param_1;
  if (*param_1 == 0) {
    iVar7 = 0;
    while (iVar7 != iVar16) {
      iVar10 = iVar7 + 1;
      iVar13 = iVar15 + iVar7 * 0x1c;
      iVar4 = *(int *)(iVar13 + 0x10);
      iVar7 = iVar10;
      if (iVar4 != -0x80000000) {
        iVar10 = *(int *)(iVar13 + 0x14);
        iVar17 = *(int *)(iVar13 + 0x18);
        if (iVar17 != 0) {
          puVar14 = (uint *)(iVar10 + 0x18);
          do {
            if ((*puVar14 & 0x7fffffff) == 0) {
              uVar5 = puVar14[3];
            }
            else {
              thunk_FUN_016d3fb4(puVar14[1]);
              uVar5 = puVar14[3];
            }
            if ((uVar5 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(puVar14[4]);
            }
            puVar14 = puVar14 + 0xc;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          iVar4 = *(int *)(iVar13 + 0x10);
        }
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(iVar10);
        }
      }
    }
  }
  else {
    iVar7 = 0;
    while (iVar7 != iVar16) {
      iVar10 = iVar7 + 1;
      iVar13 = iVar15 + iVar7 * 0x1c;
      iVar4 = *(int *)(iVar13 + 0x10);
      iVar7 = iVar10;
      if (iVar4 != -0x80000000) {
        iVar10 = *(int *)(iVar13 + 0x14);
        iVar17 = *(int *)(iVar13 + 0x18);
        if (iVar17 != 0) {
          puVar14 = (uint *)(iVar10 + 0x18);
          do {
            if ((*puVar14 & 0x7fffffff) == 0) {
              uVar5 = puVar14[3];
            }
            else {
              thunk_FUN_016d3fb4(puVar14[1]);
              uVar5 = puVar14[3];
            }
            if ((uVar5 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(puVar14[4]);
            }
            puVar14 = puVar14 + 0xc;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          iVar4 = *(int *)(iVar13 + 0x10);
        }
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(iVar10);
        }
      }
    }
  }
  if (local_28[1] == 0) {
    return;
  }
  if (iVar15 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar10 = *(int *)(iVar16 + 8) + 0x10;
  iVar4 = iVar7 * uVar5 + iVar7 + -4;
  iVar7 = iVar10 + iVar4;
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
  if ((uint)(iVar7 - iVar15) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar11 = 1 << uVar5;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar16 + 0x10);
    uVar8 = *(uint *)(iVar16 + 0xc) | uVar12;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar16,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar8 = *puVar14;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

