// FUN_00f1f624 @ 00f1f624 size=136 calls_out=1 calls_in=0
// strings: 

void FUN_00f1f624(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar13 = param_1[1];
  iVar15 = param_1[2];
  if (iVar15 != 0) {
    piVar9 = (int *)(iVar13 + 0x34);
    do {
      if (((1 < piVar9[-0xb] - 3U) && (iVar4 = *piVar9, iVar4 != 0)) &&
         (uVar6 = iVar4 * 0x11 & 0xfffffffc, uVar6 + iVar4 != -0x19)) {
        thunk_FUN_016d3fb4((piVar9[-1] - uVar6) + -0x14);
      }
      piVar9 = piVar9 + 0x1c;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  if (iVar13 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar4 = uVar10 - 0x10, uVar10 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar14 = *(int *)(iVar15 + 8) + 0x10;
  iVar11 = iVar4 * uVar6 + iVar4 + -4;
  iVar4 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar4 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar4 - iVar13) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar4 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar15 + 0x14);
  uVar10 = 1 << uVar6;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar15 + 0x10);
    uVar7 = *(uint *)(iVar15 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

