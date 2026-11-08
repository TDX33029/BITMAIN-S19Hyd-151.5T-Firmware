// FUN_0065ac74 @ 0065ac74 size=4040 calls_out=30 calls_in=3
// strings: 

void FUN_0065ac74(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 0xdad) == '\0') {
    piVar3 = *(int **)(param_1 + 0xda4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0xda4));
    }
    puVar7 = (undefined4 *)(param_1 + 0xda8);
    FUN_01663cc4(*puVar7);
    piVar3 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xdad) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x44)) {
  case 0:
    piVar3 = *(int **)(param_1 + 0x38);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x38));
    }
    puVar7 = (undefined4 *)(param_1 + 0x3c);
    FUN_01663cc4(*puVar7);
    piVar3 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
    }
  default:
    goto switchD_0065aca4_caseD_1;
  case 3:
    switch(*(undefined1 *)(param_1 + 0x2c0)) {
    case 0:
      piVar3 = *(int **)(param_1 + 0xd8);
      iVar6 = param_1 + 0x98;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar9 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar9);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(*(undefined4 *)(param_1 + 0xd8));
      }
      goto LAB_0065b4d8;
    default:
      goto switchD_0065aeac_caseD_1;
    case 3:
      cVar1 = *(char *)(param_1 + 0x2f4);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x318) == '\x04') {
          if (*(char *)(param_1 + 0x380) == '\x03') {
            if (*(char *)(param_1 + 0x37c) == '\x03') {
              FUN_005e6cdc(param_1 + 0x368);
              if (*(int *)(param_1 + 0x374) != -1) {
                FUN_016dffb2();
              }
              FUN_00a414e8(param_1 + 0x368);
            }
            else if (*(char *)(param_1 + 0x37c) == '\0') {
              FUN_016dffb2(*(undefined4 *)(param_1 + 0x364));
            }
          }
          if (*(char *)(param_1 + 0x31c) != '\x04') {
            FUN_009b8520();
          }
          *(undefined1 *)(param_1 + 0x319) = 0;
LAB_0065b818:
          *(undefined1 *)(param_1 + 0x31a) = 0;
        }
        else if (*(char *)(param_1 + 0x318) == '\x03') {
          if (*(short *)(param_1 + 0x31c) == 3) {
            FUN_009b8520(param_1 + 800);
          }
          goto LAB_0065b818;
        }
        if (*(int *)(param_1 + 0x394) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38c));
        }
        if (*(char *)(param_1 + 900) != '\x04') {
          FUN_009b8520();
        }
        *(undefined1 *)(param_1 + 0x2f5) = 0;
        goto switchD_0065b278_caseD_1;
      }
      if (cVar1 != '\x03') {
        if ((cVar1 == '\0') && (*(int *)(param_1 + 0x2c8) != 0)) {
          uVar8 = *(undefined4 *)(param_1 + 0x2cc);
          goto LAB_0065b104;
        }
        goto LAB_0065b494;
      }
      iVar6 = 0x2f8;
      switch(*(undefined1 *)(param_1 + 0x4d8)) {
      case 0:
        goto switchD_0065b278_caseD_0;
      default:
        goto switchD_0065b278_caseD_1;
      case 3:
        break;
      case 4:
        if (*(char *)(param_1 + 0x510) == '\x03') {
          if (*(short *)(param_1 + 0x4f0) == 3) {
            piVar3 = *(int **)(param_1 + 0x4f4);
            if (*piVar3 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar9 = (bool)hasExclusiveAccess(piVar3);
              if (bVar9) {
                *piVar3 = 0x84;
                goto LAB_0065bc78;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar3[2] + 0x10))();
          }
        }
        else if ((*(char *)(param_1 + 0x510) == '\0') && (*(int *)(param_1 + 0x4e0) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4e4));
        }
