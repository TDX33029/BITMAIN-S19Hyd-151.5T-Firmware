// FUN_00eab92c @ 00eab92c size=384 calls_out=3 calls_in=1
// strings: 

void FUN_00eab92c(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x104);
  if (cVar1 == '\x04') {
    puVar14 = *(undefined4 **)(param_1 + 0x194);
    uVar13 = *(undefined4 *)(param_1 + 400);
    pcVar5 = (code *)*puVar14;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar13);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    if (*(int *)(param_1 + 300) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x130));
    }
    if (*(int *)(param_1 + 0x164) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
    }
    if (*(int *)(param_1 + 0x170) != -0x80000000 && *(int *)(param_1 + 0x170) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x174));
    }
    puVar14 = (undefined4 *)(param_1 + 0x110);
    *(undefined1 *)(param_1 + 0x105) = 0;
    FUN_00f15518(*puVar14,*(undefined4 *)(param_1 + 0x114));
    if (*(int *)(param_1 + 0x10c) != 0) {
LAB_00eaba2c:
      thunk_FUN_016d3fb4(*puVar14);
    }
LAB_00eaba34:
    if (*(int *)(param_1 + 0xa8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
    }
    iVar9 = 0x5c;
    if (*(int *)(param_1 + 0xec) != -0x80000000 && *(int *)(param_1 + 0xec) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
      piVar8 = (int *)(param_1 + 0x5c);
      iVar9 = *piVar8;
      goto joined_r0x00eaba98;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x110) == '\x04') {
        if (*(char *)(param_1 + 0x44c) == '\x03') {
          FUN_00eac8fc(param_1 + 0x128);
        }
        if (*(int *)(param_1 + 0x114) != 0) {
          puVar14 = (undefined4 *)(param_1 + 0x118);
          goto LAB_00eaba2c;
        }
      }
      else if (*(char *)(param_1 + 0x110) == '\x03') {
        FUN_00eac8fc(param_1 + 0x118);
      }
      goto LAB_00eaba34;
    }
    iVar9 = 0x10;
    if (cVar1 != '\0') {
      return;
    }
  }
  piVar8 = (int *)(param_1 + iVar9);
  iVar9 = *piVar8;
joined_r0x00eaba98:
  if (iVar9 == 0) {
    return;
  }
  iVar9 = piVar8[1];
  if (iVar9 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar6 * uVar16 + iVar6 + -4;
  iVar6 = iVar15 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - iVar9) < uVar10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
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
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

