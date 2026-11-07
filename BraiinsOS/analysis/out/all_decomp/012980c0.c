// FUN_012980c0 @ 012980c0 size=356 calls_out=3 calls_in=9
// strings: 

void FUN_012980c0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar2 = *(uint *)(param_1 + 8);
    iVar6 = 1;
    if (0x7f < uVar2) {
      iVar6 = 2;
      if (0x3fff < uVar2) {
        iVar6 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar6 = 5, uVar2 < 0x10000000)) {
        iVar6 = 4;
      }
    }
    iVar6 = uVar2 + iVar6 + 1;
    cVar1 = *(char *)(param_1 + 0x1c);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1c);
  }
  if (cVar1 == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar7 = 1;
    if (0x7f < uVar2) {
      iVar7 = 2;
      if (0x3fff < uVar2) {
        iVar7 = 3;
      }
      if ((0x1fffff < uVar2) && (iVar7 = 5, uVar2 < 0x10000000)) {
        iVar7 = 4;
      }
    }
    iVar6 = uVar2 + iVar7 + iVar6 + 1;
    uVar4 = *(uint *)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x2c);
    if (uVar4 < uVar2) goto LAB_012981f4;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x2c);
    if (uVar4 < uVar2) {
LAB_012981f4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar2,uVar4,&DAT_01890988);
    }
  }
  if (*(char *)(param_1 + 0x38) != '\x05') {
    iVar6 = iVar6 + 2;
  }
  if (uVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x24);
    iVar7 = uVar2 * 0x50;
    do {
      uVar2 = FUN_01298ea4(iVar5);
      iVar3 = 1;
      if (0x7f < uVar2) {
        iVar3 = 2;
        if (0x3fff < uVar2) {
          iVar3 = 3;
        }
        if ((0x1fffff < uVar2) && (iVar3 = 5, uVar2 < 0x10000000)) {
          iVar3 = 4;
        }
      }
      iVar5 = iVar5 + 0x50;
      iVar7 = iVar7 + -0x50;
      iVar6 = iVar6 + uVar2 + iVar3 + 1;
    } while (iVar7 != 0);
  }
  iVar7 = FUN_01337c54(*(undefined4 *)(param_1 + 0x30));
  *(int *)(param_1 + 0x34) = iVar7 + iVar6;
  return;
}

