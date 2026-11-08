// FUN_0107ee9c @ 0107ee9c size=916 calls_out=2 calls_in=1
// strings: 

void FUN_0107ee9c(short *param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
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
  sVar8 = 0x10;
  if (1 < uVar1) {
    sVar8 = uVar1 - 2;
  }
  switch(sVar8) {
  case 3:
    if ((-0x7ffffffe < *(int *)(param_1 + 0x5a)) && (*(int *)(param_1 + 0x5a) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    if (*(int *)(param_1 + 0x26) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    iVar4 = *(int *)(param_1 + 0x32);
    uVar5 = iVar4 + 0x80000001U & iVar4 >> 0x1f;
    if (uVar5 == 0) {
      if (param_1[0x38] == 0) {
LAB_0107f1dc:
        iVar6 = 0;
        if (param_1[0x4a] != 0) {
          iVar6 = *(int *)(param_1 + 0x4c);
        }
        if (param_1[0x4a] != 0 && iVar6 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4e));
        }
      }
      else if (param_1[0x38] != 2) {
        if (*(int *)(param_1 + 0x3a) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
        }
        goto LAB_0107f1dc;
      }
      iVar15 = *(int *)(param_1 + 0x34);
      puVar7 = (undefined4 *)(iVar15 + 0x10);
      for (iVar6 = *(int *)(param_1 + 0x36); iVar6 != 0; iVar6 = iVar6 + -1) {
        if (puVar7[-4] != 0) {
          thunk_FUN_016d3fb4(puVar7[-3]);
        }
        if (puVar7[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar7);
        }
        puVar7 = puVar7 + 6;
      }
      if (iVar4 != 0) {
LAB_0107f260:
        thunk_FUN_016d3fb4(iVar15);
      }
    }
    else if (uVar5 == 1) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        iVar15 = *(int *)(param_1 + 0x3e);
        goto LAB_0107f260;
      }
    }
    else if (*(int *)(param_1 + 0x34) != 0) {
      iVar15 = *(int *)(param_1 + 0x36);
      goto LAB_0107f260;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x2e);
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
    goto LAB_0107f094;
  case 6:
    FUN_0108aea4(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x26) & 0x7fffffff) == 0) {
      return;
    }
LAB_0107f094:
    iVar6 = *(int *)(param_1 + 0x28);
    break;
  case 7:
    if (*(int *)(param_1 + 0x28) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x26));
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x2a);
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
    iVar6 = *(int *)(param_1 + 0x28);
    iVar4 = iVar6;
    for (iVar15 = *(int *)(param_1 + 0x2a); iVar15 != 0; iVar15 = iVar15 + -1) {
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
switchD_0107ef04_default:
      return;
    }
    iVar6 = *(int *)(param_1 + 0x3c);
    break;
  case 0xe:
    iVar6 = *(int *)(param_1 + 0x28);
    iVar4 = *(int *)(param_1 + 0x2a);
    if (iVar4 != 0) {
      piVar11 = (int *)(iVar6 + 8);
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
    iVar6 = *(int *)(param_1 + 0x5c);
    break;
  case 0x15:
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x26);
    iVar15 = 0;
    do {
      puVar7 = (undefined4 *)(iVar6 + iVar15 * 8);
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      iVar15 = iVar15 + 1;
    } while (iVar4 != iVar15);
    break;
  default:
    goto switchD_0107ef04_default;
  }
  if (iVar6 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar12 - 0x10, uVar12 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar16 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar15 * uVar5 + iVar15 + -4;
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
  if ((uint)(iVar15 - iVar6) < uVar12) {
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
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar5;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar4 + 0x10);
    uVar9 = *(uint *)(iVar4 + 0xc) | uVar14;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar14 != uVar9) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar9) {
      return;
    }
  } while( true );
}

