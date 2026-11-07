// FUN_012fc5f0 @ 012fc5f0 size=1132 calls_out=3 calls_in=7
// strings: 

void FUN_012fc5f0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar2 = *(uint *)(param_1 + 8);
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
    iVar7 = uVar2 + iVar7 + 1;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x18);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 1;
  }
  if (*(char *)(param_1 + 0xb8) != '\x02') {
    iVar7 = iVar7 + 2;
  }
  if (*(char *)(param_1 + 0xb9) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0xba) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0xc1) != '\0') {
    iVar7 = iVar7 + 2;
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x28);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 1;
  }
  if (*(char *)(param_1 + 0xbb) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0xbc) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0xbd) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0xbe) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0xbf) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0xc0) != '\x02') {
    iVar7 = iVar7 + 3;
  }
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x38);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 2;
    if (*(char *)(param_1 + 0x4c) != '\x01') goto LAB_012fc73c;
LAB_012fc840:
    uVar2 = *(uint *)(param_1 + 0x48);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 2;
    if (*(char *)(param_1 + 0x5c) != '\x01') goto LAB_012fc748;
LAB_012fc87c:
    uVar2 = *(uint *)(param_1 + 0x58);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 2;
    if (*(char *)(param_1 + 0x6c) != '\x01') goto LAB_012fc754;
LAB_012fc8b8:
    uVar2 = *(uint *)(param_1 + 0x68);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 2;
    if (*(char *)(param_1 + 0x7c) != '\x01') goto LAB_012fc760;
LAB_012fc8f4:
    uVar2 = *(uint *)(param_1 + 0x78);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 2;
    if (*(char *)(param_1 + 0x8c) != '\x01') goto LAB_012fc76c;
LAB_012fc930:
    uVar2 = *(uint *)(param_1 + 0x88);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 2;
    cVar1 = *(char *)(param_1 + 0x9c);
  }
  else {
    if (*(char *)(param_1 + 0x4c) == '\x01') goto LAB_012fc840;
LAB_012fc73c:
    if (*(char *)(param_1 + 0x5c) == '\x01') goto LAB_012fc87c;
LAB_012fc748:
    if (*(char *)(param_1 + 0x6c) == '\x01') goto LAB_012fc8b8;
LAB_012fc754:
    if (*(char *)(param_1 + 0x7c) == '\x01') goto LAB_012fc8f4;
LAB_012fc760:
    if (*(char *)(param_1 + 0x8c) == '\x01') goto LAB_012fc930;
LAB_012fc76c:
    cVar1 = *(char *)(param_1 + 0x9c);
  }
  if (cVar1 == '\x01') {
    uVar2 = *(uint *)(param_1 + 0x98);
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
    iVar7 = uVar2 + iVar3 + iVar7 + 2;
    uVar5 = *(uint *)(param_1 + 0xa8);
    uVar2 = *(uint *)(param_1 + 0xac);
    if (uVar5 < uVar2) goto LAB_012fc9ac;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xa8);
    uVar2 = *(uint *)(param_1 + 0xac);
    if (uVar5 < uVar2) {
LAB_012fc9ac:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar2,uVar5,&DAT_01890988);
    }
  }
  if (uVar2 != 0) {
    iVar6 = *(int *)(param_1 + 0xa4);
    iVar3 = uVar2 * 0x78;
    do {
      uVar2 = FUN_012fa894(iVar6);
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
      iVar6 = iVar6 + 0x78;
      iVar3 = iVar3 + -0x78;
      iVar7 = iVar7 + uVar2 + iVar4 + 2;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_01337c54(*(undefined4 *)(param_1 + 0xb0));
  *(int *)(param_1 + 0xb4) = iVar3 + iVar7;
  return;
}

