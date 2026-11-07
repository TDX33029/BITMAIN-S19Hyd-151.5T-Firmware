// FUN_0130c8b0 @ 0130c8b0 size=360 calls_out=4 calls_in=9
// strings: 

void FUN_0130c8b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(uint *)(param_1 + 8);
    iVar6 = 1;
    if (0x7f < uVar1) {
      iVar6 = 2;
      if (0x3fff < uVar1) {
        iVar6 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar6 = 5, uVar1 < 0x10000000)) {
        iVar6 = 4;
      }
    }
    iVar6 = uVar1 + iVar6 + 1;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar1 = *(uint *)(iVar7 + 0xc);
    if (*(uint *)(iVar7 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar1,*(uint *)(iVar7 + 8),&DAT_01890988);
    }
    if (uVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar3 = *(int *)(iVar7 + 4);
      iVar4 = 0;
      iVar5 = uVar1 * 0x78;
      do {
        uVar1 = FUN_012fa894(iVar3);
        iVar2 = 1;
        if (0x7f < uVar1) {
          iVar2 = 2;
          if (0x3fff < uVar1) {
            iVar2 = 3;
          }
          if ((0x1fffff < uVar1) && (iVar2 = 5, uVar1 < 0x10000000)) {
            iVar2 = 4;
          }
        }
        iVar3 = iVar3 + 0x78;
        iVar5 = iVar5 + -0x78;
        iVar4 = iVar4 + uVar1 + iVar2 + 2;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_01337c54(*(undefined4 *)(iVar7 + 0x10));
    uVar1 = iVar5 + iVar4;
    iVar4 = 1;
    *(uint *)(iVar7 + 0x14) = uVar1;
    if (0x7f < uVar1) {
      iVar4 = 2;
      if (0x3fff < uVar1) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar4 = 5, uVar1 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar6 = iVar6 + uVar1 + iVar4 + 1;
  }
  iVar7 = FUN_01337c54(*(undefined4 *)(param_1 + 0x18));
  *(int *)(param_1 + 0x1c) = iVar7 + iVar6;
  return;
}

