// FUN_00aabed8 @ 00aabed8 size=480 calls_out=2 calls_in=2
// strings: 

void FUN_00aabed8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0 && param_1[1] == 0) {
    return;
  }
  uVar4 = param_1[4];
  if ((uVar4 & 0xf) == 7) {
    if (param_1[6] == 0) {
      return;
    }
    iVar5 = param_1[7];
    goto LAB_014b47f4;
  }
  if (uVar4 == 8) {
    return;
  }
  iVar8 = 1 - uVar4;
  uVar7 = 1;
  iVar5 = -(param_1[5] + (uint)(uVar4 >= 2));
  if ((uint)(uVar4 < 2) <= (uint)-param_1[5]) {
    uVar7 = uVar4 - 2;
  }
  if (3 < uVar7) {
    return;
  }
  switch(uVar7) {
  case 0:
    FUN_00a358c8(param_1 + 6);
    return;
  case 1:
    if ((param_1[0x25] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0x26],0x7fffffff,iVar5,iVar8);
    }
    if (param_1[0x22] != 0) {
      thunk_FUN_016d3fb4(param_1[0x23]);
    }
    iVar5 = param_1[0x35];
    puVar12 = (undefined4 *)(iVar5 + 0xc4);
    for (iVar8 = param_1[0x36]; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar12[-0xf] != 0) {
        thunk_FUN_016d3fb4(puVar12[-0xe]);
      }
      if (puVar12[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar12);
      }
      puVar12 = puVar12 + 0x34;
    }
    if (param_1[0x34] == 0) {
      return;
    }
    break;
  case 2:
    uVar4 = param_1[8];
    if (uVar4 == 0x11) {
      return;
    }
    iVar6 = 7;
    if (1 < uVar4) {
      iVar6 = uVar4 - 2;
    }
    iVar11 = 0x24;
    switch(iVar6) {
    case 0:
    case 1:
    case 10:
      goto switchD_00aabf8c_caseD_0;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      param_1 = param_1 + 9;
      iVar5 = *param_1;
      break;
    case 7:
      if (param_1[10] != 0) {
        thunk_FUN_016d3fb4(param_1[0xb],&switchD_00aabf8c::switchdataD_00aabf90,iVar5,iVar8);
      }
      param_1 = param_1 + 0xd;
      iVar5 = *param_1;
      break;
    case 8:
      if (param_1[9] != 0) {
        thunk_FUN_016d3fb4(param_1[10],&switchD_00aabf8c::switchdataD_00aabf90,iVar5,iVar8);
      }
      param_1 = param_1 + 0xc;
      iVar5 = *param_1;
      break;
    case 0xb:
      iVar11 = 0x30;
      if (param_1[9] != 0) {
        thunk_FUN_016d3fb4(param_1[10],&switchD_00aabf8c::switchdataD_00aabf90,iVar5,iVar8);
      }
    default:
      param_1 = (int *)((int)param_1 + iVar11);
      iVar5 = *param_1;
      goto LAB_00aac0c4;
    }
    if (iVar5 != -0x80000000) {
LAB_00aac0c4:
      if (iVar5 != 0) {
        iVar5 = param_1[1];
        break;
      }
    }
switchD_00aabf8c_caseD_0:
    return;
  case 3:
    if ((param_1[0x1c] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0x1d],(&switchD_00aabf28::switchdataD_00aabf2c)[uVar7],iVar5,iVar8)
      ;
    }
    if ((param_1[0x1f] & 0x7fffffffU) == 0) {
      return;
    }
    iVar5 = param_1[0x20];
  }
LAB_014b47f4:
  if (iVar5 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar6 = uVar7 - 0x10, uVar7 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar14 = *(int *)(iVar8 + 8) + 0x10;
  iVar11 = iVar6 * uVar4 + iVar6 + -4;
  iVar6 = iVar14 + iVar11;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar6 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - iVar5) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar7 = 1 << uVar4;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar8 + 0x10);
    uVar9 = *(uint *)(iVar8 + 0xc) | uVar13;
    if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar12;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar12 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar7 + uVar13;
      return;
    }
    puVar15 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar9 = *puVar15;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar7 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

