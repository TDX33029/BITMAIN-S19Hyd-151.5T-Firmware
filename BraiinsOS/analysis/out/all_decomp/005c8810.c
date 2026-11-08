// FUN_005c8810 @ 005c8810 size=592 calls_out=2 calls_in=9
// strings: 

void FUN_005c8810(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x70) == -0x80000000 || *(int *)(param_1 + 0x70) == 0) {
    if (*(int *)(param_1 + 0x7c) == -0x80000000 || *(int *)(param_1 + 0x7c) == 0) goto LAB_005c8838;
LAB_005c8958:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    if (*(int *)(param_1 + 0x88) != -0x80000000 && *(int *)(param_1 + 0x88) != 0) goto LAB_005c8970;
LAB_005c8848:
    if (*(int *)(param_1 + 0x94) == -0x80000000 || *(int *)(param_1 + 0x94) == 0) goto LAB_005c8858;
LAB_005c8988:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x98));
    if (*(int *)(param_1 + 0xa0) != -0x80000000 && *(int *)(param_1 + 0xa0) != 0) goto LAB_005c89a0;
LAB_005c8868:
    if (*(int *)(param_1 + 0xac) != -0x80000000 && *(int *)(param_1 + 0xac) != 0) {
LAB_005c89b8:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb0));
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x7c) != -0x80000000 && *(int *)(param_1 + 0x7c) != 0) goto LAB_005c8958;
LAB_005c8838:
    if (*(int *)(param_1 + 0x88) == -0x80000000 || *(int *)(param_1 + 0x88) == 0) goto LAB_005c8848;
LAB_005c8970:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    if (*(int *)(param_1 + 0x94) != -0x80000000 && *(int *)(param_1 + 0x94) != 0) goto LAB_005c8988;
LAB_005c8858:
    if (*(int *)(param_1 + 0xa0) == -0x80000000 || *(int *)(param_1 + 0xa0) == 0) goto LAB_005c8868;
LAB_005c89a0:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
    if (*(int *)(param_1 + 0xac) != -0x80000000 && *(int *)(param_1 + 0xac) != 0) goto LAB_005c89b8;
  }
  iVar11 = *(int *)(param_1 + 0x68);
  iVar7 = iVar11;
  for (iVar13 = *(int *)(param_1 + 0x6c); iVar13 != 0; iVar13 = iVar13 + -1) {
    FUN_00f24d10(iVar7);
    iVar7 = iVar7 + 0x74;
  }
  if (*(int *)(param_1 + 100) != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  if (*(int *)(param_1 + 0xb8) == -0x80000000 || *(int *)(param_1 + 0xb8) == 0) {
    if (*(int *)(param_1 + 0xc4) == -0x80000000 || *(int *)(param_1 + 0xc4) == 0) goto LAB_005c88d4;
LAB_005c89dc:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 200));
    if (*(int *)(param_1 + 0xd0) != -0x80000000 && *(int *)(param_1 + 0xd0) != 0) goto LAB_005c89f4;
LAB_005c88e4:
    if (*(int *)(param_1 + 0xdc) == -0x80000000 || *(int *)(param_1 + 0xdc) == 0) goto LAB_005c88f4;
LAB_005c8a0c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe0));
    if (*(int *)(param_1 + 0xe8) != -0x80000000 && *(int *)(param_1 + 0xe8) != 0) goto LAB_005c8a24;
LAB_005c8904:
    if (*(int *)(param_1 + 0xf4) == -0x80000000 || *(int *)(param_1 + 0xf4) == 0) goto LAB_005c8914;
LAB_005c8a3c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf8));
    if (*(int *)(param_1 + 0x100) == -0x80000000 || *(int *)(param_1 + 0x100) == 0)
    goto LAB_005c8924;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
    if (*(int *)(param_1 + 0xc4) != -0x80000000 && *(int *)(param_1 + 0xc4) != 0) goto LAB_005c89dc;
LAB_005c88d4:
    if (*(int *)(param_1 + 0xd0) == -0x80000000 || *(int *)(param_1 + 0xd0) == 0) goto LAB_005c88e4;
LAB_005c89f4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd4));
    if (*(int *)(param_1 + 0xdc) != -0x80000000 && *(int *)(param_1 + 0xdc) != 0) goto LAB_005c8a0c;
LAB_005c88f4:
    if (*(int *)(param_1 + 0xe8) == -0x80000000 || *(int *)(param_1 + 0xe8) == 0) goto LAB_005c8904;
LAB_005c8a24:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xec));
    if (*(int *)(param_1 + 0xf4) != -0x80000000 && *(int *)(param_1 + 0xf4) != 0) goto LAB_005c8a3c;
LAB_005c8914:
    if (*(int *)(param_1 + 0x100) == -0x80000000 || *(int *)(param_1 + 0x100) == 0)
    goto LAB_005c8924;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x104));
LAB_005c8924:
  if (*(int *)(param_1 + 0x10c) == -0x80000000 || *(int *)(param_1 + 0x10c) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x110);
  if (iVar7 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar11 = uVar8 - 0x10, uVar8 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar12 = *(int *)(iVar13 + 8) + 0x10;
  iVar9 = iVar11 * uVar14 + iVar11 + -4;
  iVar11 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar11 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar11 - iVar7) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar8 = 1 << uVar14;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar13 + 0x10);
    uVar5 = *(uint *)(iVar13 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

