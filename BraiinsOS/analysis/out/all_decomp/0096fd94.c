// FUN_0096fd94 @ 0096fd94 size=160 calls_out=1 calls_in=0
// strings: 

void FUN_0096fd94(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar16 = param_1[1];
  iVar15 = param_1[2];
  iVar11 = 0;
  while (iVar11 != iVar15) {
    piVar6 = (int *)(iVar16 + iVar11 * 8);
    iVar4 = *piVar6;
    iVar11 = iVar11 + 1;
    if (iVar4 != -1) {
      piVar7 = (int *)(iVar4 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        iVar4 = piVar6[1];
        uVar8 = *(uint *)(iVar4 + 8);
        if (uVar8 < 5) {
          uVar8 = 4;
        }
        if ((*(int *)(iVar4 + 4) + uVar8 + 7 & -uVar8) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
  }
  if (*param_1 == 0) {
    return;
  }
  iVar11 = param_1[1];
  if (iVar11 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar8 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar16 = uVar12 - 0x10, uVar12 == 0)) {
    iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar14 = *(int *)(iVar15 + 8) + 0x10;
  iVar4 = iVar16 * uVar8 + iVar16 + -4;
  iVar16 = iVar14 + iVar4;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar16 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar16 - iVar11) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar15 + 0x14);
  uVar12 = 1 << uVar8;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar15 + 0x10);
    uVar9 = *(uint *)(iVar15 + 0xc) | uVar13;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

