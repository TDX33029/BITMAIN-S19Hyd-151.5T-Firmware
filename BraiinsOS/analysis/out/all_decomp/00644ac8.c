// FUN_00644ac8 @ 00644ac8 size=1432 calls_out=3 calls_in=1
// strings: 

void FUN_00644ac8(ushort *param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar1 = *param_1;
  if (uVar1 == 0x1b) {
    return;
  }
  sVar6 = 0x10;
  if (1 < uVar1) {
    sVar6 = uVar1 - 2;
  }
  switch(sVar6) {
  case 2:
    iVar10 = 0;
    if (param_1[2] != 0) {
      iVar10 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar10 = 0;
    if (param_1[0x14] != 0) {
      iVar10 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x18);
    break;
  case 3:
    if ((-0x7ffffffe < *(int *)(param_1 + 0x36)) && (*(int *)(param_1 + 0x36) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
    }
    if (*(int *)(param_1 + 2) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
    }
    iVar10 = *(int *)(param_1 + 0xe);
    uVar4 = iVar10 + 0x80000001U & iVar10 >> 0x1f;
    if (uVar4 == 0) {
      uVar1 = param_1[0x14];
      if (uVar1 != 2) {
        iVar14 = 0;
        if (uVar1 != 0) {
          iVar14 = *(int *)(param_1 + 0x16);
        }
        if (uVar1 != 0 && iVar14 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
        }
        iVar14 = 0;
        if (param_1[0x26] != 0) {
          iVar14 = *(int *)(param_1 + 0x28);
        }
        if (param_1[0x26] != 0 && iVar14 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a));
        }
      }
      iVar8 = *(int *)(param_1 + 0x10);
      puVar5 = (undefined4 *)(iVar8 + 0x10);
      for (iVar14 = *(int *)(param_1 + 0x12); iVar14 != 0; iVar14 = iVar14 + -1) {
        if (puVar5[-4] != 0) {
          thunk_FUN_016d3fb4(puVar5[-3]);
        }
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 6;
      }
      if (iVar10 != 0) goto LAB_00645090;
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar8 = *(int *)(param_1 + 0x1a);
        goto LAB_00645090;
      }
    }
    else if (*(int *)(param_1 + 0x10) != 0) {
      iVar8 = *(int *)(param_1 + 0x12);
LAB_00645090:
      thunk_FUN_016d3fb4(iVar8);
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 10);
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
    goto LAB_00644ca8;
  case 5:
    iVar10 = 0;
    if (param_1[2] != 0) {
      iVar10 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar10 = 0;
    if (param_1[0x14] != 0) {
      iVar10 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x18);
    break;
  case 6:
    FUN_0108aea4(param_1 + 8);
    if ((*(uint *)(param_1 + 2) & 0x7fffffff) == 0) {
      return;
    }
LAB_00644ca8:
    iVar14 = *(int *)(param_1 + 4);
    break;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 6);
    break;
  case 8:
    iVar10 = 0;
    if (param_1[8] != 0) {
      iVar10 = *(int *)(param_1 + 10);
    }
    if (param_1[8] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    iVar10 = 0;
    if (param_1[0x1a] != 0) {
      iVar10 = *(int *)(param_1 + 0x1c);
    }
    if (param_1[0x1a] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e));
    }
    iVar14 = *(int *)(param_1 + 4);
    iVar10 = iVar14;
    for (iVar8 = *(int *)(param_1 + 6); iVar8 != 0; iVar8 = iVar8 + -1) {
      FUN_01054830(iVar10);
      iVar10 = iVar10 + 0x14;
    }
    goto LAB_00644fd8;
  case 9:
    iVar10 = 0;
    if (param_1[2] != 0) {
      iVar10 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar10 = 0;
    if (param_1[0x14] != 0) {
      iVar10 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x18);
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
    iVar10 = 0;
    if (param_1[2] != 0) {
      iVar10 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar10 = 0;
    if (param_1[0x14] != 0) {
      iVar10 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x18);
    break;
  case 0xc:
    iVar10 = 0;
    if (param_1[2] != 0) {
      iVar10 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar10 = 0;
    if (param_1[0x14] != 0) {
      iVar10 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x18);
    break;
  case 0xe:
    iVar10 = *(int *)(param_1 + 6);
    iVar14 = *(int *)(param_1 + 4);
    if (iVar10 != 0) {
      piVar16 = (int *)(iVar14 + 8);
      do {
        bVar18 = (char)piVar16[-1] != '\0';
        iVar8 = 0;
        if (bVar18) {
          iVar8 = *piVar16;
        }
        if (bVar18 && iVar8 != 0) {
          thunk_FUN_016d3fb4(piVar16[1]);
        }
        piVar16 = piVar16 + 6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    goto LAB_00644fd8;
  case 0xf:
    iVar10 = 0;
    if (param_1[2] != 0) {
      iVar10 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar10 = 0;
    if (param_1[0x14] != 0) {
      iVar10 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x18);
    break;
  case 0x10:
    iVar10 = 0;
    if (uVar1 != 0) {
      iVar10 = *(int *)(param_1 + 2);
    }
    if (uVar1 != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
    }
    iVar10 = 0;
    if (param_1[0x12] != 0) {
      iVar10 = *(int *)(param_1 + 0x14);
    }
    if (param_1[0x12] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16));
    }
    iVar10 = 0;
    if (param_1[0x22] != 0) {
      iVar10 = *(int *)(param_1 + 0x24);
    }
    if (param_1[0x22] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x26));
    }
    iVar10 = 0;
    if (param_1[0x34] != 0) {
      iVar10 = *(int *)(param_1 + 0x36);
    }
    if (param_1[0x34] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x38);
    break;
  case 0x11:
    iVar10 = 0;
    if (param_1[2] != 0) {
      iVar10 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar10 = 0;
    if (param_1[0x14] != 0) {
      iVar10 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 0x18);
    break;
  case 0x13:
    iVar10 = 0;
    if (param_1[8] != 0) {
      iVar10 = *(int *)(param_1 + 10);
    }
    if (param_1[8] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    iVar10 = 0;
    if (param_1[0x1a] != 0) {
      iVar10 = *(int *)(param_1 + 0x1c);
    }
    if (param_1[0x1a] != 0 && iVar10 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e));
    }
    iVar14 = *(int *)(param_1 + 4);
    iVar10 = iVar14;
    for (iVar8 = *(int *)(param_1 + 6); iVar8 != 0; iVar8 = iVar8 + -1) {
      FUN_01054830(iVar10);
      iVar10 = iVar10 + 0x14;
    }
LAB_00644fd8:
    if (*(int *)(param_1 + 2) == 0) {
switchD_00644b04_default:
      return;
    }
    break;
  case 0x15:
    iVar10 = *(int *)(param_1 + 4);
    if (iVar10 == 0) {
      return;
    }
    iVar14 = *(int *)(param_1 + 2);
    iVar8 = 0;
    do {
      puVar5 = (undefined4 *)(iVar14 + iVar8 * 8);
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(*puVar5);
      }
      iVar8 = iVar8 + 1;
    } while (iVar10 != iVar8);
    break;
  default:
    goto switchD_00644b04_default;
  }
  if (iVar14 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar15 = *(int *)(iVar10 + 8) + 0x10;
  iVar12 = iVar8 * uVar4 + iVar8 + -4;
  iVar8 = iVar15 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar8 - iVar14) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar11 = 1 << uVar4;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar10 + 0x10);
    uVar7 = *(uint *)(iVar10 + 0xc) | uVar13;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar7 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar4);
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
      *(uint *)(iVar10 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar13 != uVar7) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar7) {
      return;
    }
  } while( true );
}

