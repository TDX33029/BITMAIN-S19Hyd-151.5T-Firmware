// FUN_00d28d3c @ 00d28d3c size=5200 calls_out=31 calls_in=2
// strings: 

void FUN_00d28d3c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  puVar11 = (undefined4 *)(param_1 + 0x12a0);
  if (*(char *)(param_1 + 0x12a4) == '\0') {
    FUN_00d02818(param_1 + 0x328);
    FUN_00adbed4(param_1);
    piVar8 = *(int **)(param_1 + 0x1298);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x1298));
    }
    piVar8 = *(int **)(param_1 + 0x129c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x129c));
    }
    piVar8 = (int *)*puVar11;
    if (piVar8 == (int *)0x0) {
      return;
    }
    puVar4 = (uint *)(piVar8 + 8);
    uVar7 = piVar8[8];
    do {
      while( true ) {
        uVar6 = uVar7;
        if ((uVar6 & 4) != 0) goto LAB_00d28eec;
        uVar7 = *puVar4;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar14 = (bool)hasExclusiveAccess(puVar4);
      if (bVar14) {
        *puVar4 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar14);
LAB_00d28eec:
    if ((uVar6 & 5) == 1) {
      (**(code **)(piVar8[6] + 8))(piVar8[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    goto LAB_00d2a1dc;
  }
  if (*(char *)(param_1 + 0x12a4) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xa80)) {
  case 0:
    FUN_00d02818(param_1 + 0x680);
    FUN_00adbed4(param_1 + 0x358);
    piVar8 = *(int **)(param_1 + 0xa60);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa60));
    }
    piVar8 = *(int **)(param_1 + 0xa64);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa64));
    }
    break;
  case 3:
    FUN_00ceee6c(param_1 + 0xa90);
    goto switchD_00d28f38_caseD_1;
  case 4:
    switch(*(undefined1 *)(param_1 + 0xbc4)) {
    case 0:
      piVar8 = *(int **)(param_1 + 0xbb0);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xbb0));
      }
      puVar10 = *(undefined4 **)(param_1 + 0xb14);
      uVar12 = *(undefined4 *)(param_1 + 0xb10);
      pcVar5 = (code *)*puVar10;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
    default:
      goto switchD_00d28f38_caseD_1;
    case 3:
      puVar10 = *(undefined4 **)(param_1 + 0xbd4);
      iVar2 = *(int *)(param_1 + 0xbd0);
      pcVar5 = (code *)*puVar10;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar2);
      }
      if (puVar10[1] != 0) {
LAB_00d29160:
        thunk_FUN_016d3fb4(iVar2);
      }
      break;
    case 4:
      if (*(char *)(param_1 + 0xca0) == '\x03') {
        cVar1 = *(char *)(param_1 + 0xbe0);
        if (cVar1 == '\x04') {
          if (*(char *)(param_1 + 0xc10) == '\x04') {
            FUN_00a07b4c(param_1 + 0xc48);
            piVar8 = (int *)(param_1 + 0xc30);
            puVar10 = (undefined4 *)(*piVar8 + 4);
            for (iVar2 = *(int *)(param_1 + 0xc34); iVar2 != 0; iVar2 = iVar2 + -1) {
              if (puVar10[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar10);
              }
              puVar10 = puVar10 + 5;
            }
            iVar2 = *(int *)(param_1 + 0xc2c);
            iVar3 = 0xc14;
            goto LAB_00d29ae8;
          }
          if (*(char *)(param_1 + 0xc10) == '\x03') {
            FUN_00a07b4c(param_1 + 0xc18);
          }
        }
        else {
          bVar14 = cVar1 == '\x03';
          if (bVar14) {
            cVar1 = *(char *)(param_1 + 0xc70);
          }
          if (bVar14 && cVar1 == '\x03') {
            FUN_00a07b4c(param_1 + 0xbf8);
            piVar8 = (int *)(param_1 + 0xc68);
            puVar10 = (undefined4 *)(*piVar8 + 4);
            for (iVar2 = *(int *)(param_1 + 0xc6c); iVar2 != 0; iVar2 = iVar2 + -1) {
              if (puVar10[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar10);
              }
              puVar10 = puVar10 + 5;
            }
            iVar2 = *(int *)(param_1 + 0xc64);
            iVar3 = 0xc58;
LAB_00d29ae8:
            if (iVar2 != 0) {
              thunk_FUN_016d3fb4(*piVar8);
            }
            if (*(int *)(param_1 + iVar3) != 0) {
              iVar2 = ((int *)(param_1 + iVar3))[1];
              goto LAB_00d29160;
            }
          }
        }
      }
      break;
    case 5:
      FUN_00cefb4c(param_1 + 0xbd4);
      (**(code **)**(undefined4 **)(param_1 + 0xbd0))();
    }
    piVar9 = (int *)(param_1 + 0xbc0);
    FUN_00d0b738(piVar9);
    piVar8 = (int *)*piVar9;
    if (piVar8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*piVar9);
      }
    }
    iVar2 = *(int *)(param_1 + 0xbbc);
    *(undefined1 *)(param_1 + 0xbc6) = 0;
    if (iVar2 != 0) {
      piVar8 = (int *)(iVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar3 + -1;
      DataMemoryBarrier(0xb);
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
          puVar4 = (uint *)(iVar2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar14 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar14);
          *puVar4 = *puVar4 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar4 = (uint *)(iVar2 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar4;
          bVar14 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar14);
        *puVar4 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar3 = *(int *)(iVar2 + 0x18);
          *(undefined4 *)(iVar2 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar14 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar14);
          *puVar4 = *puVar4 & 0xfffffffd;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x1c));
          }
        }
      }
      piVar8 = *(int **)(param_1 + 0xbbc);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*(undefined4 *)(param_1 + 0xbbc));
      }
    }
    piVar9 = *(int **)(param_1 + 0xba0);
    *(undefined1 *)(param_1 + 0xbc7) = 0;
    piVar8 = piVar9 + 0x65;
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      FUN_0163b708(piVar9 + 0x22);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar9;
      bVar14 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar14);
    *piVar9 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f17d0(*(undefined4 *)(param_1 + 0xba0));
    }
    iVar2 = *(int *)(param_1 + 3000);
    *(undefined1 *)(param_1 + 0xbc8) = 0;
    piVar8 = (int *)(iVar2 + 0x198);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      puVar4 = (uint *)(iVar2 + 400);
      DataMemoryBarrier(0xb);
      do {
        bVar14 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar14);
      *puVar4 = *puVar4 | 1;
      FUN_01650dd0(iVar2 + 8);
    }
    piVar8 = *(int **)(param_1 + 3000);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f17d0(*(undefined4 *)(param_1 + 3000));
    }
    puVar10 = *(undefined4 **)(param_1 + 0xb9c);
    uVar12 = *(undefined4 *)(param_1 + 0xb98);
    pcVar5 = (code *)*puVar10;
    *(undefined1 *)(param_1 + 0xbc9) = 0;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar12);
    }
    if (puVar10[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    *(undefined1 *)(param_1 + 0xbca) = 0;
    if (*(char *)(param_1 + 0xbc5) != '\0') {
      piVar8 = *(int **)(param_1 + 0xbb4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xbb4));
      }
    }
    *(undefined1 *)(param_1 + 0xbc5) = 0;
