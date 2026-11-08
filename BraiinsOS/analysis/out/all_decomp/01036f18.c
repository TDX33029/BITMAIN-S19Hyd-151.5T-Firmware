// FUN_01036f18 @ 01036f18 size=1608 calls_out=4 calls_in=1
// strings: 

void FUN_01036f18(ushort *param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
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
  
  uVar1 = *param_1;
  if (uVar1 == 0x1b) {
    iVar13 = *(int *)(param_1 + 2);
    FUN_01036ca0(iVar13);
    goto LAB_014b47f4;
  }
  sVar6 = 0x10;
  if (1 < uVar1) {
    sVar6 = uVar1 - 2;
  }
  switch(sVar6) {
  case 2:
    iVar13 = 0;
    if (param_1[2] != 0) {
      iVar13 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar13 = 0;
    if (param_1[0x14] != 0) {
      iVar13 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 3:
    if ((-0x7ffffffe < *(int *)(param_1 + 0x36)) && (*(int *)(param_1 + 0x36) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
    }
    if (*(int *)(param_1 + 2) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
    }
    iVar13 = *(int *)(param_1 + 0xe);
    uVar16 = iVar13 + 0x80000001U & iVar13 >> 0x1f;
    if (uVar16 == 0) {
      uVar1 = param_1[0x14];
      if (uVar1 != 2) {
        iVar4 = 0;
        if (uVar1 != 0) {
          iVar4 = *(int *)(param_1 + 0x16);
        }
        if (uVar1 != 0 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
        }
        iVar4 = 0;
        if (param_1[0x26] != 0) {
          iVar4 = *(int *)(param_1 + 0x28);
        }
        if (param_1[0x26] != 0 && iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a));
        }
      }
      iVar7 = *(int *)(param_1 + 0x10);
      puVar5 = (undefined4 *)(iVar7 + 0x10);
      for (iVar4 = *(int *)(param_1 + 0x12); iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar5[-4] != 0) {
          thunk_FUN_016d3fb4(puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 6;
      }
      if (iVar13 != 0) goto LAB_0103758c;
    }
    else if (uVar16 == 1) {
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar7 = *(int *)(param_1 + 0x1a);
        goto LAB_0103758c;
      }
    }
    else if (*(int *)(param_1 + 0x10) != 0) {
      iVar7 = *(int *)(param_1 + 0x12);
LAB_0103758c:
      thunk_FUN_016d3fb4(iVar7);
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 10);
    break;
  case 4:
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 4);
    break;
  case 5:
    iVar13 = 0;
    if (param_1[2] != 0) {
      iVar13 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar13 = 0;
    if (param_1[0x14] != 0) {
      iVar13 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 6:
    FUN_0108aea4(param_1 + 8);
    if ((*(uint *)(param_1 + 2) & 0x7fffffff) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 4);
    break;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 6);
    break;
  case 8:
    iVar13 = 0;
    if (param_1[8] != 0) {
      iVar13 = *(int *)(param_1 + 10);
    }
    if (param_1[8] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    iVar13 = 0;
    if (param_1[0x1a] != 0) {
      iVar13 = *(int *)(param_1 + 0x1c);
    }
    if (param_1[0x1a] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e));
    }
    iVar13 = *(int *)(param_1 + 4);
    iVar4 = iVar13;
    for (iVar7 = *(int *)(param_1 + 6); iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_01054830(iVar4);
      iVar4 = iVar4 + 0x14;
    }
    goto LAB_010372cc;
  case 9:
    iVar13 = 0;
    if (param_1[2] != 0) {
      iVar13 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar13 = 0;
    if (param_1[0x14] != 0) {
      iVar13 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 10:
    if (*(int *)(param_1 + 0x26) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x2a) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x2e) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
    }
    iVar13 = 0;
    if (param_1[2] != 0) {
      iVar13 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar13 = 0;
    if (param_1[0x14] != 0) {
      iVar13 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0xb:
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 4);
    break;
  case 0xc:
    iVar13 = 0;
    if (param_1[2] != 0) {
      iVar13 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar13 = 0;
    if (param_1[0x14] != 0) {
      iVar13 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0xd:
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 4);
    break;
  case 0xe:
    iVar4 = *(int *)(param_1 + 6);
    iVar13 = *(int *)(param_1 + 4);
    if (iVar4 != 0) {
      piVar15 = (int *)(iVar13 + 8);
      do {
        bVar18 = (char)piVar15[-1] != '\0';
        iVar7 = 0;
        if (bVar18) {
          iVar7 = *piVar15;
        }
        if (bVar18 && iVar7 != 0) {
          thunk_FUN_016d3fb4(piVar15[1]);
        }
        piVar15 = piVar15 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    goto LAB_010372cc;
  case 0xf:
    iVar13 = 0;
    if (param_1[2] != 0) {
      iVar13 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar13 = 0;
    if (param_1[0x14] != 0) {
      iVar13 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0x10:
    iVar13 = 0;
    if (uVar1 != 0) {
      iVar13 = *(int *)(param_1 + 2);
    }
    if (uVar1 != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
    }
    iVar13 = 0;
    if (param_1[0x12] != 0) {
      iVar13 = *(int *)(param_1 + 0x14);
    }
    if (param_1[0x12] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16));
    }
    iVar13 = 0;
    if (param_1[0x22] != 0) {
      iVar13 = *(int *)(param_1 + 0x24);
    }
    if (param_1[0x22] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x26));
    }
    iVar13 = 0;
    if (param_1[0x34] != 0) {
      iVar13 = *(int *)(param_1 + 0x36);
    }
    if (param_1[0x34] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x38);
    break;
  case 0x11:
    iVar13 = 0;
    if (param_1[2] != 0) {
      iVar13 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar13 = 0;
    if (param_1[0x14] != 0) {
      iVar13 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar13 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0x12:
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 4);
    break;
  case 0x13:
    iVar13 = 0;
    if (param_1[8] != 0) {
      iVar13 = *(int *)(param_1 + 10);
    }
    if (param_1[8] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    iVar13 = 0;
    if (param_1[0x1a] != 0) {
      iVar13 = *(int *)(param_1 + 0x1c);
    }
    if (param_1[0x1a] != 0 && iVar13 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e));
    }
    iVar13 = *(int *)(param_1 + 4);
    iVar4 = iVar13;
    for (iVar7 = *(int *)(param_1 + 6); iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_01054830(iVar4);
      iVar4 = iVar4 + 0x14;
    }
LAB_010372cc:
    if (*(int *)(param_1 + 2) == 0) {
switchD_01036f68_default:
      return;
    }
    break;
  case 0x14:
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 4);
    break;
  case 0x15:
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 2);
    iVar7 = 0;
    do {
      puVar5 = (undefined4 *)(iVar13 + iVar7 * 8);
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar4 != iVar7);
    break;
  case 0x16:
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 4);
    break;
  default:
    goto switchD_01036f68_default;
  }
LAB_014b47f4:
  if (iVar13 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar7 * uVar16 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - iVar13) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
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
      uVar8 = *puVar17;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

