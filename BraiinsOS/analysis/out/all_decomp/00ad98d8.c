// FUN_00ad98d8 @ 00ad98d8 size=4816 calls_out=34 calls_in=2
// strings: 

void FUN_00ad98d8(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  piVar10 = (int *)(param_1 + 0x12a0);
  if (*(char *)(param_1 + 0x12a4) == '\0') {
    FUN_00adbb98(param_1 + 0x328);
    FUN_00adbed4(param_1);
    piVar3 = *(int **)(param_1 + 0x1298);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x1298));
    }
    piVar3 = *(int **)(param_1 + 0x129c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x129c));
    }
    iVar2 = *piVar10;
    if (iVar2 == 0) {
      return;
    }
    puVar6 = (uint *)(iVar2 + 0x20);
    uVar8 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar7 = uVar8;
        if ((uVar7 & 4) != 0) goto LAB_00ad9a88;
        uVar8 = *puVar6;
        if (uVar8 == uVar7) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar14 = (bool)hasExclusiveAccess(puVar6);
      if (bVar14) {
        *puVar6 = uVar7 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar14);
LAB_00ad9a88:
    if ((uVar7 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = (int *)*piVar10;
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    goto LAB_00adabf8;
  }
  if (*(char *)(param_1 + 0x12a4) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xa80)) {
  case 0:
    FUN_00adbb98(param_1 + 0x680);
    FUN_00adbed4(param_1 + 0x358);
    piVar3 = *(int **)(param_1 + 0xa60);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa60));
    }
    piVar3 = *(int **)(param_1 + 0xa64);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa64));
    }
    break;
  case 3:
    FUN_00ac9344(param_1 + 0xa90);
    goto switchD_00ad9ae0_caseD_1;
  case 4:
    switch(*(undefined1 *)(param_1 + 0xbc4)) {
    case 0:
      piVar3 = *(int **)(param_1 + 0xbb0);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xbb0));
      }
      puVar11 = *(undefined4 **)(param_1 + 0xb14);
      uVar12 = *(undefined4 *)(param_1 + 0xb10);
      pcVar5 = (code *)*puVar11;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
    default:
      goto switchD_00ad9ae0_caseD_1;
    case 3:
      puVar11 = *(undefined4 **)(param_1 + 0xbd4);
      iVar2 = *(int *)(param_1 + 0xbd0);
      pcVar5 = (code *)*puVar11;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar2);
      }
      if (puVar11[1] != 0) {
LAB_00ad9d08:
        thunk_FUN_016d3fb4(iVar2);
      }
      break;
    case 4:
      if (*(char *)(param_1 + 0xca0) == '\x03') {
        cVar1 = *(char *)(param_1 + 0xbe0);
        if (cVar1 == '\x04') {
          if (*(char *)(param_1 + 0xc10) == '\x04') {
            FUN_00a07b4c(param_1 + 0xc48);
            piVar3 = (int *)(param_1 + 0xc30);
            puVar11 = (undefined4 *)(*piVar3 + 4);
            for (iVar2 = *(int *)(param_1 + 0xc34); iVar2 != 0; iVar2 = iVar2 + -1) {
              if (puVar11[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar11);
              }
              puVar11 = puVar11 + 5;
            }
            iVar2 = *(int *)(param_1 + 0xc2c);
            iVar4 = 0xc14;
            goto LAB_00ada54c;
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
            piVar3 = (int *)(param_1 + 0xc68);
            puVar11 = (undefined4 *)(*piVar3 + 4);
            for (iVar2 = *(int *)(param_1 + 0xc6c); iVar2 != 0; iVar2 = iVar2 + -1) {
              if (puVar11[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar11);
              }
              puVar11 = puVar11 + 5;
            }
            iVar2 = *(int *)(param_1 + 0xc64);
            iVar4 = 0xc58;
LAB_00ada54c:
            if (iVar2 != 0) {
              thunk_FUN_016d3fb4(*piVar3);
            }
            if (*(int *)(param_1 + iVar4) != 0) {
              iVar2 = ((int *)(param_1 + iVar4))[1];
              goto LAB_00ad9d08;
            }
          }
        }
      }
      break;
    case 5:
      FUN_00654988(param_1 + 0xbd4);
      (**(code **)**(undefined4 **)(param_1 + 0xbd0))();
    }
    piVar9 = (int *)(param_1 + 0xbc0);
    FUN_00d0b738(piVar9);
    piVar3 = (int *)*piVar9;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*piVar9);
      }
    }
    iVar2 = *(int *)(param_1 + 0xbbc);
    *(undefined1 *)(param_1 + 0xbc6) = 0;
    if (iVar2 != 0) {
      piVar3 = (int *)(iVar2 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
          puVar6 = (uint *)(iVar2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar14 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar14);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(iVar2 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar6;
          bVar14 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar14);
        *puVar6 = uVar8 | 2;
        DataMemoryBarrier(0xb);
        if (uVar8 == 0) {
          iVar4 = *(int *)(iVar2 + 0x18);
          *(undefined4 *)(iVar2 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar14 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar14);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
          }
        }
      }
      piVar3 = *(int **)(param_1 + 0xbbc);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*(undefined4 *)(param_1 + 0xbbc));
      }
    }
    iVar2 = *(int *)(param_1 + 0xba0);
    *(undefined1 *)(param_1 + 0xbc7) = 0;
    piVar3 = (int *)(iVar2 + 0x194);
    do {
      iVar4 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar3 = *(int **)(param_1 + 0xba0);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f17d0(*(undefined4 *)(param_1 + 0xba0));
    }
    *(undefined1 *)(param_1 + 0xbc8) = 0;
    FUN_00d3e838(*(undefined4 *)(param_1 + 3000));
    piVar3 = *(int **)(param_1 + 3000);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f17d0(*(undefined4 *)(param_1 + 3000));
    }
    puVar11 = *(undefined4 **)(param_1 + 0xb9c);
    uVar12 = *(undefined4 *)(param_1 + 0xb98);
    pcVar5 = (code *)*puVar11;
    *(undefined1 *)(param_1 + 0xbc9) = 0;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar12);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_016d3fb4(uVar12);
    }
    *(undefined1 *)(param_1 + 0xbca) = 0;
    if (*(char *)(param_1 + 0xbc5) != '\0') {
      piVar3 = *(int **)(param_1 + 0xbb4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xbb4));
      }
    }
    *(undefined1 *)(param_1 + 0xbc5) = 0;
