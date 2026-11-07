// FUN_00947710 @ 00947710 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_00947710(int *param_1)

{
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  FUN_00963860(local_28);
  if (local_28[0] != 2) {
    if ((local_28[0] & 1) == 0) {
      *param_1 = -0x80000000;
      return;
    }
    FUN_00947854(&local_20,local_24);
    if (local_20 != -0x80000000) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = iStack_18;
      return;
    }
    local_24 = local_1c;
  }
  *param_1 = -0x7fffffff;
  param_1[1] = local_24;
  return;
}

