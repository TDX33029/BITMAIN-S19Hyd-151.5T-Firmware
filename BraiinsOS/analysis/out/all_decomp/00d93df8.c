// FUN_00d93df8 @ 00d93df8 size=212 calls_out=6 calls_in=1
// strings: 

void FUN_00d93df8(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1[10] == -0x80000000) {
    iVar9 = param_1[1];
    iVar12 = *param_1;
    iVar14 = iVar9 + 1;
    iVar6 = iVar12;
    while (iVar14 = iVar14 + -1, iVar14 != 0) {
      FUN_00d96e68(iVar6);
      iVar6 = iVar6 + 0x70;
    }
  }
  else {
    piVar15 = param_1 + 4;
    FUN_00eaa938(piVar15);
    piVar4 = (int *)*piVar15;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa8150(*piVar15);
    }
    iVar12 = param_1[8];
    FUN_00f25450(iVar12,param_1[9]);
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
    iVar12 = param_1[0xb];
    FUN_00f24c48(iVar12,param_1[0xc]);
    iVar9 = param_1[10];
  }
  if (iVar9 == 0) {
    return;
  }
  if (iVar12 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar13 = *(int *)(iVar9 + 8) + 0x10;
  iVar14 = iVar6 * uVar16 + iVar6 + -4;
  iVar6 = iVar13 + iVar14;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar6 - iVar12) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar9 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar9 + 0x10);
    uVar7 = *(uint *)(iVar9 + 0xc) | uVar11;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar16);
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
      *(uint *)(iVar9 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar17 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