LAB_0065bc78:
        if (*(int *)(param_1 + 0x514) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x518));
        }
        break;
      case 5:
        if (*(char *)(param_1 + 0xd9c) == '\x03') {
          FUN_00642ea4(param_1 + 0x6a8);
          *(undefined1 *)(param_1 + 0xd9d) = 0;
        }
        else if ((*(char *)(param_1 + 0xd9c) == '\0') && (*(int *)(param_1 + 0x4f0) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4f4));
        }
        iVar4 = *(int *)(param_1 + 0x4e0);
        iVar6 = 0x4e4;
        goto LAB_0065b88c;
      case 6:
        if (*(char *)(param_1 + 0xbe4) == '\x03') {
          FUN_00642ea4(param_1 + 0x4f0);
          *(undefined1 *)(param_1 + 0xbe5) = 0;
        }
        else if ((*(char *)(param_1 + 0xbe4) == '\0') && (*(int *)(param_1 + 0x4e0) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4e4));
        }
        iVar4 = *(int *)(param_1 + 0xbe8);
        iVar6 = 0xbec;
LAB_0065b88c:
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar6));
        }
        if (*(int *)(param_1 + 0x330) != 3) {
          FUN_006430fc();
        }
      }
      uVar8 = *(undefined4 *)(param_1 + 0x328);
      FUN_00a07b4c(uVar8);
      thunk_FUN_016d3fb4(uVar8);
      iVar6 = 0x308;
switchD_0065b278_caseD_0:
      if (*(int *)(param_1 + iVar6) != 0) {
        thunk_FUN_016d3fb4(((int *)(param_1 + iVar6))[1]);
      }
switchD_0065b278_caseD_1:
      *(undefined1 *)(param_1 + 0x2f6) = 0;
      if (*(int *)(param_1 + 0x2e8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2ec));
      }
      *(undefined1 *)(param_1 + 0x2f7) = 0;
      goto LAB_0065b494;
    case 4:
      puVar7 = *(undefined4 **)(param_1 + 0x2cc);
      uVar8 = *(undefined4 *)(param_1 + 0x2c8);
      pcVar5 = (code *)*puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar7[1] != 0) {
LAB_0065b104:
        thunk_FUN_016d3fb4(uVar8);
      }
      goto LAB_0065b494;
    case 5:
      cVar1 = *(char *)(param_1 + 0x423);
      if (cVar1 == '\x05') {
        FUN_0065c6d8(param_1 + 0x428);
LAB_0065b2fc:
        *(undefined1 *)(param_1 + 0x422) = 0;
        if ((*(char *)(param_1 + 0x421) != '\0') &&
           (*(undefined1 **)(param_1 + 0x438) != &DAT_3b9aca00)) {
          if (*(char *)(param_1 + 0x444) == '\0') {
            FUN_012ba508(param_1 + 0x430);
          }
          piVar3 = *(int **)(param_1 + 0x440);
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar3;
            bVar9 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar9);
          *piVar3 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_012c1110(*(undefined4 *)(param_1 + 0x440));
          }
        }
        *(undefined1 *)(param_1 + 0x421) = 0;
      }
      else {
        if (cVar1 == '\x04') goto LAB_0065b2fc;
        if (cVar1 != '\x03') break;
        if ((*(uint *)(param_1 + 0x440) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x444));
        }
      }
      FUN_006435c0(param_1 + 0x3e0);
      if (*(char *)(param_1 + 0x420) != '\0') {
        FUN_00b50e5c(param_1 + 0x2c8);
      }
      *(undefined1 *)(param_1 + 0x420) = 0;
      break;
    case 6:
      cVar1 = *(char *)(param_1 + 0x32f);
      if (cVar1 == '\x05') {
        FUN_0065c6d8(param_1 + 0x338);
LAB_0065b39c:
        *(undefined1 *)(param_1 + 0x32d) = 0;
        if ((*(char *)(param_1 + 0x32c) != '\0') &&
           (*(undefined1 **)(param_1 + 0x340) != &DAT_3b9aca00)) {
          if (*(char *)(param_1 + 0x34c) == '\0') {
            FUN_012ba508(param_1 + 0x338);
          }
          piVar3 = *(int **)(param_1 + 0x348);
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar3;
            bVar9 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar9);
          *piVar3 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_012c1110(*(undefined4 *)(param_1 + 0x348));
          }
        }
        *(undefined1 *)(param_1 + 0x32e) = 0;
        *(undefined1 *)(param_1 + 0x32c) = 0;
      }
      else {
        if (cVar1 == '\x04') goto LAB_0065b39c;
        if (cVar1 != '\x03') break;
        if ((*(uint *)(param_1 + 0x348) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34c));
        }
      }
      if (*(int *)(param_1 + 0x2ec) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2e8));
      }
      break;
    case 7:
      if (*(int *)(param_1 + 0x2c8) != 0) {
        FUN_006f5fbc(*(int *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc),1);
      }
      goto LAB_0065b0a4;
    case 8:
      cVar1 = *(char *)(param_1 + 0x370);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x36c);
      }
      if (bVar9 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x338);
        bVar9 = cVar1 == '\x03';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x334);
        }
        if (bVar9 && cVar1 == '\x03') {
          FUN_0163c790(param_1 + 0x314);
          if (*(int *)(param_1 + 0x318) != 0) {
            (**(code **)(*(int *)(param_1 + 0x318) + 0xc))(*(undefined4 *)(param_1 + 0x31c));
          }
        }
      }
