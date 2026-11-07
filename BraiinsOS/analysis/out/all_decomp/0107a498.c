// FUN_0107a498 @ 0107a498 size=1208 calls_out=4 calls_in=3
// strings: 

void FUN_0107a498(ushort *param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
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
  sVar5 = 0x10;
  if (1 < uVar1) {
    sVar5 = uVar1 - 2;
  }
  switch(sVar5) {
  case 2:
    iVar9 = 0;
    if (param_1[2] != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar9 = 0;
    if (param_1[0x14] != 0) {
      iVar9 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar9 == 0) {
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
    FUN_0107a9c8(param_1 + 0xe);
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 10);
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
    goto LAB_0107a66c;
  case 5:
    iVar9 = 0;
    if (param_1[2] != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar9 = 0;
    if (param_1[0x14] != 0) {
      iVar9 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar9 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 6:
    FUN_0108aea4(param_1 + 8);
    if ((*(uint *)(param_1 + 2) & 0x7fffffff) == 0) {
      return;
    }
LAB_0107a66c:
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
    iVar9 = 0;
    if (param_1[8] != 0) {
      iVar9 = *(int *)(param_1 + 10);
    }
    if (param_1[8] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    iVar9 = 0;
    if (param_1[0x1a] != 0) {
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    if (param_1[0x1a] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e));
    }
    iVar13 = *(int *)(param_1 + 4);
    iVar9 = iVar13;
    for (iVar7 = *(int *)(param_1 + 6); iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_01054830(iVar9);
      iVar9 = iVar9 + 0x14;
    }
    goto LAB_0107a994;
  case 9:
    iVar9 = 0;
    if (param_1[2] != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar9 = 0;
    if (param_1[0x14] != 0) {
      iVar9 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar9 == 0) {
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
    iVar9 = 0;
    if (param_1[2] != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar9 = 0;
    if (param_1[0x14] != 0) {
      iVar9 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar9 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0xc:
    iVar9 = 0;
    if (param_1[2] != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar9 = 0;
    if (param_1[0x14] != 0) {
      iVar9 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar9 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0xe:
    iVar9 = *(int *)(param_1 + 6);
    iVar13 = *(int *)(param_1 + 4);
    if (iVar9 != 0) {
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
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    goto LAB_0107a994;
  case 0xf:
    iVar9 = 0;
    if (param_1[2] != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar9 = 0;
    if (param_1[0x14] != 0) {
      iVar9 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar9 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0x10:
    iVar9 = 0;
    if (uVar1 != 0) {
      iVar9 = *(int *)(param_1 + 2);
    }
    if (uVar1 != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
    }
    iVar9 = 0;
    if (param_1[0x12] != 0) {
      iVar9 = *(int *)(param_1 + 0x14);
    }
    if (param_1[0x12] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16));
    }
    iVar9 = 0;
    if (param_1[0x22] != 0) {
      iVar9 = *(int *)(param_1 + 0x24);
    }
    if (param_1[0x22] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x26));
    }
    iVar9 = 0;
    if (param_1[0x34] != 0) {
      iVar9 = *(int *)(param_1 + 0x36);
    }
    if (param_1[0x34] == 0 || iVar9 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x38);
    break;
  case 0x11:
    iVar9 = 0;
    if (param_1[2] != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
    if (param_1[2] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 6));
    }
    iVar9 = 0;
    if (param_1[0x14] != 0) {
      iVar9 = *(int *)(param_1 + 0x16);
    }
    if (param_1[0x14] == 0 || iVar9 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    break;
  case 0x13:
    iVar9 = 0;
    if (param_1[8] != 0) {
      iVar9 = *(int *)(param_1 + 10);
    }
    if (param_1[8] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
    }
    iVar9 = 0;
    if (param_1[0x1a] != 0) {
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    if (param_1[0x1a] != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e));
    }
    iVar13 = *(int *)(param_1 + 4);
    iVar9 = iVar13;
    for (iVar7 = *(int *)(param_1 + 6); iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_01054830(iVar9);
      iVar9 = iVar9 + 0x14;
    }
LAB_0107a994:
    if (*(int *)(param_1 + 2) == 0) {
switchD_0107a4c8_default:
      return;
    }
    break;
  case 0x15:
    iVar9 = *(int *)(param_1 + 4);
    if (iVar9 == 0) {
      return;
    }
    iVar13 = *(int *)(param_1 + 2);
    iVar7 = 0;
    do {
      puVar4 = (undefined4 *)(iVar13 + iVar7 * 8);
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(*puVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar9 != iVar7);
    break;
  default:
    goto switchD_0107a4c8_default;
  }
  if (iVar13 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar14 = *(int *)(iVar9 + 8) + 0x10;
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
  bVar3 = *(byte *)(iVar9 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar9 + 0x10);
    uVar6 = *(uint *)(iVar9 + 0xc) | uVar12;
    if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar6 = *puVar17;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

