// FUN_016f6888 @ 016f6888 size=68 calls_out=1 calls_in=5
// strings: 

void FUN_016f6888(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 local_14;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = CONCAT31(local_14._1_3_,local_18 == 0);
  FUN_016f6050(&local_20);
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}

