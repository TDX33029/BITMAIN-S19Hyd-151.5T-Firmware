// FUN_00eb6448 @ 00eb6448 size=9680 calls_out=73 calls_in=1
// strings: 

void FUN_00eb6448(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int unaff_r6;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  
  if (0xc < *(byte *)(param_1 + 0xc12)) {
switchD_00eb6468_caseD_1:
    return;
  }
  switch(*(byte *)(param_1 + 0xc12)) {
  case 0:
    goto switchD_00eb6468_caseD_0;
  default:
    goto switchD_00eb6468_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0xcfd) == '\x03') {
      if (*(int *)(param_1 + 0xcf0) != 0) {
        FUN_00e44660(*(int *)(param_1 + 0xcf0),*(undefined4 *)(param_1 + 0xcf4),1);
      }
      FUN_00eba3bc(param_1 + 0xc98);
      *(undefined1 *)(param_1 + 0xcfc) = 0;
    }
    else if (*(char *)(param_1 + 0xcfd) == '\0') {
      FUN_00eba3bc(param_1 + 0xc40);
    }
    goto LAB_00eb88e0;
  case 4:
    break;
  case 5:
    FUN_00ebb168(param_1 + 0xc40);
    goto LAB_00eb874c;
  case 6:
    FUN_00d8378c(param_1 + 0xc40);
    goto LAB_00eb85cc;
  case 7:
    if (*(char *)(param_1 + 0xc7c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xc78);
      bVar11 = cVar1 != '\x03';
      if (!bVar11) {
        cVar1 = *(char *)(param_1 + 0xc74);
      }
      if (bVar11 || cVar1 != '\x03') goto LAB_00eb8544;
      if (*(char *)(param_1 + 0xc70) == '\x03') {
        piVar3 = *(int **)(param_1 + 0xc6c);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar11 = (bool)hasExclusiveAccess(piVar3);
          if (bVar11) {
            *piVar3 = 0x84;
            goto LAB_00eb8544;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
        goto LAB_00eb8544;
      }
      if ((*(char *)(param_1 + 0xc70) != '\0') || (iVar5 = 0xc64, *(int *)(param_1 + 0xc60) == 0))
      goto LAB_00eb8544;
      goto LAB_00eb853c;
    }
    goto LAB_00eb8544;
  case 8:
    if (*(char *)(param_1 + 0xd89) == '\x03') {
      if (*(char *)(param_1 + 0xd81) == '\x03') {
        if (*(char *)(param_1 + 0xd67) == '\x03') {
          if (*(int *)(param_1 + 0xd50) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd54));
          }
          if (*(int *)(param_1 + 0xd38) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd3c));
          }
          if (*(int *)(param_1 + 0xd2c) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd30));
          }
          if (*(int *)(param_1 + 0xd20) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd24));
          }
          *(undefined1 *)(param_1 + 0xc70) = 0;
          *(undefined1 *)(param_1 + 0xc71) = 0;
          *(undefined1 *)(param_1 + 0xc72) = 0;
          *(undefined1 *)(param_1 + 0xc73) = 0;
          *(undefined1 *)(param_1 + 0xc74) = 0;
          *(undefined1 *)(param_1 + 0xc75) = 0;
          *(undefined1 *)(param_1 + 0xc76) = 0;
          *(undefined1 *)(param_1 + 0xc77) = 0;
          *(undefined1 *)(param_1 + 0xc78) = 0;
          *(undefined1 *)(param_1 + 0xc79) = 0;
          *(undefined1 *)(param_1 + 0xc7a) = 0;
          *(undefined1 *)(param_1 + 0xc7b) = 0;
          *(undefined1 *)(param_1 + 0xc7c) = 0;
          *(undefined1 *)(param_1 + 0xc7d) = 0;
          *(undefined1 *)(param_1 + 0xc7e) = 0;
          *(undefined1 *)(param_1 + 0xc7f) = 0;
          *(undefined1 *)(param_1 + 0xc50) = 0;
          *(undefined1 *)(param_1 + 0xd61) = 0;
          *(undefined1 *)(param_1 + 0xc51) = 0;
          *(undefined1 *)(param_1 + 0xc52) = 0;
          *(undefined1 *)(param_1 + 0xc53) = 0;
          *(undefined1 *)(param_1 + 0xc54) = 0;
          *(undefined1 *)(param_1 + 0xc55) = 0;
          *(undefined1 *)(param_1 + 0xc56) = 0;
          *(undefined1 *)(param_1 + 0xc57) = 0;
          *(undefined1 *)(param_1 + 0xc58) = 0;
          *(undefined1 *)(param_1 + 0xc59) = 0;
          *(undefined1 *)(param_1 + 0xc5a) = 0;
          *(undefined1 *)(param_1 + 0xc5b) = 0;
          *(undefined1 *)(param_1 + 0xc5c) = 0;
          *(undefined1 *)(param_1 + 0xc5d) = 0;
          *(undefined1 *)(param_1 + 0xc5e) = 0;
          *(undefined1 *)(param_1 + 0xc5f) = 0;
          *(undefined1 *)(param_1 + 0xc60) = 0;
          *(undefined1 *)(param_1 + 0xc61) = 0;
          *(undefined1 *)(param_1 + 0xc62) = 0;
          *(undefined1 *)(param_1 + 0xc63) = 0;
          *(undefined1 *)(param_1 + 0xc64) = 0;
          *(undefined1 *)(param_1 + 0xc65) = 0;
          *(undefined1 *)(param_1 + 0xc66) = 0;
          *(undefined1 *)(param_1 + 0xc67) = 0;
          *(undefined1 *)(param_1 + 0xc68) = 0;
          *(undefined1 *)(param_1 + 0xc69) = 0;
          *(undefined1 *)(param_1 + 0xc6a) = 0;
          *(undefined1 *)(param_1 + 0xc6b) = 0;
          *(undefined1 *)(param_1 + 0xc6c) = 0;
          *(undefined1 *)(param_1 + 0xc6d) = 0;
          *(undefined1 *)(param_1 + 0xc6e) = 0;
          *(undefined1 *)(param_1 + 0xc6f) = 0;
          *(undefined1 *)(param_1 + 0xd62) = 0;
          FUN_00e7c42c(param_1 + 0xccc);
          if (*(int *)(param_1 + 0xccc) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcd0));
          }
          piVar3 = (int *)(param_1 + 0xcc0);
          *(undefined1 *)(param_1 + 0xd63) = 0;
          if ((*piVar3 != -0x80000000) && (FUN_00e7c3e8(piVar3), *piVar3 != 0)) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc4));
          }
          *(undefined1 *)(param_1 + 0xd64) = 0;
          *(undefined1 *)(param_1 + 0xd60) = 0;
          piVar8 = (int *)(param_1 + 0xcb8);
          FUN_00ebb27c(piVar8);
          piVar3 = (int *)*piVar8;
          if (piVar3 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar3;
              bVar11 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar11);
            *piVar3 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00f36f34(*piVar8);
            }
          }
          *(undefined2 *)(param_1 + 0xd65) = 0;
        }
        else if (*(char *)(param_1 + 0xd67) == '\0') {
          piVar3 = *(int **)(param_1 + 0xcb0);
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar11 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar11);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00f36b8c(*(undefined4 *)(param_1 + 0xcb0));
          }
          piVar3 = *(int **)(param_1 + 0xcb4);
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar11 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar11);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00f36b8c(*(undefined4 *)(param_1 + 0xcb4));
          }
        }
        *(undefined1 *)(param_1 + 0xd80) = 0;
      }
      else if (*(char *)(param_1 + 0xd81) == '\0') {
        FUN_00e7c3e8(param_1 + 0xd68);
        if (*(int *)(param_1 + 0xd68) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd6c));
        }
        FUN_00e7c3e8(param_1 + 0xd74);
        if (*(int *)(param_1 + 0xd74) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd78));
        }
      }
      *(undefined1 *)(param_1 + 0xd88) = 0;
    }
    if (*(int *)(param_1 + 0xc40) != -0x80000000 && *(int *)(param_1 + 0xc40) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc44));
    }
    *(undefined1 *)(param_1 + 0xc36) = 0;
    goto LAB_00eb8514;
  case 9:
    cVar1 = *(char *)(param_1 + 0xc7c);
    bVar11 = cVar1 == '\x03';
    if (bVar11) {
      cVar1 = *(char *)(param_1 + 0xc78);
    }
    if (bVar11 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xc74) == '\x03') {
        piVar3 = *(int **)(param_1 + 0xc70);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar11 = (bool)hasExclusiveAccess(piVar3);
          if (bVar11) {
            *piVar3 = 0x84;
            goto LAB_00eb6654;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
      }
      else if ((*(char *)(param_1 + 0xc74) == '\0') && (*(int *)(param_1 + 0xc64) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc68));
      }
    }
