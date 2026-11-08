// FUN_00d2ffb8 @ 00d2ffb8 size=3668 calls_out=34 calls_in=2
// strings: 

void FUN_00d2ffb8(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  puVar11 = (undefined4 *)(param_1 + 0x3434);
  cVar1 = *(char *)(param_1 + 0x3447);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_00887914(param_1 + 0x3448);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uVar12 = *(undefined4 *)(param_1 + 0x34a8);
      puVar13 = *(undefined4 **)(param_1 + 0x34ac);
      pcVar5 = (code *)*puVar13;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      FUN_00a07b4c(param_1 + 0x3458);
      iVar3 = *(int *)(param_1 + 0x3454);
      if (iVar3 != 0) {
        piVar8 = (int *)(iVar3 + 0x14);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar6 + -1;
        DataMemoryBarrier(0xb);
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
            puVar7 = (uint *)(iVar3 + 0x10);
            DataMemoryBarrier(0xb);
            do {
              bVar14 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar14);
            *puVar7 = *puVar7 & 0x7fffffff;
            DataMemoryBarrier(0xb);
          }
          puVar7 = (uint *)(iVar3 + 0x20);
          DataMemoryBarrier(0xb);
          do {
            uVar9 = *puVar7;
            bVar14 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar14);
          *puVar7 = uVar9 | 2;
          DataMemoryBarrier(0xb);
          if (uVar9 == 0) {
            iVar6 = *(int *)(iVar3 + 0x18);
            *(undefined4 *)(iVar3 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar14 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar14);
            *puVar7 = *puVar7 & 0xfffffffd;
            if (iVar6 != 0) {
              (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x1c));
            }
          }
        }
        piVar8 = *(int **)(param_1 + 0x3454);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*(undefined4 *)(param_1 + 0x3454));
        }
      }
      *(undefined2 *)(param_1 + 0x3444) = 0;
    }
    piVar10 = (int *)*puVar11;
    DataMemoryBarrier(0xb);
    piVar8 = piVar10 + 0x21;
    do {
      iVar3 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      FUN_00c747ec(piVar10 + 8);
      puVar7 = (uint *)(piVar10 + 0x12);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar14 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar14);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar3 = piVar10[0x10];
        piVar10[0x10] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar14 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar14);
        *puVar7 = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(piVar10[0x11]);
        }
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar10;
      bVar14 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar14);
    *piVar10 = iVar3 + -1;
    goto LAB_00d30ebc;
  }
  cVar1 = *(char *)(param_1 + 0x63c);
  if (cVar1 == '\0') {
    FUN_00d2eabc(param_1);
    piVar8 = *(int **)(param_1 + 0x638);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar3 + -1;
    goto LAB_00d30df0;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_00cefb4c(param_1 + 0x640);
      goto switchD_00d30230_caseD_1;
    }
    goto LAB_00d30e04;
  }
  bVar2 = *(byte *)(param_1 + 0x12c8);
  if (6 < bVar2) goto switchD_00d30230_caseD_1;
  iVar3 = param_1 + 0x640;
  switch(bVar2) {
  case 0:
    goto switchD_00d30230_caseD_0;
  default:
    goto switchD_00d30230_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0x1344);
    bVar14 = cVar1 == '\x03';
    if (bVar14) {
      cVar1 = *(char *)(param_1 + 0x1341);
    }
    if (bVar14 && cVar1 == '\x03') {
      FUN_00accc50(param_1 + 0x12d4);
    }
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x1338);
    bVar14 = cVar1 == '\x03';
    if (bVar14) {
      cVar1 = *(char *)(param_1 + 0x132c);
    }
    if (bVar14 && cVar1 == '\x03') {
      FUN_00a07b4c(param_1 + 0x12d0);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x12d9) != '\x04') {
      if (*(char *)(param_1 + 0x12d9) == '\x03') {
        FUN_00d316b0(param_1 + 0x12e0);
      }
      break;
    }
    if (8 < *(byte *)(param_1 + 0x1928)) goto switchD_00d30358_caseD_1;
    switch(*(byte *)(param_1 + 0x1928)) {
    case 0:
      FUN_00ad1288(param_1 + 0x12e0);
    default:
      goto switchD_00d30358_caseD_1;
    case 3:
      goto switchD_00d30358_caseD_3;
    case 4:
      switch(*(undefined1 *)(param_1 + 0x1e04)) {
      case 3:
        if (*(char *)(param_1 + 0x1f00) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x1eec);
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0x1ee4);
          }
          if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1ed8) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x1ed8),*(undefined4 *)(param_1 + 0x1edc),1);
          }
        }
        goto LAB_00d30d90;
      case 4:
        if (*(char *)(param_1 + 0x2750) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x1fe4);
          if (cVar1 == '\x05') {
            FUN_00d31a9c(param_1 + 0x1fe8);
LAB_00d30d44:
            FUN_00ad1570(param_1 + 0x1f20);
          }
          else {
            if (cVar1 == '\x04') {
              FUN_00d31a9c(param_1 + 0x2040);
              *(undefined1 *)(param_1 + 0x1fe5) = 0;
              goto LAB_00d30d44;
            }
            if (cVar1 != '\x03') goto LAB_00d30d7c;
            FUN_00d31b4c(param_1 + 0x1fe8);
          }
          FUN_00c48cbc(param_1 + 0x1fd8);
          FUN_00ce1754(*(undefined4 *)(param_1 + 0x1fd0),*(undefined4 *)(param_1 + 0x1fd4));
          if (*(int *)(param_1 + 0x1fcc) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1fd0));
          }
        }
        goto LAB_00d30d7c;
      case 5:
        FUN_00d31a9c(param_1 + 0x1e18);
        FUN_00c48cbc(param_1 + 0x1e08);
        break;
      case 6:
        FUN_00d31c28(param_1 + 0x1e08);
        break;
      default:
        goto switchD_00d30574_default;
      }
      if ((*(char *)(param_1 + 0x1e05) != '\0') &&
         (FUN_00ce22d0(*(undefined4 *)(param_1 + 0x1dfc),*(undefined4 *)(param_1 + 0x1e00)),
         *(int *)(param_1 + 0x1df8) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1dfc));
      }
      *(undefined1 *)(param_1 + 0x1e05) = 0;
