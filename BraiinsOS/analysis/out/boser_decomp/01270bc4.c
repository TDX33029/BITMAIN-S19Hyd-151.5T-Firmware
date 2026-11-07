// FUN_01270bc4 @ 01270bc4 size=140 calls_out=2 calls_in=1
// strings: 

void FUN_01270bc4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_01965170(&local_38);
  if ((char)local_38 != '\x01') {
    if (local_38._1_1_ == '\0') {
      param_1[6] = 0x80000001;
      return;
    }
    FUN_01273a5c(&local_38,*param_2);
    if (local_20 != -0x7fffffff) {
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      param_1[4] = uStack_28;
      param_1[5] = local_24;
      param_1[6] = local_20;
      param_1[7] = uStack_1c;
      param_1[8] = uStack_18;
      param_1[9] = uStack_14;
      return;
    }
    local_34 = local_38;
  }
  *param_1 = local_34;
  param_1[6] = 0x80000002;
  return;
}