LAB_00eb6654:
    iVar7 = *(int *)(param_1 + 0xc50) + 1;
    iVar5 = *(int *)(param_1 + 0xc4c);
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_00f1fd84(iVar5);
      iVar5 = iVar5 + 0x98;
    }
    if (*(int *)(param_1 + 0xc48) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4c));
    }
    *(undefined1 *)(param_1 + 0xc34) = 0;
    FUN_005c384c(param_1 + 0xc80);
    *(undefined1 *)(param_1 + 0xc35) = 0;
    goto LAB_00eb84d0;
  case 10:
    cVar1 = *(char *)(param_1 + 0x16c4);
    if (cVar1 != '\x04') {
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x1bf9) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x174b);
          if (cVar1 == '\x05') {
            if (*(int *)(param_1 + 0x1790) == -0x80000000) {
              FUN_00ebb5a8(*(undefined4 *)(param_1 + 0x1768),*(undefined4 *)(param_1 + 0x176c));
            }
            else {
              puVar9 = (undefined4 *)(param_1 + 0x1778);
              FUN_00eaa938(puVar9);
              piVar3 = (int *)*puVar9;
              DataMemoryBarrier(0xb);
              do {
                iVar5 = *piVar3;
                bVar11 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar11);
              *piVar3 = iVar5 + -1;
              if (iVar5 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aa8150(*puVar9);
              }
              FUN_00f25450(*(undefined4 *)(param_1 + 0x1788),*(undefined4 *)(param_1 + 0x178c));
              if (*(int *)(param_1 + 0x1784) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1788));
              }
              FUN_00f24c48(*(undefined4 *)(param_1 + 0x1794),*(undefined4 *)(param_1 + 0x1798));
              if (*(int *)(param_1 + 0x1790) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1794));
              }
            }
            if (*(int *)(param_1 + 0x17a8) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x17a0));
            }
            iVar5 = *(int *)(param_1 + 0x1764);
            puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1760) + 4);
            *(undefined1 *)(param_1 + 0x1746) = 0;
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              if (puVar9[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar9);
              }
              puVar9 = puVar9 + 3;
            }
            if (*(int *)(param_1 + 0x175c) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1760));
            }
            if ((*(int *)(param_1 + 0x1750) != -0x80000000) &&
               (FUN_00f15518(*(undefined4 *)(param_1 + 0x1754),*(undefined4 *)(param_1 + 0x1758)),
               *(int *)(param_1 + 0x1750) != 0)) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1754));
            }
            *(undefined4 *)(param_1 + 0x1747) = 0;
LAB_00eb784c:
            puVar9 = *(undefined4 **)(param_1 + 0x172c);
            uVar10 = *(undefined4 *)(param_1 + 0x1728);
            pcVar6 = (code *)*puVar9;
            if (pcVar6 != (code *)0x0) {
              (*pcVar6)(uVar10);
            }
            if (puVar9[1] != 0) {
              thunk_FUN_016d3fb4(uVar10);
            }
