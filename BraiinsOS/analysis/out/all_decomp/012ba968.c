// FUN_012ba968 @ 012ba968 size=264 calls_out=3 calls_in=1
// strings: 

void FUN_012ba968(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r4;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  int local_28;
  
  uVar11 = *(undefined4 *)(param_1 + 0x24);
  FUN_007bacd0(uVar11,*(undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(uVar11);
  }
  piVar16 = *(int **)(param_1 + 0x30);
  if (piVar16 == (int *)0x0) {
    return;
  }
  iVar4 = piVar16[1];
  if (iVar4 != 0) {
    iVar12 = piVar16[3];
    local_28 = iVar4;
    if (iVar12 != 0) {
      puVar14 = (uint *)*piVar16;
      puVar17 = puVar14 + 1;
      uVar15 = ~*puVar14 & 0x80808080;
      do {
        puVar7 = puVar17;
        if (uVar15 == 0) {
          do {
            puVar17 = puVar7 + 1;
            uVar15 = *puVar7;
            puVar14 = puVar14 + -0x34;
            puVar7 = puVar17;
          } while ((uVar15 & 0x80808080) == 0x80808080);
          uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
        }
        FUN_00a64f9c(puVar14 + (short)-(short)((uint)LZCOUNT(uVar15 << 0x18 |
                                                             (uVar15 >> 8 & 0xff) << 0x10 |
                                                             (uVar15 >> 0x10 & 0xff) << 8 |
                                                             uVar15 >> 0x18) >> 3) * 0xd + -0xd);
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
  iVar4 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar12 = uVar8 - 0x10, uVar8 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)piVar16 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar12 * uVar15 + iVar12 + -4;
  iVar12 = iVar13 + iVar9;
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
  if (*(char *)(iVar13 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar8 = 1 << uVar15;
  *(undefined1 *)((int)piVar16 + -3) = 0xff;
  *(undefined2 *)((int)piVar16 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar6 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar8 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar4,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar6 = *puVar17;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

