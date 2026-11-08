// FUN_00e7a910 @ 00e7a910 size=464 calls_out=1 calls_in=4
// strings: 

void FUN_00e7a910(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x198) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x19c));
  }
  if (*(int *)(param_1 + 0x1a4) == -0x80000000 || *(int *)(param_1 + 0x1a4) == 0) {
    if (*(int *)(param_1 + 0x1b0) != -0x80000000 && *(int *)(param_1 + 0x1b0) != 0)
    goto LAB_00e7aa08;
LAB_00e7a94c:
    if (*(int *)(param_1 + 0x1bc) != -0x80000000 && *(int *)(param_1 + 0x1bc) != 0)
    goto LAB_00e7aa20;
LAB_00e7a95c:
    if (*(int *)(param_1 + 0x1c8) != -0x80000000 && *(int *)(param_1 + 0x1c8) != 0) {
LAB_00e7aa38:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1cc));
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1a8));
    if (*(int *)(param_1 + 0x1b0) == -0x80000000 || *(int *)(param_1 + 0x1b0) == 0)
    goto LAB_00e7a94c;
LAB_00e7aa08:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1b4));
    if (*(int *)(param_1 + 0x1bc) == -0x80000000 || *(int *)(param_1 + 0x1bc) == 0)
    goto LAB_00e7a95c;
LAB_00e7aa20:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c0));
    if (*(int *)(param_1 + 0x1c8) != -0x80000000 && *(int *)(param_1 + 0x1c8) != 0)
    goto LAB_00e7aa38;
  }
  if (*(int *)(param_1 + 0x20) == 2 && *(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x80) == -0x80000000 || *(int *)(param_1 + 0x80) == 0) {
    if (*(int *)(param_1 + 0xa8) != -0x80000000 && *(int *)(param_1 + 0xa8) != 0) goto LAB_00e7aa5c;
LAB_00e7a99c:
    if (*(int *)(param_1 + 0xd0) != -0x80000000 && *(int *)(param_1 + 0xd0) != 0) goto LAB_00e7aa74;
LAB_00e7a9ac:
    if (*(int *)(param_1 + 0xf8) != -0x80000000 && *(int *)(param_1 + 0xf8) != 0) goto LAB_00e7aa8c;
LAB_00e7a9bc:
    if (*(int *)(param_1 + 0x130) != -0x80000000 && *(int *)(param_1 + 0x130) != 0)
    goto LAB_00e7aaa4;
LAB_00e7a9cc:
    if (*(int *)(param_1 + 0x158) != -0x80000000 && *(int *)(param_1 + 0x158) != 0) {
LAB_00e7aabc:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15c));
      if (*(int *)(param_1 + 0x180) == -0x80000000 || *(int *)(param_1 + 0x180) == 0) {
        return;
      }
      goto LAB_00e7aad4;
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    if (*(int *)(param_1 + 0xa8) == -0x80000000 || *(int *)(param_1 + 0xa8) == 0) goto LAB_00e7a99c;
LAB_00e7aa5c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
    if (*(int *)(param_1 + 0xd0) == -0x80000000 || *(int *)(param_1 + 0xd0) == 0) goto LAB_00e7a9ac;
LAB_00e7aa74:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd4));
    if (*(int *)(param_1 + 0xf8) == -0x80000000 || *(int *)(param_1 + 0xf8) == 0) goto LAB_00e7a9bc;
LAB_00e7aa8c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xfc));
    if (*(int *)(param_1 + 0x130) == -0x80000000 || *(int *)(param_1 + 0x130) == 0)
    goto LAB_00e7a9cc;
LAB_00e7aaa4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
    if (*(int *)(param_1 + 0x158) != -0x80000000 && *(int *)(param_1 + 0x158) != 0)
    goto LAB_00e7aabc;
  }
  if (*(int *)(param_1 + 0x180) == -0x80000000 || *(int *)(param_1 + 0x180) == 0) {
    return;
  }
LAB_00e7aad4:
  iVar4 = *(int *)(param_1 + 0x184);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
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
  if ((uint)(iVar7 - iVar4) < uVar10) {
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
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
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