switchD_00ad9ae0_caseD_1:
    if (*(char *)(param_1 + 0xa84) != '\0') {
      piVar3 = *(int **)(param_1 + 0xa8c);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xa8c));
      }
    }
    piVar3 = *(int **)(param_1 + 0xa78);
    *(undefined1 *)(param_1 + 0xa84) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa78));
    }
    piVar3 = *(int **)(param_1 + 0xa74);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa74));
    }
    piVar3 = *(int **)(param_1 + 0xa70);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa70));
    }
    if (*(char *)(param_1 + 0xa85) != '\0') {
      piVar3 = *(int **)(param_1 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0xa88));
      }
    }
    piVar3 = *(int **)(param_1 + 0xa6c);
    *(undefined1 *)(param_1 + 0xa85) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa6c));
    }
    piVar3 = *(int **)(param_1 + 0xa68);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa68));
    }
    if (*(char *)(param_1 + 0xa81) != '\0') {
      FUN_00adbed4(param_1 + 0x6e0);
    }
    *(undefined1 *)(param_1 + 0xa81) = 0;
    if (*(char *)(param_1 + 0xa82) != '\0') {
      FUN_00adbb98(param_1 + 0x6b0);
    }
    *(undefined1 *)(param_1 + 0xa82) = 0;
    break;
  case 5:
    FUN_00ac9344(param_1 + 0xa8c);
    goto switchD_00ad9b90_caseD_1;
  case 6:
    switch(*(undefined1 *)(param_1 + 0x11ec)) {
    case 0:
      FUN_00adbed4(param_1 + 0xa88);
      piVar3 = *(int **)(param_1 + 0x1190);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(*(undefined4 *)(param_1 + 0x1190));
      }
      FUN_00adbb98(param_1 + 0xdb0);
      piVar3 = *(int **)(param_1 + 0x1194);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0x1194));
      }
      if (*(int *)(param_1 + 0xde0) == 0) {
        piVar3 = *(int **)(param_1 + 0xde4);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659344(*(undefined4 *)(param_1 + 0xde4));
        }
      }
      else {
        piVar3 = *(int **)(param_1 + 0xde4);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016586fc(*(undefined4 *)(param_1 + 0xde4));
        }
      }
    default:
      goto switchD_00ad9b90_caseD_1;
    case 3:
      switch(*(undefined1 *)(param_1 + 0x1214)) {
      case 0:
        if (*(int *)(param_1 + 0x1208) != 0) {
          FUN_00d424fc();
          piVar3 = *(int **)(param_1 + 0x1208);
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar14 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar14);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f23b4(*(undefined4 *)(param_1 + 0x1208));
          }
        }
      default:
        goto switchD_00ad9fb8_caseD_1;
      case 3:
        FUN_00aca278(param_1 + 0x1220);
        break;
      case 4:
        FUN_00d3e8cc(*(undefined4 *)(param_1 + 0x1218));
        piVar3 = *(int **)(param_1 + 0x1218);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar14 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar14);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f4380(*(undefined4 *)(param_1 + 0x1218));
          }
        }
        break;
      case 5:
        break;
      }
      *(undefined1 *)(param_1 + 0x1211) = 0;
      if (*(char *)(param_1 + 0x1210) != '\0') {
        FUN_00d3e8cc(*(undefined4 *)(param_1 + 0x1218));
        piVar3 = *(int **)(param_1 + 0x1218);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar14 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar14);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f4380(*(undefined4 *)(param_1 + 0x1218));
          }
        }
      }
      *(undefined2 *)(param_1 + 0x1212) = 0;
      *(undefined1 *)(param_1 + 0x1210) = 0;
      goto switchD_00ad9fb8_caseD_1;
    case 4:
      uVar12 = *(undefined4 *)(param_1 + 0x1208);
      puVar11 = *(undefined4 **)(param_1 + 0x120c);
      pcVar5 = (code *)*puVar11;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar12);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      goto LAB_00ada680;
    case 5:
      cVar1 = *(char *)(param_1 + 0x1264);
      if (cVar1 == '\x04') {
        if (*(int *)(param_1 + 0x1280) != 0) {
          FUN_00c8204c(*(int *)(param_1 + 0x1280),*(undefined4 *)(param_1 + 0x1284),1);
        }
        if (*(int *)(param_1 + 0x1270) != 0) {
          FUN_0099b40c();
        }
        piVar3 = *(int **)(param_1 + 0x1278);
        *(undefined1 *)(param_1 + 0x1265) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1278),*(undefined4 *)(param_1 + 0x127c));
        }
