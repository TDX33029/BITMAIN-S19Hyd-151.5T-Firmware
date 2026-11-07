// FUN_006ddbcc @ 006ddbcc size=4672 calls_out=32 calls_in=2
// strings: 

void FUN_006ddbcc(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  switch(*(undefined1 *)((int)param_1 + 0x11)) {
  case 0:
    param_1 = param_1 + 3;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar6 + -1;
    goto LAB_006dee4c;
  default:
    goto switchD_006ddbe8_caseD_1;
  case 3:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    goto LAB_006dee30;
  case 4:
    if (*(char *)((int)param_1 + 0xdcd) != '\x03') {
      if (*(char *)((int)param_1 + 0xdcd) == '\0') {
        piVar3 = (int *)param_1[0x371];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fcec(param_1[0x371]);
        }
        puVar8 = param_1 + 0x372;
        FUN_01663cc4(*puVar8);
        piVar3 = (int *)*puVar8;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(puVar8);
        }
      }
      goto LAB_006deda8;
    }
    switch(*(undefined1 *)(param_1 + 0x19)) {
    case 0:
      piVar3 = (int *)param_1[0x16];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(param_1[0x16]);
      }
      puVar8 = param_1 + 0x17;
      FUN_01663cc4(*puVar8);
      piVar3 = (int *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(puVar8);
      }
    default:
      goto switchD_006dddec_caseD_1;
    case 3:
      switch(*(undefined1 *)(param_1 + 0xb8)) {
      case 0:
        piVar3 = (int *)param_1[0x3e];
        puVar8 = param_1 + 0x2e;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fcec(param_1[0x3e]);
        }
        goto LAB_006de598;
      default:
        goto switchD_006ddfc0_caseD_1;
      case 3:
        cVar1 = *(char *)(param_1 + 0xc5);
        if (cVar1 == '\x04') {
          if (*(char *)(param_1 + 0xce) == '\x04') {
            if (*(char *)(param_1 + 0xe8) == '\x03') {
              if (*(char *)(param_1 + 0xe7) == '\x03') {
                FUN_005e6cdc(param_1 + 0xe2);
                if (param_1[0xe5] != -1) {
                  FUN_016dffb2();
                }
                FUN_00a414e8(param_1 + 0xe2);
              }
              else if (*(char *)(param_1 + 0xe7) == '\0') {
                FUN_016dffb2(param_1[0xe1]);
              }
            }
            puVar8 = (undefined4 *)param_1[0xd0];
            if ((4 < *(byte *)(param_1 + 0xcf)) || (*(byte *)(param_1 + 0xcf) == 3)) {
              uVar7 = *puVar8;
              puVar9 = (undefined4 *)puVar8[1];
              pcVar4 = (code *)*puVar9;
              if (pcVar4 != (code *)0x0) {
                (*pcVar4)(uVar7);
              }
              if (puVar9[1] != 0) {
                thunk_FUN_016d3fb4(uVar7);
              }
              thunk_FUN_016d3fb4(puVar8);
            }
            *(undefined1 *)((int)param_1 + 0x339) = 0;
LAB_006de8c8:
            *(undefined1 *)((int)param_1 + 0x33a) = 0;
          }
          else if (*(char *)(param_1 + 0xce) == '\x03') {
            FUN_00643310(param_1 + 0xcf);
            goto LAB_006de8c8;
          }
          if (param_1[0xed] != 0) {
            thunk_FUN_016d3fb4(param_1[0xeb]);
          }
          puVar8 = (undefined4 *)param_1[0xea];
          if ((4 < *(byte *)(param_1 + 0xe9)) || (*(byte *)(param_1 + 0xe9) == 3)) {
            uVar7 = *puVar8;
            puVar9 = (undefined4 *)puVar8[1];
            pcVar4 = (code *)*puVar9;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar7);
            }
            if (puVar9[1] != 0) {
              thunk_FUN_016d3fb4(uVar7);
            }
            thunk_FUN_016d3fb4(puVar8);
          }
          *(undefined1 *)((int)param_1 + 0x315) = 0;
          goto switchD_006de344_caseD_1;
        }
        if (cVar1 != '\x03') {
          if ((cVar1 == '\0') && (param_1[0xba] != 0)) {
            uVar7 = param_1[0xbb];
            goto LAB_006de1d0;
          }
          goto LAB_006de554;
        }
        iVar6 = 0x318;
        switch(*(undefined1 *)(param_1 + 0x13e)) {
        case 0:
          goto switchD_006de344_caseD_0;
        default:
          goto switchD_006de344_caseD_1;
        case 3:
          break;
        case 4:
          if (*(char *)(param_1 + 0x14c) == '\x03') {
            if (*(short *)(param_1 + 0x144) == 3) {
              piVar3 = (int *)param_1[0x145];
              if (*piVar3 == 0xcc) {
                DataMemoryBarrier(0xb);
                bVar10 = (bool)hasExclusiveAccess(piVar3);
                if (bVar10) {
                  *piVar3 = 0x84;
                  goto LAB_006dee78;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              (**(code **)(piVar3[2] + 0x10))();
            }
          }
          else if ((*(char *)(param_1 + 0x14c) == '\0') && (param_1[0x140] != 0)) {
            thunk_FUN_016d3fb4(param_1[0x141]);
          }
LAB_006dee78:
          if (param_1[0x14d] != 0) {
            thunk_FUN_016d3fb4(param_1[0x14e]);
          }
          break;
        case 5:
          if (*(char *)(param_1 + 0x36f) == '\x03') {
            FUN_00642ea4(param_1 + 0x1b2);
            *(undefined1 *)((int)param_1 + 0xdbd) = 0;
          }
          else if ((*(char *)(param_1 + 0x36f) == '\0') && (param_1[0x144] != 0)) {
            thunk_FUN_016d3fb4(param_1[0x145]);
          }
          iVar5 = param_1[0x140];
          iVar6 = 0x504;
          goto LAB_006de9b0;
        case 6:
          if (*(char *)(param_1 + 0x301) == '\x03') {
            FUN_00642ea4(param_1 + 0x144);
            *(undefined1 *)((int)param_1 + 0xc05) = 0;
          }
          else if ((*(char *)(param_1 + 0x301) == '\0') && (param_1[0x140] != 0)) {
            thunk_FUN_016d3fb4(param_1[0x141]);
          }
          iVar5 = param_1[0x302];
          iVar6 = 0xc0c;
LAB_006de9b0:
          if (iVar5 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar6));
          }
          if (param_1[0xd4] != 3) {
            FUN_006430fc();
          }
        }
        uVar7 = param_1[0xd2];
        FUN_00a07b4c(uVar7);
        thunk_FUN_016d3fb4(uVar7);
        iVar6 = 0x328;
