// FUN_0126f780 @ 0126f780 size=160 calls_out=2 calls_in=1
// strings: 

void FUN_0126f780(int *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  FUN_0126f3c0(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    FUN_0126fd28(&local_20,*param_2);
    if (local_20 != 2 || local_1c != 0) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = local_18;
      param_1[3] = iStack_14;
      return;
    }
    local_1c = local_18;
  }
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = local_1c;
  return;
}

