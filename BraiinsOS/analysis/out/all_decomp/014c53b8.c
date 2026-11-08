// FUN_014c53b8 @ 014c53b8 size=468 calls_out=4 calls_in=2
// strings: 

void FUN_014c53b8(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      return;
    }
    piVar3 = param_1 + 1;
    if (iVar4 == 2) {
      FUN_005e6cdc(piVar3);
      if (param_1[4] != -1) {
        FUN_016dffb2();
      }
      FUN_00f02ff8(piVar3);
      uVar8 = param_1[10];
      iVar4 = 0;
      uVar15 = param_1[7];
      if (uVar8 == 0) {
        uVar5 = 0;
        uVar8 = 0;
      }
      else {
        uVar9 = param_1[9];
        uVar5 = uVar9 - uVar15;
        if (uVar9 < uVar15) {
          uVar5 = uVar9;
        }
        if (uVar15 - uVar5 < uVar8) {
          iVar4 = uVar8 - (uVar15 - uVar5);
          uVar8 = uVar15;
        }
        else {
          uVar8 = uVar5 + uVar8;
        }
      }
      iVar16 = param_1[8];
      puVar10 = (undefined4 *)(iVar16 + uVar5 * 0xc + 4);
      for (iVar11 = uVar8 - uVar5; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 3;
      }
      puVar10 = (undefined4 *)(iVar16 + 4);
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 3;
      }
      if (uVar15 != 0) {
        thunk_FUN_016d3fb4(iVar16);
      }
      if ((char)param_1[0xc] != '\x03') {
        return;
      }
      puVar10 = (undefined4 *)param_1[0xd];
      uVar12 = *puVar10;
      puVar14 = (undefined4 *)puVar10[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar12);
      }
    }
    else {
      FUN_005e6cdc(piVar3);
      if (param_1[4] != -1) {
        FUN_016dffb2();
      }
      FUN_00f02ff8(piVar3);
      if ((char)param_1[5] != '\x03') {
        return;
      }
      puVar10 = (undefined4 *)param_1[6];
      uVar12 = *puVar10;
      puVar14 = (undefined4 *)puVar10[1];
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar12);
      }
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    goto LAB_014b47f4;
  }
  FUN_005e6cdc(param_1);
  if (param_1[3] != -1) {
    FUN_016dffb2();
  }
  FUN_00f02ff8(param_1);
  uVar8 = param_1[0xa0];
  if (uVar8 == 0x80000029) {
    puVar10 = (undefined4 *)param_1[0xa2];
    iVar4 = param_1[0xa1];
    pcVar6 = (code *)*puVar10;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar4);
    }
    if (puVar10[1] == 0) goto switchD_014c3450_caseD_2;
