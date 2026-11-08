// FUN_012fa894 @ 012fa894 size=840 calls_out=2 calls_in=33
// strings: 

void FUN_012fa894(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = param_1[0xf];
  if (param_1[0xe] < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,param_1[0xe],&DAT_01890988);
  }
  if (uVar3 == 0) {
    iVar5 = 0;
  }
  else {
    uVar8 = param_1[0xd];
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar6 = uVar8 + iVar4;
      iVar7 = 0;
      if (*(char *)(iVar6 + 0xc) == '\x01') {
        uVar1 = *(uint *)(iVar6 + 8);
        iVar7 = 1;
        if (0x7f < uVar1) {
          iVar7 = 2;
          if (0x3fff < uVar1) {
            iVar7 = 3;
          }
          if ((0x1fffff < uVar1) && (iVar7 = 5, uVar1 < 0x10000000)) {
            iVar7 = 4;
          }
        }
        iVar7 = uVar1 + iVar7 + 1;
      }
      if (*(char *)(iVar6 + 0x18) != '\x02') {
        iVar7 = iVar7 + 2;
      }
      iVar2 = FUN_01337c54(*(undefined4 *)(iVar6 + 0x10));
      uVar1 = iVar7 + iVar2;
      iVar7 = 1;
      *(uint *)(iVar6 + 0x14) = uVar1;
      if (0x7f < uVar1) {
        iVar7 = 2;
        if (0x3fff < uVar1) {
          iVar7 = 3;
        }
        if ((0x1fffff < uVar1) && (iVar7 = 5, uVar1 < 0x10000000)) {
          iVar7 = 4;
        }
      }
      iVar4 = iVar4 + 0x1c;
      iVar5 = iVar5 + iVar7 + uVar1 + 1;
    } while (uVar3 * 0x1c != iVar4);
  }
  if ((char)param_1[0x13] == '\x01') {
    uVar3 = param_1[0x12];
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
    iVar5 = uVar3 + iVar4 + iVar5 + 1;
    uVar3 = *param_1;
  }
  else {
    uVar3 = *param_1;
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1[4];
  }
  else {
    uVar8 = param_1[2];
    iVar4 = 2;
    uVar3 = param_1[3];
    if ((((uVar3 != 0 || uVar3 < (0x7f < uVar8)) &&
         (iVar4 = 3, uVar3 != 0 || uVar3 < (0x3fff < uVar8))) &&
        (iVar4 = 4, uVar3 != 0 || uVar3 < (0x1fffff < uVar8))) &&
       (iVar4 = 5, uVar3 != 0 || uVar3 < (0xfffffff < uVar8))) {
      iVar4 = 6;
      if (7 < uVar3) {
        iVar4 = 7;
      }
      if (0x3ff < uVar3) {
        iVar4 = 8;
        if (0x1ffff < uVar3) {
          iVar4 = 9;
        }
        if ((0xffffff < uVar3) && (iVar4 = 0xb, uVar3 < 0x80000000)) {
          iVar4 = 10;
        }
      }
    }
    iVar5 = iVar4 + iVar5;
    uVar3 = param_1[4];
  }
  if ((uVar3 & 1) != 0) {
    uVar8 = param_1[6];
    iVar4 = 2;
    uVar3 = param_1[7];
    if (((uVar3 != 0 || uVar3 < (0x7f < uVar8)) &&
        (iVar4 = 3, uVar3 != 0 || uVar3 < (0x3fff < uVar8))) &&
       ((iVar4 = 4, uVar3 != 0 || uVar3 < (0x1fffff < uVar8) &&
        (iVar4 = 5, uVar3 != 0 || uVar3 < (0xfffffff < uVar8))))) {
      iVar4 = 6;
      if (7 < uVar3) {
        iVar4 = 7;
      }
      if (0x3ff < uVar3) {
        iVar4 = 8;
        if (0x1ffff < uVar3) {
          iVar4 = 9;
        }
        if ((0xffffff < uVar3) && (iVar4 = 0xb, uVar3 < 0x80000000)) {
          iVar4 = 10;
        }
      }
    }
    iVar5 = iVar4 + iVar5;
  }
  if ((param_1[8] & 1) != 0) {
    iVar5 = iVar5 + 9;
  }
  if ((char)param_1[0x17] == '\x01') {
    uVar3 = param_1[0x16];
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
    iVar5 = uVar3 + iVar4 + iVar5 + 1;
  }
  if ((char)param_1[0x1b] == '\x01') {
    uVar3 = param_1[0x1a];
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
    iVar5 = uVar3 + iVar4 + iVar5 + 1;
  }
  iVar4 = FUN_01337c54(param_1[0x1c]);
  param_1[0x1d] = iVar4 + iVar5;
  return;
}

