// FUN_00c923b0 @ 00c923b0 size=1896 calls_out=26 calls_in=1
// strings: 

void FUN_00c923b0(int *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0 || param_1[1] != 0) goto switchD_00c923f0_caseD_1;
  switch((char)param_1[0x26]) {
  case '\0':
    if ((-0x7ffffffe < param_1[10]) && (param_1[10] != 0)) {
      thunk_FUN_016d3fb4(param_1[0xb]);
    }
    piVar13 = param_1 + 0xe;
    FUN_016af0b0(piVar13);
    piVar3 = (int *)*piVar13;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar13);
    }
  default:
switchD_00c923f0_caseD_1:
    break;
  case '\x03':
    FUN_00c85398(param_1 + 0x28);
    goto LAB_00c9248c;
  case '\x04':
    if ((char)param_1[0x35] == '\x03') {
      FUN_00c8526c(param_1 + 0x29);
    }
LAB_00c9248c:
    cVar1 = *(char *)((int)param_1 + 0x99);
    goto joined_r0x00c92b28;
  case '\x05':
    switch((char)param_1[0x50]) {
    case '\0':
      if ((-0x7ffffffe < param_1[0x32]) && (param_1[0x32] != 0)) {
        thunk_FUN_016d3fb4(param_1[0x33]);
      }
      piVar13 = param_1 + 0x36;
      FUN_016af0b0(piVar13);
      piVar3 = (int *)*piVar13;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar13);
      }
    default:
      goto switchD_00c924b0_caseD_1;
    case '\x03':
      goto switchD_00c924b0_caseD_3;
    case '\x04':
      FUN_00c86140(param_1 + 0x52);
      goto LAB_00c92a8c;
    case '\x05':
      switch((char)param_1[0x7a]) {
      case '\0':
        piVar13 = param_1 + 0x5c;
        FUN_016af0b0(piVar13);
        piVar3 = (int *)*piVar13;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar17 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar17);
        *piVar3 = iVar4 + -1;
        goto LAB_00c92a34;
      default:
        goto switchD_00c925f8_caseD_1;
      case '\x03':
        if ((char)param_1[0x89] == '\x03') {
          FUN_00c8526c(param_1 + 0x7d);
        }
        goto LAB_00c92a04;
      case '\x04':
        if ((char)param_1[0x94] == '\x03') {
          FUN_00c862ac(param_1 + 0x7e);
        }
        goto LAB_00c92a04;
      case '\x05':
        if ((char)param_1[0x83] == '\x04') {
          FUN_00c930e8(param_1 + 0x84);
        }
        FUN_00ce1dd8(param_1[0x7d],param_1[0x7e]);
        if (param_1[0x7c] != 0) {
          thunk_FUN_016d3fb4(param_1[0x7d]);
        }
        break;
      case '\x06':
        FUN_00a07b4c(param_1 + 0x7e);
        piVar13 = param_1 + 0x92;
        FUN_016af0b0(piVar13);
        piVar3 = (int *)*piVar13;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar17 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar17);
        *piVar3 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4138(*piVar13);
        }
        break;
      case '\a':
        if ((char)param_1[0xa0] == '\x03') {
          if (*(char *)((int)param_1 + 0x219) == '\x04') {
            if (*(char *)((int)param_1 + 0x269) == '\x03') {
              puVar5 = (undefined4 *)param_1[0x97];
              iVar4 = param_1[0x96];
              pcVar6 = (code *)*puVar5;
              if (pcVar6 != (code *)0x0) {
                (*pcVar6)(iVar4);
              }
              if (puVar5[1] != 0) {
                thunk_FUN_016d3fb4(iVar4);
              }
              if (param_1[0x8c] != 0) {
                thunk_FUN_016d3fb4(param_1[0x8d]);
              }
            }
            FUN_00c822ec(param_1[0x84]);
          }
          else if ((*(char *)((int)param_1 + 0x219) == '\x03') && (param_1[0x87] != 0)) {
            FUN_00c8204c(param_1[0x87],param_1[0x88],1);
          }
          piVar3 = (int *)param_1[0x9e];
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar17 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar17);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f31e8(param_1[0x9e]);
          }
        }
      }
      FUN_00c49364(param_1 + 0x77);
      FUN_00c49070(param_1 + 0x74);
      *(undefined1 *)((int)param_1 + 0x1ea) = 0;