LAB_00ada604:
        piVar3 = *(int **)(param_1 + 0x1260);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(param_1 + 0x1260));
        }
        piVar3 = *(int **)(param_1 + 0x125c);
        *(undefined2 *)(param_1 + 0x1266) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
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
            puVar11 = *(undefined4 **)(param_1 + 0x1288);
            uVar12 = *(undefined4 *)(param_1 + 0x1284);
            if ((code *)*puVar11 != (code *)0x0) {
              (*(code *)*puVar11)(uVar12);
            }
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 == '\0') {
                if (*(int *)(param_1 + 0x1270) == 0) {
                  piVar3 = *(int **)(param_1 + 0x1274);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar2 = *piVar3;
                    bVar14 = (bool)hasExclusiveAccess(piVar3);
                  } while (!bVar14);
                  *piVar3 = iVar2 + -1;
                }
                else {
                  piVar3 = *(int **)(param_1 + 0x1274);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar2 = *piVar3;
                    bVar14 = (bool)hasExclusiveAccess(piVar3);
                  } while (!bVar14);
                  *piVar3 = iVar2 + -1;
                }
                if (iVar2 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0089ddfc(*(undefined4 *)(param_1 + 0x1274),*(undefined4 *)(param_1 + 0x1278));
                }
              }
              goto LAB_00ada604;
            }
            puVar11 = *(undefined4 **)(param_1 + 0x1288);
            uVar12 = *(undefined4 *)(param_1 + 0x1284);
            if ((code *)*puVar11 != (code *)0x0) {
              (*(code *)*puVar11)(uVar12);
            }
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          *(undefined1 *)(param_1 + 0x1281) = 0;
          goto LAB_00ada604;
        }
        if (cVar1 == '\0') {
          uVar12 = *(undefined4 *)(param_1 + 0x1230);
          puVar11 = *(undefined4 **)(param_1 + 0x1234);
          pcVar5 = (code *)*puVar11;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar12);
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          if (*(int *)(param_1 + 0x123c) != 0) {
            FUN_00d424fc();
            piVar3 = *(int **)(param_1 + 0x123c);
            DataMemoryBarrier(0xb);
            do {
              iVar2 = *piVar3;
              bVar14 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar14);
            *piVar3 = iVar2 + -1;
            if (iVar2 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f23b4(*(undefined4 *)(param_1 + 0x123c));
            }
          }
          piVar3 = *(int **)(param_1 + 0x1250);
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar14 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar14);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f1a50(*(undefined4 *)(param_1 + 0x1250));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x11f8) = 0;
LAB_00ada680:
      if (*(char *)(param_1 + 0x11f4) != '\0') {
        uVar12 = *(undefined4 *)(param_1 + 0x1200);
        puVar11 = *(undefined4 **)(param_1 + 0x1204);
        pcVar5 = (code *)*puVar11;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar12);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
      }
      *(undefined1 *)(param_1 + 0x11f4) = 0;
      FUN_01242328(param_1 + 0x1148);
      goto LAB_00ada6cc;
    case 6:
      FUN_00ac9344(param_1 + 0x1200);
      goto LAB_00ada4a4;
    case 7:
      FUN_00ac9344(param_1 + 0x1204);
      break;
    case 8:
      if (*(char *)(param_1 + 0x1265) == '\x03') {
        FUN_00ac9344(param_1 + 0x1200);
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
          FUN_00ac9344(param_1 + 0x1240);
        }
        else {
          if (*(char *)(param_1 + 0x123c) != '\x03') break;
          FUN_00ac9344(param_1 + 0x1244);
        }
        if (*(char *)(param_1 + 0x1239) != '\0') {
          piVar3 = *(int **)(param_1 + 0x1240);
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar14 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar14);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00d0668c(*(undefined4 *)(param_1 + 0x1240));
          }
        }
        piVar3 = *(int **)(param_1 + 0x1230);
        *(undefined1 *)(param_1 + 0x1239) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d0668c(*(undefined4 *)(param_1 + 0x1230));
        }
        piVar3 = *(int **)(param_1 + 0x1210);
        *(undefined1 *)(param_1 + 0x1238) = 0;
        *(undefined1 *)(param_1 + 0x123a) = 0;
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar14 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar14);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015614d8(*(undefined4 *)(param_1 + 0x1210),*(undefined4 *)(param_1 + 0x1214));
          }
        }
        piVar3 = *(int **)(param_1 + 0x1220);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0x1220));
        }
        piVar3 = *(int **)(param_1 + 0x121c);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar14 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar14);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0x121c));
        }
        *(undefined1 *)(param_1 + 0x123b) = 0;
      }
    }
    if (*(char *)(param_1 + 0x11f3) != '\0') {
      piVar3 = *(int **)(param_1 + 0x1200);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1030(*(undefined4 *)(param_1 + 0x1200));
      }
    }
    *(undefined1 *)(param_1 + 0x11f3) = 0;
