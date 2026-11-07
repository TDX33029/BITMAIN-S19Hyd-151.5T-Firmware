// FUN_0071ba7c @ 0071ba7c size=520 calls_out=5 calls_in=2
// strings: 

void FUN_0071ba7c(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x2cc);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      iVar3 = *(int *)(param_1 + 0x2d8);
      if (iVar3 != 0) {
        puVar12 = *(undefined4 **)(param_1 + 0x2dc);
        pcVar4 = (code *)*puVar12;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(iVar3);
        }
        if (puVar12[1] != 0) {
          thunk_FUN_016d3fb4(iVar3);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      puVar12 = *(undefined4 **)(param_1 + 0x354);
      uVar10 = *(undefined4 *)(param_1 + 0x350);
      pcVar4 = (code *)*puVar12;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar10);
      }
      if (puVar12[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
      if (*(int *)(param_1 + 0x358) != 2) {
        *(undefined1 *)(param_1 + 0x2d0) = 0;
      }
      *(undefined1 *)(param_1 + 0x2d0) = 0;
      if ((*(char *)(param_1 + 0x2d1) != '\0') && (*(int *)(param_1 + 600) == -0x80000000)) {
        FUN_00715ef0();
      }
      *(undefined1 *)(param_1 + 0x2d1) = 0;
    }
    *(undefined1 *)(param_1 + 0x2d1) = 0;
    if (*(char *)(param_1 + 0x2d2) != '\0') {
      iVar13 = *(int *)(param_1 + 0x254) + 1;
      iVar3 = *(int *)(param_1 + 0x250);
      while (iVar13 = iVar13 + -1, iVar13 != 0) {
        FUN_007b5fa0(iVar3);
        iVar3 = iVar3 + 0xec;
      }
      if (*(int *)(param_1 + 0x24c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x250));
      }
    }
    *(undefined1 *)(param_1 + 0x2d2) = 0;
    FUN_0071bed0(param_1 + 200);
    FUN_00644904(param_1 + 0xe8);
    bVar16 = *(short *)(param_1 + 500) != 0;
    iVar3 = 0;
    if (bVar16) {
      iVar3 = *(int *)(param_1 + 0x1f8);
    }
    if (bVar16 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1fc));
    }
    bVar16 = *(short *)(param_1 + 0x218) != 0;
    iVar3 = 0;
    if (bVar16) {
      iVar3 = *(int *)(param_1 + 0x21c);
    }
    if (bVar16 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x220));
      *(undefined1 *)(param_1 + 0x2d3) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0x2d3) = 0;
    return;
  }
  bVar16 = *(short *)(param_1 + 0x19c) != 0;
  iVar3 = 0;
  if (bVar16) {
    iVar3 = *(int *)(param_1 + 0x1a0);
  }
  if (bVar16 && iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1a4));
  }
  bVar16 = *(short *)(param_1 + 0x1c0) != 0;
  iVar3 = 0;
  if (bVar16) {
    iVar3 = *(int *)(param_1 + 0x1c4);
  }
  if (bVar16 && iVar3 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c8));
  }
  FUN_0071bed0(param_1);
  FUN_00644904(param_1 + 0x20);
  iVar13 = *(int *)(param_1 + 0x198) + 1;
  iVar3 = *(int *)(param_1 + 0x194);
  while (iVar13 = iVar13 + -1, iVar13 != 0) {
    FUN_007b5fa0(iVar3);
    iVar3 = iVar3 + 0xec;
  }
  if (*(int *)(param_1 + 400) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x194);
  if (iVar3 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar3 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar7 - 0x10, uVar7 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar3 + -3) >> 5);
  iVar11 = *(int *)(iVar13 + 8) + 0x10;
  iVar8 = iVar5 * uVar14 + iVar5 + -4;
  iVar5 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar5 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar5 - iVar3) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)(iVar3 + -3) = 0xff;
  *(undefined2 *)(iVar3 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar13 + 0x10);
    uVar6 = *(uint *)(iVar13 + 0xc) | uVar9;
    if ((uVar7 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar9 == 0) || (uVar6 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar15 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar9 != uVar6) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar6) {
      return;
    }
  } while( true );
}

