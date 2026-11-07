// FUN_00880e78 @ 00880e78 size=224 calls_out=3 calls_in=1
// strings: 

void FUN_00880e78(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x1a);
  if (cVar1 == '\x03' || cVar1 == '\x04') {
    FUN_0080feb8(param_1 + 0x20);
    return;
  }
  if (cVar1 != '\x05') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\x05') {
    cVar1 = *(char *)(param_1 + 0x86);
    bVar16 = cVar1 == '\x03';
    if (bVar16) {
      cVar1 = *(char *)(param_1 + 0x80);
    }
    if (!bVar16 || cVar1 != '\x03') {
      return;
    }
    uVar11 = *(undefined4 *)(param_1 + 0x78);
    puVar13 = *(undefined4 **)(param_1 + 0x7c);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(uVar11);
    }
  }
  else {
    if (cVar1 == '\x04') {
      FUN_00a07b4c(param_1 + 0x38);
      return;
    }
    if (cVar1 != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x86);
    bVar16 = cVar1 != '\x03';
    if (!bVar16) {
      cVar1 = *(char *)(param_1 + 0x80);
    }
    if (bVar16 || cVar1 != '\x03') {
      return;
    }
    uVar11 = *(undefined4 *)(param_1 + 0x78);
    puVar13 = *(undefined4 **)(param_1 + 0x7c);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(uVar11);
    }
  }
  if (puVar13[1] != 0) {
    thunk_FUN_016d3fb4(uVar11);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 100);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
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
  if ((uint)(iVar6 - iVar4) < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