LAB_00eb787c:
            *(undefined1 *)(param_1 + 0x1745) = 0;
            bVar11 = *(char *)(param_1 + 0x1744) != '\0';
            iVar5 = 0;
            if (bVar11) {
              iVar5 = *(int *)(param_1 + 0x1734);
            }
            if (bVar11 && iVar5 != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1738));
            }
            *(undefined1 *)(param_1 + 0x1744) = 0;
            if (*(int *)(param_1 + 0x16f0) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16f4));
            }
          }
          else {
            if (cVar1 == '\x04') {
              puVar9 = *(undefined4 **)(param_1 + 0x17a4);
              uVar10 = *(undefined4 *)(param_1 + 0x17a0);
              pcVar6 = (code *)*puVar9;
              if (pcVar6 != (code *)0x0) {
                (*pcVar6)(uVar10);
              }
              if (puVar9[1] != 0) {
                thunk_FUN_016d3fb4(uVar10);
              }
              FUN_00eaab84(param_1 + 0x1750);
              goto LAB_00eb784c;
            }
            if (cVar1 == '\x03') {
              FUN_00eab92c(param_1 + 0x1750);
              goto LAB_00eb787c;
            }
          }
          FUN_005c1758(param_1 + 0x1bc8);
          FUN_00ef97c0(param_1 + 0x1ba0);
          FUN_00f243a8(*(undefined4 *)(param_1 + 0x1be4),*(undefined4 *)(param_1 + 0x1be8));
          if (*(int *)(param_1 + 0x1be0) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1be4));
          }
          *(undefined1 *)(param_1 + 0x1bf8) = 0;
        }
        else if ((*(char *)(param_1 + 0x1bf9) == '\0') &&
                (FUN_00f25584(*(undefined4 *)(param_1 + 0x1bf0),*(undefined4 *)(param_1 + 0x1bf4)),
                *(int *)(param_1 + 0x1bec) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1bf0));
        }
        goto LAB_00eb7f24;
      }
      if (cVar1 == '\0') {
        piVar3 = *(int **)(param_1 + 0x1684);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0x1684));
        }
        piVar3 = *(int **)(param_1 + 0x1688);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0x1688));
        }
        piVar3 = *(int **)(param_1 + 0xf60);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007846b4(*(undefined4 *)(param_1 + 0xf60),*(undefined4 *)(param_1 + 0xf64));
        }
        puVar9 = *(undefined4 **)(param_1 + 0xf6c);
        uVar10 = *(undefined4 *)(param_1 + 0xf68);
        pcVar6 = (code *)*puVar9;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar10);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        if (*(int *)(param_1 + 0xd00) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd04));
        }
        uVar10 = *(undefined4 *)(param_1 + 0xd10);
        FUN_00f24ed8(uVar10,*(undefined4 *)(param_1 + 0xd14));
        if (*(int *)(param_1 + 0xd0c) != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        bVar11 = *(int *)(param_1 + 0xd20) != 5 || *(int *)(param_1 + 0xd24) != 0;
        iVar5 = 0;
        if (bVar11) {
          iVar5 = *(int *)(param_1 + 0xd80);
        }
        if (bVar11 && iVar5 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd84));
          if (*(int *)(param_1 + 0xef0) != -0x80000000 && *(int *)(param_1 + 0xef0) != 0)
          goto LAB_00eb70d8;
        }
        else if (*(int *)(param_1 + 0xef0) != -0x80000000 && *(int *)(param_1 + 0xef0) != 0) {
LAB_00eb70d8:
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xef4));
        }
        if (*(int *)(param_1 + 0xefc) != -0x80000000 && *(int *)(param_1 + 0xefc) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf00));
        }
        if (*(int *)(param_1 + 0xf08) != -0x80000000 && *(int *)(param_1 + 0xf08) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0c));
        }
        FUN_00d81034(param_1 + 0xd98);
        if ((-0x7fffffff < *(int *)(param_1 + 0x1678)) &&
           (FUN_00f25584(*(undefined4 *)(param_1 + 0x167c),*(undefined4 *)(param_1 + 0x1680)),
           *(int *)(param_1 + 0x1678) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x167c));
        }
        FUN_005c384c(param_1 + 0xf18);
        if (*(int *)(param_1 + 0x1660) != 0) {
          piVar3 = *(int **)(param_1 + 0x165c);
          iVar5 = 1 - *(int *)(param_1 + 0x1660);
          do {
            if (*piVar3 == 2 && piVar3[1] == 0) {
              (*(code *)**(undefined4 **)piVar3[2])();
            }
            else {
              FUN_00f247dc(piVar3);
            }
            iVar5 = iVar5 + 1;
            piVar3 = piVar3 + 0x44;
          } while (iVar5 != 1);
        }
        if (*(int *)(param_1 + 0x1658) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x165c));
        }
        piVar3 = *(int **)(param_1 + 0x168c);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aad0bc(*(undefined4 *)(param_1 + 0x168c));
        }
        piVar3 = *(int **)(param_1 + 0xf74);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar11 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar11);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aa7b14(*(undefined4 *)(param_1 + 0xf74));
          }
        }
        piVar3 = *(int **)(param_1 + 0xf70);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa6194(*(undefined4 *)(param_1 + 0xf70));
        }
        FUN_005c5160(param_1 + 0xf78);
        iVar5 = *(int *)(param_1 + 0xf88);
        piVar3 = (int *)(iVar5 + 0xfc);
        do {
          iVar7 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar7 + -1;
        if (iVar7 == 1) {
          FUN_0163b708(iVar5 + 0xe8);
        }
        piVar3 = *(int **)(param_1 + 0xf88);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aad1e0(*(undefined4 *)(param_1 + 0xf88));
        }
        piVar3 = *(int **)(param_1 + 4000);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f1420(*(undefined4 *)(param_1 + 4000));
        }
        if (*(int *)(param_1 + 0x1664) != -0x80000000 && *(int *)(param_1 + 0x1664) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1668));
        }
      }
      goto LAB_00eb8324;
    }
    cVar1 = *(char *)(param_1 + 0x1e14);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x1e40) == '\x03') {
        if (*(char *)(param_1 + 0x1e36) == '\x04') {
          if (*(int *)(param_1 + 0x1e38) != 0) {
            FUN_00e44660(*(int *)(param_1 + 0x1e38),*(undefined4 *)(param_1 + 0x1e3c),1);
          }
          FUN_00e44900(*(undefined4 *)(param_1 + 0x1e2c));
        }
        else if ((*(char *)(param_1 + 0x1e36) == '\x03') && (*(int *)(param_1 + 0x1e38) != 0)) {
          FUN_00e44660(*(int *)(param_1 + 0x1e38),*(undefined4 *)(param_1 + 0x1e3c),1);
        }
      }
      goto switchD_00eb7020_caseD_1;
    }
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00ebb6b0(param_1 + 0x16e0);
      }
      goto LAB_00eb7ee4;
    }
    switch(*(undefined1 *)(param_1 + 0x2598)) {
    case 0:
      piVar3 = *(int **)(param_1 + 0x2578);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f324(*(undefined4 *)(param_1 + 0x2578));
      }
      FUN_00ebb6b0(param_1 + 0x1e18);
    default:
      goto switchD_00eb7020_caseD_1;
    case 3:
      if (*(char *)(param_1 + 0x25d1) == '\x03') {
        FUN_00d8f5e8(param_1 + 0x25b0);
        piVar3 = *(int **)(param_1 + 0x25ac);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d02d40(*(undefined4 *)(param_1 + 0x25ac));
        }
        *(undefined1 *)(param_1 + 0x25d0) = 0;
      }
      else if (*(char *)(param_1 + 0x25d1) == '\0') {
        puVar9 = *(undefined4 **)(param_1 + 0x25a4);
        uVar10 = *(undefined4 *)(param_1 + 0x25a0);
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(uVar10);
        }
        goto LAB_00eb79ac;
      }
      break;
    case 4:
      puVar9 = *(undefined4 **)(param_1 + 0x25a4);
      uVar10 = *(undefined4 *)(param_1 + 0x25a0);
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(uVar10);
      }
      goto LAB_00eb79ac;
    case 5:
      cVar1 = *(char *)(param_1 + 0x25b8);
      if (cVar1 == '\x04') {
        if (*(int *)(param_1 + 0x25cc) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x25cc),*(undefined4 *)(param_1 + 0x25d0),1);
        }
        if (*(int *)(param_1 + 0x25bc) != 0) {
          FUN_00e574fc();
        }
        piVar3 = *(int **)(param_1 + 0x25c4);
        *(undefined1 *)(param_1 + 0x25b4) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x25c4),*(undefined4 *)(param_1 + 0x25c8));
        }
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 != '\0') break;
          puVar9 = *(undefined4 **)(param_1 + 0x25a4);
          uVar10 = *(undefined4 *)(param_1 + 0x25a0);
          if ((code *)*puVar9 != (code *)0x0) {
            (*(code *)*puVar9)(uVar10);
          }
          goto LAB_00eb79ac;
        }
        FUN_00d8f5e8(param_1 + 0x25bc);
      }
      piVar3 = *(int **)(param_1 + 0x25ac);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d02d40(*(undefined4 *)(param_1 + 0x25ac));
      }
      piVar3 = *(int **)(param_1 + 0x25a8);
      *(undefined2 *)(param_1 + 0x25b5) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_009ba47c(*(undefined4 *)(param_1 + 0x25a8));
      }
      *(undefined1 *)(param_1 + 0x25b7) = 0;
      break;
    case 6:
      puVar9 = *(undefined4 **)(param_1 + 0x25a4);
      uVar10 = *(undefined4 *)(param_1 + 0x25a0);
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(uVar10);
      }
