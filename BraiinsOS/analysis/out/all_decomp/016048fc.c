// FUN_016048fc @ 016048fc size=108 calls_out=1 calls_in=1
// strings: 

void FUN_016048fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_40 = param_5;
  local_38 = param_7;
  local_34 = param_8;
  local_30 = param_9;
  local_48 = param_3;
  uStack_44 = param_4;
  FUN_015f3c24(local_28,&local_48,&local_38);
  if ((local_28[0] & 1) != 0) {
    local_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
  }
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  return;
}

