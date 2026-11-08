// FUN_013077dc @ 013077dc size=676 calls_out=2 calls_in=13
// strings: 

void FUN_013077dc(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    iVar3 = 0;
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar7 == 0) goto LAB_01307878;
LAB_01307928:
    uVar2 = 0;
    puVar4 = *(uint **)(param_1 + 0x10);
    do {
      uVar5 = *puVar4;
      iVar6 = 1;
      if (0x7f < uVar5) {
        iVar6 = 2;
      }
      if (0x3fff < uVar5) {
        iVar6 = 3;
        if (0x1fffff < uVar5) {
          iVar6 = 4;
        }
        if ((0xfffffff < uVar5) && (iVar6 = 10, uVar5 < 0x80000000)) {
          iVar6 = 5;
        }
      }
      uVar2 = iVar6 + uVar2;
      iVar7 = iVar7 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar7 != 0);
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
    iVar3 = uVar2 + iVar7 + iVar3 + 1;
    if (*(char *)(param_1 + 0x24) != '\x01') goto LAB_01307884;
LAB_013079b4:
    uVar2 = *(uint *)(param_1 + 0x20);
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
    iVar3 = uVar2 + iVar7 + iVar3 + 1;
    cVar1 = *(char *)(param_1 + 0x34);
  }
  else {
    uVar2 = 0;
    puVar4 = *(uint **)(param_1 + 4);
    do {
      uVar5 = *puVar4;
      iVar7 = 1;
      if (0x7f < uVar5) {
        iVar7 = 2;
      }
      if (0x3fff < uVar5) {
        iVar7 = 3;
        if (0x1fffff < uVar5) {
          iVar7 = 4;
        }
        if ((0xfffffff < uVar5) && (iVar7 = 10, uVar5 < 0x80000000)) {
          iVar7 = 5;
        }
      }
      uVar2 = iVar7 + uVar2;
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0);
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
    iVar3 = uVar2 + iVar3 + 1;
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar7 != 0) goto LAB_01307928;
LAB_01307878:
    if (*(char *)(param_1 + 0x24) == '\x01') goto LAB_013079b4;
LAB_01307884:
    cVar1 = *(char *)(param_1 + 0x34);
  }
  if (cVar1 == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x30);
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
    iVar3 = uVar2 + iVar7 + iVar3 + 1;
    uVar5 = *(uint *)(param_1 + 0x40);
    uVar2 = *(uint *)(param_1 + 0x44);
    if (uVar5 < uVar2) goto LAB_01307a30;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x40);
    uVar2 = *(uint *)(param_1 + 0x44);
    if (uVar5 < uVar2) {
LAB_01307a30:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar2,uVar5,&DAT_01890988);
    }
  }
  if (uVar2 != 0) {
    iVar7 = uVar2 * 0xc;
    puVar4 = (uint *)(*(int *)(param_1 + 0x3c) + 8);
    do {
      uVar2 = *puVar4;
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
      iVar7 = iVar7 + -0xc;
      iVar3 = uVar2 + iVar6 + iVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar7 != 0);
  }
  iVar7 = FUN_01337c54(*(undefined4 *)(param_1 + 0x48));
  *(int *)(param_1 + 0x4c) = iVar7 + iVar3;
  return;
}

