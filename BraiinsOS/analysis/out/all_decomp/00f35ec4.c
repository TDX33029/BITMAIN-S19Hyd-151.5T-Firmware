// FUN_00f35ec4 @ 00f35ec4 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_00f35ec4(undefined4 *param_1,char *param_2)

{
  int local_10;
  undefined4 local_c;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00f33f88(param_2);
    return;
  }
  FUN_00f2d284(&local_10);
  if (local_10 == 0) {
    *param_1 = 1;
    param_1[1] = local_c;
    return;
  }
  param_1[2] = local_c;
  *param_1 = 0;
  param_1[1] = local_10;
  return;
}

