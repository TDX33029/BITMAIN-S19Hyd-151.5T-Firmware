// FUN_0062aa6c @ 0062aa6c size=128 calls_out=1 calls_in=1
// strings: 

void FUN_0062aa6c(int *param_1,int param_2,int param_3)

{
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_20 = 0;
  local_14 = 1;
  local_2c = 0x3a;
  local_18 = 0x3a;
  local_28 = param_2;
  local_24 = param_3;
  local_1c = param_3;
  FUN_0062a644(&local_38,&local_2c);
  if (local_38 == 1) {
    param_1[1] = iStack_34;
    param_1[2] = param_2 + iStack_30;
    param_1[3] = param_3 - iStack_30;
    *param_1 = param_2;
    return;
  }
  *param_1 = 0;
  return;
}