LAB_00eb79ac:
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
    }
    if (*(char *)(param_1 + 0x2599) != '\0') {
      FUN_00d66ffc(param_1 + 0x2580);
    }
    *(undefined1 *)(param_1 + 0x2599) = 0;
    FUN_00ebb880(param_1 + 0x2548);
    if (*(char *)(param_1 + 0x259a) != '\0') {
      FUN_00ebb6b0(param_1 + 0x21b0);
    }
    *(undefined1 *)(param_1 + 0x259a) = 0;
    if (*(char *)(param_1 + 0x259b) != '\0') {
      piVar3 = *(int **)(param_1 + 0x257c);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f324(*(undefined4 *)(param_1 + 0x257c));
      }
    }
    *(undefined1 *)(param_1 + 0x259b) = 0;
switchD_00eb7020_caseD_1:
    piVar3 = *(int **)(param_1 + 0x1e10);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x1e10));
    }
    *(undefined1 *)(param_1 + 0x1e17) = 0;
    *(undefined2 *)(param_1 + 0x1e15) = 0;
LAB_00eb7ee4:
    piVar3 = *(int **)(param_1 + 0x16d8);
    *(undefined1 *)(param_1 + 0x16d3) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d030dc(*(undefined4 *)(param_1 + 0x16d8));
    }
    *(undefined1 *)(param_1 + 0x16d4) = 0;
LAB_00eb7f24:
    *(undefined1 *)(param_1 + 0x16d5) = 0;
    if (*(char *)(param_1 + 0x16c5) != '\0') {
      piVar3 = *(int **)(param_1 + 0x16dc);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d03ce0(*(undefined4 *)(param_1 + 0x16dc));
      }
    }
    *(undefined1 *)(param_1 + 0x16c5) = 0;
    if (*(int *)(param_1 + 0x1590) != -0x80000000 && *(int *)(param_1 + 0x1590) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1594));
    }
    if (*(int *)(param_1 + 0x159c) != -0x80000000 && *(int *)(param_1 + 0x159c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15a0));
    }
    if (*(int *)(param_1 + 0x15a8) != -0x80000000 && *(int *)(param_1 + 0x15a8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15ac));
    }
    FUN_00d81034(param_1 + 0x1438);
    if (*(char *)(param_1 + 0x16c6) != '\0') {
      FUN_00d94b68(param_1 + 0x1410);
    }
    *(undefined2 *)(param_1 + 0x16c6) = 0;
    FUN_00ebbbac(param_1 + 0x1188);
    if (*(int *)(param_1 + 0x16a4) == -0x80000000 || *(int *)(param_1 + 0x16a4) == 0) {
      cVar1 = *(char *)(param_1 + 0x16c9);
      *(undefined1 *)(param_1 + 0x16c8) = 0;
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16a8));
      cVar1 = *(char *)(param_1 + 0x16c9);
      *(undefined1 *)(param_1 + 0x16c8) = 0;
    }
    if (cVar1 != '\0') {
      iVar5 = *(int *)(param_1 + 0x1168);
      piVar3 = (int *)(iVar5 + 0xfc);
      do {
        iVar7 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        FUN_0163b708(iVar5 + 0xe8);
      }
      piVar3 = *(int **)(param_1 + 0x1168);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aad1e0(*(undefined4 *)(param_1 + 0x1168));
      }
    }
    *(undefined1 *)(param_1 + 0x16c9) = 0;
    if (*(char *)(param_1 + 0x16ca) != '\0') {
      FUN_005c5160(param_1 + 0x1158);
    }
    *(undefined1 *)(param_1 + 0x16ca) = 0;
    if (*(char *)(param_1 + 0x16cb) != '\0') {
      piVar3 = *(int **)(param_1 + 0x1154);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa7b14(*(undefined4 *)(param_1 + 0x1154));
        }
      }
      piVar3 = *(int **)(param_1 + 0x1150);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa6194(*(undefined4 *)(param_1 + 0x1150));
      }
    }
    *(undefined1 *)(param_1 + 0x16cb) = 0;
    if (*(char *)(param_1 + 0x16cc) != '\0') {
      piVar3 = *(int **)(param_1 + 0x16d8);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aad0bc(*(undefined4 *)(param_1 + 0x16d8));
      }
    }
    piVar3 = *(int **)(param_1 + 0x169c);
    *(undefined1 *)(param_1 + 0x16cc) = 0;
    if (*(int *)(param_1 + 0x16a0) != 0) {
      iVar5 = 1 - *(int *)(param_1 + 0x16a0);
      do {
        if (*piVar3 == 2 && piVar3[1] == 0) {
          (*(code *)**(undefined4 **)piVar3[2])();
        }
        else {
          FUN_00f247dc(piVar3);
        }
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 0x44;
      } while (iVar5 != 1);
    }
    if (*(int *)(param_1 + 0x1698) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x169c));
    }
    FUN_005c384c(param_1 + 0x1108);
    *(undefined2 *)(param_1 + 0x16cd) = 0;
    if (*(char *)(param_1 + 0x16cf) != '\0') {
      if (*(int *)(param_1 + 0x1070) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1074));
      }
      uVar10 = *(undefined4 *)(param_1 + 0x1080);
      FUN_00f24ed8(uVar10,*(undefined4 *)(param_1 + 0x1084));
      if (*(int *)(param_1 + 0x107c) != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
    }
    bVar11 = *(int *)(param_1 + 0x1090) != 5 || *(int *)(param_1 + 0x1094) != 0;
    iVar5 = 0;
    if (bVar11) {
      iVar5 = *(int *)(param_1 + 0x10f0);
    }
    if (bVar11 && iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10f4));
    }
    puVar9 = *(undefined4 **)(param_1 + 0xfac);
    uVar10 = *(undefined4 *)(param_1 + 0xfa8);
    pcVar6 = (code *)*puVar9;
    *(undefined1 *)(param_1 + 0x16cf) = 0;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar10);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    *(undefined1 *)(param_1 + 0x16d0) = 0;
    if (*(char *)(param_1 + 0x16d1) != '\0') {
      piVar3 = *(int **)(param_1 + 0x1694);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0x1694));
      }
    }
    *(undefined1 *)(param_1 + 0x16d1) = 0;
    if (*(char *)(param_1 + 0x16d2) != '\0') {
      piVar3 = *(int **)(param_1 + 0x1690);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(*(undefined4 *)(param_1 + 0x1690));
      }
    }
    *(undefined1 *)(param_1 + 0x16d2) = 0;
