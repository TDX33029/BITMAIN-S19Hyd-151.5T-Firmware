// FUN_016baac4 @ 016baac4 size=108 calls_out=1 calls_in=4
// strings: 

void FUN_016baac4(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0x80000000;
  if (param_2 != 3) {
    local_1c = 4;
    local_14 = 0;
    local_18 = 0;
    local_20 = 0;
    FUN_016b67fc(&local_20,*(undefined4 *)(param_3 + 0x13c));
    local_30 = local_1c;
    uStack_2c = local_18;
    uStack_28 = local_14;
  }
  *param_1 = local_20;
  param_1[1] = local_30;
  param_1[2] = uStack_2c;
  param_1[3] = uStack_28;
  return;
}