switchD_00d28f38_caseD_1:
    if (*(char *)(param_1 + 0xa84) != '\0') {
      piVar8 = *(int **)(param_1 + 0xa8c);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xa8c));
      }
    }
    piVar8 = *(int **)(param_1 + 0xa78);
    *(undefined1 *)(param_1 + 0xa84) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa78));
    }
    piVar8 = *(int **)(param_1 + 0xa74);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa74));
    }
    piVar8 = *(int **)(param_1 + 0xa70);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa70));
    }
    if (*(char *)(param_1 + 0xa85) != '\0') {
      piVar8 = *(int **)(param_1 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xa88));
      }
    }
    piVar8 = *(int **)(param_1 + 0xa6c);
    *(undefined1 *)(param_1 + 0xa85) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa6c));
    }
    piVar8 = *(int **)(param_1 + 0xa68);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa68));
    }
    if (*(char *)(param_1 + 0xa81) != '\0') {
      FUN_00adbed4(param_1 + 0x6e0);
    }
    *(undefined1 *)(param_1 + 0xa81) = 0;
    if (*(char *)(param_1 + 0xa82) != '\0') {
      FUN_00d02818(param_1 + 0x6b0);
    }
    *(undefined1 *)(param_1 + 0xa82) = 0;
    break;
  case 5:
    FUN_00ceee6c(param_1 + 0xa8c);
    goto switchD_00d28fe8_caseD_1;
  case 6:
    switch(*(undefined1 *)(param_1 + 0x11ec)) {
    case 0:
      FUN_00adbed4(param_1 + 0xa88);
      piVar8 = *(int **)(param_1 + 0x1190);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(*(undefined4 *)(param_1 + 0x1190));
      }
      FUN_00d02818(param_1 + 0xdb0);
      piVar8 = *(int **)(param_1 + 0x1194);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0x1194));
      }
      if (*(int *)(param_1 + 0xde0) == 0) {
        piVar8 = *(int **)(param_1 + 0xde4);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659344(*(undefined4 *)(param_1 + 0xde4));
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 0xde4);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016586fc(*(undefined4 *)(param_1 + 0xde4));
        }
      }
    default:
      goto switchD_00d28fe8_caseD_1;
    case 3:
      switch(*(undefined1 *)(param_1 + 0x1214)) {
      case 0:
        iVar2 = *(int *)(param_1 + 0x1208);
        if (iVar2 != 0) {
          piVar8 = (int *)(iVar2 + 0x14);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar8;
            bVar14 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar14);
          *piVar8 = iVar3 + -1;
          DataMemoryBarrier(0xb);
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
              puVar4 = (uint *)(iVar2 + 0x10);
              DataMemoryBarrier(0xb);
              do {
                bVar14 = (bool)hasExclusiveAccess(puVar4);
              } while (!bVar14);
              *puVar4 = *puVar4 & 0x7fffffff;
              DataMemoryBarrier(0xb);
            }
            puVar4 = (uint *)(iVar2 + 0x20);
            DataMemoryBarrier(0xb);
            do {
              uVar7 = *puVar4;
              bVar14 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar14);
            *puVar4 = uVar7 | 2;
            DataMemoryBarrier(0xb);
            if (uVar7 == 0) {
              iVar3 = *(int *)(iVar2 + 0x18);
              *(undefined4 *)(iVar2 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar14 = (bool)hasExclusiveAccess(puVar4);
              } while (!bVar14);
              *puVar4 = *puVar4 & 0xfffffffd;
              if (iVar3 != 0) {
                (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x1c));
              }
            }
          }
          piVar8 = *(int **)(param_1 + 0x1208);
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar8;
            bVar14 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar14);
          *piVar8 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f23b4(*(undefined4 *)(param_1 + 0x1208));
          }
        }
      default:
        goto switchD_00d29454_caseD_1;
      case 3:
        FUN_00cea588(param_1 + 0x1220);
        break;
      case 4:
        FUN_00cea648(param_1 + 0x1218);
        break;
      case 5:
        break;
      }
      *(undefined1 *)(param_1 + 0x1211) = 0;
      if (*(char *)(param_1 + 0x1210) != '\0') {
        FUN_00cea648(param_1 + 0x1218);
      }
      *(undefined2 *)(param_1 + 0x1212) = 0;
      *(undefined1 *)(param_1 + 0x1210) = 0;
      goto switchD_00d29454_caseD_1;
    case 4:
      uVar12 = *(undefined4 *)(param_1 + 0x1208);
      puVar10 = *(undefined4 **)(param_1 + 0x120c);
      pcVar5 = (code *)*puVar10;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      goto LAB_00d29c70;
    case 5:
      cVar1 = *(char *)(param_1 + 0x1264);
      if (cVar1 == '\x04') {
        if (*(int *)(param_1 + 0x1280) != 0) {
          FUN_00c8204c(*(int *)(param_1 + 0x1280),*(undefined4 *)(param_1 + 0x1284),1);
        }
        if (1 < *(int *)(param_1 + 0x1270) + 1U) {
          iVar2 = *(int *)(param_1 + 0x1274);
          piVar8 = (int *)(*(int *)(param_1 + 0x1270) + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar8;
            bVar14 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar14);
          *piVar8 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            uVar7 = *(uint *)(iVar2 + 8);
            if (uVar7 < 5) {
              uVar7 = 4;
            }
            if ((*(int *)(iVar2 + 4) + uVar7 + 7 & -uVar7) != 0) {
              thunk_FUN_016d3fb4();
            }
          }
        }
        piVar8 = *(int **)(param_1 + 0x1278);
        *(undefined1 *)(param_1 + 0x1265) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1278),*(undefined4 *)(param_1 + 0x127c));
        }