LAB_0065b0a4:
      piVar3 = *(int **)(param_1 + 700);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar9 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar9);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fb60(*(undefined4 *)(param_1 + 700));
      }
    }
    puVar7 = *(undefined4 **)(param_1 + 0x274);
    uVar8 = *(undefined4 *)(param_1 + 0x270);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar8);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    puVar7 = *(undefined4 **)(param_1 + 0x26c);
    uVar8 = *(undefined4 *)(param_1 + 0x268);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar8);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    *(undefined2 *)(param_1 + 0x2c1) = 0;
    *(undefined1 *)(param_1 + 0x2c3) = 0;
LAB_0065b494:
    *(undefined1 *)(param_1 + 0x2c4) = 0;
    FUN_00b50e5c(param_1 + 0x128);
    piVar3 = *(int **)(param_1 + 0x120);
    iVar6 = param_1 + 0xe0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x120));
    }
LAB_0065b4d8:
    FUN_005c3320(iVar6);
switchD_0065aeac_caseD_1:
    FUN_00a07b4c(param_1 + 0x48);
    cVar1 = *(char *)(param_1 + 0x42);
    goto joined_r0x0065bbb0;
  case 4:
    FUN_0064368c(param_1 + 0x48);
    break;
  case 5:
    uVar8 = *(undefined4 *)(param_1 + 0x48);
    puVar7 = *(undefined4 **)(param_1 + 0x4c);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar8);
    }
    if (puVar7[1] == 0) break;
    thunk_FUN_016d3fb4(uVar8);
    cVar1 = *(char *)(param_1 + 0x40);
    goto joined_r0x0065af40;
  case 6:
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
    }
    break;
  case 7:
    if (6 < *(byte *)(param_1 + 0x68a)) goto switchD_0065adc8_caseD_1;
    switch(*(byte *)(param_1 + 0x68a)) {
    case 0:
      piVar3 = *(int **)(param_1 + 0x67c);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar9 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar9);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078fcec(*(undefined4 *)(param_1 + 0x67c));
      }
      puVar7 = *(undefined4 **)(param_1 + 0x5c4);
      uVar8 = *(undefined4 *)(param_1 + 0x5c0);
      pcVar5 = (code *)*puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
      FUN_00643fc0(param_1 + 0x5c8);
      puVar7 = (undefined4 *)(param_1 + 0x680);
      FUN_01663cc4(*puVar7);
      piVar3 = (int *)*puVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar9 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar9);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(puVar7);
      }
    default:
      goto switchD_0065adc8_caseD_1;
    case 3:
      if (*(int *)(param_1 + 0x698) != 0) {
        FUN_006f5fbc(*(int *)(param_1 + 0x698),*(undefined4 *)(param_1 + 0x69c),1);
      }
      goto LAB_0065ba98;
    case 4:
      FUN_0163bdc0(param_1 + 0x69c);
      if (*(int *)(param_1 + 0x6ac) != 0) {
        (**(code **)(*(int *)(param_1 + 0x6ac) + 0xc))(*(undefined4 *)(param_1 + 0x6b0));
      }
      break;
    case 5:
      cVar1 = *(char *)(param_1 + 0x6dc);
      if (cVar1 == '\x04') {
        puVar7 = *(undefined4 **)(param_1 + 0x6f8);
        iVar6 = *(int *)(param_1 + 0x6f4);
        pcVar5 = (code *)*puVar7;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar6);
        }
        if (puVar7[1] == 0) goto switchD_0065b19c_caseD_1;
