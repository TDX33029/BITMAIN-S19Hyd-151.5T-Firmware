// FUN_0094e4d8 @ 0094e4d8 size=108 calls_out=1 calls_in=4
// strings: 

void FUN_0094e4d8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  
  if (param_2[1] == 0) {
    local_18 = &DAT_3b9aca00;
  }
  else {
    param_2[1] = param_2[1] + -1;
    FUN_00a8814c(&local_20,*param_2);
    if (local_18 == &DAT_3b9aca00) {
      *param_1 = local_20;
      local_18 = (undefined1 *)0x3b9aca01;
    }
    else {
      *param_1 = local_20;
      param_1[1] = uStack_1c;
    }
  }
  param_1[2] = local_18;
  return;
}