LAB_00d29bf4:
        piVar8 = *(int **)(param_1 + 0x1260);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(param_1 + 0x1260));
        }
        piVar8 = *(int **)(param_1 + 0x125c);
        *(undefined2 *)(param_1 + 0x1266) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_009ba47c(*(undefined4 *)(param_1 + 0x125c));
        }
        *(undefined1 *)(param_1 + 0x1268) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0x1280);
          if (cVar1 == '\x04') {
            puVar10 = *(undefined4 **)(param_1 + 0x1288);
            uVar12 = *(undefined4 *)(param_1 + 0x1284);
            if ((code *)*puVar10 != (code *)0x0) {
              (*(code *)*puVar10)(uVar12);
            }
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 == '\0') {
                if (*(int *)(param_1 + 0x1270) == 0) {
                  piVar8 = *(int **)(param_1 + 0x1274);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar2 = *piVar8;
                    bVar14 = (bool)hasExclusiveAccess(piVar8);
                  } while (!bVar14);
                  *piVar8 = iVar2 + -1;
                }
                else {
                  piVar8 = *(int **)(param_1 + 0x1274);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar2 = *piVar8;
                    bVar14 = (bool)hasExclusiveAccess(piVar8);
                  } while (!bVar14);
                  *piVar8 = iVar2 + -1;
                }
                if (iVar2 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1274),*(undefined4 *)(param_1 + 0x1278));
                }
              }
              goto LAB_00d29bf4;
            }
            puVar10 = *(undefined4 **)(param_1 + 0x1288);
            uVar12 = *(undefined4 *)(param_1 + 0x1284);
            if ((code *)*puVar10 != (code *)0x0) {
              (*(code *)*puVar10)(uVar12);
            }
          }
          if (puVar10[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          *(undefined1 *)(param_1 + 0x1281) = 0;
          goto LAB_00d29bf4;
        }
        if (cVar1 == '\0') {
          uVar12 = *(undefined4 *)(param_1 + 0x1230);
          puVar10 = *(undefined4 **)(param_1 + 0x1234);
          pcVar5 = (code *)*puVar10;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar12);
          }
          if (puVar10[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          iVar2 = *(int *)(param_1 + 0x123c);
          if (iVar2 != 0) {
            piVar8 = (int *)(iVar2 + 0x14);
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar8;
              bVar14 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar14);
            *piVar8 = iVar3 + -1;
            DataMemoryBarrier(0xb);
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
                puVar4 = (uint *)(iVar2 + 0x10);
                DataMemoryBarrier(0xb);
                do {
                  bVar14 = (bool)hasExclusiveAccess(puVar4);
                } while (!bVar14);
                *puVar4 = *puVar4 & 0x7fffffff;
                DataMemoryBarrier(0xb);
              }
              puVar4 = (uint *)(iVar2 + 0x20);
              DataMemoryBarrier(0xb);
              do {
                uVar7 = *puVar4;
                bVar14 = (bool)hasExclusiveAccess(puVar4);
              } while (!bVar14);
              *puVar4 = uVar7 | 2;
              DataMemoryBarrier(0xb);
              if (uVar7 == 0) {
                iVar3 = *(int *)(iVar2 + 0x18);
                *(undefined4 *)(iVar2 + 0x18) = 0;
                DataMemoryBarrier(0xb);
                do {
                  bVar14 = (bool)hasExclusiveAccess(puVar4);
                } while (!bVar14);
                *puVar4 = *puVar4 & 0xfffffffd;
                if (iVar3 != 0) {
                  (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x1c));
                }
              }
            }
            piVar8 = *(int **)(param_1 + 0x123c);
            DataMemoryBarrier(0xb);
            do {
              iVar2 = *piVar8;
              bVar14 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar14);
            *piVar8 = iVar2 + -1;
            if (iVar2 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f23b4(*(undefined4 *)(param_1 + 0x123c));
            }
          }
          piVar8 = *(int **)(param_1 + 0x1250);
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar8;
            bVar14 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar14);
          *piVar8 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f1a50(*(undefined4 *)(param_1 + 0x1250));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x11f8) = 0;