LAB_0065b9d4:
        thunk_FUN_016d3fb4(iVar6);
switchD_0065b19c_caseD_1:
        *(undefined1 *)(param_1 + 0x6dd) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          if (*(byte *)(param_1 + 0x74f) < 10) {
            iVar6 = 0x738;
            switch(*(byte *)(param_1 + 0x74f)) {
            case 0:
              goto switchD_0065b19c_caseD_0;
            default:
              goto switchD_0065b19c_caseD_1;
            case 3:
              if (*(char *)(param_1 + 0x824) == '\x03') {
                FUN_00643834(param_1 + 0x7f4);
              }
              break;
            case 4:
              cVar1 = *(char *)(param_1 + 0x88c);
              bVar9 = cVar1 == '\x03';
              if (bVar9) {
                cVar1 = *(char *)(param_1 + 0x854);
              }
              if (bVar9 && cVar1 == '\x03') {
                FUN_00643834(param_1 + 0x824);
              }
              break;
            case 5:
              if (*(char *)(param_1 + 0x81c) == '\x03') {
                FUN_00643834(param_1 + 0x7ec);
              }
              break;
            case 6:
              if (*(char *)(param_1 + 0x7bc) == '\0') {
                iVar4 = *(int *)(param_1 + 0x758);
                iVar6 = 4;
              }
              else {
                if (*(char *)(param_1 + 0x7bc) != '\x03') break;
                FUN_0065c884(param_1 + 0x778);
                if (*(int *)(param_1 + 0x76c) != 0) {
                  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x770));
                }
                iVar4 = *(int *)(param_1 + 0x764);
                iVar6 = 0x10;
              }
              if (iVar4 != 0) {
                uVar8 = *(undefined4 *)(param_1 + 0x750 + iVar6);
LAB_0065b984:
                thunk_FUN_016d3fb4(uVar8);
              }
              break;
            case 7:
              break;
            case 8:
              if (*(char *)(param_1 + 0x9d4) == '\x03') {
                cVar1 = *(char *)(param_1 + 0x899);
                if (cVar1 == '\x04') {
                  if ((*(char *)(param_1 + 0x9cc) == '\x03') && (*(int *)(param_1 + 0x9b8) != 0)) {
                    FUN_006f5d1c(*(int *)(param_1 + 0x9b8),*(undefined4 *)(param_1 + 0x9bc),1);
                  }
                  FUN_00643a80(param_1 + 0x8a0);
                  *(undefined1 *)(param_1 + 0x898) = 0;
                }
                else {
                  bVar9 = cVar1 == '\x03';
                  if (bVar9) {
                    cVar1 = *(char *)(param_1 + 0x8c8);
                  }
                  if ((bVar9 && cVar1 == '\x03') && (*(int *)(param_1 + 0x8c0) != 0)) {
                    FUN_006f5fbc(*(int *)(param_1 + 0x8c0),*(undefined4 *)(param_1 + 0x8c4),1);
                  }
                }
              }
              break;
            case 9:
              if (*(char *)(param_1 + 0x9c4) == '\x03') {
                cVar1 = *(char *)(param_1 + 0x889);
                if (cVar1 == '\x04') {
                  if ((*(char *)(param_1 + 0x9bc) == '\x03') && (*(int *)(param_1 + 0x9a8) != 0)) {
                    FUN_006f5d1c(*(int *)(param_1 + 0x9a8),*(undefined4 *)(param_1 + 0x9ac),1);
                  }
                  FUN_00643a80(param_1 + 0x890);
                  *(undefined1 *)(param_1 + 0x888) = 0;
                }
                else {
                  bVar9 = cVar1 == '\x03';
                  if (bVar9) {
                    cVar1 = *(char *)(param_1 + 0x8b8);
                  }
                  if ((bVar9 && cVar1 == '\x03') && (*(int *)(param_1 + 0x8b0) != 0)) {
                    FUN_006f5fbc(*(int *)(param_1 + 0x8b0),*(undefined4 *)(param_1 + 0x8b4),1);
                  }
                }
                if (*(int *)(param_1 + 0x764) != 0) {
                  uVar8 = *(undefined4 *)(param_1 + 0x760);
                  goto LAB_0065b984;
                }
              }
              else if ((*(char *)(param_1 + 0x9c4) == '\0') && (*(int *)(param_1 + 0x754) != 0)) {
                uVar8 = *(undefined4 *)(param_1 + 0x750);
                goto LAB_0065b984;
              }
            }
            uVar2 = *(uint *)(param_1 + 0x6e0);
            if ((0x15 < uVar2) || ((1 << (uVar2 & 0xff) & 0x20c000U) == 0)) {
              FUN_00643e58((uint *)(param_1 + 0x6e0));
            }
            *(undefined2 *)(param_1 + 0x74c) = 0;
            iVar6 = 0x720;
            *(undefined1 *)(param_1 + 0x74e) = 0;
