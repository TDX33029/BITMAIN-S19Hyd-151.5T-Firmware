// FUN_00d40628 @ 00d40628 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_00d40628(int param_1)

{
  undefined4 extraout_r1;
  undefined4 local_1e0 [58];
  undefined4 local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  
  local_1e0[0] = 2;
  FUN_00f31e70(param_1,local_1e0);
  local_f0 = *(undefined4 *)(param_1 + 8);
  local_ec = *(undefined4 *)(param_1 + 0xc);
  local_e8 = 0;
  local_f8[0] = 1;
  local_e4 = extraout_r1;
  FUN_00f31e70(param_1,local_f8);
  return;
}

