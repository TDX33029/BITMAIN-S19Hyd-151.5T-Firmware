// FUN_00e4d76c @ 00e4d76c size=2456 calls_out=12 calls_in=0
// strings: 

void FUN_00e4d76c(int param_1)

{
  uint *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_r5;
  int *unaff_r6;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x5de) == '\0') {
    FUN_00e47ef0(param_1 + 0x458);
    FUN_005c8810(param_1 + 0x4bc);
    if (*(int *)(param_1 + 0x44c) == -0x80000000 || *(int *)(param_1 + 0x44c) == 0) {
      iVar4 = *(int *)(param_1 + 0x440);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x450));
      iVar4 = *(int *)(param_1 + 0x440);
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x444));
    }
    piVar5 = *(int **)(param_1 + 0x4b4);
    piVar2 = piVar5 + 0x11;
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00e46e30(piVar5 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar8 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar8);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x4b4));
    }
    iVar4 = *(int *)(param_1 + 0x4b0);
    if (iVar4 != 0) {
      puVar1 = (uint *)(iVar4 + 0x18);
      do {
        uVar6 = *puVar1;
        bVar8 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar8);
      *puVar1 = uVar6 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 10) == 8) {
        (**(code **)(*(int *)(iVar4 + 8) + 8))(*(undefined4 *)(iVar4 + 0xc));
      }
      if ((uVar6 & 2) != 0) {
        *(undefined1 *)(iVar4 + 0x1c) = 2;
      }
      piVar2 = *(int **)(param_1 + 0x4b0);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(*(undefined4 *)(param_1 + 0x4b0));
        }
      }
    }
    FUN_01663cc4(*(undefined4 *)(param_1 + 0x4b8));
    piVar2 = *(int **)(param_1 + 0x4b8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    goto LAB_00e4dfd4;
  }
  if (*(char *)(param_1 + 0x5de) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x37c)) {
  case 0:
    FUN_00e47ef0(param_1 + 0x50);
    FUN_005c8810(param_1 + 0x130);
    if (*(int *)(param_1 + 0xb4) == -0x80000000 || *(int *)(param_1 + 0xb4) == 0) {
      iVar4 = *(int *)(param_1 + 0xa8);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb8));
      iVar4 = *(int *)(param_1 + 0xa8);
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xac));
    }
    piVar5 = *(int **)(param_1 + 0x24c);
    piVar2 = piVar5 + 0x11;
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00e46e30(piVar5 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar8 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar8);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x24c));
    }
    iVar4 = *(int *)(param_1 + 0x254);
    if (iVar4 != 0) {
      puVar1 = (uint *)(iVar4 + 0x18);
      do {
        uVar6 = *puVar1;
        bVar8 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar8);
      *puVar1 = uVar6 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 10) == 8) {
        (**(code **)(*(int *)(iVar4 + 8) + 8))(*(undefined4 *)(iVar4 + 0xc));
      }
      if ((uVar6 & 2) != 0) {
        *(undefined1 *)(iVar4 + 0x1c) = 2;
      }
      piVar2 = *(int **)(param_1 + 0x254);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(*(undefined4 *)(param_1 + 0x254));
        }
      }
    }
    puVar7 = (undefined4 *)(param_1 + 0x250);
    FUN_01663cc4(*puVar7);
    piVar2 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
    }
  default:
    goto switchD_00e4d79c_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x3e4) == '\x03') {
      FUN_005c3298(param_1 + 0x3c0);
      *(undefined1 *)(param_1 + 0x3e5) = 0;
    }
    else if (*(char *)(param_1 + 0x3e4) == '\0') {
      if (*(int *)(param_1 + 0x38c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x390));
      }
      if (*(int *)(param_1 + 0x398) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x39c));
      }
      if (*(int *)(param_1 + 0x3a4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3a8));
      }
      if (*(int *)(param_1 + 0x3b0) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3b4));
      }
    }
    goto LAB_00e4de58;
  case 4:
    iVar4 = *(int *)(param_1 + 0x388);
    if (iVar4 != 0) {
      puVar1 = (uint *)(iVar4 + 0x18);
      do {
        unaff_r6 = (int *)*puVar1;
        bVar8 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar8);
      *puVar1 = (uint)unaff_r6 | 4;
      DataMemoryBarrier(0xb);
      if (((uint)unaff_r6 & 10) == 8) {
        (**(code **)(*(int *)(iVar4 + 8) + 8))(*(undefined4 *)(iVar4 + 0xc));
      }
      if (((uint)unaff_r6 & 2) != 0) {
        *(undefined1 *)(iVar4 + 0x1c) = 2;
      }
      piVar2 = *(int **)(param_1 + 0x388);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(*(undefined4 *)(param_1 + 0x388));
        }
      }
    }
    goto LAB_00e4de58;
  case 5:
    puVar7 = *(undefined4 **)(param_1 + 0x390);
    unaff_r6 = *(int **)(param_1 + 0x38c);
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(unaff_r6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(unaff_r6);
    }
    break;
  case 6:
    unaff_r5 = *(int *)(param_1 + 0x388);
    if (unaff_r5 != 0) {
      puVar1 = (uint *)(unaff_r5 + 0x18);
      do {
        unaff_r6 = (int *)*puVar1;
        bVar8 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar8);
      *puVar1 = (uint)unaff_r6 | 4;
      DataMemoryBarrier(0xb);
      if (((uint)unaff_r6 & 10) == 8) {
        (**(code **)(*(int *)(unaff_r5 + 8) + 8))(*(undefined4 *)(unaff_r5 + 0xc));
      }
      if (((uint)unaff_r6 & 2) != 0) {
        uVar6 = *(uint *)(unaff_r5 + 0x1c);
        *(undefined4 *)(unaff_r5 + 0x1c) = 0x80000000;
        if ((uVar6 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(unaff_r5 + 0x20));
        }
      }
      piVar2 = *(int **)(param_1 + 0x388);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aacae8(*(undefined4 *)(param_1 + 0x388));
        }
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x40b) == '\x03') {
      if (*(char *)(param_1 + 0x3eb) == '\x03') {
        if (*(char *)(param_1 + 0x3c4) == '\x03') {
          puVar7 = *(undefined4 **)(param_1 + 0x3bc);
          unaff_r6 = *(int **)(param_1 + 0x3b8);
          pcVar3 = (code *)*puVar7;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(unaff_r6);
          }
          if (puVar7[1] != 0) {
LAB_00e4de00:
            thunk_FUN_016d3fb4(unaff_r6);
          }
        }
        else if (*(char *)(param_1 + 0x3c4) == '\0') {
          if (*(int *)(param_1 + 0x38c) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x388));
          }
          if (*(int *)(param_1 + 0x394) != 0) {
            unaff_r6 = *(int **)(param_1 + 0x390);
            goto LAB_00e4de00;
          }
        }
        *(undefined2 *)(param_1 + 1000) = 0;
        *(undefined1 *)(param_1 + 0x3ea) = 0;
      }
      else if (*(char *)(param_1 + 0x3eb) == '\0') {
        unaff_r6 = *(int **)(param_1 + 0x3e4);
        piVar2 = unaff_r6 + 0x11;
        do {
          iVar4 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          FUN_00e46e30(unaff_r6 + 2);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *unaff_r6;
          bVar8 = (bool)hasExclusiveAccess(unaff_r6);
        } while (!bVar8);
        *unaff_r6 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(*(undefined4 *)(param_1 + 0x3e4));
        }
        if (*(int *)(param_1 + 0x3d4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3d0));
        }
        if (*(int *)(param_1 + 0x3dc) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3d8));
        }
      }
      *(undefined2 *)(param_1 + 0x408) = 0;
      *(undefined1 *)(param_1 + 0x40a) = 0;
    }
    else if (*(char *)(param_1 + 0x40b) == '\0') {
      unaff_r6 = *(int **)(param_1 + 0x404);
      piVar2 = unaff_r6 + 0x11;
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        FUN_00e46e30(unaff_r6 + 2);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *unaff_r6;
        bVar8 = (bool)hasExclusiveAccess(unaff_r6);
      } while (!bVar8);
      *unaff_r6 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aab134(*(undefined4 *)(param_1 + 0x404));
      }
      if (*(int *)(param_1 + 0x3f4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3f0));
      }
      if (*(int *)(param_1 + 0x3fc) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3f8));
      }
    }
    *(undefined2 *)(param_1 + 899) = 0;
  }
  bVar8 = *(char *)(param_1 + 0x37d) != '\0';
  if (bVar8) {
    unaff_r5 = *(int *)(param_1 + 0x388);
  }
  if (bVar8 && unaff_r5 != 0) {
    puVar1 = (uint *)(unaff_r5 + 0x18);
    do {
      unaff_r6 = (int *)*puVar1;
      bVar8 = (bool)hasExclusiveAccess(puVar1);
    } while (!bVar8);
    *puVar1 = (uint)unaff_r6 | 4;
    DataMemoryBarrier(0xb);
    if (((uint)unaff_r6 & 10) == 8) {
      (**(code **)(*(int *)(unaff_r5 + 8) + 8))(*(undefined4 *)(unaff_r5 + 0xc));
    }
    if (((uint)unaff_r6 & 2) != 0) {
      uVar6 = *(uint *)(unaff_r5 + 0x1c);
      *(undefined4 *)(unaff_r5 + 0x1c) = 0x80000000;
      if ((uVar6 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(unaff_r5 + 0x20));
      }
    }
    piVar2 = *(int **)(param_1 + 0x388);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aacae8(*(undefined4 *)(param_1 + 0x388));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x385) = 0;
  *(undefined1 *)(param_1 + 0x37d) = 0;
