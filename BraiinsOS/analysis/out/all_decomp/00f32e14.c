// FUN_00f32e14 @ 00f32e14 size=380 calls_out=6 calls_in=1
// strings: 

void FUN_00f32e14(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int unaff_r4;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  int local_2c;
  int local_28;
  
  puVar13 = (undefined1 *)*param_1;
  iVar14 = param_1[1];
  if (iVar14 != 0) {
    iVar7 = iVar14;
    puVar8 = puVar13;
    do {
      *puVar8 = 0;
      iVar7 = iVar7 + -1;
      puVar8 = puVar8 + 1;
    } while (iVar7 != 0);
  }
  iVar15 = param_1[2];
  iVar7 = param_1[3];
  if (iVar7 != 0) {
    iVar10 = 0;
    do {
      puVar16 = (ushort *)(iVar15 + iVar10);
      if (4 < *puVar16) {
        puVar16[1] = 0;
      }
      iVar4 = *(int *)(puVar16 + 2);
      if (iVar4 != 0) {
        local_28 = iVar4 + *(int *)(puVar16 + 4) * 0x14;
        local_2c = iVar4;
        FUN_00f30554(&local_2c);
        uVar5 = *(undefined4 *)(puVar16 + 2);
        puVar16[2] = 0;
        puVar16[3] = 0;
        FUN_00f2c6d0(uVar5,*(undefined4 *)(puVar16 + 4));
      }
      *(undefined1 *)(puVar16 + 2) = 0;
      *(undefined1 *)((int)puVar16 + 5) = 0;
      *(undefined1 *)(puVar16 + 3) = 0;
      *(undefined1 *)((int)puVar16 + 7) = 0;
      *(undefined1 *)(puVar16 + 4) = 0;
      *(undefined1 *)((int)puVar16 + 9) = 0;
      *(undefined1 *)(puVar16 + 5) = 0;
      *(undefined1 *)((int)puVar16 + 0xb) = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
      *(ushort **)(puVar16 + 4) = puVar16 + 6;
      FUN_00f36024();
      iVar10 = iVar10 + 0x14;
    } while (iVar7 * 0x14 != iVar10);
  }
  if (iVar14 != 0) {
    iVar10 = 0;
    do {
      puVar13[iVar10] = 0;
      iVar10 = iVar10 + 1;
    } while (iVar14 != iVar10);
    iVar10 = 0;
    do {
      puVar13[iVar10] = 0;
      iVar10 = iVar10 + 1;
    } while (iVar14 != iVar10);
    thunk_FUN_016d3fb4(puVar13);
  }
  FUN_00f180ac();
  iVar10 = iVar7 + 1;
  iVar14 = iVar15;
  while (iVar10 = iVar10 + -1, iVar10 != 0) {
    FUN_00f33078(iVar14);
    iVar14 = iVar14 + 0x14;
  }
  if (iVar7 == 0) {
    return;
  }
  if (iVar15 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar4 = *(int *)(iVar14 + 8) + 0x10;
  iVar10 = iVar7 * uVar17 + iVar7 + -4;
  iVar7 = iVar4 + iVar10;
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
  if (*(char *)(iVar4 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar14 + 0x10);
    uVar9 = *(uint *)(iVar14 + 0xc) | uVar12;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar14,uVar17);
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
      *(uint *)(iVar14 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar18 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar9 = *puVar18;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

