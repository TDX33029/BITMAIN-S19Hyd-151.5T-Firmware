// FUN_01316ef8 @ 01316ef8 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_01316ef8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_013171b0(&local_20);
  if (local_20 == 4) {
    FUN_0130c068(param_2);
    FUN_0130cbfc(&local_20,param_2,param_3);
    if (local_20 == 4) {
      *param_1 = 4;
      return;
    }
  }
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}