LAB_00c92a04:
      FUN_00c47f30(param_1 + 0x71);
      piVar13 = param_1 + 0x60;
      FUN_016af0b0(piVar13);
      piVar3 = (int *)*piVar13;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
LAB_00c92a34:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar13);
      }
switchD_00c925f8_caseD_1:
      piVar13 = param_1 + 0x48;
      *(undefined1 *)((int)param_1 + 0x141) = 0;
      FUN_016af0b0(piVar13);
      piVar3 = (int *)*piVar13;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar17 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar17);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar13);
      }
LAB_00c92a8c:
      *(undefined1 *)(param_1 + 0x51) = 0;
      goto switchD_00c92568_default;
    case '\x06':
      cVar1 = *(char *)((int)param_1 + 0x197);
      if (cVar1 == '\x04') {
        FUN_00ce1dd8(param_1[0x71],param_1[0x72]);
        if (param_1[0x70] != 0) {
          thunk_FUN_016d3fb4(param_1[0x71]);
        }
        if (param_1[0x6d] != 0) {
          thunk_FUN_016d3fb4(param_1[0x6e]);
        }
        *(undefined1 *)(param_1 + 0x65) = 0;
        FUN_00c48a0c(param_1 + 0x69);
        *(undefined1 *)((int)param_1 + 0x195) = 0;
        if (param_1[0x66] != 0) {
          thunk_FUN_016d3fb4(param_1[0x67]);
        }
        *(undefined1 *)((int)param_1 + 0x196) = 0;
LAB_00c926f8:
        iVar4 = 0x1c;
        FUN_00c487f4(param_1 + 0x60);
      }
      else {
        if (cVar1 == '\x03') {
          if (((char)param_1[0x73] == '\x03') && (param_1[0x71] != 0)) {
            FUN_00c81a4c(param_1[0x71],param_1[0x72],1);
          }
          goto LAB_00c926f8;
        }
        iVar4 = 4;
        if (cVar1 != '\0') goto switchD_00c925f8_caseD_1;
      }
      FUN_00c49070((int)param_1 + iVar4 + 0x158);
      goto switchD_00c925f8_caseD_1;
    }
  case '\x06':
    FUN_00c863d0(param_1 + 0x70);
    iVar4 = 0x93;
    FUN_00ad1570(param_1 + 0x4c);
    goto LAB_00c92b0c;
  }
  goto LAB_014b47f4;
