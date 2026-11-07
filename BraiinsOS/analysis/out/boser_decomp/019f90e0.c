// FUN_019f90e0 @ 019f90e0 size=116 calls_out=2 calls_in=4
// strings: 

void FUN_019f90e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_019ac130(&local_28,1);
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = local_20;
  local_30 = param_5;
  local_38 = param_3;
  local_34 = param_4;
  FUN_019ac248(&local_28,&local_48,&local_38);
  if ((local_28 & 1) != 0) {
    local_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
  }
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  return;
}