LAB_00d30d7c:
      FUN_00c5b260(param_1 + 0x1dc0);
      FUN_00ad19f0(param_1 + 0x1d58);
LAB_00d30d90:
      FUN_00ad1288(param_1 + 0x1a38);
switchD_00d30574_default:
      FUN_00c48708(param_1 + 0x1974);
      goto switchD_00d30500_caseD_1;
    case 5:
      iVar3 = 0x44;
      switch(*(undefined1 *)(param_1 + 0x1db0)) {
      case 0:
        goto switchD_00d305dc_caseD_0;
      default:
        goto switchD_00d30500_caseD_1;
      case 3:
        iVar3 = 0xb4;
        FUN_00d31e44(param_1 + 0x1db8);
        goto switchD_00d305dc_caseD_0;
      case 4:
        if (*(char *)(param_1 + 0x1eb0) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x1e9c);
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0x1e94);
          }
          if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1e88) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x1e88),*(undefined4 *)(param_1 + 0x1e8c),1);
          }
        }
        goto LAB_00d307e4;
      case 5:
        FUN_00d31a9c(param_1 + 0x1db8);
        break;
      case 6:
        FUN_00d31b4c(param_1 + 0x1db8);
        break;
      case 7:
        FUN_00d31a9c(param_1 + 0x1db8);
        FUN_00ad1570(param_1 + 0x2490);
      }
      FUN_00c48cbc(param_1 + 0x1d9c);
      FUN_00ce22d0(*(undefined4 *)(param_1 + 0x1d94),*(undefined4 *)(param_1 + 0x1d98));
      if (*(int *)(param_1 + 0x1d90) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1d94));
      }
LAB_00d307e4:
      if (*(char *)(param_1 + 0x1db1) != '\0') {
        FUN_00ad1288(param_1 + 0x1a10);
      }
      iVar3 = 0xb4;
      *(undefined1 *)(param_1 + 0x1db1) = 0;