switchD_00c924b0_caseD_3:
  switch(*(undefined1 *)((int)param_1 + 0x1fe)) {
  case 3:
    if ((char)param_1[0x89] == '\x04') {
      FUN_00c930e8(param_1 + 0x8a);
    }
    FUN_00ce1dd8(param_1[0x81],param_1[0x82]);
    if (param_1[0x80] != 0) {
      thunk_FUN_016d3fb4(param_1[0x81]);
    }
    FUN_00c47f30(param_1 + 0x83);
    goto switchD_00c92568_default;
  case 4:
    goto switchD_00c92568_caseD_4;
  case 5:
    FUN_00c85f64(param_1 + 0x88);
    FUN_00c47f30(param_1 + 0x80);
    goto switchD_00c92568_caseD_4;
  case 6:
    goto switchD_00c92568_caseD_6;
  case 7:
    FUN_00c931f0(param_1 + 0x80);
    break;
  case 8:
    if ((char)param_1[0xc1] == '\x03') {
      FUN_00c85cb8(param_1 + 0x82);
    }
    break;
  case 9:
    if ((char)param_1[0xc1] == '\x03') {
      FUN_00c85cb8(param_1 + 0x82);
    }
    break;
  case 10:
    FUN_00c931f0(param_1 + 0x80);
    break;
  case 0xb:
    FUN_00a07b4c(param_1 + 0x80);
    break;
  case 0xc:
    FUN_00a07b4c(param_1 + 0x80);
    break;
  case 0xd:
    if ((char)param_1[0xc1] == '\x03') {
      FUN_00c85cb8(param_1 + 0x82);
    }
    goto switchD_00c92568_caseD_6;
  case 0xe:
    FUN_00c931f0(param_1 + 0x86);
    FUN_00ce1dd8(param_1[0x81],param_1[0x82]);
    if (param_1[0x80] != 0) {
      thunk_FUN_016d3fb4(param_1[0x81]);
    }
    FUN_00c47f30(param_1 + 0x83);
    goto switchD_00c92568_caseD_6;
  case 0xf:
    if ((char)param_1[0xc1] == '\x03') {
      FUN_00c85cb8(param_1 + 0x82);
    }
    goto switchD_00c92568_caseD_6;
  case 0x10:
    cVar1 = *(char *)((int)param_1 + 0x21e);
    bVar17 = cVar1 == '\x03';
    if (bVar17) {
      cVar1 = *(char *)((int)param_1 + 0x20e);
    }
    if ((bVar17 && cVar1 == '\x03') && (param_1[0x80] != 0)) {
      FUN_00c8204c(param_1[0x80],param_1[0x81],1);
    }
    goto switchD_00c92568_caseD_6;
  default:
    goto switchD_00c92568_default;
  }
  FUN_00ce1dd8(param_1[0x7b],param_1[0x7c]);
  if (param_1[0x7a] != 0) {
    thunk_FUN_016d3fb4(param_1[0x7b]);
  }
  FUN_00c4849c(param_1 + 0x77);
  FUN_00c48f0c(param_1 + 0x74);
switchD_00c92568_caseD_6:
  FUN_00c487f4(param_1 + 0x71);
  FUN_00c47f30(param_1 + 0x6e);
  FUN_00c47f30(param_1 + 0x6b);
switchD_00c92568_caseD_4:
  if (param_1[0x68] != 0) {
    thunk_FUN_016d3fb4(param_1[0x69]);
  }
switchD_00c92568_default:
  if (*(char *)((int)param_1 + 0x142) != '\0') {
    piVar13 = param_1 + 0x46;
    FUN_016af0b0(piVar13);
    piVar3 = (int *)*piVar13;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar13);
    }
  }
  iVar7 = param_1[0x42];
  iVar4 = 0x13b;
  *(undefined1 *)((int)param_1 + 0x142) = 0;
  if (-1 < iVar7) {
    bVar2 = 0;
    if (iVar7 != 0) {
      bVar2 = *(byte *)((int)param_1 + 0x143);
    }
    if (iVar7 != 0 && (bVar2 & 1) != 0) {
      thunk_FUN_016d3fb4(param_1[0x43]);
    }
  }
LAB_00c92b0c:
  *(undefined1 *)((int)param_1 + iVar4 + 8) = 0;
switchD_00c924b0_caseD_1:
  *(undefined1 *)(param_1 + 0x27) = 0;
  cVar1 = *(char *)((int)param_1 + 0x99);
joined_r0x00c92b28:
  if (cVar1 != '\0') {
    piVar13 = param_1 + 0x1c;
    FUN_016af0b0(piVar13);
    piVar3 = (int *)*piVar13;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar13);
    }
  }
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  if (((*(char *)((int)param_1 + 0x9a) != '\0') && (-0x7ffffffe < param_1[0x18])) &&
     (param_1[0x18] != 0)) {
    thunk_FUN_016d3fb4(param_1[0x19]);
  }
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
LAB_014b47f4:
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar7 - (int)param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar15);
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
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar17 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar17);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

