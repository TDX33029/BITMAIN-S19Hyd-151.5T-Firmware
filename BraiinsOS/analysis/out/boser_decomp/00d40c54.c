// FUN_00d40c54 @ 00d40c54 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_00d40c54(int param_1)

{
  undefined4 extraout_r1;
  undefined4 local_180 [46];
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  
  local_180[0] = 2;
  FUN_00f31bdc(param_1,local_180);
  local_c0 = *(undefined4 *)(param_1 + 8);
  local_bc = *(undefined4 *)(param_1 + 0xc);
  local_b8 = 0;
  local_c8[0] = 1;
  local_b4 = extraout_r1;
  FUN_00f31bdc(param_1,local_c8);
  return;
}

