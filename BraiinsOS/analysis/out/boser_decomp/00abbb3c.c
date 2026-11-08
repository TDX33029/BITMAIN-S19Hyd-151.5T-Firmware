// FUN_00abbb3c @ 00abbb3c size=120 calls_out=2 calls_in=1
// strings: 

void FUN_00abbb3c(int *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  int local_1c;
  int iStack_18;
  
  FUN_014db6fc(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = -0x7fffffff;
      return;
    }
    FUN_00abb634(&local_20,*param_2);
    if (local_20 != -0x7fffffff) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = iStack_18;
      return;
    }
  }
  *param_1 = -0x7ffffffe;
  param_1[1] = local_1c;
  return;
}

