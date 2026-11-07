// FUN_00d9cdf4 @ 00d9cdf4 size=212 calls_out=4 calls_in=0
// strings: 

void FUN_00d9cdf4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_34 = thunk_FUN_016d4a50(0x80);
  if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_30 = 0;
  local_24 = 2;
  local_38 = 0x80;
  local_1c = 0;
  local_20 = 0;
  local_28 = "  ";
  local_2c = (undefined1 *)&local_38;
  iVar1 = FUN_00e5d610(&local_2c,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = local_34;
    if (local_38 != -0x80000000) {
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      return;
    }
  }
  else if (local_38 != 0) {
    thunk_FUN_016d3fb4(local_34);
    *param_1 = -0x80000000;
    param_1[1] = iVar1;
    return;
  }
  *param_1 = -0x80000000;
  param_1[1] = iVar1;
  return;
}