LAB_014c3428:
    thunk_FUN_016d3fb4(iVar4);
  }
  else {
    iVar4 = 0xb;
    if (0x80000012 < uVar8) {
      iVar4 = uVar8 + 0x7fffffed;
    }
    switch(iVar4) {
    case 0:
    case 1:
    case 0xd:
switchD_014c3450_caseD_0:
      if (param_1[0xa1] != 0) {
LAB_014c362c:
        iVar4 = param_1[0xa2];
        goto LAB_014c3428;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      break;
    case 8:
      if (-0x7fffffeb < param_1[0xa1]) {
        FUN_01498e58(param_1[0xa2],param_1[0xa3]);
        goto switchD_014c3450_caseD_0;
      }
      break;
    case 0xb:
      uVar15 = 0xe;
      if ((int)uVar8 < 0) {
        uVar15 = uVar8 ^ 0x80000000;
      }
      if (0xd < uVar15) {
        switch(uVar15) {
        case 0xe:
          if (((char)param_1[0xa3] == '\0') && ((param_1[0xa4] & 0x7fffffffU) != 0)) {
            thunk_FUN_016d3fb4(param_1[0xa5]);
          }
          puVar10 = (undefined4 *)(param_1[0xa1] + 4);
          for (iVar4 = param_1[0xa2]; iVar4 != 0; iVar4 = iVar4 + -1) {
            if (puVar10[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar10);
            }
            puVar10 = puVar10 + 3;
          }
          if (param_1[0xa0] != 0) {
            iVar4 = param_1[0xa1];
            goto LAB_014c3428;
          }
          break;
        case 0xf:
        case 0x11:
          break;
        case 0x10:
          if ((-0x7fffffff < param_1[0xa4]) && (param_1[0xa4] != 0)) {
            thunk_FUN_016d3fb4(param_1[0xa5]);
          }
          FUN_01498e88(param_1[0xa2],param_1[0xa3]);
          if (param_1[0xa1] == 0) break;
          goto LAB_014c362c;
        default:
          piVar3 = param_1 + 0xa1;
          piVar7 = (int *)*piVar3;
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar7;
            bVar1 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar1);
          *piVar7 = iVar4 + -1;
          goto LAB_014c35f0;
        }
      }
      break;
    case 0xc:
      if (param_1[0xa1] == 5) {
        piVar3 = param_1 + 0xa2;
        piVar7 = (int *)*piVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar4 + -1;
        goto LAB_014c35f0;
      }
      break;
    default:
      piVar3 = param_1 + 0xa1;
      piVar7 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar4 + -1;
LAB_014c35f0:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*piVar3,piVar3[1]);
      }
    }
  }
switchD_014c3450_caseD_2:
  FUN_014c37dc(param_1 + 4);
  if (param_1[0x9c] != 0) {
    thunk_FUN_016d3fb4(param_1[0x9d]);
  }
  if (param_1[0xac] != 0) {
    thunk_FUN_016d3fb4(param_1[0xad]);
  }
  uVar8 = param_1[0xb5];
  iVar4 = 0;
  if (uVar8 == 0) {
    uVar5 = 0;
    uVar15 = 0;
  }
  else {
    uVar5 = param_1[0xb2];
    uVar9 = param_1[0xb4];
    uVar15 = uVar9 - uVar5;
    if (uVar9 < uVar5) {
      uVar15 = uVar9;
    }
    if (uVar5 - uVar15 < uVar8) {
      iVar4 = uVar8 - (uVar5 - uVar15);
    }
    else {
      uVar5 = uVar15 + uVar8;
    }
  }
  iVar11 = param_1[0xb3];
  puVar10 = (undefined4 *)(iVar11 + uVar15 * 0xc + 4);
  for (iVar16 = uVar5 - uVar15; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (puVar10[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar10);
    }
    puVar10 = puVar10 + 3;
  }
  puVar10 = (undefined4 *)(iVar11 + 4);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (puVar10[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar10);
    }
    puVar10 = puVar10 + 3;
  }
  if (param_1[0xb2] == 0) {
    return;
  }
  puVar10 = (undefined4 *)param_1[0xb3];
LAB_014b47f4:
  if (puVar10 == (undefined4 *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar8 = *(byte *)((int)puVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar11 = uVar15 - 0x10, uVar15 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)((int)puVar10 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar16 = iVar11 * uVar8 + iVar11 + -4;
  iVar11 = iVar13 + iVar16;
  if (4 < uVar15) {
    if (uVar15 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar15 = *(uint *)(iVar11 + -4);
    if (uVar15 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar11 - (int)puVar10) < uVar15) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar11 - uVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar13 + iVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar15 = 1 << uVar8;
  *(undefined1 *)((int)puVar10 + -3) = 0xff;
  *(undefined2 *)((int)puVar10 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar4 + 0x10);
    uVar5 = *(uint *)(iVar4 + 0xc) | uVar9;
    if ((uVar15 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar9 == 0) || (uVar5 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar8);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar10;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar10 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar15 + uVar9;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar5 = *puVar17;
      if (uVar9 != uVar5) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar15 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar5) {
      return;
    }
  } while( true );
}