LAB_00eb8324:
    *(undefined1 *)(param_1 + 0xc31) = 0;
LAB_00eb832c:
    *(undefined1 *)(param_1 + 0xc32) = 0;
    *(undefined2 *)(param_1 + 0xc2f) = 0;
    if (*(char *)(param_1 + 0xc1b) != '\0') {
      FUN_005c5160(param_1 + 0x9e0);
    }
    *(undefined1 *)(param_1 + 0xc1b) = 0;
    if (*(char *)(param_1 + 0xc1c) != '\0') {
      FUN_005c471c(param_1 + 0x9d0);
    }
    *(undefined1 *)(param_1 + 0xc1c) = 0;
    if (*(char *)(param_1 + 0xc1d) != '\0') {
      iVar5 = *(int *)(param_1 + 0x9c8);
      piVar3 = (int *)(iVar5 + 0xc4);
      do {
        iVar7 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        FUN_0163b708(iVar5 + 0x88);
      }
      piVar3 = *(int **)(param_1 + 0x9c8);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac4f8(*(undefined4 *)(param_1 + 0x9c8));
      }
    }
    *(undefined1 *)(param_1 + 0xc1d) = 0;
    if (*(char *)(param_1 + 0xc1e) != '\0') {
      iVar5 = *(int *)(param_1 + 0x9c0);
      piVar3 = (int *)(iVar5 + 0x104);
      do {
        iVar7 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        FUN_0163b708(iVar5 + 0x88);
      }
      piVar3 = *(int **)(param_1 + 0x9c0);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac2e8(*(undefined4 *)(param_1 + 0x9c0));
      }
    }
    *(undefined1 *)(param_1 + 0xc1e) = 0;
    if (*(char *)(param_1 + 0xc1f) != '\0') {
      FUN_005c4e2c(param_1 + 0xc00);
    }
    *(undefined2 *)(param_1 + 0xc1f) = 0;
    *(undefined1 *)(param_1 + 0xc33) = 0;
    if (*(char *)(param_1 + 0xc21) != '\0') {
      piVar3 = *(int **)(param_1 + 0xbfc);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aad0bc(*(undefined4 *)(param_1 + 0xbfc));
      }
    }
    *(undefined2 *)(param_1 + 0xc21) = 0;
    if (*(char *)(param_1 + 0xc23) != '\0') {
      FUN_00ebbc9c(param_1 + 0x4f8);
    }
    *(undefined1 *)(param_1 + 0xc23) = 0;
LAB_00eb84d0:
    bVar11 = *(char *)(param_1 + 0xc2d) != '\0';
    iVar5 = 0;
    if (bVar11) {
      iVar5 = *(int *)(param_1 + 0xd18);
    }
    if (bVar11 && iVar5 != -0x80000000) {
      FUN_00d67f2c(param_1 + 0xcc8);
    }
    *(undefined1 *)(param_1 + 0xc2d) = 0;
    if ((*(char *)(param_1 + 0xc2e) != '\0') &&
       (*(int *)(param_1 + 0xbf0) != -0x80000000 && *(int *)(param_1 + 0xbf0) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbf4));
    }
LAB_00eb8514:
    *(undefined1 *)(param_1 + 0xc2e) = 0;
    if ((*(char *)(param_1 + 0xc15) != '\0') && ((*(uint *)(param_1 + 0xbdc) & 0x7fffffff) != 0)) {
      iVar5 = 0xbe0;
LAB_00eb853c:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar5));
    }
LAB_00eb8544:
    *(undefined1 *)(param_1 + 0xc15) = 0;
    if (*(char *)(param_1 + 0xc16) != '\0') {
      FUN_005c384c(param_1 + 0x4a0);
    }
    *(undefined1 *)(param_1 + 0xc16) = 0;
    if (*(char *)(param_1 + 0xc24) != '\0') {
      FUN_00d90cfc(param_1 + 0x348);
    }
    *(undefined1 *)(param_1 + 0xc24) = 0;
    FUN_00d83d44(param_1 + 0x2f8);
    if ((*(char *)(param_1 + 0xc25) == '\x01') &&
       (piVar3 = *(int **)(param_1 + 0x2f0), piVar3 != (int *)0x0)) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1420(*(undefined4 *)(param_1 + 0x2f0));
      }
    }
LAB_00eb85cc:
    *(undefined1 *)(param_1 + 0xc25) = 0;
    if (*(char *)(param_1 + 0xc17) != '\0') {
      if (*(int *)(param_1 + 0xbd8) != 0) {
        piVar3 = *(int **)(param_1 + 0xbd4);
        iVar5 = 1 - *(int *)(param_1 + 0xbd8);
        do {
          if (*piVar3 == 2 && piVar3[1] == 0) {
            (*(code *)**(undefined4 **)piVar3[2])();
          }
          else {
            FUN_00f247dc(piVar3);
          }
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 0x44;
        } while (iVar5 != 1);
      }
      if (*(int *)(param_1 + 0xbd0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbd4));
      }
    }
    *(undefined2 *)(param_1 + 0xc37) = 0;
    *(undefined1 *)(param_1 + 0xc17) = 0;
    if (*(char *)(param_1 + 0xc26) != '\0') {
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0xbc8) + 4);
      for (iVar5 = *(int *)(param_1 + 0xbcc); iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      if (*(int *)(param_1 + 0xbc4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc8));
      }
    }
    *(undefined1 *)(param_1 + 0xc26) = 0;
    iVar5 = *(int *)(param_1 + 0xbc0) + 1;
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0xbbc) + 8);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
      puVar9 = puVar9 + 5;
    }
    if (*(int *)(param_1 + 3000) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbbc));
    }
    iVar5 = *(int *)(param_1 + 0xbb4) + 1;
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0xbb0) + 8);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
      puVar9 = puVar9 + 5;
    }
    unaff_r6 = 0;
    if (*(int *)(param_1 + 0xbac) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbb0));
    }
