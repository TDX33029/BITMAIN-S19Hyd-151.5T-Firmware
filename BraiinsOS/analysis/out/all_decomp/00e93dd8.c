// FUN_00e93dd8 @ 00e93dd8 size=156 calls_out=4 calls_in=1
// strings: 

void FUN_00e93dd8(undefined4 *param_1)

{
  undefined4 uVar1;
  int local_f4;
  undefined4 local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_005e89cc(&local_f4);
  if (local_f4 == -0x80000000) {
    *param_1 = 1;
    param_1[1] = local_f0;
    return;
  }
  FUN_0110e108(&local_e8,&local_f4);
  if (local_e8 == 1) {
    local_20 = local_e4;
    uStack_1c = uStack_e0;
    uStack_18 = uStack_dc;
    uVar1 = FUN_00ea02c0(&local_20);
    param_1[1] = uVar1;
    *param_1 = 1;
    return;
  }
  FUN_016dd1aa(param_1 + 2,&uStack_e0,0xc0);
  *param_1 = 0;
  return;
}

