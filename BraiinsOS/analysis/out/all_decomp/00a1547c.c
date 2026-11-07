// FUN_00a1547c @ 00a1547c size=172 calls_out=1 calls_in=0
// strings: 

void FUN_00a1547c(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x94) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x68) == '\x03') {
    if (*(char *)(param_1 + 0x8c) != '\x03') goto LAB_00a154f0;
    cVar1 = *(char *)(param_1 + 0x88);
    iVar5 = 0x20;
  }
  else {
    if (*(char *)(param_1 + 0x68) != '\x04') goto LAB_00a154f0;
    cVar1 = *(char *)(param_1 + 0x80);
    iVar5 = 0x18;
  }
  if (cVar1 == '\x03') {
    piVar8 = (int *)(param_1 + 0x58 + iVar5);
    iVar5 = *piVar8;
    if (iVar5 != 0) {
      FUN_00aa190c(iVar5,piVar8[1],1);
    }
  }
LAB_00a154f0:
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((iVar5 == 0) || (uVar9 = iVar5 * 0x11 & 0xfffffffc, uVar9 + iVar5 == -0x19)) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x28) - uVar9;
  if (iVar5 + -0x14 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar9 = *(byte *)(iVar5 + -0x17) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar5 + -0x17) >> 5);
  iVar16 = *(int *)(iVar6 + 8) + 0x10;
  iVar14 = iVar10 * uVar9 + iVar10 + -4;
  iVar10 = iVar16 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar10 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar10 - (iVar5 + -0x14)) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar13 = 1 << uVar9;
  *(undefined1 *)(iVar5 + -0x17) = 0xff;
  *(undefined2 *)(iVar5 + -0x16) = 0;
  do {
    uVar15 = *(uint *)(iVar6 + 0x10);
    uVar11 = *(uint *)(iVar6 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar17 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar11 = *puVar17;
      if (uVar15 != uVar11) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar4);
    *puVar17 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar11) {
      return;
    }
  } while( true );
}

