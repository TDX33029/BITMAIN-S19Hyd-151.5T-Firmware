// FUN_0143d144 @ 0143d144 size=228 calls_out=0 calls_in=0
// strings: 

void FUN_0143d144(uint *param_1,int *param_2)

{
  undefined *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28 [2];
  int local_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  if (*param_1 < 2) {
    return;
  }
  if (*param_2 == 0) {
    (**(code **)(param_2[2] + 0x14))(local_28,param_2[1]);
    if ((local_28[0] & 1) != 0) goto LAB_0143d1b0;
  }
  else {
    local_20 = param_2[2];
    iStack_1c = 0;
    local_14 = 0;
    iStack_18 = local_20;
LAB_0143d1b0:
    if ((local_20 == 0 && iStack_18 == 0) && (iStack_1c == 0 && local_14 == 0)) {
      local_2c = 0;
      local_30 = 0;
      local_34 = 1;
      local_38 = &DAT_018a3d34;
      goto LAB_0143d20c;
    }
  }
  if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*param_2)(&local_38,param_2 + 3,param_2[1],param_2[2]);
LAB_0143d20c:
  *param_1 = 0;
  param_1[1] = (uint)local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  return;
}

