// FUN_01225304 @ 01225304 size=148 calls_out=2 calls_in=2
// strings: 

void FUN_01225304(int *param_1,undefined4 *param_2)

{
  undefined4 local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_01965170(&local_30);
  if ((char)local_30 != '\x01') {
    if (local_30._1_1_ == '\0') {
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    FUN_01248c20(&local_30,*param_2);
    if (local_30 != 5 || local_2c != 0) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      param_1[3] = iStack_24;
      param_1[4] = iStack_20;
      param_1[5] = iStack_1c;
      return;
    }
    local_2c = local_28;
  }
  *param_1 = 6;
  param_1[1] = 0;
  param_1[2] = local_2c;
  return;
}

