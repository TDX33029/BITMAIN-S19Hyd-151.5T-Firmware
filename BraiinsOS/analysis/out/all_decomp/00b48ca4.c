// FUN_00b48ca4 @ 00b48ca4 size=212 calls_out=1 calls_in=0
// strings: 

void FUN_00b48ca4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  int *local_28;
  
  iVar16 = param_1[1];
  iVar8 = 0;
  iVar12 = param_1[2];
  local_28 = param_1;
  while (iVar8 != iVar12) {
    iVar11 = 0;
    iVar6 = iVar16 + iVar8 * 0x18;
    iVar13 = *(int *)(iVar6 + 0xc);
    for (iVar17 = *(int *)(iVar6 + 0x10); iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*(int *)(iVar13 - iVar11) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((iVar13 - iVar11) + 4));
      }
      iVar14 = iVar13 - iVar11;
      if (*(int *)(iVar14 + 0xc) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x10));
      }
      if (*(int *)(iVar14 + 0x18) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x1c));
      }
      iVar11 = iVar11 + -0x28;
    }
    iVar8 = iVar8 + 1;
    if (*(int *)(iVar6 + 8) != 0) {
      thunk_FUN_016d3fb4(iVar13);
    }
  }
  if (*local_28 == 0) {
    return;
  }
  if (iVar16 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar12 = uVar9 - 0x10, uVar9 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar16 + -3) >> 5);
  iVar11 = *(int *)(iVar8 + 8) + 0x10;
  iVar6 = iVar12 * uVar15 + iVar12 + -4;
  iVar12 = iVar11 + iVar6;
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
  if ((uint)(iVar12 - iVar16) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar16 + -3) = 0xff;
  *(undefined2 *)(iVar16 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar8 + 0x10);
    uVar5 = *(uint *)(iVar8 + 0xc) | uVar10;
    if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar4;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar4 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar18 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar5 = *puVar18;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

