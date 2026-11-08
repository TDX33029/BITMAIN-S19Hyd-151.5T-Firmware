// FUN_00ebe668 @ 00ebe668 size=1424 calls_out=5 calls_in=4
// strings: 

void FUN_00ebe668(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar6 = *param_1;
  uVar5 = 4;
  if ((uint)(uVar6 < 4) <= -param_1[1]) {
    uVar5 = uVar6 - 4;
  }
  if (0x17 < uVar5) {
    if (param_1[2] - 1 < 2) {
      return;
    }
    switch((char)param_1[3]) {
    case '\0':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      break;
    case '\x01':
      uVar5 = param_1[5];
      puVar9 = (undefined4 *)(uVar5 + 4);
      for (uVar6 = param_1[6]; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      if (param_1[4] != 0) goto LAB_014b47f4;
      break;
    default:
      if (param_1[4] != 0) {
        uVar5 = param_1[5];
        goto LAB_014b47f4;
      }
    }
    return;
  }
  switch(uVar5) {
  case 0:
    uVar5 = param_1[2];
    goto LAB_00ebe7c4;
  default:
    goto switchD_00ebe698_caseD_1;
  case 2:
    uVar5 = param_1[3];
    iVar4 = param_1[4] + 1;
    uVar6 = uVar5;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_00f244b0(uVar6);
      uVar6 = uVar6 + 0x28;
    }
    if (param_1[2] == 0) {
      return;
    }
    break;
  case 3:
    if (param_1[2] == 2 && param_1[3] == 0) {
      return;
    }
    if (param_1[0x1a] == 0x80000000 || param_1[0x1a] == 0) {
      if (!(param_1[0x24] != 0x80000000 && param_1[0x24] != 0)) goto LAB_00ebe794;
LAB_00ebe940:
      thunk_FUN_016d3fb4(param_1[0x25]);
      if (!(param_1[0x2e] == 0x80000000 || param_1[0x2e] == 0)) goto LAB_00ebe958;
LAB_00ebe7a4:
      if (param_1[0x38] == 0x80000000 || param_1[0x38] == 0) {
        return;
      }
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x1b]);
      if (!(param_1[0x24] == 0x80000000 || param_1[0x24] == 0)) goto LAB_00ebe940;
LAB_00ebe794:
      if (!(param_1[0x2e] != 0x80000000 && param_1[0x2e] != 0)) goto LAB_00ebe7a4;
LAB_00ebe958:
      thunk_FUN_016d3fb4(param_1[0x2f]);
      if (param_1[0x38] == 0x80000000 || param_1[0x38] == 0) {
        return;
      }
    }
    uVar5 = param_1[0x39];
    break;
  case 4:
    if ((uVar6 & 3) == 2) {
LAB_00ebe844:
      if (!(param_1[0xb0] != 0x80000000 && param_1[0xb0] != 0)) goto LAB_00ebe854;
LAB_00ebe9bc:
      thunk_FUN_016d3fb4(param_1[0xb1]);
      uVar5 = param_1[0xb3];
    }
    else {
      if (uVar6 == 3) {
        return;
      }
      if (param_1[6] == 0x80000000 || param_1[6] == 0) {
        if (!(param_1[9] != 0x80000000 && param_1[9] != 0)) goto LAB_00ebe834;
LAB_00ebe98c:
        thunk_FUN_016d3fb4(param_1[10]);
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00ebe844;
      }
      else {
        thunk_FUN_016d3fb4(param_1[7]);
        if (!(param_1[9] == 0x80000000 || param_1[9] == 0)) goto LAB_00ebe98c;
LAB_00ebe834:
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00ebe844;
      }
      thunk_FUN_016d3fb4(param_1[0xd]);
      if (!(param_1[0xb0] == 0x80000000 || param_1[0xb0] == 0)) goto LAB_00ebe9bc;
LAB_00ebe854:
      uVar5 = param_1[0xb3];
    }
    if (uVar5 != 0x80000000) {
      uVar6 = param_1[0xb4];
      uVar11 = param_1[0xb5];
      for (uVar13 = 0; uVar11 != uVar13; uVar13 = uVar13 + 1) {
        iVar4 = uVar6 + uVar13 * 0x20;
        if (*(int *)(iVar4 + 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x14));
        }
      }
      if (uVar5 != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
    }
    FUN_005c7b40(param_1 + 0x30);
    if (param_1[0x46] != 2 || param_1[0x47] != 0) {
      FUN_005c38e4();
    }
    uVar6 = param_1[0xab];
    iVar4 = param_1[0xac] + 1;
    uVar5 = uVar6;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_00f24560(uVar5);
      uVar5 = uVar5 + 0x2e0;
    }
    if (param_1[0xaa] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    if (param_1[0xad] == 0) {
      return;
    }
    uVar5 = param_1[0xae];
    break;
  case 5:
  case 6:
    uVar5 = param_1[2];
    if ((int)uVar5 < -0x7ffffffe) {
      return;
    }
    goto LAB_00ebe7c4;
  case 9:
  case 0xd:
    uVar5 = param_1[2];
    if (uVar5 == 0x80000000) {
      return;
    }
LAB_00ebe7c4:
    if (uVar5 == 0) {
switchD_00ebe698_caseD_1:
      return;
    }
LAB_00ebe7cc:
    uVar5 = param_1[3];
    break;
  case 10:
  case 0xb:
  case 0xc:
    if (param_1[3] == 0) {
      return;
    }
    uVar5 = param_1[4];
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (param_1[2] == 2 && param_1[3] == 0) {
      if ((int)param_1[4] < 0) {
        return;
      }
      if (param_1[4] == 0) {
        return;
      }
      uVar5 = param_1[5];
      break;
    }
    if (param_1[0x68] != 0) {
      thunk_FUN_016d3fb4(param_1[0x69]);
    }
    if (param_1[0x6b] == 0x80000000 || param_1[0x6b] == 0) {
      if (!(param_1[0x6e] != 0x80000000 && param_1[0x6e] != 0)) goto LAB_005be734;
LAB_005be7fc:
      thunk_FUN_016d3fb4(param_1[0x6f]);
      if (!(param_1[0x71] == 0x80000000 || param_1[0x71] == 0)) goto LAB_005be814;
LAB_005be744:
      if (!(param_1[0x74] != 0x80000000 && param_1[0x74] != 0)) goto LAB_005be754;
LAB_005be82c:
      thunk_FUN_016d3fb4(param_1[0x75]);
      if (param_1[10] == 2 && param_1[0xb] == 0) {
        return;
      }
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x6c]);
      if (!(param_1[0x6e] == 0x80000000 || param_1[0x6e] == 0)) goto LAB_005be7fc;
