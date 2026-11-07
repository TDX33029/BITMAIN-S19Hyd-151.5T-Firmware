// FUN_01134790 @ 01134790 size=176 calls_out=5 calls_in=1
// strings: 

void FUN_01134790(undefined4 *param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
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
  uVar1 = FUN_01139000(&local_1c);
  if (uVar1 < 0x1000000000000) {
    *param_1 = 0;
    *(ulonglong *)(param_1 + 1) = uVar1;
    return;
  }
  param_1[3] = 0xffff;
  thunk_FUN_016d3fb4();
  *param_1 = 1;
  param_1[1] = (int)(uVar1 >> 0x20);
  param_1[2] = 0;
  return;
}

