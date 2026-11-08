// FUN_008220f8 @ 008220f8 size=124 calls_out=2 calls_in=0
// strings: 

void FUN_008220f8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00822174(&local_34);
  if ((char)local_34 == '\x01') {
    *param_1 = 0x80000000;
    param_1[1] = local_30;
    return;
  }
  local_24 = local_34._1_1_;
  local_28 = 4;
  local_34 = 0;
  local_30 = 1;
  local_2c = 0;
  FUN_00873188(&local_20,&local_34,param_2);
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  return;
}

