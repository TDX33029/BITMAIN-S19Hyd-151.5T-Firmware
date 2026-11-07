// FUN_00e4eef0 @ 00e4eef0 size=2732 calls_out=34 calls_in=1
// strings: 

void FUN_00e4eef0(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  int unaff_r6;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  
  if (*(char *)(param_1 + 0x16a0) != '\x03') {
    if (*(char *)(param_1 + 0x16a0) == '\0') {
      FUN_00e45d9c(param_1);
      return;
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xbd4)) {
  case 0:
    FUN_00e45d9c(param_1 + 0x4c0);
    return;
  default:
    goto switchD_00e4ef30_caseD_1;
  case 3:
    FUN_00ef6fa0((int *)(param_1 + 0xbe8));
    if (*(int *)(param_1 + 0xbe8) == 0) {
      FUN_00e469ec(*(undefined4 *)(param_1 + 0xbec));
      piVar3 = *(int **)(param_1 + 0xbec);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar13 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar13);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa79bc(*(undefined4 *)(param_1 + 0xbec));
      }
    }
    piVar3 = *(int **)(param_1 + 0xbf0);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar13 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar13);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa8be8(*(undefined4 *)(param_1 + 0xbf0));
      }
    }
    FUN_00e501cc(param_1 + 0xbf4);
    if (*(char *)(param_1 + 0xc44) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xc40);
      bVar13 = cVar1 == '\x03';
      if (bVar13) {
        cVar1 = *(char *)(param_1 + 0xc1d);
      }
      if (bVar13 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0xc20);
        if (*(int *)(param_1 + 0xc30) != 0) {
          (**(code **)(*(int *)(param_1 + 0xc30) + 0xc))(*(undefined4 *)(param_1 + 0xc34));
        }
        *(undefined1 *)(param_1 + 0xc1c) = 0;
      }
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0xcf8) != 0) {
      FUN_00e43e74(*(int *)(param_1 + 0xcf8),*(undefined4 *)(param_1 + 0xcfc),1);
    }
    goto LAB_00e4f7c0;
  case 5:
    switch(*(undefined1 *)(param_1 + 0x11fc)) {
    case 0:
      FUN_005c70d0(param_1 + 0xbe0);
      break;
    case 3:
      if (*(int *)(param_1 + 0x1328) != 0) {
        FUN_00e44660(*(int *)(param_1 + 0x1328),*(undefined4 *)(param_1 + 0x132c),1);
      }
      FUN_005c8810(param_1 + 0x120c);
      *(undefined1 *)(param_1 + 0x11ff) = 0;
      goto LAB_00e4f6b0;
    case 4:
      if (*(char *)(param_1 + 0x14e4) == '\x03') {
        puVar11 = *(undefined4 **)(param_1 + 0x1294);
        uVar10 = *(undefined4 *)(param_1 + 0x1290);
        pcVar6 = (code *)*puVar11;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar10);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        iVar5 = *(int *)(param_1 + 0x14e0);
        *(undefined1 *)(param_1 + 0x14e5) = 0;
        if (iVar5 != 0) {
          puVar4 = (uint *)(iVar5 + 0x18);
          do {
            uVar8 = *puVar4;
            bVar13 = (bool)hasExclusiveAccess(puVar4);
          } while (!bVar13);
          *puVar4 = uVar8 | 4;
          DataMemoryBarrier(0xb);
          if ((uVar8 & 10) == 8) {
            (**(code **)(*(int *)(iVar5 + 8) + 8))(*(undefined4 *)(iVar5 + 0xc));
          }
          if ((uVar8 & 2) != 0) {
            *(undefined1 *)(iVar5 + 0x1c) = 2;
          }
          piVar3 = *(int **)(param_1 + 0x14e0);
          if (piVar3 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar3;
              bVar13 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar13);
            *piVar3 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f3128(*(undefined4 *)(param_1 + 0x14e0));
            }
          }
        }
        *(undefined1 *)(param_1 + 0x14e6) = 0;
        FUN_00e47ef0(param_1 + 0x1238);
        piVar9 = *(int **)(param_1 + 0x14dc);
        *(undefined1 *)(param_1 + 0x14e7) = 0;
        piVar3 = piVar9 + 0x11;
        do {
          iVar5 = *piVar3;
          bVar13 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar13);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          FUN_00e46e30(piVar9 + 2);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar9;
          bVar13 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar13);
        *piVar9 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(*(undefined4 *)(param_1 + 0x14dc));
        }
        *(undefined1 *)(param_1 + 0x14e8) = 0;
        FUN_005c5b7c(param_1 + 0x1220);
        *(undefined1 *)(param_1 + 0x14e9) = 0;
        FUN_005c8810(param_1 + 0x13c0);
        *(undefined1 *)(param_1 + 0x14ea) = 0;
      }
      else if (*(char *)(param_1 + 0x14e4) == '\0') {
        FUN_005c8810(param_1 + 0x1298);
        FUN_005c5b7c(param_1 + 0x1208);
        piVar9 = *(int **)(param_1 + 0x13b8);
        piVar3 = piVar9 + 0x11;
        do {
          iVar5 = *piVar3;
          bVar13 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar13);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          FUN_00e46e30(piVar9 + 2);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar9;
          bVar13 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar13);
        *piVar9 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(*(undefined4 *)(param_1 + 0x13b8));
        }
      }
      FUN_00e44900(*(undefined4 *)(param_1 + 0x11f8));