LAB_00eb874c:
    FUN_016dffb2(*(undefined4 *)(param_1 + 0xba8));
    cVar1 = *(char *)(param_1 + 0xc27);
    goto joined_r0x00eb875c;
  case 0xb:
    if (*(char *)(param_1 + 0x1080) != '\x03') {
      if (*(char *)(param_1 + 0x1080) != '\0') goto LAB_00eb832c;
      piVar3 = *(int **)(param_1 + 0xdc0);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_007846b4(*(undefined4 *)(param_1 + 0xdc0),*(undefined4 *)(param_1 + 0xdc4));
      }
      if (*(int *)(param_1 + 0xd98) == -0x80000000 || *(int *)(param_1 + 0xd98) == 0) {
        if (*(int *)(param_1 + 0xda4) == -0x80000000 || *(int *)(param_1 + 0xda4) == 0)
        goto LAB_00eb66e4;
LAB_00eb6fc0:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xda8));
        if (*(int *)(param_1 + 0xdb0) != -0x80000000 && *(int *)(param_1 + 0xdb0) != 0)
        goto LAB_00eb6fd8;
      }
      else {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd9c));
        if (*(int *)(param_1 + 0xda4) != -0x80000000 && *(int *)(param_1 + 0xda4) != 0)
        goto LAB_00eb6fc0;
LAB_00eb66e4:
        if (*(int *)(param_1 + 0xdb0) != -0x80000000 && *(int *)(param_1 + 0xdb0) != 0) {
LAB_00eb6fd8:
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xdb4));
        }
      }
      FUN_00d81034(param_1 + 0xc40);
      piVar3 = *(int **)(param_1 + 0xf7c);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aad0bc(*(undefined4 *)(param_1 + 0xf7c));
      }
      piVar3 = *(int **)(param_1 + 0xdcc);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa7b14(*(undefined4 *)(param_1 + 0xdcc));
        }
      }
      piVar3 = *(int **)(param_1 + 0xdc8);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa6194(*(undefined4 *)(param_1 + 0xdc8));
      }
      FUN_005c5160(param_1 + 0xdd0);
      iVar5 = *(int *)(param_1 + 0xde0);
      piVar3 = (int *)(iVar5 + 0xfc);
      do {
        iVar7 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        FUN_0163b708(iVar5 + 0xe8);
      }
      piVar3 = *(int **)(param_1 + 0xde0);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aad1e0(*(undefined4 *)(param_1 + 0xde0));
      }
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0xf74) + 4);
      for (iVar5 = *(int *)(param_1 + 0xf78); iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      if (*(int *)(param_1 + 0xf70) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf74));
      }
      goto LAB_00eb832c;
    }
    cVar1 = *(char *)(param_1 + 0xfc0);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0xfec) == '\x03') {
        if (*(char *)(param_1 + 0xfe2) == '\x04') {
          if (*(int *)(param_1 + 0xfe4) != 0) {
            FUN_00e44660(*(int *)(param_1 + 0xfe4),*(undefined4 *)(param_1 + 0xfe8),1);
          }
          FUN_00e44900(*(undefined4 *)(param_1 + 0xfd8));
        }
        else if ((*(char *)(param_1 + 0xfe2) == '\x03') && (*(int *)(param_1 + 0xfe4) != 0)) {
          FUN_00e44660(*(int *)(param_1 + 0xfe4),*(undefined4 *)(param_1 + 0xfe8),1);
        }
      }
      goto switchD_00eb6edc_caseD_1;
    }
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00d8ffbc(param_1 + 0xf8c);
      }
      goto LAB_00eb7c14;
    }
    switch(*(undefined1 *)(param_1 + 0x1044)) {
    case 0:
      piVar3 = *(int **)(param_1 + 0xfdc);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f324(*(undefined4 *)(param_1 + 0xfdc));
      }
      FUN_00d8ffbc(param_1 + 0xfc4);
    default:
      goto switchD_00eb6edc_caseD_1;
    case 3:
      if (*(char *)(param_1 + 0x1079) == '\x03') {
        FUN_00d8f5e8(param_1 + 0x1058);
        piVar3 = *(int **)(param_1 + 0x1054);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0099ada8(*(undefined4 *)(param_1 + 0x1054));
        }
        *(undefined1 *)(param_1 + 0x1078) = 0;
      }
      else if (*(char *)(param_1 + 0x1079) == '\0') {
        puVar9 = *(undefined4 **)(param_1 + 0x104c);
        uVar10 = *(undefined4 *)(param_1 + 0x1048);
        if ((code *)*puVar9 != (code *)0x0) {
          (*(code *)*puVar9)(uVar10);
        }
        goto LAB_00eb76f8;
      }
      break;
    case 4:
      puVar9 = *(undefined4 **)(param_1 + 0x104c);
      uVar10 = *(undefined4 *)(param_1 + 0x1048);
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(uVar10);
      }
      goto LAB_00eb76f8;
    case 5:
      cVar1 = *(char *)(param_1 + 0x1060);
      if (cVar1 == '\x04') {
        if (*(int *)(param_1 + 0x1074) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x1074),*(undefined4 *)(param_1 + 0x1078),1);
        }
        if (*(int *)(param_1 + 0x1064) != 0) {
          FUN_00e574fc();
        }
        piVar3 = *(int **)(param_1 + 0x106c);
        *(undefined1 *)(param_1 + 0x105c) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar11);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(*(undefined4 *)(param_1 + 0x106c),*(undefined4 *)(param_1 + 0x1070));
        }
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 != '\0') break;
          puVar9 = *(undefined4 **)(param_1 + 0x104c);
          uVar10 = *(undefined4 *)(param_1 + 0x1048);
          if ((code *)*puVar9 != (code *)0x0) {
            (*(code *)*puVar9)(uVar10);
          }
          goto LAB_00eb76f8;
        }
        FUN_00d8f5e8(param_1 + 0x1064);
      }
      piVar3 = *(int **)(param_1 + 0x1054);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0099ada8(*(undefined4 *)(param_1 + 0x1054));
      }
      piVar3 = *(int **)(param_1 + 0x1050);
      *(undefined2 *)(param_1 + 0x105d) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_009ba47c(*(undefined4 *)(param_1 + 0x1050));
      }
      *(undefined1 *)(param_1 + 0x105f) = 0;
      break;
    case 6:
      puVar9 = *(undefined4 **)(param_1 + 0x104c);
      uVar10 = *(undefined4 *)(param_1 + 0x1048);
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(uVar10);
      }
