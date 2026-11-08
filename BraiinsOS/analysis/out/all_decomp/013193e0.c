// FUN_013193e0 @ 013193e0 size=244 calls_out=5 calls_in=0
// strings: 

void FUN_013193e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_24 = 0;
  local_28 = 0;
  local_2c = 1;
  local_40 = 0x80000000;
  local_3c = param_3;
  FUN_01319124(&local_20);
  if (local_20 == 4) {
    FUN_0130c8b0(param_2);
    FUN_0130dbfc(&local_20,param_2,&local_40);
    if (local_20 == 4) {
      if (0x80000000 < local_40) {
        *param_1 = 4;
        return;
      }
      FUN_013287bc(&local_20,&local_40);
      if (local_20 == 4) {
        *param_1 = 4;
        goto joined_r0x013194b8;
      }
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
joined_r0x013194b8:
  if (((int)local_40 < 0) || (local_40 == 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_3c);
  return;
}