LAB_00e4f6b0:
      *(undefined4 *)(param_1 + 0x1200) = 0;
      FUN_005c5ddc(param_1 + 0xe10);
      break;
    case 5:
      if (*(char *)(param_1 + 0x1698) == '\x03') {
        piVar3 = *(int **)(param_1 + 0x1694);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar13 = (bool)hasExclusiveAccess(piVar3);
          if (!bVar13) goto LAB_00e4f6f0;
          *piVar3 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00e4f6f0:
          (**(code **)(piVar3[2] + 0x10))();
        }
        FUN_0075d388(*(undefined4 *)(param_1 + 0x168c));
        piVar3 = *(int **)(param_1 + 0x168c);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar13 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar13);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0165863c(*(undefined4 *)(param_1 + 0x168c));
          }
        }
        FUN_00e47c18(param_1 + 0x1448);
      }
      else if (*(char *)(param_1 + 0x1698) == '\0') {
        FUN_00e47c18(param_1 + 0x1208);
        FUN_0075d388(*(undefined4 *)(param_1 + 0x1688));
        piVar3 = *(int **)(param_1 + 0x1688);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar13 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar13);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0165863c(*(undefined4 *)(param_1 + 0x1688));
          }
        }
      }
      *(undefined2 *)(param_1 + 0x11fd) = 0;
      break;
    case 6:
      if (*(char *)(param_1 + 0x12f0) == '\x03') {
        if (*(char *)(param_1 + 0x12e4) == '\x03') {
          FUN_005c3298(param_1 + 0x12c0);
          if (*(int *)(param_1 + 0x12b4) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x12b8));
          }
          if (1 < *(byte *)(param_1 + 0x1280)) {
            FUN_005c5efc();
          }
          *(undefined1 *)(param_1 + 0x12e5) = 0;
        }
        else if (*(char *)(param_1 + 0x12e4) == '\0') {
          FUN_005c5efc(param_1 + 0x1250);
        }
        if (*(char *)(param_1 + 0x1220) == '\x04') {
          FUN_005c0eec((char *)(param_1 + 0x1220));
        }
      }
      if (*(int *)(param_1 + 0x1208) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x120c));
      }
    }
    FUN_00e44114(*(undefined4 *)(param_1 + 0xbd0));
