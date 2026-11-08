// FUN_00e45888 @ 00e45888 size=952 calls_out=6 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00e45888(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = *param_1;
  if ((uVar3 & 0x1f) == 0x1d) {
    uVar3 = param_1[2];
    uVar7 = 4;
    if ((int)uVar3 < 0) {
      uVar7 = uVar3 ^ 0x80000000;
    }
    switch(uVar7) {
    case 0:
    case 3:
      return;
    case 1:
      uVar3 = param_1[3];
      puVar10 = (undefined4 *)param_1[4];
      pcVar4 = (code *)*puVar10;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar3);
      }
      uVar7 = puVar10[1];
joined_r0x00e45990:
      if (uVar7 == 0) {
        return;
      }
      goto LAB_014b47f4;
    case 2:
      piVar5 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(param_1[3],param_1[4]);
        return;
      }
      return;
    }
    goto switchD_00e4595c_default;
  }
  if (uVar3 == 0x1e) {
    return;
  }
  uVar7 = 4;
  if ((uint)(uVar3 < 4) <= -param_1[1]) {
    uVar7 = uVar3 - 4;
  }
  if (0x17 < uVar7) {
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
      uVar3 = param_1[5];
      puVar10 = (undefined4 *)(uVar3 + 4);
      for (uVar7 = param_1[6]; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 3;
      }
      if (param_1[4] != 0) goto LAB_014b47f4;
      break;
    default:
      if (param_1[4] != 0) {
        uVar3 = param_1[5];
        goto LAB_014b47f4;
      }
    }
    return;
  }
  puVar15 = param_1 + 2;
  switch(uVar7) {
  case 0:
    uVar3 = param_1[2];
    goto switchD_00e4595c_default;
  default:
    goto switchD_00e458cc_caseD_1;
  case 2:
    uVar3 = param_1[3];
    FUN_00f24460(uVar3,param_1[4]);
    uVar7 = param_1[2];
    goto joined_r0x00e45990;
  case 3:
    if (*puVar15 == 2 && param_1[3] == 0) {
      return;
    }
    FUN_005c38e4(puVar15);
    return;
  case 4:
    if ((uVar3 & 3) == 2) {
LAB_00e45ab8:
      if (!(param_1[0xb0] == 0x80000000 || param_1[0xb0] == 0)) goto LAB_00e45c24;
LAB_00e45ac8:
      uVar3 = param_1[0xb3];
    }
    else {
      if (uVar3 == 3) {
        return;
      }
      if (param_1[6] == 0x80000000 || param_1[6] == 0) {
        if (!(param_1[9] == 0x80000000 || param_1[9] == 0)) goto LAB_00e45bdc;
LAB_00e45aa8:
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00e45ab8;
      }
      else {
        thunk_FUN_016d3fb4(param_1[7]);
        if (!(param_1[9] != 0x80000000 && param_1[9] != 0)) goto LAB_00e45aa8;
LAB_00e45bdc:
        thunk_FUN_016d3fb4(param_1[10]);
        if (param_1[0xc] == 0x80000000 || param_1[0xc] == 0) goto LAB_00e45ab8;
      }
      thunk_FUN_016d3fb4(param_1[0xd]);
      if (!(param_1[0xb0] != 0x80000000 && param_1[0xb0] != 0)) goto LAB_00e45ac8;
LAB_00e45c24:
      thunk_FUN_016d3fb4(param_1[0xb1]);
      uVar3 = param_1[0xb3];
    }
    if (uVar3 != 0x80000000) {
      uVar14 = param_1[0xb4];
      uVar13 = param_1[0xb5];
      for (uVar7 = 0; uVar13 != uVar7; uVar7 = uVar7 + 1) {
        iVar6 = uVar14 + uVar7 * 0x20;
        if (*(int *)(iVar6 + 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar6 + 0x14));
        }
      }
      if (uVar3 != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
    }
    FUN_005c7b40(param_1 + 0x30);
    if (param_1[0x46] != 2 || param_1[0x47] != 0) {
      FUN_005c38e4(param_1 + 0x46);
    }
    uVar3 = param_1[0xab];
    FUN_00f24510(uVar3,param_1[0xac]);
    if (param_1[0xaa] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
    if (param_1[0xad] == 0) {
      return;
    }
    uVar3 = param_1[0xae];
    break;
  case 5:
  case 6:
    uVar3 = param_1[2];
    if ((int)uVar3 < -0x7ffffffe) {
      return;
    }
    goto switchD_00e4595c_default;
  case 9:
  case 0xd:
    uVar3 = param_1[2];
    if (uVar3 == 0x80000000) {
      return;
    }
switchD_00e4595c_default:
joined_r0x00e45a14:
    if (uVar3 == 0) {
switchD_00e458cc_caseD_1:
      return;
    }
    uVar3 = param_1[3];
    break;
  case 10:
  case 0xb:
    if (param_1[3] == 0) {
      return;
    }
    uVar3 = param_1[4];
    break;
  case 0xc:
    if (param_1[3] == 0) {
      return;
    }
    uVar3 = param_1[4];
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (*puVar15 == 2 && param_1[3] == 0) {
      if ((int)param_1[4] < 0) {
        return;
      }
      if (param_1[4] == 0) {
        return;
      }
      uVar3 = param_1[5];
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
      uVar3 = param_1[0x62];
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
      uVar3 = param_1[0x62];
    }
    if ((uVar3 & 0x7fffffff) == 0) {
      return;
    }
    uVar3 = param_1[99];
    break;
  case 0x12:
  case 0x13:
    uVar3 = param_1[2];
    if (uVar3 == 0x80000005) {
      return;
    }
    if ((int)uVar3 < 0) {
      return;
    }
    goto joined_r0x00e45a14;
  case 0x14:
    uVar3 = 2;
    if (999999999 < param_1[4]) {
      uVar3 = param_1[4] + 0xc4653600;
    }
    if (1 < uVar3) {
      iVar6 = 0x18;
      if (uVar3 != 2) {
        iVar6 = 0x14;
      }
      if (*(int *)((int)param_1 + iVar6) != 0) {
        uVar3 = ((int *)((int)param_1 + iVar6))[1];
        break;
      }
    }
    goto switchD_00e458cc_caseD_1;
  }
LAB_014b47f4:
  if (uVar3 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar7 = *(byte *)(uVar3 - 3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar13 - 0x10, uVar13 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(uVar3 - 3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar8 * uVar7 + iVar8 + -4;
  iVar8 = iVar12 + iVar11;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar13 = *(uint *)(iVar8 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if (iVar8 - uVar3 < uVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar8 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar12 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar6 + 0x14);
  uVar13 = 1 << uVar7;
  *(undefined1 *)(uVar3 - 3) = 0xff;
  *(undefined2 *)(uVar3 - 2) = 0;
  do {
    uVar14 = *(uint *)(iVar6 + 0x10);
    uVar3 = *(uint *)(iVar6 + 0xc) | uVar14;
    if ((uVar13 & uVar3) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar14 == 0) || (uVar3 + uVar13 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar7);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar13 + uVar14;
      return;
    }
    puVar15 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar3 = *puVar15;
      if (uVar14 != uVar3) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar13 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar3) {
      return;
    }
  } while( true );
}

