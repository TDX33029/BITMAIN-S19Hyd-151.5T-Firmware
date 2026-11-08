// FUN_0002045c @ 0002045c  size=64  callers=1
// program: cgminer


void FUN_0002045c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  lldiv_t local_20;
  
  lldiv(&local_20,CONCAT44(param_4,param_3),1000000);
  *param_1 = (undefined4)local_20.quot;
  param_1[1] = (int)local_20.rem * 1000;
  return;
}

