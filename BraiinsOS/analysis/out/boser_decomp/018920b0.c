// FUN_018920b0 @ 018920b0 size=108 calls_out=2 calls_in=2
// strings: 

void FUN_018920b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined *local_20;
  undefined4 local_1c;
  undefined **local_18;
  undefined1 local_14;
  
  local_1c = 0xd;
  local_20 = &DAT_0059a383;
  local_18 = &local_20;
  local_14 = 0;
  FUN_01898524(&local_30,param_2,param_3,&local_18);
  if (local_30 == 0) {
    *param_1 = 0;
    param_1[1] = local_2c;
    param_1[2] = uStack_28;
  }
  else {
    FUN_0189828c(param_1,local_30,local_2c);
  }
  return;
}

