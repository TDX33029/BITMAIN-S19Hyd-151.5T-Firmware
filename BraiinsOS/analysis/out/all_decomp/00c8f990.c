// FUN_00c8f990 @ 00c8f990 size=3728 calls_out=35 calls_in=2
// strings: 

void FUN_00c8f990(int param_1)

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
  undefined4 uVar11;
  undefined4 *puVar12;
  bool bVar13;
  
  piVar10 = (int *)(param_1 + 0x3434);
  cVar1 = *(char *)(param_1 + 0x3447);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      FUN_00887914(param_1 + 0x3448);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x34a8);
      puVar12 = *(undefined4 **)(param_1 + 0x34ac);
      pcVar5 = (code *)*puVar12;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar11);
      }
      if (puVar12[1] != 0) {
        thunk_FUN_016d3fb4(uVar11);
      }
      FUN_00a07b4c(param_1 + 0x3458);
      iVar3 = *(int *)(param_1 + 0x3454);
      if (iVar3 != 0) {
        piVar8 = (int *)(iVar3 + 0x14);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar13 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar13);
        *piVar8 = iVar6 + -1;
        DataMemoryBarrier(0xb);
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
            puVar7 = (uint *)(iVar3 + 0x10);
            DataMemoryBarrier(0xb);
            do {
              bVar13 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar13);
            *puVar7 = *puVar7 & 0x7fffffff;
            DataMemoryBarrier(0xb);
          }
          puVar7 = (uint *)(iVar3 + 0x20);
          DataMemoryBarrier(0xb);
          do {
            uVar9 = *puVar7;
            bVar13 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar13);
          *puVar7 = uVar9 | 2;
          DataMemoryBarrier(0xb);
          if (uVar9 == 0) {
            iVar6 = *(int *)(iVar3 + 0x18);
            *(undefined4 *)(iVar3 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar13 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar13);
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
          bVar13 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar13);
        *piVar8 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*(undefined4 *)(param_1 + 0x3454));
        }
      }
      *(undefined2 *)(param_1 + 0x3444) = 0;
    }
    iVar3 = *piVar10;
    DataMemoryBarrier(0xb);
    piVar8 = (int *)(iVar3 + 0x84);
    do {
      iVar6 = *piVar8;
      bVar13 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar13);
    *piVar8 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      FUN_00c747ec(iVar3 + 0x20);
      puVar7 = (uint *)(iVar3 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar13 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar13);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar6 = *(int *)(iVar3 + 0x40);
        *(undefined4 *)(iVar3 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar13 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar13);
        *puVar7 = 0;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x44));
        }
      }
    }
    piVar8 = (int *)*piVar10;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar8;
      bVar13 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar13);
    *piVar8 = iVar3 + -1;
    goto LAB_00c908d0;
  }
  cVar1 = *(char *)(param_1 + 0x63c);
  if (cVar1 == '\0') {
    FUN_00acd2b8(param_1);
    piVar8 = *(int **)(param_1 + 0x638);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar8;
      bVar13 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar13);
    *piVar8 = iVar3 + -1;
    goto LAB_00c90800;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_00654988(param_1 + 0x640);
      goto switchD_00c8fc0c_caseD_1;
    }
    goto LAB_00c90814;
  }
  bVar2 = *(byte *)(param_1 + 0x12c8);
  if (6 < bVar2) goto switchD_00c8fc0c_caseD_1;
  iVar3 = param_1 + 0x640;
  switch(bVar2) {
  case 0:
    goto switchD_00c8fc0c_caseD_0;
  default:
    goto switchD_00c8fc0c_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0x1344);
    bVar13 = cVar1 == '\x03';
    if (bVar13) {
      cVar1 = *(char *)(param_1 + 0x1341);
    }
    if (bVar13 && cVar1 == '\x03') {
      FUN_00c8315c(param_1 + 0x12d4);
    }
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x1338);
    bVar13 = cVar1 == '\x03';
    if (bVar13) {
      cVar1 = *(char *)(param_1 + 0x132c);
    }
    if (bVar13 && cVar1 == '\x03') {
      FUN_00a07b4c(param_1 + 0x12d0);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x12d9) != '\x04') {
      if (*(char *)(param_1 + 0x12d9) == '\x03') {
        FUN_00c91110(param_1 + 0x12e0);
      }
      break;
    }
    if (8 < *(byte *)(param_1 + 0x1928)) goto switchD_00c8fd34_caseD_1;
    switch(*(byte *)(param_1 + 0x1928)) {
    case 0:
      FUN_00ad1288(param_1 + 0x12e0);
    default:
      goto switchD_00c8fd34_caseD_1;
    case 3:
      goto switchD_00c8fd34_caseD_3;
    case 4:
      switch(*(undefined1 *)(param_1 + 0x1e04)) {
      case 3:
        if (*(char *)(param_1 + 0x1f00) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x1eec);
          bVar13 = cVar1 == '\x03';
          if (bVar13) {
            cVar1 = *(char *)(param_1 + 0x1ee4);
          }
          if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1ed8) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x1ed8),*(undefined4 *)(param_1 + 0x1edc),1);
          }
        }
        goto LAB_00c907a0;
      case 4:
        if (*(char *)(param_1 + 0x2750) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x1fe4);
          if (cVar1 == '\x05') {
            FUN_00c91504(param_1 + 0x1fe8);
LAB_00c90754:
            FUN_00ad1570(param_1 + 0x1f20);
          }
          else {
            if (cVar1 == '\x04') {
              FUN_00c91504(param_1 + 0x2040);
              *(undefined1 *)(param_1 + 0x1fe5) = 0;
              goto LAB_00c90754;
            }
            if (cVar1 != '\x03') goto LAB_00c9078c;
            FUN_00c915b4(param_1 + 0x1fe8);
          }
          FUN_00c48cbc(param_1 + 0x1fd8);
          FUN_00ce1754(*(undefined4 *)(param_1 + 0x1fd0),*(undefined4 *)(param_1 + 0x1fd4));
          if (*(int *)(param_1 + 0x1fcc) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1fd0));
          }
        }
        goto LAB_00c9078c;
      case 5:
        FUN_00c91504(param_1 + 0x1e18);
        FUN_00c48cbc(param_1 + 0x1e08);
        break;
      case 6:
        FUN_00c91690(param_1 + 0x1e08);
        break;
      default:
        goto switchD_00c8ff50_default;
      }
      if ((*(char *)(param_1 + 0x1e05) != '\0') &&
         (FUN_00ce22d0(*(undefined4 *)(param_1 + 0x1dfc),*(undefined4 *)(param_1 + 0x1e00)),
         *(int *)(param_1 + 0x1df8) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1dfc));
      }
      *(undefined1 *)(param_1 + 0x1e05) = 0;
