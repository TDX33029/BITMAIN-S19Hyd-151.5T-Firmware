// FUN_0151c6f4 @ 0151c6f4 size=280 calls_out=1 calls_in=2
// strings: 

void FUN_0151c6f4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int unaff_r4;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  int *local_28;
  
  iVar11 = param_1[1];
  iVar4 = param_1[3];
  iVar14 = 0;
  local_28 = param_1;
  while (iVar14 != ((uint)(iVar4 - iVar11) >> 3) * -0x55555555) {
    piVar16 = (int *)(iVar11 + iVar14 * 0x18);
    if ((piVar16[3] & 0x7fffffffU) == 0) {
      iVar19 = piVar16[2];
      piVar9 = (int *)piVar16[1];
    }
    else {
      thunk_FUN_016d3fb4(piVar16[4]);
      iVar19 = piVar16[2];
      piVar9 = (int *)piVar16[1];
    }
    if (iVar19 != 0) {
      iVar15 = 0;
      piVar18 = piVar9;
      do {
        iVar5 = *piVar18;
        if (iVar5 != -0x80000000) {
          piVar7 = piVar18;
          if (iVar5 == -0x7fffffff) {
            iVar5 = piVar18[1];
            if (iVar5 == -0x80000000) goto LAB_0151c778;
            piVar7 = piVar9 + iVar15 * 4 + 1;
          }
          if (iVar5 != 0) {
            thunk_FUN_016d3fb4(piVar7[1]);
          }
        }
LAB_0151c778:
        iVar15 = iVar15 + 1;
        piVar18 = piVar18 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    iVar14 = iVar14 + 1;
    if (*piVar16 != 0) {
      thunk_FUN_016d3fb4(piVar9);
    }
  }
  if (local_28[2] == 0) {
    return;
  }
  iVar4 = *local_28;
  if (iVar4 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar14 = uVar12 - 0x10, uVar12 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar15 = *(int *)(iVar11 + 8) + 0x10;
  iVar19 = iVar14 * uVar17 + iVar14 + -4;
  iVar14 = iVar15 + iVar19;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar14 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar14 - iVar4) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar19) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar11 + 0x14);
  uVar12 = 1 << uVar17;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar11 + 0x10);
    uVar8 = *(uint *)(iVar11 + 0xc) | uVar13;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar11,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar20 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar8 = *puVar20;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar3);
    *puVar20 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

