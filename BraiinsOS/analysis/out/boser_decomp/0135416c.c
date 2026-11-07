// FUN_0135416c @ 0135416c size=128 calls_out=3 calls_in=4
// strings: 

void FUN_0135416c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_30;
  undefined4 local_2c;
  
  FUN_01354214(&local_30);
  if ((char)local_30 == '\x03') {
    local_30 = 0;
    FUN_01354634(param_2,param_3,&local_30);
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

