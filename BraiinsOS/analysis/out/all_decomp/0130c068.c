// FUN_0130c068 @ 0130c068 size=760 calls_out=3 calls_in=10
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0130c068(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((char)param_1[7] == '\x01') {
    uVar2 = param_1[6];
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
    iVar4 = uVar2 + iVar4 + 1;
  }
  if (*param_1 == 1) {
    uVar2 = param_1[1];
    iVar3 = 2;
    if (0x7f < uVar2) {
      iVar3 = 3;
    }
    if (0x3fff < uVar2) {
      iVar3 = 4;
      if (0x1fffff < uVar2) {
        iVar3 = 5;
      }
      if ((0xfffffff < uVar2) && (iVar3 = 0xb, uVar2 < 0x80000000)) {
        iVar3 = 6;
      }
    }
    iVar4 = iVar3 + iVar4;
  }
  if (*(char *)((int)param_1 + 0x71) != '\0') {
    iVar4 = iVar4 + 2;
  }
  if (*(char *)((int)param_1 + 0x72) != '\0') {
    iVar4 = iVar4 + 2;
  }
  if ((char)param_1[0xb] == '\x01') {
    uVar2 = param_1[10];
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
    iVar4 = uVar2 + iVar3 + iVar4 + 1;
    cVar1 = (char)param_1[0xf];
  }
  else {
    cVar1 = (char)param_1[0xf];
  }
  if (cVar1 == '\x01') {
    uVar2 = param_1[0xe];
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
    iVar4 = uVar2 + iVar3 + iVar4 + 1;
    cVar1 = (char)param_1[0x13];
  }
  else {
    cVar1 = (char)param_1[0x13];
  }
  if (cVar1 == '\x01') {
    uVar2 = param_1[0x12];
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
    iVar4 = uVar2 + iVar3 + iVar4 + 1;
    iVar3 = param_1[2];
  }
  else {
    iVar3 = param_1[2];
  }
  if (iVar3 == 1) {
    uVar2 = param_1[3];
    iVar3 = 2;
    if (0x7f < uVar2) {
      iVar3 = 3;
    }
    if (0x3fff < uVar2) {
      iVar3 = 4;
      if (0x1fffff < uVar2) {
        iVar3 = 5;
      }
      if ((0xfffffff < uVar2) && (iVar3 = 0xb, uVar2 < 0x80000000)) {
        iVar3 = 6;
      }
    }
    iVar4 = iVar3 + iVar4;
    cVar1 = (char)param_1[0x17];
  }
  else {
    cVar1 = (char)param_1[0x17];
  }
  if (cVar1 == '\x01') {
    uVar2 = param_1[0x16];
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
    iVar4 = uVar2 + iVar3 + iVar4 + 1;
    cVar1 = (char)param_1[0x19];
  }
  else {
    cVar1 = (char)param_1[0x19];
  }
  if (cVar1 == '\x01') {
    if (param_1[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar2 = FUN_012ff54c();
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
    iVar4 = iVar4 + uVar2 + iVar3 + 1;
  }
  if ((char)param_1[0x1c] != '\x02') {
    iVar4 = iVar4 + 3;
  }
  iVar3 = FUN_01337c54(param_1[0x1a]);
  param_1[0x1b] = iVar4 + iVar3;
  return;
}

