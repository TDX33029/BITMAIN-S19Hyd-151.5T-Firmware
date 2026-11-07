// FUN_01495f30 @ 01495f30 size=96 calls_out=1 calls_in=7
// strings: 

void FUN_01495f30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_38 = param_5;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  local_40 = param_3;
  uStack_3c = param_4;
  FUN_019ac248(local_20,&local_40,&local_30);
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

