// FUN_0131d6c4 @ 0131d6c4 size=164 calls_out=2 calls_in=0
// strings: 

void FUN_0131d6c4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = 0xffffffff;
  local_20 = 0xffffffff;
  local_24 = 0;
  local_28 = 0;
  local_c = 100;
  local_10 = 0;
  local_18 = 0;
  local_50 = 1;
  local_4c = param_3;
  local_48 = param_4;
  local_30 = param_3;
  local_2c = param_4;
  local_14 = param_4;
  FUN_0131ca50(param_1,param_2,&local_50);
  if (local_50 == 0) {
    if (local_4c == 0) {
      (**(code **)(local_44 + 0x30))(local_48,local_18);
      return;
    }
    if (local_48 != 0) {
      thunk_FUN_016d3fb4();
      return;
    }
  }
  return;
}

