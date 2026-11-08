// FUN_013cf7f0 @ 013cf7f0 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_013cf7f0(int *param_1)

{
  int iVar1;
  uint local_2c [3];
  int local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    local_20 = param_1[1];
    local_c = param_1[2];
    local_18 = 0;
    local_2c[1] = 0;
    local_2c[2] = iVar1;
    local_14 = iVar1;
    local_10 = local_20;
  }
  local_2c[0] = (uint)(iVar1 != 0);
  local_1c = local_2c[0];
  FUN_013cf850(local_2c);
  return;
}

