// FUN_0135b9bc @ 0135b9bc size=172 calls_out=3 calls_in=5
// strings: 

void FUN_0135b9bc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_4c [3];
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  int local_20;
  uint *local_1c;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    local_40 = param_1[1];
    local_2c = param_1[2];
    local_38 = 0;
    local_4c[1] = 0;
    local_4c[2] = iVar3;
    local_34 = iVar3;
    local_30 = local_40;
  }
  local_4c[0] = (uint)(iVar3 != 0);
  local_3c = local_4c[0];
  while( true ) {
    FUN_00a40f64(local_28,local_4c);
    iVar1 = local_20;
    iVar3 = local_28[0];
    if (local_28[0] == 0) break;
    iVar2 = local_28[0] + local_20 * 0xc;
    local_1c = local_4c;
    if (*(int *)(iVar2 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x110));
    }
    FUN_013586f4(iVar3 + iVar1 * 0x18);
  }
  return;
}

