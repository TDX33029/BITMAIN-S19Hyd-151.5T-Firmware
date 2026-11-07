// FUN_00f09308 @ 00f09308 size=620 calls_out=1 calls_in=19
// strings: 

void FUN_00f09308(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0 && (0xfa < param_3) <= param_4) {
    iVar1 = param_1[2];
    if (*param_1 == iVar1) {
      FUN_00edff4c(param_1,iVar1,1,1,1);
      iVar1 = param_1[2];
    }
    *(char *)(param_1[1] + iVar1) = (char)param_3;
    param_1[2] = iVar1 + 1;
    return;
  }
  if (param_4 == 0 && (0xffff < param_3) <= param_4) {
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
  if (param_4 == 0) {
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