LAB_00d29c70:
      if (*(char *)(param_1 + 0x11f4) != '\0') {
        uVar12 = *(undefined4 *)(param_1 + 0x1200);
        puVar10 = *(undefined4 **)(param_1 + 0x1204);
        pcVar5 = (code *)*puVar10;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar12);
        }
        if (puVar10[1] != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
      }
      *(undefined1 *)(param_1 + 0x11f4) = 0;
      FUN_01242328(param_1 + 0x1148);
      goto LAB_00d29cbc;
    case 6:
      FUN_00ceee6c(param_1 + 0x1200);
      goto LAB_00d29a40;
    case 7:
      FUN_00ceee6c(param_1 + 0x1204);
      break;
    case 8:
      if (*(char *)(param_1 + 0x1265) == '\x03') {
        FUN_00ceee6c(param_1 + 0x1200);
        FUN_00ce1e64(*(undefined4 *)(param_1 + 0x1258),*(undefined4 *)(param_1 + 0x125c));
        if (*(int *)(param_1 + 0x1254) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1258));
        }
        *(undefined1 *)(param_1 + 0x1264) = 0;
      }
      break;
    case 9:
      if (*(char *)(param_1 + 0x1294) == '\x03') {
        if (*(char *)(param_1 + 0x123c) == '\x04') {
          FUN_00ceee6c(param_1 + 0x1240);
        }
        else {
          if (*(char *)(param_1 + 0x123c) != '\x03') break;
          FUN_00ceee6c(param_1 + 0x1244);
        }
        if (*(char *)(param_1 + 0x1239) != '\0') {
          piVar8 = *(int **)(param_1 + 0x1240);
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar8;
            bVar14 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar14);
          *piVar8 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d0668c(*(undefined4 *)(param_1 + 0x1240));
          }
        }
        piVar8 = *(int **)(param_1 + 0x1230);
        *(undefined1 *)(param_1 + 0x1239) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d0668c(*(undefined4 *)(param_1 + 0x1230));
        }
        piVar8 = *(int **)(param_1 + 0x1210);
        *(undefined1 *)(param_1 + 0x1238) = 0;
        *(undefined1 *)(param_1 + 0x123a) = 0;
        if (piVar8 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar8;
            bVar14 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar14);
          *piVar8 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015614d8(*(undefined4 *)(param_1 + 0x1210),*(undefined4 *)(param_1 + 0x1214));
          }
        }
        piVar8 = *(int **)(param_1 + 0x1220);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0x1220));
        }
        piVar8 = *(int **)(param_1 + 0x121c);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0x121c));
        }
        *(undefined1 *)(param_1 + 0x123b) = 0;
      }
    }
    if (*(char *)(param_1 + 0x11f3) != '\0') {
      piVar8 = *(int **)(param_1 + 0x1200);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1030(*(undefined4 *)(param_1 + 0x1200));
      }
    }
    *(undefined1 *)(param_1 + 0x11f3) = 0;
