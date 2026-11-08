// FUN_013f6ebc @ 013f6ebc size=88 calls_out=1 calls_in=0
// strings: 

void FUN_013f6ebc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint local_20 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_30 = param_5;
  uStack_2c = param_6;
  local_28 = param_7;
  FUN_019ac248(local_20,param_4 + 0x68,&local_30);
  if ((local_20[0] & 1) != 0) {
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  *param_1 = local_18;
  param_1[1] = uStack_14;
  param_1[2] = uStack_10;
  return;
}

