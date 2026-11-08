// FUN_00f5eea8 @ 00f5eea8 size=112 calls_out=4 calls_in=13
// strings: 

void FUN_00f5eea8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_3 == 0) {
    local_1c = 0;
    local_18 = 1;
  }
  else {
    local_18 = thunk_FUN_016d4a50(param_3);
    local_1c = param_3;
    if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(local_18,param_2,param_3);
  local_14 = param_3;
  FUN_00f5ef18(param_1,&local_1c);
  return;
}

