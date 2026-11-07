// FUN_00d2d7d8 @ 00d2d7d8 size=1692 calls_out=20 calls_in=2
// strings: 

void FUN_00d2d7d8(int *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int unaff_r6;
  int *piVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    bVar17 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar17 = unaff_r6 == 0;
    }
    if (!bVar17) {
      puVar9 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar9;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r6);
      }
      if (puVar9[1] != 0) {
        if (unaff_r6 == 0) {
          return;
        }
        iVar6 = FUN_016d3bc8();
        uVar5 = *(byte *)(unaff_r6 + -3) & 0x1f;
        if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
        iVar15 = *(int *)(iVar6 + 8) + 0x10;
        iVar12 = iVar7 * uVar5 + iVar7 + -4;
        iVar7 = iVar15 + iVar12;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar11 = *(uint *)(iVar7 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if ((uint)(iVar7 - unaff_r6) < uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar2 = *(byte *)(iVar6 + 0x14);
        uVar11 = 1 << uVar5;
        *(undefined1 *)(unaff_r6 + -3) = 0xff;
        *(undefined2 *)(unaff_r6 + -2) = 0;
        do {
          uVar13 = *(uint *)(iVar6 + 0x10);
          uVar8 = *(uint *)(iVar6 + 0xc) | uVar13;
          if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar6,uVar5);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar9 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar9;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar9 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar6 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar16 = (uint *)(iVar6 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar8 = *puVar16;
            if (uVar13 != uVar8) goto LAB_016d409c;
            bVar17 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar17);
          *puVar16 = uVar11 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar8) {
            return;
          }
        } while( true );
      }
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x30b] == '\x03') {
    FUN_00887914(param_1 + 0x304);
    return;
  }
  if ((char)param_1[0x30b] != '\0') {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x471)) {
  case 0:
    piVar3 = (int *)param_1[0x118];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d030dc(param_1[0x118]);
    }
    piVar3 = (int *)param_1[0x119];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(param_1[0x119]);
    }
    piVar3 = (int *)param_1[0x11a];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(param_1[0x11a]);
    }
  default:
    goto switchD_00d2d820_caseD_1;
  case 3:
    if (param_1[0x11e] != 0) {
      FUN_00c81a4c(param_1[0x11e],param_1[0x11f],1);
    }
    goto LAB_00d2de18;
  case 4:
    cVar1 = (char)param_1[300];
    bVar17 = cVar1 == '\x03';
    if (bVar17) {
      cVar1 = *(char *)((int)param_1 + 0x48d);
    }
    if (bVar17 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x124);
      if (param_1[0x128] != 0) {
        (**(code **)(param_1[0x128] + 0xc))(param_1[0x129]);
      }
      *(undefined1 *)(param_1 + 0x123) = 0;
    }
    goto LAB_00d2ddc0;
  case 5:
    if (((char)param_1[0x121] == '\x03') && (param_1[0x11f] != 0)) {
      FUN_00c8204c(param_1[0x11f],param_1[0x120],1);
    }
    goto LAB_00d2dd9c;
  case 6:
    cVar1 = *(char *)((int)param_1 + 0x4e5);
    if (cVar1 == '\x05') {
      if (*(char *)((int)param_1 + 0x509) == '\x03') {
        cVar1 = *(char *)((int)param_1 + 0x4f9);
        if (cVar1 == '\x05') {
          puVar9 = (undefined4 *)param_1[0x140];
          iVar6 = param_1[0x13f];
          pcVar4 = (code *)*puVar9;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(iVar6);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(iVar6);
          }
          FUN_00c822ec(param_1[0x13c]);
        }
        else {
          if (cVar1 != '\x04') {
            iVar6 = 0x4f4;
            if (cVar1 == '\x03') goto LAB_00d2dc7c;
            break;
          }
          if (param_1[0x13f] != 0) {
            FUN_00c8204c(param_1[0x13f],param_1[0x140],1);
          }
        }
LAB_00d2dcf0:
        FUN_00c822ec(param_1[0x13a]);
      }
    }
    else if (cVar1 == '\x04') {
      FUN_00d2e248(param_1 + 0x13e);
      if (param_1[0x13b] != 0) {
        thunk_FUN_016d3fb4(param_1[0x13c]);
      }
    }
    else {
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)((int)param_1 + 0x501);
      }
      if (bVar17 && cVar1 == '\x03') {
        if (*(char *)((int)param_1 + 0x4f2) == '\x03') {
          iVar6 = 0x4ec;
LAB_00d2dc7c:
          piVar3 = (int *)((int)param_1 + iVar6 + 8);
          iVar6 = *piVar3;
          if (iVar6 != 0) {
            FUN_00c8204c(iVar6,piVar3[1],1);
          }
        }
        else if (*(char *)((int)param_1 + 0x4f2) == '\x04') {
          if (param_1[0x13d] != 0) {
            FUN_00c8204c(param_1[0x13d],param_1[0x13e],1);
          }
          goto LAB_00d2dcf0;
        }
      }
    }
    break;
  case 7:
    cVar1 = (char)param_1[0x125];
    if (cVar1 == '\x04') {
      FUN_00d2e248(param_1 + 0x128);
    }
    else {
      bVar17 = cVar1 == '\x03';
      if (bVar17) {
        cVar1 = *(char *)((int)param_1 + 0x4b1);
      }
      if (bVar17 && cVar1 == '\x03') {
        if (*(char *)((int)param_1 + 0x4a2) == '\x04') {
          if (param_1[0x129] != 0) {
            FUN_00c8204c(param_1[0x129],param_1[0x12a],1);
          }
          FUN_00c822ec(param_1[0x126]);
        }
        else if ((*(char *)((int)param_1 + 0x4a2) == '\x03') && (param_1[0x129] != 0)) {
          FUN_00c8204c(param_1[0x129],param_1[0x12a],1);
        }
      }
    }
    break;
  case 8:
    if (param_1[0x11e] != 0) {
      FUN_00c81a4c(param_1[0x11e],param_1[0x11f],1);
    }
    goto LAB_00d2dd60;
  case 9:
    if (param_1[0x11e] != 0) {
      FUN_00c8204c(param_1[0x11e],param_1[0x11f],1);
    }
    goto LAB_00d2dd4c;
  case 10:
    switch((char)param_1[0x134]) {
    case '\x03':
      if (param_1[0x136] != 0) {
        FUN_00c81a4c(param_1[0x136],param_1[0x137],1);
      }
      break;
    case '\x04':
      if (param_1[0x136] != 0) {
        FUN_00c81a4c(param_1[0x136],param_1[0x137],1);
      }
      goto LAB_00d2dd30;
    case '\x05':
      if ((char)param_1[0x171] == '\x03') {
        if ((char)param_1[0x151] == '\x04') {
          FUN_00cea648(param_1 + 0x156);
          FUN_00a07b4c(param_1 + 0x158);
          *(undefined2 *)((int)param_1 + 0x545) = 0;
          *(undefined1 *)(param_1 + 0x152) = 0;
LAB_00d2dd20:
          *(undefined1 *)((int)param_1 + 0x547) = 0;
        }
        else if ((char)param_1[0x151] == '\x03') {
          if (param_1[0x154] != 0) {
            FUN_00c8204c(param_1[0x154],param_1[0x155],1);
          }
          goto LAB_00d2dd20;
        }
        *(undefined1 *)((int)param_1 + 0x5c5) = 0;
      }
      else if ((char)param_1[0x171] == '\0') {
        FUN_00c822ec(param_1[0x16f]);
      }
LAB_00d2dd30:
      *(undefined1 *)((int)param_1 + 0x4d1) = 0;
      break;
    case '\x06':
      switch((char)param_1[0x146]) {
      case '\x03':
        FUN_00d28498(param_1 + 0x148);
        break;
      case '\x04':
        cVar1 = (char)param_1[0x167];
        bVar17 = cVar1 == '\x03';
        if (bVar17) {
          cVar1 = *(char *)((int)param_1 + 0x599);
        }
        if (bVar17 && cVar1 == '\x03') {
          FUN_00accc50(param_1 + 0x14b);
        }
        piVar3 = (int *)param_1[0x149];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar17 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar17);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f1030(param_1[0x149]);
        }
        break;
      case '\x05':
        FUN_00a07b4c(param_1 + 0x148);
        break;
      case '\x06':
        FUN_00d2e5ac(param_1 + 0x148);
      }
    }