switchD_006de344_caseD_0:
        if (*(int *)((int)param_1 + iVar6) != 0) {
          thunk_FUN_016d3fb4(((int *)((int)param_1 + iVar6))[1]);
        }
switchD_006de344_caseD_1:
        *(undefined1 *)((int)param_1 + 0x316) = 0;
        if (param_1[0xc2] != 0) {
          thunk_FUN_016d3fb4(param_1[0xc3]);
        }
        *(undefined1 *)((int)param_1 + 0x317) = 0;
        goto LAB_006de554;
      case 4:
        puVar8 = (undefined4 *)param_1[0xbb];
        uVar7 = param_1[0xba];
        pcVar4 = (code *)*puVar8;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar8[1] != 0) {
LAB_006de1d0:
          thunk_FUN_016d3fb4(uVar7);
        }
        goto LAB_006de554;
      case 5:
        cVar1 = *(char *)((int)param_1 + 0x443);
        if (cVar1 == '\x05') {
          FUN_0065c6d8(param_1 + 0x112);
LAB_006de3bc:
          *(undefined1 *)((int)param_1 + 0x442) = 0;
          if ((*(char *)((int)param_1 + 0x441) != '\0') &&
             ((undefined1 *)param_1[0x116] != &DAT_3b9aca00)) {
            if (*(char *)(param_1 + 0x119) == '\0') {
              FUN_012ba508(param_1 + 0x114);
            }
            piVar3 = (int *)param_1[0x118];
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar3;
              bVar10 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar10);
            *piVar3 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_012c1110(param_1[0x118]);
            }
          }
          *(undefined1 *)((int)param_1 + 0x441) = 0;
        }
        else {
          if (cVar1 == '\x04') goto LAB_006de3bc;
          if (cVar1 != '\x03') break;
          if ((param_1[0x118] & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(param_1[0x119]);
          }
        }
        FUN_006435c0(param_1 + 0x100);
        if (*(char *)(param_1 + 0x110) != '\0') {
          FUN_00b50e5c(param_1 + 0xba);
        }
        *(undefined1 *)(param_1 + 0x110) = 0;
        break;
      case 6:
        cVar1 = *(char *)((int)param_1 + 0x34f);
        if (cVar1 == '\x05') {
          FUN_0065c6d8(param_1 + 0xd6);
LAB_006de45c:
          *(undefined1 *)((int)param_1 + 0x34d) = 0;
          if ((*(char *)(param_1 + 0xd3) != '\0') && ((undefined1 *)param_1[0xd8] != &DAT_3b9aca00))
          {
            if (*(char *)(param_1 + 0xdb) == '\0') {
              FUN_012ba508(param_1 + 0xd6);
            }
            piVar3 = (int *)param_1[0xda];
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar3;
              bVar10 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar10);
            *piVar3 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_012c1110(param_1[0xda]);
            }
          }
          *(undefined1 *)((int)param_1 + 0x34e) = 0;
          *(undefined1 *)(param_1 + 0xd3) = 0;
        }
        else {
          if (cVar1 == '\x04') goto LAB_006de45c;
          if (cVar1 != '\x03') break;
          if ((param_1[0xda] & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(param_1[0xdb]);
          }
        }
        if (param_1[0xc3] != 0) {
          thunk_FUN_016d3fb4(param_1[0xc2]);
        }
        break;
      case 7:
        if (param_1[0xba] != 0) {
          FUN_006f5fbc(param_1[0xba],param_1[0xbb],1);
        }
        goto LAB_006de170;
      case 8:
        cVar1 = *(char *)(param_1 + 0xe4);
        bVar10 = cVar1 == '\x03';
        if (bVar10) {
          cVar1 = *(char *)(param_1 + 0xe3);
        }
        if (bVar10 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0xd6);
          bVar10 = cVar1 == '\x03';
          if (bVar10) {
            cVar1 = *(char *)(param_1 + 0xd5);
          }
          if (bVar10 && cVar1 == '\x03') {
            FUN_0163c790(param_1 + 0xcd);
            if (param_1[0xce] != 0) {
              (**(code **)(param_1[0xce] + 0xc))(param_1[0xcf]);
            }
          }
        }