switchD_0065b19c_caseD_0:
            if (*(int *)(param_1 + iVar6) != 0) {
              iVar6 = ((int *)(param_1 + iVar6))[1];
              goto LAB_0065b9d4;
            }
          }
          goto switchD_0065b19c_caseD_1;
        }
        if ((cVar1 == '\0') && (*(int *)(param_1 + 0x6c0) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c4));
        }
      }
      *(undefined1 *)(param_1 + 0x687) = 0;
      if (*(int *)(param_1 + 0x690) != 3) {
        *(undefined1 *)(param_1 + 0x685) = 0;
      }
      *(undefined1 *)(param_1 + 0x685) = 0;
      break;
    case 6:
      cVar1 = *(char *)(param_1 + 0x93c);
      if (cVar1 == '\x04') {
        cVar1 = *(char *)(param_1 + 0x978);
        if (cVar1 == '\x04') {
          if ((*(uint *)(param_1 + 0x9d0) & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9d4));
          }
          FUN_00a07b4c(param_1 + 0x980);
          FUN_006f625c(*(undefined4 *)(param_1 + 0x974));
        }
        else {
          if (cVar1 != '\x03') {
            if ((cVar1 == '\0') && (*(int *)(param_1 + 0x958) != 0)) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x95c));
            }
            goto LAB_0065b5d0;
          }
          if (*(int *)(param_1 + 0x990) != 0) {
            FUN_006f5fbc(*(int *)(param_1 + 0x990),*(undefined4 *)(param_1 + 0x994),1);
          }
        }
        bVar9 = *(char *)(param_1 + 0x979) != '\0';
        iVar6 = 0;
        if (bVar9) {
          iVar6 = *(int *)(param_1 + 0x97c);
        }
        if (bVar9 && iVar6 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x980));
        }
        *(undefined1 *)(param_1 + 0x979) = 0;
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            FUN_00643a80(param_1 + 0x768);
          }
          break;
        }
        if (*(int *)(param_1 + 0x958) != 0) {
          FUN_006f5fbc(*(int *)(param_1 + 0x958),*(undefined4 *)(param_1 + 0x95c),1);
        }
      }