LAB_00eb76f8:
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
    }
    if (*(char *)(param_1 + 0x1045) != '\0') {
      FUN_00d66ffc(param_1 + 0x102c);
    }
    *(undefined1 *)(param_1 + 0x1045) = 0;
    FUN_00ebb880(param_1 + 0xffc);
    if (*(char *)(param_1 + 0x1046) != '\0') {
      FUN_00d8ffbc(param_1 + 0xfe4);
    }
    *(undefined1 *)(param_1 + 0x1046) = 0;
    if (*(char *)(param_1 + 0x1047) != '\0') {
      piVar3 = *(int **)(param_1 + 0xfe0);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f324(*(undefined4 *)(param_1 + 0xfe0));
      }
    }
    *(undefined1 *)(param_1 + 0x1047) = 0;
switchD_00eb6edc_caseD_1:
    piVar3 = *(int **)(param_1 + 0xfbc);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0xfbc));
    }
    *(undefined2 *)(param_1 + 0xfc1) = 0;
    *(undefined1 *)(param_1 + 0xfc3) = 0;
LAB_00eb7c14:
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0xf84) + 4);
    for (iVar5 = *(int *)(param_1 + 0xf88); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 3;
    }
    if (*(int *)(param_1 + 0xf80) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf84));
    }
    *(undefined4 *)(param_1 + 0x1081) = 0;
    if (*(int *)(param_1 + 0xf48) == -0x80000000 || *(int *)(param_1 + 0xf48) == 0) {
      if (*(int *)(param_1 + 0xf54) == -0x80000000 || *(int *)(param_1 + 0xf54) == 0)
      goto LAB_00eb7c88;
LAB_00eb7d08:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf58));
      if (*(int *)(param_1 + 0xf60) != -0x80000000 && *(int *)(param_1 + 0xf60) != 0)
      goto LAB_00eb7d20;
LAB_00eb7c98:
      iVar5 = *(int *)(param_1 + 0xe78);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf4c));
      if (*(int *)(param_1 + 0xf54) != -0x80000000 && *(int *)(param_1 + 0xf54) != 0)
      goto LAB_00eb7d08;
LAB_00eb7c88:
      if (*(int *)(param_1 + 0xf60) == -0x80000000 || *(int *)(param_1 + 0xf60) == 0)
      goto LAB_00eb7c98;
LAB_00eb7d20:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf64));
      iVar5 = *(int *)(param_1 + 0xe78);
    }
    if (iVar5 != 0) {
      FUN_00e98334(param_1 + 0xe7c);
    }
    piVar3 = *(int **)(param_1 + 0xde8);
    *(undefined1 *)(param_1 + 0x1085) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*(undefined4 *)(param_1 + 0xde8),*(undefined4 *)(param_1 + 0xdec));
    }
    goto LAB_00eb832c;
  case 0xc:
    cVar1 = *(char *)(param_1 + 0xcd8);
    if (cVar1 == '\0') {
      piVar3 = *(int **)(param_1 + 0xc88);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      iVar7 = 0x10;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f324(*(undefined4 *)(param_1 + 0xc88));
      }
    }
    else {
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xd04) == '\x03') {
          if (*(char *)(param_1 + 0xd00) == '\x03') {
            piVar3 = *(int **)(param_1 + 0xcfc);
            if (*piVar3 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar11 = (bool)hasExclusiveAccess(piVar3);
              if (bVar11) {
                *piVar3 = 0x84;
                goto LAB_00eb7568;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            (**(code **)(piVar3[2] + 0x10))();
          }
          else if ((*(char *)(param_1 + 0xd00) == '\0') && (*(int *)(param_1 + 0xcf0) != 0)) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcf4));
          }
        }
      }
      else {
        if (cVar1 != '\x04') goto LAB_00eb832c;
        cVar1 = *(char *)(param_1 + 0xd54);
        bVar11 = cVar1 == '\x03';
        if (bVar11) {
          cVar1 = *(char *)(param_1 + 0xd18);
        }
        if (bVar11 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0xd50);
          bVar11 = cVar1 == '\x03';
          if (bVar11) {
            cVar1 = *(char *)(param_1 + 0xd4c);
          }
          if (bVar11 && cVar1 == '\x03') {
            FUN_0163aa10(param_1 + 0xd2c);
            if (*(int *)(param_1 + 0xd38) != 0) {
              (**(code **)(*(int *)(param_1 + 0xd38) + 0xc))(*(undefined4 *)(param_1 + 0xd3c));
            }
          }
        }
        FUN_005e6cdc(param_1 + 0xd58);
        if (*(int *)(param_1 + 0xd64) != -1) {
          FUN_016dffb2();
        }
        FUN_00a414e8(param_1 + 0xd58);
      }
LAB_00eb7568:
      piVar3 = *(int **)(param_1 + 0xcd0);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar11 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar11);
      *piVar3 = iVar5 + -1;
      iVar7 = 0x58;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078f324(*(undefined4 *)(param_1 + 0xcd0));
      }
    }
    FUN_00d9e928(param_1 + 0xc48 + iVar7);
    goto LAB_00eb832c;
  }
  switch(*(undefined1 *)(param_1 + 0xe7c)) {
  case 0:
    unaff_r6 = param_1 + 0xc40;
    FUN_00d824a4(param_1 + 0xdc0);
    FUN_00d80fcc(param_1 + 0xd90);
    FUN_00d81034(unaff_r6);
    FUN_00d8256c(param_1 + 0xe08);
  default:
    goto switchD_00eb6590_caseD_1;
  case 3:
    switch(*(undefined1 *)(param_1 + 0x12a0)) {
    case 0:
      FUN_00d80fcc(param_1 + 0xfd8);
      FUN_00d81034(param_1 + 0xe88);
      FUN_00ebae64(param_1 + 0x1008);
    default:
      goto switchD_00eb6e50_caseD_1;
    case 3:
      FUN_00eba7b4(param_1 + 0x12a8);
      break;
    case 4:
      FUN_00ebae64(param_1 + 0x12a8);
      break;
    case 5:
      FUN_00ebae64(param_1 + 0x12a8);
      break;
    case 6:
      FUN_00ebae64(param_1 + 0x12a8);
    }
    if (*(char *)(param_1 + 0x12a1) != '\0') {
      FUN_00ebae64(param_1 + 0x1890);
    }
    *(undefined1 *)(param_1 + 0x12a1) = 0;
    FUN_00d80fcc(param_1 + 0x1268);
    FUN_00d81034(param_1 + 0x1118);
    break;
  case 4:
    uVar2 = (uint)*(byte *)(param_1 + 0x1190);
    if (uVar2 - 4 < 3) {
LAB_00eb73b8:
      *(undefined1 *)(param_1 + 0x1192) = 0;
      iVar7 = param_1 + 0x1008;
      iVar5 = 0x1158;
    }
    else {
      if (uVar2 == 3) {
        FUN_00eba7b4(param_1 + 0x11a0);
        goto LAB_00eb73b8;
      }
      if (uVar2 != 0) break;
      iVar7 = param_1 + 0xe88;
      iVar5 = 0xfd8;
    }
    FUN_00d80fcc(param_1 + iVar5);
    FUN_00d81034(iVar7);
    break;
  case 5:
    switch(*(undefined1 *)(param_1 + 0x11a4)) {
    case 0:
      FUN_00d80fcc(param_1 + 0xfd8);
      FUN_00d81034(param_1 + 0xe88);
      if ((*(char *)(param_1 + 0x119c) == '\0') &&
         (*(int *)(param_1 + 0x118c) != -0x80000000 && *(int *)(param_1 + 0x118c) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1190));
      }
      break;
    case 3:
      FUN_00eba7b4(param_1 + 0x11c0);
      goto LAB_00eb748c;
    case 4:
    case 5:
    case 6:
      if ((*(char *)(param_1 + 0x11b8) == '\0') && ((*(uint *)(param_1 + 0x11a8) & 0x7fffffff) != 0)
         ) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11ac));
      }
