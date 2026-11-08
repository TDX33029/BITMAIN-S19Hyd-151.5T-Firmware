// FUN_013f9dd4 @ 013f9dd4 size=64 calls_out=1 calls_in=3
// strings: 

void FUN_013f9dd4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  undefined4 local_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  local_10 = param_2[2];
  local_c = CONCAT31(local_c._1_3_,local_10 == 0);
  FUN_013f9548(&local_18);
  *param_1 = local_18;
  param_1[1] = uStack_14;
  param_1[2] = local_10;
  param_1[3] = local_c;
  return;
}

