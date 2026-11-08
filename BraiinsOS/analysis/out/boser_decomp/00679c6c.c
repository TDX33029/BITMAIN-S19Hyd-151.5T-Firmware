// FUN_00679c6c @ 00679c6c size=136 calls_out=2 calls_in=1
// strings: 

void FUN_00679c6c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  FUN_00679a0c(&local_20);
  if ((char)local_20 != '\x01') {
    if (local_20._1_1_ == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_0069c298(&local_20,*param_2);
    if (local_20 != 0) {
      param_1[1] = local_20;
      param_1[2] = local_1c;
      param_1[3] = uStack_18;
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 1;
  param_1[1] = local_1c;
  return;
}

