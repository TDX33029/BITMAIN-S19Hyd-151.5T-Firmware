// FUN_019b0710 @ 019b0710 size=120 calls_out=2 calls_in=10
// strings: 

void FUN_019b0710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_019ac130(&local_30,1);
  local_50 = local_30;
  uStack_4c = uStack_2c;
  uStack_48 = local_28;
  local_38 = param_5;
  local_40 = param_3;
  local_3c = param_4;
  FUN_019ac248(&local_30,&local_50,&local_40);
  if ((local_30 & 1) != 0) {
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return;
}

