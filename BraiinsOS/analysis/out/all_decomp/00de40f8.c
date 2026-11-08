// FUN_00de40f8 @ 00de40f8 size=2104 calls_out=9 calls_in=1
// strings: 

void FUN_00de40f8(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  
  switch(*(undefined1 *)(param_1 + 0x32c)) {
  case 0:
    FUN_005c3004(param_1);
    FUN_005c8810(param_1 + 0xe0);
    if (*(int *)(param_1 + 100) == -0x80000000 || *(int *)(param_1 + 100) == 0) {
      iVar2 = *(int *)(param_1 + 0x58);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x68));
      iVar2 = *(int *)(param_1 + 0x58);
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    }
    iVar2 = *(int *)(param_1 + 0x1fc);
    piVar4 = (int *)(iVar2 + 0x44);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_00e46e30(iVar2 + 8);
    }
    piVar4 = *(int **)(param_1 + 0x1fc);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x1fc));
    }
    iVar2 = *(int *)(param_1 + 0x204);
    if (iVar2 != 0) {
      puVar3 = (uint *)(iVar2 + 0x18);
      do {
        uVar8 = *puVar3;
        bVar9 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar9);
      *puVar3 = uVar8 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar8 & 10) == 8) {
        (**(code **)(*(int *)(iVar2 + 8) + 8))(*(undefined4 *)(iVar2 + 0xc));
      }
      if ((uVar8 & 2) != 0) {
        *(undefined1 *)(iVar2 + 0x1c) = 2;
      }
      piVar4 = *(int **)(param_1 + 0x204);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(*(undefined4 *)(param_1 + 0x204));
        }
      }
    }
    puVar7 = (undefined4 *)(param_1 + 0x200);
    FUN_01663cc4(*puVar7);
    piVar4 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
      return;
    }
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x394) == '\x03') {
      if (*(char *)(param_1 + 0x390) == '\x03') {
        puVar7 = *(undefined4 **)(param_1 + 0x38c);
        unaff_r6 = *(undefined4 **)(param_1 + 0x388);
        pcVar5 = (code *)*puVar7;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(unaff_r6);
        }
        if (puVar7[1] != 0) goto LAB_00de4648;
      }
      else if ((*(char *)(param_1 + 0x390) == '\0') && (*(int *)(param_1 + 0x370) != 0)) {
        unaff_r6 = *(undefined4 **)(param_1 + 0x374);
LAB_00de4648:
        thunk_FUN_016d3fb4(unaff_r6);
      }
      *(undefined1 *)(param_1 + 0x395) = 0;
      goto LAB_00de4658;
    }
    if (*(char *)(param_1 + 0x394) != '\0') goto LAB_00de4658;
    if (*(int *)(param_1 + 0x33c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x340));
    }
    if (*(int *)(param_1 + 0x348) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34c));
    }
    if (*(int *)(param_1 + 0x354) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x358));
    }
    if (*(int *)(param_1 + 0x360) == 0) goto LAB_00de4658;
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x364));
    cVar1 = *(char *)(param_1 + 0x32e);
    goto joined_r0x00de46f0;
  case 4:
    iVar2 = *(int *)(param_1 + 0x338);
    if (iVar2 != 0) {
      puVar3 = (uint *)(iVar2 + 0x18);
      do {
        unaff_r6 = (undefined4 *)*puVar3;
        bVar9 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar9);
      *puVar3 = (uint)unaff_r6 | 4;
      DataMemoryBarrier(0xb);
      if (((uint)unaff_r6 & 10) == 8) {
        (**(code **)(*(int *)(iVar2 + 8) + 8))(*(undefined4 *)(iVar2 + 0xc));
      }
      if (((uint)unaff_r6 & 2) != 0) {
        *(undefined1 *)(iVar2 + 0x1c) = 2;
      }
      piVar4 = *(int **)(param_1 + 0x338);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f3128(*(undefined4 *)(param_1 + 0x338));
        }
      }
    }
