// FUN_00f09574 @ 00f09574 size=856 calls_out=1 calls_in=2
// strings: 

void FUN_00f09574(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_6 == 0 &&
      (param_5 != 0 || param_5 < (param_4 != 0 || param_4 < (0xfa < param_3))) <= param_6) {
    iVar1 = param_1[2];
    if (*param_1 == iVar1) {
      FUN_00edff4c(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    *(char *)(param_1[1] + iVar1) = (char)param_3;
    param_1[2] = iVar1 + 1;
    return;
  }
  if (param_6 == 0 &&
      (param_5 != 0 || param_5 < (param_4 != 0 || param_4 < (0xffff < param_3))) <= param_6) {
    iVar1 = param_1[2];
    if (*param_1 == iVar1) {
      FUN_00edff4c(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar1) = 0xfb;
    iVar1 = iVar1 + 1;
    param_1[2] = iVar1;
    if ((uint)(*param_1 - iVar1) < 2) {
      FUN_00edff4c(param_1,iVar1,2,1,1);
      iVar1 = param_1[2];
    }
    param_1[2] = iVar1 + 2;
    *(short *)(param_1[1] + iVar1) = (short)param_3;
    return;
  }
  if (param_6 == 0 && (param_5 != 0 || param_5 < (param_4 != 0)) <= param_6) {
    iVar1 = param_1[2];
    if (*param_1 == iVar1) {
      FUN_00edff4c(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar1) = 0xfc;
    iVar1 = iVar1 + 1;
    param_1[2] = iVar1;
    if ((uint)(*param_1 - iVar1) < 4) {
      FUN_00edff4c(param_1,iVar1,4,1,1);
      iVar1 = param_1[2];
    }
    *(uint *)(param_1[1] + iVar1) = param_3;
    param_1[2] = iVar1 + 4;
    return;
  }
  if (param_6 == 0 && (param_5 != 0) <= param_6) {
    iVar1 = param_1[2];
    if (*param_1 == iVar1) {
      FUN_00edff4c(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar1) = 0xfd;
    iVar1 = iVar1 + 1;
    param_1[2] = iVar1;
    if ((uint)(*param_1 - iVar1) < 8) {
      FUN_00edff4c(param_1,iVar1,8,1,1);
      iVar1 = param_1[2];
    }
    iVar2 = param_1[1];
    param_1[2] = iVar1 + 8;
    *(uint *)(iVar2 + iVar1) = param_3;
    ((uint *)(iVar2 + iVar1))[1] = param_4;
    return;
  }
  iVar1 = param_1[2];
  if (*param_1 == iVar1) {
    FUN_00edff4c(param_1,iVar1,1,1,1);
    iVar1 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar1) = 0xfe;
  iVar1 = iVar1 + 1;
  param_1[2] = iVar1;
  if ((uint)(*param_1 - iVar1) < 0x10) {
    FUN_00edff4c(param_1,iVar1,0x10,1,1);
    iVar1 = param_1[2];
  }
  param_1[2] = iVar1 + 0x10;
  puVar3 = (uint *)(param_1[1] + iVar1);
  *puVar3 = param_3;
  puVar3[3] = param_6;
  puVar3[2] = param_5;
  puVar3[1] = param_4;
  return;
}

