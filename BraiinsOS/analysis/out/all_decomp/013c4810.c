// FUN_013c4810 @ 013c4810 size=448 calls_out=5 calls_in=1
// strings: 

void FUN_013c4810(int *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint local_2c;
  int *local_28;
  
  uVar11 = param_1[2];
  iVar16 = param_1[1];
  uVar3 = 0;
  bVar21 = 0x3ffffffe < uVar11;
  bVar20 = uVar11 == 0x3fffffff;
  uVar17 = uVar11 * 4;
  if (uVar11 < 0x40000000) {
    bVar21 = 0x7ffffffb < uVar17;
    bVar20 = uVar17 == 0x7ffffffc;
  }
  if (bVar21 && !bVar20) {
LAB_013c4838:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,uVar17);
  }
  if (uVar17 == 0) {
    iVar4 = 4;
    local_2c = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar17);
    local_2c = uVar11;
    if (iVar4 == 0) {
      uVar3 = 4;
      goto LAB_013c4838;
    }
  }
  FUN_016dd1aa(iVar4,iVar16,uVar17);
  uVar9 = *(uint *)(param_2 + 0x58);
  uVar19 = param_1[3];
  uVar17 = uVar9 >> (*(uint *)(param_2 + 0x15c) & 0x1f);
  local_28 = param_1;
  if (uVar17 != 0) {
    uVar10 = uVar19 & 0x1f;
    uVar6 = 0;
    puVar7 = &DAT_01894128;
    do {
      if (uVar6 == uVar11) {
        uVar17 = uVar11;
LAB_013c49b0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar11,puVar7);
      }
      uVar13 = *(uint *)(iVar4 + uVar6 * 4);
      if (uVar6 << uVar10 != uVar13) {
        do {
          uVar14 = uVar13;
          if (uVar11 <= uVar14 >> uVar10) {
            puVar7 = &DAT_01894138;
            uVar17 = uVar14 >> uVar10;
            goto LAB_013c49b0;
          }
          uVar13 = *(uint *)(iVar4 + (uVar14 >> uVar10) * 4);
        } while (uVar6 << uVar10 != uVar13);
        *(uint *)(iVar16 + uVar6 * 4) = uVar14;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar17);
  }
  if (uVar9 != 0) {
    iVar8 = uVar9 << 2;
    puVar18 = *(uint **)(param_2 + 0x54);
    do {
      uVar17 = *puVar18 >> (uVar19 & 0x1f);
      if (uVar11 <= *puVar18 >> (uVar19 & 0x1f)) goto LAB_013c49c0;
      iVar8 = iVar8 + -4;
      *puVar18 = *(uint *)(iVar16 + uVar17 * 4);
      puVar18 = puVar18 + 1;
    } while (iVar8 != 0);
  }
  if (*(int *)(param_2 + 0x1a8) != 0) {
    iVar8 = *(int *)(param_2 + 0x1a8) << 2;
    puVar18 = *(uint **)(param_2 + 0x1a4);
    do {
      uVar17 = *puVar18 >> (uVar19 & 0x1f);
      if (uVar11 <= *puVar18 >> (uVar19 & 0x1f)) {
LAB_013c49c0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar11,&DAT_01893c90);
      }
      iVar8 = iVar8 + -4;
      *puVar18 = *(uint *)(iVar16 + uVar17 * 4);
      puVar18 = puVar18 + 1;
    } while (iVar8 != 0);
  }
  if (local_2c != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (*param_1 == 0) {
    return;
  }
  if (iVar16 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar16 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar8 * uVar17 + iVar8 + -4;
  iVar8 = iVar15 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar16) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
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
  uVar11 = 1 << uVar17;
  *(undefined1 *)(iVar16 + -3) = 0xff;
  *(undefined2 *)(iVar16 + -2) = 0;
  do {
    uVar19 = *(uint *)(iVar4 + 0x10);
    uVar9 = *(uint *)(iVar4 + 0xc) | uVar19;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar19 == 0) || (uVar9 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar3 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar3;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar19;
      return;
    }
    puVar18 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar9 = *puVar18;
      if (uVar19 != uVar9) goto LAB_016d409c;
      bVar20 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar20);
    *puVar18 = uVar11 + uVar19;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar19 == uVar9) {
      return;
    }
  } while( true );
}

