// FUN_0130ed9c @ 0130ed9c size=208 calls_out=3 calls_in=0
// strings: 

void FUN_0130ed9c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_38;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  local_20 = 0;
  local_24 = 1;
  local_38 = 0x80000000;
  local_34 = param_3;
  FUN_0130e64c(&local_18,param_2,&local_38);
  if (local_18 == 4) {
    if (0x80000000 < local_38) {
      *param_1 = 4;
      return;
    }
    FUN_013287bc(&local_18,&local_38);
    if (local_18 == 4) {
      *param_1 = 4;
      goto joined_r0x0130ee50;
    }
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
joined_r0x0130ee50:
  if (((int)local_38 < 0) || (local_38 == 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_34);
  return;
}