LAB_005be734:
      if (!(param_1[0x71] != 0x80000000 && param_1[0x71] != 0)) goto LAB_005be744;
LAB_005be814:
      thunk_FUN_016d3fb4(param_1[0x72]);
      if (!(param_1[0x74] == 0x80000000 || param_1[0x74] == 0)) goto LAB_005be82c;
LAB_005be754:
      if (param_1[10] == 2 && param_1[0xb] == 0) {
        return;
      }
    }
    if (param_1[0x22] == 0x80000000 || param_1[0x22] == 0) {
      if (!(param_1[0x2c] != 0x80000000 && param_1[0x2c] != 0)) goto LAB_005be784;
LAB_005be860:
      thunk_FUN_016d3fb4(param_1[0x2d]);
      if (!(param_1[0x36] == 0x80000000 || param_1[0x36] == 0)) goto LAB_005be878;
LAB_005be794:
      if (!(param_1[0x40] != 0x80000000 && param_1[0x40] != 0)) goto LAB_005be7a4;
LAB_005be890:
      thunk_FUN_016d3fb4(param_1[0x41]);
      if (!(param_1[0x4e] == 0x80000000 || param_1[0x4e] == 0)) goto LAB_005be8a8;
LAB_005be7b4:
      if (!(param_1[0x58] != 0x80000000 && param_1[0x58] != 0)) goto LAB_005be7c4;
LAB_005be8c0:
      thunk_FUN_016d3fb4(param_1[0x59]);
      uVar5 = param_1[0x62];
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x23]);
      if (!(param_1[0x2c] == 0x80000000 || param_1[0x2c] == 0)) goto LAB_005be860;
LAB_005be784:
      if (!(param_1[0x36] != 0x80000000 && param_1[0x36] != 0)) goto LAB_005be794;
LAB_005be878:
      thunk_FUN_016d3fb4(param_1[0x37]);
      if (!(param_1[0x40] == 0x80000000 || param_1[0x40] == 0)) goto LAB_005be890;
LAB_005be7a4:
      if (!(param_1[0x4e] != 0x80000000 && param_1[0x4e] != 0)) goto LAB_005be7b4;
LAB_005be8a8:
      thunk_FUN_016d3fb4(param_1[0x4f]);
      if (!(param_1[0x58] == 0x80000000 || param_1[0x58] == 0)) goto LAB_005be8c0;
LAB_005be7c4:
      uVar5 = param_1[0x62];
    }
    if ((uVar5 & 0x7fffffff) == 0) {
      return;
    }
    uVar5 = param_1[99];
    break;
  case 0x12:
  case 0x13:
    uVar5 = param_1[2];
    if (uVar5 == 0x80000005) {
      return;
    }
    if ((int)uVar5 < 0) {
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    goto LAB_00ebe7cc;
  case 0x14:
    uVar5 = 2;
    if (999999999 < param_1[4]) {
      uVar5 = param_1[4] + 0xc4653600;
    }
    if (1 < uVar5) {
      iVar4 = 0x18;
      if (uVar5 != 2) {
        iVar4 = 0x14;
      }
      if (*(int *)((int)param_1 + iVar4) != 0) {
        uVar5 = ((int *)((int)param_1 + iVar4))[1];
        break;
      }
    }
    goto switchD_00ebe698_caseD_1;
  }
LAB_014b47f4:
  if (uVar5 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)(uVar5 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(uVar5 - 3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar7 * uVar6 + iVar7 + -4;
  iVar7 = iVar12 + iVar10;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
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
  if (iVar7 - uVar5 < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar11 = 1 << uVar6;
  *(undefined1 *)(uVar5 - 3) = 0xff;
  *(undefined2 *)(uVar5 - 2) = 0;
  do {
    uVar13 = *(uint *)(iVar4 + 0x10);
    uVar5 = *(uint *)(iVar4 + 0xc) | uVar13;
    if ((uVar11 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar5 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar13 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar5) {
      return;
    }
  } while( true );
}