switchD_00d305dc_caseD_0:
      FUN_00c48708(param_1 + 0x1930 + iVar3);
      goto switchD_00d30500_caseD_1;
    case 6:
      cVar1 = *(char *)(param_1 + 0x1980);
      if (cVar1 == '\0') {
        FUN_00ce2824(*(undefined4 *)(param_1 + 0x1964),*(undefined4 *)(param_1 + 0x1968));
        iVar3 = 0x698;
      }
      else {
        if (cVar1 == '\x03') {
          if (*(char *)(param_1 + 0x1a80) == '\x03') {
            cVar1 = *(char *)(param_1 + 0x1a6c);
            bVar14 = cVar1 == '\x03';
            if (bVar14) {
              cVar1 = *(char *)(param_1 + 0x1a64);
            }
            if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1a58) != 0)) {
              FUN_00c81a4c(*(int *)(param_1 + 0x1a58),*(undefined4 *)(param_1 + 0x1a5c),1);
            }
          }
        }
        else {
          if (cVar1 != '\x04') goto switchD_00d30500_caseD_1;
          FUN_00d31b4c(param_1 + 0x1998);
          FUN_00c48cbc(param_1 + 0x1988);
        }
        FUN_00ce2824(*(undefined4 *)(param_1 + 0x1978),*(undefined4 *)(param_1 + 0x197c));
        iVar3 = 0x6ac;
      }
      pbVar4 = (byte *)(param_1 + 0x12c8) + iVar3;
      if (*(int *)pbVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(pbVar4 + 4));
      }
      goto switchD_00d30500_caseD_1;
    case 7:
      switch(*(undefined1 *)(param_1 + 0x251b)) {
      case 3:
        FUN_00d31e44(param_1 + 0x2520);
        break;
      case 4:
        if (*(char *)(param_1 + 0x2618) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x2604);
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0x25fc);
          }
          if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x25f0) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x25f0),*(undefined4 *)(param_1 + 0x25f4),1);
          }
        }
        break;
      case 5:
        if (*(char *)(param_1 + 0x2630) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x261c);
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0x2614);
          }
          if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x2608) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x2608),*(undefined4 *)(param_1 + 0x260c),1);
          }
        }
        goto LAB_00d30a3c;
      case 6:
        FUN_00d31a9c(param_1 + 0x2520);
        goto LAB_00d30a3c;
      case 7:
        FUN_00d31b4c(param_1 + 0x2520);
        goto LAB_00d30a28;
      case 8:
        goto switchD_00d30434_caseD_8;
      case 9:
        FUN_00a07b4c(param_1 + 0x2528);
        goto LAB_00d309f8;
      case 10:
        FUN_00d31b4c(param_1 + 0x2d78);
LAB_00d309f8:
        FUN_00d3205c(param_1 + 0x24f0);
        *(undefined1 *)(param_1 + 0x2517) = 0;
        *(undefined1 *)(param_1 + 0x2513) = 0;
switchD_00d30434_caseD_8:
        if (*(char *)(param_1 + 0x2516) != '\0') {
          FUN_00ad1570(param_1 + 0x2538);
        }
LAB_00d30a28:
        *(undefined1 *)(param_1 + 0x2516) = 0;
        FUN_00c48cbc(param_1 + 0x24e4);
LAB_00d30a3c:
        if (*(char *)(param_1 + 0x2514) != '\0') {
          FUN_00c48cbc(param_1 + 0x24b0);
        }
        *(undefined1 *)(param_1 + 0x2514) = 0;
LAB_00d30aac:
        *(undefined1 *)(param_1 + 0x251a) = 0;
        *(undefined2 *)(param_1 + 0x2518) = 0;
        if (*(char *)(param_1 + 0x2515) != '\0') {
          FUN_00ad1f4c(param_1 + 0x1ef0);
        }
        *(undefined1 *)(param_1 + 0x2515) = 0;
        break;
      case 0xb:
        FUN_00d31b4c(param_1 + 0x2520);
        goto LAB_00d30a7c;
      case 0xc:
        FUN_00d31a9c(param_1 + 0x2520);
        goto LAB_00d30a7c;
      case 0xd:
        FUN_00d31c28(param_1 + 0x2520);
LAB_00d30a7c:
        FUN_00ad1edc(param_1 + 0x1c20);
        *(undefined1 *)(param_1 + 0x2511) = 0;
        if (*(char *)(param_1 + 0x2512) != '\0') {
          FUN_00c48cbc(param_1 + 0x24f8);
        }
        *(undefined1 *)(param_1 + 0x2512) = 0;
        goto LAB_00d30aac;
      }
      if (*(int *)(param_1 + 0x1950) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1954));
      }
      goto switchD_00d30500_caseD_1;
    case 8:
      switch(*(undefined1 *)(param_1 + 0x2495)) {
      case 0:
        FUN_00c48708(param_1 + 0x1c34);
        FUN_00ad1edc(param_1 + 0x1930);
      default:
        goto switchD_00d30500_caseD_1;
      case 3:
        FUN_00d31e44(param_1 + 0x2758);
        goto LAB_00d30cc0;
      case 4:
        goto switchD_00d30500_caseD_4;
      case 5:
        if (*(char *)(param_1 + 0x25b8) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x25a4);
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0x259c);
          }
          if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x2590) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x2590),*(undefined4 *)(param_1 + 0x2594),1);
          }
        }
        break;
      case 6:
        FUN_00d31c28(param_1 + 0x24a8);
        break;
      case 7:
        if (*(char *)(param_1 + 0x25b8) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x25a4);
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0x259c);
          }
          if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x2590) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x2590),*(undefined4 *)(param_1 + 0x2594),1);
          }
        }
        break;
      case 8:
        FUN_00d31b4c(param_1 + 0x24a8);
        goto LAB_00d30c3c;
      case 9:
      case 10:
      case 0xb:
        goto switchD_00d30500_caseD_9;
      case 0xc:
        piVar8 = *(int **)(param_1 + 0x24a8);
        if (*piVar8 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar14 = (bool)hasExclusiveAccess(piVar8);
          if (bVar14) {
            *piVar8 = 0x84;
            goto switchD_00d30500_caseD_9;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar8[2] + 0x10))();
        goto switchD_00d30500_caseD_9;
      case 0xd:
        FUN_00d31a9c(param_1 + 0x24a8);