switchD_00d2d820_caseD_b:
    if (param_1[0x14] != 0) {
      thunk_FUN_016d3fb4(param_1[0x15]);
    }
LAB_00d2dd4c:
    if (*(char *)((int)param_1 + 0x46f) != '\0') {
      FUN_00c822ec(param_1[0x117]);
    }
LAB_00d2dd60:
    *(undefined1 *)((int)param_1 + 0x46f) = 0;
    break;
  case 0xb:
    goto switchD_00d2d820_caseD_b;
  }
  FUN_00ac8e24(param_1 + 0x5a);
  if ((param_1[0xee] != 7 || param_1[0xef] != 0) && ((param_1[0x108] & 0x7fffffffU) != 0)) {
    thunk_FUN_016d3fb4(param_1[0x109]);
  }
LAB_00d2dd9c:
  uVar5 = param_1[0x1e];
  bVar17 = uVar5 != 2;
  if (bVar17) {
    uVar5 = (uint)*(byte *)(param_1 + 0x11c);
  }
  if (bVar17 && uVar5 != 0) {
    FUN_00ac8e24();
  }
  *(undefined1 *)(param_1 + 0x11c) = 0;
LAB_00d2ddc0:
  piVar14 = (int *)param_1[0xec];
  piVar3 = piVar14 + 0x65;
  do {
    iVar6 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    FUN_0163b708(piVar14 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar14;
    bVar17 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar17);
  *piVar14 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(param_1[0xec]);
  }
LAB_00d2de18:
  piVar3 = (int *)param_1[0x10e];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(param_1[0x10e]);
  }
  piVar3 = (int *)param_1[0x10d];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(param_1[0x10d]);
  }
  piVar3 = (int *)param_1[0x10c];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar17 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar17);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(param_1[0x10c]);
  }
switchD_00d2d820_caseD_1:
  FUN_00ac9c30(param_1 + 0x308);
  return;
}