LAB_00c9078c:
      FUN_00c5b260(param_1 + 0x1dc0);
      FUN_00ad19f0(param_1 + 0x1d58);
LAB_00c907a0:
      FUN_00ad1288(param_1 + 0x1a38);
switchD_00c8ff50_default:
      FUN_00c48708(param_1 + 0x1974);
      goto switchD_00c8fedc_caseD_1;
    case 5:
      iVar3 = 0x44;
      switch(*(undefined1 *)(param_1 + 0x1db0)) {
      case 0:
        goto switchD_00c8ffb8_caseD_0;
      default:
        goto switchD_00c8fedc_caseD_1;
      case 3:
        iVar3 = 0xb4;
        FUN_00c918ac(param_1 + 0x1db8);
        goto switchD_00c8ffb8_caseD_0;
      case 4:
        if (*(char *)(param_1 + 0x1eb0) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x1e9c);
          bVar13 = cVar1 == '\x03';
          if (bVar13) {
            cVar1 = *(char *)(param_1 + 0x1e94);
          }
          if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1e88) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x1e88),*(undefined4 *)(param_1 + 0x1e8c),1);
          }
        }
        goto LAB_00c901c0;
      case 5:
        FUN_00c91504(param_1 + 0x1db8);
        break;
      case 6:
        FUN_00c915b4(param_1 + 0x1db8);
        break;
      case 7:
        FUN_00c91504(param_1 + 0x1db8);
        FUN_00ad1570(param_1 + 0x2490);
      }
      FUN_00c48cbc(param_1 + 0x1d9c);
      FUN_00ce22d0(*(undefined4 *)(param_1 + 0x1d94),*(undefined4 *)(param_1 + 0x1d98));
      if (*(int *)(param_1 + 0x1d90) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1d94));
      }
LAB_00c901c0:
      if (*(char *)(param_1 + 0x1db1) != '\0') {
        FUN_00ad1288(param_1 + 0x1a10);
      }
      iVar3 = 0xb4;
      *(undefined1 *)(param_1 + 0x1db1) = 0;
