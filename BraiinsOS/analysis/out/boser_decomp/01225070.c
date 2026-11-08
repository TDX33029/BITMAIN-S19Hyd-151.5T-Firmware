// FUN_01225070 @ 01225070 size=144 calls_out=2 calls_in=2
// strings: 

void FUN_01225070(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  FUN_01965170(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_01224810(&local_20,*param_2);
    if (local_20 == 0) {
      *param_1 = 1;
      param_1[1] = 0;
      *(undefined8 *)(param_1 + 2) = local_18;
      return;
    }
  }
  param_1[1] = 0;
  *param_1 = 2;
  param_1[2] = local_1c;
  return;
}

