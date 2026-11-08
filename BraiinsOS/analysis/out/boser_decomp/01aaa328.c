// FUN_01aaa328 @ 01aaa328 size=176 calls_out=0 calls_in=850
// strings: 

void FUN_01aaa328(undefined4 *param_1,undefined4 param_2,code *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 *local_20;
  code *local_1c;
  
  local_3c = *param_4;
  local_38 = param_4[1];
  local_2c = &local_20;
  local_34 = param_4[2];
  local_44 = param_1[0xd];
  local_30 = &DAT_00590e5f;
  uStack_5c = *param_1;
  uStack_58 = param_1[1];
  local_50 = param_1[0xb];
  local_4c = param_1[0xc];
  local_40 = param_1[0xe];
  local_48 = 1;
  if (local_44 == 0) {
    local_48 = 2;
  }
  local_28 = param_5;
  local_54 = 1;
  local_24 = 1;
  if (local_50 == 0) {
    local_54 = 2;
  }
  local_1c = FUN_01aa9cf8;
  local_20 = &local_28;
  (*param_3)(param_2,&uStack_5c);
  return;
}

