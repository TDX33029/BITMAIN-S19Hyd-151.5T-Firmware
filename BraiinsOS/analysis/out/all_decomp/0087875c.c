// FUN_0087875c @ 0087875c size=208 calls_out=2 calls_in=2
// strings: 

void FUN_0087875c(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x28) == '\x03') {
    if (*(char *)(param_1 + 0x8c) != '\x03') goto LAB_008787f0;
    if (*(char *)(param_1 + 0x88) == '\x03') {
      iVar9 = 0x89;
      iVar5 = 0x44;
      goto LAB_008787e0;
    }
    if ((*(char *)(param_1 + 0x88) != '\0') || (*(int *)(param_1 + 0x34) == 0)) goto LAB_008787f0;
    uVar4 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    if (*(char *)(param_1 + 0x28) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x80) == '\x03') {
      iVar9 = 0x81;
      iVar5 = 0x3c;
LAB_008787e0:
      FUN_00875460(param_1 + iVar5);
      *(undefined1 *)(param_1 + iVar9) = 0;
      goto LAB_008787f0;
    }
    if ((*(char *)(param_1 + 0x80) != '\0') || (*(int *)(param_1 + 0x2c) == 0)) goto LAB_008787f0;
    uVar4 = *(undefined4 *)(param_1 + 0x30);
  }
  thunk_FUN_016d3fb4(uVar4);
LAB_008787f0:
  if (*(int *)(param_1 + 0x18) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar9 + 8) + 0x10;
  iVar11 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar7 - iVar5) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar9 + 0x10);
    uVar8 = *(uint *)(iVar9 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar4 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar4;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

