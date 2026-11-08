// FUN_0168a9e8 @ 0168a9e8 size=232 calls_out=4 calls_in=0
// strings: 

void FUN_0168a9e8(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_24;
  
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_4);
  }
  if (param_4 == 0) {
    local_60 = 0;
    local_5c = 1;
  }
  else {
    local_5c = thunk_FUN_016d4a50(param_4);
    local_60 = param_4;
    if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(local_5c,param_3,param_4);
  local_24 = 0x80000003;
  local_30 = 0x80000003;
  local_3c = 0x80000003;
  local_48 = 0x80000003;
  local_54 = 0x80000003;
  local_58 = param_4;
  FUN_01681fc0(&local_b0,param_2 + 8,&local_60);
  if (local_b0 == -0x80000000) {
    *param_1 = 0x80000000;
    param_1[1] = uStack_ac;
    param_1[2] = uStack_a8;
    param_1[3] = uStack_a4;
    return;
  }
  FUN_016dd1aa(param_1,&local_b0,0x50);
  return;
}

