// FUN_014c3128 @ 014c3128 size=1232 calls_out=8 calls_in=0
// strings: 

void FUN_014c3128(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
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
  
  iVar3 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      return;
    }
    piVar5 = param_1 + 1;
    if (iVar3 == 2) {
      FUN_005e6cdc(piVar5);
      if (param_1[4] != -1) {
        FUN_016dffb2();
      }
      FUN_00f02ff8(piVar5);
      uVar6 = param_1[10];
      iVar3 = 0;
      uVar15 = param_1[7];
      if (uVar6 == 0) {
        uVar4 = 0;
        uVar6 = 0;
      }
      else {
        uVar9 = param_1[9];
        uVar4 = uVar9 - uVar15;
        if (uVar9 < uVar15) {
          uVar4 = uVar9;
        }
        if (uVar15 - uVar4 < uVar6) {
          iVar3 = uVar6 - (uVar15 - uVar4);
          uVar6 = uVar15;
        }
        else {
          uVar6 = uVar4 + uVar6;
        }
      }
      iVar16 = param_1[8];
      puVar10 = (undefined4 *)(iVar16 + uVar4 * 0xc + 4);
      for (iVar11 = uVar6 - uVar4; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 3;
      }
      puVar10 = (undefined4 *)(iVar16 + 4);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
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
      FUN_005e6cdc(piVar5);
      if (param_1[4] != -1) {
        FUN_016dffb2();
      }
      FUN_00f02ff8(piVar5);
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
  FUN_005e6cdc();
  if (param_1[3] != -1) {
    FUN_016dffb2();
  }
  FUN_00f02ff8(param_1);
  uVar6 = param_1[0xa0];
  if (uVar6 == 0x80000029) {
    puVar10 = (undefined4 *)param_1[0xa2];
    iVar3 = param_1[0xa1];
    pcVar7 = (code *)*puVar10;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(iVar3);
    }
    if (puVar10[1] == 0) goto switchD_014c3450_caseD_2;
LAB_014c3428:
    thunk_FUN_016d3fb4(iVar3);
  }
  else {
    iVar3 = 0xb;
    if (0x80000012 < uVar6) {
      iVar3 = uVar6 + 0x7fffffed;
    }
    switch(iVar3) {
    case 0:
    case 1:
    case 0xd:
switchD_014c3450_caseD_0:
      if (param_1[0xa1] != 0) {
LAB_014c362c:
        iVar3 = param_1[0xa2];
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
      if ((int)uVar6 < 0) {
        uVar15 = uVar6 ^ 0x80000000;
      }
      if (0xd < uVar15) {
        switch(uVar15) {
        case 0xe:
          if (((char)param_1[0xa3] == '\0') && ((param_1[0xa4] & 0x7fffffffU) != 0)) {
            thunk_FUN_016d3fb4(param_1[0xa5]);
          }
          puVar10 = (undefined4 *)(param_1[0xa1] + 4);
          for (iVar3 = param_1[0xa2]; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (puVar10[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar10);
            }
            puVar10 = puVar10 + 3;
          }
          if (param_1[0xa0] != 0) {
            iVar3 = param_1[0xa1];
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
          piVar5 = param_1 + 0xa1;
          piVar8 = (int *)*piVar5;
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar8;
            bVar1 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar1);
          *piVar8 = iVar3 + -1;
          goto LAB_014c35f0;
        }
      }
      break;
    case 0xc:
      if (param_1[0xa1] == 5) {
        piVar5 = param_1 + 0xa2;
        piVar8 = (int *)*piVar5;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar3 + -1;
        goto LAB_014c35f0;
      }
      break;
    default:
      piVar5 = param_1 + 0xa1;
      piVar8 = (int *)*piVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar3 + -1;
LAB_014c35f0:
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*piVar5,piVar5[1]);
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
  uVar6 = param_1[0xb5];
  iVar3 = 0;
  if (uVar6 == 0) {
    uVar4 = 0;
    uVar15 = 0;
  }
  else {
    uVar4 = param_1[0xb2];
    uVar9 = param_1[0xb4];
    uVar15 = uVar9 - uVar4;
    if (uVar9 < uVar4) {
      uVar15 = uVar9;
    }
    if (uVar4 - uVar15 < uVar6) {
      iVar3 = uVar6 - (uVar4 - uVar15);
    }
    else {
      uVar4 = uVar15 + uVar6;
    }
  }
  iVar11 = param_1[0xb3];
  puVar10 = (undefined4 *)(iVar11 + uVar15 * 0xc + 4);
  for (iVar16 = uVar4 - uVar15; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (puVar10[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar10);
    }
    puVar10 = puVar10 + 3;
  }
  puVar10 = (undefined4 *)(iVar11 + 4);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
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
  iVar3 = FUN_016d3bc8();
  uVar6 = *(byte *)((int)puVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar11 = uVar15 - 0x10, uVar15 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)((int)puVar10 + -3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar16 = iVar11 * uVar6 + iVar11 + -4;
  iVar11 = iVar13 + iVar16;
  if (4 < uVar15) {
    if (uVar15 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar15 = *(uint *)(iVar11 + -4);
    if (uVar15 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar11 - (int)puVar10) < uVar15) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar11 - uVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar13 + iVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar2 = *(byte *)(iVar3 + 0x14);
  uVar15 = 1 << uVar6;
  *(undefined1 *)((int)puVar10 + -3) = 0xff;
  *(undefined2 *)((int)puVar10 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar3 + 0x10);
    uVar4 = *(uint *)(iVar3 + 0xc) | uVar9;
    if ((uVar15 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar9 == 0) || (uVar4 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar6);
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
      *(uint *)(iVar3 + 0x10) = uVar15 + uVar9;
      return;
    }
    puVar17 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar4 = *puVar17;
      if (uVar9 != uVar4) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar15 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar4) {
      return;
    }
  } while( true );
}

