// FUN_0130c6f4 @ 0130c6f4 size=436 calls_out=4 calls_in=9
// strings: 

void FUN_0130c6f4(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*param_1 == 1) {
    uVar1 = param_1[1];
    iVar7 = 2;
    if (0x7f < uVar1) {
      iVar7 = 3;
    }
    if (0x3fff < uVar1) {
      iVar7 = 4;
      if (0x1fffff < uVar1) {
        iVar7 = 5;
      }
      if ((0xfffffff < uVar1) && (iVar7 = 0xb, uVar1 < 0x80000000)) {
        iVar7 = 6;
      }
    }
  }
  if (param_1[2] == 1) {
    uVar1 = param_1[3];
    iVar2 = 2;
    if (0x7f < uVar1) {
      iVar2 = 3;
    }
    if (0x3fff < uVar1) {
      iVar2 = 4;
      if (0x1fffff < uVar1) {
        iVar2 = 5;
      }
      if ((0xfffffff < uVar1) && (iVar2 = 0xb, uVar1 < 0x80000000)) {
        iVar2 = 6;
      }
    }
    iVar7 = iVar2 + iVar7;
  }
  if ((char)param_1[5] == '\x01') {
    iVar2 = param_1[4];
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar1 = *(uint *)(iVar2 + 0xc);
    if (*(uint *)(iVar2 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar1,*(uint *)(iVar2 + 8),&DAT_01890988);
    }
    if (uVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 4);
      iVar5 = 0;
      iVar6 = uVar1 * 0x78;
      do {
        uVar1 = FUN_012fa894(iVar4);
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
        iVar4 = iVar4 + 0x78;
        iVar6 = iVar6 + -0x78;
        iVar5 = iVar5 + uVar1 + iVar3 + 2;
      } while (iVar6 != 0);
    }
    iVar6 = FUN_01337c54(*(undefined4 *)(iVar2 + 0x10));
    uVar1 = iVar6 + iVar5;
    iVar5 = 1;
    *(uint *)(iVar2 + 0x14) = uVar1;
    if (0x7f < uVar1) {
      iVar5 = 2;
      if (0x3fff < uVar1) {
        iVar5 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar5 = 5, uVar1 < 0x10000000)) {
        iVar5 = 4;
      }
    }
    iVar7 = iVar7 + uVar1 + iVar5 + 1;
  }
  iVar2 = FUN_01337c54(param_1[6]);
  param_1[7] = iVar2 + iVar7;
  return;
}

