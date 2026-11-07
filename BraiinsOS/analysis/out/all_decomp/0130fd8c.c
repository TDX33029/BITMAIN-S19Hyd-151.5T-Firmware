// FUN_0130fd8c @ 0130fd8c size=484 calls_out=5 calls_in=9
// strings: 

void FUN_0130fd8c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(uint *)(param_1 + 8);
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
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar4 < uVar1) {
LAB_0130ff54:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,uVar4,&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar5 = uVar1 * 0x44;
    do {
      uVar1 = FUN_0130ff78(iVar6);
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
      iVar6 = iVar6 + 0x44;
      iVar5 = iVar5 + -0x44;
      iVar8 = iVar8 + uVar1 + iVar2 + 1;
    } while (iVar5 != 0);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x20);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar4 = *(uint *)(iVar5 + 8);
    uVar1 = *(uint *)(iVar5 + 0xc);
    if (uVar4 < uVar1) goto LAB_0130ff54;
    iVar6 = 0;
    if (*(char *)(iVar5 + 0x18) != '\x02') {
      iVar6 = 3;
    }
    if (uVar1 != 0) {
      iVar7 = *(int *)(iVar5 + 4);
      iVar2 = uVar1 * 0x78;
      do {
        uVar1 = FUN_012fa894(iVar7);
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
        iVar7 = iVar7 + 0x78;
        iVar2 = iVar2 + -0x78;
        iVar6 = iVar6 + uVar1 + iVar3 + 2;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_01337c54(*(undefined4 *)(iVar5 + 0x10));
    uVar1 = iVar2 + iVar6;
    iVar6 = 1;
    *(uint *)(iVar5 + 0x14) = uVar1;
    if (0x7f < uVar1) {
      iVar6 = 2;
      if (0x3fff < uVar1) {
        iVar6 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar6 = 5, uVar1 < 0x10000000)) {
        iVar6 = 4;
      }
    }
    iVar8 = iVar8 + uVar1 + iVar6 + 1;
  }
  iVar5 = FUN_01337c54(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x2c) = iVar5 + iVar8;
  return;
}

