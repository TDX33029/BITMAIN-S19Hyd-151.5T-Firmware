// FUN_00679bd0 @ 00679bd0 size=156 calls_out=2 calls_in=1
// strings: 

void FUN_00679bd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00679a0c(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_006790fc(&local_20,*param_2);
    if (local_20 == 0) {
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = local_18;
      param_1[3] = local_14;
      return;
    }
  }
  param_1[1] = 0;
  *param_1 = 2;
  param_1[2] = local_1c;
  return;
}

