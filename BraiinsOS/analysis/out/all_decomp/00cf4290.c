// FUN_00cf4290 @ 00cf4290 size=524 calls_out=2 calls_in=1
// strings: 

void FUN_00cf4290(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x124);
  if (cVar1 == '\x03') {
    if ((*(char *)(param_1 + 0x134) == '\x03') && (*(int *)(param_1 + 300) != 0)) {
      FUN_00c81a4c(*(int *)(param_1 + 300),*(undefined4 *)(param_1 + 0x130),1);
    }
    goto LAB_00cf4458;
  }
  if (cVar1 == '\x04') {
    puVar15 = *(undefined4 **)(param_1 + 300);
    uVar13 = *(undefined4 *)(param_1 + 0x128);
    pcVar6 = (code *)*puVar15;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar13);
    }
    if (puVar15[1] == 0) goto LAB_00cf43e4;
LAB_00cf43dc:
    thunk_FUN_016d3fb4(uVar13);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x154) == '\x03') {
      puVar15 = *(undefined4 **)(param_1 + 0x150);
      uVar13 = *(undefined4 *)(param_1 + 0x14c);
      pcVar6 = (code *)*puVar15;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar13);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
    }
    if (*(int *)(param_1 + 0x134) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 300));
    }
    if (*(int *)(param_1 + 0x98) != 2 || *(int *)(param_1 + 0x9c) != 0) {
      if ((*(uint *)(param_1 + 0xb0) & 0x7fffffff) == 0) {
        if ((*(uint *)(param_1 + 0xbc) & 0x7fffffff) == 0) goto LAB_00cf4344;
LAB_00cf43c0:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
        uVar4 = *(uint *)(param_1 + 200);
      }
      else {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
        if ((*(uint *)(param_1 + 0xbc) & 0x7fffffff) != 0) goto LAB_00cf43c0;
LAB_00cf4344:
        uVar4 = *(uint *)(param_1 + 200);
      }
      if ((uVar4 & 0x7fffffff) != 0) {
        uVar13 = *(undefined4 *)(param_1 + 0xcc);
        goto LAB_00cf43dc;
      }
    }
  }
LAB_00cf43e4:
  if (*(int *)(param_1 + 0x118) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
  }
  puVar15 = (undefined4 *)(*(int *)(param_1 + 0x110) + 4);
  for (iVar9 = *(int *)(param_1 + 0x114); iVar9 != 0; iVar9 = iVar9 + -1) {
    if (puVar15[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar15);
    }
    puVar15 = puVar15 + 3;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x110));
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x7c));
  }
LAB_00cf4458:
  if (*(int *)(param_1 + 0xfc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x100));
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf4));
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0xe8);
  if (iVar9 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar7 - iVar9) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar4;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar15 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar15;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar15 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