LAB_006de170:
        piVar3 = (int *)param_1[0xb7];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fb60(param_1[0xb7]);
        }
      }
      puVar8 = (undefined4 *)param_1[0xa5];
      uVar7 = param_1[0xa4];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      puVar8 = (undefined4 *)param_1[0xa3];
      uVar7 = param_1[0xa2];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      *(undefined2 *)((int)param_1 + 0x2e1) = 0;
      *(undefined1 *)((int)param_1 + 0x2e3) = 0;
LAB_006de554:
      *(undefined1 *)(param_1 + 0xb9) = 0;
      FUN_00b50e5c(param_1 + 0x52);
      piVar3 = (int *)param_1[0x50];
      puVar8 = param_1 + 0x40;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(param_1[0x50]);
      }
LAB_006de598:
      FUN_005c3320(puVar8);
switchD_006ddfc0_caseD_1:
      FUN_00a07b4c(param_1 + 0x1a);
      goto LAB_006decf0;
    case 4:
      FUN_0064368c(param_1 + 0x1a);
      break;
    case 5:
      uVar7 = param_1[0x1a];
      puVar8 = (undefined4 *)param_1[0x1b];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      break;
    case 6:
      if (param_1[0x1a] != 0) {
        FUN_006f5fbc(param_1[0x1a],param_1[0x1b],1);
      }
      break;
    case 7:
      if (6 < *(byte *)((int)param_1 + 0x6aa)) goto switchD_006ddedc_caseD_1;
      switch(*(byte *)((int)param_1 + 0x6aa)) {
      case 0:
        piVar3 = (int *)param_1[0x1a7];
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fcec(param_1[0x1a7]);
        }
        puVar8 = (undefined4 *)param_1[0x179];
        uVar7 = param_1[0x178];
        pcVar4 = (code *)*puVar8;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar8[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        FUN_00643fc0(param_1 + 0x17a);
        puVar8 = param_1 + 0x1a8;
        FUN_01663cc4(*puVar8);
        piVar3 = (int *)*puVar8;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(puVar8);
        }
      default:
        goto switchD_006ddedc_caseD_1;
      case 3:
        if (param_1[0x1ae] != 0) {
          FUN_006f5fbc(param_1[0x1ae],param_1[0x1af],1);
        }
        goto LAB_006debb4;
      case 4:
        FUN_0163bdc0(param_1 + 0x1af);
        if (param_1[0x1b3] != 0) {
          (**(code **)(param_1[0x1b3] + 0xc))(param_1[0x1b4]);
        }
        break;
      case 5:
        cVar1 = *(char *)(param_1 + 0x1bf);
        if (cVar1 == '\x04') {
          puVar8 = (undefined4 *)param_1[0x1c6];
          iVar6 = param_1[0x1c5];
          pcVar4 = (code *)*puVar8;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(iVar6);
          }
          if (puVar8[1] == 0) goto switchD_006de268_caseD_1;