switchD_00d30500_caseD_9:
        if (*(char *)(param_1 + 0x249c) != '\0') {
          FUN_00ad2078(param_1 + 0x2400);
        }
        *(undefined1 *)(param_1 + 0x249c) = 0;
        if (*(int *)(param_1 + 0x2370) == 2 && *(int *)(param_1 + 0x2374) == 0) {
          if (*(char *)(param_1 + 0x249b) != '\0') {
            FUN_00ad20e4(param_1 + 0x2378);
          }
        }
        else {
          FUN_00ad1570();
        }
        *(undefined1 *)(param_1 + 0x249d) = 0;
LAB_00d30c3c:
        *(undefined1 *)(param_1 + 0x249b) = 0;
        *(undefined1 *)(param_1 + 0x249d) = 0;
      }
      FUN_00c541f4(param_1 + 0x22f0);
      if (*(int *)(param_1 + 0x2348) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x234c));
      }
      *(undefined1 *)(param_1 + 0x24a2) = 0;
switchD_00d30500_caseD_4:
      if (*(int *)(param_1 + 0x2484) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2488));
      }
      if (*(char *)(param_1 + 0x249e) != '\0') {
        FUN_00c48cbc(param_1 + 0x246c);
      }
      *(undefined1 *)(param_1 + 0x249e) = 0;
      if (*(char *)(param_1 + 0x249f) != '\0') {
        FUN_00ad2198(param_1 + 0x1cb0);
      }
      *(undefined1 *)(param_1 + 0x249f) = 0;
LAB_00d30cc0:
      FUN_00c48cbc(param_1 + 0x2460);
      if (*(char *)(param_1 + 0x24a0) != '\0') {
        FUN_00ad1edc(param_1 + 0x24a8);
      }
      iVar3 = 0x11c1;
      *(undefined1 *)(param_1 + 0x24a0) = 0;
      FUN_00c48708(param_1 + 0x1c8c);
      goto LAB_00d30cfc;
    }
  case 6:
    cVar1 = *(char *)(param_1 + 0x1320);
    if (cVar1 == '\x05') {
      FUN_00a07b4c(param_1 + 0x1348);
LAB_00d303fc:
      *(undefined1 *)(param_1 + 0x1321) = 0;
LAB_00d30404:
      *(undefined1 *)(param_1 + 0x1322) = 0;
    }
    else {
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x134c) == '\x03') {
          if (*(int *)(param_1 + 0x1344) != 0) {
            FUN_00c81a4c(*(int *)(param_1 + 0x1344),*(undefined4 *)(param_1 + 0x1348),1);
          }
          if (*(int *)(param_1 + 0x1338) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x133c));
          }
          *(undefined1 *)(param_1 + 0x134d) = 0;
        }
        else if ((*(char *)(param_1 + 0x134c) == '\0') && (*(int *)(param_1 + 0x1328) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x132c));
        }
        goto LAB_00d303fc;
      }
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x13a5) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x139c);
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0x1399);
          }
          if (bVar14 && cVar1 == '\x03') {
            FUN_00accc50(param_1 + 0x132c);
          }
        }
        goto LAB_00d30404;
      }
    }
    FUN_00ad20e4(param_1 + 0x13a8);
  }
  goto LAB_00d30dc4;
