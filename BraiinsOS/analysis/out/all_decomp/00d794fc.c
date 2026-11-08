// FUN_00d794fc @ 00d794fc size=116 calls_out=2 calls_in=0
// strings: 

void FUN_00d794fc(undefined4 *param_1,int *param_2)

{
  int local_20;
  int local_1c;
  int iStack_18;
  undefined1 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined1 *)&local_20;
  if (*param_2 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    local_20 = *param_2;
    local_1c = param_2[1];
    iStack_18 = param_2[2];
    local_c = &DAT_006043a8;
    FUN_00600d2c(param_1,&DAT_00578666,&local_10);
    if (local_20 != 0) {
      thunk_FUN_016d3fb4(local_1c);
      return;
    }
  }
  return;
}