switchD_00c8ffb8_caseD_0:
      FUN_00c48708(param_1 + 0x1930 + iVar3);
      goto switchD_00c8fedc_caseD_1;
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
            bVar13 = cVar1 == '\x03';
            if (bVar13) {
              cVar1 = *(char *)(param_1 + 0x1a64);
            }
            if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1a58) != 0)) {
              FUN_00c81a4c(*(int *)(param_1 + 0x1a58),*(undefined4 *)(param_1 + 0x1a5c),1);
            }
          }
        }
        else {
          if (cVar1 != '\x04') goto switchD_00c8fedc_caseD_1;
          FUN_00c915b4(param_1 + 0x1998);
          FUN_00c48cbc(param_1 + 0x1988);
        }
        FUN_00ce2824(*(undefined4 *)(param_1 + 0x1978),*(undefined4 *)(param_1 + 0x197c));
        iVar3 = 0x6ac;
      }
      pbVar4 = (byte *)(param_1 + 0x12c8) + iVar3;
      if (*(int *)pbVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(pbVar4 + 4));
      }
      goto switchD_00c8fedc_caseD_1;
    case 7:
      switch(*(undefined1 *)(param_1 + 0x251b)) {
      case 3:
        FUN_00c918ac(param_1 + 0x2520);
        break;
      case 4:
        if (*(char *)(param_1 + 0x2618) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x2604);
          bVar13 = cVar1 == '\x03';
          if (bVar13) {
            cVar1 = *(char *)(param_1 + 0x25fc);
          }
          if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x25f0) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x25f0),*(undefined4 *)(param_1 + 0x25f4),1);
          }
        }
        break;
      case 5:
        if (*(char *)(param_1 + 0x2630) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x261c);
          bVar13 = cVar1 == '\x03';
          if (bVar13) {
            cVar1 = *(char *)(param_1 + 0x2614);
          }
          if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x2608) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x2608),*(undefined4 *)(param_1 + 0x260c),1);
          }
        }
        goto LAB_00c9044c;
      case 6:
        FUN_00c91504(param_1 + 0x2520);
        goto LAB_00c9044c;
      case 7:
        FUN_00c915b4(param_1 + 0x2520);
        goto LAB_00c90438;
      case 8:
        goto switchD_00c8fe10_caseD_8;
      case 9:
        FUN_00a07b4c(param_1 + 0x2528);
        goto LAB_00c903d4;
      case 10:
        FUN_00c915b4(param_1 + 0x2d78);
LAB_00c903d4:
        FUN_00d3e954(*(undefined4 *)(param_1 + 0x24f0));
        piVar8 = *(int **)(param_1 + 0x24f0);
        if (piVar8 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar8;
            bVar13 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar13);
          *piVar8 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d0554c(*(undefined4 *)(param_1 + 0x24f0));
          }
        }
        *(undefined1 *)(param_1 + 0x2517) = 0;
        *(undefined1 *)(param_1 + 0x2513) = 0;
switchD_00c8fe10_caseD_8:
        if (*(char *)(param_1 + 0x2516) != '\0') {
          FUN_00ad1570(param_1 + 0x2538);
        }
LAB_00c90438:
        *(undefined1 *)(param_1 + 0x2516) = 0;
        FUN_00c48cbc(param_1 + 0x24e4);
LAB_00c9044c:
        if (*(char *)(param_1 + 0x2514) != '\0') {
          FUN_00c48cbc(param_1 + 0x24b0);
        }
        *(undefined1 *)(param_1 + 0x2514) = 0;
LAB_00c904bc:
        *(undefined1 *)(param_1 + 0x251a) = 0;
        *(undefined2 *)(param_1 + 0x2518) = 0;
        if (*(char *)(param_1 + 0x2515) != '\0') {
          FUN_00ad1f4c(param_1 + 0x1ef0);
        }
        *(undefined1 *)(param_1 + 0x2515) = 0;
        break;
      case 0xb:
        FUN_00c915b4(param_1 + 0x2520);
        goto LAB_00c9048c;
      case 0xc:
        FUN_00c91504(param_1 + 0x2520);
        goto LAB_00c9048c;
      case 0xd:
        FUN_00c91690(param_1 + 0x2520);
