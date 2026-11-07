// FUN_00034574 @ 00034574  size=56  callers=0
// program: bmminer


void FUN_00034574(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  lldiv_t local_20;
  
  lldiv(&local_20,CONCAT44(param_4,param_3),1000000);
  *param_1 = (undefined4)local_20.quot;
  param_1[1] = (undefined4)local_20.rem;
  return;
}