LAB_00de4658:
    if (*(char *)(param_1 + 0x32e) == '\0') goto LAB_00de4730;
    goto LAB_00de46f4;
  case 5:
    puVar7 = *(undefined4 **)(param_1 + 0x340);
    unaff_r6 = *(undefined4 **)(param_1 + 0x33c);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(unaff_r6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(unaff_r6);
    }
    break;
  case 6:
    unaff_r5 = *(int *)(param_1 + 0x338);
    if (unaff_r5 != 0) {
      puVar3 = (uint *)(unaff_r5 + 0x18);
      do {
        unaff_r6 = (undefined4 *)*puVar3;
        bVar9 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar9);
      *puVar3 = (uint)unaff_r6 | 4;
      DataMemoryBarrier(0xb);
      if (((uint)unaff_r6 & 10) == 8) {
        (**(code **)(*(int *)(unaff_r5 + 8) + 8))(*(undefined4 *)(unaff_r5 + 0xc));
      }
      if (((uint)unaff_r6 & 2) != 0) {
        uVar8 = *(uint *)(unaff_r5 + 0x1c);
        *(undefined4 *)(unaff_r5 + 0x1c) = 0x80000000;
        if ((uVar8 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(unaff_r5 + 0x20));
        }
      }
      piVar4 = *(int **)(param_1 + 0x338);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aacae8(*(undefined4 *)(param_1 + 0x338));
        }
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x3bb) == '\x03') {
      if (*(char *)(param_1 + 0x39b) == '\x03') {
        if (*(char *)(param_1 + 0x374) == '\x03') {
          puVar7 = *(undefined4 **)(param_1 + 0x36c);
          unaff_r6 = *(undefined4 **)(param_1 + 0x368);
          pcVar5 = (code *)*puVar7;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(unaff_r6);
          }
          if (puVar7[1] != 0) {
LAB_00de4690:
            thunk_FUN_016d3fb4(unaff_r6);
          }
        }
        else if (*(char *)(param_1 + 0x374) == '\0') {
          if (*(int *)(param_1 + 0x33c) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x338));
          }
          if (*(int *)(param_1 + 0x344) != 0) {
            unaff_r6 = *(undefined4 **)(param_1 + 0x340);
            goto LAB_00de4690;
          }
        }
        *(undefined2 *)(param_1 + 0x398) = 0;
        *(undefined1 *)(param_1 + 0x39a) = 0;
      }
      else if (*(char *)(param_1 + 0x39b) == '\0') {
        iVar2 = *(int *)(param_1 + 0x394);
        piVar4 = (int *)(iVar2 + 0x44);
        do {
          iVar6 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar6 + -1;
        if (iVar6 == 1) {
          FUN_00e46e30(iVar2 + 8);
        }
        piVar4 = *(int **)(param_1 + 0x394);
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar4;
          bVar9 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar9);
        *piVar4 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aab134(*(undefined4 *)(param_1 + 0x394));
        }
        if (*(int *)(param_1 + 900) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x380));
        }
        if (*(int *)(param_1 + 0x38c) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x388));
        }
      }
      *(undefined2 *)(param_1 + 0x3b8) = 0;
      *(undefined1 *)(param_1 + 0x3ba) = 0;
    }
    else if (*(char *)(param_1 + 0x3bb) == '\0') {
      iVar2 = *(int *)(param_1 + 0x3b4);
      piVar4 = (int *)(iVar2 + 0x44);
      do {
        iVar6 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        FUN_00e46e30(iVar2 + 8);
      }
      piVar4 = *(int **)(param_1 + 0x3b4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aab134(*(undefined4 *)(param_1 + 0x3b4));
      }
      if (*(int *)(param_1 + 0x3a4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3a0));
      }
      if (*(int *)(param_1 + 0x3ac) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3a8));
      }
    }
    *(undefined2 *)(param_1 + 0x333) = 0;
  }
  bVar9 = *(char *)(param_1 + 0x32d) != '\0';
  if (bVar9) {
    unaff_r5 = *(int *)(param_1 + 0x338);
  }
  if (bVar9 && unaff_r5 != 0) {
    puVar3 = (uint *)(unaff_r5 + 0x18);
    do {
      unaff_r6 = (undefined4 *)*puVar3;
      bVar9 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar9);
    *puVar3 = (uint)unaff_r6 | 4;
    DataMemoryBarrier(0xb);
    if (((uint)unaff_r6 & 10) == 8) {
      (**(code **)(*(int *)(unaff_r5 + 8) + 8))(*(undefined4 *)(unaff_r5 + 0xc));
    }
    if (((uint)unaff_r6 & 2) != 0) {
      uVar8 = *(uint *)(unaff_r5 + 0x1c);
      *(undefined4 *)(unaff_r5 + 0x1c) = 0x80000000;
      if ((uVar8 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(unaff_r5 + 0x20));
      }
    }
    piVar4 = *(int **)(param_1 + 0x338);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aacae8(*(undefined4 *)(param_1 + 0x338));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x335) = 0;
  *(undefined1 *)(param_1 + 0x32d) = 0;
  cVar1 = *(char *)(param_1 + 0x32e);
joined_r0x00de46f0:
  if (cVar1 != '\0') {
LAB_00de46f4:
    unaff_r6 = (undefined4 *)(param_1 + 0x328);
    FUN_01663cc4(*unaff_r6);
    piVar4 = (int *)*unaff_r6;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(unaff_r6);
    }
  }
LAB_00de4730:
  *(undefined1 *)(param_1 + 0x32e) = 0;
  bVar9 = *(char *)(param_1 + 0x32f) != '\0';
  if (bVar9) {
    unaff_r6 = *(undefined4 **)(param_1 + 0x338);
  }
  if (bVar9 && unaff_r6 != (undefined4 *)0x0) {
    puVar3 = unaff_r6 + 6;
    do {
      uVar8 = *puVar3;
      bVar9 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar9);
    *puVar3 = uVar8 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar8 & 10) == 8) {
      (**(code **)(unaff_r6[2] + 8))(unaff_r6[3]);
    }
    if ((uVar8 & 2) != 0) {
      *(undefined1 *)(unaff_r6 + 7) = 2;
    }
    piVar4 = *(int **)(param_1 + 0x338);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar9 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar9);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f3128(*(undefined4 *)(param_1 + 0x338));
      }
    }
  }
  *(undefined1 *)(param_1 + 0x32f) = 0;
  if (*(char *)(param_1 + 0x330) != '\0') {
    iVar2 = *(int *)(param_1 + 0x324);
    piVar4 = (int *)(iVar2 + 0x44);
    do {
      iVar6 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_00e46e30(iVar2 + 8);
    }
    piVar4 = *(int **)(param_1 + 0x324);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aab134(*(undefined4 *)(param_1 + 0x324));
    }
  }
  *(undefined1 *)(param_1 + 0x330) = 0;
  if (*(char *)(param_1 + 0x331) != '\0') {
    if (*(int *)(param_1 + 0xd4) == -0x80000000 || *(int *)(param_1 + 0xd4) == 0) {
      iVar2 = *(int *)(param_1 + 200);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd8));
      iVar2 = *(int *)(param_1 + 200);
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcc));
    }
  }
  *(undefined1 *)(param_1 + 0x331) = 0;
  if (*(char *)(param_1 + 0x332) != '\0') {
    FUN_005c8810(param_1 + 0x208);
  }
  *(undefined1 *)(param_1 + 0x332) = 0;
  FUN_005c3004(param_1 + 0x70);
  return;
}

