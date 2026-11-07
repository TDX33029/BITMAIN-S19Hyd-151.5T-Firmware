// FUN_00a5bd9c @ 00a5bd9c size=184 calls_out=2 calls_in=0
// strings: 

void FUN_00a5bd9c(int *param_1)

{
  int iVar1;
  uint local_48 [3];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  int local_1c;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_3c = param_1[1];
    local_28 = param_1[2];
    local_34 = 0;
    local_48[1] = 0;
    local_48[2] = iVar1;
    local_30 = iVar1;
    local_2c = local_3c;
  }
  local_48[0] = (uint)(iVar1 != 0);
  local_38 = local_48[0];
  while( true ) {
    FUN_00a5bbe4(local_24,local_48);
    if (local_24[0] == 0) break;
    iVar1 = local_24[0] + local_1c * 0xc;
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 8));
    }
    if ((*(uint *)(iVar1 + 0x88) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x8c));
    }
  }
  return;
}