LAB_00e4de58:
  if (*(char *)(param_1 + 0x37e) != '\0') {
    unaff_r6 = (int *)(param_1 + 0x378);
    FUN_01663cc4(*unaff_r6);
    piVar2 = (int *)*unaff_r6;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(unaff_r6);
    }
  }
  *(undefined1 *)(param_1 + 0x37e) = 0;
  bVar8 = *(char *)(param_1 + 0x37f) != '\0';
  if (bVar8) {
    unaff_r6 = *(int **)(param_1 + 0x388);
  }
  if (bVar8 && unaff_r6 != (int *)0x0) {
    puVar1 = (uint *)(unaff_r6 + 6);
    do {
      uVar6 = *puVar1;
      bVar8 = (bool)hasExclusiveAccess(puVar1);
    } while (!bVar8);
    *puVar1 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(unaff_r6[2] + 8))(unaff_r6[3]);
    }
    if ((uVar6 & 2) != 0) {
      *(undefined1 *)(unaff_r6 + 7) = 2;
    }
    piVar2 = *(int **)(param_1 + 0x388);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar8 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar8);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f3128(*(undefined4 *)(param_1 + 0x388));
      }
    }
  }
  *(undefined1 *)(param_1 + 0x37f) = 0;
  if (*(char *)(param_1 + 0x380) != '\0') {
    piVar5 = *(int **)(param_1 + 0x374);
    piVar2 = piVar5 + 0x11;
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00e46e30(piVar5 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar8 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar8);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x374));
    }
  }
  *(undefined1 *)(param_1 + 0x380) = 0;
  if (*(char *)(param_1 + 0x381) != '\0') {
    if (*(int *)(param_1 + 0x124) == -0x80000000 || *(int *)(param_1 + 0x124) == 0) {
      iVar4 = *(int *)(param_1 + 0x118);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x128));
      iVar4 = *(int *)(param_1 + 0x118);
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
    }
  }
  *(undefined1 *)(param_1 + 0x381) = 0;
  if (*(char *)(param_1 + 0x382) != '\0') {
    FUN_005c8810(param_1 + 600);
  }
  *(undefined1 *)(param_1 + 0x382) = 0;
  FUN_00e47ef0(param_1 + 0xc0);
switchD_00e4d79c_caseD_1:
  FUN_00a07b4c(param_1);
  FUN_0163bdc0(param_1 + 0x414);
  if (*(int *)(param_1 + 0x424) != 0) {
    (**(code **)(*(int *)(param_1 + 0x424) + 0xc))(*(undefined4 *)(param_1 + 0x428));
  }
  FUN_01663cc4(*(undefined4 *)(param_1 + 0x4b8));
  piVar2 = *(int **)(param_1 + 0x4b8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar4 + -1;
LAB_00e4dfd4:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 0x4b8);
    return;
  }
  return;
}