LAB_006deaf8:
          thunk_FUN_016d3fb4(iVar6);
switchD_006de268_caseD_1:
          *(undefined1 *)((int)param_1 + 0x6fd) = 0;
        }
        else {
          if (cVar1 == '\x03') {
            if (*(byte *)((int)param_1 + 0x76f) < 10) {
              iVar6 = 0x758;
              switch(*(byte *)((int)param_1 + 0x76f)) {
              case 0:
                goto switchD_006de268_caseD_0;
              default:
                goto switchD_006de268_caseD_1;
              case 3:
                if (*(char *)(param_1 + 0x211) == '\x03') {
                  FUN_00643834(param_1 + 0x205);
                }
                break;
              case 4:
                cVar1 = *(char *)(param_1 + 0x22b);
                bVar10 = cVar1 == '\x03';
                if (bVar10) {
                  cVar1 = *(char *)(param_1 + 0x21d);
                }
                if (bVar10 && cVar1 == '\x03') {
                  FUN_00643834(param_1 + 0x211);
                }
                break;
              case 5:
                if (*(char *)(param_1 + 0x20f) == '\x03') {
                  FUN_00643834(param_1 + 0x203);
                }
                break;
              case 6:
                if (*(char *)(param_1 + 0x1f7) == '\0') {
                  iVar5 = param_1[0x1de];
                  iVar6 = 4;
                }
                else {
                  if (*(char *)(param_1 + 0x1f7) != '\x03') break;
                  FUN_0065c884(param_1 + 0x1e6);
                  if (param_1[0x1e3] != 0) {
                    thunk_FUN_016d3fb4(param_1[0x1e4]);
                  }
                  iVar5 = param_1[0x1e1];
                  iVar6 = 0x10;
                }
                if (iVar5 != 0) {
                  uVar7 = *(undefined4 *)((int)param_1 + iVar6 + 0x770);
LAB_006deaa8:
                  thunk_FUN_016d3fb4(uVar7);
                }
                break;
              case 7:
                break;
              case 8:
                if (*(char *)(param_1 + 0x27d) == '\x03') {
                  cVar1 = *(char *)((int)param_1 + 0x8b9);
                  if (cVar1 == '\x04') {
                    if ((*(char *)(param_1 + 0x27b) == '\x03') && (param_1[0x276] != 0)) {
                      FUN_006f5d1c(param_1[0x276],param_1[0x277],1);
                    }
                    FUN_00643a80(param_1 + 0x230);
                    *(undefined1 *)(param_1 + 0x22e) = 0;
                  }
                  else {
                    bVar10 = cVar1 == '\x03';
                    if (bVar10) {
                      cVar1 = *(char *)(param_1 + 0x23a);
                    }
                    if ((bVar10 && cVar1 == '\x03') && (param_1[0x238] != 0)) {
                      FUN_006f5fbc(param_1[0x238],param_1[0x239],1);
                    }
                  }
                }
                break;
              case 9:
                if (*(char *)(param_1 + 0x279) == '\x03') {
                  cVar1 = *(char *)((int)param_1 + 0x8a9);
                  if (cVar1 == '\x04') {
                    if ((*(char *)(param_1 + 0x277) == '\x03') && (param_1[0x272] != 0)) {
                      FUN_006f5d1c(param_1[0x272],param_1[0x273],1);
                    }
                    FUN_00643a80(param_1 + 0x22c);
                    *(undefined1 *)(param_1 + 0x22a) = 0;
                  }
                  else {
                    bVar10 = cVar1 == '\x03';
                    if (bVar10) {
                      cVar1 = *(char *)(param_1 + 0x236);
                    }
                    if ((bVar10 && cVar1 == '\x03') && (param_1[0x234] != 0)) {
                      FUN_006f5fbc(param_1[0x234],param_1[0x235],1);
                    }
                  }
                  if (param_1[0x1e1] != 0) {
                    uVar7 = param_1[0x1e0];
                    goto LAB_006deaa8;
                  }
                }
                else if ((*(char *)(param_1 + 0x279) == '\0') && (param_1[0x1dd] != 0)) {
                  uVar7 = param_1[0x1dc];
                  goto LAB_006deaa8;
                }
              }
              uVar2 = param_1[0x1c0];
              if ((0x15 < uVar2) || ((1 << (uVar2 & 0xff) & 0x20c000U) == 0)) {
                FUN_00643e58(param_1 + 0x1c0);
              }
              *(undefined2 *)(param_1 + 0x1db) = 0;
              iVar6 = 0x740;
              *(undefined1 *)((int)param_1 + 0x76e) = 0;
switchD_006de268_caseD_0:
              if (*(int *)((int)param_1 + iVar6) != 0) {
                iVar6 = ((int *)((int)param_1 + iVar6))[1];
                goto LAB_006deaf8;
              }
            }
            goto switchD_006de268_caseD_1;
          }
          if ((cVar1 == '\0') && (param_1[0x1b8] != 0)) {
            thunk_FUN_016d3fb4(param_1[0x1b9]);
          }
        }
        *(undefined1 *)((int)param_1 + 0x6a7) = 0;
        if (param_1[0x1ac] != 3) {
          *(undefined1 *)((int)param_1 + 0x6a5) = 0;
        }
        *(undefined1 *)((int)param_1 + 0x6a5) = 0;
        break;
      case 6:
        cVar1 = *(char *)(param_1 + 599);
        if (cVar1 == '\x04') {
          cVar1 = *(char *)(param_1 + 0x266);
          if (cVar1 == '\x04') {
            if ((param_1[0x27c] & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(param_1[0x27d]);
            }
            FUN_00a07b4c(param_1 + 0x268);
            FUN_006f625c(param_1[0x265]);
          }
          else {
            if (cVar1 != '\x03') {
              if ((cVar1 == '\0') && (param_1[0x25e] != 0)) {
                thunk_FUN_016d3fb4(param_1[0x25f]);
              }
              goto LAB_006de67c;
            }
            if (param_1[0x26c] != 0) {
              FUN_006f5fbc(param_1[0x26c],param_1[0x26d],1);
            }
          }
          bVar10 = *(char *)((int)param_1 + 0x999) != '\0';
          iVar6 = 0;
          if (bVar10) {
            iVar6 = param_1[0x267];
          }
          if (bVar10 && iVar6 != 0) {
            thunk_FUN_016d3fb4(param_1[0x268]);
          }
          *(undefined1 *)((int)param_1 + 0x999) = 0;
        }
        else {
          if (cVar1 != '\x03') {
            if (cVar1 == '\0') {
              FUN_00643a80(param_1 + 0x1e2);
            }
            break;
          }
          if (param_1[0x25e] != 0) {
            FUN_006f5fbc(param_1[0x25e],param_1[0x25f],1);
          }
        }
LAB_006de67c:
        if ((*(char *)((int)param_1 + 0x95d) != '\0') &&
           ((undefined1 *)param_1[0x25a] != &DAT_3b9aca00)) {
          if (*(char *)(param_1 + 0x25d) == '\0') {
            FUN_012ba508(param_1 + 600);
          }
          piVar3 = (int *)param_1[0x25c];
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar3;
            bVar10 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar10);
          *piVar3 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_012c1110(param_1[0x25c]);
          }
        }
        *(undefined1 *)((int)param_1 + 0x95f) = 0;
        *(undefined1 *)((int)param_1 + 0x95d) = 0;
        if (*(char *)((int)param_1 + 0x95e) != '\0') {
          FUN_00643a80(param_1 + 0x218);
        }
        *(undefined1 *)((int)param_1 + 0x95e) = 0;
      }
      if (*(char *)(param_1 + 0xa0) == '\x04') {
        if ((undefined1 *)param_1[0xa4] != &DAT_3b9aca00) {
          FUN_00643a80(param_1 + 0xa2);
        }
      }
      else if (*(char *)(param_1 + 0xa0) == '\x03') {
        FUN_006c79d0(param_1 + 0xa2);
      }
      FUN_006442c4(param_1 + 0x42);
      piVar3 = (int *)param_1[0x66];
      *(undefined2 *)(param_1 + 0x1aa) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(param_1[0x66]);
      }
      FUN_005c3320(param_1 + 0x5e);
      FUN_006f625c(param_1[0x1a4]);
