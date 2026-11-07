// FUN_0130ca20 @ 0130ca20 size=468 calls_out=4 calls_in=9
// strings: 

void FUN_0130ca20(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if ((char)param_1[5] == '\x01') {
    uVar3 = param_1[4];
    iVar8 = 1;
    if (0x7f < uVar3) {
      iVar8 = 2;
      if (0x3fff < uVar3) {
        iVar8 = 3;
      }
      if ((0x1fffff < uVar3) && (iVar8 = 5, uVar3 < 0x10000000)) {
        iVar8 = 4;
      }
    }
    iVar8 = uVar3 + iVar8 + 1;
    iVar2 = *param_1;
  }
  else {
    iVar2 = *param_1;
  }
  if (iVar2 == 1) {
    uVar3 = param_1[1];
    iVar2 = 2;
    if (0x7f < uVar3) {
      iVar2 = 3;
    }
    if (0x3fff < uVar3) {
      iVar2 = 4;
      if (0x1fffff < uVar3) {
        iVar2 = 5;
      }
      if ((0xfffffff < uVar3) && (iVar2 = 0xb, uVar3 < 0x80000000)) {
        iVar2 = 6;
      }
    }
    iVar8 = iVar2 + iVar8;
    cVar1 = (char)param_1[7];
  }
  else {
    cVar1 = (char)param_1[7];
  }
  if (cVar1 == '\x01') {
    iVar2 = param_1[6];
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar3 = *(uint *)(iVar2 + 0xc);
    if (*(uint *)(iVar2 + 8) < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,*(uint *)(iVar2 + 8),&DAT_01890988);
    }
    iVar6 = 0;
    if (*(char *)(iVar2 + 0x18) != '\x02') {
      iVar6 = 2;
    }
    if (uVar3 != 0) {
      iVar5 = *(int *)(iVar2 + 4);
      iVar7 = uVar3 * 0x78;
      do {
        uVar3 = FUN_012fa894(iVar5);
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
        iVar5 = iVar5 + 0x78;
        iVar7 = iVar7 + -0x78;
        iVar6 = iVar6 + uVar3 + iVar4 + 2;
      } while (iVar7 != 0);
    }
    iVar7 = FUN_01337c54(*(undefined4 *)(iVar2 + 0x10));
    uVar3 = iVar7 + iVar6;
    iVar6 = 1;
    *(uint *)(iVar2 + 0x14) = uVar3;
    if (0x7f < uVar3) {
      iVar6 = 2;
      if (0x3fff < uVar3) {
        iVar6 = 3;
      }
      if ((0x1fffff < uVar3) && (iVar6 = 5, uVar3 < 0x10000000)) {
        iVar6 = 4;
      }
    }
    iVar8 = iVar8 + uVar3 + iVar6 + 1;
  }
  iVar2 = FUN_01337c54(param_1[8]);
  param_1[9] = iVar2 + iVar8;
  return;
}

