// FUN_010939b4 @ 010939b4 size=1296 calls_out=4 calls_in=0
// strings: 

void FUN_010939b4(int param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  bVar18 = *(short *)(param_1 + 8) != 0;
  iVar5 = 0;
  if (bVar18) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  if (bVar18 && iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10));
  }
  bVar18 = *(short *)(param_1 + 0x2c) != 0;
  iVar5 = 0;
  if (bVar18) {
    iVar5 = *(int *)(param_1 + 0x30);
  }
  if (bVar18 && iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
  }
  uVar1 = *(ushort *)(param_1 + 0x50);
  sVar6 = 0x10;
  if (1 < uVar1) {
    sVar6 = uVar1 - 2;
  }
  switch(sVar6) {
  case 2:
    bVar18 = *(short *)(param_1 + 0x54) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    bVar18 = *(short *)(param_1 + 0x78) == 0;
    iVar5 = 0;
    if (!bVar18) {
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x80);
    break;
  case 3:
    if ((-0x7ffffffe < *(int *)(param_1 + 0xbc)) && (*(int *)(param_1 + 0xbc) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
    }
    FUN_0109323c(param_1 + 0x6c);
    if (*(int *)(param_1 + 0x60) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 100);
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    if (*(int *)(param_1 + 0x54) == 0) {
      return;
    }
    goto LAB_01092ee0;
  case 5:
    bVar18 = *(short *)(param_1 + 0x54) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    bVar18 = *(short *)(param_1 + 0x78) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (!bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x80);
    break;
  case 6:
    FUN_0108aea4(param_1 + 0x60);
    if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) == 0) {
      return;
    }
LAB_01092ee0:
    iVar13 = *(int *)(param_1 + 0x58);
    break;
  case 7:
    if (*(int *)(param_1 + 0x58) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x5c);
    break;
  case 8:
    bVar18 = *(short *)(param_1 + 0x60) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 100);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x68));
    }
    bVar18 = *(short *)(param_1 + 0x84) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x88);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    }
    iVar13 = *(int *)(param_1 + 0x58);
    iVar5 = iVar13;
    for (iVar8 = *(int *)(param_1 + 0x5c); iVar8 != 0; iVar8 = iVar8 + -1) {
      FUN_01054830(iVar5);
      iVar5 = iVar5 + 0x14;
    }
    goto LAB_01093208;
  case 9:
    bVar18 = *(short *)(param_1 + 0x54) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    bVar18 = *(short *)(param_1 + 0x78) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (!bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x80);
    break;
  case 10:
    if (*(int *)(param_1 + 0x9c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x98));
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa0));
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
    }
    bVar18 = *(short *)(param_1 + 0x54) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    bVar18 = *(short *)(param_1 + 0x78) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (!bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x80);
    break;
  case 0xc:
    bVar18 = *(short *)(param_1 + 0x54) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    bVar18 = *(short *)(param_1 + 0x78) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (!bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x80);
    break;
  case 0xe:
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar13 = *(int *)(param_1 + 0x58);
    if (iVar5 != 0) {
      piVar15 = (int *)(iVar13 + 8);
      do {
        bVar18 = (char)piVar15[-1] != '\0';
        iVar8 = 0;
        if (bVar18) {
          iVar8 = *piVar15;
        }
        if (bVar18 && iVar8 != 0) {
          thunk_FUN_016d3fb4(piVar15[1]);
        }
        piVar15 = piVar15 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    goto LAB_01093208;
  case 0xf:
    bVar18 = *(short *)(param_1 + 0x54) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    bVar18 = *(short *)(param_1 + 0x78) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (!bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x80);
    break;
  case 0x10:
    iVar5 = 0;
    if (uVar1 != 0) {
      iVar5 = *(int *)(param_1 + 0x54);
    }
    if (uVar1 != 0 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
    }
    bVar18 = *(short *)(param_1 + 0x74) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x78);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x7c));
    }
    bVar18 = *(short *)(param_1 + 0x94) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x98);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
    }
    bVar18 = *(short *)(param_1 + 0xb8) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0xbc);
    }
    if (!bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0xc0);
    break;
  case 0x11:
    bVar18 = *(short *)(param_1 + 0x54) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    bVar18 = *(short *)(param_1 + 0x78) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (!bVar18 || iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x80);
    break;
  case 0x13:
    bVar18 = *(short *)(param_1 + 0x60) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 100);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x68));
    }
    bVar18 = *(short *)(param_1 + 0x84) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar5 = *(int *)(param_1 + 0x88);
    }
    if (bVar18 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    }
    iVar13 = *(int *)(param_1 + 0x58);
    iVar5 = iVar13;
    for (iVar8 = *(int *)(param_1 + 0x5c); iVar8 != 0; iVar8 = iVar8 + -1) {
      FUN_01054830(iVar5);
      iVar5 = iVar5 + 0x14;
    }
LAB_01093208:
    if (*(int *)(param_1 + 0x54) == 0) {
switchD_01092d3c_default:
      return;
    }
    break;
  case 0x15:
    iVar5 = *(int *)(param_1 + 0x58);
    if (iVar5 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x54);
    iVar8 = 0;
    do {
      puVar4 = (undefined4 *)(iVar13 + iVar8 * 8);
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(*puVar4);
      }
      iVar8 = iVar8 + 1;
    } while (iVar5 != iVar8);
    break;
  default:
    goto switchD_01092d3c_default;
  }
  if (iVar13 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar8 - iVar13) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