LAB_00eb748c:
      if (((*(char *)(param_1 + 0x11a5) != '\0') && (*(char *)(param_1 + 0x11b8) == '\0')) &&
         (*(int *)(param_1 + 0x11a8) != -0x80000000 && *(int *)(param_1 + 0x11a8) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11ac));
      }
      *(undefined1 *)(param_1 + 0x11a5) = 0;
      FUN_00d80fcc(param_1 + 0x1158);
      FUN_00d81034(param_1 + 0x1008);
    }
    break;
  case 6:
    uVar2 = (uint)*(byte *)(param_1 + 0x1190);
    if (uVar2 - 4 < 3) {
LAB_00eb740c:
      *(undefined1 *)(param_1 + 0x1192) = 0;
      iVar7 = param_1 + 0x1008;
      iVar5 = 0x1158;
    }
    else {
      if (uVar2 == 3) {
        FUN_00eba7b4(param_1 + 0x11a0);
        goto LAB_00eb740c;
      }
      if (uVar2 != 0) break;
      iVar7 = param_1 + 0xe88;
      iVar5 = 0xfd8;
    }
    FUN_00d80fcc(param_1 + iVar5);
    FUN_00d81034(iVar7);
  }
switchD_00eb6e50_caseD_1:
  if (*(char *)(param_1 + 0xe7d) != '\0') {
    unaff_r6 = param_1 + 0xe20;
    FUN_00d824a4(param_1 + 0xe34);
    FUN_00d8256c(unaff_r6);
  }
  *(undefined4 *)(param_1 + 0xe7d) = 0;
switchD_00eb6590_caseD_1:
  cVar1 = *(char *)(param_1 + 0xc27);
joined_r0x00eb875c:
  if (cVar1 != '\0') {
    FUN_00d824a4(param_1 + 0x290);
  }
  *(undefined1 *)(param_1 + 0xc27) = 0;
  if (*(char *)(param_1 + 0xc28) != '\0') {
    piVar3 = *(int **)(param_1 + 0x288);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c));
    }
  }
  *(undefined1 *)(param_1 + 0xc28) = 0;
  bVar11 = *(char *)(param_1 + 0xc29) != '\0';
  if (bVar11) {
    unaff_r6 = *(int *)(param_1 + 0x280);
  }
  if (bVar11 && unaff_r6 != 0) {
    puVar9 = *(undefined4 **)(param_1 + 0x284);
    pcVar6 = (code *)*puVar9;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(unaff_r6);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(unaff_r6);
    }
  }
  *(undefined1 *)(param_1 + 0xc29) = 0;
  if ((*(char *)(param_1 + 0xc18) != '\0') && (-0x7fffffff < *(int *)(param_1 + 0xb9c))) {
    puVar9 = (undefined4 *)(*(int *)(param_1 + 0xba0) + 0x10);
    for (iVar5 = *(int *)(param_1 + 0xba4); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar9[-4] != 0) {
        thunk_FUN_016d3fb4(puVar9[-3]);
      }
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 6;
    }
    if (*(int *)(param_1 + 0xb9c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xba0));
    }
  }
  *(undefined1 *)(param_1 + 0xc18) = 0;
  if (*(char *)(param_1 + 0xc2a) != '\0') {
    if (*(int *)(param_1 + 600) == -0x80000000 || *(int *)(param_1 + 600) == 0) {
      if (*(int *)(param_1 + 0x264) != -0x80000000 && *(int *)(param_1 + 0x264) != 0) {
LAB_00eb8974:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x268));
      }
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x25c));
      if (*(int *)(param_1 + 0x264) != -0x80000000 && *(int *)(param_1 + 0x264) != 0)
      goto LAB_00eb8974;
    }
    if (*(int *)(param_1 + 0x270) != -0x80000000 && *(int *)(param_1 + 0x270) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x274));
    }
    FUN_00d81034(param_1 + 0x100);
  }
  *(undefined1 *)(param_1 + 0xc2a) = 0;
  if (*(char *)(param_1 + 0xc2b) != '\0') {
    FUN_00d8256c(param_1 + 0xb88);
  }
  *(undefined1 *)(param_1 + 0xc2b) = 0;
LAB_00eb88e0:
  *(undefined1 *)(param_1 + 0xc39) = 0;
  if (*(char *)(param_1 + 0xc2c) != '\0') {
    iVar5 = *(int *)(param_1 + 0xb84);
    DataMemoryBarrier(0xb);
    pcVar4 = (char *)(iVar5 + 0x10);
    *(undefined1 *)(iVar5 + 0x22) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar11 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar11);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar7 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = 0;
      if (iVar7 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar5 + 0x10) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar4 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar5 + 0xc));
      }
    }
    pcVar4 = (char *)(iVar5 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar11 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar11);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar7 = *(int *)(iVar5 + 0x14);
      *(undefined4 *)(iVar5 + 0x14) = 0;
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 0xc))(*(undefined4 *)(iVar5 + 0x18));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar5 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar3 = *(int **)(param_1 + 0xb84);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089dea4(*(undefined4 *)(param_1 + 0xb84));
    }
  }
  *(undefined1 *)(param_1 + 0xc2c) = 0;
  if (*(char *)(param_1 + 0xc19) != '\0') {
    piVar3 = *(int **)(param_1 + 0xb80);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xb80));
    }
  }
  *(undefined1 *)(param_1 + 0xc19) = 0;
  if (*(char *)(param_1 + 0xc1a) != '\0') {
    piVar3 = *(int **)(param_1 + 0xb7c);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar11);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xb7c));
    }
  }
  *(undefined1 *)(param_1 + 0xc1a) = 0;
  param_1 = param_1 + 0x80;
switchD_00eb6468_caseD_0:
  FUN_00d78c4c(param_1);
  return;
}

