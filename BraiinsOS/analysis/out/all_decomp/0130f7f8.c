// FUN_0130f7f8 @ 0130f7f8 size=1420 calls_out=9 calls_in=8
// strings: 

void FUN_0130f7f8(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar3 = *(uint *)(param_1 + 8);
    iVar9 = 1;
    if (0x7f < uVar3) {
      iVar9 = 2;
      if (0x3fff < uVar3) {
        iVar9 = 3;
      }
      if ((0x1fffff < uVar3) && (iVar9 = 5, uVar3 < 0x10000000)) {
        iVar9 = 4;
      }
    }
    iVar9 = uVar3 + iVar9 + 1;
    if (*(char *)(param_1 + 0x1c) == '\x01') goto LAB_0130f868;
LAB_0130f81c:
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (uVar6 < uVar3) goto LAB_0130fd68;
  }
  else {
    if (*(char *)(param_1 + 0x1c) != '\x01') goto LAB_0130f81c;
LAB_0130f868:
    uVar3 = *(uint *)(param_1 + 0x18);
    iVar1 = 1;
    if (0x7f < uVar3) {
      iVar1 = 2;
      if (0x3fff < uVar3) {
        iVar1 = 3;
      }
      if ((0x1fffff < uVar3) && (iVar1 = 5, uVar3 < 0x10000000)) {
        iVar1 = 4;
      }
    }
    iVar9 = uVar3 + iVar1 + iVar9 + 1;
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (uVar6 < uVar3) goto LAB_0130fd68;
  }
  if (uVar3 != 0) {
    iVar1 = uVar3 * 0xc;
    puVar2 = (uint *)(*(int *)(param_1 + 0x24) + 8);
    do {
      uVar3 = *puVar2;
      iVar7 = 1;
      if (0x7f < uVar3) {
        iVar7 = 2;
        if (0x3fff < uVar3) {
          iVar7 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar7 = 5, uVar3 < 0x10000000)) {
          iVar7 = 4;
        }
      }
      iVar1 = iVar1 + -0xc;
      iVar9 = uVar3 + iVar7 + iVar9 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(param_1 + 0x38) << 2;
    puVar2 = *(uint **)(param_1 + 0x34);
    do {
      uVar3 = *puVar2;
      iVar7 = 2;
      if (0x7f < uVar3) {
        iVar7 = 3;
      }
      if (0x3fff < uVar3) {
        iVar7 = 4;
        if (0x1fffff < uVar3) {
          iVar7 = 5;
        }
        if ((0xfffffff < uVar3) && (iVar7 = 0xb, uVar3 < 0x80000000)) {
          iVar7 = 6;
        }
      }
      iVar9 = iVar7 + iVar9;
      iVar1 = iVar1 + -4;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44) << 2;
    puVar2 = *(uint **)(param_1 + 0x40);
    do {
      uVar3 = *puVar2;
      iVar7 = 2;
      if (0x7f < uVar3) {
        iVar7 = 3;
      }
      if (0x3fff < uVar3) {
        iVar7 = 4;
        if (0x1fffff < uVar3) {
          iVar7 = 5;
        }
        if ((0xfffffff < uVar3) && (iVar7 = 0xb, uVar3 < 0x80000000)) {
          iVar7 = 6;
        }
      }
      iVar9 = iVar7 + iVar9;
      iVar1 = iVar1 + -4;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x54);
  if (uVar6 < uVar3) {
LAB_0130fd68:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,uVar6,&DAT_01890988);
  }
  if (uVar3 != 0) {
    iVar7 = *(int *)(param_1 + 0x4c);
    iVar1 = uVar3 * 0xa0;
    do {
      uVar3 = FUN_0130a360(iVar7);
      iVar4 = 1;
      if (0x7f < uVar3) {
        iVar4 = 2;
        if (0x3fff < uVar3) {
          iVar4 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar4 = 5, uVar3 < 0x10000000)) {
          iVar4 = 4;
        }
      }
      iVar7 = iVar7 + 0xa0;
      iVar1 = iVar1 + -0xa0;
      iVar9 = iVar9 + uVar3 + iVar4 + 1;
    } while (iVar1 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x60);
  uVar3 = *(uint *)(param_1 + 100);
  if (uVar6 < uVar3) goto LAB_0130fd68;
  if (uVar3 != 0) {
    iVar7 = *(int *)(param_1 + 0x5c);
    iVar1 = uVar3 * 0x50;
    do {
      uVar3 = FUN_0130c364(iVar7);
      iVar4 = 1;
      if (0x7f < uVar3) {
        iVar4 = 2;
        if (0x3fff < uVar3) {
          iVar4 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar4 = 5, uVar3 < 0x10000000)) {
          iVar4 = 4;
        }
      }
      iVar7 = iVar7 + 0x50;
      iVar1 = iVar1 + -0x50;
      iVar9 = iVar9 + uVar3 + iVar4 + 1;
    } while (iVar1 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x74);
  if (uVar6 < uVar3) goto LAB_0130fd68;
  if (uVar3 != 0) {
    iVar7 = *(int *)(param_1 + 0x6c);
    iVar1 = uVar3 * 0x30;
    do {
      uVar3 = FUN_0130fd8c(iVar7);
      iVar4 = 1;
      if (0x7f < uVar3) {
        iVar4 = 2;
        if (0x3fff < uVar3) {
          iVar4 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar4 = 5, uVar3 < 0x10000000)) {
          iVar4 = 4;
        }
      }
      iVar7 = iVar7 + 0x30;
      iVar1 = iVar1 + -0x30;
      iVar9 = iVar9 + uVar3 + iVar4 + 1;
    } while (iVar1 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x80);
  uVar3 = *(uint *)(param_1 + 0x84);
  if (uVar6 < uVar3) goto LAB_0130fd68;
  if (uVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar7 = uVar3 * 0x74;
    do {
      uVar3 = FUN_0130c068(iVar1);
      iVar4 = 1;
      if (0x7f < uVar3) {
        iVar4 = 2;
        if (0x3fff < uVar3) {
          iVar4 = 3;
        }
        if ((0x1fffff < uVar3) && (iVar4 = 5, uVar3 < 0x10000000)) {
          iVar4 = 4;
        }
      }
      iVar1 = iVar1 + 0x74;
      iVar7 = iVar7 + -0x74;
      iVar9 = iVar9 + uVar3 + iVar4 + 1;
    } while (iVar7 != 0);
  }
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    if (*(int *)(param_1 + 0x98) == 0) goto LAB_0130fd78;
    uVar3 = FUN_012fc5f0();
    iVar1 = 1;
    if (0x7f < uVar3) {
      iVar1 = 2;
      if (0x3fff < uVar3) {
        iVar1 = 3;
      }
      if ((0x1fffff < uVar3) && (iVar1 = 5, uVar3 < 0x10000000)) {
        iVar1 = 4;
      }
    }
    iVar9 = iVar9 + uVar3 + iVar1 + 1;
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    iVar1 = *(int *)(param_1 + 0xa0);
    if (iVar1 == 0) {
LAB_0130fd78:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar6 = *(uint *)(iVar1 + 8);
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (uVar6 < uVar3) goto LAB_0130fd68;
    if (uVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar8 = *(int *)(iVar1 + 4);
      iVar7 = 0;
      iVar4 = uVar3 * 0x50;
      do {
        uVar3 = FUN_013077dc(iVar8);
        iVar5 = 1;
        if (0x7f < uVar3) {
          iVar5 = 2;
          if (0x3fff < uVar3) {
            iVar5 = 3;
          }
          if ((0x1fffff < uVar3) && (iVar5 = 5, uVar3 < 0x10000000)) {
            iVar5 = 4;
          }
        }
        iVar8 = iVar8 + 0x50;
        iVar4 = iVar4 + -0x50;
        iVar7 = iVar7 + uVar3 + iVar5 + 1;
      } while (iVar4 != 0);
    }
    iVar4 = FUN_01337c54(*(undefined4 *)(iVar1 + 0x10));
    uVar3 = iVar4 + iVar7;
    iVar7 = 1;
    *(uint *)(iVar1 + 0x14) = uVar3;
    if (0x7f < uVar3) {
      iVar7 = 2;
      if (0x3fff < uVar3) {
        iVar7 = 3;
      }
      if ((0x1fffff < uVar3) && (iVar7 = 5, uVar3 < 0x10000000)) {
        iVar7 = 4;
      }
    }
    iVar9 = iVar9 + uVar3 + iVar7 + 1;
  }
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x90);
    iVar1 = 1;
    if (0x7f < uVar3) {
      iVar1 = 2;
      if (0x3fff < uVar3) {
        iVar1 = 3;
      }
      if ((0x1fffff < uVar3) && (iVar1 = 5, uVar3 < 0x10000000)) {
        iVar1 = 4;
      }
    }
    iVar9 = uVar3 + iVar1 + iVar9 + 1;
  }
  iVar1 = FUN_01337c54(*(undefined4 *)(param_1 + 0xa8));
  *(int *)(param_1 + 0xac) = iVar1 + iVar9;
  return;
}

