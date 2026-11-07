// FUN_0004cacc @ 0004cacc  size=136  callers=0
// program: bmminer


void FUN_0004cacc(undefined1 *param_1)

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
  FUN_0004b378(&local_24);
  *param_1 = 0x76;
  param_1[1] = 0xa9;
  param_1[2] = 0x14;
  FUN_0004c940(param_1 + 3,(int)&local_24 + 1,0x14,"util.c","address_to_pubkeyhash",0x3c6);
  param_1[0x17] = 0x88;
  param_1[0x18] = 0xac;
  return;
}

