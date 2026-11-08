// FUN_005c6cb0 @ 005c6cb0 size=972 calls_out=5 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_005c6cb0(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar7 = *param_1;
  if (uVar7 == 0x1d && param_1[1] == 0) {
switchD_005c6d00_caseD_0:
    uVar7 = param_1[2];
    goto joined_r0x005c6dc8;
  }
  uVar6 = 4;
  if ((uint)(uVar7 < 4) <= -param_1[1]) {
    uVar6 = uVar7 - 4;
  }
  if (0x17 < uVar6) {
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
      uVar7 = param_1[5];
      puVar5 = (undefined4 *)(uVar7 + 4);
      for (uVar6 = param_1[6]; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 3;
      }
      if (param_1[4] != 0) goto LAB_014b47f4;
      break;
    default:
      if (param_1[4] != 0) {
        uVar7 = param_1[5];
        goto LAB_014b47f4;
      }
    }
    return;
  }
  puVar14 = param_1 + 2;
  switch(uVar6) {
  case 0:
    goto switchD_005c6d00_caseD_0;
  default:
    goto switchD_005c6d00_caseD_1;
  case 2:
    uVar7 = param_1[3];
    FUN_00f24460(uVar7,param_1[4]);
    if (param_1[2] == 0) {
      return;
    }
    break;
  case 3:
    if (*puVar14 == 2 && param_1[3] == 0) {
      return;
    }
    FUN_005c38e4(puVar14);
    return;
  case 4:
    if ((uVar7 & 3) == 2) {
LAB_005c6e5c:
      if (!(param_1[0xb0] == 0x80000000 || param_1[0xb0] == 0)) goto LAB_005c6fb4;
LAB_005c6e6c:
      uVar7 = param_1[0xb3];
    }
    else {
      if (uVar7 == 3) {
        return;
      }
      if (param_1[6] == 0x80000000 || param_1[6] == 0) {
        if (!(param_1[9] == 0x80000000 || param_1[9] == 0)) goto LAB_005c6f6c;
LAB_005c6e4c:
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_005c6e5c;
      }
      else {
        thunk_FUN_016d3fb4(param_1[7]);
        if (!(param_1[9] != 0x80000000 && param_1[9] != 0)) goto LAB_005c6e4c;
LAB_005c6f6c:
        thunk_FUN_016d3fb4(param_1[10]);
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_005c6e5c;
      }
      thunk_FUN_016d3fb4(param_1[0xd]);
      if (!(param_1[0xb0] != 0x80000000 && param_1[0xb0] != 0)) goto LAB_005c6e6c;
LAB_005c6fb4:
      thunk_FUN_016d3fb4(param_1[0xb1]);
      uVar7 = param_1[0xb3];
    }
    if (uVar7 != 0x80000000) {
      uVar12 = param_1[0xb4];
      uVar10 = param_1[0xb5];
      for (uVar6 = 0; uVar10 != uVar6; uVar6 = uVar6 + 1) {
        iVar4 = uVar12 + uVar6 * 0x20;
        if (*(int *)(iVar4 + 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x14));
        }
      }
      if (uVar7 != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
    }
    FUN_005c7b40(param_1 + 0x30);
    if (param_1[0x46] != 2 || param_1[0x47] != 0) {
      FUN_005c38e4(param_1 + 0x46);
    }
    uVar7 = param_1[0xab];
    FUN_00f24510(uVar7,param_1[0xac]);
    if (param_1[0xaa] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    if (param_1[0xad] == 0) {
      return;
    }
    uVar7 = param_1[0xae];
    break;
  case 5:
  case 6:
    uVar7 = param_1[2];
    if ((int)uVar7 < -0x7ffffffe) {
      return;
    }
    goto joined_r0x005c6dc8;
  case 9:
  case 0xd:
    uVar7 = param_1[2];
    if (uVar7 == 0x80000000) {
      return;
    }
    goto joined_r0x005c6dc8;
  case 10:
  case 0xc:
    if (param_1[3] == 0) {
      return;
    }
    uVar7 = param_1[4];
    break;
  case 0xb:
    if (param_1[3] == 0) {
      return;
    }
    uVar7 = param_1[4];
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (*puVar14 == 2 && param_1[3] == 0) {
      if ((int)param_1[4] < 0) {
        return;
      }
      if (param_1[4] == 0) {
        return;
      }
      uVar7 = param_1[5];
      break;
    }
    if (param_1[0x68] != 0) {
      thunk_FUN_016d3fb4(param_1[0x69]);
    }
    if (param_1[0x6b] == 0x80000000 || param_1[0x6b] == 0) {
      if (!(param_1[0x6e] == 0x80000000 || param_1[0x6e] == 0)) goto LAB_005be7fc;
LAB_005be734:
      if (!(param_1[0x71] == 0x80000000 || param_1[0x71] == 0)) goto LAB_005be814;
LAB_005be744:
      if (!(param_1[0x74] == 0x80000000 || param_1[0x74] == 0)) goto LAB_005be82c;
LAB_005be754:
      if (param_1[10] == 2 && param_1[0xb] == 0) {
        return;
      }
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x6c]);
      if (!(param_1[0x6e] != 0x80000000 && param_1[0x6e] != 0)) goto LAB_005be734;
LAB_005be7fc:
      thunk_FUN_016d3fb4(param_1[0x6f]);
      if (!(param_1[0x71] != 0x80000000 && param_1[0x71] != 0)) goto LAB_005be744;
LAB_005be814:
      thunk_FUN_016d3fb4(param_1[0x72]);
      if (!(param_1[0x74] != 0x80000000 && param_1[0x74] != 0)) goto LAB_005be754;
LAB_005be82c:
      thunk_FUN_016d3fb4(param_1[0x75]);
      if (param_1[10] == 2 && param_1[0xb] == 0) {
        return;
      }
    }
    if (param_1[0x22] == 0x80000000 || param_1[0x22] == 0) {
      if (!(param_1[0x2c] == 0x80000000 || param_1[0x2c] == 0)) goto LAB_005be860;
LAB_005be784:
      if (!(param_1[0x36] == 0x80000000 || param_1[0x36] == 0)) goto LAB_005be878;
LAB_005be794:
      if (!(param_1[0x40] == 0x80000000 || param_1[0x40] == 0)) goto LAB_005be890;
LAB_005be7a4:
      if (!(param_1[0x4e] == 0x80000000 || param_1[0x4e] == 0)) goto LAB_005be8a8;
LAB_005be7b4:
      if (!(param_1[0x58] == 0x80000000 || param_1[0x58] == 0)) goto LAB_005be8c0;
LAB_005be7c4:
      uVar7 = param_1[0x62];
    }
    else {
      thunk_FUN_016d3fb4(param_1[0x23]);
      if (!(param_1[0x2c] != 0x80000000 && param_1[0x2c] != 0)) goto LAB_005be784;
LAB_005be860:
      thunk_FUN_016d3fb4(param_1[0x2d]);
      if (!(param_1[0x36] != 0x80000000 && param_1[0x36] != 0)) goto LAB_005be794;
LAB_005be878:
      thunk_FUN_016d3fb4(param_1[0x37]);
      if (!(param_1[0x40] != 0x80000000 && param_1[0x40] != 0)) goto LAB_005be7a4;
LAB_005be890:
      thunk_FUN_016d3fb4(param_1[0x41]);
      if (!(param_1[0x4e] != 0x80000000 && param_1[0x4e] != 0)) goto LAB_005be7b4;
LAB_005be8a8:
      thunk_FUN_016d3fb4(param_1[0x4f]);
      if (!(param_1[0x58] != 0x80000000 && param_1[0x58] != 0)) goto LAB_005be7c4;
LAB_005be8c0:
      thunk_FUN_016d3fb4(param_1[0x59]);
      uVar7 = param_1[0x62];
    }
    if ((uVar7 & 0x7fffffff) == 0) {
      return;
    }
    uVar7 = param_1[99];
    break;
  case 0x12:
  case 0x13:
    uVar7 = param_1[2];
    if (uVar7 == 0x80000005) {
      return;
    }
    if ((int)uVar7 < 0) {
      return;
    }
joined_r0x005c6dc8:
    if (uVar7 == 0) {
switchD_005c6d00_caseD_1:
      return;
    }
    uVar7 = param_1[3];
    break;
  case 0x14:
    uVar7 = 2;
    if (999999999 < param_1[4]) {
      uVar7 = param_1[4] + 0xc4653600;
    }
    if (uVar7 < 2) {
      return;
    }
    iVar4 = 0x18;
    if (uVar7 != 2) {
      iVar4 = 0x14;
    }
    if (*(int *)((int)param_1 + iVar4) == 0) {
      return;
    }
    uVar7 = ((int *)((int)param_1 + iVar4))[1];
  }
LAB_014b47f4:
  if (uVar7 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)(uVar7 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(uVar7 - 3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar8 * uVar6 + iVar8 + -4;
  iVar8 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar8 - uVar7 < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar6;
  *(undefined1 *)(uVar7 - 3) = 0xff;
  *(undefined2 *)(uVar7 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar6);
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
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar7 = *puVar14;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

