// FUN_015205d8 @ 015205d8 size=124 calls_out=1 calls_in=0
// strings: 

void FUN_015205d8(int *param_1)

{
  short *in_stack_00000000;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*in_stack_00000000 != 4) {
    FUN_0151f954();
    return;
  }
  FUN_0151f954(&local_30);
  if (local_30 == -0x7fffffd7) {
    *param_1 = -0x7fffffd7;
    param_1[1] = iStack_2c;
    param_1[2] = iStack_28;
    param_1[3] = iStack_24;
    param_1[4] = iStack_20;
    return;
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  param_1[3] = iStack_24;
  param_1[4] = iStack_20;
  param_1[5] = local_1c;
  param_1[6] = local_18;
  param_1[7] = local_14;
  return;
}

