// FUN_013931a4 @ 013931a4 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_013931a4(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_30;
  undefined4 local_2c;
  
  FUN_0139324c(&local_30);
  if ((char)local_30 == '\x03') {
    local_30 = 0;
    FUN_0139366c(param_2,param_3,&local_30);
    if (local_30 != 0) {
      (**(code **)(local_30 + 0xc))(local_2c);
    }
    local_30._0_1_ = '\x03';
  }
  else {
    FUN_01bed4e2(param_1 + 1,(uint)&local_30 | 1,0x17);
  }
  *param_1 = (char)local_30;
  return;
}