LAB_00d29a40:
    piVar8 = *(int **)(param_1 + 0x11e8);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x11e8));
    }
    *(undefined2 *)(param_1 + 0x11f5) = 0;
    FUN_00adc0f8(param_1 + 0x11cc);
    *(undefined1 *)(param_1 + 0x11f7) = 0;
LAB_00d29cbc:
    piVar8 = *(int **)(param_1 + 0x11c4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f2e10(*(undefined4 *)(param_1 + 0x11c4));
    }
    if ((*(char *)(param_1 + 0x11ee) != '\0') &&
       (FUN_00ce1a70(*(undefined4 *)(param_1 + 0x11bc),*(undefined4 *)(param_1 + 0x11c0)),
       *(int *)(param_1 + 0x11b8) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11bc));
    }
    *(undefined1 *)(param_1 + 0x11ee) = 0;
switchD_00d29454_caseD_1:
    *(undefined1 *)(param_1 + 0x11f9) = 0;
    if (*(char *)(param_1 + 0x11ef) != '\0') {
      piVar8 = *(int **)(param_1 + 0x11b4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1420(*(undefined4 *)(param_1 + 0x11b4));
      }
    }
    *(undefined1 *)(param_1 + 0x11ef) = 0;
    if (*(char *)(param_1 + 0x11f1) != '\0') {
      if (*(int *)(param_1 + 0x11a8) != 0) {
        iVar2 = 1 - *(int *)(param_1 + 0x11a8);
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0x11a4) + 4);
        do {
          uVar12 = puVar10[-1];
          puVar13 = (undefined4 *)*puVar10;
          pcVar5 = (code *)*puVar13;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar12);
          }
          if (puVar13[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          iVar2 = iVar2 + 1;
          puVar10 = puVar10 + 2;
        } while (iVar2 != 1);
      }
      if (*(int *)(param_1 + 0x11a0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11a4));
      }
    }
    if (*(char *)(param_1 + 0x11f0) != '\0') {
      piVar8 = *(int **)(param_1 + 0x11ac);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x11ac),*(undefined4 *)(param_1 + 0x11b0));
      }
    }
    *(undefined2 *)(param_1 + 0x11f0) = 0;
    if (*(int *)(param_1 + 0x1140) == 0) {
      piVar8 = *(int **)(param_1 + 0x1144);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(*(undefined4 *)(param_1 + 0x1144));
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 0x1144);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(*(undefined4 *)(param_1 + 0x1144));
      }
    }
    piVar8 = *(int **)(param_1 + 0x119c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x119c));
    }
    FUN_00d02818(param_1 + 0x1110);
    piVar8 = *(int **)(param_1 + 0x1198);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x1198));
    }
    if (*(char *)(param_1 + 0x11f2) != '\0') {
      FUN_00adbed4(param_1 + 0xde8);
    }
    *(undefined1 *)(param_1 + 0x11f2) = 0;