LAB_00e4f7c0:
    if (*(char *)(param_1 + 0xbd6) != '\0') {
      FUN_005c70d0(param_1 + 0xbe0);
    }
    *(undefined1 *)(param_1 + 0xbd6) = 0;
    break;
  case 6:
    if (*(char *)(param_1 + 0xc6c) == '\x03') {
      if (*(int *)(param_1 + 0xc40) != 0) {
        FUN_00e44660(*(int *)(param_1 + 0xc40),*(undefined4 *)(param_1 + 0xc44),1);
      }
      if (*(int *)(param_1 + 0xc4c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc50));
      }
      *(undefined1 *)(param_1 + 0xc68) = 0;
      if (*(int *)(param_1 + 0xc20) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc24));
      }
      FUN_005c5ee8(param_1 + 0xbe0);
      *(undefined1 *)(param_1 + 0xc6b) = 0;
      *(undefined2 *)(param_1 + 0xc69) = 0;
    }
    else if ((*(char *)(param_1 + 0xc6c) == '\0') && (*(int *)(param_1 + 0xc5c) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc60));
    }
    *(undefined1 *)(param_1 + 0xbdb) = 0;
    break;
  case 7:
    if (*(char *)(param_1 + 0xc26) == '\x03') {
      FUN_005c28e8(param_1 + 0xbe0);
      piVar3 = *(int **)(param_1 + 0xc0c);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar13 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar13);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(*(undefined4 *)(param_1 + 0xc0c));
      }
      piVar3 = *(int **)(param_1 + 0xc08);
      *(undefined1 *)(param_1 + 0xc24) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar13 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar13);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e45d08(*(undefined4 *)(param_1 + 0xc08));
      }
      *(undefined1 *)(param_1 + 0xc25) = 0;
    }
    else if (*(char *)(param_1 + 0xc26) == '\0') {
      piVar3 = *(int **)(param_1 + 0xc10);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar13 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar13);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e45d08(*(undefined4 *)(param_1 + 0xc10));
      }
      piVar3 = *(int **)(param_1 + 0xc14);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar13 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar13);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aaaeec(*(undefined4 *)(param_1 + 0xc14));
      }
    }
    *(undefined1 *)(param_1 + 0xbda) = 0;
    break;
  case 8:
    if (*(int *)(param_1 + 0xbe8) == 1) {
      bVar13 = *(int *)(param_1 + 0xbf0) == 0;
      bVar2 = *(int *)(param_1 + 0xbf4) == 0;
      bVar12 = bVar13 && bVar2;
      if (!bVar13 || !bVar2) {
        unaff_r6 = *(int *)(param_1 + 0xbf8);
        bVar12 = unaff_r6 == 0;
      }
      if (!bVar12) {
        puVar11 = *(undefined4 **)(param_1 + 0xbfc);
        pcVar6 = (code *)*puVar11;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(unaff_r6);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(unaff_r6);
        }
      }
    }
    else if (*(int *)(param_1 + 0xbe8) == 0) {
      piVar3 = *(int **)(param_1 + 0xbf0);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar13 = (bool)hasExclusiveAccess(piVar3);
        if (bVar13) {
          *piVar3 = 0x84;
          goto LAB_00e4f2c8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
LAB_00e4f2c8:
    if (*(int *)(param_1 + 0xc00) == 1) {
      bVar13 = *(int *)(param_1 + 0xc08) == 0;
      bVar2 = *(int *)(param_1 + 0xc0c) == 0;
      bVar12 = bVar13 && bVar2;
      if (!bVar13 || !bVar2) {
        unaff_r6 = *(int *)(param_1 + 0xc10);
        bVar12 = unaff_r6 == 0;
      }
      if (!bVar12) {
        puVar11 = *(undefined4 **)(param_1 + 0xc14);
        pcVar6 = (code *)*puVar11;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(unaff_r6);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(unaff_r6);
        }
      }
    }
    else if (*(int *)(param_1 + 0xc00) == 0) {
      piVar3 = *(int **)(param_1 + 0xc08);
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar13 = (bool)hasExclusiveAccess(piVar3);
        if (bVar13) {
          *piVar3 = 0x84;
          goto LAB_00e4f4ac;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
LAB_00e4f4ac:
    if (*(int *)(param_1 + 0xc18) == 1) {
      if (*(int *)(param_1 + 0xc20) != 0 || *(int *)(param_1 + 0xc24) != 0) {
        bVar13 = *(int *)(param_1 + 0xc28) == 0;
        bVar2 = *(int *)(param_1 + 0xc2c) == 0;
        bVar12 = bVar13 && bVar2;
        if (!bVar13 || !bVar2) {
          unaff_r6 = *(int *)(param_1 + 0xc30);
          bVar12 = unaff_r6 == 0;
        }
        if (!bVar12) {
          puVar11 = *(undefined4 **)(param_1 + 0xc34);
          pcVar6 = (code *)*puVar11;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(unaff_r6);
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(unaff_r6);
          }
        }
      }
    }
    else if ((*(int *)(param_1 + 0xc18) == 0) &&
            (piVar3 = *(int **)(param_1 + 0xc20), piVar3 != (int *)0x0)) {
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar13 = (bool)hasExclusiveAccess(piVar3);
        if (bVar13) {
          *piVar3 = 0x84;
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
  }
  bVar13 = *(char *)(param_1 + 0xbd7) != '\0';
  piVar3 = (int *)0x0;
  if (bVar13) {
    piVar3 = *(int **)(param_1 + 0xbcc);
  }
  if (bVar13 && piVar3 != (int *)0x0) {
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar13 = (bool)hasExclusiveAccess(piVar3);
      if (bVar13) {
        *piVar3 = 0x84;
        goto LAB_00e4f824;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00e4f824:
  *(undefined1 *)(param_1 + 0xbd7) = 0;
  if (*(char *)(param_1 + 0xbd8) != '\0') {
    piVar3 = *(int **)(param_1 + 0xbc8);
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar13 = (bool)hasExclusiveAccess(piVar3);
      if (bVar13) {
        *piVar3 = 0x84;
        goto LAB_00e4f870;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00e4f870:
  *(undefined1 *)(param_1 + 0xbd8) = 0;
  if (*(char *)(param_1 + 0xbd9) != '\0') {
    piVar3 = *(int **)(param_1 + 0xbc4);
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar13 = (bool)hasExclusiveAccess(piVar3);
      if (bVar13) {
        *piVar3 = 0x84;
        goto LAB_00e4f8b8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00e4f8b8:
  iVar5 = *(int *)(param_1 + 0x980);
  *(undefined1 *)(param_1 + 0xbd9) = 0;
  piVar3 = (int *)(iVar5 + 0xa4);
  do {
    iVar7 = *piVar3;
    bVar13 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar13);
  *piVar3 = iVar7 + -1;
  if (iVar7 == 1) {
    FUN_0163b708(iVar5 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 0x980);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar13 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar13);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaae74(*(undefined4 *)(param_1 + 0x980));
  }
  puVar11 = (undefined4 *)(param_1 + 0xbc0);
  *(undefined1 *)(param_1 + 0xbdc) = 0;
  FUN_01663cc4(*puVar11);
  piVar3 = (int *)*puVar11;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar13 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar13);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar11);
  }
  puVar11 = (undefined4 *)(param_1 + 0xbbc);
  *(undefined1 *)(param_1 + 0xbdd) = 0;
  FUN_01663cc4(*puVar11);
  piVar3 = (int *)*puVar11;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar13 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar13);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar11);
  }
  piVar3 = *(int **)(param_1 + 3000);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar13 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar13);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45d08(*(undefined4 *)(param_1 + 3000));
    return;
  }
switchD_00e4ef30_caseD_1:
  return;
}

