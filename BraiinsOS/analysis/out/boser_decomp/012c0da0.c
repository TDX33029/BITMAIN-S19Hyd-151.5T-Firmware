// FUN_012c0da0 @ 012c0da0 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_012c0da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char local_18;
  undefined1 local_17;
  undefined4 local_14;
  
  FUN_012c06fc(&local_18,param_3,param_4,param_5,param_6);
  if (local_18 == '\x01') {
    *param_1 = 0;
    param_1[1] = local_14;
    return;
  }
  FUN_012b1fd8(param_1,local_17);
  return;
}

