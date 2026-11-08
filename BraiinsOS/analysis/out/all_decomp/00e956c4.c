// FUN_00e956c4 @ 00e956c4 size=128 calls_out=4 calls_in=4
// strings: 

void FUN_00e956c4(undefined4 param_1,int param_2)

{
  int local_24;
  int local_20;
  int local_1c;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_2);
  }
  if (param_2 == 0) {
    local_24 = 0;
    local_20 = 1;
  }
  else {
    local_20 = thunk_FUN_016d4a50(param_2);
    local_24 = param_2;
    if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_2);
    }
  }
  FUN_016dd1aa(local_20,param_1,param_2);
  local_1c = param_2;
  FUN_0157ba88(&local_24);
  return;
}