switchD_00d30358_caseD_3:
  switch(*(undefined1 *)(param_1 + 0x1d7e)) {
  case 3:
    if (*(char *)(param_1 + 0x1e78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1e64);
      bVar14 = cVar1 == '\x03';
      if (bVar14) {
        cVar1 = *(char *)(param_1 + 0x1e5c);
      }
      if ((bVar14 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1e50) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0x1e50),*(undefined4 *)(param_1 + 0x1e54),1);
      }
    }
    goto switchD_00d30500_caseD_1;
  case 4:
    if (*(char *)(param_1 + 0x1e71) == '\x03') {
      if (*(char *)(param_1 + 0x1e35) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x1e1c);
        bVar14 = cVar1 == '\x03';
        if (bVar14) {
          cVar1 = *(char *)(param_1 + 0x1e19);
        }
        if (bVar14 && cVar1 == '\x03') {
          FUN_00accc50(param_1 + 0x1dac);
        }
      }
      iVar6 = *(int *)(param_1 + 0x1e58);
      iVar3 = 0x1e5c;
LAB_00d308b8:
      if (iVar6 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar3));
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x1e69) == '\x03') {
      if (*(char *)(param_1 + 0x1e25) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x1e0c);
        bVar14 = cVar1 == '\x03';
        if (bVar14) {
          cVar1 = *(char *)(param_1 + 0x1e09);
        }
        if (bVar14 && cVar1 == '\x03') {
          FUN_00accc50(param_1 + 0x1d9c);
        }
      }
      iVar6 = *(int *)(param_1 + 0x1e50);
      iVar3 = 0x1e54;
      goto LAB_00d308b8;
    }
    break;
  case 6:
    FUN_00d31a9c(param_1 + 0x1d80);
    goto LAB_00d308ec;
  case 7:
    FUN_00d31b4c(param_1 + 0x1d80);
    goto LAB_00d308ec;
  case 8:
    FUN_00d31a9c(param_1 + 0x1d80);
    goto LAB_00d308e0;
  case 9:
    FUN_00d31a9c(param_1 + 0x1d80);
LAB_00d308e0:
    FUN_00ad1570(param_1 + 0x1958);
LAB_00d308ec:
    FUN_00c48cbc(param_1 + 0x1d64);
    break;
  case 10:
    FUN_00d31b4c(param_1 + 0x1d90);
    FUN_00c48cbc(param_1 + 0x1d80);
    break;
  default:
    goto switchD_00d30500_caseD_1;
  }
  bVar14 = *(char *)(param_1 + 0x1d7c) != '\0';
  iVar3 = 0;
  if (bVar14) {
    iVar3 = *(int *)(param_1 + 0x1948);
  }
  if (bVar14 && iVar3 != 0) {
    FUN_00c48cbc(param_1 + 0x194c);
  }
  iVar3 = 0xa9d;
  *(undefined1 *)(param_1 + 0x1d7c) = 0;
  FUN_00ad16b8(param_1 + 0x19f8);
LAB_00d30cfc:
  *(undefined1 *)(param_1 + 0x12e0 + iVar3) = 0;
switchD_00d30500_caseD_1:
  *(undefined4 *)(param_1 + 0x1929) = 0;
  *(undefined2 *)(param_1 + 0x192d) = 0;
switchD_00d30358_caseD_1:
  *(undefined1 *)(param_1 + 0x12d8) = 0;
LAB_00d30dc4:
  iVar3 = param_1 + 0xc78;
switchD_00d30230_caseD_0:
  FUN_00d2eabc(iVar3);
switchD_00d30230_caseD_1:
  piVar8 = *(int **)(param_1 + 0x638);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar8;
    bVar14 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar14);
  *piVar8 = iVar3 + -1;
LAB_00d30df0:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x638));
  }
LAB_00d30e04:
  FUN_00ac9c30(param_1 + 0x3438);
  piVar10 = (int *)*puVar11;
  DataMemoryBarrier(0xb);
  piVar8 = piVar10 + 0x21;
  do {
    iVar3 = *piVar8;
    bVar14 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar14);
  *piVar8 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    FUN_00c747ec(piVar10 + 8);
    puVar7 = (uint *)(piVar10 + 0x12);
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar7;
      bVar14 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar14);
    *puVar7 = uVar9 | 2;
    DataMemoryBarrier(0xb);
    if (uVar9 == 0) {
      iVar3 = piVar10[0x10];
      piVar10[0x10] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar14 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar14);
      *puVar7 = 0;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(piVar10[0x11]);
      }
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar10;
    bVar14 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar14);
  *piVar10 = iVar3 + -1;
LAB_00d30ebc:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d064cc(*puVar11);
    return;
  }
  return;
}