LAB_006debb4:
      puVar8 = param_1 + 0x1a3;
      FUN_01663cc4(*puVar8);
      piVar3 = (int *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(puVar8);
      }
      FUN_00643fc0(param_1 + 0x1a);
      if (*(char *)((int)param_1 + 0x6a6) != '\0') {
        puVar8 = (undefined4 *)param_1[0x1ad];
        uVar7 = param_1[0x1ac];
        pcVar4 = (code *)*puVar8;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar8[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
      }
      piVar3 = (int *)param_1[0x1a2];
      *(undefined1 *)((int)param_1 + 0x6a6) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(param_1[0x1a2]);
      }
switchD_006ddedc_caseD_1:
      *(undefined1 *)((int)param_1 + 99) = 0;
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      uVar7 = param_1[0x12];
      puVar8 = (undefined4 *)param_1[0x13];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (*(char *)((int)param_1 + 0x61) != '\0') {
      uVar7 = param_1[0x10];
      puVar8 = (undefined4 *)param_1[0x11];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
    }
    *(undefined1 *)((int)param_1 + 0x61) = 0;
LAB_006decf0:
    if (*(char *)((int)param_1 + 0x62) != '\0') {
      puVar8 = param_1 + 0x15;
      FUN_01663cc4(*puVar8);
      piVar3 = (int *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(puVar8);
      }
    }
    piVar3 = (int *)param_1[0x14];
    *(undefined1 *)((int)param_1 + 0x62) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(param_1[0x14]);
    }
