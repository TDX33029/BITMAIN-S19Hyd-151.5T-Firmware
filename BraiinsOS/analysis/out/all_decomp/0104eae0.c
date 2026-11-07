// FUN_0104eae0 @ 0104eae0 size=988 calls_out=3 calls_in=1
// strings: 

void FUN_0104eae0(ushort *param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar1 = *param_1;
  sVar7 = 0x10;
  if (1 < uVar1) {
    sVar7 = uVar1 - 2;
  }
  switch(sVar7) {
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
        iVar5 = 0;
        if (uVar1 != 0) {
          iVar5 = *(int *)(param_1 + 0x16);
        }
        if (uVar1 != 0 && iVar5 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
        }
        iVar5 = 0;
        if (param_1[0x26] != 0) {
          iVar5 = *(int *)(param_1 + 0x28);
        }
        if (param_1[0x26] != 0 && iVar5 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a));
        }
      }
      iVar15 = *(int *)(param_1 + 0x10);
      puVar6 = (undefined4 *)(iVar15 + 0x10);
      for (iVar5 = *(int *)(param_1 + 0x12); iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar6[-4] != 0) {
          thunk_FUN_016d3fb4(puVar6[-3]);
        }
        if (puVar6[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar6);
        }
        puVar6 = puVar6 + 6;
      }
      if (iVar10 != 0) goto LAB_0104ee68;
    }
    else if (uVar4 == 1) {
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar15 = *(int *)(param_1 + 0x1a);
        goto LAB_0104ee68;
      }
    }
    else if (*(int *)(param_1 + 0x10) != 0) {
      iVar15 = *(int *)(param_1 + 0x12);
LAB_0104ee68:
      thunk_FUN_016d3fb4(iVar15);
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 10);
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
    goto LAB_0104eca0;
  case 6:
    FUN_0108aea4(param_1 + 8);
    if ((*(uint *)(param_1 + 2) & 0x7fffffff) == 0) {
      return;
    }
LAB_0104eca0:
    iVar5 = *(int *)(param_1 + 4);
    break;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 8) == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 6);
    break;
  case 8:
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
    iVar5 = *(int *)(param_1 + 4);
    iVar10 = iVar5;
    for (iVar15 = *(int *)(param_1 + 6); iVar15 != 0; iVar15 = iVar15 + -1) {
      FUN_01054830(iVar10);
      iVar10 = iVar10 + 0x14;
    }
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
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
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
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
switchD_0104eb10_default:
      return;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    break;
  case 0xe:
    iVar5 = *(int *)(param_1 + 4);
    iVar10 = *(int *)(param_1 + 6);
    if (iVar10 != 0) {
      piVar11 = (int *)(iVar5 + 8);
      do {
        bVar18 = (char)piVar11[-1] != '\0';
        iVar15 = 0;
        if (bVar18) {
          iVar15 = *piVar11;
        }
        if (bVar18 && iVar15 != 0) {
          thunk_FUN_016d3fb4(piVar11[1]);
        }
        piVar11 = piVar11 + 6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (*(int *)(param_1 + 2) == 0) {
      return;
    }
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
    iVar5 = *(int *)(param_1 + 0x38);
    break;
  case 0x15:
    iVar10 = *(int *)(param_1 + 4);
    if (iVar10 == 0) {
      return;
    }
    iVar5 = *(int *)(param_1 + 2);
    iVar15 = 0;
    do {
      puVar6 = (undefined4 *)(iVar5 + iVar15 * 8);
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      iVar15 = iVar15 + 1;
    } while (iVar10 != iVar15);
    break;
  default:
    goto switchD_0104eb10_default;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar15 = uVar12 - 0x10, uVar12 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar16 = *(int *)(iVar10 + 8) + 0x10;
  iVar13 = iVar15 * uVar4 + iVar15 + -4;
  iVar15 = iVar16 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar15 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar15 - iVar5) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar12 = 1 << uVar4;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar10 + 0x10);
    uVar8 = *(uint *)(iVar10 + 0xc) | uVar14;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar8 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar10,uVar4);
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
      *(uint *)(iVar10 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar14 != uVar8) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar8) {
      return;
    }
  } while( true );
}

