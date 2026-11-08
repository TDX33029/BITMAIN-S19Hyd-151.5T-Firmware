// FUN_0123d7b0 @ 0123d7b0 size=192 calls_out=1 calls_in=1
// strings: 

void FUN_0123d7b0(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  local_14 = param_1[2];
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  if (local_1c == -0x80000000) {
    if (*(int *)(local_18 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
  }
  else if (local_14 == 0) {
    *param_1 = local_1c;
    param_1[1] = local_18;
    param_1[2] = 0;
    return;
  }
  uVar1 = 0xffffffff;
  if (param_4 < 0x20) {
    uVar1 = param_3 >> 5 | param_4 << 0x1b;
  }
  FUN_0127b2d8(&local_28,&local_1c,uVar1,param_3 & 0x1f);
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = local_20;
  return;
}

