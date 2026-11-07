// FUN_0149e5c4 @ 0149e5c4 size=684 calls_out=13 calls_in=2
// strings: 

void FUN_0149e5c4(uint *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < *param_1) {
    iVar1 = *param_1 - 2;
  }
  switch(iVar1) {
  case 0:
    if (-1 < (int)param_1[0x36]) {
      FUN_019bb7e0(param_1[0x36],param_1[0x37]);
    }
    if (param_1[0x30] != 0x80000000) {
      FUN_019bb7e0(param_1[0x30],param_1[0x31]);
    }
    FUN_0149eb78(param_1 + 0x39);
    FUN_0094a31c(param_1 + 0x24);
    if (param_1[0x33] != 0x80000000) {
      FUN_019bb7e0(param_1[0x33],param_1[0x34]);
    }
    FUN_01457ca4(param_1 + 0x10);
    FUN_00949b70(param_1 + 0x27);
    FUN_01457ca4(param_1 + 0x16);
    FUN_0094a36c(param_1 + 6);
    FUN_019bb7e0(param_1[0x2a],param_1[0x2b]);
    FUN_019bb7e0(param_1[0x2d],param_1[0x2e]);
    param_1 = param_1 + 0x1c;
    if (*param_1 == 0) {
      return;
    }
    goto LAB_0149e874;
  case 1:
    if (-1 < (int)param_1[0x55]) {
      FUN_019bb7e0(param_1[0x55],param_1[0x56]);
    }
    if (param_1[0x46] != 0x80000000) {
      FUN_019bb7e0(param_1[0x46],param_1[0x47]);
    }
    if (-0x7fffffff < (int)param_1[0x52]) {
      FUN_019bb7e0(param_1[0x52],param_1[0x53]);
    }
    if (param_1[0x49] != 0x80000000) {
      FUN_019bb7e0(param_1[0x49],param_1[0x4a]);
    }
    FUN_01457ca4(param_1 + 0x26);
    if (param_1[0x4c] != 0x80000000) {
      FUN_00949b70();
    }
    FUN_006a41c0(param_1 + 0x3a);
    FUN_01ad7ee4(param_1 + 0x58);
    FUN_0149ebb4(param_1 + 0x5b);
    FUN_0149ebfc(param_1 + 0x5c);
    FUN_01457ca4(param_1 + 0x2c);
    FUN_00949b70(param_1 + 0x3d);
    FUN_0094a36c(param_1 + 0x1c);
    if (param_1[0x4f] != 0x80000000) {
      FUN_019bb7e0(param_1[0x4f],param_1[0x50]);
    }
    if (param_1[0x32] != 0) {
      FUN_01ada488();
    }
    FUN_019bb7e0(param_1[0x40],param_1[0x41]);
    FUN_019bb7e0(param_1[0x43],param_1[0x44]);
    return;
  case 2:
    FUN_0145742c(param_1 + 0x2d);
    if (-1 < (int)param_1[0x24]) {
      FUN_019bb7e0(param_1[0x24],param_1[0x25]);
    }
    if (param_1[0x27] != 0x80000000) {
      FUN_019bb7e0(param_1[0x27],param_1[0x28]);
    }
    if (param_1[0x2a] != 0x80000000) {
      FUN_019bb7e0(param_1[0x2a],param_1[0x2b]);
    }
    FUN_01457ca4(param_1 + 10);
    FUN_01457ca4(param_1 + 0x10);
    FUN_00949b70(param_1 + 0x30);
    FUN_0094a27c(param_1 + 0x16);
    break;
  case 3:
    FUN_0145742c(param_1 + 0x2d);
    if (-1 < (int)param_1[0x24]) {
      FUN_019bb7e0(param_1[0x24],param_1[0x25]);
    }
    if (param_1[0x27] != 0x80000000) {
      FUN_019bb7e0(param_1[0x27],param_1[0x28]);
    }
    if (param_1[0x2a] != 0x80000000) {
      FUN_019bb7e0(param_1[0x2a],param_1[0x2b]);
    }
    FUN_01457ca4(param_1 + 10);
    FUN_01457ca4(param_1 + 0x10);
    FUN_00949b70(param_1 + 0x30);
    FUN_0094a27c(param_1 + 0x16);
    break;
  default:
    FUN_0145742c(param_1 + 0x2a);
    if (-1 < (int)param_1[0x24]) {
      FUN_019bb7e0(param_1[0x24],param_1[0x25]);
    }
    if (param_1[0x27] != 0x80000000) {
      FUN_019bb7e0(param_1[0x27],param_1[0x28]);
    }
    FUN_01457ca4(param_1 + 10);
    FUN_01457ca4(param_1 + 0x10);
    FUN_00949b70(param_1 + 0x2d);
    FUN_0094a27c(param_1 + 0x16);
  }
  param_1 = param_1 + 2;
  if (*param_1 == 0) {
    return;
  }
LAB_0149e874:
  FUN_01ada488(param_1);
  return;
}

