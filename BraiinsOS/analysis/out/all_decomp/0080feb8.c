// FUN_0080feb8 @ 0080feb8 size=284 calls_out=2 calls_in=14
// strings: 

void FUN_0080feb8(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x19);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x31) != '\x03') goto LAB_0080ffb8;
    uVar13 = *(undefined4 *)(param_1 + 0x1c);
    puVar14 = *(undefined4 **)(param_1 + 0x20);
    pcVar6 = (code *)*puVar14;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar13);
    }
    if (puVar14[1] == 0) goto LAB_0080ffb8;
  }
  else {
    if (cVar1 == '\x04') {
      FUN_00a07b4c(param_1 + 0x20);
      goto LAB_0080ffb8;
    }
    if (cVar1 != '\x05') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x24);
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x61);
      iVar4 = 0xc;
joined_r0x0080ff5c:
      if (cVar1 != '\x03') goto LAB_0080ffb8;
    }
    else {
      iVar4 = 0x10;
      if (cVar1 == '\x04') {
        cVar1 = *(char *)(param_1 + 0x60);
        goto joined_r0x0080ff5c;
      }
      if (cVar1 != '\x05') goto LAB_0080ffb8;
    }
    iVar4 = param_1 + 0x1c + iVar4;
    if (*(char *)(iVar4 + 0x30) != '\x03') goto LAB_0080ffb8;
    uVar13 = *(undefined4 *)(iVar4 + 0x28);
    puVar14 = *(undefined4 **)(iVar4 + 0x2c);
    pcVar6 = (code *)*puVar14;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar13);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    if (*(int *)(iVar4 + 0x10) == 0) goto LAB_0080ffb8;
    uVar13 = *(undefined4 *)(iVar4 + 0x14);
  }
  thunk_FUN_016d3fb4(uVar13);
LAB_0080ffb8:
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar10 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar9 = *(uint *)(iVar7 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar11;
    if ((uVar9 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

