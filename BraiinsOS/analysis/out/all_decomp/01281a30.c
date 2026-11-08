// FUN_01281a30 @ 01281a30 size=216 calls_out=1 calls_in=0
// strings: 

void FUN_01281a30(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int *local_28;
  
  iVar16 = param_1[1];
  iVar14 = param_1[2];
  iVar6 = 0;
  local_28 = param_1;
  while (iVar6 != iVar14) {
    iVar10 = iVar6 + 1;
    iVar13 = iVar16 + iVar6 * 0x1c;
    iVar4 = *(int *)(iVar13 + 0x10);
    iVar6 = iVar10;
    if (iVar4 != -0x80000000) {
      iVar10 = *(int *)(iVar13 + 0x14);
      iVar17 = *(int *)(iVar13 + 0x18);
      if (iVar17 != 0) {
        puVar15 = (uint *)(iVar10 + 0x18);
        do {
          if ((*puVar15 & 0x7fffffff) == 0) {
            uVar5 = puVar15[3];
          }
          else {
            thunk_FUN_016d3fb4(puVar15[1]);
            uVar5 = puVar15[3];
          }
          if ((uVar5 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar15[4]);
          }
          puVar15 = puVar15 + 0xc;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        iVar4 = *(int *)(iVar13 + 0x10);
      }
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
    }
  }
  if (*local_28 == 0) {
    return;
  }
  if (iVar16 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar14 = uVar11 - 0x10, uVar11 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar16 + -3) >> 5);
  iVar10 = *(int *)(iVar6 + 8) + 0x10;
  iVar4 = iVar14 * uVar5 + iVar14 + -4;
  iVar14 = iVar10 + iVar4;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar14 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar14 - iVar16) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar11 = 1 << uVar5;
  *(undefined1 *)(iVar16 + -3) = 0xff;
  *(undefined2 *)(iVar16 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar6,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar7;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar7 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

