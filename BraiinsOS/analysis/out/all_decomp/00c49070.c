// FUN_00c49070 @ 00c49070 size=140 calls_out=2 calls_in=4
// strings: 

void FUN_00c49070(int *param_1)

{
  int iVar1;
  uint local_40 [3];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  int local_14;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_34 = param_1[1];
    local_20 = param_1[2];
    local_2c = 0;
    local_40[1] = 0;
    local_40[2] = iVar1;
    local_28 = iVar1;
    local_24 = local_34;
  }
  local_40[0] = (uint)(iVar1 != 0);
  local_30 = local_40[0];
  while( true ) {
    FUN_00c3b3e0(local_1c,local_40);
    if (local_1c[0] == 0) break;
    FUN_00bd20f4(local_1c[0] + local_14 * 0x48);
  }
  return;
}