switchD_00d28fe8_caseD_1:
    if (*(char *)(param_1 + 0xa83) != '\0') {
      piVar8 = *(int **)(param_1 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar14 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar14);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(*(undefined4 *)(param_1 + 0xa88));
      }
    }
    piVar8 = *(int **)(param_1 + 0xa7c);
    *(undefined1 *)(param_1 + 0xa83) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0xa7c));
    }
    goto switchD_00d28f38_caseD_1;
  }
  piVar8 = (int *)*puVar11;
  if (piVar8 != (int *)0x0) {
    puVar4 = (uint *)(piVar8 + 8);
    uVar7 = piVar8[8];
    do {
      while( true ) {
        uVar6 = uVar7;
        if ((uVar6 & 4) != 0) goto LAB_00d2a1a8;
        uVar7 = *puVar4;
        if (uVar7 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar14 = (bool)hasExclusiveAccess(puVar4);
      if (bVar14) {
        *puVar4 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar14);
LAB_00d2a1a8:
    if ((uVar6 & 5) == 1) {
      (**(code **)(piVar8[6] + 8))(piVar8[7]);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar8;
      bVar14 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar14);
    *piVar8 = iVar2 + -1;
LAB_00d2a1dc:
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d02bf8(*puVar11);
      return;
    }
  }
  return;
}