switchD_006dddec_caseD_1:
    piVar3 = (int *)param_1[0x370];
    *(undefined1 *)(param_1 + 0x373) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(param_1[0x370]);
    }
LAB_006deda8:
    if (*(char *)(param_1 + 0x37a) == '\x03') {
      if (*(char *)(param_1 + 0x377) == '\x04') {
        FUN_006f625c(param_1[0x376]);
      }
      else if ((*(char *)(param_1 + 0x377) == '\x03') && (param_1[0x378] != 0)) {
        FUN_006f5fbc(param_1[0x378],param_1[0x379],1);
      }
    }
    break;
  case 5:
    uVar7 = param_1[5];
    puVar8 = (undefined4 *)param_1[6];
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    break;
  case 6:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x39);
    bVar10 = cVar1 == '\x03';
    if (bVar10) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (bVar10 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x2b);
      bVar10 = cVar1 == '\x03';
      if (bVar10) {
        cVar1 = *(char *)(param_1 + 0x2a);
      }
      if (bVar10 && cVar1 == '\x03') {
        FUN_0163c790(param_1 + 0x22);
        if (param_1[0x23] != 0) {
          (**(code **)(param_1[0x23] + 0xc))(param_1[0x24]);
        }
      }
    }
    piVar3 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fb60(param_1[0xe]);
    }
    FUN_006f625c(param_1[2]);
    break;
  case 8:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 9:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 10:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 0xb:
    FUN_006443e0(param_1 + 5);
  }
  puVar8 = param_1 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_01663cc4(*puVar8);
  piVar3 = (int *)*puVar8;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar10 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar10);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar8);
  }
LAB_006dee30:
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar10 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar10);
  *piVar3 = iVar6 + -1;
LAB_006dee4c:
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*param_1);
    return;
  }
switchD_006ddbe8_caseD_1:
  return;
}

