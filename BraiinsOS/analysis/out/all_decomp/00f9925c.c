// FUN_00f9925c @ 00f9925c size=152 calls_out=2 calls_in=0
// strings: 

void FUN_00f9925c(int *param_1)

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
    FUN_00f94874(local_1c,local_40);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0x10;
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 8));
    }
  }
  return;
}

