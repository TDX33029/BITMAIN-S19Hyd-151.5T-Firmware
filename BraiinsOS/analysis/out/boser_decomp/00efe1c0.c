// FUN_00efe1c0 @ 00efe1c0 size=136 calls_out=2 calls_in=8
// strings: 

void FUN_00efe1c0(char param_1,undefined4 param_2)

{
  byte in_Q;
  double in_d0;
  byte local_1a;
  undefined1 local_19;
  
  local_1a = param_1 << 3 | 2;
  FUN_01284394(param_2,&local_1a,1);
  local_19 = 0;
  if (in_d0 != 0.0) {
    local_19 = 9;
  }
  FUN_01284394(param_2,&local_19,1);
  if ((((byte)((in_d0 == 0.0) << 3 | in_Q) & 0x1f) >> 3 & 1) == 0) {
    FUN_01016b28(1,param_2);
    return;
  }
  return;
}