LAB_0065b5d0:
      if ((*(char *)(param_1 + 0x93d) != '\0') &&
         (*(undefined1 **)(param_1 + 0x948) != &DAT_3b9aca00)) {
        if (*(char *)(param_1 + 0x954) == '\0') {
          FUN_012ba508(param_1 + 0x940);
        }
        piVar3 = *(int **)(param_1 + 0x950);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar9 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar9);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_012c1110(*(undefined4 *)(param_1 + 0x950));
        }
      }
      *(undefined1 *)(param_1 + 0x93f) = 0;
      *(undefined1 *)(param_1 + 0x93d) = 0;
      if (*(char *)(param_1 + 0x93e) != '\0') {
        FUN_00643a80(param_1 + 0x840);
      }
      *(undefined1 *)(param_1 + 0x93e) = 0;
    }
    FUN_006440d8(param_1 + 0x180);
    iVar6 = *(int *)(param_1 + 0x148);
    if (iVar6 != 0) {
      puVar7 = *(undefined4 **)(param_1 + 0x14c);
      pcVar5 = (code *)*puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(iVar6);
      }
    }
    FUN_00a07b4c(param_1 + 0xe8);
    piVar3 = *(int **)(param_1 + 0x178);
    *(undefined2 *)(param_1 + 0x688) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x178));
    }
    FUN_005c3320(param_1 + 0x158);
    FUN_006f625c(*(undefined4 *)(param_1 + 0x670));
LAB_0065ba98:
    puVar7 = (undefined4 *)(param_1 + 0x66c);
    FUN_01663cc4(*puVar7);
    piVar3 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
    }
    FUN_00643fc0(param_1 + 0x48);
    if (*(char *)(param_1 + 0x686) != '\0') {
      puVar7 = *(undefined4 **)(param_1 + 0x694);
      uVar8 = *(undefined4 *)(param_1 + 0x690);
      pcVar5 = (code *)*puVar7;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
    }
    piVar3 = *(int **)(param_1 + 0x668);
    *(undefined1 *)(param_1 + 0x686) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x668));
    }
switchD_0065adc8_caseD_1:
    *(undefined1 *)(param_1 + 0x43) = 0;
    cVar1 = *(char *)(param_1 + 0x40);
    goto joined_r0x0065af40;
  }
  cVar1 = *(char *)(param_1 + 0x40);
joined_r0x0065af40:
  if (cVar1 != '\0') {
    uVar8 = *(undefined4 *)(param_1 + 0x28);
    puVar7 = *(undefined4 **)(param_1 + 0x2c);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar8);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_1 + 0x41) != '\0') {
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    puVar7 = *(undefined4 **)(param_1 + 0x24);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar8);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
  }
  *(undefined1 *)(param_1 + 0x41) = 0;
  cVar1 = *(char *)(param_1 + 0x42);
joined_r0x0065bbb0:
  if (cVar1 != '\0') {
    puVar7 = (undefined4 *)(param_1 + 0x34);
    FUN_01663cc4(*puVar7);
    piVar3 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
    }
  }
  piVar3 = *(int **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x42) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar9 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar9);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*(undefined4 *)(param_1 + 0x30));
  }
switchD_0065aca4_caseD_1:
  piVar3 = *(int **)(param_1 + 0xda0);
  *(undefined1 *)(param_1 + 0xdac) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar9 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar9);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*(undefined4 *)(param_1 + 0xda0));
    return;
  }
  return;
}