LAB_00ada4a4:
    piVar3 = *(int **)(param_1 + 0x11e8);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x11e8));
    }
    *(undefined2 *)(param_1 + 0x11f5) = 0;
    FUN_00adc0f8(param_1 + 0x11cc);
    *(undefined1 *)(param_1 + 0x11f7) = 0;
LAB_00ada6cc:
    piVar3 = *(int **)(param_1 + 0x11c4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
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
switchD_00ad9fb8_caseD_1:
    *(undefined1 *)(param_1 + 0x11f9) = 0;
    if (*(char *)(param_1 + 0x11ef) != '\0') {
      piVar3 = *(int **)(param_1 + 0x11b4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1420(*(undefined4 *)(param_1 + 0x11b4));
      }
    }
    *(undefined1 *)(param_1 + 0x11ef) = 0;
    if (*(char *)(param_1 + 0x11f1) != '\0') {
      if (*(int *)(param_1 + 0x11a8) != 0) {
        iVar2 = 1 - *(int *)(param_1 + 0x11a8);
        puVar11 = (undefined4 *)(*(int *)(param_1 + 0x11a4) + 4);
        do {
          uVar12 = puVar11[-1];
          puVar13 = (undefined4 *)*puVar11;
          pcVar5 = (code *)*puVar13;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar12);
          }
          if (puVar13[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          iVar2 = iVar2 + 1;
          puVar11 = puVar11 + 2;
        } while (iVar2 != 1);
      }
      if (*(int *)(param_1 + 0x11a0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11a4));
      }
    }
    if (*(char *)(param_1 + 0x11f0) != '\0') {
      piVar3 = *(int **)(param_1 + 0x11ac);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x11ac),*(undefined4 *)(param_1 + 0x11b0));
      }
    }
    *(undefined2 *)(param_1 + 0x11f0) = 0;
    if (*(int *)(param_1 + 0x1140) == 0) {
      piVar3 = *(int **)(param_1 + 0x1144);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(*(undefined4 *)(param_1 + 0x1144));
      }
    }
    else {
      piVar3 = *(int **)(param_1 + 0x1144);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(*(undefined4 *)(param_1 + 0x1144));
      }
    }
    piVar3 = *(int **)(param_1 + 0x119c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x119c));
    }
    FUN_00adbb98(param_1 + 0x1110);
    piVar3 = *(int **)(param_1 + 0x1198);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0x1198));
    }
    if (*(char *)(param_1 + 0x11f2) != '\0') {
      FUN_00adbed4(param_1 + 0xde8);
    }
    *(undefined1 *)(param_1 + 0x11f2) = 0;
switchD_00ad9b90_caseD_1:
    if (*(char *)(param_1 + 0xa83) != '\0') {
      piVar3 = *(int **)(param_1 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(*(undefined4 *)(param_1 + 0xa88));
      }
    }
    piVar3 = *(int **)(param_1 + 0xa7c);
    *(undefined1 *)(param_1 + 0xa83) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1a50(*(undefined4 *)(param_1 + 0xa7c));
    }
    goto switchD_00ad9ae0_caseD_1;
  }
  iVar2 = *piVar10;
  if (iVar2 != 0) {
    puVar6 = (uint *)(iVar2 + 0x20);
    uVar8 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar7 = uVar8;
        if ((uVar7 & 4) != 0) goto LAB_00adabb8;
        uVar8 = *puVar6;
        if (uVar8 == uVar7) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar14 = (bool)hasExclusiveAccess(puVar6);
      if (bVar14) {
        *puVar6 = uVar7 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar14);
LAB_00adabb8:
    if ((uVar7 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = (int *)*piVar10;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar2 + -1;
LAB_00adabf8:
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d02bf8(*piVar10);
        return;
      }
    }
  }
  return;
}

