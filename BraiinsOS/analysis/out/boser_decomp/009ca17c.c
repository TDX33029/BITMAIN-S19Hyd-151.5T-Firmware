// FUN_009ca17c @ 009ca17c size=236 calls_out=3 calls_in=1
// strings: 

void FUN_009ca17c(undefined4 *param_1,int *param_2)

{
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_006666fc(&local_60,param_2[0xf],param_2[0x10]);
  if (param_2[8] == -0x80000000) {
    local_50 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_50,param_2[9],param_2[10]);
  }
  if (param_2[0xb] == -0x80000000) {
    local_40 = 0x80000000;
  }
  else {
    FUN_01318534(&local_40,param_2[0xc],param_2[0xd]);
  }
  if (*param_2 == 0) {
    local_30 = 0;
  }
  else {
    FUN_00ab8cac(&local_30,param_2);
  }
  param_1[0xe] = local_60;
  param_1[0xf] = uStack_5c;
  param_1[0x10] = uStack_58;
  param_1[8] = local_50;
  param_1[9] = uStack_4c;
  param_1[10] = uStack_48;
  param_1[0xb] = local_40;
  param_1[0xc] = uStack_3c;
  param_1[0xd] = uStack_38;
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  param_1[4] = local_20;
  param_1[5] = uStack_1c;
  param_1[6] = uStack_18;
  param_1[7] = uStack_14;
  return;
}

