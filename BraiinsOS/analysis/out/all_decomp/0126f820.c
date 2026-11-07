// FUN_0126f820 @ 0126f820 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_0126f820(int *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  int local_1c;
  int iStack_18;
  
  FUN_0126f3c0(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = -0x7fffffff;
      return;
    }
    FUN_0126fbec(&local_20,*param_2);
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

