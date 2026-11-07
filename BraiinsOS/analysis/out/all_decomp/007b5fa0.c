// FUN_007b5fa0 @ 007b5fa0 size=832 calls_out=4 calls_in=9
// strings: 

void FUN_007b5fa0(short *param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 0;
  if (*param_1 != 0) {
    iVar4 = *(int *)(param_1 + 2);
  }
  if (*param_1 != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
  }
  iVar4 = 0;
  if (param_1[0x12] != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if (param_1[0x12] != 0 && iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16));
  }
  uVar1 = param_1[0x24];
  sVar7 = 0x10;
  if (1 < uVar1) {
    sVar7 = uVar1 - 2;
  }
  switch(sVar7) {
  case 3:
    if ((-0x7ffffffe < *(int *)(param_1 + 0x5a)) && (*(int *)(param_1 + 0x5a) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    if (*(int *)(param_1 + 0x26) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    FUN_007b62d4(param_1 + 0x32);
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x2e);
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    if (*(int *)(param_1 + 0x26) == 0) {
      return;
    }
    goto LAB_007b618c;
  case 6:
    FUN_0108aea4(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x26) & 0x7fffffff) == 0) {
      return;
    }
LAB_007b618c:
    iVar5 = *(int *)(param_1 + 0x28);
    break;
  case 7:
    if (*(int *)(param_1 + 0x28) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x26));
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x2a);
    break;
  case 8:
  case 0x13:
    iVar4 = 0;
    if (param_1[0x2c] != 0) {
      iVar4 = *(int *)(param_1 + 0x2e);
    }
    if (param_1[0x2c] != 0 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x30));
    }
    iVar4 = 0;
    if (param_1[0x3e] != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
    }
    if (param_1[0x3e] != 0 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x42));
    }
    iVar5 = *(int *)(param_1 + 0x28);
    iVar4 = iVar5;
    for (iVar14 = *(int *)(param_1 + 0x2a); iVar14 != 0; iVar14 = iVar14 + -1) {
      FUN_01054830(iVar4);
      iVar4 = iVar4 + 0x14;
    }
    if (*(int *)(param_1 + 0x26) == 0) {
      return;
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x4a) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x4e) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0x52) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
    }
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x11:
    iVar4 = 0;
    if (param_1[0x26] != 0) {
      iVar4 = *(int *)(param_1 + 0x28);
    }
    if (param_1[0x26] != 0 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a));
    }
    iVar4 = 0;
    if (param_1[0x38] != 0) {
      iVar4 = *(int *)(param_1 + 0x3a);
    }
    if (param_1[0x38] == 0 || iVar4 == 0) {
switchD_007b6008_default:
      return;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    break;
  case 0xe:
    iVar5 = *(int *)(param_1 + 0x28);
    iVar4 = *(int *)(param_1 + 0x2a);
    if (iVar4 != 0) {
      piVar10 = (int *)(iVar5 + 8);
      do {
        bVar18 = (char)piVar10[-1] != '\0';
        iVar14 = 0;
        if (bVar18) {
          iVar14 = *piVar10;
        }
        if (bVar18 && iVar14 != 0) {
          thunk_FUN_016d3fb4(piVar10[1]);
        }
        piVar10 = piVar10 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(int *)(param_1 + 0x26) == 0) {
      return;
    }
    break;
  case 0x10:
    iVar4 = 0;
    if (uVar1 != 0) {
      iVar4 = *(int *)(param_1 + 0x26);
    }
    if (uVar1 != 0 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    iVar4 = 0;
    if (param_1[0x36] != 0) {
      iVar4 = *(int *)(param_1 + 0x38);
    }
    if (param_1[0x36] != 0 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3a));
    }
    iVar4 = 0;
    if (param_1[0x46] != 0) {
      iVar4 = *(int *)(param_1 + 0x48);
    }
    if (param_1[0x46] != 0 && iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4a));
    }
    iVar4 = 0;
    if (param_1[0x58] != 0) {
      iVar4 = *(int *)(param_1 + 0x5a);
    }
    if (param_1[0x58] == 0 || iVar4 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x5c);
    break;
  case 0x15:
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x26);
    iVar14 = 0;
    do {
      puVar6 = (undefined4 *)(iVar5 + iVar14 * 8);
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      iVar14 = iVar14 + 1;
    } while (iVar4 != iVar14);
    break;
  default:
    goto switchD_007b6008_default;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar14 = uVar11 - 0x10, uVar11 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar15 = *(int *)(iVar4 + 8) + 0x10;
  iVar12 = iVar14 * uVar16 + iVar14 + -4;
  iVar14 = iVar15 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar14 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - iVar5) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar16);
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
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