LAB_00c9048c:
        FUN_00ad1edc(param_1 + 0x1c20);
        *(undefined1 *)(param_1 + 0x2511) = 0;
        if (*(char *)(param_1 + 0x2512) != '\0') {
          FUN_00c48cbc(param_1 + 0x24f8);
        }
        *(undefined1 *)(param_1 + 0x2512) = 0;
        goto LAB_00c904bc;
      }
      if (*(int *)(param_1 + 0x1950) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1954));
      }
      goto switchD_00c8fedc_caseD_1;
    case 8:
      switch(*(undefined1 *)(param_1 + 0x2495)) {
      case 0:
        FUN_00c48708(param_1 + 0x1c34);
        FUN_00ad1edc(param_1 + 0x1930);
      default:
        goto switchD_00c8fedc_caseD_1;
      case 3:
        FUN_00c918ac(param_1 + 0x2758);
        goto LAB_00c906d0;
      case 4:
        goto switchD_00c8fedc_caseD_4;
      case 5:
        if (*(char *)(param_1 + 0x25b8) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x25a4);
          bVar13 = cVar1 == '\x03';
          if (bVar13) {
            cVar1 = *(char *)(param_1 + 0x259c);
          }
          if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x2590) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x2590),*(undefined4 *)(param_1 + 0x2594),1);
          }
        }
        break;
      case 6:
        FUN_00c91690(param_1 + 0x24a8);
        break;
      case 7:
        if (*(char *)(param_1 + 0x25b8) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x25a4);
          bVar13 = cVar1 == '\x03';
          if (bVar13) {
            cVar1 = *(char *)(param_1 + 0x259c);
          }
          if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x2590) != 0)) {
            FUN_00c81a4c(*(int *)(param_1 + 0x2590),*(undefined4 *)(param_1 + 0x2594),1);
          }
        }
        break;
      case 8:
        FUN_00c915b4(param_1 + 0x24a8);
        goto LAB_00c9064c;
      case 9:
      case 10:
      case 0xb:
        goto switchD_00c8fedc_caseD_9;
      case 0xc:
        piVar8 = *(int **)(param_1 + 0x24a8);
        if (*piVar8 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar13 = (bool)hasExclusiveAccess(piVar8);
          if (bVar13) {
            *piVar8 = 0x84;
            goto switchD_00c8fedc_caseD_9;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar8[2] + 0x10))();
        goto switchD_00c8fedc_caseD_9;
      case 0xd:
        FUN_00c91504(param_1 + 0x24a8);
switchD_00c8fedc_caseD_9:
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
LAB_00c9064c:
        *(undefined1 *)(param_1 + 0x249b) = 0;
        *(undefined1 *)(param_1 + 0x249d) = 0;
      }
      FUN_00c541f4(param_1 + 0x22f0);
      if (*(int *)(param_1 + 0x2348) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x234c));
      }
      *(undefined1 *)(param_1 + 0x24a2) = 0;
switchD_00c8fedc_caseD_4:
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
LAB_00c906d0:
      FUN_00c48cbc(param_1 + 0x2460);
      if (*(char *)(param_1 + 0x24a0) != '\0') {
        FUN_00ad1edc(param_1 + 0x24a8);
      }
      iVar3 = 0x11c1;
      *(undefined1 *)(param_1 + 0x24a0) = 0;
      FUN_00c48708(param_1 + 0x1c8c);
      goto LAB_00c9070c;
    }
  case 6:
    cVar1 = *(char *)(param_1 + 0x1320);
    if (cVar1 == '\x05') {
      FUN_00a07b4c(param_1 + 0x1348);
LAB_00c8fdd8:
      *(undefined1 *)(param_1 + 0x1321) = 0;
LAB_00c8fde0:
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
        goto LAB_00c8fdd8;
      }
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x13a5) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x139c);
          bVar13 = cVar1 == '\x03';
          if (bVar13) {
            cVar1 = *(char *)(param_1 + 0x1399);
          }
          if (bVar13 && cVar1 == '\x03') {
            FUN_00c8315c(param_1 + 0x132c);
          }
        }
        goto LAB_00c8fde0;
      }
    }
    FUN_00ad20e4(param_1 + 0x13a8);
  }
  goto LAB_00c907d4;
