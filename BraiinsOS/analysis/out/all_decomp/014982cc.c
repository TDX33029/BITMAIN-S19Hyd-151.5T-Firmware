// FUN_014982cc @ 014982cc size=984 calls_out=8 calls_in=1
// strings: 

void FUN_014982cc(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = 1;
  if (0x80000000 < *param_1) {
    iVar4 = *param_1 + 0x7fffffff;
  }
  switch(iVar4) {
  case 0:
  case 3:
    goto switchD_014982f4_caseD_0;
  case 1:
    uVar7 = param_1[3];
    uVar9 = 1;
    if ((int)uVar7 < 0) {
      uVar9 = uVar7 ^ 0x80000000;
    }
    break;
  default:
    param_1 = param_1 + 1;
    if (*param_1 == 0x80000000 || *param_1 == 0) {
      return;
    }
    goto LAB_0149870c;
  }
  switch(uVar9) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    if (uVar7 != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
    if (param_1[6] != 0) {
      thunk_FUN_016d3fb4(param_1[7]);
    }
    uVar9 = param_1[10];
    uVar7 = uVar9;
    for (uVar12 = param_1[0xb]; uVar12 != 0; uVar12 = uVar12 - 1) {
      FUN_014987ac(uVar7);
      uVar7 = uVar7 + 0x24;
    }
    uVar7 = param_1[9];
    goto LAB_01498688;
  case 2:
    uVar9 = param_1[5];
    iVar4 = param_1[6] + 1;
    uVar7 = uVar9;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_01505444(uVar7);
      uVar7 = uVar7 + 0x14;
    }
    goto LAB_01498518;
  case 3:
    uVar7 = param_1[6];
    uVar9 = param_1[5];
    if (uVar7 != 0) {
      piVar5 = (int *)(uVar9 + 4);
      iVar4 = 0;
      do {
        uVar12 = piVar5[-1];
        iVar10 = 4;
        piVar6 = (int *)(uVar9 + iVar4 * 0x10);
        if (0x80000000 < uVar12) {
          iVar10 = uVar12 + 0x7fffffff;
        }
        switch(iVar10) {
        case 0:
        case 2:
          break;
        case 1:
          piVar6 = piVar6 + 1;
          goto LAB_014985d0;
        case 3:
          piVar6 = piVar5;
LAB_014985d0:
          if (*piVar6 != 0) {
            thunk_FUN_016d3fb4(piVar6[1]);
          }
          break;
        default:
          if (uVar12 != 0x80000000) goto LAB_014985d0;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar7 = param_1[4];
    goto LAB_014985ec;
  case 4:
    FUN_01498210(param_1 + 4);
    break;
  case 5:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    uVar9 = param_1[8];
    FUN_01498ab8(uVar9,param_1[9]);
    goto LAB_01498684;
  case 6:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
    puVar16 = param_1 + 4;
    uVar7 = *puVar16;
    goto joined_r0x014984b4;
  case 7:
    puVar16 = param_1 + 4;
    uVar7 = *puVar16;
    if (uVar7 == 0x80000000) goto switchD_01498328_default;
    uVar9 = param_1[8];
    if (uVar9 == 0x80000000) {
      iVar4 = 4;
    }
    else {
      if (uVar9 != 0) {
        thunk_FUN_016d3fb4(param_1[9]);
      }
      iVar4 = 0x18;
      if (param_1[0xb] != 0) {
        thunk_FUN_016d3fb4(param_1[0xc]);
      }
    }
    piVar5 = (int *)((int)(param_1 + 8) + iVar4);
    if (*piVar5 != 0) {
      thunk_FUN_016d3fb4(piVar5[1]);
    }
    goto LAB_014986ec;
  case 8:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(param_1[8]);
    }
    uVar9 = param_1[0xb];
    puVar8 = (undefined4 *)(uVar9 + 4);
    for (uVar7 = param_1[0xc]; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
    }
    uVar7 = param_1[10];
    goto LAB_01498688;
  case 9:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    uVar9 = param_1[8];
    uVar7 = uVar9;
    for (uVar12 = param_1[9]; uVar12 != 0; uVar12 = uVar12 - 1) {
      FUN_01505ed0(uVar7);
      uVar7 = uVar7 + 0x10;
    }
LAB_01498684:
    uVar7 = param_1[7];
LAB_01498688:
    if (uVar7 != 0) {
LAB_014986f8:
      thunk_FUN_016d3fb4(uVar9);
    }
    break;
  case 10:
    puVar16 = param_1 + 4;
    uVar7 = *puVar16;
LAB_014986ec:
    if (uVar7 == 0) break;
    uVar9 = puVar16[1];
    goto LAB_014986f8;
  case 0xe:
    piVar5 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[4]);
    }
    break;
  case 0xf:
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    piVar5 = (int *)param_1[10];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[10]);
    }
    FUN_01498b98(param_1 + 7);
    break;
  case 0x10:
    uVar9 = param_1[5];
    iVar4 = param_1[6] + 1;
    uVar7 = uVar9;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_01505444(uVar7);
      uVar7 = uVar7 + 0x14;
    }
LAB_01498518:
    uVar7 = param_1[4];
LAB_014985ec:
    if (uVar7 == 0) break;
    goto LAB_014986f8;
  default:
switchD_01498328_default:
    puVar16 = param_1 + 5;
    uVar7 = *puVar16;
joined_r0x014984b4:
    if (uVar7 != 0x80000000) goto LAB_014986ec;
  }
  if (*param_1 != 0x80000000 && *param_1 != 0) {
LAB_0149870c:
    uVar7 = param_1[1];
    if (uVar7 == 0) {
      return;
    }
    iVar4 = FUN_016d3bc8();
    uVar9 = *(byte *)(uVar7 - 3) & 0x1f;
    if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
       (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar10 = uVar12 - 0x10, uVar12 == 0)) {
      iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar12 = (uint)(*(byte *)(uVar7 - 3) >> 5);
    iVar15 = *(int *)(iVar4 + 8) + 0x10;
    iVar13 = iVar10 * uVar9 + iVar10 + -4;
    iVar10 = iVar15 + iVar13;
    if (4 < uVar12) {
      if (uVar12 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar12 = *(uint *)(iVar10 + -4);
      if (uVar12 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if (iVar10 - uVar7 < uVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 - uVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar4 + 0x14);
    uVar12 = 1 << uVar9;
    *(undefined1 *)(uVar7 - 3) = 0xff;
    *(undefined2 *)(uVar7 - 2) = 0;
    do {
      uVar14 = *(uint *)(iVar4 + 0x10);
      uVar7 = *(uint *)(iVar4 + 0xc) | uVar14;
      if ((uVar12 & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar14 == 0) || (uVar7 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar4,uVar9);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar8 = (undefined4 *)FUN_016d2bc8();
        uVar11 = *puVar8;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar8 = uVar11;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar4 + 0x10) = uVar12 + uVar14;
        return;
      }
      puVar16 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar7 = *puVar16;
        if (uVar14 != uVar7) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar3);
      *puVar16 = uVar12 + uVar14;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar14 == uVar7) {
        return;
      }
    } while( true );
  }
switchD_014982f4_caseD_0:
  return;
}

