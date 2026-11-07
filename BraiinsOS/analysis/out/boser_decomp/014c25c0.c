// FUN_014c25c0 @ 014c25c0 size=132 calls_out=3 calls_in=1
// strings: 

void FUN_014c25c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 - 3U < 2) {
    return;
  }
  if (*param_1 == 2) {
    FUN_019bb7e0(param_1[5],param_1[6]);
    if (param_1[0x17] != 2) {
      FUN_019bb7e0(param_1[0x1b],param_1[0x1c]);
    }
    iVar2 = param_1[0x13];
    iVar1 = 0x50;
  }
  else {
    FUN_019bb7e0(param_1[4],param_1[5]);
    if (param_1[0x27] != 2) {
      FUN_019bb7e0(param_1[0x2b],param_1[0x2c]);
    }
    FUN_014c9d78(param_1 + 0x12);
    iVar2 = param_1[0x23];
    iVar1 = 0x90;
  }
  if (iVar2 == 0) {
    return;
  }
  FUN_01960c70((int)param_1 + iVar1);
  return;
}