switchD_00c8fd34_caseD_3:
  switch(*(undefined1 *)(param_1 + 0x1d7e)) {
  case 3:
    if (*(char *)(param_1 + 0x1e78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1e64);
      bVar13 = cVar1 == '\x03';
      if (bVar13) {
        cVar1 = *(char *)(param_1 + 0x1e5c);
      }
      if ((bVar13 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1e50) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0x1e50),*(undefined4 *)(param_1 + 0x1e54),1);
      }
    }
    goto switchD_00c8fedc_caseD_1;
  case 4:
    if (*(char *)(param_1 + 0x1e71) == '\x03') {
      if (*(char *)(param_1 + 0x1e35) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x1e1c);
        bVar13 = cVar1 == '\x03';
        if (bVar13) {
          cVar1 = *(char *)(param_1 + 0x1e19);
        }
        if (bVar13 && cVar1 == '\x03') {
          FUN_00c8315c(param_1 + 0x1dac);
        }
      }
      iVar6 = *(int *)(param_1 + 0x1e58);
      iVar3 = 0x1e5c;
LAB_00c90294:
      if (iVar6 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar3));
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x1e69) == '\x03') {
      if (*(char *)(param_1 + 0x1e25) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x1e0c);
        bVar13 = cVar1 == '\x03';
        if (bVar13) {
          cVar1 = *(char *)(param_1 + 0x1e09);
        }
        if (bVar13 && cVar1 == '\x03') {
          FUN_00c8315c(param_1 + 0x1d9c);
        }
      }
      iVar6 = *(int *)(param_1 + 0x1e50);
      iVar3 = 0x1e54;
      goto LAB_00c90294;
    }
    break;
  case 6:
    FUN_00c91504(param_1 + 0x1d80);
    goto LAB_00c902c8;
  case 7:
    FUN_00c915b4(param_1 + 0x1d80);
    goto LAB_00c902c8;
  case 8:
    FUN_00c91504(param_1 + 0x1d80);
    goto LAB_00c902bc;
  case 9:
    FUN_00c91504(param_1 + 0x1d80);
LAB_00c902bc:
    FUN_00ad1570(param_1 + 0x1958);
LAB_00c902c8:
    FUN_00c48cbc(param_1 + 0x1d64);
    break;
  case 10:
    FUN_00c915b4(param_1 + 0x1d90);
    FUN_00c48cbc(param_1 + 0x1d80);
    break;
  default:
    goto switchD_00c8fedc_caseD_1;
  }
  bVar13 = *(char *)(param_1 + 0x1d7c) != '\0';
  iVar3 = 0;
  if (bVar13) {
    iVar3 = *(int *)(param_1 + 0x1948);
  }
  if (bVar13 && iVar3 != 0) {
    FUN_00c48cbc(param_1 + 0x194c);
  }
  iVar3 = 0xa9d;
  *(undefined1 *)(param_1 + 0x1d7c) = 0;
  FUN_00ad16b8(param_1 + 0x19f8);
LAB_00c9070c:
  *(undefined1 *)(param_1 + 0x12e0 + iVar3) = 0;
switchD_00c8fedc_caseD_1:
  *(undefined4 *)(param_1 + 0x1929) = 0;
  *(undefined2 *)(param_1 + 0x192d) = 0;
switchD_00c8fd34_caseD_1:
  *(undefined1 *)(param_1 + 0x12d8) = 0;
LAB_00c907d4:
  iVar3 = param_1 + 0xc78;
switchD_00c8fc0c_caseD_0:
  FUN_00acd2b8(iVar3);
switchD_00c8fc0c_caseD_1:
  piVar8 = *(int **)(param_1 + 0x638);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar8;
    bVar13 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar13);
  *piVar8 = iVar3 + -1;
LAB_00c90800:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x638));
  }
LAB_00c90814:
  FUN_00ac9c30(param_1 + 0x3438);
  iVar3 = *piVar10;
  DataMemoryBarrier(0xb);
  piVar8 = (int *)(iVar3 + 0x84);
  do {
    iVar6 = *piVar8;
    bVar13 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar13);
  *piVar8 = iVar6 + -1;
  DataMemoryBarrier(0xb);
  if (iVar6 == 1) {
    FUN_00c747ec(iVar3 + 0x20);
    puVar7 = (uint *)(iVar3 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar7;
      bVar13 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar13);
    *puVar7 = uVar9 | 2;
    DataMemoryBarrier(0xb);
    if (uVar9 == 0) {
      iVar6 = *(int *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar13 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar13);
      *puVar7 = 0;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x44));
      }
    }
  }
  piVar8 = (int *)*piVar10;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar8;
    bVar13 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar13);
  *piVar8 = iVar3 + -1;
LAB_00c908d0:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d064cc(*piVar10);
    return;
  }
  return;
}

