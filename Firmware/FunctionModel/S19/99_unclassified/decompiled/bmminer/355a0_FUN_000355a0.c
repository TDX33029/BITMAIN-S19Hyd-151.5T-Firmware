// FUN_000355a0 @ 000355a0  size=136  callers=0
// program: bmminer


void FUN_000355a0(undefined1 *param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_00033e70(&local_24);
  *param_1 = 0x76;
  param_1[1] = 0xa9;
  param_1[2] = 0x14;
  FUN_00035430(param_1 + 3,(int)&local_24 + 1,0x14,"util.c","address_to_pubkeyhash",0x3c6);
  param_1[0x17] = 0x88;
  param_1[0x18] = 0xac;
  return;
}

