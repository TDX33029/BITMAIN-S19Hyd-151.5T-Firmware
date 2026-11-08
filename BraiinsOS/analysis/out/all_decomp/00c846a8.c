// FUN_00c846a8 @ 00c846a8 size=1796 calls_out=27 calls_in=2
// strings: 

void FUN_00c846a8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x7ec) != '\0') {
    if (*(char *)(param_1 + 0x7ec) == '\x03') {
      FUN_00887914(param_1 + 2000);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x7cc) != '\x03') {
    if (*(char *)(param_1 + 0x7cc) == '\0') {
      piVar2 = *(int **)(param_1 + 0x7c8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d06854(*(undefined4 *)(param_1 + 0x7c8));
      }
      FUN_005e6cdc(param_1);
      if (*(int *)(param_1 + 0xc) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1);
    }
    goto LAB_00c84df4;
  }
  switch(*(undefined1 *)(param_1 + 0x7c)) {
  case 0:
    FUN_005e6cdc(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x10);
    break;
  case 3:
    goto switchD_00c84750_caseD_3;
  case 4:
    switch(*(undefined1 *)(param_1 + 0xd0)) {
    case 3:
    case 6:
      if (*(char *)(param_1 + 0x114) == '\x03') {
        FUN_00c8526c(param_1 + 0xe4);
      }
      break;
    case 4:
    case 7:
      FUN_00c85398(param_1 + 0xe0);
      break;
    case 5:
      if (*(char *)(param_1 + 0x165) == '\x03') {
        FUN_00c8315c(param_1 + 0xf0);
        *(undefined1 *)(param_1 + 0x164) = 0;
      }
      piVar2 = *(int **)(param_1 + 0xec);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1030(*(undefined4 *)(param_1 + 0xec));
      }
      if (*(int *)(param_1 + 0xe0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
      }
      break;
    case 8:
      cVar1 = *(char *)(param_1 + 0x154);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0x151);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_00c8315c(param_1 + 0xe4);
      }
      break;
    case 9:
      FUN_00c85450(param_1 + 0xe0);
      break;
    case 10:
      FUN_00c859b0(param_1 + 0xe0);
      break;
    case 0xb:
      FUN_00654988(param_1 + 0xe0);
      break;
    case 0xd:
      FUN_00c85cb8(param_1 + 0xe0);
      break;
    case 0xe:
      FUN_00c85f64(param_1 + 0xe0);
      goto LAB_00c84a04;
    case 0xf:
      FUN_00c86060(param_1 + 0xf0);
      if (*(int *)(param_1 + 0xe0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
      }
LAB_00c84a04:
      if (*(int *)(param_1 + 0xb0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
      }
      *(undefined1 *)(param_1 + 0xd8) = 0;
      break;
    case 0x10:
      if (*(char *)(param_1 + 0x1dc) == '\x03') {
        if (*(char *)(param_1 + 0x160) == '\x04') {
          cVar1 = *(char *)(param_1 + 400);
          if (cVar1 == '\x05') {
            puVar6 = *(undefined4 **)(param_1 + 0x1a4);
            uVar5 = *(undefined4 *)(param_1 + 0x1a0);
            pcVar4 = (code *)*puVar6;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar5);
            }
            if (puVar6[1] != 0) {
              thunk_FUN_016d3fb4(uVar5);
            }
            puVar6 = (undefined4 *)(*(int *)(param_1 + 0x198) + 4);
            for (iVar3 = *(int *)(param_1 + 0x19c); iVar3 != 0; iVar3 = iVar3 + -1) {
              if (puVar6[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar6);
              }
              puVar6 = puVar6 + 4;
            }
            if (*(int *)(param_1 + 0x194) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x198));
            }
            *(undefined1 *)(param_1 + 0x191) = 0;
LAB_00c84c8c:
            FUN_0163af08(*(undefined4 *)(param_1 + 0x18c),1);
          }
          else {
            if (cVar1 == '\x04') {
              puVar6 = *(undefined4 **)(param_1 + 0x198);
              uVar5 = *(undefined4 *)(param_1 + 0x194);
              pcVar4 = (code *)*puVar6;
              if (pcVar4 != (code *)0x0) {
                (*pcVar4)(uVar5);
              }
              if (puVar6[1] != 0) {
                thunk_FUN_016d3fb4(uVar5);
              }
              goto LAB_00c84c8c;
            }
            bVar7 = cVar1 == '\x03';
            if (bVar7) {
              cVar1 = *(char *)(param_1 + 0x1cc);
            }
            if (bVar7 && cVar1 == '\x03') {
              cVar1 = *(char *)(param_1 + 0x1c8);
              bVar7 = cVar1 == '\x03';
              if (bVar7) {
                cVar1 = *(char *)(param_1 + 0x1a4);
              }
              if (bVar7 && cVar1 == '\x04') {
                FUN_0163c790(param_1 + 0x1a8);
                if (*(int *)(param_1 + 0x1ac) != 0) {
                  (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))(*(undefined4 *)(param_1 + 0x1b0));
                }
              }
            }
          }
          FUN_00c822ec(*(undefined4 *)(param_1 + 0x15c));
        }
        else if ((*(char *)(param_1 + 0x160) == '\x03') && (*(int *)(param_1 + 0x16c) != 0)) {
          FUN_00c8204c(*(int *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170),1);
        }
        piVar2 = *(int **)(param_1 + 0x1d8);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar7 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar7);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(param_1 + 0x1d8));
        }
      }
      if (*(int *)(param_1 + 0x108) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x100));
      }
      FUN_00ce1670(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
      if (*(int *)(param_1 + 0xe0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe4));
      }
      *(undefined1 *)(param_1 + 0xd7) = 0;
      *(undefined1 *)(param_1 + 0xd1) = 0;
      break;
    case 0x11:
      if (*(char *)(param_1 + 0x1ec) == '\x03') {
        if (*(char *)(param_1 + 0x160) == '\x04') {
          cVar1 = *(char *)(param_1 + 0x198);
          if (cVar1 == '\x04') {
            puVar6 = *(undefined4 **)(param_1 + 0x1a0);
            uVar5 = *(undefined4 *)(param_1 + 0x19c);
            pcVar4 = (code *)*puVar6;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar5);
            }
            if (puVar6[1] != 0) {
              thunk_FUN_016d3fb4(uVar5);
            }
            FUN_0163af08(*(undefined4 *)(param_1 + 0x194),1);
          }
          else {
            bVar7 = cVar1 == '\x03';
            if (bVar7) {
              cVar1 = *(char *)(param_1 + 0x1d4);
            }
            if (bVar7 && cVar1 == '\x03') {
              cVar1 = *(char *)(param_1 + 0x1d0);
              bVar7 = cVar1 == '\x03';
              if (bVar7) {
                cVar1 = *(char *)(param_1 + 0x1ac);
              }
              if (bVar7 && cVar1 == '\x04') {
                FUN_0163c790(param_1 + 0x1b0);
                if (*(int *)(param_1 + 0x1b4) != 0) {
                  (**(code **)(*(int *)(param_1 + 0x1b4) + 0xc))(*(undefined4 *)(param_1 + 0x1b8));
                }
              }
            }
          }
          FUN_00c822ec(*(undefined4 *)(param_1 + 0x15c));
        }
        else if ((*(char *)(param_1 + 0x160) == '\x03') && (*(int *)(param_1 + 0x16c) != 0)) {
          FUN_00c8204c(*(int *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170),1);
        }
        piVar2 = *(int **)(param_1 + 0x1e8);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar7 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar7);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(param_1 + 0x1e8));
        }
      }
      if (*(int *)(param_1 + 0x1f8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1f0));
      }
      *(undefined1 *)(param_1 + 0xd6) = 0;
      break;
    case 0x12:
      FUN_00c86140(param_1 + 0xe8);
      *(undefined2 *)(param_1 + 0xd4) = 0;
      break;
    case 0x13:
      FUN_00c862ac(param_1 + 0xf0);
      if (*(int *)(param_1 + 0xe8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xe0));
      }
      *(undefined1 *)(param_1 + 0xd3) = 0;
      break;
    case 0x14:
      if (*(char *)(param_1 + 0x20c) == '\x03') {
        if (*(char *)(param_1 + 0x158) == '\x04') {
          cVar1 = *(char *)(param_1 + 0x1fc);
          bVar7 = cVar1 == '\x03';
          if (bVar7) {
            cVar1 = *(char *)(param_1 + 500);
          }
          if (bVar7 && cVar1 == '\x03') {
            FUN_00c83a14(param_1 + 0x1a0);
          }
          FUN_00c822ec(*(undefined4 *)(param_1 + 0x154));
        }
        else if ((*(char *)(param_1 + 0x158) == '\x03') && (*(int *)(param_1 + 0x160) != 0)) {
          FUN_00c8204c(*(int *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164),1);
        }
        piVar2 = *(int **)(param_1 + 0x208);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar7 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar7);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)(param_1 + 0x208));
        }
      }
      if (*(int *)(param_1 + 0xf8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf0));
      }
      *(undefined1 *)(param_1 + 0xd2) = 0;
    }
switchD_00c847ac_caseD_c:
    bVar7 = *(char *)(param_1 + 0x7d) != '\0';
    iVar3 = 0;
    if (bVar7) {
      iVar3 = *(int *)(param_1 + 0x70);
    }
    if (bVar7 && iVar3 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    }
    *(undefined1 *)(param_1 + 0x7d) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x68));
    }
switchD_00c84750_caseD_3:
    piVar2 = *(int **)(param_1 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d05ff8(*(undefined4 *)(param_1 + 0x48));
    }
    piVar2 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d05ff8(*(undefined4 *)(param_1 + 0x44));
    }
    if ((*(uint *)(param_1 + 0x38) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
    }
    *(undefined2 *)(param_1 + 0x7e) = 0;
    break;
  case 5:
    if ((*(uint *)(param_1 + 0x80) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    }
    goto switchD_00c847ac_caseD_c;
  }
  piVar2 = *(int **)(param_1 + 0x7c8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06854(*(undefined4 *)(param_1 + 0x7c8));
  }
LAB_00c84df4:
  FUN_00ac9c30(param_1 + 0x7e0);
  return;
}

