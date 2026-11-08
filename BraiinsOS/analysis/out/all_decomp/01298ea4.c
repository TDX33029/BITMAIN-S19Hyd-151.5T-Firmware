// FUN_01298ea4 @ 01298ea4 size=996 calls_out=5 calls_in=8
// strings: 

void FUN_01298ea4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = param_1[7];
  if (param_1[6] < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,param_1[6],&DAT_01890988);
  }
  if (uVar2 == 0) {
    iVar6 = 0;
  }
  else {
    uVar9 = param_1[5];
    iVar4 = 0;
    iVar6 = 0;
    do {
      iVar7 = uVar9 + iVar4;
      iVar8 = 0;
      if (*(char *)(iVar7 + 0xc) == '\x01') {
        uVar1 = *(uint *)(iVar7 + 8);
        iVar8 = 1;
        if (0x7f < uVar1) {
          iVar8 = 2;
          if (0x3fff < uVar1) {
            iVar8 = 3;
          }
          if ((0x1fffff < uVar1) && (iVar8 = 5, uVar1 < 0x10000000)) {
            iVar8 = 4;
          }
        }
        iVar8 = uVar1 + iVar8 + 1;
      }
      if (*(char *)(iVar7 + 0x1c) == '\x01') {
        uVar1 = *(uint *)(iVar7 + 0x18);
        iVar3 = 1;
        if (0x7f < uVar1) {
          iVar3 = 2;
          if (0x3fff < uVar1) {
            iVar3 = 3;
          }
          if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
            iVar3 = 4;
          }
        }
        iVar8 = uVar1 + iVar3 + iVar8 + 1;
      }
      iVar3 = FUN_01337c54(*(undefined4 *)(iVar7 + 0x20));
      uVar1 = iVar3 + iVar8;
      iVar8 = 1;
      *(uint *)(iVar7 + 0x24) = uVar1;
      if (0x7f < uVar1) {
        iVar8 = 2;
        if (0x3fff < uVar1) {
          iVar8 = 3;
        }
        if ((0x1fffff < uVar1) && (iVar8 = 5, uVar1 < 0x10000000)) {
          iVar8 = 4;
        }
      }
      iVar4 = iVar4 + 0x28;
      iVar6 = iVar6 + uVar1 + iVar8 + 1;
    } while (uVar2 * 0x28 != iVar4);
  }
  if ((char)param_1[9] == '\x01') {
    puVar5 = (uint *)param_1[8];
    if (puVar5 == (uint *)0x0) goto LAB_0129926c;
    uVar9 = *puVar5;
    uVar2 = FUN_01337c54(puVar5[4]);
    iVar4 = 1;
    if ((uVar9 & 1) != 0) {
      uVar2 = uVar2 + 9;
    }
    puVar5[5] = uVar2;
    if (0x7f < uVar2) {
      iVar4 = 2;
      if (0x3fff < uVar2) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar4 = 5, uVar2 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar6 = iVar6 + iVar4 + uVar2 + 1;
  }
  if ((char)param_1[0xb] != '\0') {
    puVar5 = (uint *)param_1[10];
    if (puVar5 == (uint *)0x0) goto LAB_0129926c;
    uVar9 = *puVar5;
    uVar2 = FUN_01337c54(puVar5[4]);
    iVar4 = 1;
    if ((uVar9 & 1) != 0) {
      uVar2 = uVar2 + 9;
    }
    puVar5[5] = uVar2;
    if (0x7f < uVar2) {
      iVar4 = 2;
      if (0x3fff < uVar2) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar4 = 5, uVar2 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar6 = iVar6 + iVar4 + uVar2 + 1;
  }
  if ((char)param_1[0xd] != '\0') {
    if (param_1[0xc] == 0) goto LAB_0129926c;
    uVar2 = FUN_01299290();
    iVar4 = 1;
    if (0x7f < uVar2) {
      iVar4 = 2;
      if (0x3fff < uVar2) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar4 = 5, uVar2 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar6 = iVar6 + uVar2 + iVar4 + 1;
  }
  if ((char)param_1[0xf] != '\0') {
    puVar5 = (uint *)param_1[0xe];
    if (puVar5 == (uint *)0x0) goto LAB_0129926c;
    uVar9 = *puVar5;
    uVar2 = FUN_01337c54(puVar5[4]);
    iVar4 = 1;
    if ((uVar9 & 1) != 0) {
      uVar2 = uVar2 + 9;
    }
    puVar5[5] = uVar2;
    if (0x7f < uVar2) {
      iVar4 = 2;
      if (0x3fff < uVar2) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar4 = 5, uVar2 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar6 = iVar6 + iVar4 + uVar2 + 1;
  }
  if ((char)param_1[0x11] != '\0') {
    if (param_1[0x10] == 0) {
LAB_0129926c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar2 = FUN_012993f8();
    iVar4 = 1;
    if (0x7f < uVar2) {
      iVar4 = 2;
      if (0x3fff < uVar2) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar4 = 5, uVar2 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar6 = iVar6 + uVar2 + iVar4 + 1;
  }
  if ((*param_1 & 1) != 0) {
    uVar9 = param_1[2];
    iVar4 = 2;
    uVar2 = param_1[3];
    if ((((uVar2 != 0 || uVar2 < (0x7f < uVar9)) &&
         (iVar4 = 3, uVar2 != 0 || uVar2 < (0x3fff < uVar9))) &&
        (iVar4 = 4, uVar2 != 0 || uVar2 < (0x1fffff < uVar9))) &&
       (iVar4 = 5, uVar2 != 0 || uVar2 < (0xfffffff < uVar9))) {
      iVar4 = 6;
      if (7 < uVar2) {
        iVar4 = 7;
      }
      if (0x3ff < uVar2) {
        iVar4 = 8;
        if (0x1ffff < uVar2) {
          iVar4 = 9;
        }
        if ((0xffffff < uVar2) && (iVar4 = 0xb, uVar2 < 0x80000000)) {
          iVar4 = 10;
        }
      }
    }
    iVar6 = iVar4 + iVar6;
  }
  iVar4 = FUN_01337c54(param_1[0x12]);
  param_1[0x13] = iVar4 + iVar6;
  return;
}

